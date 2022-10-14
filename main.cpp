#include "Queue.h"

int main()
{
    QueueArr queue(3);
    queue.put(7);
    queue.put(1);
    queue.put(2);
    std::cout << queue.getSize() << std::endl;
    std::cout << queue.isEmpty() << std::endl;
    std::cout << queue.check() << std::endl;
    queue.take();
    std::cout << queue.check() << std::endl;
    queue.take();
    std::cout << queue.check() << std::endl;
    queue.take();
    QueueArr queue1(3);
    queue1.put(0);
    queue1.put(1);
    queue1.put(2);
    QueueArr::Iterator it(queue1);
    it.start();
    std::cout << std::endl;

    for (int i = 0; i < 3; i++)
    {
        std::cout << it.getValue() << " ";
        it.next();
    }
    std::cout << it.finish();
    std::cout << std::endl << queue.isEmpty() << std::endl;

    queue.clear();
    std::cout << std::endl << queue.isEmpty() << std::endl;
    queue.put(33);
    std::cout << queue.check() << std::endl;
    std::cout << queue.isEmpty();
}

