
<h1 align="center">Всем привет, мы <a href="https://boosty.to/adscore/" target="_blank">VOORHU</a>, представляем вам ADSCore Lite</h1>

<p align="center">
<img src="https://github.com/ortuz/ADSCoreLite/blob/master/Images/ADSCoreLiteLogo.png" width=50% height=50%>
</p>
  
# Документация

### Этот плагин создан для легкой интеграции Яндекс рекламы в проекты на Unreal Engine.

### Поддерживаемые платформы: Android, IOS(КТТС)

### Поддерживаемые версии Unreal Engine: 5.2, 4.27(КТТС)

### По всем вопросам можете писать сюда: voidrosegd@gmail.com

### Видео инструкция на *[YouTube](https://youtu.be/S0Yz6SVNjcE)*.

# Установка

## Добавление в проект

### Создайте в корне вашего проекта папку Plugins если её ещё нету.

### Разархивируйте в неё содержимое архива с плагином.

![ScreenShot](Images/plugin_folder.png)

### Используемый проект должен быть С++ или добавьте Source файлы в свой Blueprint проект.

> Можно так же просто поместить плагин по этому пути ..\Epic Games\UE_5.2\Engine\Plugins\Marketplace

### Для добавления source файлов, откройте контекстное меню Tools и выберите New C++ Class. 

![ScreenShot](Images/create_cpp.png)

### Закройте IDE после её открытия и перезапустите проект, можно продолжать установку.

## Настройка и функционал

### Перейдем в настройки проекта и укажем ВАШ идентификатор рекламной сети. 
>Вы не можете использовать один идентификатор для нескольких приложений!
>
>Для каждого приложения нужно создавать отдельный идентификатор, привязанный к конкретному приложению.
>
>Тестовый идентификатор demo-interstitial-yandex
>
>[Создание идентификатора Яндекс](#создание-идентификатора-яндекс)⏬

![ScreenShot](Images/editor_settings.png)

### В комплекте с плагином идёт тестовый виджет WBP_TestButtons, возможно понадобится включить отображение плагинов.

![ScreenShot](Images/content_preview.png)

### Откройте его и перейдите в раздел Graph, тут мы оставили вариант использования функционала плагина.

![ScreenShot](Images/widget_preview.png)

## Создание идентификатора Яндекс

### Перейдем на *[сайт](https://partner.yandex.ru)* РСЯ.

### После регистрации вы попадете в Дашборд.

### Перейдите в раздел Реклама в приложениях -> Приложение и блоки.

### Добавьте своё приложение, следуя инструкциям от Яндекса.

![ScreenShot](Images/ydasbord_addapp.png)

### После добавления приложения, у вас появится возможность создать рекламный блок.

![ScreenShot](Images/ydasbord_addblock.png)

### Наш плагин работает с Полноэкранной рекламой, поэтому создайте блок данного типа.

![ScreenShot](Images/ydasbord_block.png)

### Созданный блок появится в разделе Блоки.
### В разделе Блоки вы можете наблюдать информацию по всем своим блокам, включая рекламный идентификатор.

![ScreenShot](Images/ydasbord_blockid.png)

### Подробнее о работе с РСЯ можно почитать *[тут](https://yandex.ru/support/partner/)*.

# Список возможных ошибок

# F.A.Q.
