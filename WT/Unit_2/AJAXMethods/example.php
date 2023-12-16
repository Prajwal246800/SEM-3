<?php
header('Content-Type: application/json');

if ($_SERVER["REQUEST_METHOD"] === "POST")
{
    $name = isset($_POST['name']) ? $_POST['name'] : '';
    $city = isset($_POST['city']) ? $_POST['city'] : '';
    if (!empty($name) && !empty($city))
    {
        $result = "Hello, $name from $city!";
        echo json_encode(['message' => $result]);
    }
    else
    {
        http_response_code(400);
        echo json_encode(['error' => 'Name and City are required']);
    }
}
else
{
    http_response_code(405);
    echo json_encode(['error' => 'Method Not Allowed']);
}
?>
