document.addEventListener('DOMContentLoaded', function() {
    const HomeButton = document.querySelector('nav a[href="#Home"]');
    const membersButton = document.querySelector('nav a[href="#Members"]');
    const photosButton = document.querySelector('nav a[href="#Photos"]');
    const contactButton = document.querySelector('nav a[href="#Contact_Us"]');
    const membersContent = document.getElementById('membersContent');
    const photosContent = document.getElementById('photosContent');
    const contactContent = document.getElementById('contactContent');
    const mainContent = document.getElementById('mainContent');

    membersButton.addEventListener('click', function(event) {
        event.preventDefault();
        mainContent.style.display = 'none';
        membersContent.style.display = 'block';
        photosContent.style.display = 'none';
        contactContent.style.display = 'none';
    });

    photosButton.addEventListener('click', function(event) {
        event.preventDefault();
        mainContent.style.display = 'none';
        membersContent.style.display = 'none';
        photosContent.style.display = 'block';
        contactContent.style.display = 'none';
    });

    contactButton.addEventListener('click', function(event) {
        event.preventDefault();
        mainContent.style.display = 'none';
        membersContent.style.display = 'none';
        photosContent.style.display = 'none';
        contactContent.style.display = 'block';
    });

    HomeButton.addEventListener('click', function(event) {
        event.preventDefault();
        mainContent.style.display = 'block';
        membersContent.style.display = 'none';
        photosContent.style.display = 'none';
        contactContent.style.display = 'none';
    });
});
