document.getElementById("login-form").addEventListener("submit", function(event) {
    event.preventDefault();
    
    var username = document.getElementById("username").value;
    var password = document.getElementById("password").value;
    
    if (username === "alex@123" && password === "1234") {
        alert("Login successful! Welcome, Alex J. Mathew!");
        // Redirect to another HTML file (e.g., 'success.html')
        window.location.href = 'success.html';
    } else {
        alert("Login failed. Please check your credentials.");
    }
});
