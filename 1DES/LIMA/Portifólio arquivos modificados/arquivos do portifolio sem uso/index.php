<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <!--GOOGLE FONTS-->
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Poppins:ital,wght@0,100;0,200;0,300;0,400;0,500;0,600;0,700;0,800;0,900;1,100;1,200;1,300;1,400;1,500;1,600;1,700;1,800;1,900&display=swap" rel="stylesheet">
    <!--FIM GOOGLE FONTS-->
    <!--BOOTSTRAP ICONS-->
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap-icons@1.11.1/font/bootstrap-icons.css">
    <!--FIM BOOTSTRAP ICONS-->
    <link rel="stylesheet" href="style.css">

    <script src="menu.js" defer></script>
    <title>Portifólio Carla Mozena</title>
</head>
<body>
    <header>
        <div class="interface">
            <div class="logo">
                <a hef="#">
                    <img src="images/beecountrylogo.png" alt="Logo Bee Country" width="150" height="150">
                </a>
            </div><!--LOGO-->
       
        <nav class="menu-desktop">
            <ul>
                <li><a href="#">Início</a></li>
                <li><a href="#">Especialidades</a></li>
                <li><a href="#">Sobre</a></li>
                <li><a href="#">Projetos</a></li>
            </ul>
        </nav>

        <div class="btn-contato">
            <a href="#">
                <button>Contato</button>
            </a>
        </div><!--btn-contato-->

        <div class="btn-abrir-menu" id="btn-menu">
            <i class="bi bi-list"></i>
        </div><!--btn-abrir-menu-->

        <div class="menu-mobile" id="menu-mobile">
            <div class="btn-fechar">
                <i class="bi bi-x-lg"></i>
            </div><!--btn-fechar-->
        
            <nav>
                <ul>
                    <li><a href="#">Início</a></li>
                    <li><a href="#">Especialidades</a></li>
                    <li><a href="#">Sobre</a></li>
                    <li><a href="#">Projetos</a></li>
                    <li><a href="#">Contato</a></li>
                </ul>
            </nav>
        
        </div><!--menu-mobile-->

        <div class="overlay-menu" id="overlay-menu"></div>

    </div><!--Interface-->

    </header>

    <main>
        <section class="topo-do-site">
            <div class="interface">
                <div class="flex">
                    <div class="txt-topo-site">
                        <h1>TRANSFORMANDO IDÉIAS EM ARTE<span>.</span></h1>
                        <p>Criatividade e inovação andam lado a lado. Com uma combinação única de design impactante,
                           funcionalidade intuitiva e otimização para resultados, estou pronta para criar os seus sonhos.</p>

                        <div class="btn-contato">
                            <a href="#">
                                <button>Entre em Contato</button>
                            </a>
                        </div>
                    </div><!--txt-topo-site-->

                    <div class="img-topo-site">
                        <img src="images/eu2.png" alt="Eu">

                    </div><!--img-topo-site-->
                </div><!--Flex-->
             </div><!--interface-->
        </section><!--topo-do-site-->

        <section class="especialidades">
            <div class="interface">
                <h2 class="título">MINHAS <span>ESPECIALIDADES.</span></h2>
                <div class="flex">
                    <div class="especialidades-box">
                        <i class="bi bi-house"></i>
                        <h3>Marcenaria</h3>
                        <p>Fabricamos kits em mdf nas espessuras de 3 até 9 mm e também em madeira pinus no estilo country e decorativo.
                            Nosso foco é a venda de Kits no cru de própria autoria desenvolvidos dentro de nosso ateliê para você mesmo pintar.
                            Nossos recortes são produzidos um a um garantindo assim a qualidade do produto. 
                            Todos os  nossos kits são enviados em embalagem própria do Ateliê,  lixados, limpos, com risco no tamanho original e foto colorida no tamanho 10x15  quando mencionados no projeto. 
                            Pontualidade e capricho são nossa marca registrada.
                            Tenha um recorte Bee Country e faça muita arte.</p>
                        </div><!--especialidades-box-->

                        <div class="especialidades-box">
                            <i class="bi bi-cart"></i>
                            <h3>Loja online</h3>
                            <p>Olá, bem vindos ao Ateliê Bee Country.
                                Sou Carla Mozena, professora de pintura country e decorativa, proprietária do Ateliê Bee Country há 23 anos.
                                Estamos situados na cidade de Jaguariúna no interior de São Paulo.</p>
                            </div><!--especialidades-box-->

                            <div class="especialidades-box">
                                <i class="bi bi-youtube"></i>
                                <h3>Youtube</h3>
                                <p>Seja muito bem-vindo ao meu canal no YouTube! Aqui, você encontrará um mundo de conteúdo diversificado e envolvente. Meu objetivo é proporcionar entretenimento, 
                                   conhecimento e inspiração.Se você é apaixonado por arte e criatividade, também encontrará conteúdo inspirador para estimular a sua mente criativa. </p>
            
                                </div><!--especialidades-box-->
                </div><!--flex-->
            </div><!--interface-->
        </section><!--Especialidades-->

        <section class="sobre">
            <div class="interface">
                <div class="flex">
                    <div class="img-sobre">
                        <img src="images/beecountrylogo.png" alt="" width="320" height="400">
                    </div><!--img-sobre-->

                    <div class="txt-sobre">
                        <h2>MUITO PRAZER, <span> SOU CARLA MOZENA.</span></h2>
                        <p>Lorem, ipsum dolor sit amet consectetur adipisicing elit. Voluptates ipsa optio tenetur dolorem expedita. 
                        Soluta, a accusantium vero cupiditate quasi assumenda enim id, ipsam neque est ut sequi quod doloribus!</p>
                        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Earum perspiciatis delectus neque accusantium, 
                        veritatis reprehenderit assumenda iure natus dolor sunt ducimus quia! Magnam voluptas est sapiente inventore,
                        culpa at molestias?</p>
                        <div class="btn-social">
                            <a href="https://www.instagram.com/carlamozena/"><button><i class="bi bi-instagram"></i></button></a>
                            <a href="https://www.youtube.com/carlamozena"><button><i class="bi bi-youtube"></i></button></a>
                            <a href="https://www.facebook.com/atelieemarcenariabeecountry"><button><i class="bi bi-facebook"></i></button></a>
                            <a href="https://www.elo7.com.br/beecountry/"><button><i class="bi bi-shop"></i></button></a>
                        </div><!--btn-social-->
                    </div><!--txt-sobre-->
                </div><!--flex-->
            </div><!--interface-->
        </section><!--sobre-->

        <section class="portifólio">
            <div class="interface">
                <h2 class="título">MEU <span>PORTIFÓLIO.</span></h2>
                <div class="flex">
                    <div class="img-port" style="background-image: url(images/casinhas\ 1.jpg);">
                        <div class="overlay">Projeto 1</div>
                    </div>
                    <div class="img-port" style="background-image: url(images/casinhas\ 2.jpg);">
                        <div class="overlay">Projeto 2</div>
                    </div>
                    <div class="img-port" style="background-image: url(images/casinhas3.jpg);">
                        <div class="overlay">Projeto 3</div>
                    </div>
                </div><!--flex-->
            </div><!--interface-->
        </section><!--portifólio-->

        <section class="formulario">
            <div class="interface">
                <h2 class="título">FALE <span>COMIGO.</span></h2>

                <form action="">
                    <input type="text" name="" id="" placeholder="Seu nome completo:" required>
                    <input type="text" name="" id="" placeholder="Seu e-mail:" required>
                    <input type="text" name="" id="" placeholder="Seu celular:">
                    <textarea name="" id="" placeholder="Sua mensagem" required></textarea>
                    <div class="btn-enviar"><input type="submit" value="ENVIAR"></div>
                </form>
            </div><!--interface-->
        </section><!--formulário-->

    </main>

    <footer>
        <div class="interface">
             <div class="line-footer">
                    <div class="flex">
                        <div class="logo-footer">
                            <img src="images/beecountrylogo.png" alt="Logo Bee Country" width="150" height="150" >
                    </div><!--logo-footer-->
                    <div class="line-footer">
                        <div class="btn-social">
                            <a href="https://www.instagram.com/carlamozena/"><button><i class="bi bi-instagram"></i></button></a>
                            <a href="https://www.youtube.com/carlamozena"><button><i class="bi bi-youtube"></i></button></a>
                            <a href="https://www.facebook.com/atelieemarcenariabeecountry"><button><i class="bi bi-facebook"></i></button></a>
                            <a href="https://www.elo7.com.br/beecountry/"><button><i class="bi bi-shop"></i></button></a>
                        </div><!--btn-social-->
                    </div>
            </div><!--line-footer-->

            <div class="line-footer borda">
                <p><i class="bi bi-envelope-fill"></i> <a href="mailto:cmartezanato@yahoo.com.br">cmartezanato@yahoo.com.br</a></p>
            </div><!--line-footer-->
        </div><!--interface-->
 
    </footer>
    <div class="contador">
        <?php 
       include ("./contador.php");
    ?>
 </div>
</body>
</html>