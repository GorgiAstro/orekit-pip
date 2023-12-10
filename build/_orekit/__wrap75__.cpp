#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/JDKRandomGenerator.h"
#include "java/util/Random.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *JDKRandomGenerator::class$ = NULL;
      jmethodID *JDKRandomGenerator::mids$ = NULL;
      bool JDKRandomGenerator::live$ = false;

      jclass JDKRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/JDKRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_0db4beae88034cd6] = env->getMethodID(cls, "<init>", "(Ljava/util/Random;)V");
          mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextBoolean_b108b35ef48e27bd] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_20012b3010a39c05] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextDouble_dff5885c2c873297] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_5adccb493ada08e8] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_dff5885c2c873297] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_2235cd056f5a882b] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_492808a339bfa35f] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_setSeed_d147d7ce001e2d45] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_99803b0791f320ff] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3a8e7649f31fdb20] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JDKRandomGenerator::JDKRandomGenerator() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      JDKRandomGenerator::JDKRandomGenerator(const ::java::util::Random & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_0db4beae88034cd6, a0.this$)) {}

      JDKRandomGenerator::JDKRandomGenerator(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

      jboolean JDKRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_b108b35ef48e27bd]);
      }

      void JDKRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_20012b3010a39c05], a0.this$);
      }

      jdouble JDKRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_dff5885c2c873297]);
      }

      jfloat JDKRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_5adccb493ada08e8]);
      }

      jdouble JDKRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_dff5885c2c873297]);
      }

      jint JDKRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
      }

      jint JDKRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_2235cd056f5a882b], a0);
      }

      jlong JDKRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_492808a339bfa35f]);
      }

      void JDKRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d147d7ce001e2d45], a0.this$);
      }

      void JDKRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_99803b0791f320ff], a0);
      }

      void JDKRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3a8e7649f31fdb20], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_JDKRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JDKRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JDKRandomGenerator_init_(t_JDKRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JDKRandomGenerator_nextBoolean(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextBytes(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextDouble(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextFloat(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextGaussian(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextInt(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextLong(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_setSeed(t_JDKRandomGenerator *self, PyObject *args);
      static int t_JDKRandomGenerator_set__seed(t_JDKRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_JDKRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_JDKRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JDKRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_JDKRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JDKRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextGaussian, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JDKRandomGenerator)[] = {
        { Py_tp_methods, t_JDKRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_JDKRandomGenerator_init_ },
        { Py_tp_getset, t_JDKRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JDKRandomGenerator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(JDKRandomGenerator, t_JDKRandomGenerator, JDKRandomGenerator);

      void t_JDKRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(JDKRandomGenerator), &PY_TYPE_DEF(JDKRandomGenerator), module, "JDKRandomGenerator", 0);
      }

      void t_JDKRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "class_", make_descriptor(JDKRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "wrapfn_", make_descriptor(t_JDKRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_JDKRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JDKRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_JDKRandomGenerator::wrap_Object(JDKRandomGenerator(((t_JDKRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_JDKRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JDKRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JDKRandomGenerator_init_(t_JDKRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JDKRandomGenerator object((jobject) NULL);

            INT_CALL(object = JDKRandomGenerator());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::util::Random a0((jobject) NULL);
            JDKRandomGenerator object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Random::initializeClass, &a0))
            {
              INT_CALL(object = JDKRandomGenerator(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            JDKRandomGenerator object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = JDKRandomGenerator(a0));
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

      static PyObject *t_JDKRandomGenerator_nextBoolean(t_JDKRandomGenerator *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextBytes(t_JDKRandomGenerator *self, PyObject *args)
      {
        JArray< jbyte > a0((jobject) NULL);

        if (!parseArgs(args, "[B", &a0))
        {
          OBJ_CALL(self->object.nextBytes(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextDouble(t_JDKRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextFloat(t_JDKRandomGenerator *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextGaussian(t_JDKRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextGaussian());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextGaussian", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextInt(t_JDKRandomGenerator *self, PyObject *args)
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

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextLong(t_JDKRandomGenerator *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextLong());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextLong", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_setSeed(t_JDKRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_JDKRandomGenerator_set__seed(t_JDKRandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SchurTransformer.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SchurTransformer::class$ = NULL;
      jmethodID *SchurTransformer::mids$ = NULL;
      bool SchurTransformer::live$ = false;

      jclass SchurTransformer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SchurTransformer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_21a79182f4dd9085] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getP_688b496048ff947b] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPT_688b496048ff947b] = env->getMethodID(cls, "getPT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getT_688b496048ff947b] = env->getMethodID(cls, "getT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SchurTransformer::SchurTransformer(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

      SchurTransformer::SchurTransformer(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_21a79182f4dd9085, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getPT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPT_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getT_688b496048ff947b]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_SchurTransformer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SchurTransformer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SchurTransformer_init_(t_SchurTransformer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SchurTransformer_getP(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_getPT(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_getT(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_get__p(t_SchurTransformer *self, void *data);
      static PyObject *t_SchurTransformer_get__pT(t_SchurTransformer *self, void *data);
      static PyObject *t_SchurTransformer_get__t(t_SchurTransformer *self, void *data);
      static PyGetSetDef t_SchurTransformer__fields_[] = {
        DECLARE_GET_FIELD(t_SchurTransformer, p),
        DECLARE_GET_FIELD(t_SchurTransformer, pT),
        DECLARE_GET_FIELD(t_SchurTransformer, t),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SchurTransformer__methods_[] = {
        DECLARE_METHOD(t_SchurTransformer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SchurTransformer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SchurTransformer, getP, METH_NOARGS),
        DECLARE_METHOD(t_SchurTransformer, getPT, METH_NOARGS),
        DECLARE_METHOD(t_SchurTransformer, getT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SchurTransformer)[] = {
        { Py_tp_methods, t_SchurTransformer__methods_ },
        { Py_tp_init, (void *) t_SchurTransformer_init_ },
        { Py_tp_getset, t_SchurTransformer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SchurTransformer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SchurTransformer, t_SchurTransformer, SchurTransformer);

      void t_SchurTransformer::install(PyObject *module)
      {
        installType(&PY_TYPE(SchurTransformer), &PY_TYPE_DEF(SchurTransformer), module, "SchurTransformer", 0);
      }

      void t_SchurTransformer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "class_", make_descriptor(SchurTransformer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "wrapfn_", make_descriptor(t_SchurTransformer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SchurTransformer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SchurTransformer::initializeClass, 1)))
          return NULL;
        return t_SchurTransformer::wrap_Object(SchurTransformer(((t_SchurTransformer *) arg)->object.this$));
      }
      static PyObject *t_SchurTransformer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SchurTransformer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SchurTransformer_init_(t_SchurTransformer *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            SchurTransformer object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = SchurTransformer(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            SchurTransformer object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SchurTransformer(a0, a1));
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

      static PyObject *t_SchurTransformer_getP(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_getPT(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_getT(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_get__p(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SchurTransformer_get__pT(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SchurTransformer_get__t(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays$OrderDirection::class$ = NULL;
      jmethodID *MathArrays$OrderDirection::mids$ = NULL;
      bool MathArrays$OrderDirection::live$ = false;
      MathArrays$OrderDirection *MathArrays$OrderDirection::DECREASING = NULL;
      MathArrays$OrderDirection *MathArrays$OrderDirection::INCREASING = NULL;

      jclass MathArrays$OrderDirection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays$OrderDirection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_f4b0dd997ea3c363] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/MathArrays$OrderDirection;");
          mids$[mid_values_242fe131f085b0e1] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/MathArrays$OrderDirection;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DECREASING = new MathArrays$OrderDirection(env->getStaticObjectField(cls, "DECREASING", "Lorg/hipparchus/util/MathArrays$OrderDirection;"));
          INCREASING = new MathArrays$OrderDirection(env->getStaticObjectField(cls, "INCREASING", "Lorg/hipparchus/util/MathArrays$OrderDirection;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathArrays$OrderDirection MathArrays$OrderDirection::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MathArrays$OrderDirection(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f4b0dd997ea3c363], a0.this$));
      }

      JArray< MathArrays$OrderDirection > MathArrays$OrderDirection::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MathArrays$OrderDirection >(env->callStaticObjectMethod(cls, mids$[mid_values_242fe131f085b0e1]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MathArrays$OrderDirection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$OrderDirection_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$OrderDirection_of_(t_MathArrays$OrderDirection *self, PyObject *args);
      static PyObject *t_MathArrays$OrderDirection_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays$OrderDirection_values(PyTypeObject *type);
      static PyObject *t_MathArrays$OrderDirection_get__parameters_(t_MathArrays$OrderDirection *self, void *data);
      static PyGetSetDef t_MathArrays$OrderDirection__fields_[] = {
        DECLARE_GET_FIELD(t_MathArrays$OrderDirection, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathArrays$OrderDirection__methods_[] = {
        DECLARE_METHOD(t_MathArrays$OrderDirection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, of_, METH_VARARGS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays$OrderDirection)[] = {
        { Py_tp_methods, t_MathArrays$OrderDirection__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathArrays$OrderDirection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays$OrderDirection)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(MathArrays$OrderDirection, t_MathArrays$OrderDirection, MathArrays$OrderDirection);
      PyObject *t_MathArrays$OrderDirection::wrap_Object(const MathArrays$OrderDirection& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$OrderDirection::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$OrderDirection *self = (t_MathArrays$OrderDirection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MathArrays$OrderDirection::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$OrderDirection::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$OrderDirection *self = (t_MathArrays$OrderDirection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MathArrays$OrderDirection::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays$OrderDirection), &PY_TYPE_DEF(MathArrays$OrderDirection), module, "MathArrays$OrderDirection", 0);
      }

      void t_MathArrays$OrderDirection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "class_", make_descriptor(MathArrays$OrderDirection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "wrapfn_", make_descriptor(t_MathArrays$OrderDirection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "boxfn_", make_descriptor(boxObject));
        env->getClass(MathArrays$OrderDirection::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "DECREASING", make_descriptor(t_MathArrays$OrderDirection::wrap_Object(*MathArrays$OrderDirection::DECREASING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "INCREASING", make_descriptor(t_MathArrays$OrderDirection::wrap_Object(*MathArrays$OrderDirection::INCREASING)));
      }

      static PyObject *t_MathArrays$OrderDirection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays$OrderDirection::initializeClass, 1)))
          return NULL;
        return t_MathArrays$OrderDirection::wrap_Object(MathArrays$OrderDirection(((t_MathArrays$OrderDirection *) arg)->object.this$));
      }
      static PyObject *t_MathArrays$OrderDirection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays$OrderDirection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays$OrderDirection_of_(t_MathArrays$OrderDirection *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MathArrays$OrderDirection_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        MathArrays$OrderDirection result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays$OrderDirection::valueOf(a0));
          return t_MathArrays$OrderDirection::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_MathArrays$OrderDirection_values(PyTypeObject *type)
      {
        JArray< MathArrays$OrderDirection > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::MathArrays$OrderDirection::values());
        return JArray<jobject>(result.this$).wrap(t_MathArrays$OrderDirection::wrap_jobject);
      }
      static PyObject *t_MathArrays$OrderDirection_get__parameters_(t_MathArrays$OrderDirection *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/NdmWriter.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmWriter::class$ = NULL;
          jmethodID *NdmWriter::mids$ = NULL;
          bool NdmWriter::live$ = false;

          jclass NdmWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_699707fca779db0b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/WriterBuilder;)V");
              mids$[mid_writeComment_dd2e2df417b602ab] = env->getMethodID(cls, "writeComment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Ljava/lang/String;)V");
              mids$[mid_writeConstituent_0998ca77618694ad] = env->getMethodID(cls, "writeConstituent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/NdmConstituent;)V");
              mids$[mid_writeMessage_1f6f6f587e5afd97] = env->getMethodID(cls, "writeMessage", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/Ndm;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NdmWriter::NdmWriter(const ::org::orekit::files::ccsds::ndm::WriterBuilder & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_699707fca779db0b, a0.this$)) {}

          void NdmWriter::writeComment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeComment_dd2e2df417b602ab], a0.this$, a1.this$);
          }

          void NdmWriter::writeConstituent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::NdmConstituent & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeConstituent_0998ca77618694ad], a0.this$, a1.this$);
          }

          void NdmWriter::writeMessage(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::Ndm & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeMessage_1f6f6f587e5afd97], a0.this$, a1.this$);
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
          static PyObject *t_NdmWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NdmWriter_init_(t_NdmWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NdmWriter_writeComment(t_NdmWriter *self, PyObject *args);
          static PyObject *t_NdmWriter_writeConstituent(t_NdmWriter *self, PyObject *args);
          static PyObject *t_NdmWriter_writeMessage(t_NdmWriter *self, PyObject *args);

          static PyMethodDef t_NdmWriter__methods_[] = {
            DECLARE_METHOD(t_NdmWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmWriter, writeComment, METH_VARARGS),
            DECLARE_METHOD(t_NdmWriter, writeConstituent, METH_VARARGS),
            DECLARE_METHOD(t_NdmWriter, writeMessage, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmWriter)[] = {
            { Py_tp_methods, t_NdmWriter__methods_ },
            { Py_tp_init, (void *) t_NdmWriter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmWriter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NdmWriter, t_NdmWriter, NdmWriter);

          void t_NdmWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmWriter), &PY_TYPE_DEF(NdmWriter), module, "NdmWriter", 0);
          }

          void t_NdmWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "class_", make_descriptor(NdmWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "wrapfn_", make_descriptor(t_NdmWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmWriter::initializeClass, 1)))
              return NULL;
            return t_NdmWriter::wrap_Object(NdmWriter(((t_NdmWriter *) arg)->object.this$));
          }
          static PyObject *t_NdmWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NdmWriter_init_(t_NdmWriter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::ndm::WriterBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            NdmWriter object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::ndm::WriterBuilder::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::t_WriterBuilder::parameters_))
            {
              INT_CALL(object = NdmWriter(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NdmWriter_writeComment(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.writeComment(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeComment", args);
            return NULL;
          }

          static PyObject *t_NdmWriter_writeConstituent(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::NdmConstituent a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_NdmConstituent::parameters_))
            {
              OBJ_CALL(self->object.writeConstituent(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeConstituent", args);
            return NULL;
          }

          static PyObject *t_NdmWriter_writeMessage(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::Ndm a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::Ndm::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.writeMessage(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeMessage", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/MicrosphereProjectionInterpolator.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "org/hipparchus/analysis/interpolation/MultivariateInterpolator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *MicrosphereProjectionInterpolator::class$ = NULL;
        jmethodID *MicrosphereProjectionInterpolator::mids$ = NULL;
        bool MicrosphereProjectionInterpolator::live$ = false;

        jclass MicrosphereProjectionInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/MicrosphereProjectionInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bc9655dd21c6bc97] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere;DZD)V");
            mids$[mid_init$_4c2d7b504d71edc7] = env->getMethodID(cls, "<init>", "(IIDDDDZD)V");
            mids$[mid_interpolate_ade864ba8b3d9956] = env->getMethodID(cls, "interpolate", "([[D[D)Lorg/hipparchus/analysis/MultivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MicrosphereProjectionInterpolator::MicrosphereProjectionInterpolator(const ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere & a0, jdouble a1, jboolean a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc9655dd21c6bc97, a0.this$, a1, a2, a3)) {}

        MicrosphereProjectionInterpolator::MicrosphereProjectionInterpolator(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jboolean a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c2d7b504d71edc7, a0, a1, a2, a3, a4, a5, a6, a7)) {}

        ::org::hipparchus::analysis::MultivariateFunction MicrosphereProjectionInterpolator::interpolate(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_ade864ba8b3d9956], a0.this$, a1.this$));
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
      namespace interpolation {
        static PyObject *t_MicrosphereProjectionInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MicrosphereProjectionInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MicrosphereProjectionInterpolator_init_(t_MicrosphereProjectionInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MicrosphereProjectionInterpolator_interpolate(t_MicrosphereProjectionInterpolator *self, PyObject *args);

        static PyMethodDef t_MicrosphereProjectionInterpolator__methods_[] = {
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MicrosphereProjectionInterpolator)[] = {
          { Py_tp_methods, t_MicrosphereProjectionInterpolator__methods_ },
          { Py_tp_init, (void *) t_MicrosphereProjectionInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MicrosphereProjectionInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MicrosphereProjectionInterpolator, t_MicrosphereProjectionInterpolator, MicrosphereProjectionInterpolator);

        void t_MicrosphereProjectionInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(MicrosphereProjectionInterpolator), &PY_TYPE_DEF(MicrosphereProjectionInterpolator), module, "MicrosphereProjectionInterpolator", 0);
        }

        void t_MicrosphereProjectionInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "class_", make_descriptor(MicrosphereProjectionInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "wrapfn_", make_descriptor(t_MicrosphereProjectionInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MicrosphereProjectionInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MicrosphereProjectionInterpolator::initializeClass, 1)))
            return NULL;
          return t_MicrosphereProjectionInterpolator::wrap_Object(MicrosphereProjectionInterpolator(((t_MicrosphereProjectionInterpolator *) arg)->object.this$));
        }
        static PyObject *t_MicrosphereProjectionInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MicrosphereProjectionInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MicrosphereProjectionInterpolator_init_(t_MicrosphereProjectionInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere a0((jobject) NULL);
              jdouble a1;
              jboolean a2;
              jdouble a3;
              MicrosphereProjectionInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kDZD", ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = MicrosphereProjectionInterpolator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              jint a0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jboolean a6;
              jdouble a7;
              MicrosphereProjectionInterpolator object((jobject) NULL);

              if (!parseArgs(args, "IIDDDDZD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = MicrosphereProjectionInterpolator(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_MicrosphereProjectionInterpolator_interpolate(t_MicrosphereProjectionInterpolator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldAuxiliaryElements::class$ = NULL;
            jmethodID *FieldAuxiliaryElements::mids$ = NULL;
            bool FieldAuxiliaryElements::live$ = false;

            jclass FieldAuxiliaryElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_46c34a14776a1e1e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;I)V");
                mids$[mid_getAlpha_eba8e72a22c984ac] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getB_eba8e72a22c984ac] = env->getMethodID(cls, "getB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBeta_eba8e72a22c984ac] = env->getMethodID(cls, "getBeta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getC_eba8e72a22c984ac] = env->getMethodID(cls, "getC", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
                mids$[mid_getEcc_eba8e72a22c984ac] = env->getMethodID(cls, "getEcc", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGamma_eba8e72a22c984ac] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getH_eba8e72a22c984ac] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK_eba8e72a22c984ac] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getKeplerianPeriod_eba8e72a22c984ac] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLM_eba8e72a22c984ac] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLe_eba8e72a22c984ac] = env->getMethodID(cls, "getLe", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLv_eba8e72a22c984ac] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_eba8e72a22c984ac] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOrbit_71338e41eb93eedd] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/FieldOrbit;");
                mids$[mid_getP_eba8e72a22c984ac] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getQ_eba8e72a22c984ac] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRetrogradeFactor_570ce0828f81a2c1] = env->getMethodID(cls, "getRetrogradeFactor", "()I");
                mids$[mid_getSma_eba8e72a22c984ac] = env->getMethodID(cls, "getSma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getVectorF_716f50c86ffc8da7] = env->getMethodID(cls, "getVectorF", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_getVectorG_716f50c86ffc8da7] = env->getMethodID(cls, "getVectorG", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_getVectorW_716f50c86ffc8da7] = env->getMethodID(cls, "getVectorW", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_toAuxiliaryElements_3e39de583cb99320] = env->getMethodID(cls, "toAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldAuxiliaryElements::FieldAuxiliaryElements(const ::org::orekit::orbits::FieldOrbit & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_46c34a14776a1e1e, a0.this$, a1)) {}

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getAlpha() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getBeta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBeta_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getC() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getC_eba8e72a22c984ac]));
            }

            ::org::orekit::time::FieldAbsoluteDate FieldAuxiliaryElements::getDate() const
            {
              return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_51da00d5b8a3b5df]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getEcc() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEcc_eba8e72a22c984ac]));
            }

            ::org::orekit::frames::Frame FieldAuxiliaryElements::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getGamma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getH() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getH_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getK() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getKeplerianPeriod() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLM() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLe() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLe_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLv() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_eba8e72a22c984ac]));
            }

            ::org::orekit::orbits::FieldOrbit FieldAuxiliaryElements::getOrbit() const
            {
              return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOrbit_71338e41eb93eedd]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getP() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getP_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getQ() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ_eba8e72a22c984ac]));
            }

            jint FieldAuxiliaryElements::getRetrogradeFactor() const
            {
              return env->callIntMethod(this$, mids$[mid_getRetrogradeFactor_570ce0828f81a2c1]);
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getSma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSma_eba8e72a22c984ac]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorF() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorF_716f50c86ffc8da7]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorG() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorG_716f50c86ffc8da7]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorW() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorW_716f50c86ffc8da7]));
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements FieldAuxiliaryElements::toAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(env->callObjectMethod(this$, mids$[mid_toAuxiliaryElements_3e39de583cb99320]));
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
          namespace utilities {
            static PyObject *t_FieldAuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAuxiliaryElements_of_(t_FieldAuxiliaryElements *self, PyObject *args);
            static int t_FieldAuxiliaryElements_init_(t_FieldAuxiliaryElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldAuxiliaryElements_getAlpha(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getB(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getBeta(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getC(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getDate(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getEcc(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getFrame(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getGamma(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getH(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getK(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getKeplerianPeriod(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getLM(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getLe(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getLv(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getMeanMotion(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getOrbit(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getP(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getQ(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getRetrogradeFactor(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getSma(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getVectorF(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getVectorG(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getVectorW(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_toAuxiliaryElements(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_get__alpha(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__b(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__beta(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__c(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__date(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__ecc(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__frame(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__gamma(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__h(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__k(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__keplerianPeriod(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__lM(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__le(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__lv(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__meanMotion(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__orbit(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__p(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__q(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__retrogradeFactor(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__sma(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__vectorF(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__vectorG(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__vectorW(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__parameters_(t_FieldAuxiliaryElements *self, void *data);
            static PyGetSetDef t_FieldAuxiliaryElements__fields_[] = {
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, alpha),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, b),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, beta),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, c),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, date),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, ecc),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, frame),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, gamma),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, h),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, k),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, keplerianPeriod),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, lM),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, le),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, lv),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, meanMotion),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, orbit),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, p),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, q),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, retrogradeFactor),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, sma),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, vectorF),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, vectorG),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, vectorW),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldAuxiliaryElements__methods_[] = {
              DECLARE_METHOD(t_FieldAuxiliaryElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getB, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getC, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getDate, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getEcc, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getH, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getK, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getKeplerianPeriod, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getLM, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getLe, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getLv, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getOrbit, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getP, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getQ, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getRetrogradeFactor, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getSma, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getVectorF, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getVectorG, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getVectorW, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, toAuxiliaryElements, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldAuxiliaryElements)[] = {
              { Py_tp_methods, t_FieldAuxiliaryElements__methods_ },
              { Py_tp_init, (void *) t_FieldAuxiliaryElements_init_ },
              { Py_tp_getset, t_FieldAuxiliaryElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldAuxiliaryElements)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldAuxiliaryElements, t_FieldAuxiliaryElements, FieldAuxiliaryElements);
            PyObject *t_FieldAuxiliaryElements::wrap_Object(const FieldAuxiliaryElements& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAuxiliaryElements::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAuxiliaryElements *self = (t_FieldAuxiliaryElements *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldAuxiliaryElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAuxiliaryElements::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAuxiliaryElements *self = (t_FieldAuxiliaryElements *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldAuxiliaryElements::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldAuxiliaryElements), &PY_TYPE_DEF(FieldAuxiliaryElements), module, "FieldAuxiliaryElements", 0);
            }

            void t_FieldAuxiliaryElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAuxiliaryElements), "class_", make_descriptor(FieldAuxiliaryElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAuxiliaryElements), "wrapfn_", make_descriptor(t_FieldAuxiliaryElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAuxiliaryElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldAuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldAuxiliaryElements::initializeClass, 1)))
                return NULL;
              return t_FieldAuxiliaryElements::wrap_Object(FieldAuxiliaryElements(((t_FieldAuxiliaryElements *) arg)->object.this$));
            }
            static PyObject *t_FieldAuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldAuxiliaryElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldAuxiliaryElements_of_(t_FieldAuxiliaryElements *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldAuxiliaryElements_init_(t_FieldAuxiliaryElements *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              FieldAuxiliaryElements object((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldAuxiliaryElements(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldAuxiliaryElements_getAlpha(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getAlpha());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getB(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getBeta(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBeta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getC(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getC());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getDate(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getEcc(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getEcc());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getFrame(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getGamma(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getGamma());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getH(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getH());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getK(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getK());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getKeplerianPeriod(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getKeplerianPeriod());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getLM(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getLM());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getLe(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getLe());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getLv(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getLv());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getMeanMotion(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getOrbit(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbit());
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getP(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getP());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getQ(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getQ());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getRetrogradeFactor(t_FieldAuxiliaryElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_FieldAuxiliaryElements_getSma(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getSma());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getVectorF(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getVectorG(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getVectorW(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_toAuxiliaryElements(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements result((jobject) NULL);
              OBJ_CALL(result = self->object.toAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(result);
            }
            static PyObject *t_FieldAuxiliaryElements_get__parameters_(t_FieldAuxiliaryElements *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldAuxiliaryElements_get__alpha(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getAlpha());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__b(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__beta(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBeta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__c(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getC());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__date(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__ecc(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getEcc());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__frame(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__gamma(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getGamma());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__h(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getH());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__k(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getK());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__keplerianPeriod(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getKeplerianPeriod());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__lM(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getLM());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__le(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getLe());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__lv(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getLv());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__meanMotion(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__orbit(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbit());
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__p(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getP());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__q(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getQ());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__retrogradeFactor(t_FieldAuxiliaryElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__sma(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getSma());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__vectorF(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__vectorG(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__vectorW(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeMode::class$ = NULL;
            jmethodID *RangeMode::mids$ = NULL;
            bool RangeMode::live$ = false;
            RangeMode *RangeMode::COHERENT = NULL;
            RangeMode *RangeMode::CONSTANT = NULL;
            RangeMode *RangeMode::ONE_WAY = NULL;

            jclass RangeMode::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeMode");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_8a03aa9eda0dbe36] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");
                mids$[mid_values_c412267324b856d9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COHERENT = new RangeMode(env->getStaticObjectField(cls, "COHERENT", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                CONSTANT = new RangeMode(env->getStaticObjectField(cls, "CONSTANT", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                ONE_WAY = new RangeMode(env->getStaticObjectField(cls, "ONE_WAY", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RangeMode RangeMode::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RangeMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8a03aa9eda0dbe36], a0.this$));
            }

            JArray< RangeMode > RangeMode::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RangeMode >(env->callStaticObjectMethod(cls, mids$[mid_values_c412267324b856d9]));
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
            static PyObject *t_RangeMode_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeMode_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeMode_of_(t_RangeMode *self, PyObject *args);
            static PyObject *t_RangeMode_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_RangeMode_values(PyTypeObject *type);
            static PyObject *t_RangeMode_get__parameters_(t_RangeMode *self, void *data);
            static PyGetSetDef t_RangeMode__fields_[] = {
              DECLARE_GET_FIELD(t_RangeMode, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RangeMode__methods_[] = {
              DECLARE_METHOD(t_RangeMode, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, of_, METH_VARARGS),
              DECLARE_METHOD(t_RangeMode, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeMode)[] = {
              { Py_tp_methods, t_RangeMode__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_RangeMode__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeMode)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(RangeMode, t_RangeMode, RangeMode);
            PyObject *t_RangeMode::wrap_Object(const RangeMode& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeMode::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeMode *self = (t_RangeMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RangeMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeMode::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeMode *self = (t_RangeMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RangeMode::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeMode), &PY_TYPE_DEF(RangeMode), module, "RangeMode", 0);
            }

            void t_RangeMode::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "class_", make_descriptor(RangeMode::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "wrapfn_", make_descriptor(t_RangeMode::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "boxfn_", make_descriptor(boxObject));
              env->getClass(RangeMode::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "COHERENT", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::COHERENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "CONSTANT", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::CONSTANT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "ONE_WAY", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::ONE_WAY)));
            }

            static PyObject *t_RangeMode_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeMode::initializeClass, 1)))
                return NULL;
              return t_RangeMode::wrap_Object(RangeMode(((t_RangeMode *) arg)->object.this$));
            }
            static PyObject *t_RangeMode_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeMode::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeMode_of_(t_RangeMode *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_RangeMode_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              RangeMode result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeMode::valueOf(a0));
                return t_RangeMode::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_RangeMode_values(PyTypeObject *type)
            {
              JArray< RangeMode > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeMode::values());
              return JArray<jobject>(result.this$).wrap(t_RangeMode::wrap_jobject);
            }
            static PyObject *t_RangeMode_get__parameters_(t_RangeMode *self, void *data)
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
#include "java/util/Locale.h"
#include "java/util/Locale$LanguageRange.h"
#include "java/util/Locale.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "java/util/Locale$IsoCountryCode.h"
#include "java/util/Collection.h"
#include "java/util/MissingResourceException.h"
#include "java/lang/Character.h"
#include "java/util/Set.h"
#include "java/util/Locale$FilteringMode.h"
#include "java/lang/Class.h"
#include "java/util/Locale$Category.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Locale::class$ = NULL;
    jmethodID *Locale::mids$ = NULL;
    bool Locale::live$ = false;
    Locale *Locale::CANADA = NULL;
    Locale *Locale::CANADA_FRENCH = NULL;
    Locale *Locale::CHINA = NULL;
    Locale *Locale::CHINESE = NULL;
    Locale *Locale::ENGLISH = NULL;
    Locale *Locale::FRANCE = NULL;
    Locale *Locale::FRENCH = NULL;
    Locale *Locale::GERMAN = NULL;
    Locale *Locale::GERMANY = NULL;
    Locale *Locale::ITALIAN = NULL;
    Locale *Locale::ITALY = NULL;
    Locale *Locale::JAPAN = NULL;
    Locale *Locale::JAPANESE = NULL;
    Locale *Locale::KOREA = NULL;
    Locale *Locale::KOREAN = NULL;
    Locale *Locale::PRC = NULL;
    jchar Locale::PRIVATE_USE_EXTENSION = (jchar) 0;
    Locale *Locale::ROOT = NULL;
    Locale *Locale::SIMPLIFIED_CHINESE = NULL;
    Locale *Locale::TAIWAN = NULL;
    Locale *Locale::TRADITIONAL_CHINESE = NULL;
    Locale *Locale::UK = NULL;
    jchar Locale::UNICODE_LOCALE_EXTENSION = (jchar) 0;
    Locale *Locale::US = NULL;

    jclass Locale::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Locale");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_6a2001eff0605f71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_3c57e287341c9288] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_filter_b2f6453fa339c571] = env->getStaticMethodID(cls, "filter", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_filter_45a99bc2d8a88bd5] = env->getStaticMethodID(cls, "filter", "(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;");
        mids$[mid_filterTags_b2f6453fa339c571] = env->getStaticMethodID(cls, "filterTags", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_filterTags_45a99bc2d8a88bd5] = env->getStaticMethodID(cls, "filterTags", "(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;");
        mids$[mid_forLanguageTag_c4d4adcf8a8ee36c] = env->getStaticMethodID(cls, "forLanguageTag", "(Ljava/lang/String;)Ljava/util/Locale;");
        mids$[mid_getAvailableLocales_c5ed07ebd55821bb] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCountry_11b109bd155ca898] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
        mids$[mid_getDefault_d31b3a14c10c739b] = env->getStaticMethodID(cls, "getDefault", "()Ljava/util/Locale;");
        mids$[mid_getDefault_856f9de903087aa2] = env->getStaticMethodID(cls, "getDefault", "(Ljava/util/Locale$Category;)Ljava/util/Locale;");
        mids$[mid_getDisplayCountry_11b109bd155ca898] = env->getMethodID(cls, "getDisplayCountry", "()Ljava/lang/String;");
        mids$[mid_getDisplayCountry_3cd873bfb132c4fd] = env->getMethodID(cls, "getDisplayCountry", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayLanguage_11b109bd155ca898] = env->getMethodID(cls, "getDisplayLanguage", "()Ljava/lang/String;");
        mids$[mid_getDisplayLanguage_3cd873bfb132c4fd] = env->getMethodID(cls, "getDisplayLanguage", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayName_11b109bd155ca898] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_3cd873bfb132c4fd] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayScript_11b109bd155ca898] = env->getMethodID(cls, "getDisplayScript", "()Ljava/lang/String;");
        mids$[mid_getDisplayScript_3cd873bfb132c4fd] = env->getMethodID(cls, "getDisplayScript", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayVariant_11b109bd155ca898] = env->getMethodID(cls, "getDisplayVariant", "()Ljava/lang/String;");
        mids$[mid_getDisplayVariant_3cd873bfb132c4fd] = env->getMethodID(cls, "getDisplayVariant", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getExtension_3371cef512ec7a0c] = env->getMethodID(cls, "getExtension", "(C)Ljava/lang/String;");
        mids$[mid_getExtensionKeys_015730311a5bacdc] = env->getMethodID(cls, "getExtensionKeys", "()Ljava/util/Set;");
        mids$[mid_getISO3Country_11b109bd155ca898] = env->getMethodID(cls, "getISO3Country", "()Ljava/lang/String;");
        mids$[mid_getISO3Language_11b109bd155ca898] = env->getMethodID(cls, "getISO3Language", "()Ljava/lang/String;");
        mids$[mid_getISOCountries_692f4257baa8d3c3] = env->getStaticMethodID(cls, "getISOCountries", "()[Ljava/lang/String;");
        mids$[mid_getISOCountries_266c1c6971f89c7b] = env->getStaticMethodID(cls, "getISOCountries", "(Ljava/util/Locale$IsoCountryCode;)Ljava/util/Set;");
        mids$[mid_getISOLanguages_692f4257baa8d3c3] = env->getStaticMethodID(cls, "getISOLanguages", "()[Ljava/lang/String;");
        mids$[mid_getLanguage_11b109bd155ca898] = env->getMethodID(cls, "getLanguage", "()Ljava/lang/String;");
        mids$[mid_getScript_11b109bd155ca898] = env->getMethodID(cls, "getScript", "()Ljava/lang/String;");
        mids$[mid_getUnicodeLocaleAttributes_015730311a5bacdc] = env->getMethodID(cls, "getUnicodeLocaleAttributes", "()Ljava/util/Set;");
        mids$[mid_getUnicodeLocaleKeys_015730311a5bacdc] = env->getMethodID(cls, "getUnicodeLocaleKeys", "()Ljava/util/Set;");
        mids$[mid_getUnicodeLocaleType_92807efd57acb082] = env->getMethodID(cls, "getUnicodeLocaleType", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getVariant_11b109bd155ca898] = env->getMethodID(cls, "getVariant", "()Ljava/lang/String;");
        mids$[mid_hasExtensions_b108b35ef48e27bd] = env->getMethodID(cls, "hasExtensions", "()Z");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_lookup_394e13a16d002490] = env->getStaticMethodID(cls, "lookup", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/Locale;");
        mids$[mid_lookupTag_092deffdd375d0a1] = env->getStaticMethodID(cls, "lookupTag", "(Ljava/util/List;Ljava/util/Collection;)Ljava/lang/String;");
        mids$[mid_setDefault_c0d4c4b5d69513bc] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/Locale;)V");
        mids$[mid_setDefault_5a42e6843c463d64] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/Locale$Category;Ljava/util/Locale;)V");
        mids$[mid_stripExtensions_d31b3a14c10c739b] = env->getMethodID(cls, "stripExtensions", "()Ljava/util/Locale;");
        mids$[mid_toLanguageTag_11b109bd155ca898] = env->getMethodID(cls, "toLanguageTag", "()Ljava/lang/String;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        CANADA = new Locale(env->getStaticObjectField(cls, "CANADA", "Ljava/util/Locale;"));
        CANADA_FRENCH = new Locale(env->getStaticObjectField(cls, "CANADA_FRENCH", "Ljava/util/Locale;"));
        CHINA = new Locale(env->getStaticObjectField(cls, "CHINA", "Ljava/util/Locale;"));
        CHINESE = new Locale(env->getStaticObjectField(cls, "CHINESE", "Ljava/util/Locale;"));
        ENGLISH = new Locale(env->getStaticObjectField(cls, "ENGLISH", "Ljava/util/Locale;"));
        FRANCE = new Locale(env->getStaticObjectField(cls, "FRANCE", "Ljava/util/Locale;"));
        FRENCH = new Locale(env->getStaticObjectField(cls, "FRENCH", "Ljava/util/Locale;"));
        GERMAN = new Locale(env->getStaticObjectField(cls, "GERMAN", "Ljava/util/Locale;"));
        GERMANY = new Locale(env->getStaticObjectField(cls, "GERMANY", "Ljava/util/Locale;"));
        ITALIAN = new Locale(env->getStaticObjectField(cls, "ITALIAN", "Ljava/util/Locale;"));
        ITALY = new Locale(env->getStaticObjectField(cls, "ITALY", "Ljava/util/Locale;"));
        JAPAN = new Locale(env->getStaticObjectField(cls, "JAPAN", "Ljava/util/Locale;"));
        JAPANESE = new Locale(env->getStaticObjectField(cls, "JAPANESE", "Ljava/util/Locale;"));
        KOREA = new Locale(env->getStaticObjectField(cls, "KOREA", "Ljava/util/Locale;"));
        KOREAN = new Locale(env->getStaticObjectField(cls, "KOREAN", "Ljava/util/Locale;"));
        PRC = new Locale(env->getStaticObjectField(cls, "PRC", "Ljava/util/Locale;"));
        PRIVATE_USE_EXTENSION = env->getStaticCharField(cls, "PRIVATE_USE_EXTENSION");
        ROOT = new Locale(env->getStaticObjectField(cls, "ROOT", "Ljava/util/Locale;"));
        SIMPLIFIED_CHINESE = new Locale(env->getStaticObjectField(cls, "SIMPLIFIED_CHINESE", "Ljava/util/Locale;"));
        TAIWAN = new Locale(env->getStaticObjectField(cls, "TAIWAN", "Ljava/util/Locale;"));
        TRADITIONAL_CHINESE = new Locale(env->getStaticObjectField(cls, "TRADITIONAL_CHINESE", "Ljava/util/Locale;"));
        UK = new Locale(env->getStaticObjectField(cls, "UK", "Ljava/util/Locale;"));
        UNICODE_LOCALE_EXTENSION = env->getStaticCharField(cls, "UNICODE_LOCALE_EXTENSION");
        US = new Locale(env->getStaticObjectField(cls, "US", "Ljava/util/Locale;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale::Locale(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    Locale::Locale(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a2001eff0605f71, a0.this$, a1.this$)) {}

    Locale::Locale(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c57e287341c9288, a0.this$, a1.this$, a2.this$)) {}

    ::java::lang::Object Locale::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_4d26fd885228c716]));
    }

    jboolean Locale::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::util::List Locale::filter(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filter_b2f6453fa339c571], a0.this$, a1.this$));
    }

    ::java::util::List Locale::filter(const ::java::util::List & a0, const ::java::util::Collection & a1, const ::java::util::Locale$FilteringMode & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filter_45a99bc2d8a88bd5], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::List Locale::filterTags(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filterTags_b2f6453fa339c571], a0.this$, a1.this$));
    }

    ::java::util::List Locale::filterTags(const ::java::util::List & a0, const ::java::util::Collection & a1, const ::java::util::Locale$FilteringMode & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filterTags_45a99bc2d8a88bd5], a0.this$, a1.this$, a2.this$));
    }

    Locale Locale::forLanguageTag(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_forLanguageTag_c4d4adcf8a8ee36c], a0.this$));
    }

    JArray< Locale > Locale::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_c5ed07ebd55821bb]));
    }

    ::java::lang::String Locale::getCountry() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_11b109bd155ca898]));
    }

    Locale Locale::getDefault()
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_getDefault_d31b3a14c10c739b]));
    }

    Locale Locale::getDefault(const ::java::util::Locale$Category & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_getDefault_856f9de903087aa2], a0.this$));
    }

    ::java::lang::String Locale::getDisplayCountry() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayCountry_11b109bd155ca898]));
    }

    ::java::lang::String Locale::getDisplayCountry(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayCountry_3cd873bfb132c4fd], a0.this$));
    }

    ::java::lang::String Locale::getDisplayLanguage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayLanguage_11b109bd155ca898]));
    }

    ::java::lang::String Locale::getDisplayLanguage(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayLanguage_3cd873bfb132c4fd], a0.this$));
    }

    ::java::lang::String Locale::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_11b109bd155ca898]));
    }

    ::java::lang::String Locale::getDisplayName(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_3cd873bfb132c4fd], a0.this$));
    }

    ::java::lang::String Locale::getDisplayScript() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayScript_11b109bd155ca898]));
    }

    ::java::lang::String Locale::getDisplayScript(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayScript_3cd873bfb132c4fd], a0.this$));
    }

    ::java::lang::String Locale::getDisplayVariant() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayVariant_11b109bd155ca898]));
    }

    ::java::lang::String Locale::getDisplayVariant(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayVariant_3cd873bfb132c4fd], a0.this$));
    }

    ::java::lang::String Locale::getExtension(jchar a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExtension_3371cef512ec7a0c], a0));
    }

    ::java::util::Set Locale::getExtensionKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getExtensionKeys_015730311a5bacdc]));
    }

    ::java::lang::String Locale::getISO3Country() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getISO3Country_11b109bd155ca898]));
    }

    ::java::lang::String Locale::getISO3Language() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getISO3Language_11b109bd155ca898]));
    }

    JArray< ::java::lang::String > Locale::getISOCountries()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getISOCountries_692f4257baa8d3c3]));
    }

    ::java::util::Set Locale::getISOCountries(const ::java::util::Locale$IsoCountryCode & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_getISOCountries_266c1c6971f89c7b], a0.this$));
    }

    JArray< ::java::lang::String > Locale::getISOLanguages()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getISOLanguages_692f4257baa8d3c3]));
    }

    ::java::lang::String Locale::getLanguage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLanguage_11b109bd155ca898]));
    }

    ::java::lang::String Locale::getScript() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getScript_11b109bd155ca898]));
    }

    ::java::util::Set Locale::getUnicodeLocaleAttributes() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleAttributes_015730311a5bacdc]));
    }

    ::java::util::Set Locale::getUnicodeLocaleKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleKeys_015730311a5bacdc]));
    }

    ::java::lang::String Locale::getUnicodeLocaleType(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleType_92807efd57acb082], a0.this$));
    }

    ::java::lang::String Locale::getVariant() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getVariant_11b109bd155ca898]));
    }

    jboolean Locale::hasExtensions() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasExtensions_b108b35ef48e27bd]);
    }

    jint Locale::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    Locale Locale::lookup(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_lookup_394e13a16d002490], a0.this$, a1.this$));
    }

    ::java::lang::String Locale::lookupTag(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_lookupTag_092deffdd375d0a1], a0.this$, a1.this$));
    }

    void Locale::setDefault(const Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_c0d4c4b5d69513bc], a0.this$);
    }

    void Locale::setDefault(const ::java::util::Locale$Category & a0, const Locale & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_5a42e6843c463d64], a0.this$, a1.this$);
    }

    Locale Locale::stripExtensions() const
    {
      return Locale(env->callObjectMethod(this$, mids$[mid_stripExtensions_d31b3a14c10c739b]));
    }

    ::java::lang::String Locale::toLanguageTag() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLanguageTag_11b109bd155ca898]));
    }

    ::java::lang::String Locale::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Locale_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Locale_init_(t_Locale *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Locale_clone(t_Locale *self);
    static PyObject *t_Locale_equals(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_filter(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_filterTags(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_forLanguageTag(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale_getAvailableLocales(PyTypeObject *type);
    static PyObject *t_Locale_getCountry(t_Locale *self);
    static PyObject *t_Locale_getDefault(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_getDisplayCountry(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayLanguage(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayName(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayScript(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayVariant(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getExtension(t_Locale *self, PyObject *arg);
    static PyObject *t_Locale_getExtensionKeys(t_Locale *self);
    static PyObject *t_Locale_getISO3Country(t_Locale *self);
    static PyObject *t_Locale_getISO3Language(t_Locale *self);
    static PyObject *t_Locale_getISOCountries(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_getISOLanguages(PyTypeObject *type);
    static PyObject *t_Locale_getLanguage(t_Locale *self);
    static PyObject *t_Locale_getScript(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleAttributes(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleKeys(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleType(t_Locale *self, PyObject *arg);
    static PyObject *t_Locale_getVariant(t_Locale *self);
    static PyObject *t_Locale_hasExtensions(t_Locale *self);
    static PyObject *t_Locale_hashCode(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_lookup(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_lookupTag(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_setDefault(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_stripExtensions(t_Locale *self);
    static PyObject *t_Locale_toLanguageTag(t_Locale *self);
    static PyObject *t_Locale_toString(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_get__availableLocales(t_Locale *self, void *data);
    static PyObject *t_Locale_get__country(t_Locale *self, void *data);
    static PyObject *t_Locale_get__default(t_Locale *self, void *data);
    static int t_Locale_set__default(t_Locale *self, PyObject *arg, void *data);
    static PyObject *t_Locale_get__displayCountry(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayLanguage(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayName(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayScript(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayVariant(t_Locale *self, void *data);
    static PyObject *t_Locale_get__extensionKeys(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSO3Country(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSO3Language(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSOCountries(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSOLanguages(t_Locale *self, void *data);
    static PyObject *t_Locale_get__language(t_Locale *self, void *data);
    static PyObject *t_Locale_get__script(t_Locale *self, void *data);
    static PyObject *t_Locale_get__unicodeLocaleAttributes(t_Locale *self, void *data);
    static PyObject *t_Locale_get__unicodeLocaleKeys(t_Locale *self, void *data);
    static PyObject *t_Locale_get__variant(t_Locale *self, void *data);
    static PyGetSetDef t_Locale__fields_[] = {
      DECLARE_GET_FIELD(t_Locale, availableLocales),
      DECLARE_GET_FIELD(t_Locale, country),
      DECLARE_GETSET_FIELD(t_Locale, default),
      DECLARE_GET_FIELD(t_Locale, displayCountry),
      DECLARE_GET_FIELD(t_Locale, displayLanguage),
      DECLARE_GET_FIELD(t_Locale, displayName),
      DECLARE_GET_FIELD(t_Locale, displayScript),
      DECLARE_GET_FIELD(t_Locale, displayVariant),
      DECLARE_GET_FIELD(t_Locale, extensionKeys),
      DECLARE_GET_FIELD(t_Locale, iSO3Country),
      DECLARE_GET_FIELD(t_Locale, iSO3Language),
      DECLARE_GET_FIELD(t_Locale, iSOCountries),
      DECLARE_GET_FIELD(t_Locale, iSOLanguages),
      DECLARE_GET_FIELD(t_Locale, language),
      DECLARE_GET_FIELD(t_Locale, script),
      DECLARE_GET_FIELD(t_Locale, unicodeLocaleAttributes),
      DECLARE_GET_FIELD(t_Locale, unicodeLocaleKeys),
      DECLARE_GET_FIELD(t_Locale, variant),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Locale__methods_[] = {
      DECLARE_METHOD(t_Locale, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, clone, METH_NOARGS),
      DECLARE_METHOD(t_Locale, equals, METH_VARARGS),
      DECLARE_METHOD(t_Locale, filter, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, filterTags, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, forLanguageTag, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, getAvailableLocales, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getCountry, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getDefault, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getDisplayCountry, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayLanguage, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayName, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayScript, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayVariant, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getExtension, METH_O),
      DECLARE_METHOD(t_Locale, getExtensionKeys, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISO3Country, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISO3Language, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISOCountries, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getISOLanguages, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getLanguage, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getScript, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleAttributes, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleKeys, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleType, METH_O),
      DECLARE_METHOD(t_Locale, getVariant, METH_NOARGS),
      DECLARE_METHOD(t_Locale, hasExtensions, METH_NOARGS),
      DECLARE_METHOD(t_Locale, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Locale, lookup, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, lookupTag, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, setDefault, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, stripExtensions, METH_NOARGS),
      DECLARE_METHOD(t_Locale, toLanguageTag, METH_NOARGS),
      DECLARE_METHOD(t_Locale, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Locale)[] = {
      { Py_tp_methods, t_Locale__methods_ },
      { Py_tp_init, (void *) t_Locale_init_ },
      { Py_tp_getset, t_Locale__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Locale)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Locale, t_Locale, Locale);

    void t_Locale::install(PyObject *module)
    {
      installType(&PY_TYPE(Locale), &PY_TYPE_DEF(Locale), module, "Locale", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "LanguageRange", make_descriptor(&PY_TYPE_DEF(Locale$LanguageRange)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FilteringMode", make_descriptor(&PY_TYPE_DEF(Locale$FilteringMode)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "Category", make_descriptor(&PY_TYPE_DEF(Locale$Category)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "IsoCountryCode", make_descriptor(&PY_TYPE_DEF(Locale$IsoCountryCode)));
    }

    void t_Locale::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "class_", make_descriptor(Locale::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "wrapfn_", make_descriptor(t_Locale::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "boxfn_", make_descriptor(boxObject));
      env->getClass(Locale::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CANADA", make_descriptor(t_Locale::wrap_Object(*Locale::CANADA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CANADA_FRENCH", make_descriptor(t_Locale::wrap_Object(*Locale::CANADA_FRENCH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CHINA", make_descriptor(t_Locale::wrap_Object(*Locale::CHINA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ENGLISH", make_descriptor(t_Locale::wrap_Object(*Locale::ENGLISH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FRANCE", make_descriptor(t_Locale::wrap_Object(*Locale::FRANCE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FRENCH", make_descriptor(t_Locale::wrap_Object(*Locale::FRENCH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "GERMAN", make_descriptor(t_Locale::wrap_Object(*Locale::GERMAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "GERMANY", make_descriptor(t_Locale::wrap_Object(*Locale::GERMANY)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ITALIAN", make_descriptor(t_Locale::wrap_Object(*Locale::ITALIAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ITALY", make_descriptor(t_Locale::wrap_Object(*Locale::ITALY)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "JAPAN", make_descriptor(t_Locale::wrap_Object(*Locale::JAPAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "JAPANESE", make_descriptor(t_Locale::wrap_Object(*Locale::JAPANESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "KOREA", make_descriptor(t_Locale::wrap_Object(*Locale::KOREA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "KOREAN", make_descriptor(t_Locale::wrap_Object(*Locale::KOREAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "PRC", make_descriptor(t_Locale::wrap_Object(*Locale::PRC)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "PRIVATE_USE_EXTENSION", make_descriptor(Locale::PRIVATE_USE_EXTENSION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ROOT", make_descriptor(t_Locale::wrap_Object(*Locale::ROOT)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "SIMPLIFIED_CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::SIMPLIFIED_CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "TAIWAN", make_descriptor(t_Locale::wrap_Object(*Locale::TAIWAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "TRADITIONAL_CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::TRADITIONAL_CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "UK", make_descriptor(t_Locale::wrap_Object(*Locale::UK)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "UNICODE_LOCALE_EXTENSION", make_descriptor(Locale::UNICODE_LOCALE_EXTENSION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "US", make_descriptor(t_Locale::wrap_Object(*Locale::US)));
    }

    static PyObject *t_Locale_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Locale::initializeClass, 1)))
        return NULL;
      return t_Locale::wrap_Object(Locale(((t_Locale *) arg)->object.this$));
    }
    static PyObject *t_Locale_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Locale::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Locale_init_(t_Locale *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Locale(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = Locale(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "sss", &a0, &a1, &a2))
          {
            INT_CALL(object = Locale(a0, a1, a2));
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

    static PyObject *t_Locale_clone(t_Locale *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Locale_equals(t_Locale *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Locale_filter(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filter(a0, a1));
            return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
          }
        }
        break;
       case 3:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::Locale$FilteringMode a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, ::java::util::Locale$FilteringMode::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_, &a2, &p2, ::java::util::t_Locale$FilteringMode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filter(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
          }
        }
      }

      PyErr_SetArgsError(type, "filter", args);
      return NULL;
    }

    static PyObject *t_Locale_filterTags(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filterTags(a0, a1));
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
        break;
       case 3:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::Locale$FilteringMode a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, ::java::util::Locale$FilteringMode::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_, &a2, &p2, ::java::util::t_Locale$FilteringMode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filterTags(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
      }

      PyErr_SetArgsError(type, "filterTags", args);
      return NULL;
    }

    static PyObject *t_Locale_forLanguageTag(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Locale result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Locale::forLanguageTag(a0));
        return t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "forLanguageTag", arg);
      return NULL;
    }

    static PyObject *t_Locale_getAvailableLocales(PyTypeObject *type)
    {
      JArray< Locale > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale::getAvailableLocales());
      return JArray<jobject>(result.this$).wrap(t_Locale::wrap_jobject);
    }

    static PyObject *t_Locale_getCountry(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCountry());
      return j2p(result);
    }

    static PyObject *t_Locale_getDefault(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Locale result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Locale::getDefault());
          return t_Locale::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale$Category a0((jobject) NULL);
          PyTypeObject **p0;
          Locale result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Locale$Category::initializeClass, &a0, &p0, ::java::util::t_Locale$Category::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::getDefault(a0));
            return t_Locale::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getDefault", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayCountry(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayCountry());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayCountry(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayCountry", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayLanguage(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayLanguage());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayLanguage(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayLanguage", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayName(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayName());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayName", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayScript(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayScript());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayScript(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayScript", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayVariant(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayVariant());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayVariant(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayVariant", args);
      return NULL;
    }

    static PyObject *t_Locale_getExtension(t_Locale *self, PyObject *arg)
    {
      jchar a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = self->object.getExtension(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getExtension", arg);
      return NULL;
    }

    static PyObject *t_Locale_getExtensionKeys(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getExtensionKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(Character));
    }

    static PyObject *t_Locale_getISO3Country(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getISO3Country());
      return j2p(result);
    }

    static PyObject *t_Locale_getISO3Language(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getISO3Language());
      return j2p(result);
    }

    static PyObject *t_Locale_getISOCountries(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Locale::getISOCountries());
          return JArray<jstring>(result.this$).wrap();
        }
        break;
       case 1:
        {
          ::java::util::Locale$IsoCountryCode a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Set result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Locale$IsoCountryCode::initializeClass, &a0, &p0, ::java::util::t_Locale$IsoCountryCode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::getISOCountries(a0));
            return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
      }

      PyErr_SetArgsError(type, "getISOCountries", args);
      return NULL;
    }

    static PyObject *t_Locale_getISOLanguages(PyTypeObject *type)
    {
      JArray< ::java::lang::String > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale::getISOLanguages());
      return JArray<jstring>(result.this$).wrap();
    }

    static PyObject *t_Locale_getLanguage(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getLanguage());
      return j2p(result);
    }

    static PyObject *t_Locale_getScript(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getScript());
      return j2p(result);
    }

    static PyObject *t_Locale_getUnicodeLocaleAttributes(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getUnicodeLocaleAttributes());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Locale_getUnicodeLocaleKeys(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getUnicodeLocaleKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Locale_getUnicodeLocaleType(t_Locale *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getUnicodeLocaleType(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getUnicodeLocaleType", arg);
      return NULL;
    }

    static PyObject *t_Locale_getVariant(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getVariant());
      return j2p(result);
    }

    static PyObject *t_Locale_hasExtensions(t_Locale *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasExtensions());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Locale_hashCode(t_Locale *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Locale_lookup(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      Locale result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Locale::lookup(a0, a1));
        return t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "lookup", args);
      return NULL;
    }

    static PyObject *t_Locale_lookupTag(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Locale::lookupTag(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "lookupTag", args);
      return NULL;
    }

    static PyObject *t_Locale_setDefault(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          Locale a0((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(::java::util::Locale::setDefault(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::util::Locale$Category a0((jobject) NULL);
          PyTypeObject **p0;
          Locale a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::Locale$Category::initializeClass, Locale::initializeClass, &a0, &p0, ::java::util::t_Locale$Category::parameters_, &a1))
          {
            OBJ_CALL(::java::util::Locale::setDefault(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "setDefault", args);
      return NULL;
    }

    static PyObject *t_Locale_stripExtensions(t_Locale *self)
    {
      Locale result((jobject) NULL);
      OBJ_CALL(result = self->object.stripExtensions());
      return t_Locale::wrap_Object(result);
    }

    static PyObject *t_Locale_toLanguageTag(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toLanguageTag());
      return j2p(result);
    }

    static PyObject *t_Locale_toString(t_Locale *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Locale_get__availableLocales(t_Locale *self, void *data)
    {
      JArray< Locale > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableLocales());
      return JArray<jobject>(value.this$).wrap(t_Locale::wrap_jobject);
    }

    static PyObject *t_Locale_get__country(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCountry());
      return j2p(value);
    }

    static PyObject *t_Locale_get__default(t_Locale *self, void *data)
    {
      Locale value((jobject) NULL);
      OBJ_CALL(value = self->object.getDefault());
      return t_Locale::wrap_Object(value);
    }
    static int t_Locale_set__default(t_Locale *self, PyObject *arg, void *data)
    {
      {
        Locale value((jobject) NULL);
        if (!parseArg(arg, "k", Locale::initializeClass, &value))
        {
          INT_CALL(self->object.setDefault(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "default", arg);
      return -1;
    }

    static PyObject *t_Locale_get__displayCountry(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayCountry());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayLanguage(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayLanguage());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayName(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayName());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayScript(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayScript());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayVariant(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayVariant());
      return j2p(value);
    }

    static PyObject *t_Locale_get__extensionKeys(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getExtensionKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__iSO3Country(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getISO3Country());
      return j2p(value);
    }

    static PyObject *t_Locale_get__iSO3Language(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getISO3Language());
      return j2p(value);
    }

    static PyObject *t_Locale_get__iSOCountries(t_Locale *self, void *data)
    {
      JArray< ::java::lang::String > value((jobject) NULL);
      OBJ_CALL(value = self->object.getISOCountries());
      return JArray<jstring>(value.this$).wrap();
    }

    static PyObject *t_Locale_get__iSOLanguages(t_Locale *self, void *data)
    {
      JArray< ::java::lang::String > value((jobject) NULL);
      OBJ_CALL(value = self->object.getISOLanguages());
      return JArray<jstring>(value.this$).wrap();
    }

    static PyObject *t_Locale_get__language(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getLanguage());
      return j2p(value);
    }

    static PyObject *t_Locale_get__script(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getScript());
      return j2p(value);
    }

    static PyObject *t_Locale_get__unicodeLocaleAttributes(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getUnicodeLocaleAttributes());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__unicodeLocaleKeys(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getUnicodeLocaleKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__variant(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getVariant());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/RotationXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *RotationXmlTokenBuilder::class$ = NULL;
            jmethodID *RotationXmlTokenBuilder::mids$ = NULL;
            bool RotationXmlTokenBuilder::live$ = false;

            jclass RotationXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/RotationXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_e5e9154f880f1aad] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RotationXmlTokenBuilder::RotationXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            ::java::util::List RotationXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_e5e9154f880f1aad], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_RotationXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RotationXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RotationXmlTokenBuilder_init_(t_RotationXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RotationXmlTokenBuilder_buildTokens(t_RotationXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_RotationXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_RotationXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RotationXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RotationXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RotationXmlTokenBuilder)[] = {
              { Py_tp_methods, t_RotationXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_RotationXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RotationXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RotationXmlTokenBuilder, t_RotationXmlTokenBuilder, RotationXmlTokenBuilder);

            void t_RotationXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(RotationXmlTokenBuilder), &PY_TYPE_DEF(RotationXmlTokenBuilder), module, "RotationXmlTokenBuilder", 0);
            }

            void t_RotationXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "class_", make_descriptor(RotationXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "wrapfn_", make_descriptor(t_RotationXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RotationXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RotationXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_RotationXmlTokenBuilder::wrap_Object(RotationXmlTokenBuilder(((t_RotationXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_RotationXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RotationXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RotationXmlTokenBuilder_init_(t_RotationXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              RotationXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = RotationXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_RotationXmlTokenBuilder_buildTokens(t_RotationXmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
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
#include "org/orekit/attitudes/LofOffset.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *LofOffset::class$ = NULL;
      jmethodID *LofOffset::mids$ = NULL;
      bool LofOffset::live$ = false;

      jclass LofOffset::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/LofOffset");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0da994ef99ba2d6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_47a098327b6c6c38] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;DDD)V");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_53a81d4d17b13463] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_29422c22de775b74] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LofOffset::LofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0da994ef99ba2d6, a0.this$, a1.this$)) {}

      LofOffset::LofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_47a098327b6c6c38, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

      ::org::orekit::attitudes::FieldAttitude LofOffset::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude LofOffset::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LofOffset::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_53a81d4d17b13463], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LofOffset::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_29422c22de775b74], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_LofOffset_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LofOffset_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LofOffset_init_(t_LofOffset *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LofOffset_getAttitude(t_LofOffset *self, PyObject *args);
      static PyObject *t_LofOffset_getAttitudeRotation(t_LofOffset *self, PyObject *args);

      static PyMethodDef t_LofOffset__methods_[] = {
        DECLARE_METHOD(t_LofOffset, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffset, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffset, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_LofOffset, getAttitudeRotation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LofOffset)[] = {
        { Py_tp_methods, t_LofOffset__methods_ },
        { Py_tp_init, (void *) t_LofOffset_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LofOffset)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LofOffset, t_LofOffset, LofOffset);

      void t_LofOffset::install(PyObject *module)
      {
        installType(&PY_TYPE(LofOffset), &PY_TYPE_DEF(LofOffset), module, "LofOffset", 0);
      }

      void t_LofOffset::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffset), "class_", make_descriptor(LofOffset::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffset), "wrapfn_", make_descriptor(t_LofOffset::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffset), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LofOffset_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LofOffset::initializeClass, 1)))
          return NULL;
        return t_LofOffset::wrap_Object(LofOffset(((t_LofOffset *) arg)->object.this$));
      }
      static PyObject *t_LofOffset_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LofOffset::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LofOffset_init_(t_LofOffset *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            LofOffset object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LofOffset(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            LofOffset object((jobject) NULL);

            if (!parseArgs(args, "kkKDDD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4, &a5))
            {
              INT_CALL(object = LofOffset(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_LofOffset_getAttitude(t_LofOffset *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_LofOffset_getAttitudeRotation(t_LofOffset *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/LocalizedGeometryFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/geometry/LocalizedGeometryFormats.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *LocalizedGeometryFormats::class$ = NULL;
      jmethodID *LocalizedGeometryFormats::mids$ = NULL;
      bool LocalizedGeometryFormats::live$ = false;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CLOSE_VERTICES = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CROSSING_BOUNDARY_LOOPS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::EDGE_CONNECTED_TO_ONE_FACET = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::FACET_ORIENTATION_MISMATCH = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::FACET_WITH_SEVERAL_BOUNDARY_LOOPS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::INCONSISTENT_STATE_AT_2_PI_WRAPPING = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::INVALID_ROTATION_ORDER_NAME = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NON_INVERTIBLE_TRANSFORM = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_CONVEX = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_CONVEX_HYPERPLANES = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_SUPPORTED_IN_DIMENSION_N = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::OUTLINE_BOUNDARY_LOOP_OPEN = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::OUT_OF_PLANE = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ROTATION_MATRIX_DIMENSIONS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::TOO_SMALL_TOLERANCE = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::UNABLE_TO_ORTHOGONOLIZE_MATRIX = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_AXIS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR = NULL;

      jclass LocalizedGeometryFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/LocalizedGeometryFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_3cd873bfb132c4fd] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_11b109bd155ca898] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_44f0327de87a386a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/LocalizedGeometryFormats;");
          mids$[mid_values_dca0c9f9ad44e1a9] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/LocalizedGeometryFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CLOSE_VERTICES = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CLOSE_VERTICES", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CROSSING_BOUNDARY_LOOPS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CROSSING_BOUNDARY_LOOPS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          EDGE_CONNECTED_TO_ONE_FACET = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "EDGE_CONNECTED_TO_ONE_FACET", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          FACET_ORIENTATION_MISMATCH = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "FACET_ORIENTATION_MISMATCH", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          FACET_WITH_SEVERAL_BOUNDARY_LOOPS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "FACET_WITH_SEVERAL_BOUNDARY_LOOPS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          INCONSISTENT_STATE_AT_2_PI_WRAPPING = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "INCONSISTENT_STATE_AT_2_PI_WRAPPING", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          INVALID_ROTATION_ORDER_NAME = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "INVALID_ROTATION_ORDER_NAME", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NON_INVERTIBLE_TRANSFORM = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NON_INVERTIBLE_TRANSFORM", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_CONVEX = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_CONVEX", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_CONVEX_HYPERPLANES = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_CONVEX_HYPERPLANES", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_SUPPORTED_IN_DIMENSION_N = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_SUPPORTED_IN_DIMENSION_N", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          OUTLINE_BOUNDARY_LOOP_OPEN = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "OUTLINE_BOUNDARY_LOOP_OPEN", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          OUT_OF_PLANE = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "OUT_OF_PLANE", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ROTATION_MATRIX_DIMENSIONS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ROTATION_MATRIX_DIMENSIONS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          TOO_SMALL_TOLERANCE = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "TOO_SMALL_TOLERANCE", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          UNABLE_TO_ORTHOGONOLIZE_MATRIX = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "UNABLE_TO_ORTHOGONOLIZE_MATRIX", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ZERO_NORM_FOR_ROTATION_AXIS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ZERO_NORM_FOR_ROTATION_AXIS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedGeometryFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_3cd873bfb132c4fd], a0.this$));
      }

      ::java::lang::String LocalizedGeometryFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_11b109bd155ca898]));
      }

      LocalizedGeometryFormats LocalizedGeometryFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedGeometryFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_44f0327de87a386a], a0.this$));
      }

      JArray< LocalizedGeometryFormats > LocalizedGeometryFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedGeometryFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_dca0c9f9ad44e1a9]));
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
      static PyObject *t_LocalizedGeometryFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_of_(t_LocalizedGeometryFormats *self, PyObject *args);
      static PyObject *t_LocalizedGeometryFormats_getLocalizedString(t_LocalizedGeometryFormats *self, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_getSourceString(t_LocalizedGeometryFormats *self);
      static PyObject *t_LocalizedGeometryFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedGeometryFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedGeometryFormats_get__sourceString(t_LocalizedGeometryFormats *self, void *data);
      static PyObject *t_LocalizedGeometryFormats_get__parameters_(t_LocalizedGeometryFormats *self, void *data);
      static PyGetSetDef t_LocalizedGeometryFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedGeometryFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedGeometryFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedGeometryFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedGeometryFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedGeometryFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedGeometryFormats)[] = {
        { Py_tp_methods, t_LocalizedGeometryFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedGeometryFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedGeometryFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedGeometryFormats, t_LocalizedGeometryFormats, LocalizedGeometryFormats);
      PyObject *t_LocalizedGeometryFormats::wrap_Object(const LocalizedGeometryFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedGeometryFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedGeometryFormats *self = (t_LocalizedGeometryFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedGeometryFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedGeometryFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedGeometryFormats *self = (t_LocalizedGeometryFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedGeometryFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedGeometryFormats), &PY_TYPE_DEF(LocalizedGeometryFormats), module, "LocalizedGeometryFormats", 0);
      }

      void t_LocalizedGeometryFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "class_", make_descriptor(LocalizedGeometryFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "wrapfn_", make_descriptor(t_LocalizedGeometryFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedGeometryFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CLOSE_VERTICES", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CLOSE_VERTICES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CROSSING_BOUNDARY_LOOPS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CROSSING_BOUNDARY_LOOPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "EDGE_CONNECTED_TO_ONE_FACET", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::EDGE_CONNECTED_TO_ONE_FACET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "FACET_ORIENTATION_MISMATCH", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::FACET_ORIENTATION_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "FACET_WITH_SEVERAL_BOUNDARY_LOOPS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::FACET_WITH_SEVERAL_BOUNDARY_LOOPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "INCONSISTENT_STATE_AT_2_PI_WRAPPING", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::INCONSISTENT_STATE_AT_2_PI_WRAPPING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "INVALID_ROTATION_ORDER_NAME", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::INVALID_ROTATION_ORDER_NAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NON_INVERTIBLE_TRANSFORM", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NON_INVERTIBLE_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_CONVEX", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_CONVEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_CONVEX_HYPERPLANES", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_CONVEX_HYPERPLANES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_SUPPORTED_IN_DIMENSION_N", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_SUPPORTED_IN_DIMENSION_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "OUTLINE_BOUNDARY_LOOP_OPEN", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::OUTLINE_BOUNDARY_LOOP_OPEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "OUT_OF_PLANE", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::OUT_OF_PLANE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ROTATION_MATRIX_DIMENSIONS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ROTATION_MATRIX_DIMENSIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "TOO_SMALL_TOLERANCE", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::TOO_SMALL_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "UNABLE_TO_ORTHOGONOLIZE_MATRIX", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::UNABLE_TO_ORTHOGONOLIZE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ZERO_NORM_FOR_ROTATION_AXIS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_AXIS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR)));
      }

      static PyObject *t_LocalizedGeometryFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedGeometryFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedGeometryFormats::wrap_Object(LocalizedGeometryFormats(((t_LocalizedGeometryFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedGeometryFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedGeometryFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedGeometryFormats_of_(t_LocalizedGeometryFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedGeometryFormats_getLocalizedString(t_LocalizedGeometryFormats *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_LocalizedGeometryFormats_getSourceString(t_LocalizedGeometryFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedGeometryFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedGeometryFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::geometry::LocalizedGeometryFormats::valueOf(a0));
          return t_LocalizedGeometryFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedGeometryFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedGeometryFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::geometry::LocalizedGeometryFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedGeometryFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedGeometryFormats_get__parameters_(t_LocalizedGeometryFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedGeometryFormats_get__sourceString(t_LocalizedGeometryFormats *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TAIUTCDatFilesLoader$Parser.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TAIUTCDatFilesLoader$Parser::class$ = NULL;
      jmethodID *TAIUTCDatFilesLoader$Parser::mids$ = NULL;
      bool TAIUTCDatFilesLoader$Parser::live$ = false;

      jclass TAIUTCDatFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TAIUTCDatFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_19eef1cf230063a6] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TAIUTCDatFilesLoader$Parser::TAIUTCDatFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ::java::util::List TAIUTCDatFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_19eef1cf230063a6], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TAIUTCDatFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIUTCDatFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TAIUTCDatFilesLoader$Parser_init_(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TAIUTCDatFilesLoader$Parser_parse(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_TAIUTCDatFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TAIUTCDatFilesLoader$Parser)[] = {
        { Py_tp_methods, t_TAIUTCDatFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_TAIUTCDatFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TAIUTCDatFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TAIUTCDatFilesLoader$Parser, t_TAIUTCDatFilesLoader$Parser, TAIUTCDatFilesLoader$Parser);

      void t_TAIUTCDatFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(TAIUTCDatFilesLoader$Parser), &PY_TYPE_DEF(TAIUTCDatFilesLoader$Parser), module, "TAIUTCDatFilesLoader$Parser", 0);
      }

      void t_TAIUTCDatFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "class_", make_descriptor(TAIUTCDatFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "wrapfn_", make_descriptor(t_TAIUTCDatFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TAIUTCDatFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TAIUTCDatFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_TAIUTCDatFilesLoader$Parser::wrap_Object(TAIUTCDatFilesLoader$Parser(((t_TAIUTCDatFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_TAIUTCDatFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TAIUTCDatFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TAIUTCDatFilesLoader$Parser_init_(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        TAIUTCDatFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = TAIUTCDatFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_TAIUTCDatFilesLoader$Parser_parse(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative2::class$ = NULL;
        jmethodID *FieldUnivariateDerivative2::mids$ = NULL;
        bool FieldUnivariateDerivative2::live$ = false;

        jclass FieldUnivariateDerivative2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0d5bbe5a55e94255] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_82fa7e789a6ae1f6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_42c313632b3465ae] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_acos_42c313632b3465ae] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_acosh_42c313632b3465ae] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_c18449b7f042a1b8] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_4fc28646933b5213] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_780d61ccd82df8ec] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_asin_42c313632b3465ae] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_asinh_42c313632b3465ae] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atan_42c313632b3465ae] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atan2_c18449b7f042a1b8] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atanh_42c313632b3465ae] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cbrt_42c313632b3465ae] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_ceil_42c313632b3465ae] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_compose_3602d6ea62e0f71e] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_c18449b7f042a1b8] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_4fc28646933b5213] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_780d61ccd82df8ec] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cos_42c313632b3465ae] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cosh_42c313632b3465ae] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_c18449b7f042a1b8] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_4fc28646933b5213] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_780d61ccd82df8ec] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_42c313632b3465ae] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_expm1_42c313632b3465ae] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_floor_42c313632b3465ae] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getDerivative_93058f0552012043] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_570ce0828f81a2c1] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_3afe7a2c5b4ea8f1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field;");
            mids$[mid_getFirstDerivative_eba8e72a22c984ac] = env->getMethodID(cls, "getFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_42c313632b3465ae] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getSecondDerivative_eba8e72a22c984ac] = env->getMethodID(cls, "getSecondDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_eba8e72a22c984ac] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_5b28be2d3632a5dc] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_c18449b7f042a1b8] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_4019647bb8226afc] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_202e5aee1846f462] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_9cef960231a0721c] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_b7469ef9955415ed] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_879e5b578f4c347d] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_ced98c2116851204] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_d59caff1cee25515] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_233040760d99b581] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_85f0c4ae69457fd4] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_bf345706cb134385] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log_42c313632b3465ae] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log10_42c313632b3465ae] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log1p_42c313632b3465ae] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_c18449b7f042a1b8] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_4fc28646933b5213] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_973e6cd933e7c12b] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_780d61ccd82df8ec] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_negate_42c313632b3465ae] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_newInstance_4fc28646933b5213] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_c18449b7f042a1b8] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_4fc28646933b5213] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_973e6cd933e7c12b] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_1d84cb73dc672630] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_reciprocal_42c313632b3465ae] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_c18449b7f042a1b8] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_4fc28646933b5213] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_780d61ccd82df8ec] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_rint_42c313632b3465ae] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_rootN_973e6cd933e7c12b] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_scalb_973e6cd933e7c12b] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sign_42c313632b3465ae] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sin_42c313632b3465ae] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_42c313632b3465ae] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_42c313632b3465ae] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_c18449b7f042a1b8] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_4fc28646933b5213] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_780d61ccd82df8ec] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_tan_42c313632b3465ae] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_tanh_42c313632b3465ae] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_taylor_616c74807d7607b4] = env->getMethodID(cls, "taylor", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_a4b1871f4d29e58b] = env->getMethodID(cls, "taylor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_42c313632b3465ae] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_toDerivativeStructure_aa5c3ca19ecbe240] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_42c313632b3465ae] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_ulp_42c313632b3465ae] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative2::FieldUnivariateDerivative2(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_0d5bbe5a55e94255, a0.this$)) {}

        FieldUnivariateDerivative2::FieldUnivariateDerivative2(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_82fa7e789a6ae1f6, a0.this$, a1.this$, a2.this$)) {}

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::abs() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_abs_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::acos() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acos_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::acosh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acosh_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_c18449b7f042a1b8], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_4fc28646933b5213], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_780d61ccd82df8ec], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::asin() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asin_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::asinh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asinh_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atan() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atan2(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan2_c18449b7f042a1b8], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atanh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atanh_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cbrt() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cbrt_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::ceil() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ceil_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_compose_3602d6ea62e0f71e], a0.this$, a1.this$, a2.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_c18449b7f042a1b8], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_4fc28646933b5213], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_780d61ccd82df8ec], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cos() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cos_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cosh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cosh_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_c18449b7f042a1b8], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_4fc28646933b5213], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_780d61ccd82df8ec], a0.this$));
        }

        jboolean FieldUnivariateDerivative2::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::exp() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_exp_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::expm1() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_expm1_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::floor() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_floor_42c313632b3465ae]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_93058f0552012043], a0));
        }

        jint FieldUnivariateDerivative2::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_570ce0828f81a2c1]);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field FieldUnivariateDerivative2::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field(env->callObjectMethod(this$, mids$[mid_getField_3afe7a2c5b4ea8f1]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getFirstDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFirstDerivative_eba8e72a22c984ac]));
        }

        jint FieldUnivariateDerivative2::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::getPi() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getPi_42c313632b3465ae]));
        }

        jdouble FieldUnivariateDerivative2::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getSecondDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSecondDerivative_eba8e72a22c984ac]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_eba8e72a22c984ac]));
        }

        ::org::hipparchus::Field FieldUnivariateDerivative2::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_5b28be2d3632a5dc]));
        }

        jint FieldUnivariateDerivative2::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::hypot(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_hypot_c18449b7f042a1b8], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< jdouble > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_4019647bb8226afc], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_202e5aee1846f462], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< FieldUnivariateDerivative2 > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_9cef960231a0721c], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_b7469ef9955415ed], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_879e5b578f4c347d], a0, a1.this$, a2, a3.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3, const FieldUnivariateDerivative2 & a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_ced98c2116851204], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3, jdouble a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_d59caff1cee25515], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldUnivariateDerivative2 & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldUnivariateDerivative2 & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_233040760d99b581], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3, const FieldUnivariateDerivative2 & a4, const FieldUnivariateDerivative2 & a5, const FieldUnivariateDerivative2 & a6, const FieldUnivariateDerivative2 & a7) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_85f0c4ae69457fd4], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3, jdouble a4, const FieldUnivariateDerivative2 & a5, jdouble a6, const FieldUnivariateDerivative2 & a7) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_bf345706cb134385], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log10() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log10_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log1p() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log1p_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_c18449b7f042a1b8], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_4fc28646933b5213], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_973e6cd933e7c12b], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_780d61ccd82df8ec], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::negate() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_negate_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::newInstance(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_newInstance_4fc28646933b5213], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_c18449b7f042a1b8], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_4fc28646933b5213], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_973e6cd933e7c12b], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jdouble a0, const FieldUnivariateDerivative2 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative2(env->callStaticObjectMethod(cls, mids$[mid_pow_1d84cb73dc672630], a0, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::reciprocal() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_reciprocal_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_c18449b7f042a1b8], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_4fc28646933b5213], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_780d61ccd82df8ec], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::rint() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rint_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::rootN(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rootN_973e6cd933e7c12b], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::scalb(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_scalb_973e6cd933e7c12b], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sign() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sign_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sin() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sin_42c313632b3465ae]));
        }

        ::org::hipparchus::util::FieldSinCos FieldUnivariateDerivative2::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sinh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sinh_42c313632b3465ae]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldUnivariateDerivative2::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sqrt() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sqrt_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_c18449b7f042a1b8], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_4fc28646933b5213], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_780d61ccd82df8ec], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::tan() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tan_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::tanh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tanh_42c313632b3465ae]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::taylor(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_616c74807d7607b4], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::taylor(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_a4b1871f4d29e58b], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::toDegrees() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toDegrees_42c313632b3465ae]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative2::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_aa5c3ca19ecbe240]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::toRadians() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toRadians_42c313632b3465ae]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::ulp() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ulp_42c313632b3465ae]));
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
      namespace differentiation {
        static PyObject *t_FieldUnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2_of_(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static int t_FieldUnivariateDerivative2_init_(t_FieldUnivariateDerivative2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldUnivariateDerivative2_abs(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_acos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_acosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_add(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_asin(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_asinh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atan(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atan2(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atanh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cbrt(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_ceil(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_compose(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_copySign(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_divide(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_equals(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_exp(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_expm1(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_floor(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getDerivative(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getExponent(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getField(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getFirstDerivative(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_getOrder(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getPi(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getReal(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getSecondDerivative(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_getValue(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getValueField(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_hashCode(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_hypot(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_linearCombination(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log10(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log1p(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_multiply(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_negate(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_newInstance(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_pow(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_reciprocal(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_remainder(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_rint(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_rootN(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_scalb(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sign(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sin(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinCos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinhCosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sqrt(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_subtract(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_tan(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_tanh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_taylor(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toDegrees(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toDerivativeStructure(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toRadians(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_ulp(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_get__exponent(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__field(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__firstDerivative(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__order(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__pi(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__real(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__secondDerivative(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__value(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__valueField(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__parameters_(t_FieldUnivariateDerivative2 *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative2__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, exponent),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, field),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, firstDerivative),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, order),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, pi),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, real),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, secondDerivative),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, value),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, valueField),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative2__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, abs, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, acos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, acosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, asin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, asinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atan2, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, ceil, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, exp, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, expm1, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, floor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getField, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getPi, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getReal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getSecondDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getValue, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, hypot, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log10, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log1p, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, negate, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, rint, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, rootN, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, scalb, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, tan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, tanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative2)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative2__methods_ },
          { Py_tp_init, (void *) t_FieldUnivariateDerivative2_init_ },
          { Py_tp_getset, t_FieldUnivariateDerivative2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative2)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative2, t_FieldUnivariateDerivative2, FieldUnivariateDerivative2);
        PyObject *t_FieldUnivariateDerivative2::wrap_Object(const FieldUnivariateDerivative2& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2 *self = (t_FieldUnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative2::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2 *self = (t_FieldUnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative2::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative2), &PY_TYPE_DEF(FieldUnivariateDerivative2), module, "FieldUnivariateDerivative2", 0);
        }

        void t_FieldUnivariateDerivative2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "class_", make_descriptor(FieldUnivariateDerivative2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative2::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative2::wrap_Object(FieldUnivariateDerivative2(((t_FieldUnivariateDerivative2 *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative2_of_(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldUnivariateDerivative2_init_(t_FieldUnivariateDerivative2 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative2(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative2(a0, a1, a2));
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

        static PyObject *t_FieldUnivariateDerivative2_abs(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_acos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_acosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_add(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_asin(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_asinh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atan(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atan2(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atanh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cbrt(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_ceil(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_compose(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0, a1, a2));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_copySign(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_divide(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_equals(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_exp(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_expm1(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_floor(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getDerivative(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getExponent(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getField(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2Field::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getFirstDerivative(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstDerivative());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2_getOrder(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getPi(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getReal(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getSecondDerivative(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondDerivative());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2_getValue(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getValueField(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2_hashCode(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_hypot(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_linearCombination(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldUnivariateDerivative2 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, t_FieldUnivariateDerivative2::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 a6((jobject) NULL);
              PyTypeObject **p6;
              FieldUnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, t_FieldUnivariateDerivative2::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_, &a6, &p6, t_FieldUnivariateDerivative2::parameters_, &a7, &p7, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldUnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative2::parameters_, &a6, &a7, &p7, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log10(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log1p(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_multiply(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_negate(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_newInstance(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_pow(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative2 a1((jobject) NULL);
          PyTypeObject **p1;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2::pow(a0, a1));
            return t_FieldUnivariateDerivative2::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_reciprocal(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_remainder(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_rint(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_rootN(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_scalb(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sign(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sin(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinCos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinhCosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sqrt(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_subtract(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_tan(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_tanh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_taylor(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_toDegrees(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_toDerivativeStructure(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_toRadians(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_ulp(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative2_get__parameters_(t_FieldUnivariateDerivative2 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative2_get__exponent(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__field(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2Field::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__firstDerivative(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstDerivative());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__order(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__pi(t_FieldUnivariateDerivative2 *self, void *data)
        {
          FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldUnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__real(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__secondDerivative(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondDerivative());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__value(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__valueField(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonForceModelContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonForceModelContext::class$ = NULL;
            jmethodID *PythonForceModelContext::mids$ = NULL;
            bool PythonForceModelContext::live$ = false;

            jclass PythonForceModelContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonForceModelContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_4f9a60b386acb9f1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonForceModelContext::PythonForceModelContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_4f9a60b386acb9f1, a0.this$)) {}

            void PythonForceModelContext::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonForceModelContext::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonForceModelContext::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
            static PyObject *t_PythonForceModelContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonForceModelContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonForceModelContext_init_(t_PythonForceModelContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonForceModelContext_finalize(t_PythonForceModelContext *self);
            static PyObject *t_PythonForceModelContext_pythonExtension(t_PythonForceModelContext *self, PyObject *args);
            static void JNICALL t_PythonForceModelContext_pythonDecRef0(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonForceModelContext_get__self(t_PythonForceModelContext *self, void *data);
            static PyGetSetDef t_PythonForceModelContext__fields_[] = {
              DECLARE_GET_FIELD(t_PythonForceModelContext, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonForceModelContext__methods_[] = {
              DECLARE_METHOD(t_PythonForceModelContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonForceModelContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonForceModelContext, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonForceModelContext, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonForceModelContext)[] = {
              { Py_tp_methods, t_PythonForceModelContext__methods_ },
              { Py_tp_init, (void *) t_PythonForceModelContext_init_ },
              { Py_tp_getset, t_PythonForceModelContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonForceModelContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(PythonForceModelContext, t_PythonForceModelContext, PythonForceModelContext);

            void t_PythonForceModelContext::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonForceModelContext), &PY_TYPE_DEF(PythonForceModelContext), module, "PythonForceModelContext", 1);
            }

            void t_PythonForceModelContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "class_", make_descriptor(PythonForceModelContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "wrapfn_", make_descriptor(t_PythonForceModelContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonForceModelContext::initializeClass);
              JNINativeMethod methods[] = {
                { "pythonDecRef", "()V", (void *) t_PythonForceModelContext_pythonDecRef0 },
              };
              env->registerNatives(cls, methods, 1);
            }

            static PyObject *t_PythonForceModelContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonForceModelContext::initializeClass, 1)))
                return NULL;
              return t_PythonForceModelContext::wrap_Object(PythonForceModelContext(((t_PythonForceModelContext *) arg)->object.this$));
            }
            static PyObject *t_PythonForceModelContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonForceModelContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonForceModelContext_init_(t_PythonForceModelContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              PythonForceModelContext object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0))
              {
                INT_CALL(object = PythonForceModelContext(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonForceModelContext_finalize(t_PythonForceModelContext *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonForceModelContext_pythonExtension(t_PythonForceModelContext *self, PyObject *args)
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

            static void JNICALL t_PythonForceModelContext_pythonDecRef0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonForceModelContext::mids$[PythonForceModelContext::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonForceModelContext::mids$[PythonForceModelContext::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonForceModelContext_get__self(t_PythonForceModelContext *self, void *data)
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
#include "org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$DetectorConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$DetectorConfiguration::mids$ = NULL;
        bool CRDConfiguration$DetectorConfiguration::live$ = false;

        jclass CRDConfiguration$DetectorConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getAmplifierBandwidth_dff5885c2c873297] = env->getMethodID(cls, "getAmplifierBandwidth", "()D");
            mids$[mid_getAmplifierGain_dff5885c2c873297] = env->getMethodID(cls, "getAmplifierGain", "()D");
            mids$[mid_getAmplifierInUse_11b109bd155ca898] = env->getMethodID(cls, "getAmplifierInUse", "()Ljava/lang/String;");
            mids$[mid_getApplicableWavelength_dff5885c2c873297] = env->getMethodID(cls, "getApplicableWavelength", "()D");
            mids$[mid_getAppliedVoltage_dff5885c2c873297] = env->getMethodID(cls, "getAppliedVoltage", "()D");
            mids$[mid_getDarkCount_dff5885c2c873297] = env->getMethodID(cls, "getDarkCount", "()D");
            mids$[mid_getDetectorId_11b109bd155ca898] = env->getMethodID(cls, "getDetectorId", "()Ljava/lang/String;");
            mids$[mid_getDetectorType_11b109bd155ca898] = env->getMethodID(cls, "getDetectorType", "()Ljava/lang/String;");
            mids$[mid_getExternalSignalProcessing_11b109bd155ca898] = env->getMethodID(cls, "getExternalSignalProcessing", "()Ljava/lang/String;");
            mids$[mid_getOutputPulseType_11b109bd155ca898] = env->getMethodID(cls, "getOutputPulseType", "()Ljava/lang/String;");
            mids$[mid_getOutputPulseWidth_dff5885c2c873297] = env->getMethodID(cls, "getOutputPulseWidth", "()D");
            mids$[mid_getQuantumEfficiency_dff5885c2c873297] = env->getMethodID(cls, "getQuantumEfficiency", "()D");
            mids$[mid_getSpatialFilter_dff5885c2c873297] = env->getMethodID(cls, "getSpatialFilter", "()D");
            mids$[mid_getSpectralFilter_dff5885c2c873297] = env->getMethodID(cls, "getSpectralFilter", "()D");
            mids$[mid_getTransmissionOfSpectralFilter_dff5885c2c873297] = env->getMethodID(cls, "getTransmissionOfSpectralFilter", "()D");
            mids$[mid_setAmplifierBandwidth_17db3a65980d3441] = env->getMethodID(cls, "setAmplifierBandwidth", "(D)V");
            mids$[mid_setAmplifierGain_17db3a65980d3441] = env->getMethodID(cls, "setAmplifierGain", "(D)V");
            mids$[mid_setAmplifierInUse_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAmplifierInUse", "(Ljava/lang/String;)V");
            mids$[mid_setApplicableWavelength_17db3a65980d3441] = env->getMethodID(cls, "setApplicableWavelength", "(D)V");
            mids$[mid_setAppliedVoltage_17db3a65980d3441] = env->getMethodID(cls, "setAppliedVoltage", "(D)V");
            mids$[mid_setDarkCount_17db3a65980d3441] = env->getMethodID(cls, "setDarkCount", "(D)V");
            mids$[mid_setDetectorId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setDetectorId", "(Ljava/lang/String;)V");
            mids$[mid_setDetectorType_d0bc48d5b00dc40c] = env->getMethodID(cls, "setDetectorType", "(Ljava/lang/String;)V");
            mids$[mid_setExternalSignalProcessing_d0bc48d5b00dc40c] = env->getMethodID(cls, "setExternalSignalProcessing", "(Ljava/lang/String;)V");
            mids$[mid_setOutputPulseType_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOutputPulseType", "(Ljava/lang/String;)V");
            mids$[mid_setOutputPulseWidth_17db3a65980d3441] = env->getMethodID(cls, "setOutputPulseWidth", "(D)V");
            mids$[mid_setQuantumEfficiency_17db3a65980d3441] = env->getMethodID(cls, "setQuantumEfficiency", "(D)V");
            mids$[mid_setSpatialFilter_17db3a65980d3441] = env->getMethodID(cls, "setSpatialFilter", "(D)V");
            mids$[mid_setSpectralFilter_17db3a65980d3441] = env->getMethodID(cls, "setSpectralFilter", "(D)V");
            mids$[mid_setTransmissionOfSpectralFilter_17db3a65980d3441] = env->getMethodID(cls, "setTransmissionOfSpectralFilter", "(D)V");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$DetectorConfiguration::CRDConfiguration$DetectorConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble CRDConfiguration$DetectorConfiguration::getAmplifierBandwidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAmplifierBandwidth_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getAmplifierGain() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAmplifierGain_dff5885c2c873297]);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getAmplifierInUse() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAmplifierInUse_11b109bd155ca898]));
        }

        jdouble CRDConfiguration$DetectorConfiguration::getApplicableWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getApplicableWavelength_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getAppliedVoltage() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAppliedVoltage_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getDarkCount() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDarkCount_dff5885c2c873297]);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getDetectorId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDetectorId_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getDetectorType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDetectorType_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getExternalSignalProcessing() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExternalSignalProcessing_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getOutputPulseType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputPulseType_11b109bd155ca898]));
        }

        jdouble CRDConfiguration$DetectorConfiguration::getOutputPulseWidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOutputPulseWidth_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getQuantumEfficiency() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuantumEfficiency_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getSpatialFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpatialFilter_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getSpectralFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpectralFilter_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getTransmissionOfSpectralFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTransmissionOfSpectralFilter_dff5885c2c873297]);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierBandwidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierBandwidth_17db3a65980d3441], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierGain(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierGain_17db3a65980d3441], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierInUse(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierInUse_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setApplicableWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setApplicableWavelength_17db3a65980d3441], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAppliedVoltage(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAppliedVoltage_17db3a65980d3441], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setDarkCount(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDarkCount_17db3a65980d3441], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setDetectorId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDetectorId_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setDetectorType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDetectorType_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setExternalSignalProcessing(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setExternalSignalProcessing_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setOutputPulseType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOutputPulseType_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setOutputPulseWidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOutputPulseWidth_17db3a65980d3441], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setQuantumEfficiency(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setQuantumEfficiency_17db3a65980d3441], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setSpatialFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpatialFilter_17db3a65980d3441], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setSpectralFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpectralFilter_17db3a65980d3441], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setTransmissionOfSpectralFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTransmissionOfSpectralFilter_17db3a65980d3441], a0);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
        static PyObject *t_CRDConfiguration$DetectorConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$DetectorConfiguration_init_(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDarkCount(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorId(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorType(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDarkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_toCrdString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_toString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__darkCount(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__darkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorId(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorType(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$DetectorConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierBandwidth),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierGain),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierInUse),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, applicableWavelength),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, appliedVoltage),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, darkCount),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, detectorId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, detectorType),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, externalSignalProcessing),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, outputPulseType),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, outputPulseWidth),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, quantumEfficiency),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, spatialFilter),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, spectralFilter),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, transmissionOfSpectralFilter),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$DetectorConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierBandwidth, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierGain, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierInUse, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getApplicableWavelength, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAppliedVoltage, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDarkCount, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDetectorId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDetectorType, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getExternalSignalProcessing, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getOutputPulseType, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getOutputPulseWidth, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getQuantumEfficiency, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getSpatialFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getSpectralFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getTransmissionOfSpectralFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierBandwidth, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierGain, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierInUse, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setApplicableWavelength, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAppliedVoltage, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDarkCount, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDetectorId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDetectorType, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setExternalSignalProcessing, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setOutputPulseType, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setOutputPulseWidth, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setQuantumEfficiency, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setSpatialFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setSpectralFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setTransmissionOfSpectralFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$DetectorConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$DetectorConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$DetectorConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$DetectorConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$DetectorConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$DetectorConfiguration, t_CRDConfiguration$DetectorConfiguration, CRDConfiguration$DetectorConfiguration);

        void t_CRDConfiguration$DetectorConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$DetectorConfiguration), &PY_TYPE_DEF(CRDConfiguration$DetectorConfiguration), module, "CRDConfiguration$DetectorConfiguration", 0);
        }

        void t_CRDConfiguration$DetectorConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "class_", make_descriptor(CRDConfiguration$DetectorConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$DetectorConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$DetectorConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$DetectorConfiguration::wrap_Object(CRDConfiguration$DetectorConfiguration(((t_CRDConfiguration$DetectorConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$DetectorConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$DetectorConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$DetectorConfiguration_init_(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$DetectorConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$DetectorConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAmplifierBandwidth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAmplifierGain());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getAmplifierInUse());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getApplicableWavelength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAppliedVoltage());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDarkCount(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDarkCount());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorId(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectorId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorType(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectorType());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getExternalSignalProcessing());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getOutputPulseType());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOutputPulseWidth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuantumEfficiency());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSpatialFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSpectralFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTransmissionOfSpectralFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAmplifierBandwidth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierBandwidth", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAmplifierGain(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierGain", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setAmplifierInUse(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierInUse", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setApplicableWavelength(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setApplicableWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAppliedVoltage(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAppliedVoltage", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDarkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setDarkCount(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDarkCount", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDetectorId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDetectorId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDetectorType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDetectorType", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setExternalSignalProcessing(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setExternalSignalProcessing", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setOutputPulseType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOutputPulseType", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setOutputPulseWidth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOutputPulseWidth", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setQuantumEfficiency(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setQuantumEfficiency", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSpatialFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpatialFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSpectralFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpectralFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTransmissionOfSpectralFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTransmissionOfSpectralFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_toCrdString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$DetectorConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_toString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$DetectorConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAmplifierBandwidth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAmplifierBandwidth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierBandwidth", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAmplifierGain());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAmplifierGain(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierGain", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getAmplifierInUse());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setAmplifierInUse(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierInUse", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getApplicableWavelength());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setApplicableWavelength(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "applicableWavelength", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAppliedVoltage());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAppliedVoltage(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "appliedVoltage", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__darkCount(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDarkCount());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__darkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setDarkCount(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "darkCount", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorId(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorId());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDetectorId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "detectorId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorType(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorType());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDetectorType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "detectorType", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getExternalSignalProcessing());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setExternalSignalProcessing(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "externalSignalProcessing", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getOutputPulseType());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setOutputPulseType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "outputPulseType", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOutputPulseWidth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setOutputPulseWidth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "outputPulseWidth", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuantumEfficiency());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setQuantumEfficiency(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "quantumEfficiency", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSpatialFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSpatialFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spatialFilter", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSpectralFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSpectralFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spectralFilter", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTransmissionOfSpectralFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTransmissionOfSpectralFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transmissionOfSpectralFilter", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/AbstractFieldODEDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/AbstractFieldODEDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *AbstractFieldODEDetector::class$ = NULL;
        jmethodID *AbstractFieldODEDetector::mids$ = NULL;
        bool AbstractFieldODEDetector::live$ = false;
        jdouble AbstractFieldODEDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractFieldODEDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractFieldODEDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractFieldODEDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AbstractFieldODEDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_2fe24792561bd145] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_6becb2360697f07b] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEEventHandler;");
            mids$[mid_getMaxCheckInterval_3c82d31ec337b8be] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_818bdb7f8312a2dd] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;");
            mids$[mid_init_81b5dd1fb920fdc1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_isForward_b108b35ef48e27bd] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_b39a93bc3cee4fa8] = env->getMethodID(cls, "withHandler", "(Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxCheck_7ba6d3ff6c69ffdc] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxCheck_ce900a3fd00fa916] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxIter_ce991b19a4f74810] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withSolver_34261d528a331e74] = env->getMethodID(cls, "withSolver", "(Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withThreshold_7ba6d3ff6c69ffdc] = env->getMethodID(cls, "withThreshold", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_create_faae19721acf326a] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement AbstractFieldODEDetector::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2fe24792561bd145], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventHandler AbstractFieldODEDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_6becb2360697f07b]));
        }

        ::org::hipparchus::ode::events::FieldAdaptableInterval AbstractFieldODEDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_3c82d31ec337b8be]));
        }

        jint AbstractFieldODEDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_570ce0828f81a2c1]);
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver AbstractFieldODEDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_818bdb7f8312a2dd]));
        }

        void AbstractFieldODEDetector::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_81b5dd1fb920fdc1], a0.this$, a1.this$);
        }

        jboolean AbstractFieldODEDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_b108b35ef48e27bd]);
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withHandler(const ::org::hipparchus::ode::events::FieldODEEventHandler & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withHandler_b39a93bc3cee4fa8], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxCheck(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_7ba6d3ff6c69ffdc], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxCheck(const ::org::hipparchus::ode::events::FieldAdaptableInterval & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_ce900a3fd00fa916], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxIter(jint a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_ce991b19a4f74810], a0));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withSolver(const ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withSolver_34261d528a331e74], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withThreshold(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_7ba6d3ff6c69ffdc], a0.this$));
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
    namespace ode {
      namespace events {
        static PyObject *t_AbstractFieldODEDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_of_(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_g(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_getHandler(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getMaxCheckInterval(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getMaxIterationCount(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getSolver(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_init(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_isForward(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_withHandler(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withMaxCheck(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_withMaxIter(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withSolver(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withThreshold(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_get__forward(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__handler(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__maxCheckInterval(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__maxIterationCount(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__solver(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__parameters_(t_AbstractFieldODEDetector *self, void *data);
        static PyGetSetDef t_AbstractFieldODEDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, forward),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, handler),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, solver),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldODEDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldODEDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withSolver, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldODEDetector)[] = {
          { Py_tp_methods, t_AbstractFieldODEDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldODEDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldODEDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldODEDetector, t_AbstractFieldODEDetector, AbstractFieldODEDetector);
        PyObject *t_AbstractFieldODEDetector::wrap_Object(const AbstractFieldODEDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractFieldODEDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEDetector *self = (t_AbstractFieldODEDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AbstractFieldODEDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractFieldODEDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEDetector *self = (t_AbstractFieldODEDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AbstractFieldODEDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldODEDetector), &PY_TYPE_DEF(AbstractFieldODEDetector), module, "AbstractFieldODEDetector", 0);
        }

        void t_AbstractFieldODEDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "class_", make_descriptor(AbstractFieldODEDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "wrapfn_", make_descriptor(t_AbstractFieldODEDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractFieldODEDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractFieldODEDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractFieldODEDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractFieldODEDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractFieldODEDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldODEDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldODEDetector::wrap_Object(AbstractFieldODEDetector(((t_AbstractFieldODEDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldODEDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldODEDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldODEDetector_of_(t_AbstractFieldODEDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractFieldODEDetector_g(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_getHandler(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_getMaxCheckInterval(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_getMaxIterationCount(t_AbstractFieldODEDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractFieldODEDetector_getSolver(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_init(t_AbstractFieldODEDetector *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_isForward(t_AbstractFieldODEDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEDetector_withHandler(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEEventHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventHandler::parameters_))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withMaxCheck(t_AbstractFieldODEDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              AbstractFieldODEDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::ode::events::FieldAdaptableInterval a0((jobject) NULL);
              PyTypeObject **p0;
              AbstractFieldODEDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::ode::events::FieldAdaptableInterval::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldAdaptableInterval::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withMaxIter(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withSolver(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::parameters_))
          {
            OBJ_CALL(result = self->object.withSolver(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSolver", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withThreshold(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractFieldODEDetector_get__parameters_(t_AbstractFieldODEDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractFieldODEDetector_get__forward(t_AbstractFieldODEDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__handler(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__maxCheckInterval(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__maxIterationCount(t_AbstractFieldODEDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__solver(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/MullerSolver2.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *MullerSolver2::class$ = NULL;
        jmethodID *MullerSolver2::mids$ = NULL;
        bool MullerSolver2::live$ = false;

        jclass MullerSolver2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/MullerSolver2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_dff5885c2c873297] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MullerSolver2::MullerSolver2() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        MullerSolver2::MullerSolver2(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        MullerSolver2::MullerSolver2(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}
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
      namespace solvers {
        static PyObject *t_MullerSolver2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver2_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver2_of_(t_MullerSolver2 *self, PyObject *args);
        static int t_MullerSolver2_init_(t_MullerSolver2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MullerSolver2_get__parameters_(t_MullerSolver2 *self, void *data);
        static PyGetSetDef t_MullerSolver2__fields_[] = {
          DECLARE_GET_FIELD(t_MullerSolver2, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MullerSolver2__methods_[] = {
          DECLARE_METHOD(t_MullerSolver2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver2, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MullerSolver2)[] = {
          { Py_tp_methods, t_MullerSolver2__methods_ },
          { Py_tp_init, (void *) t_MullerSolver2_init_ },
          { Py_tp_getset, t_MullerSolver2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MullerSolver2)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(MullerSolver2, t_MullerSolver2, MullerSolver2);
        PyObject *t_MullerSolver2::wrap_Object(const MullerSolver2& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver2::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver2 *self = (t_MullerSolver2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MullerSolver2::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver2::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver2 *self = (t_MullerSolver2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MullerSolver2::install(PyObject *module)
        {
          installType(&PY_TYPE(MullerSolver2), &PY_TYPE_DEF(MullerSolver2), module, "MullerSolver2", 0);
        }

        void t_MullerSolver2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver2), "class_", make_descriptor(MullerSolver2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver2), "wrapfn_", make_descriptor(t_MullerSolver2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver2), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MullerSolver2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MullerSolver2::initializeClass, 1)))
            return NULL;
          return t_MullerSolver2::wrap_Object(MullerSolver2(((t_MullerSolver2 *) arg)->object.this$));
        }
        static PyObject *t_MullerSolver2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MullerSolver2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MullerSolver2_of_(t_MullerSolver2 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MullerSolver2_init_(t_MullerSolver2 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MullerSolver2 object((jobject) NULL);

              INT_CALL(object = MullerSolver2());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              MullerSolver2 object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MullerSolver2(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              MullerSolver2 object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = MullerSolver2(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_MullerSolver2_get__parameters_(t_MullerSolver2 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame45.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame45::class$ = NULL;
          jmethodID *SubFrame45::mids$ = NULL;
          bool SubFrame45::live$ = false;

          jclass SubFrame45::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame45");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDataId_570ce0828f81a2c1] = env->getMethodID(cls, "getDataId", "()I");
              mids$[mid_getSvId_570ce0828f81a2c1] = env->getMethodID(cls, "getSvId", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame45::getDataId() const
          {
            return env->callIntMethod(this$, mids$[mid_getDataId_570ce0828f81a2c1]);
          }

          jint SubFrame45::getSvId() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvId_570ce0828f81a2c1]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame45_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame45_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame45_getDataId(t_SubFrame45 *self);
          static PyObject *t_SubFrame45_getSvId(t_SubFrame45 *self);
          static PyObject *t_SubFrame45_get__dataId(t_SubFrame45 *self, void *data);
          static PyObject *t_SubFrame45_get__svId(t_SubFrame45 *self, void *data);
          static PyGetSetDef t_SubFrame45__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame45, dataId),
            DECLARE_GET_FIELD(t_SubFrame45, svId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame45__methods_[] = {
            DECLARE_METHOD(t_SubFrame45, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame45, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame45, getDataId, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame45, getSvId, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame45)[] = {
            { Py_tp_methods, t_SubFrame45__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame45__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame45)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame45, t_SubFrame45, SubFrame45);

          void t_SubFrame45::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame45), &PY_TYPE_DEF(SubFrame45), module, "SubFrame45", 0);
          }

          void t_SubFrame45::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "class_", make_descriptor(SubFrame45::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "wrapfn_", make_descriptor(t_SubFrame45::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame45_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame45::initializeClass, 1)))
              return NULL;
            return t_SubFrame45::wrap_Object(SubFrame45(((t_SubFrame45 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame45_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame45::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame45_getDataId(t_SubFrame45 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDataId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame45_getSvId(t_SubFrame45 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame45_get__dataId(t_SubFrame45 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDataId());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame45_get__svId(t_SubFrame45 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvId());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseralContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTTesseralContext::class$ = NULL;
            jmethodID *DSSTTesseralContext::mids$ = NULL;
            bool DSSTTesseralContext::live$ = false;

            jclass DSSTTesseralContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseralContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAx2oA_dff5885c2c873297] = env->getMethodID(cls, "getAx2oA", "()D");
                mids$[mid_getBoA_dff5885c2c873297] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_dff5885c2c873297] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getChi_dff5885c2c873297] = env->getMethodID(cls, "getChi", "()D");
                mids$[mid_getChi2_dff5885c2c873297] = env->getMethodID(cls, "getChi2", "()D");
                mids$[mid_getCo2AB_dff5885c2c873297] = env->getMethodID(cls, "getCo2AB", "()D");
                mids$[mid_getE2_dff5885c2c873297] = env->getMethodID(cls, "getE2", "()D");
                mids$[mid_getMeanMotion_dff5885c2c873297] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMoa_dff5885c2c873297] = env->getMethodID(cls, "getMoa", "()D");
                mids$[mid_getOoAB_dff5885c2c873297] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getOrbitPeriod_dff5885c2c873297] = env->getMethodID(cls, "getOrbitPeriod", "()D");
                mids$[mid_getRatio_dff5885c2c873297] = env->getMethodID(cls, "getRatio", "()D");
                mids$[mid_getRoa_dff5885c2c873297] = env->getMethodID(cls, "getRoa", "()D");
                mids$[mid_getTheta_dff5885c2c873297] = env->getMethodID(cls, "getTheta", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble DSSTTesseralContext::getAx2oA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAx2oA_dff5885c2c873297]);
            }

            jdouble DSSTTesseralContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_dff5885c2c873297]);
            }

            jdouble DSSTTesseralContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_dff5885c2c873297]);
            }

            jdouble DSSTTesseralContext::getChi() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChi_dff5885c2c873297]);
            }

            jdouble DSSTTesseralContext::getChi2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChi2_dff5885c2c873297]);
            }

            jdouble DSSTTesseralContext::getCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCo2AB_dff5885c2c873297]);
            }

            jdouble DSSTTesseralContext::getE2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE2_dff5885c2c873297]);
            }

            jdouble DSSTTesseralContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_dff5885c2c873297]);
            }

            jdouble DSSTTesseralContext::getMoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMoa_dff5885c2c873297]);
            }

            jdouble DSSTTesseralContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_dff5885c2c873297]);
            }

            jdouble DSSTTesseralContext::getOrbitPeriod() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOrbitPeriod_dff5885c2c873297]);
            }

            jdouble DSSTTesseralContext::getRatio() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRatio_dff5885c2c873297]);
            }

            jdouble DSSTTesseralContext::getRoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRoa_dff5885c2c873297]);
            }

            jdouble DSSTTesseralContext::getTheta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTheta_dff5885c2c873297]);
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
            static PyObject *t_DSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseralContext_getAx2oA(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getBoA(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getBoABpo(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getChi(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getChi2(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getCo2AB(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getE2(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getMeanMotion(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getMoa(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getOoAB(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getOrbitPeriod(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getRatio(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getRoa(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getTheta(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_get__ax2oA(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__boA(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__boABpo(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__chi(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__chi2(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__co2AB(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__e2(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__meanMotion(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__moa(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__ooAB(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__orbitPeriod(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__ratio(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__roa(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__theta(t_DSSTTesseralContext *self, void *data);
            static PyGetSetDef t_DSSTTesseralContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ax2oA),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, boA),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, chi),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, chi2),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, co2AB),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, e2),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, moa),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, orbitPeriod),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ratio),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, roa),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, theta),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTTesseralContext__methods_[] = {
              DECLARE_METHOD(t_DSSTTesseralContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseralContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseralContext, getAx2oA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getChi, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getChi2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getE2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getMoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getOrbitPeriod, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getRatio, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getTheta, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTTesseralContext)[] = {
              { Py_tp_methods, t_DSSTTesseralContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTTesseralContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTTesseralContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTTesseralContext, t_DSSTTesseralContext, DSSTTesseralContext);

            void t_DSSTTesseralContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTTesseralContext), &PY_TYPE_DEF(DSSTTesseralContext), module, "DSSTTesseralContext", 0);
            }

            void t_DSSTTesseralContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "class_", make_descriptor(DSSTTesseralContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "wrapfn_", make_descriptor(t_DSSTTesseralContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTTesseralContext::initializeClass, 1)))
                return NULL;
              return t_DSSTTesseralContext::wrap_Object(DSSTTesseralContext(((t_DSSTTesseralContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTTesseralContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTTesseralContext_getAx2oA(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAx2oA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getBoA(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getBoABpo(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getChi(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChi());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getChi2(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChi2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getCo2AB(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getE2(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getMeanMotion(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getMoa(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getOoAB(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getOrbitPeriod(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOrbitPeriod());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getRatio(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRatio());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getRoa(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getTheta(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTheta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_get__ax2oA(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAx2oA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__boA(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__boABpo(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__chi(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChi());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__chi2(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChi2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__co2AB(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__e2(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__meanMotion(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__moa(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__ooAB(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__orbitPeriod(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOrbitPeriod());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__ratio(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRatio());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__roa(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__theta(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTheta());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/BesselJ.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/special/BesselJ$BesselJResult.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *BesselJ::class$ = NULL;
      jmethodID *BesselJ::mids$ = NULL;
      bool BesselJ::live$ = false;

      jclass BesselJ::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/BesselJ");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_rjBesl_eb97d40b875daae9] = env->getStaticMethodID(cls, "rjBesl", "(DDI)Lorg/hipparchus/special/BesselJ$BesselJResult;");
          mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
          mids$[mid_value_86ffecc08a63eff0] = env->getStaticMethodID(cls, "value", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BesselJ::BesselJ(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

      ::org::hipparchus::special::BesselJ$BesselJResult BesselJ::rjBesl(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::special::BesselJ$BesselJResult(env->callStaticObjectMethod(cls, mids$[mid_rjBesl_eb97d40b875daae9], a0, a1, a2));
      }

      jdouble BesselJ::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
      }

      jdouble BesselJ::value(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_value_86ffecc08a63eff0], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace special {
      static PyObject *t_BesselJ_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BesselJ_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BesselJ_init_(t_BesselJ *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BesselJ_rjBesl(PyTypeObject *type, PyObject *args);
      static PyObject *t_BesselJ_value(t_BesselJ *self, PyObject *arg);
      static PyObject *t_BesselJ_value_(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_BesselJ__methods_[] = {
        DECLARE_METHOD(t_BesselJ, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, rjBesl, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, value, METH_O),
        DECLARE_METHOD(t_BesselJ, value_, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BesselJ)[] = {
        { Py_tp_methods, t_BesselJ__methods_ },
        { Py_tp_init, (void *) t_BesselJ_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BesselJ)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BesselJ, t_BesselJ, BesselJ);

      void t_BesselJ::install(PyObject *module)
      {
        installType(&PY_TYPE(BesselJ), &PY_TYPE_DEF(BesselJ), module, "BesselJ", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "BesselJResult", make_descriptor(&PY_TYPE_DEF(BesselJ$BesselJResult)));
      }

      void t_BesselJ::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "class_", make_descriptor(BesselJ::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "wrapfn_", make_descriptor(t_BesselJ::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BesselJ_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BesselJ::initializeClass, 1)))
          return NULL;
        return t_BesselJ::wrap_Object(BesselJ(((t_BesselJ *) arg)->object.this$));
      }
      static PyObject *t_BesselJ_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BesselJ::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BesselJ_init_(t_BesselJ *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        BesselJ object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = BesselJ(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BesselJ_rjBesl(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jint a2;
        ::org::hipparchus::special::BesselJ$BesselJResult result((jobject) NULL);

        if (!parseArgs(args, "DDI", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::special::BesselJ::rjBesl(a0, a1, a2));
          return ::org::hipparchus::special::t_BesselJ$BesselJResult::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "rjBesl", args);
        return NULL;
      }

      static PyObject *t_BesselJ_value(t_BesselJ *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }

      static PyObject *t_BesselJ_value_(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::special::BesselJ::value(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "value_", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {

          ::java::lang::Class *RinexComment::class$ = NULL;
          jmethodID *RinexComment::mids$ = NULL;
          bool RinexComment::live$ = false;

          jclass RinexComment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/section/RinexComment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_eb545b81bcb6baba] = env->getMethodID(cls, "<init>", "(ILjava/lang/String;)V");
              mids$[mid_getLineNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getLineNumber", "()I");
              mids$[mid_getText_11b109bd155ca898] = env->getMethodID(cls, "getText", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexComment::RinexComment(jint a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb545b81bcb6baba, a0, a1.this$)) {}

          jint RinexComment::getLineNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLineNumber_570ce0828f81a2c1]);
          }

          ::java::lang::String RinexComment::getText() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getText_11b109bd155ca898]));
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
        namespace section {
          static PyObject *t_RinexComment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexComment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexComment_init_(t_RinexComment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexComment_getLineNumber(t_RinexComment *self);
          static PyObject *t_RinexComment_getText(t_RinexComment *self);
          static PyObject *t_RinexComment_get__lineNumber(t_RinexComment *self, void *data);
          static PyObject *t_RinexComment_get__text(t_RinexComment *self, void *data);
          static PyGetSetDef t_RinexComment__fields_[] = {
            DECLARE_GET_FIELD(t_RinexComment, lineNumber),
            DECLARE_GET_FIELD(t_RinexComment, text),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexComment__methods_[] = {
            DECLARE_METHOD(t_RinexComment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexComment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexComment, getLineNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexComment, getText, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexComment)[] = {
            { Py_tp_methods, t_RinexComment__methods_ },
            { Py_tp_init, (void *) t_RinexComment_init_ },
            { Py_tp_getset, t_RinexComment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexComment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexComment, t_RinexComment, RinexComment);

          void t_RinexComment::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexComment), &PY_TYPE_DEF(RinexComment), module, "RinexComment", 0);
          }

          void t_RinexComment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "class_", make_descriptor(RinexComment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "wrapfn_", make_descriptor(t_RinexComment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexComment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexComment::initializeClass, 1)))
              return NULL;
            return t_RinexComment::wrap_Object(RinexComment(((t_RinexComment *) arg)->object.this$));
          }
          static PyObject *t_RinexComment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexComment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexComment_init_(t_RinexComment *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::java::lang::String a1((jobject) NULL);
            RinexComment object((jobject) NULL);

            if (!parseArgs(args, "Is", &a0, &a1))
            {
              INT_CALL(object = RinexComment(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexComment_getLineNumber(t_RinexComment *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLineNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexComment_getText(t_RinexComment *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getText());
            return j2p(result);
          }

          static PyObject *t_RinexComment_get__lineNumber(t_RinexComment *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLineNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexComment_get__text(t_RinexComment *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getText());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1066.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1066::class$ = NULL;
              jmethodID *Rtcm1066::mids$ = NULL;
              bool Rtcm1066::live$ = false;

              jclass Rtcm1066::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1066");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c862bfeb63a17bd5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1066::Rtcm1066(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_c862bfeb63a17bd5, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1066_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1066_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1066_of_(t_Rtcm1066 *self, PyObject *args);
              static int t_Rtcm1066_init_(t_Rtcm1066 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1066_get__parameters_(t_Rtcm1066 *self, void *data);
              static PyGetSetDef t_Rtcm1066__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1066, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1066__methods_[] = {
                DECLARE_METHOD(t_Rtcm1066, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1066, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1066, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1066)[] = {
                { Py_tp_methods, t_Rtcm1066__methods_ },
                { Py_tp_init, (void *) t_Rtcm1066_init_ },
                { Py_tp_getset, t_Rtcm1066__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1066)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1066, t_Rtcm1066, Rtcm1066);
              PyObject *t_Rtcm1066::wrap_Object(const Rtcm1066& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1066::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1066 *self = (t_Rtcm1066 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1066::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1066::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1066 *self = (t_Rtcm1066 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1066::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1066), &PY_TYPE_DEF(Rtcm1066), module, "Rtcm1066", 0);
              }

              void t_Rtcm1066::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "class_", make_descriptor(Rtcm1066::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "wrapfn_", make_descriptor(t_Rtcm1066::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1066_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1066::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1066::wrap_Object(Rtcm1066(((t_Rtcm1066 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1066_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1066::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1066_of_(t_Rtcm1066 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1066_init_(t_Rtcm1066 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1066 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1066(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCombinedCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1066_get__parameters_(t_Rtcm1066 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/orekit/propagation/sampling/PythonOrekitStepInterpolator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonOrekitStepInterpolator::class$ = NULL;
        jmethodID *PythonOrekitStepInterpolator::mids$ = NULL;
        bool PythonOrekitStepInterpolator::live$ = false;

        jclass PythonOrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonOrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCurrentState_c6311115fea01a34] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getInterpolatedState_fbff2ff5554d95e1] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPreviousState_c6311115fea01a34] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isCurrentStateInterpolated_b108b35ef48e27bd] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_b108b35ef48e27bd] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_b108b35ef48e27bd] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_restrictStep_470f776a59a8cb6f] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/sampling/OrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitStepInterpolator::PythonOrekitStepInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonOrekitStepInterpolator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonOrekitStepInterpolator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonOrekitStepInterpolator::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      namespace sampling {
        static PyObject *t_PythonOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonOrekitStepInterpolator_init_(t_PythonOrekitStepInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonOrekitStepInterpolator_finalize(t_PythonOrekitStepInterpolator *self);
        static PyObject *t_PythonOrekitStepInterpolator_pythonExtension(t_PythonOrekitStepInterpolator *self, PyObject *args);
        static jobject JNICALL t_PythonOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonOrekitStepInterpolator_isCurrentStateInterpolated3(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonOrekitStepInterpolator_isForward4(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonOrekitStepInterpolator_isPreviousStateInterpolated5(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonOrekitStepInterpolator_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonOrekitStepInterpolator_restrictStep7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonOrekitStepInterpolator_get__self(t_PythonOrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_PythonOrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonOrekitStepInterpolator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonOrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonOrekitStepInterpolator)[] = {
          { Py_tp_methods, t_PythonOrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) t_PythonOrekitStepInterpolator_init_ },
          { Py_tp_getset, t_PythonOrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonOrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonOrekitStepInterpolator, t_PythonOrekitStepInterpolator, PythonOrekitStepInterpolator);

        void t_PythonOrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonOrekitStepInterpolator), &PY_TYPE_DEF(PythonOrekitStepInterpolator), module, "PythonOrekitStepInterpolator", 1);
        }

        void t_PythonOrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepInterpolator), "class_", make_descriptor(PythonOrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepInterpolator), "wrapfn_", make_descriptor(t_PythonOrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonOrekitStepInterpolator::initializeClass);
          JNINativeMethod methods[] = {
            { "getCurrentState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonOrekitStepInterpolator_getCurrentState0 },
            { "getInterpolatedState", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonOrekitStepInterpolator_getInterpolatedState1 },
            { "getPreviousState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonOrekitStepInterpolator_getPreviousState2 },
            { "isCurrentStateInterpolated", "()Z", (void *) t_PythonOrekitStepInterpolator_isCurrentStateInterpolated3 },
            { "isForward", "()Z", (void *) t_PythonOrekitStepInterpolator_isForward4 },
            { "isPreviousStateInterpolated", "()Z", (void *) t_PythonOrekitStepInterpolator_isPreviousStateInterpolated5 },
            { "pythonDecRef", "()V", (void *) t_PythonOrekitStepInterpolator_pythonDecRef6 },
            { "restrictStep", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/sampling/OrekitStepInterpolator;", (void *) t_PythonOrekitStepInterpolator_restrictStep7 },
          };
          env->registerNatives(cls, methods, 8);
        }

        static PyObject *t_PythonOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonOrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_PythonOrekitStepInterpolator::wrap_Object(PythonOrekitStepInterpolator(((t_PythonOrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_PythonOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonOrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonOrekitStepInterpolator_init_(t_PythonOrekitStepInterpolator *self, PyObject *args, PyObject *kwds)
        {
          PythonOrekitStepInterpolator object((jobject) NULL);

          INT_CALL(object = PythonOrekitStepInterpolator());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonOrekitStepInterpolator_finalize(t_PythonOrekitStepInterpolator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonOrekitStepInterpolator_pythonExtension(t_PythonOrekitStepInterpolator *self, PyObject *args)
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

        static jobject JNICALL t_PythonOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCurrentState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getCurrentState", result);
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

        static jobject JNICALL t_PythonOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getInterpolatedState", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getInterpolatedState", result);
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

        static jobject JNICALL t_PythonOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPreviousState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getPreviousState", result);
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

        static jboolean JNICALL t_PythonOrekitStepInterpolator_isCurrentStateInterpolated3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isCurrentStateInterpolated", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isCurrentStateInterpolated", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static jboolean JNICALL t_PythonOrekitStepInterpolator_isForward4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isForward", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isForward", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static jboolean JNICALL t_PythonOrekitStepInterpolator_isPreviousStateInterpolated5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isPreviousStateInterpolated", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isPreviousStateInterpolated", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonOrekitStepInterpolator_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonOrekitStepInterpolator_restrictStep7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::sampling::OrekitStepInterpolator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "restrictStep", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &value))
          {
            throwTypeError("restrictStep", result);
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

        static PyObject *t_PythonOrekitStepInterpolator_get__self(t_PythonOrekitStepInterpolator *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudePhysicalProperties::class$ = NULL;
              jmethodID *AttitudePhysicalProperties::mids$ = NULL;
              bool AttitudePhysicalProperties::live$ = false;

              jclass AttitudePhysicalProperties::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_600a2a61652bc473] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getCenterOfPressure_d52645e0d4c07563] = env->getMethodID(cls, "getCenterOfPressure", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getCenterOfPressureReferenceFrame_5d5dd95b04037824] = env->getMethodID(cls, "getCenterOfPressureReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getDragCoefficient_dff5885c2c873297] = env->getMethodID(cls, "getDragCoefficient", "()D");
                  mids$[mid_getDryMass_dff5885c2c873297] = env->getMethodID(cls, "getDryMass", "()D");
                  mids$[mid_getInertiaMatrix_688b496048ff947b] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getInertiaReferenceFrame_5d5dd95b04037824] = env->getMethodID(cls, "getInertiaReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getWetMass_dff5885c2c873297] = env->getMethodID(cls, "getWetMass", "()D");
                  mids$[mid_setCenterOfPressure_029ff0cbf68ea054] = env->getMethodID(cls, "setCenterOfPressure", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setCenterOfPressureReferenceFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setCenterOfPressureReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setDragCoefficient_17db3a65980d3441] = env->getMethodID(cls, "setDragCoefficient", "(D)V");
                  mids$[mid_setDryMass_17db3a65980d3441] = env->getMethodID(cls, "setDryMass", "(D)V");
                  mids$[mid_setInertiaMatrixEntry_1506189166690b5e] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_setInertiaReferenceFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setInertiaReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setWetMass_17db3a65980d3441] = env->getMethodID(cls, "setWetMass", "(D)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudePhysicalProperties::AttitudePhysicalProperties(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_600a2a61652bc473, a0.this$)) {}

              ::org::hipparchus::geometry::euclidean::threed::Vector3D AttitudePhysicalProperties::getCenterOfPressure() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenterOfPressure_d52645e0d4c07563]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudePhysicalProperties::getCenterOfPressureReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCenterOfPressureReferenceFrame_5d5dd95b04037824]));
              }

              jdouble AttitudePhysicalProperties::getDragCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragCoefficient_dff5885c2c873297]);
              }

              jdouble AttitudePhysicalProperties::getDryMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDryMass_dff5885c2c873297]);
              }

              ::org::hipparchus::linear::RealMatrix AttitudePhysicalProperties::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_688b496048ff947b]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudePhysicalProperties::getInertiaReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getInertiaReferenceFrame_5d5dd95b04037824]));
              }

              jdouble AttitudePhysicalProperties::getWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWetMass_dff5885c2c873297]);
              }

              void AttitudePhysicalProperties::setCenterOfPressure(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenterOfPressure_029ff0cbf68ea054], a0.this$);
              }

              void AttitudePhysicalProperties::setCenterOfPressureReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenterOfPressureReferenceFrame_849bc9e3b38b9bcb], a0.this$);
              }

              void AttitudePhysicalProperties::setDragCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragCoefficient_17db3a65980d3441], a0);
              }

              void AttitudePhysicalProperties::setDryMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDryMass_17db3a65980d3441], a0);
              }

              void AttitudePhysicalProperties::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_1506189166690b5e], a0, a1, a2);
              }

              void AttitudePhysicalProperties::setInertiaReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaReferenceFrame_849bc9e3b38b9bcb], a0.this$);
              }

              void AttitudePhysicalProperties::setWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWetMass_17db3a65980d3441], a0);
              }

              void AttitudePhysicalProperties::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
              static PyObject *t_AttitudePhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudePhysicalProperties_init_(t_AttitudePhysicalProperties *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressure(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getDragCoefficient(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getDryMass(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getInertiaMatrix(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getInertiaReferenceFrame(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getWetMass(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setDragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setDryMass(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setInertiaMatrixEntry(t_AttitudePhysicalProperties *self, PyObject *args);
              static PyObject *t_AttitudePhysicalProperties_setInertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setWetMass(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_validate(t_AttitudePhysicalProperties *self, PyObject *args);
              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressure(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__centerOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__dragCoefficient(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__dragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__dryMass(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__dryMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__inertiaMatrix(t_AttitudePhysicalProperties *self, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__wetMass(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__wetMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudePhysicalProperties__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, centerOfPressure),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, centerOfPressureReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, dragCoefficient),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, dryMass),
                DECLARE_GET_FIELD(t_AttitudePhysicalProperties, inertiaMatrix),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, inertiaReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, wetMass),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudePhysicalProperties__methods_[] = {
                DECLARE_METHOD(t_AttitudePhysicalProperties, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getCenterOfPressure, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getCenterOfPressureReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getDragCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getDryMass, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getInertiaMatrix, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getInertiaReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getWetMass, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setCenterOfPressure, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setCenterOfPressureReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setDragCoefficient, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setDryMass, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setInertiaMatrixEntry, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setInertiaReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setWetMass, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudePhysicalProperties)[] = {
                { Py_tp_methods, t_AttitudePhysicalProperties__methods_ },
                { Py_tp_init, (void *) t_AttitudePhysicalProperties_init_ },
                { Py_tp_getset, t_AttitudePhysicalProperties__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudePhysicalProperties)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudePhysicalProperties, t_AttitudePhysicalProperties, AttitudePhysicalProperties);

              void t_AttitudePhysicalProperties::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudePhysicalProperties), &PY_TYPE_DEF(AttitudePhysicalProperties), module, "AttitudePhysicalProperties", 0);
              }

              void t_AttitudePhysicalProperties::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "class_", make_descriptor(AttitudePhysicalProperties::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "wrapfn_", make_descriptor(t_AttitudePhysicalProperties::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudePhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudePhysicalProperties::initializeClass, 1)))
                  return NULL;
                return t_AttitudePhysicalProperties::wrap_Object(AttitudePhysicalProperties(((t_AttitudePhysicalProperties *) arg)->object.this$));
              }
              static PyObject *t_AttitudePhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudePhysicalProperties::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudePhysicalProperties_init_(t_AttitudePhysicalProperties *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                AttitudePhysicalProperties object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = AttitudePhysicalProperties(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressure(t_AttitudePhysicalProperties *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getCenterOfPressure());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCenterOfPressureReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getDragCoefficient(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_getDryMass(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDryMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_getInertiaMatrix(t_AttitudePhysicalProperties *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getInertiaReferenceFrame(t_AttitudePhysicalProperties *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getWetMass(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCenterOfPressure(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCenterOfPressure", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCenterOfPressureReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCenterOfPressureReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setDragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragCoefficient", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setDryMass(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDryMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDryMass", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setInertiaMatrixEntry(t_AttitudePhysicalProperties *self, PyObject *args)
              {
                jint a0;
                jint a1;
                jdouble a2;

                if (!parseArgs(args, "IID", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setInertiaMatrixEntry(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaMatrixEntry", args);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setInertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setInertiaReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setWetMass(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setWetMass", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_validate(t_AttitudePhysicalProperties *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudePhysicalProperties), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressure(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getCenterOfPressure());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__centerOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCenterOfPressure(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centerOfPressure", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCenterOfPressureReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCenterOfPressureReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centerOfPressureReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__dragCoefficient(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__dragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragCoefficient", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__dryMass(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDryMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__dryMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDryMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dryMass", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__inertiaMatrix(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }

              static PyObject *t_AttitudePhysicalProperties_get__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setInertiaReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "inertiaReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__wetMass(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__wetMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "wetMass", arg);
                return -1;
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
#include "org/hipparchus/linear/CholeskyDecomposer.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *CholeskyDecomposer::class$ = NULL;
      jmethodID *CholeskyDecomposer::mids$ = NULL;
      bool CholeskyDecomposer::live$ = false;

      jclass CholeskyDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/CholeskyDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_decompose_6832546eac694082] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CholeskyDecomposer::CholeskyDecomposer(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

      ::org::hipparchus::linear::DecompositionSolver CholeskyDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_6832546eac694082], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_CholeskyDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CholeskyDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CholeskyDecomposer_init_(t_CholeskyDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CholeskyDecomposer_decompose(t_CholeskyDecomposer *self, PyObject *arg);

      static PyMethodDef t_CholeskyDecomposer__methods_[] = {
        DECLARE_METHOD(t_CholeskyDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CholeskyDecomposer)[] = {
        { Py_tp_methods, t_CholeskyDecomposer__methods_ },
        { Py_tp_init, (void *) t_CholeskyDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CholeskyDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CholeskyDecomposer, t_CholeskyDecomposer, CholeskyDecomposer);

      void t_CholeskyDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(CholeskyDecomposer), &PY_TYPE_DEF(CholeskyDecomposer), module, "CholeskyDecomposer", 0);
      }

      void t_CholeskyDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposer), "class_", make_descriptor(CholeskyDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposer), "wrapfn_", make_descriptor(t_CholeskyDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CholeskyDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CholeskyDecomposer::initializeClass, 1)))
          return NULL;
        return t_CholeskyDecomposer::wrap_Object(CholeskyDecomposer(((t_CholeskyDecomposer *) arg)->object.this$));
      }
      static PyObject *t_CholeskyDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CholeskyDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CholeskyDecomposer_init_(t_CholeskyDecomposer *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        CholeskyDecomposer object((jobject) NULL);

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          INT_CALL(object = CholeskyDecomposer(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CholeskyDecomposer_decompose(t_CholeskyDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathRuntimeException::class$ = NULL;
      jmethodID *MathRuntimeException::mids$ = NULL;
      bool MathRuntimeException::live$ = false;

      jclass MathRuntimeException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathRuntimeException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0cf82c16a7e8751] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_6ecc3fd6067c266c] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_createInternalError_563b33cf1923d177] = env->getStaticMethodID(cls, "createInternalError", "()Lorg/hipparchus/exception/MathRuntimeException;");
          mids$[mid_createInternalError_1f40e342c6164292] = env->getStaticMethodID(cls, "createInternalError", "(Ljava/lang/Throwable;)Lorg/hipparchus/exception/MathRuntimeException;");
          mids$[mid_getLocalizedMessage_11b109bd155ca898] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_11b109bd155ca898] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cd873bfb132c4fd] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_b93c730013ce64c6] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_517615caa9b88a24] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathRuntimeException::MathRuntimeException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_d0cf82c16a7e8751, a0.this$, a1.this$)) {}

      MathRuntimeException::MathRuntimeException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_6ecc3fd6067c266c, a0.this$, a1.this$, a2.this$)) {}

      MathRuntimeException MathRuntimeException::createInternalError()
      {
        jclass cls = env->getClass(initializeClass);
        return MathRuntimeException(env->callStaticObjectMethod(cls, mids$[mid_createInternalError_563b33cf1923d177]));
      }

      MathRuntimeException MathRuntimeException::createInternalError(const ::java::lang::Throwable & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MathRuntimeException(env->callStaticObjectMethod(cls, mids$[mid_createInternalError_1f40e342c6164292], a0.this$));
      }

      ::java::lang::String MathRuntimeException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_11b109bd155ca898]));
      }

      ::java::lang::String MathRuntimeException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_11b109bd155ca898]));
      }

      ::java::lang::String MathRuntimeException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cd873bfb132c4fd], a0.this$));
      }

      JArray< ::java::lang::Object > MathRuntimeException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_b93c730013ce64c6]));
      }

      ::org::hipparchus::exception::Localizable MathRuntimeException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_517615caa9b88a24]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_MathRuntimeException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathRuntimeException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathRuntimeException_init_(t_MathRuntimeException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MathRuntimeException_createInternalError(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathRuntimeException_getLocalizedMessage(t_MathRuntimeException *self, PyObject *args);
      static PyObject *t_MathRuntimeException_getMessage(t_MathRuntimeException *self, PyObject *args);
      static PyObject *t_MathRuntimeException_getParts(t_MathRuntimeException *self);
      static PyObject *t_MathRuntimeException_getSpecifier(t_MathRuntimeException *self);
      static PyObject *t_MathRuntimeException_get__localizedMessage(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__message(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__parts(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__specifier(t_MathRuntimeException *self, void *data);
      static PyGetSetDef t_MathRuntimeException__fields_[] = {
        DECLARE_GET_FIELD(t_MathRuntimeException, localizedMessage),
        DECLARE_GET_FIELD(t_MathRuntimeException, message),
        DECLARE_GET_FIELD(t_MathRuntimeException, parts),
        DECLARE_GET_FIELD(t_MathRuntimeException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathRuntimeException__methods_[] = {
        DECLARE_METHOD(t_MathRuntimeException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, createInternalError, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_MathRuntimeException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_MathRuntimeException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_MathRuntimeException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathRuntimeException)[] = {
        { Py_tp_methods, t_MathRuntimeException__methods_ },
        { Py_tp_init, (void *) t_MathRuntimeException_init_ },
        { Py_tp_getset, t_MathRuntimeException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathRuntimeException)[] = {
        &PY_TYPE_DEF(::java::lang::RuntimeException),
        NULL
      };

      DEFINE_TYPE(MathRuntimeException, t_MathRuntimeException, MathRuntimeException);

      void t_MathRuntimeException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathRuntimeException), &PY_TYPE_DEF(MathRuntimeException), module, "MathRuntimeException", 0);
      }

      void t_MathRuntimeException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "class_", make_descriptor(MathRuntimeException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "wrapfn_", make_descriptor(t_MathRuntimeException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathRuntimeException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathRuntimeException::initializeClass, 1)))
          return NULL;
        return t_MathRuntimeException::wrap_Object(MathRuntimeException(((t_MathRuntimeException *) arg)->object.this$));
      }
      static PyObject *t_MathRuntimeException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathRuntimeException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathRuntimeException_init_(t_MathRuntimeException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathRuntimeException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathRuntimeException(a0, a1));
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
            MathRuntimeException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathRuntimeException(a0, a1, a2));
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

      static PyObject *t_MathRuntimeException_createInternalError(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            MathRuntimeException result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::exception::MathRuntimeException::createInternalError());
            return t_MathRuntimeException::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            MathRuntimeException result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::exception::MathRuntimeException::createInternalError(a0));
              return t_MathRuntimeException::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createInternalError", args);
        return NULL;
      }

      static PyObject *t_MathRuntimeException_getLocalizedMessage(t_MathRuntimeException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(MathRuntimeException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_MathRuntimeException_getMessage(t_MathRuntimeException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(MathRuntimeException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_MathRuntimeException_getParts(t_MathRuntimeException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_MathRuntimeException_getSpecifier(t_MathRuntimeException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_MathRuntimeException_get__localizedMessage(t_MathRuntimeException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_MathRuntimeException_get__message(t_MathRuntimeException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_MathRuntimeException_get__parts(t_MathRuntimeException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_MathRuntimeException_get__specifier(t_MathRuntimeException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistoryMetadata::class$ = NULL;
              jmethodID *OrbitCovarianceHistoryMetadata::mids$ = NULL;
              bool OrbitCovarianceHistoryMetadata::live$ = false;

              jclass OrbitCovarianceHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_600a2a61652bc473] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getCovBasis_11b109bd155ca898] = env->getMethodID(cls, "getCovBasis", "()Ljava/lang/String;");
                  mids$[mid_getCovBasisID_11b109bd155ca898] = env->getMethodID(cls, "getCovBasisID", "()Ljava/lang/String;");
                  mids$[mid_getCovConfidence_dff5885c2c873297] = env->getMethodID(cls, "getCovConfidence", "()D");
                  mids$[mid_getCovFrameEpoch_85703d13e302437e] = env->getMethodID(cls, "getCovFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getCovID_11b109bd155ca898] = env->getMethodID(cls, "getCovID", "()Ljava/lang/String;");
                  mids$[mid_getCovNextID_11b109bd155ca898] = env->getMethodID(cls, "getCovNextID", "()Ljava/lang/String;");
                  mids$[mid_getCovOrdering_99f30435104fb7a1] = env->getMethodID(cls, "getCovOrdering", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");
                  mids$[mid_getCovPrevID_11b109bd155ca898] = env->getMethodID(cls, "getCovPrevID", "()Ljava/lang/String;");
                  mids$[mid_getCovReferenceFrame_5d5dd95b04037824] = env->getMethodID(cls, "getCovReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getCovScaleMax_dff5885c2c873297] = env->getMethodID(cls, "getCovScaleMax", "()D");
                  mids$[mid_getCovScaleMin_dff5885c2c873297] = env->getMethodID(cls, "getCovScaleMin", "()D");
                  mids$[mid_getCovType_f6a584069fbe1b12] = env->getMethodID(cls, "getCovType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_getCovUnits_2afa36052df4765d] = env->getMethodID(cls, "getCovUnits", "()Ljava/util/List;");
                  mids$[mid_setCovBasis_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCovBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setCovBasisID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCovBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovConfidence_17db3a65980d3441] = env->getMethodID(cls, "setCovConfidence", "(D)V");
                  mids$[mid_setCovFrameEpoch_600a2a61652bc473] = env->getMethodID(cls, "setCovFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setCovID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCovID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovNextID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCovNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovOrdering_3f694760f2dd1e10] = env->getMethodID(cls, "setCovOrdering", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;)V");
                  mids$[mid_setCovPrevID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCovPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovReferenceFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setCovReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setCovScaleMax_17db3a65980d3441] = env->getMethodID(cls, "setCovScaleMax", "(D)V");
                  mids$[mid_setCovScaleMin_17db3a65980d3441] = env->getMethodID(cls, "setCovScaleMin", "(D)V");
                  mids$[mid_setCovType_fa6b10c2faa6bff6] = env->getMethodID(cls, "setCovType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;)V");
                  mids$[mid_setCovUnits_de3e021e7266b71e] = env->getMethodID(cls, "setCovUnits", "(Ljava/util/List;)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovarianceHistoryMetadata::OrbitCovarianceHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_600a2a61652bc473, a0.this$)) {}

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasis_11b109bd155ca898]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasisID_11b109bd155ca898]));
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovConfidence() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovConfidence_dff5885c2c873297]);
              }

              ::org::orekit::time::AbsoluteDate OrbitCovarianceHistoryMetadata::getCovFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCovFrameEpoch_85703d13e302437e]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovID_11b109bd155ca898]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovNextID_11b109bd155ca898]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering OrbitCovarianceHistoryMetadata::getCovOrdering() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering(env->callObjectMethod(this$, mids$[mid_getCovOrdering_99f30435104fb7a1]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovPrevID_11b109bd155ca898]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade OrbitCovarianceHistoryMetadata::getCovReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCovReferenceFrame_5d5dd95b04037824]));
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovScaleMax() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovScaleMax_dff5885c2c873297]);
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovScaleMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovScaleMin_dff5885c2c873297]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType OrbitCovarianceHistoryMetadata::getCovType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getCovType_f6a584069fbe1b12]));
              }

              ::java::util::List OrbitCovarianceHistoryMetadata::getCovUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovUnits_2afa36052df4765d]));
              }

              void OrbitCovarianceHistoryMetadata::setCovBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasis_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasisID_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovConfidence(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovConfidence_17db3a65980d3441], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovFrameEpoch_600a2a61652bc473], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovID_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovNextID_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovOrdering(const ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovOrdering_3f694760f2dd1e10], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovPrevID_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovReferenceFrame_849bc9e3b38b9bcb], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovScaleMax(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovScaleMax_17db3a65980d3441], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovScaleMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovScaleMin_17db3a65980d3441], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovType(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovType_fa6b10c2faa6bff6], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovUnits_de3e021e7266b71e], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitCovarianceHistoryMetadata_init_(t_OrbitCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasis(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasisID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovConfidence(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovNextID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovOrdering(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovPrevID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMax(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMin(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovType(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovUnits(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_validate(t_OrbitCovarianceHistoryMetadata *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasis(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasisID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covConfidence(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covNextID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covOrdering(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covPrevID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covType(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covUnits(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitCovarianceHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covBasis),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covBasisID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covConfidence),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covFrameEpoch),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covNextID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covOrdering),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covPrevID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covReferenceFrame),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covScaleMax),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covScaleMin),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covType),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covUnits),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovBasis, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovBasisID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovConfidence, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovFrameEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovNextID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovOrdering, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovPrevID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovScaleMax, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovScaleMin, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovUnits, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovBasis, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovBasisID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovConfidence, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovFrameEpoch, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovNextID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovOrdering, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovPrevID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovReferenceFrame, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovScaleMax, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovScaleMin, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovType, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovUnits, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistoryMetadata)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_OrbitCovarianceHistoryMetadata_init_ },
                { Py_tp_getset, t_OrbitCovarianceHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistoryMetadata, t_OrbitCovarianceHistoryMetadata, OrbitCovarianceHistoryMetadata);

              void t_OrbitCovarianceHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistoryMetadata), &PY_TYPE_DEF(OrbitCovarianceHistoryMetadata), module, "OrbitCovarianceHistoryMetadata", 0);
              }

              void t_OrbitCovarianceHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "class_", make_descriptor(OrbitCovarianceHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "wrapfn_", make_descriptor(t_OrbitCovarianceHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistoryMetadata::wrap_Object(OrbitCovarianceHistoryMetadata(((t_OrbitCovarianceHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitCovarianceHistoryMetadata_init_(t_OrbitCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitCovarianceHistoryMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitCovarianceHistoryMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasis(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasis());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasisID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasisID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovConfidence(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovConfidence());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovNextID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovNextID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovOrdering(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovOrdering());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovPrevID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovPrevID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMax(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovScaleMax());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMin(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovScaleMin());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovType(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovUnits(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasis", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasisID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovConfidence(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovConfidence", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovFrameEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovFrameEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovNextID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovNextID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::parameters_))
                {
                  OBJ_CALL(self->object.setCovOrdering(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovOrdering", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovPrevID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovScaleMax(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovScaleMax", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovScaleMin(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovScaleMin", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setCovType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovType", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setCovUnits(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovUnits", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_validate(t_OrbitCovarianceHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OrbitCovarianceHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasis(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasis());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasis", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasisID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasisID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasisID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covConfidence(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovConfidence());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovConfidence(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covConfidence", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovFrameEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covFrameEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covNextID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovNextID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovNextID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covNextID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covOrdering(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovOrdering());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovOrdering(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covOrdering", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covPrevID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovPrevID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covPrevID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovScaleMax());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovScaleMax(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covScaleMax", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovScaleMin());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovScaleMin(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covScaleMin", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covType(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covType", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covUnits(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovUnits());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovUnits(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covUnits", arg);
                return -1;
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
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *OneWayGNSSRange::class$ = NULL;
          jmethodID *OneWayGNSSRange::mids$ = NULL;
          bool OneWayGNSSRange::live$ = false;
          ::java::lang::String *OneWayGNSSRange::MEASUREMENT_TYPE = NULL;

          jclass OneWayGNSSRange::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/OneWayGNSSRange");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4975124a74fd1245] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OneWayGNSSRange::OneWayGNSSRange(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_4975124a74fd1245, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}
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
          static PyObject *t_OneWayGNSSRange_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRange_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRange_of_(t_OneWayGNSSRange *self, PyObject *args);
          static int t_OneWayGNSSRange_init_(t_OneWayGNSSRange *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSRange_get__parameters_(t_OneWayGNSSRange *self, void *data);
          static PyGetSetDef t_OneWayGNSSRange__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSRange, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSRange__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSRange, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRange, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRange, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSRange)[] = {
            { Py_tp_methods, t_OneWayGNSSRange__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSRange_init_ },
            { Py_tp_getset, t_OneWayGNSSRange__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSRange)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSRange, t_OneWayGNSSRange, OneWayGNSSRange);
          PyObject *t_OneWayGNSSRange::wrap_Object(const OneWayGNSSRange& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRange::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRange *self = (t_OneWayGNSSRange *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRange::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRange *self = (t_OneWayGNSSRange *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSRange::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSRange), &PY_TYPE_DEF(OneWayGNSSRange), module, "OneWayGNSSRange", 0);
          }

          void t_OneWayGNSSRange::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "class_", make_descriptor(OneWayGNSSRange::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "wrapfn_", make_descriptor(t_OneWayGNSSRange::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "boxfn_", make_descriptor(boxObject));
            env->getClass(OneWayGNSSRange::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*OneWayGNSSRange::MEASUREMENT_TYPE)));
          }

          static PyObject *t_OneWayGNSSRange_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSRange::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSRange::wrap_Object(OneWayGNSSRange(((t_OneWayGNSSRange *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSRange_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSRange::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSRange_of_(t_OneWayGNSSRange *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OneWayGNSSRange_init_(t_OneWayGNSSRange *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            OneWayGNSSRange object((jobject) NULL);

            if (!parseArgs(args, "kDkDDDk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = OneWayGNSSRange(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(OneWayGNSSRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_OneWayGNSSRange_get__parameters_(t_OneWayGNSSRange *self, void *data)
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
#include "org/hipparchus/fraction/AbstractFormat.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *AbstractFormat::class$ = NULL;
      jmethodID *AbstractFormat::mids$ = NULL;
      bool AbstractFormat::live$ = false;

      jclass AbstractFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/AbstractFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_71cdbf949acd3c79] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_1ad97cb6c82be27f] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getDenominatorFormat_24f83dea4a8657b1] = env->getMethodID(cls, "getDenominatorFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getNumeratorFormat_24f83dea4a8657b1] = env->getMethodID(cls, "getNumeratorFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getDefaultNumberFormat_09db48c8af63ef24] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
          mids$[mid_getDefaultNumberFormat_24f83dea4a8657b1] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parseAndIgnoreWhitespace_e097ee22c3f6fd45] = env->getStaticMethodID(cls, "parseAndIgnoreWhitespace", "(Ljava/lang/String;Ljava/text/ParsePosition;)V");
          mids$[mid_parseNextCharacter_3867dd0052a198da] = env->getStaticMethodID(cls, "parseNextCharacter", "(Ljava/lang/String;Ljava/text/ParsePosition;)C");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::StringBuffer AbstractFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_71cdbf949acd3c79], a0, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer AbstractFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_1ad97cb6c82be27f], a0, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat AbstractFormat::getDenominatorFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getDenominatorFormat_24f83dea4a8657b1]));
      }

      ::java::text::NumberFormat AbstractFormat::getNumeratorFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getNumeratorFormat_24f83dea4a8657b1]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_AbstractFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFormat_format(t_AbstractFormat *self, PyObject *args);
      static PyObject *t_AbstractFormat_getDenominatorFormat(t_AbstractFormat *self);
      static PyObject *t_AbstractFormat_getNumeratorFormat(t_AbstractFormat *self);
      static PyObject *t_AbstractFormat_get__denominatorFormat(t_AbstractFormat *self, void *data);
      static PyObject *t_AbstractFormat_get__numeratorFormat(t_AbstractFormat *self, void *data);
      static PyGetSetDef t_AbstractFormat__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFormat, denominatorFormat),
        DECLARE_GET_FIELD(t_AbstractFormat, numeratorFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFormat__methods_[] = {
        DECLARE_METHOD(t_AbstractFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFormat, getDenominatorFormat, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFormat, getNumeratorFormat, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFormat)[] = {
        { Py_tp_methods, t_AbstractFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFormat)[] = {
        &PY_TYPE_DEF(::java::text::NumberFormat),
        NULL
      };

      DEFINE_TYPE(AbstractFormat, t_AbstractFormat, AbstractFormat);

      void t_AbstractFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFormat), &PY_TYPE_DEF(AbstractFormat), module, "AbstractFormat", 0);
      }

      void t_AbstractFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "class_", make_descriptor(AbstractFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "wrapfn_", make_descriptor(t_AbstractFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFormat::initializeClass, 1)))
          return NULL;
        return t_AbstractFormat::wrap_Object(AbstractFormat(((t_AbstractFormat *) arg)->object.this$));
      }
      static PyObject *t_AbstractFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFormat_format(t_AbstractFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Dkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
          {
            jlong a0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Jkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(AbstractFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_AbstractFormat_getDenominatorFormat(t_AbstractFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getDenominatorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_AbstractFormat_getNumeratorFormat(t_AbstractFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getNumeratorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_AbstractFormat_get__denominatorFormat(t_AbstractFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getDenominatorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }

      static PyObject *t_AbstractFormat_get__numeratorFormat(t_AbstractFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getNumeratorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
