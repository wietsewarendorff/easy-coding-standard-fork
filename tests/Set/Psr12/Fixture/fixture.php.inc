<?php declare( strict_types = 1 );
namespace Vendor\Package;

use const \Vendor\Package\{ConstantA, ConstantB, ConstantC};
use \Vendor\Package\{ClassA as A, ClassB, ClassC as C};
use function Vendor\Package\{functionA, functionB, functionC};
use Vendor\Package\SomeNamespace\ClassD as D;
class Foo extends Bar implements FooInterface {

    public $a, $b, $c;

    public function sampleFunction(int $a, int $b = null): array
    {
        if ($someLine === 'Longer Than 120 characters' && $respected->getVersion() === 'PSR12' && $respected->lineLengthRecommendeations() === false) {
            bar();
        }

        $moreThan = 1;
        $statement = 'per line';

        if ($a === $b) {
            bar();
        } elseif ($a > $b) {
            $foo->bar($arg1);
        } else {
            BazClass::bar($arg2, $arg3);
        }
    }

    final public static function bar()
    {
        // method body
    }

    CONST LOWER_CONSTANTS = 1;

    ABSTRACT STATIC PUBLIC FUNCTION lowercaseReservedKeywords(CALLABLE $a)
    {
        GLOBAL $test;
        RETURN PRINT CLONE ARRAY() AND NEW stdClass OR $g INSTANCEOF stdClass XOR 4;
        LIST($test) = EVAL('');
        UNSET($test);
        TRUE AND FALSE;
        (STRING) 1;
        (BOOLEAN) 1;
        (INTEGER) 1;

        ECHO FUNCTION () USE ($array) {

        };

        FOR ($i = 1; $i++; $i > 100) {
            WHILE (0) {
                SWITCH ($test) {
                    CASE 1:
                        BREAK;
                }
            }
        }
    }
}

class Foo
    extends SomeRediculouslySuperfluouslyLongClassNameThatShouldNeverExistInTheRealWorldMeantToTestOverflow
    implements SomeInterface, SomeOtherInterface, YetAnotherInterface {

    public function someBody()
    {
    }
    use SomeTrait, SomeOtherTrait;
    const SomeConst = 1;
    use A, B, C {
        B::smallTalk insteadof A;
        A::bigTalk insteadof C;
        C::mediumTalk as FooBar;
    }

    protected$doo=4;
    private $derp;
    protected $doo;
    public $derpity;
    var $noVisibility;
    static $staticNoVisibility;

}

class Foo {
    use SomeTrait;
}

class Foo extends ExtendedClass implements
    SomeInterface, SomeOtherInterface,
    YetAnotherInterface {

    public function someMethod () {    }

    public function fooBarBaz  ($arg1,& $arg2 ,$arg3=[])
    {
        // method body
    }

    public final function finalMethod()
    {
    }

    public static function staticMethod()
    {
    }

    public static final function staticMethod()
    {
    }

    public abstract function abstractMethod();

}

declare( ticks = 1 )
{
    echo 1;
}

function fooBarBaz($arg1,& $arg2 ,$arg3=[]){
    // function body
}

factoryFunction ( $arg1 , $arg2 )->method ($arg1,$arg2);

factoryFunction( $arg1,
    $arg2, $arg3);

factoryFunction($arg1, $arg2, [
    1,
    2,
    3
], $arg4);

?>
-----
<?php

declare(strict_types=1);
namespace Vendor\Package;

use Vendor\Package\{ClassA as A, ClassB, ClassC as C};
use Vendor\Package\SomeNamespace\ClassD as D;
use function Vendor\Package\{functionA, functionB, functionC};
use const Vendor\Package\{ConstantA, ConstantB, ConstantC};

class Foo extends Bar implements FooInterface
{
    public $a;
    public $b;
    public $c;

    public function sampleFunction(int $a, int $b = null): array
    {
        if ($someLine === 'Longer Than 120 characters' && $respected->getVersion() === 'PSR12' && $respected->lineLengthRecommendeations() === false) {
            bar();
        }

        $moreThan = 1;
        $statement = 'per line';

        if ($a === $b) {
            bar();
        } elseif ($a > $b) {
            $foo->bar($arg1);
        } else {
            BazClass::bar($arg2, $arg3);
        }
    }

    final public static function bar()
    {
        // method body
    }

    public const LOWER_CONSTANTS = 1;

    abstract public static function lowercaseReservedKeywords(callable $a)
    {
        global $test;
        return print clone array() and new stdClass() or $g instanceof stdClass xor 4;
        list($test) = eval('');
        unset($test);
        true and false;
        (string) 1;
        (bool) 1;
        (int) 1;

        echo function () use ($array) {
        };

        for ($i = 1; $i++; $i > 100) {
            while (0) {
                switch ($test) {
                    case 1:
                        break;
                }
            }
        }
    }
}

class Foo extends SomeRediculouslySuperfluouslyLongClassNameThatShouldNeverExistInTheRealWorldMeantToTestOverflow implements SomeInterface, SomeOtherInterface, YetAnotherInterface
{
    public function someBody()
    {
    }
    use SomeTrait, SomeOtherTrait;
    public const SomeConst = 1;
    use A, B, C {
        B::smallTalk insteadof A;
        A::bigTalk insteadof C;
        C::mediumTalk as FooBar;
    }

    protected $doo = 4;
    private $derp;
    protected $doo;
    public $derpity;
    public $noVisibility;
    public static $staticNoVisibility;
}

class Foo
{
    use SomeTrait;
}

class Foo extends ExtendedClass implements
    SomeInterface,
    SomeOtherInterface,
    YetAnotherInterface
{
    public function someMethod()
    {
    }

    public function fooBarBaz($arg1, &$arg2, $arg3 = [])
    {
        // method body
    }

    final public function finalMethod()
    {
    }

    public static function staticMethod()
    {
    }

    final public static function staticMethod()
    {
    }

    abstract public function abstractMethod();
}

declare(ticks=1) {
    echo 1;
}

function fooBarBaz($arg1, &$arg2, $arg3 = [])
{
    // function body
}

factoryFunction($arg1, $arg2)->method($arg1, $arg2);

factoryFunction(
    $arg1,
    $arg2,
    $arg3
);

factoryFunction($arg1, $arg2, [
    1,
    2,
    3
], $arg4);
