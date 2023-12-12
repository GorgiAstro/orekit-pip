#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Random.h"
#include "java/util/stream/DoubleStream.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Random::class$ = NULL;
    jmethodID *Random::mids$ = NULL;
    bool Random::live$ = false;

    jclass Random::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Random");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_doubles_78c9b5d7fa0dbac0] = env->getMethodID(cls, "doubles", "()Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_4761ea9169c0223a] = env->getMethodID(cls, "doubles", "(J)Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_3df00f303664137a] = env->getMethodID(cls, "doubles", "(DD)Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_ffac4831b77940ef] = env->getMethodID(cls, "doubles", "(JDD)Ljava/util/stream/DoubleStream;");
        mids$[mid_nextBoolean_89b302893bdbe1f1] = env->getMethodID(cls, "nextBoolean", "()Z");
        mids$[mid_nextBytes_d759c70c6670fd89] = env->getMethodID(cls, "nextBytes", "([B)V");
        mids$[mid_nextDouble_557b8123390d8d0c] = env->getMethodID(cls, "nextDouble", "()D");
        mids$[mid_nextFloat_04fe014f7609dc26] = env->getMethodID(cls, "nextFloat", "()F");
        mids$[mid_nextGaussian_557b8123390d8d0c] = env->getMethodID(cls, "nextGaussian", "()D");
        mids$[mid_nextInt_412668abc8d889e9] = env->getMethodID(cls, "nextInt", "()I");
        mids$[mid_nextInt_0092017e99012694] = env->getMethodID(cls, "nextInt", "(I)I");
        mids$[mid_nextLong_9e26256fb0d384a2] = env->getMethodID(cls, "nextLong", "()J");
        mids$[mid_setSeed_3cd6a6b354c6aa22] = env->getMethodID(cls, "setSeed", "(J)V");
        mids$[mid_next_0092017e99012694] = env->getMethodID(cls, "next", "(I)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Random::Random() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    Random::Random(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

    ::java::util::stream::DoubleStream Random::doubles() const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_78c9b5d7fa0dbac0]));
    }

    ::java::util::stream::DoubleStream Random::doubles(jlong a0) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_4761ea9169c0223a], a0));
    }

    ::java::util::stream::DoubleStream Random::doubles(jdouble a0, jdouble a1) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_3df00f303664137a], a0, a1));
    }

    ::java::util::stream::DoubleStream Random::doubles(jlong a0, jdouble a1, jdouble a2) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_ffac4831b77940ef], a0, a1, a2));
    }

    jboolean Random::nextBoolean() const
    {
      return env->callBooleanMethod(this$, mids$[mid_nextBoolean_89b302893bdbe1f1]);
    }

    void Random::nextBytes(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_nextBytes_d759c70c6670fd89], a0.this$);
    }

    jdouble Random::nextDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextDouble_557b8123390d8d0c]);
    }

    jfloat Random::nextFloat() const
    {
      return env->callFloatMethod(this$, mids$[mid_nextFloat_04fe014f7609dc26]);
    }

    jdouble Random::nextGaussian() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextGaussian_557b8123390d8d0c]);
    }

    jint Random::nextInt() const
    {
      return env->callIntMethod(this$, mids$[mid_nextInt_412668abc8d889e9]);
    }

    jint Random::nextInt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_nextInt_0092017e99012694], a0);
    }

    jlong Random::nextLong() const
    {
      return env->callLongMethod(this$, mids$[mid_nextLong_9e26256fb0d384a2]);
    }

    void Random::setSeed(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setSeed_3cd6a6b354c6aa22], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Random_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Random_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Random_init_(t_Random *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Random_doubles(t_Random *self, PyObject *args);
    static PyObject *t_Random_nextBoolean(t_Random *self);
    static PyObject *t_Random_nextBytes(t_Random *self, PyObject *arg);
    static PyObject *t_Random_nextDouble(t_Random *self);
    static PyObject *t_Random_nextFloat(t_Random *self);
    static PyObject *t_Random_nextGaussian(t_Random *self);
    static PyObject *t_Random_nextInt(t_Random *self, PyObject *args);
    static PyObject *t_Random_nextLong(t_Random *self);
    static PyObject *t_Random_setSeed(t_Random *self, PyObject *arg);
    static int t_Random_set__seed(t_Random *self, PyObject *arg, void *data);
    static PyGetSetDef t_Random__fields_[] = {
      DECLARE_SET_FIELD(t_Random, seed),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Random__methods_[] = {
      DECLARE_METHOD(t_Random, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Random, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Random, doubles, METH_VARARGS),
      DECLARE_METHOD(t_Random, nextBoolean, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextBytes, METH_O),
      DECLARE_METHOD(t_Random, nextDouble, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextFloat, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextGaussian, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextInt, METH_VARARGS),
      DECLARE_METHOD(t_Random, nextLong, METH_NOARGS),
      DECLARE_METHOD(t_Random, setSeed, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Random)[] = {
      { Py_tp_methods, t_Random__methods_ },
      { Py_tp_init, (void *) t_Random_init_ },
      { Py_tp_getset, t_Random__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Random)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Random, t_Random, Random);

    void t_Random::install(PyObject *module)
    {
      installType(&PY_TYPE(Random), &PY_TYPE_DEF(Random), module, "Random", 0);
    }

    void t_Random::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "class_", make_descriptor(Random::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "wrapfn_", make_descriptor(t_Random::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Random_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Random::initializeClass, 1)))
        return NULL;
      return t_Random::wrap_Object(Random(((t_Random *) arg)->object.this$));
    }
    static PyObject *t_Random_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Random::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Random_init_(t_Random *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Random object((jobject) NULL);

          INT_CALL(object = Random());
          self->object = object;
          break;
        }
       case 1:
        {
          jlong a0;
          Random object((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            INT_CALL(object = Random(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Random_doubles(t_Random *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::stream::DoubleStream result((jobject) NULL);
          OBJ_CALL(result = self->object.doubles());
          return ::java::util::stream::t_DoubleStream::wrap_Object(result);
        }
        break;
       case 1:
        {
          jlong a0;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.doubles(a0));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          jdouble a0;
          jdouble a1;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.doubles(a0, a1));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          jlong a0;
          jdouble a1;
          jdouble a2;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "JDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.doubles(a0, a1, a2));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "doubles", args);
      return NULL;
    }

    static PyObject *t_Random_nextBoolean(t_Random *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.nextBoolean());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Random_nextBytes(t_Random *self, PyObject *arg)
    {
      JArray< jbyte > a0((jobject) NULL);

      if (!parseArg(arg, "[B", &a0))
      {
        OBJ_CALL(self->object.nextBytes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "nextBytes", arg);
      return NULL;
    }

    static PyObject *t_Random_nextDouble(t_Random *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.nextDouble());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextFloat(t_Random *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.nextFloat());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextGaussian(t_Random *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.nextGaussian());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextInt(t_Random *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.nextInt(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "nextInt", args);
      return NULL;
    }

    static PyObject *t_Random_nextLong(t_Random *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.nextLong());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Random_setSeed(t_Random *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.setSeed(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setSeed", arg);
      return NULL;
    }

    static int t_Random_set__seed(t_Random *self, PyObject *arg, void *data)
    {
      {
        jlong value;
        if (!parseArg(arg, "J", &value))
        {
          INT_CALL(self->object.setSeed(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "seed", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsMoultonFieldIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsMoultonFieldIntegrator::class$ = NULL;
        jmethodID *AdamsMoultonFieldIntegrator::mids$ = NULL;
        bool AdamsMoultonFieldIntegrator::live$ = false;

        jclass AdamsMoultonFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsMoultonFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_98a8f681a3661186] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD[D[D)V");
            mids$[mid_init$_9d3b83c0c1b3a514] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDDD)V");
            mids$[mid_errorEstimation_1fb9f4eb0e32bdff] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_a39c6521f8e99c62] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonFieldIntegrator::AdamsMoultonFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_98a8f681a3661186, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        AdamsMoultonFieldIntegrator::AdamsMoultonFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_9d3b83c0c1b3a514, a0.this$, a1, a2, a3, a4, a5)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_AdamsMoultonFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegrator_of_(t_AdamsMoultonFieldIntegrator *self, PyObject *args);
        static int t_AdamsMoultonFieldIntegrator_init_(t_AdamsMoultonFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonFieldIntegrator_get__parameters_(t_AdamsMoultonFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsMoultonFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsMoultonFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsMoultonFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsMoultonFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsMoultonFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonFieldIntegrator, t_AdamsMoultonFieldIntegrator, AdamsMoultonFieldIntegrator);
        PyObject *t_AdamsMoultonFieldIntegrator::wrap_Object(const AdamsMoultonFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegrator *self = (t_AdamsMoultonFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsMoultonFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegrator *self = (t_AdamsMoultonFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsMoultonFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonFieldIntegrator), &PY_TYPE_DEF(AdamsMoultonFieldIntegrator), module, "AdamsMoultonFieldIntegrator", 0);
        }

        void t_AdamsMoultonFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "class_", make_descriptor(AdamsMoultonFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsMoultonFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonFieldIntegrator::wrap_Object(AdamsMoultonFieldIntegrator(((t_AdamsMoultonFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsMoultonFieldIntegrator_of_(t_AdamsMoultonFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsMoultonFieldIntegrator_init_(t_AdamsMoultonFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdamsMoultonFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsMoultonFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdamsMoultonFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsMoultonFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_AdamsMoultonFieldIntegrator_get__parameters_(t_AdamsMoultonFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/PythonFieldEventHandler.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *PythonFieldEventHandler::class$ = NULL;
          jmethodID *PythonFieldEventHandler::mids$ = NULL;
          bool PythonFieldEventHandler::live$ = false;

          jclass PythonFieldEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/PythonFieldEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_061886b33964a9af] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_init_3ea56aaf691449ae] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_ceb1c025df8e35c2] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldEventHandler::PythonFieldEventHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonFieldEventHandler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonFieldEventHandler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonFieldEventHandler::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          static PyObject *t_PythonFieldEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldEventHandler_of_(t_PythonFieldEventHandler *self, PyObject *args);
          static int t_PythonFieldEventHandler_init_(t_PythonFieldEventHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonFieldEventHandler_finalize(t_PythonFieldEventHandler *self);
          static PyObject *t_PythonFieldEventHandler_pythonExtension(t_PythonFieldEventHandler *self, PyObject *args);
          static jobject JNICALL t_PythonFieldEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
          static void JNICALL t_PythonFieldEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonFieldEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonFieldEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static PyObject *t_PythonFieldEventHandler_get__self(t_PythonFieldEventHandler *self, void *data);
          static PyObject *t_PythonFieldEventHandler_get__parameters_(t_PythonFieldEventHandler *self, void *data);
          static PyGetSetDef t_PythonFieldEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonFieldEventHandler, self),
            DECLARE_GET_FIELD(t_PythonFieldEventHandler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonFieldEventHandler__methods_[] = {
            DECLARE_METHOD(t_PythonFieldEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldEventHandler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonFieldEventHandler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonFieldEventHandler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonFieldEventHandler)[] = {
            { Py_tp_methods, t_PythonFieldEventHandler__methods_ },
            { Py_tp_init, (void *) t_PythonFieldEventHandler_init_ },
            { Py_tp_getset, t_PythonFieldEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonFieldEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonFieldEventHandler, t_PythonFieldEventHandler, PythonFieldEventHandler);
          PyObject *t_PythonFieldEventHandler::wrap_Object(const PythonFieldEventHandler& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonFieldEventHandler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldEventHandler *self = (t_PythonFieldEventHandler *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PythonFieldEventHandler::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonFieldEventHandler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldEventHandler *self = (t_PythonFieldEventHandler *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PythonFieldEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonFieldEventHandler), &PY_TYPE_DEF(PythonFieldEventHandler), module, "PythonFieldEventHandler", 1);
          }

          void t_PythonFieldEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "class_", make_descriptor(PythonFieldEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "wrapfn_", make_descriptor(t_PythonFieldEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonFieldEventHandler::initializeClass);
            JNINativeMethod methods[] = {
              { "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;", (void *) t_PythonFieldEventHandler_eventOccurred0 },
              { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldEventHandler_init1 },
              { "pythonDecRef", "()V", (void *) t_PythonFieldEventHandler_pythonDecRef2 },
              { "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldEventHandler_resetState3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonFieldEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonFieldEventHandler::initializeClass, 1)))
              return NULL;
            return t_PythonFieldEventHandler::wrap_Object(PythonFieldEventHandler(((t_PythonFieldEventHandler *) arg)->object.this$));
          }
          static PyObject *t_PythonFieldEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonFieldEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonFieldEventHandler_of_(t_PythonFieldEventHandler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonFieldEventHandler_init_(t_PythonFieldEventHandler *self, PyObject *args, PyObject *kwds)
          {
            PythonFieldEventHandler object((jobject) NULL);

            INT_CALL(object = PythonFieldEventHandler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonFieldEventHandler_finalize(t_PythonFieldEventHandler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonFieldEventHandler_pythonExtension(t_PythonFieldEventHandler *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jobject JNICALL t_PythonFieldEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::ode::events::Action value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a1));
            PyObject *o2 = (a2 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "eventOccurred", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::ode::events::Action::initializeClass, &value))
            {
              throwTypeError("eventOccurred", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonFieldEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a2));
            PyObject *result = PyObject_CallMethod(obj, "init", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonFieldEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
            PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static PyObject *t_PythonFieldEventHandler_get__self(t_PythonFieldEventHandler *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
          static PyObject *t_PythonFieldEventHandler_get__parameters_(t_PythonFieldEventHandler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OrekitConfiguration.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OrekitConfiguration::class$ = NULL;
      jmethodID *OrekitConfiguration::mids$ = NULL;
      bool OrekitConfiguration::live$ = false;

      jclass OrekitConfiguration::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OrekitConfiguration");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCacheSlotsNumber_412668abc8d889e9] = env->getStaticMethodID(cls, "getCacheSlotsNumber", "()I");
          mids$[mid_setCacheSlotsNumber_a3da1a935cb37f7b] = env->getStaticMethodID(cls, "setCacheSlotsNumber", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint OrekitConfiguration::getCacheSlotsNumber()
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getCacheSlotsNumber_412668abc8d889e9]);
      }

      void OrekitConfiguration::setCacheSlotsNumber(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setCacheSlotsNumber_a3da1a935cb37f7b], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_OrekitConfiguration_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_getCacheSlotsNumber(PyTypeObject *type);
      static PyObject *t_OrekitConfiguration_setCacheSlotsNumber(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_get__cacheSlotsNumber(t_OrekitConfiguration *self, void *data);
      static int t_OrekitConfiguration_set__cacheSlotsNumber(t_OrekitConfiguration *self, PyObject *arg, void *data);
      static PyGetSetDef t_OrekitConfiguration__fields_[] = {
        DECLARE_GETSET_FIELD(t_OrekitConfiguration, cacheSlotsNumber),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitConfiguration__methods_[] = {
        DECLARE_METHOD(t_OrekitConfiguration, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, getCacheSlotsNumber, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, setCacheSlotsNumber, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitConfiguration)[] = {
        { Py_tp_methods, t_OrekitConfiguration__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrekitConfiguration__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitConfiguration)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OrekitConfiguration, t_OrekitConfiguration, OrekitConfiguration);

      void t_OrekitConfiguration::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitConfiguration), &PY_TYPE_DEF(OrekitConfiguration), module, "OrekitConfiguration", 0);
      }

      void t_OrekitConfiguration::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "class_", make_descriptor(OrekitConfiguration::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "wrapfn_", make_descriptor(t_OrekitConfiguration::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitConfiguration_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitConfiguration::initializeClass, 1)))
          return NULL;
        return t_OrekitConfiguration::wrap_Object(OrekitConfiguration(((t_OrekitConfiguration *) arg)->object.this$));
      }
      static PyObject *t_OrekitConfiguration_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitConfiguration::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrekitConfiguration_getCacheSlotsNumber(PyTypeObject *type)
      {
        jint result;
        OBJ_CALL(result = ::org::orekit::utils::OrekitConfiguration::getCacheSlotsNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OrekitConfiguration_setCacheSlotsNumber(PyTypeObject *type, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(::org::orekit::utils::OrekitConfiguration::setCacheSlotsNumber(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setCacheSlotsNumber", arg);
        return NULL;
      }

      static PyObject *t_OrekitConfiguration_get__cacheSlotsNumber(t_OrekitConfiguration *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCacheSlotsNumber());
        return PyLong_FromLong((long) value);
      }
      static int t_OrekitConfiguration_set__cacheSlotsNumber(t_OrekitConfiguration *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setCacheSlotsNumber(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "cacheSlotsNumber", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *NullPointerException::class$ = NULL;
    jmethodID *NullPointerException::mids$ = NULL;
    bool NullPointerException::live$ = false;

    jclass NullPointerException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/NullPointerException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NullPointerException::NullPointerException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    NullPointerException::NullPointerException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_NullPointerException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NullPointerException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_NullPointerException_init_(t_NullPointerException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_NullPointerException__methods_[] = {
      DECLARE_METHOD(t_NullPointerException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NullPointerException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NullPointerException)[] = {
      { Py_tp_methods, t_NullPointerException__methods_ },
      { Py_tp_init, (void *) t_NullPointerException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NullPointerException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(NullPointerException, t_NullPointerException, NullPointerException);

    void t_NullPointerException::install(PyObject *module)
    {
      installType(&PY_TYPE(NullPointerException), &PY_TYPE_DEF(NullPointerException), module, "NullPointerException", 0);
    }

    void t_NullPointerException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NullPointerException), "class_", make_descriptor(NullPointerException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NullPointerException), "wrapfn_", make_descriptor(t_NullPointerException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NullPointerException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NullPointerException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NullPointerException::initializeClass, 1)))
        return NULL;
      return t_NullPointerException::wrap_Object(NullPointerException(((t_NullPointerException *) arg)->object.this$));
    }
    static PyObject *t_NullPointerException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NullPointerException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_NullPointerException_init_(t_NullPointerException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NullPointerException object((jobject) NULL);

          INT_CALL(object = NullPointerException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          NullPointerException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = NullPointerException(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMetadataKey::class$ = NULL;
            jmethodID *CdmMetadataKey::mids$ = NULL;
            bool CdmMetadataKey::live$ = false;
            CdmMetadataKey *CdmMetadataKey::ADM_MSG_LINK = NULL;
            CdmMetadataKey *CdmMetadataKey::ALT_COV_REF_FRAME = NULL;
            CdmMetadataKey *CdmMetadataKey::ALT_COV_TYPE = NULL;
            CdmMetadataKey *CdmMetadataKey::ATMOSPHERIC_MODEL = NULL;
            CdmMetadataKey *CdmMetadataKey::CATALOG_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::COVARIANCE_METHOD = NULL;
            CdmMetadataKey *CdmMetadataKey::COVARIANCE_SOURCE = NULL;
            CdmMetadataKey *CdmMetadataKey::EARTH_TIDES = NULL;
            CdmMetadataKey *CdmMetadataKey::EPHEMERIS_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::GRAVITY_MODEL = NULL;
            CdmMetadataKey *CdmMetadataKey::INTERNATIONAL_DESIGNATOR = NULL;
            CdmMetadataKey *CdmMetadataKey::INTRACK_THRUST = NULL;
            CdmMetadataKey *CdmMetadataKey::MANEUVERABLE = NULL;
            CdmMetadataKey *CdmMetadataKey::N_BODY_PERTURBATIONS = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_DESIGNATOR = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_TYPE = NULL;
            CdmMetadataKey *CdmMetadataKey::OBS_BEFORE_NEXT_MESSAGE = NULL;
            CdmMetadataKey *CdmMetadataKey::ODM_MSG_LINK = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_CONTACT_POSITION = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_EMAIL = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_ORGANIZATION = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_PHONE = NULL;
            CdmMetadataKey *CdmMetadataKey::ORBIT_CENTER = NULL;
            CdmMetadataKey *CdmMetadataKey::REF_FRAME = NULL;
            CdmMetadataKey *CdmMetadataKey::SOLAR_RAD_PRESSURE = NULL;

            jclass CdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_3a97c6b3d74d657c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;)Z");
                mids$[mid_valueOf_a8984b5e9ad6db2c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;");
                mids$[mid_values_e2612fec1b9649c9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ADM_MSG_LINK = new CdmMetadataKey(env->getStaticObjectField(cls, "ADM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ALT_COV_REF_FRAME = new CdmMetadataKey(env->getStaticObjectField(cls, "ALT_COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ALT_COV_TYPE = new CdmMetadataKey(env->getStaticObjectField(cls, "ALT_COV_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ATMOSPHERIC_MODEL = new CdmMetadataKey(env->getStaticObjectField(cls, "ATMOSPHERIC_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                CATALOG_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "CATALOG_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                COVARIANCE_METHOD = new CdmMetadataKey(env->getStaticObjectField(cls, "COVARIANCE_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                COVARIANCE_SOURCE = new CdmMetadataKey(env->getStaticObjectField(cls, "COVARIANCE_SOURCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                EARTH_TIDES = new CdmMetadataKey(env->getStaticObjectField(cls, "EARTH_TIDES", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                EPHEMERIS_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                GRAVITY_MODEL = new CdmMetadataKey(env->getStaticObjectField(cls, "GRAVITY_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                INTERNATIONAL_DESIGNATOR = new CdmMetadataKey(env->getStaticObjectField(cls, "INTERNATIONAL_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                INTRACK_THRUST = new CdmMetadataKey(env->getStaticObjectField(cls, "INTRACK_THRUST", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                MANEUVERABLE = new CdmMetadataKey(env->getStaticObjectField(cls, "MANEUVERABLE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                N_BODY_PERTURBATIONS = new CdmMetadataKey(env->getStaticObjectField(cls, "N_BODY_PERTURBATIONS", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_DESIGNATOR = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_TYPE = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBS_BEFORE_NEXT_MESSAGE = new CdmMetadataKey(env->getStaticObjectField(cls, "OBS_BEFORE_NEXT_MESSAGE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ODM_MSG_LINK = new CdmMetadataKey(env->getStaticObjectField(cls, "ODM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_CONTACT_POSITION = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_CONTACT_POSITION", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_EMAIL = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_EMAIL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_ORGANIZATION = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_ORGANIZATION", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_PHONE = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_PHONE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ORBIT_CENTER = new CdmMetadataKey(env->getStaticObjectField(cls, "ORBIT_CENTER", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                REF_FRAME = new CdmMetadataKey(env->getStaticObjectField(cls, "REF_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                SOLAR_RAD_PRESSURE = new CdmMetadataKey(env->getStaticObjectField(cls, "SOLAR_RAD_PRESSURE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_3a97c6b3d74d657c], a0.this$, a1.this$, a2.this$);
            }

            CdmMetadataKey CdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a8984b5e9ad6db2c], a0.this$));
            }

            JArray< CdmMetadataKey > CdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_e2612fec1b9649c9]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_CdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadataKey_of_(t_CdmMetadataKey *self, PyObject *args);
            static PyObject *t_CdmMetadataKey_process(t_CdmMetadataKey *self, PyObject *args);
            static PyObject *t_CdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_CdmMetadataKey_get__parameters_(t_CdmMetadataKey *self, void *data);
            static PyGetSetDef t_CdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_CdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_CdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMetadataKey)[] = {
              { Py_tp_methods, t_CdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CdmMetadataKey, t_CdmMetadataKey, CdmMetadataKey);
            PyObject *t_CdmMetadataKey::wrap_Object(const CdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmMetadataKey *self = (t_CdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmMetadataKey *self = (t_CdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMetadataKey), &PY_TYPE_DEF(CdmMetadataKey), module, "CdmMetadataKey", 0);
            }

            void t_CdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "class_", make_descriptor(CdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "wrapfn_", make_descriptor(t_CdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ADM_MSG_LINK", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ADM_MSG_LINK)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ALT_COV_REF_FRAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ALT_COV_REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ALT_COV_TYPE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ALT_COV_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ATMOSPHERIC_MODEL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ATMOSPHERIC_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "CATALOG_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::CATALOG_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "COVARIANCE_METHOD", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::COVARIANCE_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "COVARIANCE_SOURCE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::COVARIANCE_SOURCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "EARTH_TIDES", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::EARTH_TIDES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "EPHEMERIS_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::EPHEMERIS_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "GRAVITY_MODEL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::GRAVITY_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "INTERNATIONAL_DESIGNATOR", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::INTERNATIONAL_DESIGNATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "INTRACK_THRUST", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::INTRACK_THRUST)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "MANEUVERABLE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::MANEUVERABLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "N_BODY_PERTURBATIONS", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::N_BODY_PERTURBATIONS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_DESIGNATOR", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_DESIGNATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_TYPE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBS_BEFORE_NEXT_MESSAGE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBS_BEFORE_NEXT_MESSAGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ODM_MSG_LINK", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ODM_MSG_LINK)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_CONTACT_POSITION", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_CONTACT_POSITION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_EMAIL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_EMAIL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_ORGANIZATION", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_ORGANIZATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_PHONE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_PHONE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ORBIT_CENTER", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ORBIT_CENTER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "REF_FRAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "SOLAR_RAD_PRESSURE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::SOLAR_RAD_PRESSURE)));
            }

            static PyObject *t_CdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_CdmMetadataKey::wrap_Object(CdmMetadataKey(((t_CdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_CdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmMetadataKey_of_(t_CdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmMetadataKey_process(t_CdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmMetadataKey::valueOf(a0));
                return t_CdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< CdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_CdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_CdmMetadataKey_get__parameters_(t_CdmMetadataKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *IntersectionAlgorithm::class$ = NULL;
        jmethodID *IntersectionAlgorithm::mids$ = NULL;
        bool IntersectionAlgorithm::live$ = false;

        jclass IntersectionAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/IntersectionAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAlgorithmId_58f1b48b3d6060f9] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_2268d18be49a6087] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_bffffb02b1b74895] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_5fc8cb427a1ada2e] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::api::AlgorithmId IntersectionAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_58f1b48b3d6060f9]));
        }

        jdouble IntersectionAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_2268d18be49a6087], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IntersectionAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_bffffb02b1b74895], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IntersectionAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_5fc8cb427a1ada2e], a0.this$, a1.this$, a2.this$, a3.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        static PyObject *t_IntersectionAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IntersectionAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IntersectionAlgorithm_getAlgorithmId(t_IntersectionAlgorithm *self);
        static PyObject *t_IntersectionAlgorithm_getElevation(t_IntersectionAlgorithm *self, PyObject *args);
        static PyObject *t_IntersectionAlgorithm_intersection(t_IntersectionAlgorithm *self, PyObject *args);
        static PyObject *t_IntersectionAlgorithm_refineIntersection(t_IntersectionAlgorithm *self, PyObject *args);
        static PyObject *t_IntersectionAlgorithm_get__algorithmId(t_IntersectionAlgorithm *self, void *data);
        static PyGetSetDef t_IntersectionAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_IntersectionAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IntersectionAlgorithm__methods_[] = {
          DECLARE_METHOD(t_IntersectionAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntersectionAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntersectionAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_IntersectionAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_IntersectionAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_IntersectionAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IntersectionAlgorithm)[] = {
          { Py_tp_methods, t_IntersectionAlgorithm__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_IntersectionAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IntersectionAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IntersectionAlgorithm, t_IntersectionAlgorithm, IntersectionAlgorithm);

        void t_IntersectionAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(IntersectionAlgorithm), &PY_TYPE_DEF(IntersectionAlgorithm), module, "IntersectionAlgorithm", 0);
        }

        void t_IntersectionAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntersectionAlgorithm), "class_", make_descriptor(IntersectionAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntersectionAlgorithm), "wrapfn_", make_descriptor(t_IntersectionAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntersectionAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IntersectionAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IntersectionAlgorithm::initializeClass, 1)))
            return NULL;
          return t_IntersectionAlgorithm::wrap_Object(IntersectionAlgorithm(((t_IntersectionAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_IntersectionAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IntersectionAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_IntersectionAlgorithm_getAlgorithmId(t_IntersectionAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_IntersectionAlgorithm_getElevation(t_IntersectionAlgorithm *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", args);
          return NULL;
        }

        static PyObject *t_IntersectionAlgorithm_intersection(t_IntersectionAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_IntersectionAlgorithm_refineIntersection(t_IntersectionAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
          return NULL;
        }

        static PyObject *t_IntersectionAlgorithm_get__algorithmId(t_IntersectionAlgorithm *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "java/lang/Class.h"
#include "java/util/SortedSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EopHistoryLoader::class$ = NULL;
      jmethodID *EopHistoryLoader::mids$ = NULL;
      bool EopHistoryLoader::live$ = false;

      jclass EopHistoryLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EopHistoryLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_fillHistory_dc8806c52abe2b9d] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void EopHistoryLoader::fillHistory(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::java::util::SortedSet & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_fillHistory_dc8806c52abe2b9d], a0.this$, a1.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_EopHistoryLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader_fillHistory(t_EopHistoryLoader *self, PyObject *args);

      static PyMethodDef t_EopHistoryLoader__methods_[] = {
        DECLARE_METHOD(t_EopHistoryLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader, fillHistory, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EopHistoryLoader)[] = {
        { Py_tp_methods, t_EopHistoryLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EopHistoryLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EopHistoryLoader, t_EopHistoryLoader, EopHistoryLoader);

      void t_EopHistoryLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(EopHistoryLoader), &PY_TYPE_DEF(EopHistoryLoader), module, "EopHistoryLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "Parser", make_descriptor(&PY_TYPE_DEF(EopHistoryLoader$Parser)));
      }

      void t_EopHistoryLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "class_", make_descriptor(EopHistoryLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "wrapfn_", make_descriptor(t_EopHistoryLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EopHistoryLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EopHistoryLoader::initializeClass, 1)))
          return NULL;
        return t_EopHistoryLoader::wrap_Object(EopHistoryLoader(((t_EopHistoryLoader *) arg)->object.this$));
      }
      static PyObject *t_EopHistoryLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EopHistoryLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EopHistoryLoader_fillHistory(t_EopHistoryLoader *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::SortedSet a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "KK", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::java::util::SortedSet::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &p1, ::java::util::t_SortedSet::parameters_))
        {
          OBJ_CALL(self->object.fillHistory(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fillHistory", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathIllegalStateException::class$ = NULL;
      jmethodID *MathIllegalStateException::mids$ = NULL;
      bool MathIllegalStateException::live$ = false;

      jclass MathIllegalStateException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathIllegalStateException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4fde7f3f87bbd6f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_0ff5a331e85ddf14] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathIllegalStateException::MathIllegalStateException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_4fde7f3f87bbd6f7, a0.this$, a1.this$)) {}

      MathIllegalStateException::MathIllegalStateException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0ff5a331e85ddf14, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_MathIllegalStateException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathIllegalStateException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathIllegalStateException_init_(t_MathIllegalStateException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MathIllegalStateException__methods_[] = {
        DECLARE_METHOD(t_MathIllegalStateException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathIllegalStateException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathIllegalStateException)[] = {
        { Py_tp_methods, t_MathIllegalStateException__methods_ },
        { Py_tp_init, (void *) t_MathIllegalStateException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathIllegalStateException)[] = {
        &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
        NULL
      };

      DEFINE_TYPE(MathIllegalStateException, t_MathIllegalStateException, MathIllegalStateException);

      void t_MathIllegalStateException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathIllegalStateException), &PY_TYPE_DEF(MathIllegalStateException), module, "MathIllegalStateException", 0);
      }

      void t_MathIllegalStateException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "class_", make_descriptor(MathIllegalStateException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "wrapfn_", make_descriptor(t_MathIllegalStateException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathIllegalStateException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathIllegalStateException::initializeClass, 1)))
          return NULL;
        return t_MathIllegalStateException::wrap_Object(MathIllegalStateException(((t_MathIllegalStateException *) arg)->object.this$));
      }
      static PyObject *t_MathIllegalStateException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathIllegalStateException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathIllegalStateException_init_(t_MathIllegalStateException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathIllegalStateException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathIllegalStateException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            MathIllegalStateException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathIllegalStateException(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbit::class$ = NULL;
      jmethodID *FieldOrbit::mids$ = NULL;
      bool FieldOrbit::live$ = false;

      jclass FieldOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addKeplerContribution_442a44d8b8481234] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_613c8f46c659f636] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_613c8f46c659f636] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getE_613c8f46c659f636] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_613c8f46c659f636] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_613c8f46c659f636] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_613c8f46c659f636] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_613c8f46c659f636] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_613c8f46c659f636] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_613c8f46c659f636] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_613c8f46c659f636] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getJacobianWrtCartesian_ebd0d059969e98c5] = env->getMethodID(cls, "getJacobianWrtCartesian", "(Lorg/orekit/orbits/PositionAngleType;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getJacobianWrtParameters_ebd0d059969e98c5] = env->getMethodID(cls, "getJacobianWrtParameters", "(Lorg/orekit/orbits/PositionAngleType;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getKeplerianMeanMotion_613c8f46c659f636] = env->getMethodID(cls, "getKeplerianMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianPeriod_613c8f46c659f636] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_613c8f46c659f636] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_613c8f46c659f636] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_613c8f46c659f636] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_613c8f46c659f636] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_613c8f46c659f636] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_613c8f46c659f636] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomalyDotWrtA_613c8f46c659f636] = env->getMethodID(cls, "getMeanAnomalyDotWrtA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMu_613c8f46c659f636] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPVCoordinates_232470f1b769250c] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_52ae651ad18178ce] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_4ac52e75113a03db] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_2d64addf4c3391d9] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_b026e433cf2ed2d1] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getType_2cea2a2cb3e02091] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_89b302893bdbe1f1] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_isElliptical_89b302893bdbe1f1] = env->getMethodID(cls, "isElliptical", "()Z");
          mids$[mid_shiftedBy_c027c7cdca66d228] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_toOrbit_71f9c54b5f482a59] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/Orbit;");
          mids$[mid_getZero_613c8f46c659f636] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOne_613c8f46c659f636] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_initPVCoordinates_232470f1b769250c] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_initPosition_2d64addf4c3391d9] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hasNonKeplerianAcceleration_3c68f52eec743312] = env->getStaticMethodID(cls, "hasNonKeplerianAcceleration", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;)Z");
          mids$[mid_fillHalfRow_1d362b245369e979] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_3cec009d62fadbfd] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_114408e0134b1be0] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_ba5461181dadfce5] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_6ee8dc1bfd22e3bd] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_cca06726d93d40de] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_442a44d8b8481234], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_613c8f46c659f636]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldOrbit::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f1fe4daf77c66560]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_613c8f46c659f636]));
      }

      ::org::orekit::frames::Frame FieldOrbit::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_613c8f46c659f636]));
      }

      void FieldOrbit::getJacobianWrtCartesian(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtCartesian_ebd0d059969e98c5], a0.this$, a1.this$);
      }

      void FieldOrbit::getJacobianWrtParameters(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtParameters_ebd0d059969e98c5], a0.this$, a1.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getKeplerianMeanMotion() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianMeanMotion_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getKeplerianPeriod() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getMeanAnomalyDotWrtA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomalyDotWrtA_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getMu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_613c8f46c659f636]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_232470f1b769250c]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_52ae651ad18178ce], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_4ac52e75113a03db], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldOrbit::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldOrbit::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_b026e433cf2ed2d1], a0.this$));
      }

      ::org::orekit::orbits::OrbitType FieldOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_2cea2a2cb3e02091]));
      }

      jboolean FieldOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_89b302893bdbe1f1]);
      }

      jboolean FieldOrbit::isElliptical() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isElliptical_89b302893bdbe1f1]);
      }

      FieldOrbit FieldOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_c027c7cdca66d228], a0.this$));
      }

      ::org::orekit::orbits::Orbit FieldOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_toOrbit_71f9c54b5f482a59]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_FieldOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbit_of_(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_addKeplerContribution(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getA(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getADot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getDate(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getE(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEx(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialExDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEy(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEyDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getFrame(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHx(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHxDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHy(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHyDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getI(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getIDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getJacobianWrtCartesian(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getJacobianWrtParameters(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getKeplerianMeanMotion(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getKeplerianPeriod(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLE(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLEDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLM(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLMDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLv(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLvDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getMeanAnomalyDotWrtA(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getMu(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getPVCoordinates(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getPosition(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getType(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_hasDerivatives(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_isElliptical(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_shiftedBy(t_FieldOrbit *self, PyObject *arg);
      static PyObject *t_FieldOrbit_toOrbit(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_get__a(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__aDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__date(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__e(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__eDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__elliptical(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEx(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialExDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEy(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEyDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__frame(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hx(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hxDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hy(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hyDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__i(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__iDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__keplerianMeanMotion(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__keplerianPeriod(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lE(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lEDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lM(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lMDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lv(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lvDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__meanAnomalyDotWrtA(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__mu(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__pVCoordinates(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__position(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__type(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__parameters_(t_FieldOrbit *self, void *data);
      static PyGetSetDef t_FieldOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbit, a),
        DECLARE_GET_FIELD(t_FieldOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldOrbit, date),
        DECLARE_GET_FIELD(t_FieldOrbit, e),
        DECLARE_GET_FIELD(t_FieldOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldOrbit, elliptical),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldOrbit, frame),
        DECLARE_GET_FIELD(t_FieldOrbit, hx),
        DECLARE_GET_FIELD(t_FieldOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldOrbit, hy),
        DECLARE_GET_FIELD(t_FieldOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldOrbit, i),
        DECLARE_GET_FIELD(t_FieldOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldOrbit, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_FieldOrbit, keplerianPeriod),
        DECLARE_GET_FIELD(t_FieldOrbit, lE),
        DECLARE_GET_FIELD(t_FieldOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldOrbit, lM),
        DECLARE_GET_FIELD(t_FieldOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldOrbit, lv),
        DECLARE_GET_FIELD(t_FieldOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldOrbit, meanAnomalyDotWrtA),
        DECLARE_GET_FIELD(t_FieldOrbit, mu),
        DECLARE_GET_FIELD(t_FieldOrbit, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldOrbit, position),
        DECLARE_GET_FIELD(t_FieldOrbit, type),
        DECLARE_GET_FIELD(t_FieldOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getADot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getE, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialExDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHx, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHxDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHy, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getIDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getJacobianWrtCartesian, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getJacobianWrtParameters, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLE, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLM, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLMDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLv, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLvDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getMeanAnomalyDotWrtA, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getMu, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getType, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, hasDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, isElliptical, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, shiftedBy, METH_O),
        DECLARE_METHOD(t_FieldOrbit, toOrbit, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbit)[] = {
        { Py_tp_methods, t_FieldOrbit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbit)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldOrbit, t_FieldOrbit, FieldOrbit);
      PyObject *t_FieldOrbit::wrap_Object(const FieldOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbit *self = (t_FieldOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbit *self = (t_FieldOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbit), &PY_TYPE_DEF(FieldOrbit), module, "FieldOrbit", 0);
      }

      void t_FieldOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "class_", make_descriptor(FieldOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "wrapfn_", make_descriptor(t_FieldOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldOrbit::wrap_Object(FieldOrbit(((t_FieldOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbit_of_(t_FieldOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldOrbit_addKeplerContribution(t_FieldOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getA(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getADot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getADot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getDate(t_FieldOrbit *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldOrbit_getE(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEx(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialExDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialExDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEy(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEyDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getFrame(t_FieldOrbit *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHx(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHxDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHxDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHy(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHyDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getI(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getIDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getIDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getJacobianWrtCartesian(t_FieldOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobianWrtCartesian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtCartesian", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getJacobianWrtParameters(t_FieldOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobianWrtParameters(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtParameters", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getKeplerianMeanMotion(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getKeplerianPeriod(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLE(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLEDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLM(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLMDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLv(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLv());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLvDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLvDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getMeanAnomalyDotWrtA(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeanAnomalyDotWrtA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getMu(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMu());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getPVCoordinates(t_FieldOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getPosition(t_FieldOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getType(t_FieldOrbit *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_hasDerivatives(t_FieldOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasDerivatives());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldOrbit_isElliptical(t_FieldOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isElliptical());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldOrbit_shiftedBy(t_FieldOrbit *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldOrbit result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldOrbit_toOrbit(t_FieldOrbit *self)
      {
        ::org::orekit::orbits::Orbit result((jobject) NULL);
        OBJ_CALL(result = self->object.toOrbit());
        return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
      }
      static PyObject *t_FieldOrbit_get__parameters_(t_FieldOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrbit_get__a(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__aDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__date(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__e(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__eDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__elliptical(t_FieldOrbit *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isElliptical());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEx(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialExDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEy(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEyDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__frame(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hx(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hxDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hy(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hyDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__i(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__iDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__keplerianMeanMotion(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__keplerianPeriod(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lE(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lEDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lM(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lMDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lv(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lvDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__meanAnomalyDotWrtA(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanAnomalyDotWrtA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__mu(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMu());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__pVCoordinates(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__position(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__type(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/EarthOrientationParameterMessage.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *EarthOrientationParameterMessage::class$ = NULL;
          jmethodID *EarthOrientationParameterMessage::mids$ = NULL;
          bool EarthOrientationParameterMessage::live$ = false;

          jclass EarthOrientationParameterMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/EarthOrientationParameterMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e1b2f7b885c85083] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getDut1_557b8123390d8d0c] = env->getMethodID(cls, "getDut1", "()D");
              mids$[mid_getDut1Dot_557b8123390d8d0c] = env->getMethodID(cls, "getDut1Dot", "()D");
              mids$[mid_getDut1DotDot_557b8123390d8d0c] = env->getMethodID(cls, "getDut1DotDot", "()D");
              mids$[mid_getReferenceEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTransmissionTime_557b8123390d8d0c] = env->getMethodID(cls, "getTransmissionTime", "()D");
              mids$[mid_getXp_557b8123390d8d0c] = env->getMethodID(cls, "getXp", "()D");
              mids$[mid_getXpDot_557b8123390d8d0c] = env->getMethodID(cls, "getXpDot", "()D");
              mids$[mid_getXpDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getXpDotDot", "()D");
              mids$[mid_getYp_557b8123390d8d0c] = env->getMethodID(cls, "getYp", "()D");
              mids$[mid_getYpDot_557b8123390d8d0c] = env->getMethodID(cls, "getYpDot", "()D");
              mids$[mid_getYpDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getYpDotDot", "()D");
              mids$[mid_setDut1_10f281d777284cea] = env->getMethodID(cls, "setDut1", "(D)V");
              mids$[mid_setDut1Dot_10f281d777284cea] = env->getMethodID(cls, "setDut1Dot", "(D)V");
              mids$[mid_setDut1DotDot_10f281d777284cea] = env->getMethodID(cls, "setDut1DotDot", "(D)V");
              mids$[mid_setReferenceEpoch_20affcbd28542333] = env->getMethodID(cls, "setReferenceEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTransmissionTime_10f281d777284cea] = env->getMethodID(cls, "setTransmissionTime", "(D)V");
              mids$[mid_setXp_10f281d777284cea] = env->getMethodID(cls, "setXp", "(D)V");
              mids$[mid_setXpDot_10f281d777284cea] = env->getMethodID(cls, "setXpDot", "(D)V");
              mids$[mid_setXpDotDot_10f281d777284cea] = env->getMethodID(cls, "setXpDotDot", "(D)V");
              mids$[mid_setYp_10f281d777284cea] = env->getMethodID(cls, "setYp", "(D)V");
              mids$[mid_setYpDot_10f281d777284cea] = env->getMethodID(cls, "setYpDot", "(D)V");
              mids$[mid_setYpDotDot_10f281d777284cea] = env->getMethodID(cls, "setYpDotDot", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EarthOrientationParameterMessage::EarthOrientationParameterMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_e1b2f7b885c85083, a0.this$, a1, a2.this$)) {}

          jdouble EarthOrientationParameterMessage::getDut1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1_557b8123390d8d0c]);
          }

          jdouble EarthOrientationParameterMessage::getDut1Dot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1Dot_557b8123390d8d0c]);
          }

          jdouble EarthOrientationParameterMessage::getDut1DotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1DotDot_557b8123390d8d0c]);
          }

          ::org::orekit::time::AbsoluteDate EarthOrientationParameterMessage::getReferenceEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceEpoch_7a97f7e149e79afb]));
          }

          jdouble EarthOrientationParameterMessage::getTransmissionTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_557b8123390d8d0c]);
          }

          jdouble EarthOrientationParameterMessage::getXp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXp_557b8123390d8d0c]);
          }

          jdouble EarthOrientationParameterMessage::getXpDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXpDot_557b8123390d8d0c]);
          }

          jdouble EarthOrientationParameterMessage::getXpDotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXpDotDot_557b8123390d8d0c]);
          }

          jdouble EarthOrientationParameterMessage::getYp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYp_557b8123390d8d0c]);
          }

          jdouble EarthOrientationParameterMessage::getYpDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYpDot_557b8123390d8d0c]);
          }

          jdouble EarthOrientationParameterMessage::getYpDotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYpDotDot_557b8123390d8d0c]);
          }

          void EarthOrientationParameterMessage::setDut1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1_10f281d777284cea], a0);
          }

          void EarthOrientationParameterMessage::setDut1Dot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1Dot_10f281d777284cea], a0);
          }

          void EarthOrientationParameterMessage::setDut1DotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1DotDot_10f281d777284cea], a0);
          }

          void EarthOrientationParameterMessage::setReferenceEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceEpoch_20affcbd28542333], a0.this$);
          }

          void EarthOrientationParameterMessage::setTransmissionTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmissionTime_10f281d777284cea], a0);
          }

          void EarthOrientationParameterMessage::setXp(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXp_10f281d777284cea], a0);
          }

          void EarthOrientationParameterMessage::setXpDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXpDot_10f281d777284cea], a0);
          }

          void EarthOrientationParameterMessage::setXpDotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXpDotDot_10f281d777284cea], a0);
          }

          void EarthOrientationParameterMessage::setYp(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYp_10f281d777284cea], a0);
          }

          void EarthOrientationParameterMessage::setYpDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYpDot_10f281d777284cea], a0);
          }

          void EarthOrientationParameterMessage::setYpDotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYpDotDot_10f281d777284cea], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          static PyObject *t_EarthOrientationParameterMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EarthOrientationParameterMessage_init_(t_EarthOrientationParameterMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EarthOrientationParameterMessage_getDut1(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getDut1Dot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getDut1DotDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getReferenceEpoch(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getTransmissionTime(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getXp(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getXpDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getXpDotDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getYp(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getYpDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getYpDotDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_setDut1(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setDut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setDut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setReferenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setTransmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setXp(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setXpDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setXpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setYp(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setYpDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setYpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_get__dut1(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__dut1(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__dut1Dot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__dut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__dut1DotDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__dut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__referenceEpoch(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__referenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__transmissionTime(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__transmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__xp(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__xp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__xpDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__xpDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__xpDotDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__xpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__yp(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__yp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__ypDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__ypDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__ypDotDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__ypDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_EarthOrientationParameterMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, dut1),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, dut1Dot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, dut1DotDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, referenceEpoch),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, transmissionTime),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, xp),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, xpDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, xpDotDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, yp),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, ypDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, ypDotDot),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EarthOrientationParameterMessage__methods_[] = {
            DECLARE_METHOD(t_EarthOrientationParameterMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getDut1, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getDut1Dot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getDut1DotDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getReferenceEpoch, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getTransmissionTime, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getXp, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getXpDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getXpDotDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getYp, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getYpDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getYpDotDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setDut1, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setDut1Dot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setDut1DotDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setReferenceEpoch, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setTransmissionTime, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setXp, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setXpDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setXpDotDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setYp, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setYpDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setYpDotDot, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EarthOrientationParameterMessage)[] = {
            { Py_tp_methods, t_EarthOrientationParameterMessage__methods_ },
            { Py_tp_init, (void *) t_EarthOrientationParameterMessage_init_ },
            { Py_tp_getset, t_EarthOrientationParameterMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EarthOrientationParameterMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::TypeSvMessage),
            NULL
          };

          DEFINE_TYPE(EarthOrientationParameterMessage, t_EarthOrientationParameterMessage, EarthOrientationParameterMessage);

          void t_EarthOrientationParameterMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(EarthOrientationParameterMessage), &PY_TYPE_DEF(EarthOrientationParameterMessage), module, "EarthOrientationParameterMessage", 0);
          }

          void t_EarthOrientationParameterMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EarthOrientationParameterMessage), "class_", make_descriptor(EarthOrientationParameterMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EarthOrientationParameterMessage), "wrapfn_", make_descriptor(t_EarthOrientationParameterMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EarthOrientationParameterMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EarthOrientationParameterMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EarthOrientationParameterMessage::initializeClass, 1)))
              return NULL;
            return t_EarthOrientationParameterMessage::wrap_Object(EarthOrientationParameterMessage(((t_EarthOrientationParameterMessage *) arg)->object.this$));
          }
          static PyObject *t_EarthOrientationParameterMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EarthOrientationParameterMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EarthOrientationParameterMessage_init_(t_EarthOrientationParameterMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            EarthOrientationParameterMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = EarthOrientationParameterMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EarthOrientationParameterMessage_getDut1(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDut1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getDut1Dot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDut1Dot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getDut1DotDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDut1DotDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getReferenceEpoch(t_EarthOrientationParameterMessage *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getTransmissionTime(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getXp(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getXp());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getXpDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getXpDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getXpDotDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getXpDotDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getYp(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getYp());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getYpDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getYpDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getYpDotDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getYpDotDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_setDut1(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setDut1(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDut1", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setDut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setDut1Dot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDut1Dot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setDut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setDut1DotDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDut1DotDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setReferenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setReferenceEpoch(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReferenceEpoch", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setTransmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setTransmissionTime(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTransmissionTime", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setXp(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setXp(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setXp", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setXpDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setXpDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setXpDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setXpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setXpDotDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setXpDotDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setYp(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setYp(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setYp", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setYpDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setYpDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setYpDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setYpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setYpDotDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setYpDotDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__dut1(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDut1());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__dut1(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setDut1(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "dut1", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__dut1Dot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDut1Dot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__dut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setDut1Dot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "dut1Dot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__dut1DotDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDut1DotDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__dut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setDut1DotDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "dut1DotDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__referenceEpoch(t_EarthOrientationParameterMessage *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_EarthOrientationParameterMessage_set__referenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceEpoch(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceEpoch", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__transmissionTime(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__transmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setTransmissionTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "transmissionTime", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__xp(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getXp());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__xp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setXp(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "xp", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__xpDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getXpDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__xpDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setXpDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "xpDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__xpDotDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getXpDotDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__xpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setXpDotDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "xpDotDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__yp(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getYp());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__yp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setYp(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "yp", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__ypDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getYpDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__ypDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setYpDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ypDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__ypDotDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getYpDotDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__ypDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setYpDotDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ypDotDot", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCycleSlipDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseMinusCodeCycleSlipDetector::class$ = NULL;
          jmethodID *PhaseMinusCodeCycleSlipDetector::mids$ = NULL;
          bool PhaseMinusCodeCycleSlipDetector::live$ = false;

          jclass PhaseMinusCodeCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseMinusCodeCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ceb2936471aec5d] = env->getMethodID(cls, "<init>", "(DDII)V");
              mids$[mid_manageData_7cae3eafa8e6978c] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseMinusCodeCycleSlipDetector::PhaseMinusCodeCycleSlipDetector(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(env->newObject(initializeClass, &mids$, mid_init$_8ceb2936471aec5d, a0, a1, a2, a3)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseMinusCodeCycleSlipDetector_init_(t_PhaseMinusCodeCycleSlipDetector *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_PhaseMinusCodeCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_PhaseMinusCodeCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseMinusCodeCycleSlipDetector, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseMinusCodeCycleSlipDetector)[] = {
            { Py_tp_methods, t_PhaseMinusCodeCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) t_PhaseMinusCodeCycleSlipDetector_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseMinusCodeCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(PhaseMinusCodeCycleSlipDetector, t_PhaseMinusCodeCycleSlipDetector, PhaseMinusCodeCycleSlipDetector);

          void t_PhaseMinusCodeCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseMinusCodeCycleSlipDetector), &PY_TYPE_DEF(PhaseMinusCodeCycleSlipDetector), module, "PhaseMinusCodeCycleSlipDetector", 0);
          }

          void t_PhaseMinusCodeCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "class_", make_descriptor(PhaseMinusCodeCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "wrapfn_", make_descriptor(t_PhaseMinusCodeCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseMinusCodeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseMinusCodeCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_PhaseMinusCodeCycleSlipDetector::wrap_Object(PhaseMinusCodeCycleSlipDetector(((t_PhaseMinusCodeCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseMinusCodeCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseMinusCodeCycleSlipDetector_init_(t_PhaseMinusCodeCycleSlipDetector *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jint a3;
            PhaseMinusCodeCycleSlipDetector object((jobject) NULL);

            if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PhaseMinusCodeCycleSlipDetector(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Sin.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sin::class$ = NULL;
        jmethodID *Sin::mids$ = NULL;
        bool Sin::live$ = false;

        jclass Sin::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sin");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sin::Sin() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Sin::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sin::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Sin_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sin_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sin_init_(t_Sin *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sin_value(t_Sin *self, PyObject *args);

        static PyMethodDef t_Sin__methods_[] = {
          DECLARE_METHOD(t_Sin, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sin, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sin, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sin)[] = {
          { Py_tp_methods, t_Sin__methods_ },
          { Py_tp_init, (void *) t_Sin_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sin)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sin, t_Sin, Sin);

        void t_Sin::install(PyObject *module)
        {
          installType(&PY_TYPE(Sin), &PY_TYPE_DEF(Sin), module, "Sin", 0);
        }

        void t_Sin::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "class_", make_descriptor(Sin::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "wrapfn_", make_descriptor(t_Sin::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sin_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sin::initializeClass, 1)))
            return NULL;
          return t_Sin::wrap_Object(Sin(((t_Sin *) arg)->object.this$));
        }
        static PyObject *t_Sin_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sin::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sin_init_(t_Sin *self, PyObject *args, PyObject *kwds)
        {
          Sin object((jobject) NULL);

          INT_CALL(object = Sin());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sin_value(t_Sin *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/AklToussaintHeuristic.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *AklToussaintHeuristic::class$ = NULL;
            jmethodID *AklToussaintHeuristic::mids$ = NULL;
            bool AklToussaintHeuristic::live$ = false;

            jclass AklToussaintHeuristic::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/AklToussaintHeuristic");

                mids$ = new jmethodID[max_mid];
                mids$[mid_reducePoints_6472a4633751d554] = env->getStaticMethodID(cls, "reducePoints", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Collection AklToussaintHeuristic::reducePoints(const ::java::util::Collection & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_reducePoints_6472a4633751d554], a0.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_AklToussaintHeuristic_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AklToussaintHeuristic_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AklToussaintHeuristic_reducePoints(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_AklToussaintHeuristic__methods_[] = {
              DECLARE_METHOD(t_AklToussaintHeuristic, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AklToussaintHeuristic, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AklToussaintHeuristic, reducePoints, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AklToussaintHeuristic)[] = {
              { Py_tp_methods, t_AklToussaintHeuristic__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AklToussaintHeuristic)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AklToussaintHeuristic, t_AklToussaintHeuristic, AklToussaintHeuristic);

            void t_AklToussaintHeuristic::install(PyObject *module)
            {
              installType(&PY_TYPE(AklToussaintHeuristic), &PY_TYPE_DEF(AklToussaintHeuristic), module, "AklToussaintHeuristic", 0);
            }

            void t_AklToussaintHeuristic::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AklToussaintHeuristic), "class_", make_descriptor(AklToussaintHeuristic::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AklToussaintHeuristic), "wrapfn_", make_descriptor(t_AklToussaintHeuristic::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AklToussaintHeuristic), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AklToussaintHeuristic_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AklToussaintHeuristic::initializeClass, 1)))
                return NULL;
              return t_AklToussaintHeuristic::wrap_Object(AklToussaintHeuristic(((t_AklToussaintHeuristic *) arg)->object.this$));
            }
            static PyObject *t_AklToussaintHeuristic_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AklToussaintHeuristic::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AklToussaintHeuristic_reducePoints(PyTypeObject *type, PyObject *arg)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::Collection result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::hull::AklToussaintHeuristic::reducePoints(a0));
                return ::java::util::t_Collection::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D));
              }

              PyErr_SetArgsError(type, "reducePoints", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/NeQuickModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *NeQuickModel::class$ = NULL;
          jmethodID *NeQuickModel::mids$ = NULL;
          bool NeQuickModel::live$ = false;

          jclass NeQuickModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/NeQuickModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_dbb457b725e3379e] = env->getMethodID(cls, "<init>", "([DLorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_e09499dc3d690830] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_8fbdb07bb0b935f0] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_stec_680ec225edbd0868] = env->getMethodID(cls, "stec", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)D");
              mids$[mid_stec_65692c27b4e040bd] = env->getMethodID(cls, "stec", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NeQuickModel::NeQuickModel(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

          NeQuickModel::NeQuickModel(const JArray< jdouble > & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dbb457b725e3379e, a0.this$, a1.this$)) {}

          ::java::util::List NeQuickModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          jdouble NeQuickModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_e09499dc3d690830], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement NeQuickModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_8fbdb07bb0b935f0], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble NeQuickModel::stec(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::GeodeticPoint & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_stec_680ec225edbd0868], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement NeQuickModel::stec(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::bodies::FieldGeodeticPoint & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_stec_65692c27b4e040bd], a0.this$, a1.this$, a2.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {
          static PyObject *t_NeQuickModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NeQuickModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NeQuickModel_init_(t_NeQuickModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NeQuickModel_getParametersDrivers(t_NeQuickModel *self);
          static PyObject *t_NeQuickModel_pathDelay(t_NeQuickModel *self, PyObject *args);
          static PyObject *t_NeQuickModel_stec(t_NeQuickModel *self, PyObject *args);
          static PyObject *t_NeQuickModel_get__parametersDrivers(t_NeQuickModel *self, void *data);
          static PyGetSetDef t_NeQuickModel__fields_[] = {
            DECLARE_GET_FIELD(t_NeQuickModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NeQuickModel__methods_[] = {
            DECLARE_METHOD(t_NeQuickModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NeQuickModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NeQuickModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_NeQuickModel, pathDelay, METH_VARARGS),
            DECLARE_METHOD(t_NeQuickModel, stec, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NeQuickModel)[] = {
            { Py_tp_methods, t_NeQuickModel__methods_ },
            { Py_tp_init, (void *) t_NeQuickModel_init_ },
            { Py_tp_getset, t_NeQuickModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NeQuickModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NeQuickModel, t_NeQuickModel, NeQuickModel);

          void t_NeQuickModel::install(PyObject *module)
          {
            installType(&PY_TYPE(NeQuickModel), &PY_TYPE_DEF(NeQuickModel), module, "NeQuickModel", 0);
          }

          void t_NeQuickModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "class_", make_descriptor(NeQuickModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "wrapfn_", make_descriptor(t_NeQuickModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NeQuickModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NeQuickModel::initializeClass, 1)))
              return NULL;
            return t_NeQuickModel::wrap_Object(NeQuickModel(((t_NeQuickModel *) arg)->object.this$));
          }
          static PyObject *t_NeQuickModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NeQuickModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NeQuickModel_init_(t_NeQuickModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                NeQuickModel object((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  INT_CALL(object = NeQuickModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::orekit::time::TimeScale a1((jobject) NULL);
                NeQuickModel object((jobject) NULL);

                if (!parseArgs(args, "[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = NeQuickModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NeQuickModel_getParametersDrivers(t_NeQuickModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_NeQuickModel_pathDelay(t_NeQuickModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_NeQuickModel_stec(t_NeQuickModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::bodies::FieldGeodeticPoint a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
                {
                  OBJ_CALL(result = self->object.stec(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::bodies::GeodeticPoint a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.stec(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "stec", args);
            return NULL;
          }

          static PyObject *t_NeQuickModel_get__parametersDrivers(t_NeQuickModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionMessage.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionMessage::class$ = NULL;
              jmethodID *RtcmCorrectionMessage::mids$ = NULL;
              bool RtcmCorrectionMessage::live$ = false;

              jclass RtcmCorrectionMessage::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionMessage");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_b08a631b84df15a5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");
                  mids$[mid_getDataMap_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getDataMap", "()Ljava/util/Map;");
                  mids$[mid_getHeader_0db4eac2bf3a134e] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;");
                  mids$[mid_getSatelliteSystem_8b86408cc2633961] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionMessage::RtcmCorrectionMessage(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage(env->newObject(initializeClass, &mids$, mid_init$_b08a631b84df15a5, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map RtcmCorrectionMessage::getDataMap() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getDataMap_1e62c2f73fbdd1c4]));
              }

              ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader RtcmCorrectionMessage::getHeader() const
              {
                return ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader(env->callObjectMethod(this$, mids$[mid_getHeader_0db4eac2bf3a134e]));
              }

              ::org::orekit::gnss::SatelliteSystem RtcmCorrectionMessage::getSatelliteSystem() const
              {
                return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_8b86408cc2633961]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              static PyObject *t_RtcmCorrectionMessage_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionMessage_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionMessage_of_(t_RtcmCorrectionMessage *self, PyObject *args);
              static int t_RtcmCorrectionMessage_init_(t_RtcmCorrectionMessage *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionMessage_getDataMap(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_getHeader(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_getSatelliteSystem(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_get__dataMap(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__header(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__satelliteSystem(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__parameters_(t_RtcmCorrectionMessage *self, void *data);
              static PyGetSetDef t_RtcmCorrectionMessage__fields_[] = {
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, dataMap),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, header),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, satelliteSystem),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionMessage__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionMessage, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, of_, METH_VARARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getDataMap, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getHeader, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getSatelliteSystem, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionMessage)[] = {
                { Py_tp_methods, t_RtcmCorrectionMessage__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionMessage_init_ },
                { Py_tp_getset, t_RtcmCorrectionMessage__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionMessage)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmMessage),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionMessage, t_RtcmCorrectionMessage, RtcmCorrectionMessage);
              PyObject *t_RtcmCorrectionMessage::wrap_Object(const RtcmCorrectionMessage& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_RtcmCorrectionMessage::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmCorrectionMessage *self = (t_RtcmCorrectionMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_RtcmCorrectionMessage::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_RtcmCorrectionMessage::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmCorrectionMessage *self = (t_RtcmCorrectionMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_RtcmCorrectionMessage::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionMessage), &PY_TYPE_DEF(RtcmCorrectionMessage), module, "RtcmCorrectionMessage", 0);
              }

              void t_RtcmCorrectionMessage::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "class_", make_descriptor(RtcmCorrectionMessage::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "wrapfn_", make_descriptor(t_RtcmCorrectionMessage::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionMessage_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionMessage::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionMessage::wrap_Object(RtcmCorrectionMessage(((t_RtcmCorrectionMessage *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionMessage_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionMessage::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RtcmCorrectionMessage_of_(t_RtcmCorrectionMessage *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_RtcmCorrectionMessage_init_(t_RtcmCorrectionMessage *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                RtcmCorrectionMessage object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = RtcmCorrectionMessage(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_RtcmCorrectionMessage_getDataMap(t_RtcmCorrectionMessage *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getDataMap());
                return ::java::util::t_Map::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionMessage_getHeader(t_RtcmCorrectionMessage *self)
              {
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader result((jobject) NULL);
                OBJ_CALL(result = self->object.getHeader());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::rtcm::correction::t_RtcmCorrectionHeader::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionMessage_getSatelliteSystem(t_RtcmCorrectionMessage *self)
              {
                ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
              }
              static PyObject *t_RtcmCorrectionMessage_get__parameters_(t_RtcmCorrectionMessage *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RtcmCorrectionMessage_get__dataMap(t_RtcmCorrectionMessage *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getDataMap());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_RtcmCorrectionMessage_get__header(t_RtcmCorrectionMessage *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::gnss::metric::messages::rtcm::correction::t_RtcmCorrectionHeader::wrap_Object(value);
              }

              static PyObject *t_RtcmCorrectionMessage_get__satelliteSystem(t_RtcmCorrectionMessage *self, void *data)
              {
                ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *S1Point::class$ = NULL;
          jmethodID *S1Point::mids$ = NULL;
          bool S1Point::live$ = false;
          S1Point *S1Point::NaN = NULL;

          jclass S1Point::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/S1Point");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_distance_cf1fec2b7b1c0efe] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_0ae4679e4e35d729] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;Lorg/hipparchus/geometry/spherical/oned/S1Point;)D");
              mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_221e8e85cb385209] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_557b8123390d8d0c] = env->getMethodID(cls, "getAlpha", "()D");
              mids$[mid_getSpace_cf9410d213a7cbb9] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getVector_f681f2fc9cdfab57] = env->getMethodID(cls, "getVector", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NaN = new S1Point(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/spherical/oned/S1Point;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          S1Point::S1Point(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          jdouble S1Point::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_cf1fec2b7b1c0efe], a0.this$);
          }

          jdouble S1Point::distance(const S1Point & a0, const S1Point & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_0ae4679e4e35d729], a0.this$, a1.this$);
          }

          jboolean S1Point::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
          }

          jboolean S1Point::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_221e8e85cb385209], a0.this$);
          }

          jdouble S1Point::getAlpha() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::Space S1Point::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_cf9410d213a7cbb9]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D S1Point::getVector() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getVector_f681f2fc9cdfab57]));
          }

          jint S1Point::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
          }

          jboolean S1Point::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          static PyObject *t_S1Point_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_S1Point_instance_(PyTypeObject *type, PyObject *arg);
          static int t_S1Point_init_(t_S1Point *self, PyObject *args, PyObject *kwds);
          static PyObject *t_S1Point_distance(t_S1Point *self, PyObject *arg);
          static PyObject *t_S1Point_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_S1Point_equals(t_S1Point *self, PyObject *args);
          static PyObject *t_S1Point_equalsIeee754(t_S1Point *self, PyObject *arg);
          static PyObject *t_S1Point_getAlpha(t_S1Point *self);
          static PyObject *t_S1Point_getSpace(t_S1Point *self);
          static PyObject *t_S1Point_getVector(t_S1Point *self);
          static PyObject *t_S1Point_hashCode(t_S1Point *self, PyObject *args);
          static PyObject *t_S1Point_isNaN(t_S1Point *self);
          static PyObject *t_S1Point_get__alpha(t_S1Point *self, void *data);
          static PyObject *t_S1Point_get__naN(t_S1Point *self, void *data);
          static PyObject *t_S1Point_get__space(t_S1Point *self, void *data);
          static PyObject *t_S1Point_get__vector(t_S1Point *self, void *data);
          static PyGetSetDef t_S1Point__fields_[] = {
            DECLARE_GET_FIELD(t_S1Point, alpha),
            DECLARE_GET_FIELD(t_S1Point, naN),
            DECLARE_GET_FIELD(t_S1Point, space),
            DECLARE_GET_FIELD(t_S1Point, vector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_S1Point__methods_[] = {
            DECLARE_METHOD(t_S1Point, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S1Point, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S1Point, distance, METH_O),
            DECLARE_METHOD(t_S1Point, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_S1Point, equals, METH_VARARGS),
            DECLARE_METHOD(t_S1Point, equalsIeee754, METH_O),
            DECLARE_METHOD(t_S1Point, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_S1Point, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_S1Point, getVector, METH_NOARGS),
            DECLARE_METHOD(t_S1Point, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_S1Point, isNaN, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(S1Point)[] = {
            { Py_tp_methods, t_S1Point__methods_ },
            { Py_tp_init, (void *) t_S1Point_init_ },
            { Py_tp_getset, t_S1Point__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(S1Point)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(S1Point, t_S1Point, S1Point);

          void t_S1Point::install(PyObject *module)
          {
            installType(&PY_TYPE(S1Point), &PY_TYPE_DEF(S1Point), module, "S1Point", 0);
          }

          void t_S1Point::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "class_", make_descriptor(S1Point::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "wrapfn_", make_descriptor(t_S1Point::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "boxfn_", make_descriptor(boxObject));
            env->getClass(S1Point::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "NaN", make_descriptor(t_S1Point::wrap_Object(*S1Point::NaN)));
          }

          static PyObject *t_S1Point_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, S1Point::initializeClass, 1)))
              return NULL;
            return t_S1Point::wrap_Object(S1Point(((t_S1Point *) arg)->object.this$));
          }
          static PyObject *t_S1Point_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, S1Point::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_S1Point_init_(t_S1Point *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            S1Point object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = S1Point(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_S1Point_distance(t_S1Point *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_S1Point_distance_(PyTypeObject *type, PyObject *args)
          {
            S1Point a0((jobject) NULL);
            S1Point a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", S1Point::initializeClass, S1Point::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::spherical::oned::S1Point::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_S1Point_equals(t_S1Point *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(S1Point), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_S1Point_equalsIeee754(t_S1Point *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_S1Point_getAlpha(t_S1Point *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_S1Point_getSpace(t_S1Point *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_S1Point_getVector(t_S1Point *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_S1Point_hashCode(t_S1Point *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(S1Point), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_S1Point_isNaN(t_S1Point *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_S1Point_get__alpha(t_S1Point *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_S1Point_get__naN(t_S1Point *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_S1Point_get__space(t_S1Point *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_S1Point_get__vector(t_S1Point *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonShortPeriodTerms.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Set.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonShortPeriodTerms::class$ = NULL;
            jmethodID *PythonShortPeriodTerms::mids$ = NULL;
            bool PythonShortPeriodTerms::live$ = false;

            jclass PythonShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getCoefficients_ee77cc1344480b7f] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_3cffd47377eca18a] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_value_5997117348549fd3] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/Orbit;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonShortPeriodTerms::PythonShortPeriodTerms() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonShortPeriodTerms::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonShortPeriodTerms::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonShortPeriodTerms::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_PythonShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonShortPeriodTerms_init_(t_PythonShortPeriodTerms *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonShortPeriodTerms_finalize(t_PythonShortPeriodTerms *self);
            static PyObject *t_PythonShortPeriodTerms_pythonExtension(t_PythonShortPeriodTerms *self, PyObject *args);
            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonShortPeriodTerms_get__self(t_PythonShortPeriodTerms *self, void *data);
            static PyGetSetDef t_PythonShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_PythonShortPeriodTerms, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_PythonShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonShortPeriodTerms)[] = {
              { Py_tp_methods, t_PythonShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) t_PythonShortPeriodTerms_init_ },
              { Py_tp_getset, t_PythonShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonShortPeriodTerms, t_PythonShortPeriodTerms, PythonShortPeriodTerms);

            void t_PythonShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonShortPeriodTerms), &PY_TYPE_DEF(PythonShortPeriodTerms), module, "PythonShortPeriodTerms", 1);
            }

            void t_PythonShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "class_", make_descriptor(PythonShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "wrapfn_", make_descriptor(t_PythonShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonShortPeriodTerms::initializeClass);
              JNINativeMethod methods[] = {
                { "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;", (void *) t_PythonShortPeriodTerms_getCoefficients0 },
                { "getCoefficientsKeyPrefix", "()Ljava/lang/String;", (void *) t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1 },
                { "pythonDecRef", "()V", (void *) t_PythonShortPeriodTerms_pythonDecRef2 },
                { "value", "(Lorg/orekit/orbits/Orbit;)[D", (void *) t_PythonShortPeriodTerms_value3 },
              };
              env->registerNatives(cls, methods, 4);
            }

            static PyObject *t_PythonShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_PythonShortPeriodTerms::wrap_Object(PythonShortPeriodTerms(((t_PythonShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_PythonShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonShortPeriodTerms_init_(t_PythonShortPeriodTerms *self, PyObject *args, PyObject *kwds)
            {
              PythonShortPeriodTerms object((jobject) NULL);

              INT_CALL(object = PythonShortPeriodTerms());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonShortPeriodTerms_finalize(t_PythonShortPeriodTerms *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonShortPeriodTerms_pythonExtension(t_PythonShortPeriodTerms *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  jlong result;
                  OBJ_CALL(result = self->object.pythonExtension());
                  return PyLong_FromLongLong((PY_LONG_LONG) result);
                }
                break;
               case 1:
                {
                  jlong a0;

                  if (!parseArgs(args, "J", &a0))
                  {
                    OBJ_CALL(self->object.pythonExtension(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
              return NULL;
            }

            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::Map value((jobject) NULL);
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *o1 = ::java::util::t_Set::wrap_Object(::java::util::Set(a1));
              PyObject *result = PyObject_CallMethod(obj, "getCoefficients", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
              {
                throwTypeError("getCoefficients", result);
                Py_DECREF(result);
              }
              else
              {
                jobj = jenv->NewLocalRef(value.this$);
                Py_DECREF(result);
                return jobj;
              }

              return (jobject) NULL;
            }

            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getCoefficientsKeyPrefix", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getCoefficientsKeyPrefix", result);
                Py_DECREF(result);
              }
              else
              {
                jobj = jenv->NewLocalRef(value.this$);
                Py_DECREF(result);
                return jobj;
              }

              return (jobject) NULL;
            }

            static void JNICALL t_PythonShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
              PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("value", result);
                Py_DECREF(result);
              }
              else
              {
                jobj = jenv->NewLocalRef(value.this$);
                Py_DECREF(result);
                return jobj;
              }

              return (jobject) NULL;
            }

            static PyObject *t_PythonShortPeriodTerms_get__self(t_PythonShortPeriodTerms *self, void *data)
            {
              jlong ptr;
              OBJ_CALL(ptr = self->object.pythonExtension());
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                Py_INCREF(obj);
                return obj;
              }
              else
                Py_RETURN_NONE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Cbrt.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cbrt::class$ = NULL;
        jmethodID *Cbrt::mids$ = NULL;
        bool Cbrt::live$ = false;

        jclass Cbrt::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cbrt");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cbrt::Cbrt() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Cbrt::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cbrt::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Cbrt_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cbrt_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cbrt_init_(t_Cbrt *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cbrt_value(t_Cbrt *self, PyObject *args);

        static PyMethodDef t_Cbrt__methods_[] = {
          DECLARE_METHOD(t_Cbrt, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cbrt, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cbrt, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cbrt)[] = {
          { Py_tp_methods, t_Cbrt__methods_ },
          { Py_tp_init, (void *) t_Cbrt_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cbrt)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cbrt, t_Cbrt, Cbrt);

        void t_Cbrt::install(PyObject *module)
        {
          installType(&PY_TYPE(Cbrt), &PY_TYPE_DEF(Cbrt), module, "Cbrt", 0);
        }

        void t_Cbrt::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "class_", make_descriptor(Cbrt::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "wrapfn_", make_descriptor(t_Cbrt::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cbrt_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cbrt::initializeClass, 1)))
            return NULL;
          return t_Cbrt::wrap_Object(Cbrt(((t_Cbrt *) arg)->object.this$));
        }
        static PyObject *t_Cbrt_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cbrt::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cbrt_init_(t_Cbrt *self, PyObject *args, PyObject *kwds)
        {
          Cbrt object((jobject) NULL);

          INT_CALL(object = Cbrt());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cbrt_value(t_Cbrt *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *MelbourneWubbenaCombination::class$ = NULL;
          jmethodID *MelbourneWubbenaCombination::mids$ = NULL;
          bool MelbourneWubbenaCombination::live$ = false;

          jclass MelbourneWubbenaCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_82c5de1a9cc4c5da] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet MelbourneWubbenaCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_82c5de1a9cc4c5da], a0.this$));
          }

          ::java::lang::String MelbourneWubbenaCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_MelbourneWubbenaCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MelbourneWubbenaCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MelbourneWubbenaCombination_combine(t_MelbourneWubbenaCombination *self, PyObject *arg);
          static PyObject *t_MelbourneWubbenaCombination_getName(t_MelbourneWubbenaCombination *self);
          static PyObject *t_MelbourneWubbenaCombination_get__name(t_MelbourneWubbenaCombination *self, void *data);
          static PyGetSetDef t_MelbourneWubbenaCombination__fields_[] = {
            DECLARE_GET_FIELD(t_MelbourneWubbenaCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MelbourneWubbenaCombination__methods_[] = {
            DECLARE_METHOD(t_MelbourneWubbenaCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MelbourneWubbenaCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MelbourneWubbenaCombination, combine, METH_O),
            DECLARE_METHOD(t_MelbourneWubbenaCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MelbourneWubbenaCombination)[] = {
            { Py_tp_methods, t_MelbourneWubbenaCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MelbourneWubbenaCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MelbourneWubbenaCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MelbourneWubbenaCombination, t_MelbourneWubbenaCombination, MelbourneWubbenaCombination);

          void t_MelbourneWubbenaCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(MelbourneWubbenaCombination), &PY_TYPE_DEF(MelbourneWubbenaCombination), module, "MelbourneWubbenaCombination", 0);
          }

          void t_MelbourneWubbenaCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MelbourneWubbenaCombination), "class_", make_descriptor(MelbourneWubbenaCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MelbourneWubbenaCombination), "wrapfn_", make_descriptor(t_MelbourneWubbenaCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MelbourneWubbenaCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MelbourneWubbenaCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MelbourneWubbenaCombination::initializeClass, 1)))
              return NULL;
            return t_MelbourneWubbenaCombination::wrap_Object(MelbourneWubbenaCombination(((t_MelbourneWubbenaCombination *) arg)->object.this$));
          }
          static PyObject *t_MelbourneWubbenaCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MelbourneWubbenaCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MelbourneWubbenaCombination_combine(t_MelbourneWubbenaCombination *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combine(a0));
              return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combine", arg);
            return NULL;
          }

          static PyObject *t_MelbourneWubbenaCombination_getName(t_MelbourneWubbenaCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MelbourneWubbenaCombination_get__name(t_MelbourneWubbenaCombination *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/ZipJarCrawler.h"
#include "org/orekit/data/DataProvider.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ZipJarCrawler::class$ = NULL;
      jmethodID *ZipJarCrawler::mids$ = NULL;
      bool ZipJarCrawler::live$ = false;

      jclass ZipJarCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ZipJarCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5d6bcca91ae998ee] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
          mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_1d2bf2ec349f3959] = env->getMethodID(cls, "<init>", "(Ljava/net/URL;)V");
          mids$[mid_init$_e8f0cb096a102698] = env->getMethodID(cls, "<init>", "(Ljava/lang/ClassLoader;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ZipJarCrawler::ZipJarCrawler(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5d6bcca91ae998ee, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::net::URL & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d2bf2ec349f3959, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::lang::ClassLoader & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e8f0cb096a102698, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_ZipJarCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ZipJarCrawler_init_(t_ZipJarCrawler *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_ZipJarCrawler__methods_[] = {
        DECLARE_METHOD(t_ZipJarCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ZipJarCrawler)[] = {
        { Py_tp_methods, t_ZipJarCrawler__methods_ },
        { Py_tp_init, (void *) t_ZipJarCrawler_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ZipJarCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ZipJarCrawler, t_ZipJarCrawler, ZipJarCrawler);

      void t_ZipJarCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(ZipJarCrawler), &PY_TYPE_DEF(ZipJarCrawler), module, "ZipJarCrawler", 0);
      }

      void t_ZipJarCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "class_", make_descriptor(ZipJarCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "wrapfn_", make_descriptor(t_ZipJarCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ZipJarCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ZipJarCrawler::initializeClass, 1)))
          return NULL;
        return t_ZipJarCrawler::wrap_Object(ZipJarCrawler(((t_ZipJarCrawler *) arg)->object.this$));
      }
      static PyObject *t_ZipJarCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ZipJarCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ZipJarCrawler_init_(t_ZipJarCrawler *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::io::File a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::net::URL a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::net::URL::initializeClass, &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::ClassLoader a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::lang::ClassLoader::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ZipJarCrawler(a0, a1));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *DoubleArrayDictionary::class$ = NULL;
      jmethodID *DoubleArrayDictionary::mids$ = NULL;
      bool DoubleArrayDictionary::live$ = false;

      jclass DoubleArrayDictionary::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/DoubleArrayDictionary");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_6ba01303bcce0307] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
          mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_get_008e0cff49b0ec83] = env->getMethodID(cls, "get", "(Ljava/lang/String;)[D");
          mids$[mid_getData_0d9551367f7ecdef] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
          mids$[mid_getEntry_42f94031f6bfb94c] = env->getMethodID(cls, "getEntry", "(Ljava/lang/String;)Lorg/orekit/utils/DoubleArrayDictionary$Entry;");
          mids$[mid_put_7d8c14f144e3f080] = env->getMethodID(cls, "put", "(Ljava/lang/String;[D)V");
          mids$[mid_putAll_4df10196e6ff77db] = env->getMethodID(cls, "putAll", "(Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_putAll_6ba01303bcce0307] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
          mids$[mid_remove_fd2162b8a05a22fe] = env->getMethodID(cls, "remove", "(Ljava/lang/String;)Z");
          mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
          mids$[mid_toMap_1e62c2f73fbdd1c4] = env->getMethodID(cls, "toMap", "()Ljava/util/Map;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_unmodifiableView_408230a61ade575e] = env->getMethodID(cls, "unmodifiableView", "()Lorg/orekit/utils/DoubleArrayDictionary;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DoubleArrayDictionary::DoubleArrayDictionary() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      DoubleArrayDictionary::DoubleArrayDictionary(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      DoubleArrayDictionary::DoubleArrayDictionary(const ::java::util::Map & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6ba01303bcce0307, a0.this$)) {}

      void DoubleArrayDictionary::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
      }

      JArray< jdouble > DoubleArrayDictionary::get$(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_get_008e0cff49b0ec83], a0.this$));
      }

      ::java::util::List DoubleArrayDictionary::getData() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_0d9551367f7ecdef]));
      }

      ::org::orekit::utils::DoubleArrayDictionary$Entry DoubleArrayDictionary::getEntry(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::DoubleArrayDictionary$Entry(env->callObjectMethod(this$, mids$[mid_getEntry_42f94031f6bfb94c], a0.this$));
      }

      void DoubleArrayDictionary::put(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_7d8c14f144e3f080], a0.this$, a1.this$);
      }

      void DoubleArrayDictionary::putAll(const DoubleArrayDictionary & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_4df10196e6ff77db], a0.this$);
      }

      void DoubleArrayDictionary::putAll(const ::java::util::Map & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_6ba01303bcce0307], a0.this$);
      }

      jboolean DoubleArrayDictionary::remove(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_remove_fd2162b8a05a22fe], a0.this$);
      }

      jint DoubleArrayDictionary::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
      }

      ::java::util::Map DoubleArrayDictionary::toMap() const
      {
        return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_toMap_1e62c2f73fbdd1c4]));
      }

      ::java::lang::String DoubleArrayDictionary::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      DoubleArrayDictionary DoubleArrayDictionary::unmodifiableView() const
      {
        return DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_unmodifiableView_408230a61ade575e]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_DoubleArrayDictionary_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DoubleArrayDictionary_init_(t_DoubleArrayDictionary *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DoubleArrayDictionary_clear(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_get(t_DoubleArrayDictionary *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_getData(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_getEntry(t_DoubleArrayDictionary *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_put(t_DoubleArrayDictionary *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary_putAll(t_DoubleArrayDictionary *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary_remove(t_DoubleArrayDictionary *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_size(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_toMap(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_toString(t_DoubleArrayDictionary *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary_unmodifiableView(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_get__data(t_DoubleArrayDictionary *self, void *data);
      static PyGetSetDef t_DoubleArrayDictionary__fields_[] = {
        DECLARE_GET_FIELD(t_DoubleArrayDictionary, data),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DoubleArrayDictionary__methods_[] = {
        DECLARE_METHOD(t_DoubleArrayDictionary, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary, clear, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, get, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary, getData, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, getEntry, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary, put, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, putAll, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, remove, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary, size, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, toMap, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, toString, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, unmodifiableView, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleArrayDictionary)[] = {
        { Py_tp_methods, t_DoubleArrayDictionary__methods_ },
        { Py_tp_init, (void *) t_DoubleArrayDictionary_init_ },
        { Py_tp_getset, t_DoubleArrayDictionary__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleArrayDictionary)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleArrayDictionary, t_DoubleArrayDictionary, DoubleArrayDictionary);

      void t_DoubleArrayDictionary::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleArrayDictionary), &PY_TYPE_DEF(DoubleArrayDictionary), module, "DoubleArrayDictionary", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "Entry", make_descriptor(&PY_TYPE_DEF(DoubleArrayDictionary$Entry)));
      }

      void t_DoubleArrayDictionary::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "class_", make_descriptor(DoubleArrayDictionary::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "wrapfn_", make_descriptor(t_DoubleArrayDictionary::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleArrayDictionary_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleArrayDictionary::initializeClass, 1)))
          return NULL;
        return t_DoubleArrayDictionary::wrap_Object(DoubleArrayDictionary(((t_DoubleArrayDictionary *) arg)->object.this$));
      }
      static PyObject *t_DoubleArrayDictionary_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleArrayDictionary::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DoubleArrayDictionary_init_(t_DoubleArrayDictionary *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            DoubleArrayDictionary object((jobject) NULL);

            INT_CALL(object = DoubleArrayDictionary());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            DoubleArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DoubleArrayDictionary(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;
            DoubleArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              INT_CALL(object = DoubleArrayDictionary(a0));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DoubleArrayDictionary_clear(t_DoubleArrayDictionary *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_DoubleArrayDictionary_get(t_DoubleArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_getData(t_DoubleArrayDictionary *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(DoubleArrayDictionary$Entry));
      }

      static PyObject *t_DoubleArrayDictionary_getEntry(t_DoubleArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary$Entry result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return ::org::orekit::utils::t_DoubleArrayDictionary$Entry::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_put(t_DoubleArrayDictionary *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(self->object.put(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_putAll(t_DoubleArrayDictionary *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DoubleArrayDictionary a0((jobject) NULL);

            if (!parseArgs(args, "k", DoubleArrayDictionary::initializeClass, &a0))
            {
              OBJ_CALL(self->object.putAll(a0));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(self->object.putAll(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "putAll", args);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_remove(t_DoubleArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_size(t_DoubleArrayDictionary *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DoubleArrayDictionary_toMap(t_DoubleArrayDictionary *self)
      {
        ::java::util::Map result((jobject) NULL);
        OBJ_CALL(result = self->object.toMap());
        return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(Object));
      }

      static PyObject *t_DoubleArrayDictionary_toString(t_DoubleArrayDictionary *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(DoubleArrayDictionary), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DoubleArrayDictionary_unmodifiableView(t_DoubleArrayDictionary *self)
      {
        DoubleArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.unmodifiableView());
        return t_DoubleArrayDictionary::wrap_Object(result);
      }

      static PyObject *t_DoubleArrayDictionary_get__data(t_DoubleArrayDictionary *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmParser::class$ = NULL;
              jmethodID *AcmParser::mids$ = NULL;
              bool AcmParser::live$ = false;

              jclass AcmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_aa18c51f374d28c4] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/acm/Acm;");
                  mids$[mid_finalizeData_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_880defc2f8f9f844] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_89b302893bdbe1f1] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_89b302893bdbe1f1] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_8d392a346a4b149f] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/adm/acm/Acm;");
                  mids$[mid_prepareData_89b302893bdbe1f1] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_89b302893bdbe1f1] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::Acm AcmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::Acm(env->callObjectMethod(this$, mids$[mid_build_aa18c51f374d28c4]));
              }

              jboolean AcmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_89b302893bdbe1f1]);
              }

              jboolean AcmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_89b302893bdbe1f1]);
              }

              jboolean AcmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_89b302893bdbe1f1]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader AcmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_880defc2f8f9f844]));
              }

              ::java::util::Map AcmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4]));
              }

              jboolean AcmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_89b302893bdbe1f1]);
              }

              jboolean AcmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_89b302893bdbe1f1]);
              }

              jboolean AcmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_89b302893bdbe1f1]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::Acm AcmParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::Acm(env->callObjectMethod(this$, mids$[mid_parse_8d392a346a4b149f], a0.this$));
              }

              jboolean AcmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_89b302893bdbe1f1]);
              }

              jboolean AcmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_89b302893bdbe1f1]);
              }

              jboolean AcmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_89b302893bdbe1f1]);
              }

              void AcmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_a580586827f4ec13], a0.this$);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AcmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmParser_of_(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_build(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_getHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_getSpecialXmlElementsBuilders(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_parse(t_AcmParser *self, PyObject *arg);
              static PyObject *t_AcmParser_prepareData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_prepareHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_prepareMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_reset(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_get__header(t_AcmParser *self, void *data);
              static PyObject *t_AcmParser_get__specialXmlElementsBuilders(t_AcmParser *self, void *data);
              static PyObject *t_AcmParser_get__parameters_(t_AcmParser *self, void *data);
              static PyGetSetDef t_AcmParser__fields_[] = {
                DECLARE_GET_FIELD(t_AcmParser, header),
                DECLARE_GET_FIELD(t_AcmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_AcmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmParser__methods_[] = {
                DECLARE_METHOD(t_AcmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, parse, METH_O),
                DECLARE_METHOD(t_AcmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmParser)[] = {
                { Py_tp_methods, t_AcmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(AcmParser, t_AcmParser, AcmParser);
              PyObject *t_AcmParser::wrap_Object(const AcmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AcmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmParser *self = (t_AcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AcmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AcmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmParser *self = (t_AcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AcmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmParser), &PY_TYPE_DEF(AcmParser), module, "AcmParser", 0);
              }

              void t_AcmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "class_", make_descriptor(AcmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "wrapfn_", make_descriptor(t_AcmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmParser::initializeClass, 1)))
                  return NULL;
                return t_AcmParser::wrap_Object(AcmParser(((t_AcmParser *) arg)->object.this$));
              }
              static PyObject *t_AcmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmParser_of_(t_AcmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmParser_build(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::Acm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::acm::t_Acm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_AcmParser_finalizeData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_AcmParser_finalizeHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_AcmParser_finalizeMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_AcmParser_getHeader(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_AcmParser_getSpecialXmlElementsBuilders(t_AcmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_AcmParser_inData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_AcmParser_inHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_AcmParser_inMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_AcmParser_parse(t_AcmParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::Acm result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::acm::t_Acm::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_AcmParser_prepareData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_AcmParser_prepareHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_AcmParser_prepareMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_AcmParser_reset(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_AcmParser_get__parameters_(t_AcmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AcmParser_get__header(t_AcmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
              }

              static PyObject *t_AcmParser_get__specialXmlElementsBuilders(t_AcmParser *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
                return ::java::util::t_Map::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/files/ccsds/ndm/tdm/Observation.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *ObservationsBlock::class$ = NULL;
            jmethodID *ObservationsBlock::mids$ = NULL;
            bool ObservationsBlock::live$ = false;

            jclass ObservationsBlock::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/ObservationsBlock");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addObservation_d2ff22efb71e3f1e] = env->getMethodID(cls, "addObservation", "(Lorg/orekit/files/ccsds/ndm/tdm/Observation;)V");
                mids$[mid_addObservation_f1cf86cd74f431e1] = env->getMethodID(cls, "addObservation", "(Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getObservations_0d9551367f7ecdef] = env->getMethodID(cls, "getObservations", "()Ljava/util/List;");
                mids$[mid_setObservations_4ccaedadb068bdeb] = env->getMethodID(cls, "setObservations", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ObservationsBlock::ObservationsBlock() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void ObservationsBlock::addObservation(const ::org::orekit::files::ccsds::ndm::tdm::Observation & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_addObservation_d2ff22efb71e3f1e], a0.this$);
            }

            void ObservationsBlock::addObservation(const ::org::orekit::files::ccsds::ndm::tdm::ObservationType & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_addObservation_f1cf86cd74f431e1], a0.this$, a1.this$, a2);
            }

            ::java::util::List ObservationsBlock::getObservations() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservations_0d9551367f7ecdef]));
            }

            void ObservationsBlock::setObservations(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObservations_4ccaedadb068bdeb], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            static PyObject *t_ObservationsBlock_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationsBlock_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ObservationsBlock_init_(t_ObservationsBlock *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ObservationsBlock_addObservation(t_ObservationsBlock *self, PyObject *args);
            static PyObject *t_ObservationsBlock_getObservations(t_ObservationsBlock *self);
            static PyObject *t_ObservationsBlock_setObservations(t_ObservationsBlock *self, PyObject *arg);
            static PyObject *t_ObservationsBlock_get__observations(t_ObservationsBlock *self, void *data);
            static int t_ObservationsBlock_set__observations(t_ObservationsBlock *self, PyObject *arg, void *data);
            static PyGetSetDef t_ObservationsBlock__fields_[] = {
              DECLARE_GETSET_FIELD(t_ObservationsBlock, observations),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ObservationsBlock__methods_[] = {
              DECLARE_METHOD(t_ObservationsBlock, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationsBlock, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationsBlock, addObservation, METH_VARARGS),
              DECLARE_METHOD(t_ObservationsBlock, getObservations, METH_NOARGS),
              DECLARE_METHOD(t_ObservationsBlock, setObservations, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ObservationsBlock)[] = {
              { Py_tp_methods, t_ObservationsBlock__methods_ },
              { Py_tp_init, (void *) t_ObservationsBlock_init_ },
              { Py_tp_getset, t_ObservationsBlock__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ObservationsBlock)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(ObservationsBlock, t_ObservationsBlock, ObservationsBlock);

            void t_ObservationsBlock::install(PyObject *module)
            {
              installType(&PY_TYPE(ObservationsBlock), &PY_TYPE_DEF(ObservationsBlock), module, "ObservationsBlock", 0);
            }

            void t_ObservationsBlock::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "class_", make_descriptor(ObservationsBlock::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "wrapfn_", make_descriptor(t_ObservationsBlock::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ObservationsBlock_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ObservationsBlock::initializeClass, 1)))
                return NULL;
              return t_ObservationsBlock::wrap_Object(ObservationsBlock(((t_ObservationsBlock *) arg)->object.this$));
            }
            static PyObject *t_ObservationsBlock_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ObservationsBlock::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ObservationsBlock_init_(t_ObservationsBlock *self, PyObject *args, PyObject *kwds)
            {
              ObservationsBlock object((jobject) NULL);

              INT_CALL(object = ObservationsBlock());
              self->object = object;

              return 0;
            }

            static PyObject *t_ObservationsBlock_addObservation(t_ObservationsBlock *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::files::ccsds::ndm::tdm::Observation a0((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::tdm::Observation::initializeClass, &a0))
                  {
                    OBJ_CALL(self->object.addObservation(a0));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 3:
                {
                  ::org::orekit::files::ccsds::ndm::tdm::ObservationType a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  jdouble a2;

                  if (!parseArgs(args, "KkD", ::org::orekit::files::ccsds::ndm::tdm::ObservationType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::parameters_, &a1, &a2))
                  {
                    OBJ_CALL(self->object.addObservation(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "addObservation", args);
              return NULL;
            }

            static PyObject *t_ObservationsBlock_getObservations(t_ObservationsBlock *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getObservations());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(Observation));
            }

            static PyObject *t_ObservationsBlock_setObservations(t_ObservationsBlock *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.setObservations(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObservations", arg);
              return NULL;
            }

            static PyObject *t_ObservationsBlock_get__observations(t_ObservationsBlock *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getObservations());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_ObservationsBlock_set__observations(t_ObservationsBlock *self, PyObject *arg, void *data)
            {
              {
                ::java::util::List value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                {
                  INT_CALL(self->object.setObservations(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "observations", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *SpacecraftParameters::class$ = NULL;
            jmethodID *SpacecraftParameters::mids$ = NULL;
            bool SpacecraftParameters::live$ = false;

            jclass SpacecraftParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/SpacecraftParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDragArea_557b8123390d8d0c] = env->getMethodID(cls, "getDragArea", "()D");
                mids$[mid_getDragCoeff_557b8123390d8d0c] = env->getMethodID(cls, "getDragCoeff", "()D");
                mids$[mid_getMass_557b8123390d8d0c] = env->getMethodID(cls, "getMass", "()D");
                mids$[mid_getSolarRadArea_557b8123390d8d0c] = env->getMethodID(cls, "getSolarRadArea", "()D");
                mids$[mid_getSolarRadCoeff_557b8123390d8d0c] = env->getMethodID(cls, "getSolarRadCoeff", "()D");
                mids$[mid_setDragArea_10f281d777284cea] = env->getMethodID(cls, "setDragArea", "(D)V");
                mids$[mid_setDragCoeff_10f281d777284cea] = env->getMethodID(cls, "setDragCoeff", "(D)V");
                mids$[mid_setMass_10f281d777284cea] = env->getMethodID(cls, "setMass", "(D)V");
                mids$[mid_setSolarRadArea_10f281d777284cea] = env->getMethodID(cls, "setSolarRadArea", "(D)V");
                mids$[mid_setSolarRadCoeff_10f281d777284cea] = env->getMethodID(cls, "setSolarRadCoeff", "(D)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SpacecraftParameters::SpacecraftParameters() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jdouble SpacecraftParameters::getDragArea() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDragArea_557b8123390d8d0c]);
            }

            jdouble SpacecraftParameters::getDragCoeff() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDragCoeff_557b8123390d8d0c]);
            }

            jdouble SpacecraftParameters::getMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMass_557b8123390d8d0c]);
            }

            jdouble SpacecraftParameters::getSolarRadArea() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSolarRadArea_557b8123390d8d0c]);
            }

            jdouble SpacecraftParameters::getSolarRadCoeff() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSolarRadCoeff_557b8123390d8d0c]);
            }

            void SpacecraftParameters::setDragArea(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDragArea_10f281d777284cea], a0);
            }

            void SpacecraftParameters::setDragCoeff(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDragCoeff_10f281d777284cea], a0);
            }

            void SpacecraftParameters::setMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMass_10f281d777284cea], a0);
            }

            void SpacecraftParameters::setSolarRadArea(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadArea_10f281d777284cea], a0);
            }

            void SpacecraftParameters::setSolarRadCoeff(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadCoeff_10f281d777284cea], a0);
            }

            void SpacecraftParameters::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            static PyObject *t_SpacecraftParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SpacecraftParameters_init_(t_SpacecraftParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SpacecraftParameters_getDragArea(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getDragCoeff(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getMass(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getSolarRadArea(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getSolarRadCoeff(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_setDragArea(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setDragCoeff(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setMass(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setSolarRadArea(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setSolarRadCoeff(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_validate(t_SpacecraftParameters *self, PyObject *args);
            static PyObject *t_SpacecraftParameters_get__dragArea(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__dragArea(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__dragCoeff(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__dragCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__mass(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__mass(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__solarRadArea(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__solarRadArea(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__solarRadCoeff(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__solarRadCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyGetSetDef t_SpacecraftParameters__fields_[] = {
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, dragArea),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, dragCoeff),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, mass),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, solarRadArea),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, solarRadCoeff),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SpacecraftParameters__methods_[] = {
              DECLARE_METHOD(t_SpacecraftParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParameters, getDragArea, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getDragCoeff, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getMass, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getSolarRadArea, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getSolarRadCoeff, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, setDragArea, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setDragCoeff, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setMass, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setSolarRadArea, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setSolarRadCoeff, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SpacecraftParameters)[] = {
              { Py_tp_methods, t_SpacecraftParameters__methods_ },
              { Py_tp_init, (void *) t_SpacecraftParameters_init_ },
              { Py_tp_getset, t_SpacecraftParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SpacecraftParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(SpacecraftParameters, t_SpacecraftParameters, SpacecraftParameters);

            void t_SpacecraftParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(SpacecraftParameters), &PY_TYPE_DEF(SpacecraftParameters), module, "SpacecraftParameters", 0);
            }

            void t_SpacecraftParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "class_", make_descriptor(SpacecraftParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "wrapfn_", make_descriptor(t_SpacecraftParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SpacecraftParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SpacecraftParameters::initializeClass, 1)))
                return NULL;
              return t_SpacecraftParameters::wrap_Object(SpacecraftParameters(((t_SpacecraftParameters *) arg)->object.this$));
            }
            static PyObject *t_SpacecraftParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SpacecraftParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SpacecraftParameters_init_(t_SpacecraftParameters *self, PyObject *args, PyObject *kwds)
            {
              SpacecraftParameters object((jobject) NULL);

              INT_CALL(object = SpacecraftParameters());
              self->object = object;

              return 0;
            }

            static PyObject *t_SpacecraftParameters_getDragArea(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDragArea());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getDragCoeff(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDragCoeff());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getMass(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getSolarRadArea(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSolarRadArea());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getSolarRadCoeff(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSolarRadCoeff());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_setDragArea(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDragArea(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDragArea", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setDragCoeff(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDragCoeff(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDragCoeff", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setMass(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMass", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setSolarRadArea(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSolarRadArea(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadArea", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setSolarRadCoeff(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSolarRadCoeff(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadCoeff", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_validate(t_SpacecraftParameters *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(SpacecraftParameters), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_SpacecraftParameters_get__dragArea(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDragArea());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__dragArea(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDragArea(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dragArea", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__dragCoeff(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDragCoeff());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__dragCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDragCoeff(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dragCoeff", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__mass(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__mass(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mass", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__solarRadArea(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSolarRadArea());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__solarRadArea(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSolarRadArea(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadArea", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__solarRadCoeff(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSolarRadCoeff());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__solarRadCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSolarRadCoeff(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadCoeff", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *MinMaxTreeTile::class$ = NULL;
          jmethodID *MinMaxTreeTile::mids$ = NULL;
          bool MinMaxTreeTile::live$ = false;

          jclass MinMaxTreeTile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCrossedBoundaryColumns_ebc3194797d38989] = env->getMethodID(cls, "getCrossedBoundaryColumns", "(III)[I");
              mids$[mid_getCrossedBoundaryRows_ebc3194797d38989] = env->getMethodID(cls, "getCrossedBoundaryRows", "(III)[I");
              mids$[mid_getLevels_412668abc8d889e9] = env->getMethodID(cls, "getLevels", "()I");
              mids$[mid_getMaxElevation_093995dc5657c18c] = env->getMethodID(cls, "getMaxElevation", "(III)D");
              mids$[mid_getMergeLevel_4885f823e425a625] = env->getMethodID(cls, "getMergeLevel", "(IIII)I");
              mids$[mid_getMinElevation_093995dc5657c18c] = env->getMethodID(cls, "getMinElevation", "(III)D");
              mids$[mid_isColumnMerging_e034cac2b514bb09] = env->getMethodID(cls, "isColumnMerging", "(I)Z");
              mids$[mid_locateMax_ebc3194797d38989] = env->getMethodID(cls, "locateMax", "(III)[I");
              mids$[mid_locateMin_ebc3194797d38989] = env->getMethodID(cls, "locateMin", "(III)[I");
              mids$[mid_processUpdatedElevation_cc18240f4a737f14] = env->getMethodID(cls, "processUpdatedElevation", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jint > MinMaxTreeTile::getCrossedBoundaryColumns(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCrossedBoundaryColumns_ebc3194797d38989], a0, a1, a2));
          }

          JArray< jint > MinMaxTreeTile::getCrossedBoundaryRows(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCrossedBoundaryRows_ebc3194797d38989], a0, a1, a2));
          }

          jint MinMaxTreeTile::getLevels() const
          {
            return env->callIntMethod(this$, mids$[mid_getLevels_412668abc8d889e9]);
          }

          jdouble MinMaxTreeTile::getMaxElevation(jint a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_093995dc5657c18c], a0, a1, a2);
          }

          jint MinMaxTreeTile::getMergeLevel(jint a0, jint a1, jint a2, jint a3) const
          {
            return env->callIntMethod(this$, mids$[mid_getMergeLevel_4885f823e425a625], a0, a1, a2, a3);
          }

          jdouble MinMaxTreeTile::getMinElevation(jint a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinElevation_093995dc5657c18c], a0, a1, a2);
          }

          jboolean MinMaxTreeTile::isColumnMerging(jint a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isColumnMerging_e034cac2b514bb09], a0);
          }

          JArray< jint > MinMaxTreeTile::locateMax(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_locateMax_ebc3194797d38989], a0, a1, a2));
          }

          JArray< jint > MinMaxTreeTile::locateMin(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_locateMin_ebc3194797d38989], a0, a1, a2));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {
          static PyObject *t_MinMaxTreeTile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryColumns(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryRows(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getLevels(t_MinMaxTreeTile *self);
          static PyObject *t_MinMaxTreeTile_getMaxElevation(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getMergeLevel(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getMinElevation(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_isColumnMerging(t_MinMaxTreeTile *self, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_locateMax(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_locateMin(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_get__levels(t_MinMaxTreeTile *self, void *data);
          static PyGetSetDef t_MinMaxTreeTile__fields_[] = {
            DECLARE_GET_FIELD(t_MinMaxTreeTile, levels),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MinMaxTreeTile__methods_[] = {
            DECLARE_METHOD(t_MinMaxTreeTile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTile, getCrossedBoundaryColumns, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getCrossedBoundaryRows, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getLevels, METH_NOARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMaxElevation, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMergeLevel, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMinElevation, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, isColumnMerging, METH_O),
            DECLARE_METHOD(t_MinMaxTreeTile, locateMax, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, locateMin, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MinMaxTreeTile)[] = {
            { Py_tp_methods, t_MinMaxTreeTile__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MinMaxTreeTile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MinMaxTreeTile)[] = {
            &PY_TYPE_DEF(::org::orekit::rugged::raster::SimpleTile),
            NULL
          };

          DEFINE_TYPE(MinMaxTreeTile, t_MinMaxTreeTile, MinMaxTreeTile);

          void t_MinMaxTreeTile::install(PyObject *module)
          {
            installType(&PY_TYPE(MinMaxTreeTile), &PY_TYPE_DEF(MinMaxTreeTile), module, "MinMaxTreeTile", 0);
          }

          void t_MinMaxTreeTile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "class_", make_descriptor(MinMaxTreeTile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "wrapfn_", make_descriptor(t_MinMaxTreeTile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MinMaxTreeTile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MinMaxTreeTile::initializeClass, 1)))
              return NULL;
            return t_MinMaxTreeTile::wrap_Object(MinMaxTreeTile(((t_MinMaxTreeTile *) arg)->object.this$));
          }
          static PyObject *t_MinMaxTreeTile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MinMaxTreeTile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryColumns(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getCrossedBoundaryColumns(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getCrossedBoundaryColumns", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryRows(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getCrossedBoundaryRows(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getCrossedBoundaryRows", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getLevels(t_MinMaxTreeTile *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLevels());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_MinMaxTreeTile_getMaxElevation(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getMaxElevation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(MinMaxTreeTile), (PyObject *) self, "getMaxElevation", args, 2);
          }

          static PyObject *t_MinMaxTreeTile_getMergeLevel(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint result;

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getMergeLevel(a0, a1, a2, a3));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getMergeLevel", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getMinElevation(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getMinElevation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(MinMaxTreeTile), (PyObject *) self, "getMinElevation", args, 2);
          }

          static PyObject *t_MinMaxTreeTile_isColumnMerging(t_MinMaxTreeTile *self, PyObject *arg)
          {
            jint a0;
            jboolean result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.isColumnMerging(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isColumnMerging", arg);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_locateMax(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.locateMax(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "locateMax", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_locateMin(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.locateMin(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "locateMin", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_get__levels(t_MinMaxTreeTile *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLevels());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTreeVisitor$Order::class$ = NULL;
        jmethodID *BSPTreeVisitor$Order::mids$ = NULL;
        bool BSPTreeVisitor$Order::live$ = false;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::MINUS_PLUS_SUB = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::MINUS_SUB_PLUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::PLUS_MINUS_SUB = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::PLUS_SUB_MINUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::SUB_MINUS_PLUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::SUB_PLUS_MINUS = NULL;

        jclass BSPTreeVisitor$Order::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_a7c92a4b733e9d77] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");
            mids$[mid_values_92e81d0493e85ac8] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MINUS_PLUS_SUB = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "MINUS_PLUS_SUB", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            MINUS_SUB_PLUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "MINUS_SUB_PLUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            PLUS_MINUS_SUB = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "PLUS_MINUS_SUB", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            PLUS_SUB_MINUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "PLUS_SUB_MINUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            SUB_MINUS_PLUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "SUB_MINUS_PLUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            SUB_PLUS_MINUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "SUB_PLUS_MINUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BSPTreeVisitor$Order BSPTreeVisitor$Order::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BSPTreeVisitor$Order(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a7c92a4b733e9d77], a0.this$));
        }

        JArray< BSPTreeVisitor$Order > BSPTreeVisitor$Order::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< BSPTreeVisitor$Order >(env->callStaticObjectMethod(cls, mids$[mid_values_92e81d0493e85ac8]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        static PyObject *t_BSPTreeVisitor$Order_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor$Order_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor$Order_of_(t_BSPTreeVisitor$Order *self, PyObject *args);
        static PyObject *t_BSPTreeVisitor$Order_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_BSPTreeVisitor$Order_values(PyTypeObject *type);
        static PyObject *t_BSPTreeVisitor$Order_get__parameters_(t_BSPTreeVisitor$Order *self, void *data);
        static PyGetSetDef t_BSPTreeVisitor$Order__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTreeVisitor$Order, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTreeVisitor$Order__methods_[] = {
          DECLARE_METHOD(t_BSPTreeVisitor$Order, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTreeVisitor$Order)[] = {
          { Py_tp_methods, t_BSPTreeVisitor$Order__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTreeVisitor$Order__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTreeVisitor$Order)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(BSPTreeVisitor$Order, t_BSPTreeVisitor$Order, BSPTreeVisitor$Order);
        PyObject *t_BSPTreeVisitor$Order::wrap_Object(const BSPTreeVisitor$Order& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor$Order::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor$Order *self = (t_BSPTreeVisitor$Order *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTreeVisitor$Order::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor$Order::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor$Order *self = (t_BSPTreeVisitor$Order *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTreeVisitor$Order::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTreeVisitor$Order), &PY_TYPE_DEF(BSPTreeVisitor$Order), module, "BSPTreeVisitor$Order", 0);
        }

        void t_BSPTreeVisitor$Order::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "class_", make_descriptor(BSPTreeVisitor$Order::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "wrapfn_", make_descriptor(t_BSPTreeVisitor$Order::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "boxfn_", make_descriptor(boxObject));
          env->getClass(BSPTreeVisitor$Order::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "MINUS_PLUS_SUB", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::MINUS_PLUS_SUB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "MINUS_SUB_PLUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::MINUS_SUB_PLUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "PLUS_MINUS_SUB", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::PLUS_MINUS_SUB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "PLUS_SUB_MINUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::PLUS_SUB_MINUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "SUB_MINUS_PLUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::SUB_MINUS_PLUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "SUB_PLUS_MINUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::SUB_PLUS_MINUS)));
        }

        static PyObject *t_BSPTreeVisitor$Order_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTreeVisitor$Order::initializeClass, 1)))
            return NULL;
          return t_BSPTreeVisitor$Order::wrap_Object(BSPTreeVisitor$Order(((t_BSPTreeVisitor$Order *) arg)->object.this$));
        }
        static PyObject *t_BSPTreeVisitor$Order_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTreeVisitor$Order::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTreeVisitor$Order_of_(t_BSPTreeVisitor$Order *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTreeVisitor$Order_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          BSPTreeVisitor$Order result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order::valueOf(a0));
            return t_BSPTreeVisitor$Order::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_BSPTreeVisitor$Order_values(PyTypeObject *type)
        {
          JArray< BSPTreeVisitor$Order > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order::values());
          return JArray<jobject>(result.this$).wrap(t_BSPTreeVisitor$Order::wrap_jobject);
        }
        static PyObject *t_BSPTreeVisitor$Order_get__parameters_(t_BSPTreeVisitor$Order *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LocalOrbitalFrame.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalOrbitalFrame::class$ = NULL;
      jmethodID *LocalOrbitalFrame::mids$ = NULL;
      bool LocalOrbitalFrame::live$ = false;

      jclass LocalOrbitalFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalOrbitalFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_41979ecbb6cde58e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Lorg/orekit/utils/PVCoordinatesProvider;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalOrbitalFrame::LocalOrbitalFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, const ::java::lang::String & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_41979ecbb6cde58e, a0.this$, a1.this$, a2.this$, a3.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_LocalOrbitalFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalOrbitalFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LocalOrbitalFrame_init_(t_LocalOrbitalFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_LocalOrbitalFrame__methods_[] = {
        DECLARE_METHOD(t_LocalOrbitalFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalOrbitalFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalOrbitalFrame)[] = {
        { Py_tp_methods, t_LocalOrbitalFrame__methods_ },
        { Py_tp_init, (void *) t_LocalOrbitalFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalOrbitalFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(LocalOrbitalFrame, t_LocalOrbitalFrame, LocalOrbitalFrame);

      void t_LocalOrbitalFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalOrbitalFrame), &PY_TYPE_DEF(LocalOrbitalFrame), module, "LocalOrbitalFrame", 0);
      }

      void t_LocalOrbitalFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "class_", make_descriptor(LocalOrbitalFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "wrapfn_", make_descriptor(t_LocalOrbitalFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalOrbitalFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalOrbitalFrame::initializeClass, 1)))
          return NULL;
        return t_LocalOrbitalFrame::wrap_Object(LocalOrbitalFrame(((t_LocalOrbitalFrame *) arg)->object.this$));
      }
      static PyObject *t_LocalOrbitalFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalOrbitalFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LocalOrbitalFrame_init_(t_LocalOrbitalFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::LOF a1((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        LocalOrbitalFrame object((jobject) NULL);

        if (!parseArgs(args, "kkks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = LocalOrbitalFrame(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPF.h"
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPF::class$ = NULL;
        jmethodID *CPF::mids$ = NULL;
        bool CPF::live$ = false;
        ::java::lang::String *CPF::DEFAULT_ID = NULL;

        jclass CPF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatelliteCoordinate_a156272b8409e571] = env->getMethodID(cls, "addSatelliteCoordinate", "(Ljava/lang/String;Lorg/orekit/files/ilrs/CPF$CPFCoordinate;)V");
            mids$[mid_addSatelliteCoordinates_013b264b441f07a2] = env->getMethodID(cls, "addSatelliteCoordinates", "(Ljava/lang/String;Ljava/util/List;)V");
            mids$[mid_addSatelliteVelocityToCPFCoordinate_e74a95e87acc49f8] = env->getMethodID(cls, "addSatelliteVelocityToCPFCoordinate", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getComments_0d9551367f7ecdef] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getHeader_c18325609dc27f44] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ilrs/CPFHeader;");
            mids$[mid_getSatellites_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_getTimeScale_527ee9dde1a96470] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
            mids$[mid_setFilter_fd4d3944a3fb1083] = env->getMethodID(cls, "setFilter", "(Lorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_setInterpolationSample_a3da1a935cb37f7b] = env->getMethodID(cls, "setInterpolationSample", "(I)V");
            mids$[mid_setMu_10f281d777284cea] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setTimeScale_3e3301925c0131d4] = env->getMethodID(cls, "setTimeScale", "(Lorg/orekit/time/TimeScale;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ID = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ID", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF::CPF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void CPF::addSatelliteCoordinate(const ::java::lang::String & a0, const ::org::orekit::files::ilrs::CPF$CPFCoordinate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteCoordinate_a156272b8409e571], a0.this$, a1.this$);
        }

        void CPF::addSatelliteCoordinates(const ::java::lang::String & a0, const ::java::util::List & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteCoordinates_013b264b441f07a2], a0.this$, a1.this$);
        }

        void CPF::addSatelliteVelocityToCPFCoordinate(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteVelocityToCPFCoordinate_e74a95e87acc49f8], a0.this$, a1.this$);
        }

        ::java::util::List CPF::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_0d9551367f7ecdef]));
        }

        ::org::orekit::files::ilrs::CPFHeader CPF::getHeader() const
        {
          return ::org::orekit::files::ilrs::CPFHeader(env->callObjectMethod(this$, mids$[mid_getHeader_c18325609dc27f44]));
        }

        ::java::util::Map CPF::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_1e62c2f73fbdd1c4]));
        }

        ::org::orekit::time::TimeScale CPF::getTimeScale() const
        {
          return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_527ee9dde1a96470]));
        }

        void CPF::setFilter(const ::org::orekit::utils::CartesianDerivativesFilter & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFilter_fd4d3944a3fb1083], a0.this$);
        }

        void CPF::setInterpolationSample(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInterpolationSample_a3da1a935cb37f7b], a0);
        }

        void CPF::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_10f281d777284cea], a0);
        }

        void CPF::setTimeScale(const ::org::orekit::time::TimeScale & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeScale_3e3301925c0131d4], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CPF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPF_init_(t_CPF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPF_addSatelliteCoordinate(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_addSatelliteCoordinates(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_addSatelliteVelocityToCPFCoordinate(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_getComments(t_CPF *self);
        static PyObject *t_CPF_getHeader(t_CPF *self);
        static PyObject *t_CPF_getSatellites(t_CPF *self);
        static PyObject *t_CPF_getTimeScale(t_CPF *self);
        static PyObject *t_CPF_setFilter(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setInterpolationSample(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setMu(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setTimeScale(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_get__comments(t_CPF *self, void *data);
        static int t_CPF_set__filter(t_CPF *self, PyObject *arg, void *data);
        static PyObject *t_CPF_get__header(t_CPF *self, void *data);
        static int t_CPF_set__interpolationSample(t_CPF *self, PyObject *arg, void *data);
        static int t_CPF_set__mu(t_CPF *self, PyObject *arg, void *data);
        static PyObject *t_CPF_get__satellites(t_CPF *self, void *data);
        static PyObject *t_CPF_get__timeScale(t_CPF *self, void *data);
        static int t_CPF_set__timeScale(t_CPF *self, PyObject *arg, void *data);
        static PyGetSetDef t_CPF__fields_[] = {
          DECLARE_GET_FIELD(t_CPF, comments),
          DECLARE_SET_FIELD(t_CPF, filter),
          DECLARE_GET_FIELD(t_CPF, header),
          DECLARE_SET_FIELD(t_CPF, interpolationSample),
          DECLARE_SET_FIELD(t_CPF, mu),
          DECLARE_GET_FIELD(t_CPF, satellites),
          DECLARE_GETSET_FIELD(t_CPF, timeScale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPF__methods_[] = {
          DECLARE_METHOD(t_CPF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF, addSatelliteCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_CPF, addSatelliteCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_CPF, addSatelliteVelocityToCPFCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_CPF, getComments, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getHeader, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getTimeScale, METH_NOARGS),
          DECLARE_METHOD(t_CPF, setFilter, METH_O),
          DECLARE_METHOD(t_CPF, setInterpolationSample, METH_O),
          DECLARE_METHOD(t_CPF, setMu, METH_O),
          DECLARE_METHOD(t_CPF, setTimeScale, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPF)[] = {
          { Py_tp_methods, t_CPF__methods_ },
          { Py_tp_init, (void *) t_CPF_init_ },
          { Py_tp_getset, t_CPF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPF, t_CPF, CPF);

        void t_CPF::install(PyObject *module)
        {
          installType(&PY_TYPE(CPF), &PY_TYPE_DEF(CPF), module, "CPF", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "CPFCoordinate", make_descriptor(&PY_TYPE_DEF(CPF$CPFCoordinate)));
        }

        void t_CPF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "class_", make_descriptor(CPF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "wrapfn_", make_descriptor(t_CPF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "boxfn_", make_descriptor(boxObject));
          env->getClass(CPF::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "DEFAULT_ID", make_descriptor(j2p(*CPF::DEFAULT_ID)));
        }

        static PyObject *t_CPF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPF::initializeClass, 1)))
            return NULL;
          return t_CPF::wrap_Object(CPF(((t_CPF *) arg)->object.this$));
        }
        static PyObject *t_CPF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPF_init_(t_CPF *self, PyObject *args, PyObject *kwds)
        {
          CPF object((jobject) NULL);

          INT_CALL(object = CPF());
          self->object = object;

          return 0;
        }

        static PyObject *t_CPF_addSatelliteCoordinate(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::ilrs::CPF$CPFCoordinate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::files::ilrs::CPF$CPFCoordinate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addSatelliteCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteCoordinate", args);
          return NULL;
        }

        static PyObject *t_CPF_addSatelliteCoordinates(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.addSatelliteCoordinates(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteCoordinates", args);
          return NULL;
        }

        static PyObject *t_CPF_addSatelliteVelocityToCPFCoordinate(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addSatelliteVelocityToCPFCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteVelocityToCPFCoordinate", args);
          return NULL;
        }

        static PyObject *t_CPF_getComments(t_CPF *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CPF_getHeader(t_CPF *self)
        {
          ::org::orekit::files::ilrs::CPFHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CPFHeader::wrap_Object(result);
        }

        static PyObject *t_CPF_getSatellites(t_CPF *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFEphemeris));
        }

        static PyObject *t_CPF_getTimeScale(t_CPF *self)
        {
          ::org::orekit::time::TimeScale result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        static PyObject *t_CPF_setFilter(t_CPF *self, PyObject *arg)
        {
          ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            OBJ_CALL(self->object.setFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFilter", arg);
          return NULL;
        }

        static PyObject *t_CPF_setInterpolationSample(t_CPF *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setInterpolationSample(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInterpolationSample", arg);
          return NULL;
        }

        static PyObject *t_CPF_setMu(t_CPF *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMu", arg);
          return NULL;
        }

        static PyObject *t_CPF_setTimeScale(t_CPF *self, PyObject *arg)
        {
          ::org::orekit::time::TimeScale a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setTimeScale(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeScale", arg);
          return NULL;
        }

        static PyObject *t_CPF_get__comments(t_CPF *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_CPF_set__filter(t_CPF *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &value))
            {
              INT_CALL(self->object.setFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "filter", arg);
          return -1;
        }

        static PyObject *t_CPF_get__header(t_CPF *self, void *data)
        {
          ::org::orekit::files::ilrs::CPFHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CPFHeader::wrap_Object(value);
        }

        static int t_CPF_set__interpolationSample(t_CPF *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setInterpolationSample(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "interpolationSample", arg);
          return -1;
        }

        static int t_CPF_set__mu(t_CPF *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_CPF_get__satellites(t_CPF *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_CPF_get__timeScale(t_CPF *self, void *data)
        {
          ::org::orekit::time::TimeScale value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(value);
        }
        static int t_CPF_set__timeScale(t_CPF *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &value))
            {
              INT_CALL(self->object.setTimeScale(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeScale", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/Attitude.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *Attitude::class$ = NULL;
      jmethodID *Attitude::mids$ = NULL;
      bool Attitude::live$ = false;

      jclass Attitude::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/Attitude");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fd44fd61f38f328a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedAngularCoordinates;)V");
          mids$[mid_init$_8d6d2d78e8e97666] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_f61e782a3e250190] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getOrientation_99d3c751073fda6d] = env->getMethodID(cls, "getOrientation", "()Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_getReferenceFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRotation_1e0dc1a6788897b9] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_f88961cca75a2c0a] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getSpin_f88961cca75a2c0a] = env->getMethodID(cls, "getSpin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_e946dd34d7cdbe89] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_withReferenceFrame_32f130533643b5b7] = env->getMethodID(cls, "withReferenceFrame", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Attitude::Attitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fd44fd61f38f328a, a0.this$, a1.this$)) {}

      Attitude::Attitude(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::AngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8d6d2d78e8e97666, a0.this$, a1.this$, a2.this$)) {}

      Attitude::Attitude(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f61e782a3e250190, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::time::AbsoluteDate Attitude::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      ::org::orekit::utils::TimeStampedAngularCoordinates Attitude::getOrientation() const
      {
        return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getOrientation_99d3c751073fda6d]));
      }

      ::org::orekit::frames::Frame Attitude::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_6c9bc0a928c56d4e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation Attitude::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_1e0dc1a6788897b9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Attitude::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Attitude::getSpin() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSpin_f88961cca75a2c0a]));
      }

      Attitude Attitude::shiftedBy(jdouble a0) const
      {
        return Attitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_e946dd34d7cdbe89], a0));
      }

      Attitude Attitude::withReferenceFrame(const ::org::orekit::frames::Frame & a0) const
      {
        return Attitude(env->callObjectMethod(this$, mids$[mid_withReferenceFrame_32f130533643b5b7], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_Attitude_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Attitude_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Attitude_init_(t_Attitude *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Attitude_getDate(t_Attitude *self);
      static PyObject *t_Attitude_getOrientation(t_Attitude *self);
      static PyObject *t_Attitude_getReferenceFrame(t_Attitude *self);
      static PyObject *t_Attitude_getRotation(t_Attitude *self);
      static PyObject *t_Attitude_getRotationAcceleration(t_Attitude *self);
      static PyObject *t_Attitude_getSpin(t_Attitude *self);
      static PyObject *t_Attitude_shiftedBy(t_Attitude *self, PyObject *arg);
      static PyObject *t_Attitude_withReferenceFrame(t_Attitude *self, PyObject *arg);
      static PyObject *t_Attitude_get__date(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__orientation(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__referenceFrame(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__rotation(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__rotationAcceleration(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__spin(t_Attitude *self, void *data);
      static PyGetSetDef t_Attitude__fields_[] = {
        DECLARE_GET_FIELD(t_Attitude, date),
        DECLARE_GET_FIELD(t_Attitude, orientation),
        DECLARE_GET_FIELD(t_Attitude, referenceFrame),
        DECLARE_GET_FIELD(t_Attitude, rotation),
        DECLARE_GET_FIELD(t_Attitude, rotationAcceleration),
        DECLARE_GET_FIELD(t_Attitude, spin),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Attitude__methods_[] = {
        DECLARE_METHOD(t_Attitude, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Attitude, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Attitude, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getOrientation, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getReferenceFrame, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getSpin, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, shiftedBy, METH_O),
        DECLARE_METHOD(t_Attitude, withReferenceFrame, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Attitude)[] = {
        { Py_tp_methods, t_Attitude__methods_ },
        { Py_tp_init, (void *) t_Attitude_init_ },
        { Py_tp_getset, t_Attitude__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Attitude)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Attitude, t_Attitude, Attitude);

      void t_Attitude::install(PyObject *module)
      {
        installType(&PY_TYPE(Attitude), &PY_TYPE_DEF(Attitude), module, "Attitude", 0);
      }

      void t_Attitude::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "class_", make_descriptor(Attitude::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "wrapfn_", make_descriptor(t_Attitude::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Attitude_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Attitude::initializeClass, 1)))
          return NULL;
        return t_Attitude::wrap_Object(Attitude(((t_Attitude *) arg)->object.this$));
      }
      static PyObject *t_Attitude_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Attitude::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Attitude_init_(t_Attitude *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedAngularCoordinates a1((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Attitude(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a2((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Attitude(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = Attitude(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Attitude_getDate(t_Attitude *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Attitude_getOrientation(t_Attitude *self)
      {
        ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_Attitude_getReferenceFrame(t_Attitude *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Attitude_getRotation(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_Attitude_getRotationAcceleration(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Attitude_getSpin(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Attitude_shiftedBy(t_Attitude *self, PyObject *arg)
      {
        jdouble a0;
        Attitude result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Attitude::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Attitude_withReferenceFrame(t_Attitude *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        Attitude result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withReferenceFrame(a0));
          return t_Attitude::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withReferenceFrame", arg);
        return NULL;
      }

      static PyObject *t_Attitude_get__date(t_Attitude *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__orientation(t_Attitude *self, void *data)
      {
        ::org::orekit::utils::TimeStampedAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__referenceFrame(t_Attitude *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__rotation(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__rotationAcceleration(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__spin(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldPVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldPVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldPVCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldPVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_d326b3da32a40ffa] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_fab028e15eb3891b] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_6c4898d6ec0c3837] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_5ac6a4ca260ac13f] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_d326b3da32a40ffa, a0, a1.this$)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_fab028e15eb3891b, a0, a1, a2.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter TimeStampedFieldPVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_6c4898d6ec0c3837]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldPVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldPVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldPVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldPVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldPVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldPVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator, t_TimeStampedFieldPVCoordinatesHermiteInterpolator, TimeStampedFieldPVCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedFieldPVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldPVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldPVCoordinatesHermiteInterpolator), module, "TimeStampedFieldPVCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldPVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(TimeStampedFieldPVCoordinatesHermiteInterpolator(((t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/AbstractMultipleLinearRegression.h"
#include "org/hipparchus/stat/regression/MultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *AbstractMultipleLinearRegression::class$ = NULL;
        jmethodID *AbstractMultipleLinearRegression::mids$ = NULL;
        bool AbstractMultipleLinearRegression::live$ = false;

        jclass AbstractMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/AbstractMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_estimateErrorVariance_557b8123390d8d0c] = env->getMethodID(cls, "estimateErrorVariance", "()D");
            mids$[mid_estimateRegressandVariance_557b8123390d8d0c] = env->getMethodID(cls, "estimateRegressandVariance", "()D");
            mids$[mid_estimateRegressionParameters_a53a7513ecedada2] = env->getMethodID(cls, "estimateRegressionParameters", "()[D");
            mids$[mid_estimateRegressionParametersStandardErrors_a53a7513ecedada2] = env->getMethodID(cls, "estimateRegressionParametersStandardErrors", "()[D");
            mids$[mid_estimateRegressionParametersVariance_8cf5267aa13a77f3] = env->getMethodID(cls, "estimateRegressionParametersVariance", "()[[D");
            mids$[mid_estimateRegressionStandardError_557b8123390d8d0c] = env->getMethodID(cls, "estimateRegressionStandardError", "()D");
            mids$[mid_estimateResiduals_a53a7513ecedada2] = env->getMethodID(cls, "estimateResiduals", "()[D");
            mids$[mid_isNoIntercept_89b302893bdbe1f1] = env->getMethodID(cls, "isNoIntercept", "()Z");
            mids$[mid_newSampleData_91b51b3c05127ead] = env->getMethodID(cls, "newSampleData", "([DII)V");
            mids$[mid_setNoIntercept_ed2afdb8506b9742] = env->getMethodID(cls, "setNoIntercept", "(Z)V");
            mids$[mid_getX_70a207fcbc031df2] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getY_75d50d73180655b4] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_newYSampleData_cc18240f4a737f14] = env->getMethodID(cls, "newYSampleData", "([D)V");
            mids$[mid_newXSampleData_edb361bfdd1ad9ae] = env->getMethodID(cls, "newXSampleData", "([[D)V");
            mids$[mid_validateSampleData_122207bd161e9ddc] = env->getMethodID(cls, "validateSampleData", "([[D[D)V");
            mids$[mid_validateCovarianceData_a22031f826f9fdb5] = env->getMethodID(cls, "validateCovarianceData", "([[D[[D)V");
            mids$[mid_calculateBeta_75d50d73180655b4] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_70a207fcbc031df2] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateYVariance_557b8123390d8d0c] = env->getMethodID(cls, "calculateYVariance", "()D");
            mids$[mid_calculateErrorVariance_557b8123390d8d0c] = env->getMethodID(cls, "calculateErrorVariance", "()D");
            mids$[mid_calculateResiduals_75d50d73180655b4] = env->getMethodID(cls, "calculateResiduals", "()Lorg/hipparchus/linear/RealVector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractMultipleLinearRegression::AbstractMultipleLinearRegression() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble AbstractMultipleLinearRegression::estimateErrorVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateErrorVariance_557b8123390d8d0c]);
        }

        jdouble AbstractMultipleLinearRegression::estimateRegressandVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressandVariance_557b8123390d8d0c]);
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateRegressionParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParameters_a53a7513ecedada2]));
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateRegressionParametersStandardErrors() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersStandardErrors_a53a7513ecedada2]));
        }

        JArray< JArray< jdouble > > AbstractMultipleLinearRegression::estimateRegressionParametersVariance() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersVariance_8cf5267aa13a77f3]));
        }

        jdouble AbstractMultipleLinearRegression::estimateRegressionStandardError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressionStandardError_557b8123390d8d0c]);
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateResiduals() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateResiduals_a53a7513ecedada2]));
        }

        jboolean AbstractMultipleLinearRegression::isNoIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isNoIntercept_89b302893bdbe1f1]);
        }

        void AbstractMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_91b51b3c05127ead], a0.this$, a1, a2);
        }

        void AbstractMultipleLinearRegression::setNoIntercept(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNoIntercept_ed2afdb8506b9742], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {
        static PyObject *t_AbstractMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractMultipleLinearRegression_init_(t_AbstractMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractMultipleLinearRegression_estimateErrorVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressandVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParameters(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersStandardErrors(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionStandardError(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateResiduals(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_isNoIntercept(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_newSampleData(t_AbstractMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_AbstractMultipleLinearRegression_setNoIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg);
        static PyObject *t_AbstractMultipleLinearRegression_get__noIntercept(t_AbstractMultipleLinearRegression *self, void *data);
        static int t_AbstractMultipleLinearRegression_set__noIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractMultipleLinearRegression__fields_[] = {
          DECLARE_GETSET_FIELD(t_AbstractMultipleLinearRegression, noIntercept),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateErrorVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressandVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParametersStandardErrors, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParametersVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionStandardError, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateResiduals, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, isNoIntercept, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, newSampleData, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, setNoIntercept, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMultipleLinearRegression)[] = {
          { Py_tp_methods, t_AbstractMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_AbstractMultipleLinearRegression_init_ },
          { Py_tp_getset, t_AbstractMultipleLinearRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMultipleLinearRegression, t_AbstractMultipleLinearRegression, AbstractMultipleLinearRegression);

        void t_AbstractMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMultipleLinearRegression), &PY_TYPE_DEF(AbstractMultipleLinearRegression), module, "AbstractMultipleLinearRegression", 0);
        }

        void t_AbstractMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "class_", make_descriptor(AbstractMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "wrapfn_", make_descriptor(t_AbstractMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_AbstractMultipleLinearRegression::wrap_Object(AbstractMultipleLinearRegression(((t_AbstractMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_AbstractMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractMultipleLinearRegression_init_(t_AbstractMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          AbstractMultipleLinearRegression object((jobject) NULL);

          INT_CALL(object = AbstractMultipleLinearRegression());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateErrorVariance(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateErrorVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressandVariance(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateRegressandVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParameters(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParameters());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersStandardErrors(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersStandardErrors());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersVariance(t_AbstractMultipleLinearRegression *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersVariance());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionStandardError(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateRegressionStandardError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateResiduals(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateResiduals());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_isNoIntercept(t_AbstractMultipleLinearRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isNoIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_newSampleData(t_AbstractMultipleLinearRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.newSampleData(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "newSampleData", args);
          return NULL;
        }

        static PyObject *t_AbstractMultipleLinearRegression_setNoIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setNoIntercept(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNoIntercept", arg);
          return NULL;
        }

        static PyObject *t_AbstractMultipleLinearRegression_get__noIntercept(t_AbstractMultipleLinearRegression *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isNoIntercept());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractMultipleLinearRegression_set__noIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setNoIntercept(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "noIntercept", arg);
          return -1;
        }
      }
    }
  }
}
