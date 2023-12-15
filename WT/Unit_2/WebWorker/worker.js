function doTask()
{
    let result = 0;
    for (let i = 0; i < 100000000; i++)
    {
        result += i;
    }
    return result;
}

self.onmessage = function (event){
    const data = event.data;
    if (data === "start") {
        const taskResult = doTask();
        self.postMessage(taskResult);
    }
};
