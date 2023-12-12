document.addEventListener("DOMContentLoaded" , function(){
    const HomeButton=document.getElementById("HomeButton");
    const HomeContent=document.getElementById("HomeContent");
    const MembersButton=document.getElementById("MembersButton");
    const MembersContent=document.getElementById("MembersContent");
    const GalleryButton=document.getElementById("GalleryButton");
    const GalleryContent=document.getElementById("GalleryContent");
    const ContactButton=document.getElementById("ContactButton");
    const ContactContent=document.getElementById("ContactContent");
    const MenuIcon=document.getElementById("MenuIcon");
    const nav=document.getElementById("nav");
    const Content=document.getElementById("Content");

    MenuIcon.addEventListener("click",function(){
        if (nav.style.left == "0px") {
            nav.style.left = "-250px";
            Content.style.margin="50px 0px 0px 0px";
        } else {
            nav.style.left = "0px";
            Content.style.margin="50px 0px 0px 250px";
        }
    })


    HomeButton.addEventListener("click" , function(){
        HomeContent.style.display="block";
        MembersContent.style.display="none";
        GalleryContent.style.display="none";
        ContactContent.style.display="none";
    })

    MembersButton.addEventListener("click" , function(){
        HomeContent.style.display="none";
        MembersContent.style.display="block";
        GalleryContent.style.display="none";
        ContactContent.style.display="none";
    })

    GalleryButton.addEventListener("click" , function(){
        HomeContent.style.display="none";
        MembersContent.style.display="none";
        GalleryContent.style.display="block";
        ContactContent.style.display="none";
    })

    ContactButton.addEventListener("click" , function(){
        HomeContent.style.display="none";
        MembersContent.style.display="none";
        GalleryContent.style.display="none";
        ContactContent.style.display="block";
    })
})