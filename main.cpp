#include "Queue.h"

int main()
{
    QueueArr queue(3);
    queue.put(0);
    queue.put(1);
    queue.put(2);
    try {
        queue.put(2);
    }
    catch (const std::exception&) {
        std::cout << "kk" << std::endl;
    }
    std::cout << queue.isEmpty() << std::endl;
    std::cout << queue.check() << std::endl;
    QueueArr queue1(3);
    queue1.put(0);
    queue1.put(1);
    queue1.put(2);

}
