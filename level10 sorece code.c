#include <stdio.h>
#include <sys/shm.h>
#include <sys/types.h>
#define BUFFSIZE 1028
/*- Shared Memory Segments 안에 bytes 1028 선언*/

int main()
{
        void *sharedMemory=(void *)0;
        int sharedMemID;
        char buf[BUFFSIZE];
        key_t keyval=7530;
        /*- 공유 메모리를 읽기 위한 key 변수*/

        sharedMemID=shmget(keyval, BUFFSIZE, IPC_CREAT | 0666);
        /*- 공유 메모리를 할당하고, 리턴 값으로 공유 메모리 id를 받아옴
          - shmget 함수 : 공유 메모리를 생성하거나 사용하는 함수이다.
          - 형식 : shmget(key_t key*, int size*, int shmflg*)
                         *key_t key  : 공유 메모리를 읽기 위한 key 변수
                          int size   : 공유 메모리 크기
                          int shmflg : 공유 메모리 옵션(IPC_CREAT*, IPC_EXCL*)
                                       *IPC_CREAT : key에 해당하는 공유 메모리가 없다면 신규로 생성하고, 있으면 접근권한을 지정해야함
                                        IPC_EXCL  : 공유 메모리가 이미 있다면 실패로 반환하고 공유메모리에 접근 불가능 */

        sharedMemory=shmat(sharedMemID, (void *)0, 0);
        /*- 프로세스에서 공유 메모리 공간을 사용할 수 있게 연결
          - shmat 함수 : 이미 할당된 메모리 공간을 다른 프로세스에서 사용할 수 있게 권한을 할당하는 함수
          - 형식 : shmat(int shmid*, const void *shmaddr*, int shmflg*);
                        *int shmid           : 공유 메모리를 생성할 때 생성된 공유 메모리의 id
                         const void *shmaddr : 공유 메모리 주소
                         int shmflg          : 공유 메모리 옵션

                        SHM_RND    : 공유 메모리 주소를 프로세스에 맞게 별도로 할당
                        SHM_RDONLY : 공유 메모리를 읽기 전용으로 설정
                        */
        memcpy(buf, sharedMemory, BUFFSIZE);
        /*- 공유 메모리 공간에 있는 값을 특정 변수에 복사한다. */

        printf("%s", buf);

        shmdt(sharedMemory);
        /* - 프로세스에서 공유 메모리의 연결을 분리한다.
           - shmdt 함수 : 다른 프로세스에 연결된 공유 메모리 사용을 종료하고, 프로세스와 공유 메모리 연결을 해지함
              */

        return 0;
}
