const loaderContainer = document.querySelector('.loader-container')
const pageContent = document.querySelector('.nishu')

window.addEventListener('load', () => {
    loaderContainer.classList.add('hidden')
    pageContent.classList.add('visible')
})