#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/RandomDataGenerator.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "org/hipparchus/random/RandomDataGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomDataGenerator::class$ = NULL;
      jmethodID *RandomDataGenerator::mids$ = NULL;
      bool RandomDataGenerator::live$ = false;

      jclass RandomDataGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomDataGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextBeta_824133ce4aec3505] = env->getMethodID(cls, "nextBeta", "(DD)D");
          mids$[mid_nextDeviate_afbd426079cae25d] = env->getMethodID(cls, "nextDeviate", "(Lorg/hipparchus/distribution/IntegerDistribution;)I");
          mids$[mid_nextDeviate_3487d38469c40eef] = env->getMethodID(cls, "nextDeviate", "(Lorg/hipparchus/distribution/RealDistribution;)D");
          mids$[mid_nextDeviates_d85d974124d06712] = env->getMethodID(cls, "nextDeviates", "(Lorg/hipparchus/distribution/IntegerDistribution;I)[I");
          mids$[mid_nextDeviates_68de39df7386884d] = env->getMethodID(cls, "nextDeviates", "(Lorg/hipparchus/distribution/RealDistribution;I)[D");
          mids$[mid_nextExponential_0ba5fed9597b693e] = env->getMethodID(cls, "nextExponential", "(D)D");
          mids$[mid_nextGamma_824133ce4aec3505] = env->getMethodID(cls, "nextGamma", "(DD)D");
          mids$[mid_nextHexString_90cbcc0b7a5ddae9] = env->getMethodID(cls, "nextHexString", "(I)Ljava/lang/String;");
          mids$[mid_nextInt_d9790ac9eecfe931] = env->getMethodID(cls, "nextInt", "(II)I");
          mids$[mid_nextLogNormal_824133ce4aec3505] = env->getMethodID(cls, "nextLogNormal", "(DD)D");
          mids$[mid_nextLong_8f974216cbe53aea] = env->getMethodID(cls, "nextLong", "(JJ)J");
          mids$[mid_nextNormal_824133ce4aec3505] = env->getMethodID(cls, "nextNormal", "(DD)D");
          mids$[mid_nextPermutation_686233a2ff23e62d] = env->getMethodID(cls, "nextPermutation", "(II)[I");
          mids$[mid_nextPoisson_12ebab281ee35c98] = env->getMethodID(cls, "nextPoisson", "(D)I");
          mids$[mid_nextSample_fd1288d34222cfa8] = env->getMethodID(cls, "nextSample", "([DI)[D");
          mids$[mid_nextSample_434ba4f195d5bc3c] = env->getMethodID(cls, "nextSample", "(Ljava/util/Collection;I)[Ljava/lang/Object;");
          mids$[mid_nextSampleWithReplacement_d16d332e214cc670] = env->getMethodID(cls, "nextSampleWithReplacement", "(I[D)[I");
          mids$[mid_nextUniform_824133ce4aec3505] = env->getMethodID(cls, "nextUniform", "(DD)D");
          mids$[mid_nextZipf_5051ffc90ba47361] = env->getMethodID(cls, "nextZipf", "(ID)I");
          mids$[mid_of_ad4c3467956fdea8] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/random/RandomGenerator;)Lorg/hipparchus/random/RandomDataGenerator;");
          mids$[mid_delegate_6c5b70fd21e949cf] = env->getMethodID(cls, "delegate", "()Lorg/hipparchus/random/RandomGenerator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RandomDataGenerator::RandomDataGenerator() : ::org::hipparchus::random::ForwardingRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      RandomDataGenerator::RandomDataGenerator(jlong a0) : ::org::hipparchus::random::ForwardingRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

      jdouble RandomDataGenerator::nextBeta(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextBeta_824133ce4aec3505], a0, a1);
      }

      jint RandomDataGenerator::nextDeviate(const ::org::hipparchus::distribution::IntegerDistribution & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextDeviate_afbd426079cae25d], a0.this$);
      }

      jdouble RandomDataGenerator::nextDeviate(const ::org::hipparchus::distribution::RealDistribution & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDeviate_3487d38469c40eef], a0.this$);
      }

      JArray< jint > RandomDataGenerator::nextDeviates(const ::org::hipparchus::distribution::IntegerDistribution & a0, jint a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextDeviates_d85d974124d06712], a0.this$, a1));
      }

      JArray< jdouble > RandomDataGenerator::nextDeviates(const ::org::hipparchus::distribution::RealDistribution & a0, jint a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextDeviates_68de39df7386884d], a0.this$, a1));
      }

      jdouble RandomDataGenerator::nextExponential(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextExponential_0ba5fed9597b693e], a0);
      }

      jdouble RandomDataGenerator::nextGamma(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGamma_824133ce4aec3505], a0, a1);
      }

      ::java::lang::String RandomDataGenerator::nextHexString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_nextHexString_90cbcc0b7a5ddae9], a0));
      }

      jint RandomDataGenerator::nextInt(jint a0, jint a1) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d9790ac9eecfe931], a0, a1);
      }

      jdouble RandomDataGenerator::nextLogNormal(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextLogNormal_824133ce4aec3505], a0, a1);
      }

      jlong RandomDataGenerator::nextLong(jlong a0, jlong a1) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_8f974216cbe53aea], a0, a1);
      }

      jdouble RandomDataGenerator::nextNormal(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormal_824133ce4aec3505], a0, a1);
      }

      JArray< jint > RandomDataGenerator::nextPermutation(jint a0, jint a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextPermutation_686233a2ff23e62d], a0, a1));
      }

      jint RandomDataGenerator::nextPoisson(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextPoisson_12ebab281ee35c98], a0);
      }

      JArray< jdouble > RandomDataGenerator::nextSample(const JArray< jdouble > & a0, jint a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextSample_fd1288d34222cfa8], a0.this$, a1));
      }

      JArray< ::java::lang::Object > RandomDataGenerator::nextSample(const ::java::util::Collection & a0, jint a1) const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_nextSample_434ba4f195d5bc3c], a0.this$, a1));
      }

      JArray< jint > RandomDataGenerator::nextSampleWithReplacement(jint a0, const JArray< jdouble > & a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextSampleWithReplacement_d16d332e214cc670], a0, a1.this$));
      }

      jdouble RandomDataGenerator::nextUniform(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextUniform_824133ce4aec3505], a0, a1);
      }

      jint RandomDataGenerator::nextZipf(jint a0, jdouble a1) const
      {
        return env->callIntMethod(this$, mids$[mid_nextZipf_5051ffc90ba47361], a0, a1);
      }

      RandomDataGenerator RandomDataGenerator::of(const ::org::hipparchus::random::RandomGenerator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RandomDataGenerator(env->callStaticObjectMethod(cls, mids$[mid_of_ad4c3467956fdea8], a0.this$));
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
      static PyObject *t_RandomDataGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomDataGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RandomDataGenerator_init_(t_RandomDataGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RandomDataGenerator_nextBeta(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextDeviate(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextDeviates(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextExponential(t_RandomDataGenerator *self, PyObject *arg);
      static PyObject *t_RandomDataGenerator_nextGamma(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextHexString(t_RandomDataGenerator *self, PyObject *arg);
      static PyObject *t_RandomDataGenerator_nextInt(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextLogNormal(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextLong(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextNormal(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextPermutation(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextPoisson(t_RandomDataGenerator *self, PyObject *arg);
      static PyObject *t_RandomDataGenerator_nextSample(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextSampleWithReplacement(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextUniform(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextZipf(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_of(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_RandomDataGenerator__methods_[] = {
        DECLARE_METHOD(t_RandomDataGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomDataGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomDataGenerator, nextBeta, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextDeviate, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextDeviates, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextExponential, METH_O),
        DECLARE_METHOD(t_RandomDataGenerator, nextGamma, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextHexString, METH_O),
        DECLARE_METHOD(t_RandomDataGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextLogNormal, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextNormal, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextPermutation, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextPoisson, METH_O),
        DECLARE_METHOD(t_RandomDataGenerator, nextSample, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextSampleWithReplacement, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextUniform, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextZipf, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, of, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomDataGenerator)[] = {
        { Py_tp_methods, t_RandomDataGenerator__methods_ },
        { Py_tp_init, (void *) t_RandomDataGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomDataGenerator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::ForwardingRandomGenerator),
        NULL
      };

      DEFINE_TYPE(RandomDataGenerator, t_RandomDataGenerator, RandomDataGenerator);

      void t_RandomDataGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomDataGenerator), &PY_TYPE_DEF(RandomDataGenerator), module, "RandomDataGenerator", 0);
      }

      void t_RandomDataGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomDataGenerator), "class_", make_descriptor(RandomDataGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomDataGenerator), "wrapfn_", make_descriptor(t_RandomDataGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomDataGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomDataGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomDataGenerator::initializeClass, 1)))
          return NULL;
        return t_RandomDataGenerator::wrap_Object(RandomDataGenerator(((t_RandomDataGenerator *) arg)->object.this$));
      }
      static PyObject *t_RandomDataGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomDataGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RandomDataGenerator_init_(t_RandomDataGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RandomDataGenerator object((jobject) NULL);

            INT_CALL(object = RandomDataGenerator());
            self->object = object;
            break;
          }
         case 1:
          {
            jlong a0;
            RandomDataGenerator object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = RandomDataGenerator(a0));
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

      static PyObject *t_RandomDataGenerator_nextBeta(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextBeta(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextBeta", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextDeviate(t_RandomDataGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::distribution::IntegerDistribution a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::hipparchus::distribution::IntegerDistribution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.nextDeviate(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.nextDeviate(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextDeviate", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextDeviates(t_RandomDataGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::distribution::IntegerDistribution a0((jobject) NULL);
            jint a1;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::distribution::IntegerDistribution::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.nextDeviates(a0, a1));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
            jint a1;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.nextDeviates(a0, a1));
              return result.wrap();
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextDeviates", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextExponential(t_RandomDataGenerator *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.nextExponential(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextExponential", arg);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextGamma(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextGamma(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextGamma", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextHexString(t_RandomDataGenerator *self, PyObject *arg)
      {
        jint a0;
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nextHexString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextHexString", arg);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextInt(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextInt(a0, a1));
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(RandomDataGenerator), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_RandomDataGenerator_nextLogNormal(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextLogNormal(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextLogNormal", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextLong(t_RandomDataGenerator *self, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jlong result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextLong(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(RandomDataGenerator), (PyObject *) self, "nextLong", args, 2);
      }

      static PyObject *t_RandomDataGenerator_nextNormal(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextNormal(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextNormal", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextPermutation(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        jint a1;
        JArray< jint > result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextPermutation(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "nextPermutation", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextPoisson(t_RandomDataGenerator *self, PyObject *arg)
      {
        jdouble a0;
        jint result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.nextPoisson(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextPoisson", arg);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextSample(t_RandomDataGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[DI", &a0, &a1))
            {
              OBJ_CALL(result = self->object.nextSample(a0, a1));
              return result.wrap();
            }
          }
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            JArray< ::java::lang::Object > result((jobject) NULL);

            if (!parseArgs(args, "KI", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.nextSample(a0, a1));
              return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextSample", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextSampleWithReplacement(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jint > result((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextSampleWithReplacement(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "nextSampleWithReplacement", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextUniform(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextUniform(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextUniform", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextZipf(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jint result;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextZipf(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextZipf", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_of(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        RandomDataGenerator result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::random::RandomDataGenerator::of(a0));
          return t_RandomDataGenerator::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "of", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/Constants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *Constants::class$ = NULL;
      jmethodID *Constants::mids$ = NULL;
      bool Constants::live$ = false;
      jdouble Constants::ARC_SECONDS_TO_RADIANS = (jdouble) 0;
      jdouble Constants::BESSELIAN_YEAR = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C20 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C30 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C40 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C50 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C60 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_MU = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C20 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C30 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C40 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C50 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C60 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_MU = (jdouble) 0;
      jdouble Constants::G0_STANDARD_GRAVITY = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C20 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C30 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C40 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C50 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C60 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_MU = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_C20 = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_MU = (jdouble) 0;
      jdouble Constants::IAU_2012_ASTRONOMICAL_UNIT = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_GM = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_POLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_GM = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_SOLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_SUN_GM = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_MU = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_MU = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_MU = (jdouble) 0;
      jdouble Constants::JPL_SSD_ASTRONOMICAL_UNIT = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_MOON_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_PLUS_MOON_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT = (jdouble) 0;
      jdouble Constants::JPL_SSD_JUPITER_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MARS_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MERCURY_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MOON_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_NEPTUNE_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_PLUTO_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SATURN_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_MERCURY_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_VENUS_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_URANUS_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_VENUS_GM = (jdouble) 0;
      jdouble Constants::JULIAN_CENTURY = (jdouble) 0;
      jdouble Constants::JULIAN_DAY = (jdouble) 0;
      jdouble Constants::JULIAN_YEAR = (jdouble) 0;
      jdouble Constants::MOON_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::SPEED_OF_LIGHT = (jdouble) 0;
      jdouble Constants::SUN_RADIUS = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_C20 = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_MU = (jdouble) 0;

      jclass Constants::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/Constants");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARC_SECONDS_TO_RADIANS = env->getStaticDoubleField(cls, "ARC_SECONDS_TO_RADIANS");
          BESSELIAN_YEAR = env->getStaticDoubleField(cls, "BESSELIAN_YEAR");
          EGM96_EARTH_C20 = env->getStaticDoubleField(cls, "EGM96_EARTH_C20");
          EGM96_EARTH_C30 = env->getStaticDoubleField(cls, "EGM96_EARTH_C30");
          EGM96_EARTH_C40 = env->getStaticDoubleField(cls, "EGM96_EARTH_C40");
          EGM96_EARTH_C50 = env->getStaticDoubleField(cls, "EGM96_EARTH_C50");
          EGM96_EARTH_C60 = env->getStaticDoubleField(cls, "EGM96_EARTH_C60");
          EGM96_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "EGM96_EARTH_EQUATORIAL_RADIUS");
          EGM96_EARTH_MU = env->getStaticDoubleField(cls, "EGM96_EARTH_MU");
          EIGEN5C_EARTH_C20 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C20");
          EIGEN5C_EARTH_C30 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C30");
          EIGEN5C_EARTH_C40 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C40");
          EIGEN5C_EARTH_C50 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C50");
          EIGEN5C_EARTH_C60 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C60");
          EIGEN5C_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_EQUATORIAL_RADIUS");
          EIGEN5C_EARTH_MU = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_MU");
          G0_STANDARD_GRAVITY = env->getStaticDoubleField(cls, "G0_STANDARD_GRAVITY");
          GRIM5C1_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_ANGULAR_VELOCITY");
          GRIM5C1_EARTH_C20 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C20");
          GRIM5C1_EARTH_C30 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C30");
          GRIM5C1_EARTH_C40 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C40");
          GRIM5C1_EARTH_C50 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C50");
          GRIM5C1_EARTH_C60 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C60");
          GRIM5C1_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_EQUATORIAL_RADIUS");
          GRIM5C1_EARTH_FLATTENING = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_FLATTENING");
          GRIM5C1_EARTH_MU = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_MU");
          GRS80_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "GRS80_EARTH_ANGULAR_VELOCITY");
          GRS80_EARTH_C20 = env->getStaticDoubleField(cls, "GRS80_EARTH_C20");
          GRS80_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "GRS80_EARTH_EQUATORIAL_RADIUS");
          GRS80_EARTH_FLATTENING = env->getStaticDoubleField(cls, "GRS80_EARTH_FLATTENING");
          GRS80_EARTH_MU = env->getStaticDoubleField(cls, "GRS80_EARTH_MU");
          IAU_2012_ASTRONOMICAL_UNIT = env->getStaticDoubleField(cls, "IAU_2012_ASTRONOMICAL_UNIT");
          IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS");
          IAU_2015_NOMINAL_EARTH_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_GM");
          IAU_2015_NOMINAL_EARTH_POLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_POLAR_RADIUS");
          IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS");
          IAU_2015_NOMINAL_JUPITER_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_GM");
          IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS");
          IAU_2015_NOMINAL_SOLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_SOLAR_RADIUS");
          IAU_2015_NOMINAL_SUN_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_SUN_GM");
          IERS2003_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS2003_EARTH_ANGULAR_VELOCITY");
          IERS2003_EARTH_C20 = env->getStaticDoubleField(cls, "IERS2003_EARTH_C20");
          IERS2003_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS2003_EARTH_EQUATORIAL_RADIUS");
          IERS2003_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS2003_EARTH_FLATTENING");
          IERS2003_EARTH_MU = env->getStaticDoubleField(cls, "IERS2003_EARTH_MU");
          IERS2010_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS2010_EARTH_ANGULAR_VELOCITY");
          IERS2010_EARTH_C20 = env->getStaticDoubleField(cls, "IERS2010_EARTH_C20");
          IERS2010_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS2010_EARTH_EQUATORIAL_RADIUS");
          IERS2010_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS2010_EARTH_FLATTENING");
          IERS2010_EARTH_MU = env->getStaticDoubleField(cls, "IERS2010_EARTH_MU");
          IERS96_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS96_EARTH_ANGULAR_VELOCITY");
          IERS96_EARTH_C20 = env->getStaticDoubleField(cls, "IERS96_EARTH_C20");
          IERS96_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS96_EARTH_EQUATORIAL_RADIUS");
          IERS96_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS96_EARTH_FLATTENING");
          IERS96_EARTH_MU = env->getStaticDoubleField(cls, "IERS96_EARTH_MU");
          JPL_SSD_ASTRONOMICAL_UNIT = env->getStaticDoubleField(cls, "JPL_SSD_ASTRONOMICAL_UNIT");
          JPL_SSD_EARTH_GM = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_GM");
          JPL_SSD_EARTH_MOON_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_MOON_MASS_RATIO");
          JPL_SSD_EARTH_PLUS_MOON_GM = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_PLUS_MOON_GM");
          JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT = env->getStaticDoubleField(cls, "JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT");
          JPL_SSD_JUPITER_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_JUPITER_SYSTEM_GM");
          JPL_SSD_MARS_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_MARS_SYSTEM_GM");
          JPL_SSD_MERCURY_GM = env->getStaticDoubleField(cls, "JPL_SSD_MERCURY_GM");
          JPL_SSD_MOON_GM = env->getStaticDoubleField(cls, "JPL_SSD_MOON_GM");
          JPL_SSD_NEPTUNE_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_NEPTUNE_SYSTEM_GM");
          JPL_SSD_PLUTO_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_PLUTO_SYSTEM_GM");
          JPL_SSD_SATURN_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_SATURN_SYSTEM_GM");
          JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO");
          JPL_SSD_SUN_GM = env->getStaticDoubleField(cls, "JPL_SSD_SUN_GM");
          JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_MERCURY_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_MERCURY_MASS_RATIO");
          JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_VENUS_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_VENUS_MASS_RATIO");
          JPL_SSD_URANUS_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_URANUS_SYSTEM_GM");
          JPL_SSD_VENUS_GM = env->getStaticDoubleField(cls, "JPL_SSD_VENUS_GM");
          JULIAN_CENTURY = env->getStaticDoubleField(cls, "JULIAN_CENTURY");
          JULIAN_DAY = env->getStaticDoubleField(cls, "JULIAN_DAY");
          JULIAN_YEAR = env->getStaticDoubleField(cls, "JULIAN_YEAR");
          MOON_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "MOON_EQUATORIAL_RADIUS");
          SPEED_OF_LIGHT = env->getStaticDoubleField(cls, "SPEED_OF_LIGHT");
          SUN_RADIUS = env->getStaticDoubleField(cls, "SUN_RADIUS");
          WGS84_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "WGS84_EARTH_ANGULAR_VELOCITY");
          WGS84_EARTH_C20 = env->getStaticDoubleField(cls, "WGS84_EARTH_C20");
          WGS84_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "WGS84_EARTH_EQUATORIAL_RADIUS");
          WGS84_EARTH_FLATTENING = env->getStaticDoubleField(cls, "WGS84_EARTH_FLATTENING");
          WGS84_EARTH_MU = env->getStaticDoubleField(cls, "WGS84_EARTH_MU");
          live$ = true;
        }
        return (jclass) class$->this$;
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
      static PyObject *t_Constants_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Constants_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_Constants__methods_[] = {
        DECLARE_METHOD(t_Constants, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Constants, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Constants)[] = {
        { Py_tp_methods, t_Constants__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Constants)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Constants, t_Constants, Constants);

      void t_Constants::install(PyObject *module)
      {
        installType(&PY_TYPE(Constants), &PY_TYPE_DEF(Constants), module, "Constants", 0);
      }

      void t_Constants::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "class_", make_descriptor(Constants::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "wrapfn_", make_descriptor(t_Constants::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "boxfn_", make_descriptor(boxObject));
        env->getClass(Constants::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "ARC_SECONDS_TO_RADIANS", make_descriptor(Constants::ARC_SECONDS_TO_RADIANS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "BESSELIAN_YEAR", make_descriptor(Constants::BESSELIAN_YEAR));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C20", make_descriptor(Constants::EGM96_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C30", make_descriptor(Constants::EGM96_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C40", make_descriptor(Constants::EGM96_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C50", make_descriptor(Constants::EGM96_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C60", make_descriptor(Constants::EGM96_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::EGM96_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_MU", make_descriptor(Constants::EGM96_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C20", make_descriptor(Constants::EIGEN5C_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C30", make_descriptor(Constants::EIGEN5C_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C40", make_descriptor(Constants::EIGEN5C_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C50", make_descriptor(Constants::EIGEN5C_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C60", make_descriptor(Constants::EIGEN5C_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::EIGEN5C_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_MU", make_descriptor(Constants::EIGEN5C_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "G0_STANDARD_GRAVITY", make_descriptor(Constants::G0_STANDARD_GRAVITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::GRIM5C1_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C20", make_descriptor(Constants::GRIM5C1_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C30", make_descriptor(Constants::GRIM5C1_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C40", make_descriptor(Constants::GRIM5C1_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C50", make_descriptor(Constants::GRIM5C1_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C60", make_descriptor(Constants::GRIM5C1_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::GRIM5C1_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_FLATTENING", make_descriptor(Constants::GRIM5C1_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_MU", make_descriptor(Constants::GRIM5C1_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::GRS80_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_C20", make_descriptor(Constants::GRS80_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::GRS80_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_FLATTENING", make_descriptor(Constants::GRS80_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_MU", make_descriptor(Constants::GRS80_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2012_ASTRONOMICAL_UNIT", make_descriptor(Constants::IAU_2012_ASTRONOMICAL_UNIT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_GM", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_POLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_POLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_GM", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_SOLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_SOLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_SUN_GM", make_descriptor(Constants::IAU_2015_NOMINAL_SUN_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS2003_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_C20", make_descriptor(Constants::IERS2003_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS2003_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_FLATTENING", make_descriptor(Constants::IERS2003_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_MU", make_descriptor(Constants::IERS2003_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS2010_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_C20", make_descriptor(Constants::IERS2010_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS2010_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_FLATTENING", make_descriptor(Constants::IERS2010_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_MU", make_descriptor(Constants::IERS2010_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS96_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_C20", make_descriptor(Constants::IERS96_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS96_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_FLATTENING", make_descriptor(Constants::IERS96_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_MU", make_descriptor(Constants::IERS96_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_ASTRONOMICAL_UNIT", make_descriptor(Constants::JPL_SSD_ASTRONOMICAL_UNIT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_GM", make_descriptor(Constants::JPL_SSD_EARTH_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_MOON_MASS_RATIO", make_descriptor(Constants::JPL_SSD_EARTH_MOON_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_PLUS_MOON_GM", make_descriptor(Constants::JPL_SSD_EARTH_PLUS_MOON_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT", make_descriptor(Constants::JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_JUPITER_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_JUPITER_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MARS_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_MARS_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MERCURY_GM", make_descriptor(Constants::JPL_SSD_MERCURY_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MOON_GM", make_descriptor(Constants::JPL_SSD_MOON_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_NEPTUNE_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_NEPTUNE_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_PLUTO_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_PLUTO_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SATURN_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_SATURN_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_GM", make_descriptor(Constants::JPL_SSD_SUN_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_MERCURY_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_MERCURY_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_VENUS_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_VENUS_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_URANUS_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_URANUS_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_VENUS_GM", make_descriptor(Constants::JPL_SSD_VENUS_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_CENTURY", make_descriptor(Constants::JULIAN_CENTURY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_DAY", make_descriptor(Constants::JULIAN_DAY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_YEAR", make_descriptor(Constants::JULIAN_YEAR));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "MOON_EQUATORIAL_RADIUS", make_descriptor(Constants::MOON_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "SPEED_OF_LIGHT", make_descriptor(Constants::SPEED_OF_LIGHT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "SUN_RADIUS", make_descriptor(Constants::SUN_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::WGS84_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_C20", make_descriptor(Constants::WGS84_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::WGS84_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_FLATTENING", make_descriptor(Constants::WGS84_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_MU", make_descriptor(Constants::WGS84_EARTH_MU));
      }

      static PyObject *t_Constants_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Constants::initializeClass, 1)))
          return NULL;
        return t_Constants::wrap_Object(Constants(((t_Constants *) arg)->object.this$));
      }
      static PyObject *t_Constants_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Constants::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/SearchInterval.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *SearchInterval::class$ = NULL;
        jmethodID *SearchInterval::mids$ = NULL;
        bool SearchInterval::live$ = false;

        jclass SearchInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/SearchInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getStartValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getStartValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SearchInterval::SearchInterval(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        SearchInterval::SearchInterval(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        jdouble SearchInterval::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_456d9a2f64d6b28d]);
        }

        jdouble SearchInterval::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_456d9a2f64d6b28d]);
        }

        jdouble SearchInterval::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_456d9a2f64d6b28d]);
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
    namespace optim {
      namespace univariate {
        static PyObject *t_SearchInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SearchInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SearchInterval_init_(t_SearchInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SearchInterval_getMax(t_SearchInterval *self);
        static PyObject *t_SearchInterval_getMin(t_SearchInterval *self);
        static PyObject *t_SearchInterval_getStartValue(t_SearchInterval *self);
        static PyObject *t_SearchInterval_get__max(t_SearchInterval *self, void *data);
        static PyObject *t_SearchInterval_get__min(t_SearchInterval *self, void *data);
        static PyObject *t_SearchInterval_get__startValue(t_SearchInterval *self, void *data);
        static PyGetSetDef t_SearchInterval__fields_[] = {
          DECLARE_GET_FIELD(t_SearchInterval, max),
          DECLARE_GET_FIELD(t_SearchInterval, min),
          DECLARE_GET_FIELD(t_SearchInterval, startValue),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SearchInterval__methods_[] = {
          DECLARE_METHOD(t_SearchInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SearchInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SearchInterval, getMax, METH_NOARGS),
          DECLARE_METHOD(t_SearchInterval, getMin, METH_NOARGS),
          DECLARE_METHOD(t_SearchInterval, getStartValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SearchInterval)[] = {
          { Py_tp_methods, t_SearchInterval__methods_ },
          { Py_tp_init, (void *) t_SearchInterval_init_ },
          { Py_tp_getset, t_SearchInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SearchInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SearchInterval, t_SearchInterval, SearchInterval);

        void t_SearchInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(SearchInterval), &PY_TYPE_DEF(SearchInterval), module, "SearchInterval", 0);
        }

        void t_SearchInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "class_", make_descriptor(SearchInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "wrapfn_", make_descriptor(t_SearchInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SearchInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SearchInterval::initializeClass, 1)))
            return NULL;
          return t_SearchInterval::wrap_Object(SearchInterval(((t_SearchInterval *) arg)->object.this$));
        }
        static PyObject *t_SearchInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SearchInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SearchInterval_init_(t_SearchInterval *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              SearchInterval object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SearchInterval(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              SearchInterval object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = SearchInterval(a0, a1, a2));
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

        static PyObject *t_SearchInterval_getMax(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_getMin(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_getStartValue(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_get__max(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SearchInterval_get__min(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SearchInterval_get__startValue(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1045::class$ = NULL;
              jmethodID *Rtcm1045::mids$ = NULL;
              bool Rtcm1045::live$ = false;

              jclass Rtcm1045::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_63d7ebd94899370e] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1045::Rtcm1045(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1045Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_63d7ebd94899370e, a0, a1.this$)) {}
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
            namespace ephemeris {
              static PyObject *t_Rtcm1045_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1045_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1045_of_(t_Rtcm1045 *self, PyObject *args);
              static int t_Rtcm1045_init_(t_Rtcm1045 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1045_get__parameters_(t_Rtcm1045 *self, void *data);
              static PyGetSetDef t_Rtcm1045__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1045, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1045__methods_[] = {
                DECLARE_METHOD(t_Rtcm1045, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1045)[] = {
                { Py_tp_methods, t_Rtcm1045__methods_ },
                { Py_tp_init, (void *) t_Rtcm1045_init_ },
                { Py_tp_getset, t_Rtcm1045__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1045)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1045, t_Rtcm1045, Rtcm1045);
              PyObject *t_Rtcm1045::wrap_Object(const Rtcm1045& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1045::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1045 *self = (t_Rtcm1045 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1045::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1045::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1045 *self = (t_Rtcm1045 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1045::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1045), &PY_TYPE_DEF(Rtcm1045), module, "Rtcm1045", 0);
              }

              void t_Rtcm1045::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045), "class_", make_descriptor(Rtcm1045::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045), "wrapfn_", make_descriptor(t_Rtcm1045::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1045_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1045::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1045::wrap_Object(Rtcm1045(((t_Rtcm1045 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1045_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1045::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1045_of_(t_Rtcm1045 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1045_init_(t_Rtcm1045 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1045Data a1((jobject) NULL);
                Rtcm1045 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1045Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1045(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1045Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1045_get__parameters_(t_Rtcm1045 *self, void *data)
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
#include "org/orekit/utils/TimeStampedFieldAngularCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldAngularCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldAngularCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldAngularCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldAngularCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_2d511f7455dd3ab4] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_0fefe87a84aeb22a] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_getFilter_c14c1c09874639c8] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_interpolate_a14f9d7f9be0a1ab] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::AngularDerivativesFilter & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2d511f7455dd3ab4, a0, a1.this$)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::AngularDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0fefe87a84aeb22a, a0, a1, a2.this$)) {}

      ::org::orekit::utils::AngularDerivativesFilter TimeStampedFieldAngularCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_c14c1c09874639c8]));
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
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldAngularCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldAngularCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, TimeStampedFieldAngularCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedFieldAngularCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldAngularCoordinatesHermiteInterpolator), module, "TimeStampedFieldAngularCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(TimeStampedFieldAngularCoordinatesHermiteInterpolator(((t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::AngularDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0, a1, a2));
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

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitEphemerisFile$OrekitSatelliteEphemeris::class$ = NULL;
        jmethodID *OrekitEphemerisFile$OrekitSatelliteEphemeris::mids$ = NULL;
        bool OrekitEphemerisFile$OrekitSatelliteEphemeris::live$ = false;
        jint OrekitEphemerisFile$OrekitSatelliteEphemeris::DEFAULT_INTERPOLATION_SIZE = (jint) 0;

        jclass OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addNewSegment_6ea0d7acda887729] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_5411a944a514c8a7] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;I)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_3f2b61cfa6d81b14] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Lorg/orekit/bodies/CelestialBody;I)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_37e60940d601d085] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Lorg/orekit/bodies/CelestialBody;ILorg/orekit/time/TimeScale;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_INTERPOLATION_SIZE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_SIZE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile$OrekitSatelliteEphemeris::OrekitEphemerisFile$OrekitSatelliteEphemeris(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_6ea0d7acda887729], a0.this$));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, jint a1) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_5411a944a514c8a7], a0.this$, a1));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, const ::org::orekit::bodies::CelestialBody & a1, jint a2) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_3f2b61cfa6d81b14], a0.this$, a1.this$, a2));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, const ::org::orekit::bodies::CelestialBody & a1, jint a2, const ::org::orekit::time::TimeScale & a3) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_37e60940d601d085], a0.this$, a1.this$, a2, a3.this$));
        }

        ::java::lang::String OrekitEphemerisFile$OrekitSatelliteEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_0090f7797e403f43]));
        }

        jdouble OrekitEphemerisFile$OrekitSatelliteEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        ::java::util::List OrekitEphemerisFile$OrekitSatelliteEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_a6156df500549a58]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitSatelliteEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitSatelliteEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
      namespace general {
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_addNewSegment(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getId(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getMu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getSegments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStart(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__id(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__mu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__segments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__start(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__stop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyGetSetDef t_OrekitEphemerisFile$OrekitSatelliteEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, id),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, mu),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, segments),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, start),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitEphemerisFile$OrekitSatelliteEphemeris__methods_[] = {
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, addNewSegment, METH_VARARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitEphemerisFile$OrekitSatelliteEphemeris)[] = {
          { Py_tp_methods, t_OrekitEphemerisFile$OrekitSatelliteEphemeris__methods_ },
          { Py_tp_init, (void *) t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_ },
          { Py_tp_getset, t_OrekitEphemerisFile$OrekitSatelliteEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitEphemerisFile$OrekitSatelliteEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris, t_OrekitEphemerisFile$OrekitSatelliteEphemeris, OrekitEphemerisFile$OrekitSatelliteEphemeris);

        void t_OrekitEphemerisFile$OrekitSatelliteEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), &PY_TYPE_DEF(OrekitEphemerisFile$OrekitSatelliteEphemeris), module, "OrekitEphemerisFile$OrekitSatelliteEphemeris", 0);
        }

        void t_OrekitEphemerisFile$OrekitSatelliteEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "class_", make_descriptor(OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "wrapfn_", make_descriptor(t_OrekitEphemerisFile$OrekitSatelliteEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
          env->getClass(OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "DEFAULT_INTERPOLATION_SIZE", make_descriptor(OrekitEphemerisFile$OrekitSatelliteEphemeris::DEFAULT_INTERPOLATION_SIZE));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 1)))
            return NULL;
          return t_OrekitEphemerisFile$OrekitSatelliteEphemeris::wrap_Object(OrekitEphemerisFile$OrekitSatelliteEphemeris(((t_OrekitEphemerisFile$OrekitSatelliteEphemeris *) arg)->object.this$));
        }
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          OrekitEphemerisFile$OrekitSatelliteEphemeris object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = OrekitEphemerisFile$OrekitSatelliteEphemeris(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_addNewSegment(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KI", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              jint a2;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KkI", ::java::util::List::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              jint a2;
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KkIk", ::java::util::List::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2, a3));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addNewSegment", args);
          return NULL;
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getId(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getMu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getSegments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::general::PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStart(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__id(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__mu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__segments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__start(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__stop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/ClasspathCrawler.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ClasspathCrawler::class$ = NULL;
      jmethodID *ClasspathCrawler::mids$ = NULL;
      bool ClasspathCrawler::live$ = false;

      jclass ClasspathCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ClasspathCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5712fb35729cb71f] = env->getMethodID(cls, "<init>", "([Ljava/lang/String;)V");
          mids$[mid_init$_5ca111ce7ec4f53d] = env->getMethodID(cls, "<init>", "(Ljava/lang/ClassLoader;[Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ClasspathCrawler::ClasspathCrawler(const JArray< ::java::lang::String > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5712fb35729cb71f, a0.this$)) {}

      ClasspathCrawler::ClasspathCrawler(const ::java::lang::ClassLoader & a0, const JArray< ::java::lang::String > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5ca111ce7ec4f53d, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_ClasspathCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ClasspathCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ClasspathCrawler_init_(t_ClasspathCrawler *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_ClasspathCrawler__methods_[] = {
        DECLARE_METHOD(t_ClasspathCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ClasspathCrawler, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ClasspathCrawler)[] = {
        { Py_tp_methods, t_ClasspathCrawler__methods_ },
        { Py_tp_init, (void *) t_ClasspathCrawler_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ClasspathCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ClasspathCrawler, t_ClasspathCrawler, ClasspathCrawler);

      void t_ClasspathCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(ClasspathCrawler), &PY_TYPE_DEF(ClasspathCrawler), module, "ClasspathCrawler", 0);
      }

      void t_ClasspathCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ClasspathCrawler), "class_", make_descriptor(ClasspathCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ClasspathCrawler), "wrapfn_", make_descriptor(t_ClasspathCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ClasspathCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ClasspathCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ClasspathCrawler::initializeClass, 1)))
          return NULL;
        return t_ClasspathCrawler::wrap_Object(ClasspathCrawler(((t_ClasspathCrawler *) arg)->object.this$));
      }
      static PyObject *t_ClasspathCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ClasspathCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ClasspathCrawler_init_(t_ClasspathCrawler *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::java::lang::String > a0((jobject) NULL);
            ClasspathCrawler object((jobject) NULL);

            if (!parseArgs(args, "[s", &a0))
            {
              INT_CALL(object = ClasspathCrawler(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::ClassLoader a0((jobject) NULL);
            JArray< ::java::lang::String > a1((jobject) NULL);
            ClasspathCrawler object((jobject) NULL);

            if (!parseArgs(args, "k[s", ::java::lang::ClassLoader::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ClasspathCrawler(a0, a1));
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
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *RTNCovarianceKey::class$ = NULL;
            jmethodID *RTNCovarianceKey::mids$ = NULL;
            bool RTNCovarianceKey::live$ = false;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_DRG = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CN_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CN_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CN_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::COMMENT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CR_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_DRG = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_SRP = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_DRG = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_SRP = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_THR = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CT_T = NULL;

            jclass RTNCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_b65959e79196ae69] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)Z");
                mids$[mid_valueOf_d124415d6a021d92] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;");
                mids$[mid_values_31cf7058aeff5824] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CDRG_DRG = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CN_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CN_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CN_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CN_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CN_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CN_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                COMMENT = new RTNCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CR_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CR_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_DRG = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_SRP = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_DRG = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_SRP = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_THR = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_THR", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean RTNCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_b65959e79196ae69], a0.this$, a1.this$, a2.this$);
            }

            RTNCovarianceKey RTNCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RTNCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d124415d6a021d92], a0.this$));
            }

            JArray< RTNCovarianceKey > RTNCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RTNCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_31cf7058aeff5824]));
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
            static PyObject *t_RTNCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovarianceKey_of_(t_RTNCovarianceKey *self, PyObject *args);
            static PyObject *t_RTNCovarianceKey_process(t_RTNCovarianceKey *self, PyObject *args);
            static PyObject *t_RTNCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_RTNCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_RTNCovarianceKey_get__parameters_(t_RTNCovarianceKey *self, void *data);
            static PyGetSetDef t_RTNCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_RTNCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RTNCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_RTNCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_RTNCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_RTNCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RTNCovarianceKey)[] = {
              { Py_tp_methods, t_RTNCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_RTNCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RTNCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(RTNCovarianceKey, t_RTNCovarianceKey, RTNCovarianceKey);
            PyObject *t_RTNCovarianceKey::wrap_Object(const RTNCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RTNCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RTNCovarianceKey *self = (t_RTNCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RTNCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RTNCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RTNCovarianceKey *self = (t_RTNCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RTNCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(RTNCovarianceKey), &PY_TYPE_DEF(RTNCovarianceKey), module, "RTNCovarianceKey", 0);
            }

            void t_RTNCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "class_", make_descriptor(RTNCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "wrapfn_", make_descriptor(t_RTNCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(RTNCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_DRG", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CN_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CN_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CN_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CN_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CN_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CN_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "COMMENT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CR_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CR_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_DRG", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_SRP", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_DRG", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_SRP", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_THR", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_THR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CT_T)));
            }

            static PyObject *t_RTNCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RTNCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_RTNCovarianceKey::wrap_Object(RTNCovarianceKey(((t_RTNCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_RTNCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RTNCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RTNCovarianceKey_of_(t_RTNCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_RTNCovarianceKey_process(t_RTNCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_RTNCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              RTNCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::RTNCovarianceKey::valueOf(a0));
                return t_RTNCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_RTNCovarianceKey_values(PyTypeObject *type)
            {
              JArray< RTNCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::RTNCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_RTNCovarianceKey::wrap_jobject);
            }
            static PyObject *t_RTNCovarianceKey_get__parameters_(t_RTNCovarianceKey *self, void *data)
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
#include "org/orekit/data/SimpleTimeStampedTableParser$RowConverter.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *SimpleTimeStampedTableParser$RowConverter::class$ = NULL;
      jmethodID *SimpleTimeStampedTableParser$RowConverter::mids$ = NULL;
      bool SimpleTimeStampedTableParser$RowConverter::live$ = false;

      jclass SimpleTimeStampedTableParser$RowConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/SimpleTimeStampedTableParser$RowConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convert_3dba3090800d9e72] = env->getMethodID(cls, "convert", "([D)Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeStamped SimpleTimeStampedTableParser$RowConverter::convert(const JArray< jdouble > & a0) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_convert_3dba3090800d9e72], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_of_(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *args);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_convert(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_get__parameters_(t_SimpleTimeStampedTableParser$RowConverter *self, void *data);
      static PyGetSetDef t_SimpleTimeStampedTableParser$RowConverter__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleTimeStampedTableParser$RowConverter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleTimeStampedTableParser$RowConverter__methods_[] = {
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, convert, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleTimeStampedTableParser$RowConverter)[] = {
        { Py_tp_methods, t_SimpleTimeStampedTableParser$RowConverter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SimpleTimeStampedTableParser$RowConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleTimeStampedTableParser$RowConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SimpleTimeStampedTableParser$RowConverter, t_SimpleTimeStampedTableParser$RowConverter, SimpleTimeStampedTableParser$RowConverter);
      PyObject *t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(const SimpleTimeStampedTableParser$RowConverter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser$RowConverter *self = (t_SimpleTimeStampedTableParser$RowConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser$RowConverter *self = (t_SimpleTimeStampedTableParser$RowConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleTimeStampedTableParser$RowConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleTimeStampedTableParser$RowConverter), &PY_TYPE_DEF(SimpleTimeStampedTableParser$RowConverter), module, "SimpleTimeStampedTableParser$RowConverter", 0);
      }

      void t_SimpleTimeStampedTableParser$RowConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "class_", make_descriptor(SimpleTimeStampedTableParser$RowConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "wrapfn_", make_descriptor(t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleTimeStampedTableParser$RowConverter::initializeClass, 1)))
          return NULL;
        return t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(SimpleTimeStampedTableParser$RowConverter(((t_SimpleTimeStampedTableParser$RowConverter *) arg)->object.this$));
      }
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleTimeStampedTableParser$RowConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_of_(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_convert(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::orekit::time::TimeStamped result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.convert(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convert", arg);
        return NULL;
      }
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_get__parameters_(t_SimpleTimeStampedTableParser$RowConverter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *DTM2000InputParameters::class$ = NULL;
          jmethodID *DTM2000InputParameters::mids$ = NULL;
          bool DTM2000InputParameters::live$ = false;

          jclass DTM2000InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/DTM2000InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_get24HoursKp_e912d21057defe63] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getInstantFlux_e912d21057defe63] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMeanFlux_e912d21057defe63] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getThreeHourlyKP_e912d21057defe63] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble DTM2000InputParameters::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_e912d21057defe63], a0.this$);
          }

          jdouble DTM2000InputParameters::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_e912d21057defe63], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate DTM2000InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
          }

          jdouble DTM2000InputParameters::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_e912d21057defe63], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate DTM2000InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
          }

          jdouble DTM2000InputParameters::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_e912d21057defe63], a0.this$);
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
        namespace atmosphere {
          static PyObject *t_DTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_get24HoursKp(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getInstantFlux(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getMaxDate(t_DTM2000InputParameters *self);
          static PyObject *t_DTM2000InputParameters_getMeanFlux(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getMinDate(t_DTM2000InputParameters *self);
          static PyObject *t_DTM2000InputParameters_getThreeHourlyKP(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_get__maxDate(t_DTM2000InputParameters *self, void *data);
          static PyObject *t_DTM2000InputParameters_get__minDate(t_DTM2000InputParameters *self, void *data);
          static PyGetSetDef t_DTM2000InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_DTM2000InputParameters, maxDate),
            DECLARE_GET_FIELD(t_DTM2000InputParameters, minDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DTM2000InputParameters__methods_[] = {
            DECLARE_METHOD(t_DTM2000InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000InputParameters, get24HoursKp, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getInstantFlux, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getMaxDate, METH_NOARGS),
            DECLARE_METHOD(t_DTM2000InputParameters, getMeanFlux, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getMinDate, METH_NOARGS),
            DECLARE_METHOD(t_DTM2000InputParameters, getThreeHourlyKP, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DTM2000InputParameters)[] = {
            { Py_tp_methods, t_DTM2000InputParameters__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DTM2000InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DTM2000InputParameters)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(DTM2000InputParameters, t_DTM2000InputParameters, DTM2000InputParameters);

          void t_DTM2000InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(DTM2000InputParameters), &PY_TYPE_DEF(DTM2000InputParameters), module, "DTM2000InputParameters", 0);
          }

          void t_DTM2000InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "class_", make_descriptor(DTM2000InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "wrapfn_", make_descriptor(t_DTM2000InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DTM2000InputParameters::initializeClass, 1)))
              return NULL;
            return t_DTM2000InputParameters::wrap_Object(DTM2000InputParameters(((t_DTM2000InputParameters *) arg)->object.this$));
          }
          static PyObject *t_DTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DTM2000InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DTM2000InputParameters_get24HoursKp(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.get24HoursKp(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "get24HoursKp", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getInstantFlux(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getInstantFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInstantFlux", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getMaxDate(t_DTM2000InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DTM2000InputParameters_getMeanFlux(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMeanFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getMeanFlux", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getMinDate(t_DTM2000InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DTM2000InputParameters_getThreeHourlyKP(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getThreeHourlyKP", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_get__maxDate(t_DTM2000InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_DTM2000InputParameters_get__minDate(t_DTM2000InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *RealDistribution::class$ = NULL;
      jmethodID *RealDistribution::mids$ = NULL;
      bool RealDistribution::live$ = false;

      jclass RealDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/RealDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
          mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
          mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
          mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
          mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
          mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
          mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
          mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
          mids$[mid_logDensity_0ba5fed9597b693e] = env->getMethodID(cls, "logDensity", "(D)D");
          mids$[mid_probability_824133ce4aec3505] = env->getMethodID(cls, "probability", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealDistribution::cumulativeProbability(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
      }

      jdouble RealDistribution::density(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
      }

      jdouble RealDistribution::getNumericalMean() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
      }

      jdouble RealDistribution::getNumericalVariance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
      }

      jdouble RealDistribution::getSupportLowerBound() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
      }

      jdouble RealDistribution::getSupportUpperBound() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
      }

      jdouble RealDistribution::inverseCumulativeProbability(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
      }

      jboolean RealDistribution::isSupportConnected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
      }

      jdouble RealDistribution::logDensity(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_logDensity_0ba5fed9597b693e], a0);
      }

      jdouble RealDistribution::probability(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_824133ce4aec3505], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      static PyObject *t_RealDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealDistribution_cumulativeProbability(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_density(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_getNumericalMean(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getNumericalVariance(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getSupportLowerBound(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getSupportUpperBound(t_RealDistribution *self);
      static PyObject *t_RealDistribution_inverseCumulativeProbability(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_isSupportConnected(t_RealDistribution *self);
      static PyObject *t_RealDistribution_logDensity(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_probability(t_RealDistribution *self, PyObject *args);
      static PyObject *t_RealDistribution_get__numericalMean(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__numericalVariance(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportConnected(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportLowerBound(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportUpperBound(t_RealDistribution *self, void *data);
      static PyGetSetDef t_RealDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_RealDistribution, numericalMean),
        DECLARE_GET_FIELD(t_RealDistribution, numericalVariance),
        DECLARE_GET_FIELD(t_RealDistribution, supportConnected),
        DECLARE_GET_FIELD(t_RealDistribution, supportLowerBound),
        DECLARE_GET_FIELD(t_RealDistribution, supportUpperBound),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealDistribution__methods_[] = {
        DECLARE_METHOD(t_RealDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealDistribution, cumulativeProbability, METH_O),
        DECLARE_METHOD(t_RealDistribution, density, METH_O),
        DECLARE_METHOD(t_RealDistribution, getNumericalMean, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getNumericalVariance, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getSupportLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getSupportUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, inverseCumulativeProbability, METH_O),
        DECLARE_METHOD(t_RealDistribution, isSupportConnected, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, logDensity, METH_O),
        DECLARE_METHOD(t_RealDistribution, probability, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealDistribution)[] = {
        { Py_tp_methods, t_RealDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealDistribution, t_RealDistribution, RealDistribution);

      void t_RealDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(RealDistribution), &PY_TYPE_DEF(RealDistribution), module, "RealDistribution", 0);
      }

      void t_RealDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "class_", make_descriptor(RealDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "wrapfn_", make_descriptor(t_RealDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealDistribution::initializeClass, 1)))
          return NULL;
        return t_RealDistribution::wrap_Object(RealDistribution(((t_RealDistribution *) arg)->object.this$));
      }
      static PyObject *t_RealDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealDistribution_cumulativeProbability(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.cumulativeProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_density(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.density(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "density", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_getNumericalMean(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getNumericalVariance(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getSupportLowerBound(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSupportLowerBound());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getSupportUpperBound(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSupportUpperBound());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_inverseCumulativeProbability(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_isSupportConnected(t_RealDistribution *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSupportConnected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealDistribution_logDensity(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.logDensity(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "logDensity", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_probability(t_RealDistribution *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.probability(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "probability", args);
        return NULL;
      }

      static PyObject *t_RealDistribution_get__numericalMean(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__numericalVariance(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__supportConnected(t_RealDistribution *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSupportConnected());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealDistribution_get__supportLowerBound(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSupportLowerBound());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__supportUpperBound(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSupportUpperBound());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *Maneuver::class$ = NULL;
        jmethodID *Maneuver::mids$ = NULL;
        bool Maneuver::live$ = false;

        jclass Maneuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/Maneuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab0f45ba20f8bea2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;Lorg/orekit/forces/maneuvers/propulsion/PropulsionModel;)V");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_addContribution_3ae28f2cc7cbb00b] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
            mids$[mid_addContribution_170c8a5902f676b2] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getAttitudeOverride_5cce95036ae870ba] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_9fb96072e0d6dbf0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getManeuverTriggers_b6afe6b9afe270c6] = env->getMethodID(cls, "getManeuverTriggers", "()Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getPropulsionModel_5d177cae411efd0d] = env->getMethodID(cls, "getPropulsionModel", "()Lorg/orekit/forces/maneuvers/propulsion/PropulsionModel;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Maneuver::Maneuver(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers & a1, const ::org::orekit::forces::maneuvers::propulsion::PropulsionModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab0f45ba20f8bea2, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Maneuver::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        void Maneuver::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_3ae28f2cc7cbb00b], a0.this$, a1.this$);
        }

        void Maneuver::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_170c8a5902f676b2], a0.this$, a1.this$);
        }

        jboolean Maneuver::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        ::org::orekit::attitudes::AttitudeProvider Maneuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_5cce95036ae870ba]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType Maneuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_9fb96072e0d6dbf0]));
        }

        ::java::util::stream::Stream Maneuver::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
        }

        ::java::util::stream::Stream Maneuver::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
        }

        ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers Maneuver::getManeuverTriggers() const
        {
          return ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers(env->callObjectMethod(this$, mids$[mid_getManeuverTriggers_b6afe6b9afe270c6]));
        }

        ::java::lang::String Maneuver::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
        }

        ::java::util::List Maneuver::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        ::org::orekit::forces::maneuvers::propulsion::PropulsionModel Maneuver::getPropulsionModel() const
        {
          return ::org::orekit::forces::maneuvers::propulsion::PropulsionModel(env->callObjectMethod(this$, mids$[mid_getPropulsionModel_5d177cae411efd0d]));
        }

        void Maneuver::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
        }

        void Maneuver::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
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
    namespace forces {
      namespace maneuvers {
        static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Maneuver_acceleration(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_addContribution(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_dependsOnPositionOnly(t_Maneuver *self);
        static PyObject *t_Maneuver_getAttitudeOverride(t_Maneuver *self);
        static PyObject *t_Maneuver_getControl3DVectorCostType(t_Maneuver *self);
        static PyObject *t_Maneuver_getEventDetectors(t_Maneuver *self);
        static PyObject *t_Maneuver_getFieldEventDetectors(t_Maneuver *self, PyObject *arg);
        static PyObject *t_Maneuver_getManeuverTriggers(t_Maneuver *self);
        static PyObject *t_Maneuver_getName(t_Maneuver *self);
        static PyObject *t_Maneuver_getParametersDrivers(t_Maneuver *self);
        static PyObject *t_Maneuver_getPropulsionModel(t_Maneuver *self);
        static PyObject *t_Maneuver_init(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_get__attitudeOverride(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__control3DVectorCostType(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__eventDetectors(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__maneuverTriggers(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__name(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__parametersDrivers(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__propulsionModel(t_Maneuver *self, void *data);
        static PyGetSetDef t_Maneuver__fields_[] = {
          DECLARE_GET_FIELD(t_Maneuver, attitudeOverride),
          DECLARE_GET_FIELD(t_Maneuver, control3DVectorCostType),
          DECLARE_GET_FIELD(t_Maneuver, eventDetectors),
          DECLARE_GET_FIELD(t_Maneuver, maneuverTriggers),
          DECLARE_GET_FIELD(t_Maneuver, name),
          DECLARE_GET_FIELD(t_Maneuver, parametersDrivers),
          DECLARE_GET_FIELD(t_Maneuver, propulsionModel),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Maneuver__methods_[] = {
          DECLARE_METHOD(t_Maneuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Maneuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Maneuver, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_Maneuver, addContribution, METH_VARARGS),
          DECLARE_METHOD(t_Maneuver, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getAttitudeOverride, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getControl3DVectorCostType, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_Maneuver, getManeuverTriggers, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getName, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getPropulsionModel, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Maneuver)[] = {
          { Py_tp_methods, t_Maneuver__methods_ },
          { Py_tp_init, (void *) t_Maneuver_init_ },
          { Py_tp_getset, t_Maneuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Maneuver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Maneuver, t_Maneuver, Maneuver);

        void t_Maneuver::install(PyObject *module)
        {
          installType(&PY_TYPE(Maneuver), &PY_TYPE_DEF(Maneuver), module, "Maneuver", 0);
        }

        void t_Maneuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "class_", make_descriptor(Maneuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "wrapfn_", make_descriptor(t_Maneuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Maneuver::initializeClass, 1)))
            return NULL;
          return t_Maneuver::wrap_Object(Maneuver(((t_Maneuver *) arg)->object.this$));
        }
        static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Maneuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers a1((jobject) NULL);
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel a2((jobject) NULL);
          Maneuver object((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers::initializeClass, ::org::orekit::forces::maneuvers::propulsion::PropulsionModel::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = Maneuver(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Maneuver_acceleration(t_Maneuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_Maneuver_addContribution(t_Maneuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::parameters_))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::numerical::TimeDerivativesEquations a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::numerical::TimeDerivativesEquations::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addContribution", args);
          return NULL;
        }

        static PyObject *t_Maneuver_dependsOnPositionOnly(t_Maneuver *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Maneuver_getAttitudeOverride(t_Maneuver *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getControl3DVectorCostType(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
          OBJ_CALL(result = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getEventDetectors(t_Maneuver *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_Maneuver_getFieldEventDetectors(t_Maneuver *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
          return NULL;
        }

        static PyObject *t_Maneuver_getManeuverTriggers(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers result((jobject) NULL);
          OBJ_CALL(result = self->object.getManeuverTriggers());
          return ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggers::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getName(t_Maneuver *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Maneuver_getParametersDrivers(t_Maneuver *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_Maneuver_getPropulsionModel(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropulsionModel());
          return ::org::orekit::forces::maneuvers::propulsion::t_PropulsionModel::wrap_Object(result);
        }

        static PyObject *t_Maneuver_init(t_Maneuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(self->object.init(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.init(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_Maneuver_get__attitudeOverride(t_Maneuver *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__control3DVectorCostType(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
          OBJ_CALL(value = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__eventDetectors(t_Maneuver *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__maneuverTriggers(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers value((jobject) NULL);
          OBJ_CALL(value = self->object.getManeuverTriggers());
          return ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggers::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__name(t_Maneuver *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Maneuver_get__parametersDrivers(t_Maneuver *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__propulsionModel(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropulsionModel());
          return ::org::orekit::forces::maneuvers::propulsion::t_PropulsionModel::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/SinCos.h"
#include "org/hipparchus/util/SinCos.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *SinCos::class$ = NULL;
      jmethodID *SinCos::mids$ = NULL;
      bool SinCos::live$ = false;

      jclass SinCos::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/SinCos");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cos_456d9a2f64d6b28d] = env->getMethodID(cls, "cos", "()D");
          mids$[mid_difference_0a9a7935f82730c0] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/SinCos;Lorg/hipparchus/util/SinCos;)Lorg/hipparchus/util/SinCos;");
          mids$[mid_sin_456d9a2f64d6b28d] = env->getMethodID(cls, "sin", "()D");
          mids$[mid_sum_0a9a7935f82730c0] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/SinCos;Lorg/hipparchus/util/SinCos;)Lorg/hipparchus/util/SinCos;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble SinCos::cos() const
      {
        return env->callDoubleMethod(this$, mids$[mid_cos_456d9a2f64d6b28d]);
      }

      SinCos SinCos::difference(const SinCos & a0, const SinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinCos(env->callStaticObjectMethod(cls, mids$[mid_difference_0a9a7935f82730c0], a0.this$, a1.this$));
      }

      jdouble SinCos::sin() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sin_456d9a2f64d6b28d]);
      }

      SinCos SinCos::sum(const SinCos & a0, const SinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinCos(env->callStaticObjectMethod(cls, mids$[mid_sum_0a9a7935f82730c0], a0.this$, a1.this$));
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
      static PyObject *t_SinCos_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinCos_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinCos_cos(t_SinCos *self);
      static PyObject *t_SinCos_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_SinCos_sin(t_SinCos *self);
      static PyObject *t_SinCos_sum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_SinCos__methods_[] = {
        DECLARE_METHOD(t_SinCos, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinCos, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinCos, cos, METH_NOARGS),
        DECLARE_METHOD(t_SinCos, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SinCos, sin, METH_NOARGS),
        DECLARE_METHOD(t_SinCos, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SinCos)[] = {
        { Py_tp_methods, t_SinCos__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SinCos)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SinCos, t_SinCos, SinCos);

      void t_SinCos::install(PyObject *module)
      {
        installType(&PY_TYPE(SinCos), &PY_TYPE_DEF(SinCos), module, "SinCos", 0);
      }

      void t_SinCos::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "class_", make_descriptor(SinCos::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "wrapfn_", make_descriptor(t_SinCos::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SinCos_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SinCos::initializeClass, 1)))
          return NULL;
        return t_SinCos::wrap_Object(SinCos(((t_SinCos *) arg)->object.this$));
      }
      static PyObject *t_SinCos_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SinCos::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SinCos_cos(t_SinCos *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.cos());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinCos_difference(PyTypeObject *type, PyObject *args)
      {
        SinCos a0((jobject) NULL);
        SinCos a1((jobject) NULL);
        SinCos result((jobject) NULL);

        if (!parseArgs(args, "kk", SinCos::initializeClass, SinCos::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinCos::difference(a0, a1));
          return t_SinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_SinCos_sin(t_SinCos *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.sin());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinCos_sum(PyTypeObject *type, PyObject *args)
      {
        SinCos a0((jobject) NULL);
        SinCos a1((jobject) NULL);
        SinCos result((jobject) NULL);

        if (!parseArgs(args, "kk", SinCos::initializeClass, SinCos::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinCos::sum(a0, a1));
          return t_SinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
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
            mids$[mid_getAlgorithmId_41b1271dfac9173f] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_824133ce4aec3505] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_465c95e4cb53bef3] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_0b100883a4ceff82] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::api::AlgorithmId IntersectionAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_41b1271dfac9173f]));
        }

        jdouble IntersectionAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_824133ce4aec3505], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IntersectionAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_465c95e4cb53bef3], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IntersectionAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_0b100883a4ceff82], a0.this$, a1.this$, a2.this$, a3.this$));
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
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherData.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *CssiSpaceWeatherData::class$ = NULL;
            jmethodID *CssiSpaceWeatherData::mids$ = NULL;
            bool CssiSpaceWeatherData::live$ = false;
            ::java::lang::String *CssiSpaceWeatherData::DEFAULT_SUPPORTED_NAMES = NULL;

            jclass CssiSpaceWeatherData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                mids$[mid_init$_178426610ec237d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_init$_b4e6e392672e7dfd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_4782a728e14f2f6e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_c3298cacdeeaf7cf] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_0cdfbdc326d8269d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_5801c42bbd9a703a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/time/TimeScale;IDD)V");
                mids$[mid_init$_cadc3689caf920c4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDD)V");
                mids$[mid_get24HoursKp_e912d21057defe63] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_e586dea4c0bad69b] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_e912d21057defe63] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_e912d21057defe63] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getInstantFlux_e912d21057defe63] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_e912d21057defe63] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getThreeHourlyKP_e912d21057defe63] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_178426610ec237d4, a0.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScale & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_b4e6e392672e7dfd, a0.this$, a1.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_4782a728e14f2f6e, a0.this$, a1.this$, a2.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_c3298cacdeeaf7cf, a0.this$, a1.this$, a2.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_0cdfbdc326d8269d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_5801c42bbd9a703a, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_cadc3689caf920c4, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6)) {}

            jdouble CssiSpaceWeatherData::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_e912d21057defe63], a0.this$);
            }

            JArray< jdouble > CssiSpaceWeatherData::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_e586dea4c0bad69b], a0.this$));
            }

            jdouble CssiSpaceWeatherData::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_e912d21057defe63], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_e912d21057defe63], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_e912d21057defe63], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_e912d21057defe63], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_e912d21057defe63], a0.this$);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_CssiSpaceWeatherData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherData_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherData_of_(t_CssiSpaceWeatherData *self, PyObject *args);
            static int t_CssiSpaceWeatherData_init_(t_CssiSpaceWeatherData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CssiSpaceWeatherData_get24HoursKp(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getAp(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getAverageFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getDailyFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getInstantFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getMeanFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getThreeHourlyKP(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_get__parameters_(t_CssiSpaceWeatherData *self, void *data);
            static PyGetSetDef t_CssiSpaceWeatherData__fields_[] = {
              DECLARE_GET_FIELD(t_CssiSpaceWeatherData, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CssiSpaceWeatherData__methods_[] = {
              DECLARE_METHOD(t_CssiSpaceWeatherData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, of_, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, get24HoursKp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getAp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getAverageFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getDailyFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getInstantFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getMeanFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getThreeHourlyKP, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CssiSpaceWeatherData)[] = {
              { Py_tp_methods, t_CssiSpaceWeatherData__methods_ },
              { Py_tp_init, (void *) t_CssiSpaceWeatherData_init_ },
              { Py_tp_getset, t_CssiSpaceWeatherData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CssiSpaceWeatherData)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(CssiSpaceWeatherData, t_CssiSpaceWeatherData, CssiSpaceWeatherData);
            PyObject *t_CssiSpaceWeatherData::wrap_Object(const CssiSpaceWeatherData& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CssiSpaceWeatherData::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherData *self = (t_CssiSpaceWeatherData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_CssiSpaceWeatherData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CssiSpaceWeatherData::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherData *self = (t_CssiSpaceWeatherData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_CssiSpaceWeatherData::install(PyObject *module)
            {
              installType(&PY_TYPE(CssiSpaceWeatherData), &PY_TYPE_DEF(CssiSpaceWeatherData), module, "CssiSpaceWeatherData", 0);
            }

            void t_CssiSpaceWeatherData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "class_", make_descriptor(CssiSpaceWeatherData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "wrapfn_", make_descriptor(t_CssiSpaceWeatherData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "boxfn_", make_descriptor(boxObject));
              env->getClass(CssiSpaceWeatherData::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*CssiSpaceWeatherData::DEFAULT_SUPPORTED_NAMES)));
            }

            static PyObject *t_CssiSpaceWeatherData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CssiSpaceWeatherData::initializeClass, 1)))
                return NULL;
              return t_CssiSpaceWeatherData::wrap_Object(CssiSpaceWeatherData(((t_CssiSpaceWeatherData *) arg)->object.this$));
            }
            static PyObject *t_CssiSpaceWeatherData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CssiSpaceWeatherData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CssiSpaceWeatherData_of_(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CssiSpaceWeatherData_init_(t_CssiSpaceWeatherData *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::java::lang::String a0((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "s", &a0))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kKk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "sKkk", ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  jint a3;
                  jdouble a4;
                  jdouble a5;
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kKkIDD", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "sKkkIDD", ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
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

            static PyObject *t_CssiSpaceWeatherData_get24HoursKp(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.get24HoursKp(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "get24HoursKp", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getAp(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAp(a0));
                return result.wrap();
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getAp", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getAverageFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAverageFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getAverageFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getDailyFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDailyFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getDailyFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getInstantFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getInstantFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getInstantFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getMeanFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeanFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getMeanFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getThreeHourlyKP(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getThreeHourlyKP", args, 2);
            }
            static PyObject *t_CssiSpaceWeatherData_get__parameters_(t_CssiSpaceWeatherData *self, void *data)
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
#include "org/hipparchus/random/SobolSequenceGenerator.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *SobolSequenceGenerator::class$ = NULL;
      jmethodID *SobolSequenceGenerator::mids$ = NULL;
      bool SobolSequenceGenerator::live$ = false;

      jclass SobolSequenceGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/SobolSequenceGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_c5ff11979485c1ac] = env->getMethodID(cls, "<init>", "(ILjava/io/InputStream;)V");
          mids$[mid_getNextIndex_f2f64475e4580546] = env->getMethodID(cls, "getNextIndex", "()I");
          mids$[mid_nextVector_7cdc325af0834901] = env->getMethodID(cls, "nextVector", "()[D");
          mids$[mid_skipTo_eb9cceadce1b2217] = env->getMethodID(cls, "skipTo", "(I)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SobolSequenceGenerator::SobolSequenceGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      SobolSequenceGenerator::SobolSequenceGenerator(jint a0, const ::java::io::InputStream & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c5ff11979485c1ac, a0, a1.this$)) {}

      jint SobolSequenceGenerator::getNextIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getNextIndex_f2f64475e4580546]);
      }

      JArray< jdouble > SobolSequenceGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_7cdc325af0834901]));
      }

      JArray< jdouble > SobolSequenceGenerator::skipTo(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_skipTo_eb9cceadce1b2217], a0));
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
      static PyObject *t_SobolSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SobolSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SobolSequenceGenerator_init_(t_SobolSequenceGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SobolSequenceGenerator_getNextIndex(t_SobolSequenceGenerator *self);
      static PyObject *t_SobolSequenceGenerator_nextVector(t_SobolSequenceGenerator *self);
      static PyObject *t_SobolSequenceGenerator_skipTo(t_SobolSequenceGenerator *self, PyObject *arg);
      static PyObject *t_SobolSequenceGenerator_get__nextIndex(t_SobolSequenceGenerator *self, void *data);
      static PyGetSetDef t_SobolSequenceGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_SobolSequenceGenerator, nextIndex),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SobolSequenceGenerator__methods_[] = {
        DECLARE_METHOD(t_SobolSequenceGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SobolSequenceGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SobolSequenceGenerator, getNextIndex, METH_NOARGS),
        DECLARE_METHOD(t_SobolSequenceGenerator, nextVector, METH_NOARGS),
        DECLARE_METHOD(t_SobolSequenceGenerator, skipTo, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SobolSequenceGenerator)[] = {
        { Py_tp_methods, t_SobolSequenceGenerator__methods_ },
        { Py_tp_init, (void *) t_SobolSequenceGenerator_init_ },
        { Py_tp_getset, t_SobolSequenceGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SobolSequenceGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SobolSequenceGenerator, t_SobolSequenceGenerator, SobolSequenceGenerator);

      void t_SobolSequenceGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(SobolSequenceGenerator), &PY_TYPE_DEF(SobolSequenceGenerator), module, "SobolSequenceGenerator", 0);
      }

      void t_SobolSequenceGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "class_", make_descriptor(SobolSequenceGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "wrapfn_", make_descriptor(t_SobolSequenceGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SobolSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SobolSequenceGenerator::initializeClass, 1)))
          return NULL;
        return t_SobolSequenceGenerator::wrap_Object(SobolSequenceGenerator(((t_SobolSequenceGenerator *) arg)->object.this$));
      }
      static PyObject *t_SobolSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SobolSequenceGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SobolSequenceGenerator_init_(t_SobolSequenceGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            SobolSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = SobolSequenceGenerator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::java::io::InputStream a1((jobject) NULL);
            SobolSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SobolSequenceGenerator(a0, a1));
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

      static PyObject *t_SobolSequenceGenerator_getNextIndex(t_SobolSequenceGenerator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNextIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SobolSequenceGenerator_nextVector(t_SobolSequenceGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }

      static PyObject *t_SobolSequenceGenerator_skipTo(t_SobolSequenceGenerator *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.skipTo(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "skipTo", arg);
        return NULL;
      }

      static PyObject *t_SobolSequenceGenerator_get__nextIndex(t_SobolSequenceGenerator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNextIndex());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *TrivariateFunction::class$ = NULL;
      jmethodID *TrivariateFunction::mids$ = NULL;
      bool TrivariateFunction::live$ = false;

      jclass TrivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/TrivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_c564d6ace53a5934] = env->getMethodID(cls, "value", "(DDD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TrivariateFunction::value(jdouble a0, jdouble a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_c564d6ace53a5934], a0, a1, a2);
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
      static PyObject *t_TrivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrivariateFunction_value(t_TrivariateFunction *self, PyObject *args);

      static PyMethodDef t_TrivariateFunction__methods_[] = {
        DECLARE_METHOD(t_TrivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TrivariateFunction)[] = {
        { Py_tp_methods, t_TrivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TrivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TrivariateFunction, t_TrivariateFunction, TrivariateFunction);

      void t_TrivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(TrivariateFunction), &PY_TYPE_DEF(TrivariateFunction), module, "TrivariateFunction", 0);
      }

      void t_TrivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "class_", make_descriptor(TrivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "wrapfn_", make_descriptor(t_TrivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TrivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TrivariateFunction::initializeClass, 1)))
          return NULL;
        return t_TrivariateFunction::wrap_Object(TrivariateFunction(((t_TrivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_TrivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TrivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TrivariateFunction_value(t_TrivariateFunction *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.value(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCycleSlipDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *GeometryFreeCycleSlipDetector::class$ = NULL;
          jmethodID *GeometryFreeCycleSlipDetector::mids$ = NULL;
          bool GeometryFreeCycleSlipDetector::live$ = false;

          jclass GeometryFreeCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/GeometryFreeCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b05c288d5068eccb] = env->getMethodID(cls, "<init>", "(DDI)V");
              mids$[mid_manageData_a74883e6a7063961] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GeometryFreeCycleSlipDetector::GeometryFreeCycleSlipDetector(jdouble a0, jdouble a1, jint a2) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(env->newObject(initializeClass, &mids$, mid_init$_b05c288d5068eccb, a0, a1, a2)) {}
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
          static PyObject *t_GeometryFreeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometryFreeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GeometryFreeCycleSlipDetector_init_(t_GeometryFreeCycleSlipDetector *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_GeometryFreeCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_GeometryFreeCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometryFreeCycleSlipDetector, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometryFreeCycleSlipDetector)[] = {
            { Py_tp_methods, t_GeometryFreeCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) t_GeometryFreeCycleSlipDetector_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometryFreeCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(GeometryFreeCycleSlipDetector, t_GeometryFreeCycleSlipDetector, GeometryFreeCycleSlipDetector);

          void t_GeometryFreeCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometryFreeCycleSlipDetector), &PY_TYPE_DEF(GeometryFreeCycleSlipDetector), module, "GeometryFreeCycleSlipDetector", 0);
          }

          void t_GeometryFreeCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "class_", make_descriptor(GeometryFreeCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "wrapfn_", make_descriptor(t_GeometryFreeCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometryFreeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometryFreeCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_GeometryFreeCycleSlipDetector::wrap_Object(GeometryFreeCycleSlipDetector(((t_GeometryFreeCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_GeometryFreeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometryFreeCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GeometryFreeCycleSlipDetector_init_(t_GeometryFreeCycleSlipDetector *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            GeometryFreeCycleSlipDetector object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = GeometryFreeCycleSlipDetector(a0, a1, a2));
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
#include "org/orekit/propagation/conversion/HighamHall54IntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *HighamHall54IntegratorBuilder::class$ = NULL;
        jmethodID *HighamHall54IntegratorBuilder::mids$ = NULL;
        bool HighamHall54IntegratorBuilder::live$ = false;

        jclass HighamHall54IntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/HighamHall54IntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_501b0015ccc7d54e] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54IntegratorBuilder::HighamHall54IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator HighamHall54IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_501b0015ccc7d54e], a0.this$, a1.this$));
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
      namespace conversion {
        static PyObject *t_HighamHall54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HighamHall54IntegratorBuilder_init_(t_HighamHall54IntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54IntegratorBuilder_buildIntegrator(t_HighamHall54IntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_HighamHall54IntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54IntegratorBuilder)[] = {
          { Py_tp_methods, t_HighamHall54IntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_HighamHall54IntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54IntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HighamHall54IntegratorBuilder, t_HighamHall54IntegratorBuilder, HighamHall54IntegratorBuilder);

        void t_HighamHall54IntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54IntegratorBuilder), &PY_TYPE_DEF(HighamHall54IntegratorBuilder), module, "HighamHall54IntegratorBuilder", 0);
        }

        void t_HighamHall54IntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "class_", make_descriptor(HighamHall54IntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "wrapfn_", make_descriptor(t_HighamHall54IntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54IntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_HighamHall54IntegratorBuilder::wrap_Object(HighamHall54IntegratorBuilder(((t_HighamHall54IntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54IntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HighamHall54IntegratorBuilder_init_(t_HighamHall54IntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HighamHall54IntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HighamHall54IntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HighamHall54IntegratorBuilder_buildIntegrator(t_HighamHall54IntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVectorFormat.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/StringBuffer.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/linear/RealVectorFormat.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorFormat::class$ = NULL;
      jmethodID *RealVectorFormat::mids$ = NULL;
      bool RealVectorFormat::live$ = false;

      jclass RealVectorFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_695a782f9c7823f6] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_de8316969b81209c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_init$_3420ce131d6f9e7d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_format_459b23c8344eb314] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealVector;)Ljava/lang/String;");
          mids$[mid_format_bf0c14f894c2e4a2] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealVector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_81e8fdf65840780c] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getFormat_d34e2e8dd35583a0] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_0090f7797e403f43] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getRealVectorFormat_6c214984d05c94b5] = env->getStaticMethodID(cls, "getRealVectorFormat", "()Lorg/hipparchus/linear/RealVectorFormat;");
          mids$[mid_getRealVectorFormat_adc9672f20fe85f0] = env->getStaticMethodID(cls, "getRealVectorFormat", "(Ljava/util/Locale;)Lorg/hipparchus/linear/RealVectorFormat;");
          mids$[mid_getSeparator_0090f7797e403f43] = env->getMethodID(cls, "getSeparator", "()Ljava/lang/String;");
          mids$[mid_getSuffix_0090f7797e403f43] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_10d2a9948714ddd3] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_parse_7861297daafe2b42] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/linear/ArrayRealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVectorFormat::RealVectorFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      RealVectorFormat::RealVectorFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_695a782f9c7823f6, a0.this$)) {}

      RealVectorFormat::RealVectorFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de8316969b81209c, a0.this$, a1.this$, a2.this$)) {}

      RealVectorFormat::RealVectorFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3420ce131d6f9e7d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::java::lang::String RealVectorFormat::format(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_459b23c8344eb314], a0.this$));
      }

      ::java::lang::StringBuffer RealVectorFormat::format(const ::org::hipparchus::linear::RealVector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_bf0c14f894c2e4a2], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > RealVectorFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_81e8fdf65840780c]));
      }

      ::java::text::NumberFormat RealVectorFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_d34e2e8dd35583a0]));
      }

      ::java::lang::String RealVectorFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_0090f7797e403f43]));
      }

      RealVectorFormat RealVectorFormat::getRealVectorFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return RealVectorFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealVectorFormat_6c214984d05c94b5]));
      }

      RealVectorFormat RealVectorFormat::getRealVectorFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealVectorFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealVectorFormat_adc9672f20fe85f0], a0.this$));
      }

      ::java::lang::String RealVectorFormat::getSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSeparator_0090f7797e403f43]));
      }

      ::java::lang::String RealVectorFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_0090f7797e403f43]));
      }

      ::org::hipparchus::linear::ArrayRealVector RealVectorFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::linear::ArrayRealVector(env->callObjectMethod(this$, mids$[mid_parse_10d2a9948714ddd3], a0.this$));
      }

      ::org::hipparchus::linear::ArrayRealVector RealVectorFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::linear::ArrayRealVector(env->callObjectMethod(this$, mids$[mid_parse_7861297daafe2b42], a0.this$, a1.this$));
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
      static PyObject *t_RealVectorFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVectorFormat_init_(t_RealVectorFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVectorFormat_format(t_RealVectorFormat *self, PyObject *args);
      static PyObject *t_RealVectorFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_RealVectorFormat_getFormat(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getPrefix(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getRealVectorFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_RealVectorFormat_getSeparator(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getSuffix(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_parse(t_RealVectorFormat *self, PyObject *args);
      static PyObject *t_RealVectorFormat_get__availableLocales(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__prefix(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__realVectorFormat(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__separator(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__suffix(t_RealVectorFormat *self, void *data);
      static PyGetSetDef t_RealVectorFormat__fields_[] = {
        DECLARE_GET_FIELD(t_RealVectorFormat, availableLocales),
        DECLARE_GET_FIELD(t_RealVectorFormat, prefix),
        DECLARE_GET_FIELD(t_RealVectorFormat, realVectorFormat),
        DECLARE_GET_FIELD(t_RealVectorFormat, separator),
        DECLARE_GET_FIELD(t_RealVectorFormat, suffix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVectorFormat__methods_[] = {
        DECLARE_METHOD(t_RealVectorFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getRealVectorFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, getSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorFormat)[] = {
        { Py_tp_methods, t_RealVectorFormat__methods_ },
        { Py_tp_init, (void *) t_RealVectorFormat_init_ },
        { Py_tp_getset, t_RealVectorFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorFormat, t_RealVectorFormat, RealVectorFormat);

      void t_RealVectorFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorFormat), &PY_TYPE_DEF(RealVectorFormat), module, "RealVectorFormat", 0);
      }

      void t_RealVectorFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "class_", make_descriptor(RealVectorFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "wrapfn_", make_descriptor(t_RealVectorFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorFormat::initializeClass, 1)))
          return NULL;
        return t_RealVectorFormat::wrap_Object(RealVectorFormat(((t_RealVectorFormat *) arg)->object.this$));
      }
      static PyObject *t_RealVectorFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVectorFormat_init_(t_RealVectorFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealVectorFormat object((jobject) NULL);

            INT_CALL(object = RealVectorFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = RealVectorFormat(a0));
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
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = RealVectorFormat(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::text::NumberFormat a3((jobject) NULL);
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = RealVectorFormat(a0, a1, a2, a3));
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

      static PyObject *t_RealVectorFormat_format(t_RealVectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealVector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealVectorFormat_getFormat(t_RealVectorFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_RealVectorFormat_getPrefix(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_getRealVectorFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealVectorFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getRealVectorFormat());
            return t_RealVectorFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            RealVectorFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getRealVectorFormat(a0));
              return t_RealVectorFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getRealVectorFormat", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_getSeparator(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparator());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_getSuffix(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_parse(t_RealVectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::linear::ArrayRealVector result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::linear::t_ArrayRealVector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::linear::ArrayRealVector result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::linear::t_ArrayRealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_get__availableLocales(t_RealVectorFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealVectorFormat_get__prefix(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_RealVectorFormat_get__realVectorFormat(t_RealVectorFormat *self, void *data)
      {
        RealVectorFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealVectorFormat());
        return t_RealVectorFormat::wrap_Object(value);
      }

      static PyObject *t_RealVectorFormat_get__separator(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparator());
        return j2p(value);
      }

      static PyObject *t_RealVectorFormat_get__suffix(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSuffix());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDetermination::class$ = NULL;
              jmethodID *AttitudeDetermination::mids$ = NULL;
              bool AttitudeDetermination::live$ = false;

              jclass AttitudeDetermination::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addSensor_4d8be7cfc38a825b] = env->getMethodID(cls, "addSensor", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor;)V");
                  mids$[mid_getAttitudeStates_ec3c84a694477494] = env->getMethodID(cls, "getAttitudeStates", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getCovarianceType_10ff8ccfa18eb164] = env->getMethodID(cls, "getCovarianceType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_getEndpoints_160aadf35481229b] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_425debac8563c8f4] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMethod_c8f5f28322e29d95] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/files/ccsds/definitions/AdMethodType;");
                  mids$[mid_getNbStates_f2f64475e4580546] = env->getMethodID(cls, "getNbStates", "()I");
                  mids$[mid_getPrevId_0090f7797e403f43] = env->getMethodID(cls, "getPrevId", "()Ljava/lang/String;");
                  mids$[mid_getRateProcessNoiseStdDev_456d9a2f64d6b28d] = env->getMethodID(cls, "getRateProcessNoiseStdDev", "()D");
                  mids$[mid_getRateStates_6a98691d179a0a11] = env->getMethodID(cls, "getRateStates", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_getSensorsUsed_a6156df500549a58] = env->getMethodID(cls, "getSensorsUsed", "()Ljava/util/List;");
                  mids$[mid_getSigmaU_456d9a2f64d6b28d] = env->getMethodID(cls, "getSigmaU", "()D");
                  mids$[mid_getSigmaV_456d9a2f64d6b28d] = env->getMethodID(cls, "getSigmaV", "()D");
                  mids$[mid_getSource_0090f7797e403f43] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                  mids$[mid_setAttitudeStates_3a0e4c42559abb2e] = env->getMethodID(cls, "setAttitudeStates", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;)V");
                  mids$[mid_setCovarianceType_f40cd56ce69cda26] = env->getMethodID(cls, "setCovarianceType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;)V");
                  mids$[mid_setEulerRotSeq_3c290f1c2c08ff0e] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setId_e939c6558ae8d313] = env->getMethodID(cls, "setId", "(Ljava/lang/String;)V");
                  mids$[mid_setMethod_01ed0efdbc98924d] = env->getMethodID(cls, "setMethod", "(Lorg/orekit/files/ccsds/definitions/AdMethodType;)V");
                  mids$[mid_setNbStates_0a2a1ac2721c0336] = env->getMethodID(cls, "setNbStates", "(I)V");
                  mids$[mid_setPrevId_e939c6558ae8d313] = env->getMethodID(cls, "setPrevId", "(Ljava/lang/String;)V");
                  mids$[mid_setRateProcessNoiseStdDev_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRateProcessNoiseStdDev", "(D)V");
                  mids$[mid_setRateStates_153f0895a658f894] = env->getMethodID(cls, "setRateStates", "(Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;)V");
                  mids$[mid_setSigmaU_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSigmaU", "(D)V");
                  mids$[mid_setSigmaV_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSigmaV", "(D)V");
                  mids$[mid_setSource_e939c6558ae8d313] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeDetermination::AttitudeDetermination() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              void AttitudeDetermination::addSensor(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addSensor_4d8be7cfc38a825b], a0.this$);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeDetermination::getAttitudeStates() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeStates_ec3c84a694477494]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeDetermination::getCovarianceType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getCovarianceType_10ff8ccfa18eb164]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AttitudeDetermination::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_160aadf35481229b]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AttitudeDetermination::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_425debac8563c8f4]));
              }

              ::java::lang::String AttitudeDetermination::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_0090f7797e403f43]));
              }

              ::org::orekit::files::ccsds::definitions::AdMethodType AttitudeDetermination::getMethod() const
              {
                return ::org::orekit::files::ccsds::definitions::AdMethodType(env->callObjectMethod(this$, mids$[mid_getMethod_c8f5f28322e29d95]));
              }

              jint AttitudeDetermination::getNbStates() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbStates_f2f64475e4580546]);
              }

              ::java::lang::String AttitudeDetermination::getPrevId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevId_0090f7797e403f43]));
              }

              jdouble AttitudeDetermination::getRateProcessNoiseStdDev() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRateProcessNoiseStdDev_456d9a2f64d6b28d]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeDetermination::getRateStates() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateStates_6a98691d179a0a11]));
              }

              ::java::util::List AttitudeDetermination::getSensorsUsed() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSensorsUsed_a6156df500549a58]));
              }

              jdouble AttitudeDetermination::getSigmaU() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSigmaU_456d9a2f64d6b28d]);
              }

              jdouble AttitudeDetermination::getSigmaV() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSigmaV_456d9a2f64d6b28d]);
              }

              ::java::lang::String AttitudeDetermination::getSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_0090f7797e403f43]));
              }

              void AttitudeDetermination::setAttitudeStates(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeStates_3a0e4c42559abb2e], a0.this$);
              }

              void AttitudeDetermination::setCovarianceType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovarianceType_f40cd56ce69cda26], a0.this$);
              }

              void AttitudeDetermination::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_3c290f1c2c08ff0e], a0.this$);
              }

              void AttitudeDetermination::setId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setId_e939c6558ae8d313], a0.this$);
              }

              void AttitudeDetermination::setMethod(const ::org::orekit::files::ccsds::definitions::AdMethodType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMethod_01ed0efdbc98924d], a0.this$);
              }

              void AttitudeDetermination::setNbStates(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbStates_0a2a1ac2721c0336], a0);
              }

              void AttitudeDetermination::setPrevId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevId_e939c6558ae8d313], a0.this$);
              }

              void AttitudeDetermination::setRateProcessNoiseStdDev(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateProcessNoiseStdDev_77e0f9a1f260e2e5], a0);
              }

              void AttitudeDetermination::setRateStates(const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateStates_153f0895a658f894], a0.this$);
              }

              void AttitudeDetermination::setSigmaU(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSigmaU_77e0f9a1f260e2e5], a0);
              }

              void AttitudeDetermination::setSigmaV(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSigmaV_77e0f9a1f260e2e5], a0);
              }

              void AttitudeDetermination::setSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSource_e939c6558ae8d313], a0.this$);
              }

              void AttitudeDetermination::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
              static PyObject *t_AttitudeDetermination_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDetermination_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeDetermination_init_(t_AttitudeDetermination *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeDetermination_addSensor(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_getAttitudeStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getCovarianceType(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getEndpoints(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getEulerRotSeq(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getId(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getMethod(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getNbStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getPrevId(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getRateProcessNoiseStdDev(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getRateStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSensorsUsed(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSigmaU(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSigmaV(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSource(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_setAttitudeStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setCovarianceType(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setEulerRotSeq(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setId(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setMethod(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setNbStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setPrevId(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setRateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setRateStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSigmaU(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSigmaV(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSource(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_validate(t_AttitudeDetermination *self, PyObject *args);
              static PyObject *t_AttitudeDetermination_get__attitudeStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__attitudeStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__covarianceType(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__covarianceType(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__endpoints(t_AttitudeDetermination *self, void *data);
              static PyObject *t_AttitudeDetermination_get__eulerRotSeq(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__eulerRotSeq(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__id(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__id(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__method(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__method(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__nbStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__nbStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__prevId(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__prevId(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__rateProcessNoiseStdDev(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__rateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__rateStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__rateStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__sensorsUsed(t_AttitudeDetermination *self, void *data);
              static PyObject *t_AttitudeDetermination_get__sigmaU(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__sigmaU(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__sigmaV(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__sigmaV(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__source(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__source(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeDetermination__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, attitudeStates),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, covarianceType),
                DECLARE_GET_FIELD(t_AttitudeDetermination, endpoints),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, eulerRotSeq),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, id),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, method),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, nbStates),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, prevId),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, rateProcessNoiseStdDev),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, rateStates),
                DECLARE_GET_FIELD(t_AttitudeDetermination, sensorsUsed),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, sigmaU),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, sigmaV),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, source),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDetermination__methods_[] = {
                DECLARE_METHOD(t_AttitudeDetermination, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDetermination, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDetermination, addSensor, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, getAttitudeStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getCovarianceType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getId, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getMethod, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getNbStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getPrevId, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getRateProcessNoiseStdDev, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getRateStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSensorsUsed, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSigmaU, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSigmaV, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSource, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, setAttitudeStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setCovarianceType, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setId, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setMethod, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setNbStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setPrevId, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setRateProcessNoiseStdDev, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setRateStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSigmaU, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSigmaV, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSource, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDetermination)[] = {
                { Py_tp_methods, t_AttitudeDetermination__methods_ },
                { Py_tp_init, (void *) t_AttitudeDetermination_init_ },
                { Py_tp_getset, t_AttitudeDetermination__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDetermination)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeDetermination, t_AttitudeDetermination, AttitudeDetermination);

              void t_AttitudeDetermination::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDetermination), &PY_TYPE_DEF(AttitudeDetermination), module, "AttitudeDetermination", 0);
              }

              void t_AttitudeDetermination::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "class_", make_descriptor(AttitudeDetermination::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "wrapfn_", make_descriptor(t_AttitudeDetermination::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeDetermination_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDetermination::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDetermination::wrap_Object(AttitudeDetermination(((t_AttitudeDetermination *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDetermination_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDetermination::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeDetermination_init_(t_AttitudeDetermination *self, PyObject *args, PyObject *kwds)
              {
                AttitudeDetermination object((jobject) NULL);

                INT_CALL(object = AttitudeDetermination());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeDetermination_addSensor(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addSensor(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addSensor", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_getAttitudeStates(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getCovarianceType(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getEndpoints(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getEulerRotSeq(t_AttitudeDetermination *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getId(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_getMethod(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType result((jobject) NULL);
                OBJ_CALL(result = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_AdMethodType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getNbStates(t_AttitudeDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbStates());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeDetermination_getPrevId(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrevId());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_getRateProcessNoiseStdDev(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getRateProcessNoiseStdDev());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getRateStates(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getRateStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getSensorsUsed(t_AttitudeDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensorsUsed());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeDeterminationSensor));
              }

              static PyObject *t_AttitudeDetermination_getSigmaU(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSigmaU());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getSigmaV(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSigmaV());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getSource(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSource());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_setAttitudeStates(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setAttitudeStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setCovarianceType(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_))
                {
                  OBJ_CALL(self->object.setCovarianceType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovarianceType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setEulerRotSeq(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(self->object.setEulerRotSeq(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEulerRotSeq", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setId(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setId", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setMethod(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::AdMethodType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_AdMethodType::parameters_))
                {
                  OBJ_CALL(self->object.setMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMethod", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setNbStates(t_AttitudeDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNbStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNbStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setPrevId(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrevId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrevId", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setRateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setRateProcessNoiseStdDev(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateProcessNoiseStdDev", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setRateStates(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setRateStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSigmaU(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSigmaU(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSigmaU", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSigmaV(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSigmaV(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSigmaV", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSource(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSource", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_validate(t_AttitudeDetermination *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeDetermination), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeDetermination_get__attitudeStates(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__attitudeStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAttitudeStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__covarianceType(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__covarianceType(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovarianceType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covarianceType", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__endpoints(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AttitudeDetermination_get__eulerRotSeq(t_AttitudeDetermination *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__eulerRotSeq(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEulerRotSeq(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eulerRotSeq", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__id(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__id(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "id", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__method(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_AdMethodType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__method(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::AdMethodType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::AdMethodType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "method", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__nbStates(t_AttitudeDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbStates());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeDetermination_set__nbStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNbStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nbStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__prevId(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrevId());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__prevId(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrevId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prevId", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__rateProcessNoiseStdDev(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getRateProcessNoiseStdDev());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__rateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setRateProcessNoiseStdDev(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateProcessNoiseStdDev", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__rateStates(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getRateStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__rateStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setRateStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__sensorsUsed(t_AttitudeDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensorsUsed());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeDetermination_get__sigmaU(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSigmaU());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__sigmaU(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSigmaU(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sigmaU", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__sigmaV(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSigmaV());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__sigmaV(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSigmaV(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sigmaV", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__source(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSource());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__source(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "source", arg);
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
#include "org/orekit/frames/LOFType.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LOFType::class$ = NULL;
      jmethodID *LOFType::mids$ = NULL;
      bool LOFType::live$ = false;
      LOFType *LOFType::EQW = NULL;
      LOFType *LOFType::LVLH = NULL;
      LOFType *LOFType::LVLH_CCSDS = NULL;
      LOFType *LOFType::LVLH_CCSDS_INERTIAL = NULL;
      LOFType *LOFType::LVLH_INERTIAL = NULL;
      LOFType *LOFType::NTW = NULL;
      LOFType *LOFType::NTW_INERTIAL = NULL;
      LOFType *LOFType::QSW = NULL;
      LOFType *LOFType::QSW_INERTIAL = NULL;
      LOFType *LOFType::TNW = NULL;
      LOFType *LOFType::TNW_INERTIAL = NULL;
      LOFType *LOFType::VNC = NULL;
      LOFType *LOFType::VNC_INERTIAL = NULL;
      LOFType *LOFType::VVLH = NULL;
      LOFType *LOFType::VVLH_INERTIAL = NULL;

      jclass LOFType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LOFType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_rotationFromInertial_9a23f79cd11b74e7] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_95b12e29918a648c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_f3b8fc53bbbd7a0a] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromInertial_346e8a02c9c839ea] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOF_72077ab30cf19a5b] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/orekit/frames/LOFType;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOF_35680e58f06f0cf2] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOFType;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toOrbitRelativeFrame_e2b586b2f9e79328] = env->getMethodID(cls, "toOrbitRelativeFrame", "()Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
          mids$[mid_valueOf_636332e1f4b06249] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/LOFType;");
          mids$[mid_values_9d808571dd8d739b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/LOFType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EQW = new LOFType(env->getStaticObjectField(cls, "EQW", "Lorg/orekit/frames/LOFType;"));
          LVLH = new LOFType(env->getStaticObjectField(cls, "LVLH", "Lorg/orekit/frames/LOFType;"));
          LVLH_CCSDS = new LOFType(env->getStaticObjectField(cls, "LVLH_CCSDS", "Lorg/orekit/frames/LOFType;"));
          LVLH_CCSDS_INERTIAL = new LOFType(env->getStaticObjectField(cls, "LVLH_CCSDS_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          LVLH_INERTIAL = new LOFType(env->getStaticObjectField(cls, "LVLH_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          NTW = new LOFType(env->getStaticObjectField(cls, "NTW", "Lorg/orekit/frames/LOFType;"));
          NTW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "NTW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          QSW = new LOFType(env->getStaticObjectField(cls, "QSW", "Lorg/orekit/frames/LOFType;"));
          QSW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "QSW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          TNW = new LOFType(env->getStaticObjectField(cls, "TNW", "Lorg/orekit/frames/LOFType;"));
          TNW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "TNW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          VNC = new LOFType(env->getStaticObjectField(cls, "VNC", "Lorg/orekit/frames/LOFType;"));
          VNC_INERTIAL = new LOFType(env->getStaticObjectField(cls, "VNC_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          VVLH = new LOFType(env->getStaticObjectField(cls, "VVLH", "Lorg/orekit/frames/LOFType;"));
          VVLH_INERTIAL = new LOFType(env->getStaticObjectField(cls, "VVLH_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LOFType::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_9a23f79cd11b74e7], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_95b12e29918a648c], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_f3b8fc53bbbd7a0a], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_346e8a02c9c839ea], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromLOF(const LOFType & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_72077ab30cf19a5b], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromLOF(const ::org::hipparchus::Field & a0, const LOFType & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_35680e58f06f0cf2], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame LOFType::toOrbitRelativeFrame() const
      {
        return ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame(env->callObjectMethod(this$, mids$[mid_toOrbitRelativeFrame_e2b586b2f9e79328]));
      }

      LOFType LOFType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LOFType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_636332e1f4b06249], a0.this$));
      }

      JArray< LOFType > LOFType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LOFType >(env->callStaticObjectMethod(cls, mids$[mid_values_9d808571dd8d739b]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_LOFType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOFType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOFType_of_(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_getName(t_LOFType *self);
      static PyObject *t_LOFType_rotationFromInertial(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_rotationFromLOF(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_toOrbitRelativeFrame(t_LOFType *self);
      static PyObject *t_LOFType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOFType_values(PyTypeObject *type);
      static PyObject *t_LOFType_get__name(t_LOFType *self, void *data);
      static PyObject *t_LOFType_get__parameters_(t_LOFType *self, void *data);
      static PyGetSetDef t_LOFType__fields_[] = {
        DECLARE_GET_FIELD(t_LOFType, name),
        DECLARE_GET_FIELD(t_LOFType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LOFType__methods_[] = {
        DECLARE_METHOD(t_LOFType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOFType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOFType, of_, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, getName, METH_NOARGS),
        DECLARE_METHOD(t_LOFType, rotationFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, rotationFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, toOrbitRelativeFrame, METH_NOARGS),
        DECLARE_METHOD(t_LOFType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LOFType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LOFType)[] = {
        { Py_tp_methods, t_LOFType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LOFType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LOFType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LOFType, t_LOFType, LOFType);
      PyObject *t_LOFType::wrap_Object(const LOFType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LOFType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LOFType *self = (t_LOFType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LOFType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LOFType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LOFType *self = (t_LOFType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LOFType::install(PyObject *module)
      {
        installType(&PY_TYPE(LOFType), &PY_TYPE_DEF(LOFType), module, "LOFType", 0);
      }

      void t_LOFType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "class_", make_descriptor(LOFType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "wrapfn_", make_descriptor(t_LOFType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "boxfn_", make_descriptor(boxObject));
        env->getClass(LOFType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "EQW", make_descriptor(t_LOFType::wrap_Object(*LOFType::EQW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_CCSDS", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_CCSDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_CCSDS_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_CCSDS_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "NTW", make_descriptor(t_LOFType::wrap_Object(*LOFType::NTW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "NTW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::NTW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "QSW", make_descriptor(t_LOFType::wrap_Object(*LOFType::QSW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "QSW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::QSW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "TNW", make_descriptor(t_LOFType::wrap_Object(*LOFType::TNW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "TNW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::TNW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VNC", make_descriptor(t_LOFType::wrap_Object(*LOFType::VNC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VNC_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::VNC_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VVLH", make_descriptor(t_LOFType::wrap_Object(*LOFType::VVLH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VVLH_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::VVLH_INERTIAL)));
      }

      static PyObject *t_LOFType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LOFType::initializeClass, 1)))
          return NULL;
        return t_LOFType::wrap_Object(LOFType(((t_LOFType *) arg)->object.this$));
      }
      static PyObject *t_LOFType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LOFType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LOFType_of_(t_LOFType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LOFType_getName(t_LOFType *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LOFType_rotationFromInertial(t_LOFType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
        return NULL;
      }

      static PyObject *t_LOFType_rotationFromLOF(t_LOFType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            LOFType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "Kk", LOFType::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, t_LOFType::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOFType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, LOFType::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, t_LOFType::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOFType_toOrbitRelativeFrame(t_LOFType *self)
      {
        ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.toOrbitRelativeFrame());
        return ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::wrap_Object(result);
      }

      static PyObject *t_LOFType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LOFType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::LOFType::valueOf(a0));
          return t_LOFType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LOFType_values(PyTypeObject *type)
      {
        JArray< LOFType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::LOFType::values());
        return JArray<jobject>(result.this$).wrap(t_LOFType::wrap_jobject);
      }
      static PyObject *t_LOFType_get__parameters_(t_LOFType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LOFType_get__name(t_LOFType *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTJ2SquaredClosedFormContext::class$ = NULL;
            jmethodID *DSSTJ2SquaredClosedFormContext::mids$ = NULL;
            bool DSSTJ2SquaredClosedFormContext::live$ = false;

            jclass DSSTJ2SquaredClosedFormContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c806627826c0aecb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getA4_456d9a2f64d6b28d] = env->getMethodID(cls, "getA4", "()D");
                mids$[mid_getAlpha4_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlpha4", "()D");
                mids$[mid_getC_456d9a2f64d6b28d] = env->getMethodID(cls, "getC", "()D");
                mids$[mid_getEta_456d9a2f64d6b28d] = env->getMethodID(cls, "getEta", "()D");
                mids$[mid_getS2_456d9a2f64d6b28d] = env->getMethodID(cls, "getS2", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTJ2SquaredClosedFormContext::DSSTJ2SquaredClosedFormContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_c806627826c0aecb, a0.this$, a1.this$)) {}

            jdouble DSSTJ2SquaredClosedFormContext::getA4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA4_456d9a2f64d6b28d]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getAlpha4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha4_456d9a2f64d6b28d]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getC_456d9a2f64d6b28d]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getEta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEta_456d9a2f64d6b28d]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getS2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS2_456d9a2f64d6b28d]);
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
            static PyObject *t_DSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTJ2SquaredClosedFormContext_init_(t_DSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getA4(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getAlpha4(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getC(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getEta(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getS2(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__a4(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__alpha4(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__c(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__eta(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__s2(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyGetSetDef t_DSSTJ2SquaredClosedFormContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, a4),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, alpha4),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, c),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, eta),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, s2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTJ2SquaredClosedFormContext__methods_[] = {
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getA4, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getAlpha4, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getC, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getEta, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getS2, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTJ2SquaredClosedFormContext)[] = {
              { Py_tp_methods, t_DSSTJ2SquaredClosedFormContext__methods_ },
              { Py_tp_init, (void *) t_DSSTJ2SquaredClosedFormContext_init_ },
              { Py_tp_getset, t_DSSTJ2SquaredClosedFormContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTJ2SquaredClosedFormContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTJ2SquaredClosedFormContext, t_DSSTJ2SquaredClosedFormContext, DSSTJ2SquaredClosedFormContext);

            void t_DSSTJ2SquaredClosedFormContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTJ2SquaredClosedFormContext), &PY_TYPE_DEF(DSSTJ2SquaredClosedFormContext), module, "DSSTJ2SquaredClosedFormContext", 0);
            }

            void t_DSSTJ2SquaredClosedFormContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedFormContext), "class_", make_descriptor(DSSTJ2SquaredClosedFormContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedFormContext), "wrapfn_", make_descriptor(t_DSSTJ2SquaredClosedFormContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedFormContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTJ2SquaredClosedFormContext::initializeClass, 1)))
                return NULL;
              return t_DSSTJ2SquaredClosedFormContext::wrap_Object(DSSTJ2SquaredClosedFormContext(((t_DSSTJ2SquaredClosedFormContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTJ2SquaredClosedFormContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTJ2SquaredClosedFormContext_init_(t_DSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              DSSTJ2SquaredClosedFormContext object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTJ2SquaredClosedFormContext(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getA4(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getA4());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getAlpha4(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha4());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getC(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getEta(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getEta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getS2(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getS2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__a4(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getA4());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__alpha4(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha4());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__c(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__eta(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getEta());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__s2(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getS2());
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
#include "org/hipparchus/complex/ComplexComparator.h"
#include "java/io/Serializable.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexComparator::class$ = NULL;
      jmethodID *ComplexComparator::mids$ = NULL;
      bool ComplexComparator::live$ = false;

      jclass ComplexComparator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexComparator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_98b795d52300754d] = env->getMethodID(cls, "compare", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexComparator::ComplexComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      jint ComplexComparator::compare(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_98b795d52300754d], a0.this$, a1.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_ComplexComparator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexComparator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexComparator_init_(t_ComplexComparator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexComparator_compare(t_ComplexComparator *self, PyObject *args);

      static PyMethodDef t_ComplexComparator__methods_[] = {
        DECLARE_METHOD(t_ComplexComparator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexComparator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexComparator, compare, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexComparator)[] = {
        { Py_tp_methods, t_ComplexComparator__methods_ },
        { Py_tp_init, (void *) t_ComplexComparator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexComparator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexComparator, t_ComplexComparator, ComplexComparator);

      void t_ComplexComparator::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexComparator), &PY_TYPE_DEF(ComplexComparator), module, "ComplexComparator", 0);
      }

      void t_ComplexComparator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexComparator), "class_", make_descriptor(ComplexComparator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexComparator), "wrapfn_", make_descriptor(t_ComplexComparator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexComparator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexComparator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexComparator::initializeClass, 1)))
          return NULL;
        return t_ComplexComparator::wrap_Object(ComplexComparator(((t_ComplexComparator *) arg)->object.this$));
      }
      static PyObject *t_ComplexComparator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexComparator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexComparator_init_(t_ComplexComparator *self, PyObject *args, PyObject *kwds)
      {
        ComplexComparator object((jobject) NULL);

        INT_CALL(object = ComplexComparator());
        self->object = object;

        return 0;
      }

      static PyObject *t_ComplexComparator_compare(t_ComplexComparator *self, PyObject *args)
      {
        ::org::hipparchus::complex::Complex a0((jobject) NULL);
        ::org::hipparchus::complex::Complex a1((jobject) NULL);
        jint result;

        if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.compare(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compare", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *NaNStrategy::class$ = NULL;
        jmethodID *NaNStrategy::mids$ = NULL;
        bool NaNStrategy::live$ = false;
        NaNStrategy *NaNStrategy::FAILED = NULL;
        NaNStrategy *NaNStrategy::FIXED = NULL;
        NaNStrategy *NaNStrategy::MAXIMAL = NULL;
        NaNStrategy *NaNStrategy::MINIMAL = NULL;
        NaNStrategy *NaNStrategy::REMOVED = NULL;

        jclass NaNStrategy::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/NaNStrategy");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_fb3d0e097119eac2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/ranking/NaNStrategy;");
            mids$[mid_values_a5af87edf0a7e54f] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/ranking/NaNStrategy;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            FAILED = new NaNStrategy(env->getStaticObjectField(cls, "FAILED", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            FIXED = new NaNStrategy(env->getStaticObjectField(cls, "FIXED", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            MAXIMAL = new NaNStrategy(env->getStaticObjectField(cls, "MAXIMAL", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            MINIMAL = new NaNStrategy(env->getStaticObjectField(cls, "MINIMAL", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            REMOVED = new NaNStrategy(env->getStaticObjectField(cls, "REMOVED", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NaNStrategy NaNStrategy::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return NaNStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fb3d0e097119eac2], a0.this$));
        }

        JArray< NaNStrategy > NaNStrategy::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< NaNStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_a5af87edf0a7e54f]));
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
      namespace ranking {
        static PyObject *t_NaNStrategy_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NaNStrategy_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NaNStrategy_of_(t_NaNStrategy *self, PyObject *args);
        static PyObject *t_NaNStrategy_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_NaNStrategy_values(PyTypeObject *type);
        static PyObject *t_NaNStrategy_get__parameters_(t_NaNStrategy *self, void *data);
        static PyGetSetDef t_NaNStrategy__fields_[] = {
          DECLARE_GET_FIELD(t_NaNStrategy, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NaNStrategy__methods_[] = {
          DECLARE_METHOD(t_NaNStrategy, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaNStrategy, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaNStrategy, of_, METH_VARARGS),
          DECLARE_METHOD(t_NaNStrategy, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_NaNStrategy, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NaNStrategy)[] = {
          { Py_tp_methods, t_NaNStrategy__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_NaNStrategy__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NaNStrategy)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(NaNStrategy, t_NaNStrategy, NaNStrategy);
        PyObject *t_NaNStrategy::wrap_Object(const NaNStrategy& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NaNStrategy::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NaNStrategy *self = (t_NaNStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NaNStrategy::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NaNStrategy::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NaNStrategy *self = (t_NaNStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NaNStrategy::install(PyObject *module)
        {
          installType(&PY_TYPE(NaNStrategy), &PY_TYPE_DEF(NaNStrategy), module, "NaNStrategy", 0);
        }

        void t_NaNStrategy::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "class_", make_descriptor(NaNStrategy::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "wrapfn_", make_descriptor(t_NaNStrategy::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "boxfn_", make_descriptor(boxObject));
          env->getClass(NaNStrategy::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "FAILED", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::FAILED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "FIXED", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::FIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "MAXIMAL", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::MAXIMAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "MINIMAL", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::MINIMAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "REMOVED", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::REMOVED)));
        }

        static PyObject *t_NaNStrategy_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NaNStrategy::initializeClass, 1)))
            return NULL;
          return t_NaNStrategy::wrap_Object(NaNStrategy(((t_NaNStrategy *) arg)->object.this$));
        }
        static PyObject *t_NaNStrategy_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NaNStrategy::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NaNStrategy_of_(t_NaNStrategy *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_NaNStrategy_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          NaNStrategy result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::ranking::NaNStrategy::valueOf(a0));
            return t_NaNStrategy::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_NaNStrategy_values(PyTypeObject *type)
        {
          JArray< NaNStrategy > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::ranking::NaNStrategy::values());
          return JArray<jobject>(result.this$).wrap(t_NaNStrategy::wrap_jobject);
        }
        static PyObject *t_NaNStrategy_get__parameters_(t_NaNStrategy *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *RelativisticClockInterSatellitesPhaseModifier::mids$ = NULL;
          bool RelativisticClockInterSatellitesPhaseModifier::live$ = false;

          jclass RelativisticClockInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockInterSatellitesPhaseModifier::RelativisticClockInterSatellitesPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::java::util::List RelativisticClockInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void RelativisticClockInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
        namespace modifiers {
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockInterSatellitesPhaseModifier_init_(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticClockInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticClockInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockInterSatellitesPhaseModifier, t_RelativisticClockInterSatellitesPhaseModifier, RelativisticClockInterSatellitesPhaseModifier);

          void t_RelativisticClockInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), &PY_TYPE_DEF(RelativisticClockInterSatellitesPhaseModifier), module, "RelativisticClockInterSatellitesPhaseModifier", 0);
          }

          void t_RelativisticClockInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "class_", make_descriptor(RelativisticClockInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticClockInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockInterSatellitesPhaseModifier::wrap_Object(RelativisticClockInterSatellitesPhaseModifier(((t_RelativisticClockInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockInterSatellitesPhaseModifier_init_(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockInterSatellitesPhaseModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockInterSatellitesPhaseModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self, void *data)
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
#include "org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *AbstractManeuverTriggers::class$ = NULL;
          jmethodID *AbstractManeuverTriggers::mids$ = NULL;
          bool AbstractManeuverTriggers::live$ = false;

          jclass AbstractManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addResetter_c5c7f3f3d4c4bba2] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_17ab38b8d22d6651] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_getFirings_afbf756dd3c251fe] = env->getMethodID(cls, "getFirings", "()Lorg/orekit/utils/TimeSpanMap;");
              mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_isFiring_b230552293273e68] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_80ee6edc2471fed7] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");
              mids$[mid_initializeResetters_3d13474d79f5e7bc] = env->getMethodID(cls, "initializeResetters", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_initializeResetters_acdd8180a5dc1a8d] = env->getMethodID(cls, "initializeResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_notifyResetters_c76342d42407aa3d] = env->getMethodID(cls, "notifyResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_notifyResetters_9658cf3eaef14ef5] = env->getMethodID(cls, "notifyResetters", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_applyResetters_81fc6fb6078d2aa7] = env->getMethodID(cls, "applyResetters", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_applyResetters_db7b9ef879f5b135] = env->getMethodID(cls, "applyResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_isFiringOnInitialState_795d7e54d4c58d83] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractManeuverTriggers::addResetter(const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_c5c7f3f3d4c4bba2], a0.this$);
          }

          void AbstractManeuverTriggers::addResetter(const ::org::hipparchus::Field & a0, const ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_17ab38b8d22d6651], a0.this$, a1.this$);
          }

          ::org::orekit::utils::TimeSpanMap AbstractManeuverTriggers::getFirings() const
          {
            return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getFirings_afbf756dd3c251fe]));
          }

          void AbstractManeuverTriggers::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
          }

          void AbstractManeuverTriggers::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
          }

          jboolean AbstractManeuverTriggers::isFiring(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_b230552293273e68], a0.this$, a1.this$);
          }

          jboolean AbstractManeuverTriggers::isFiring(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_80ee6edc2471fed7], a0.this$, a1.this$);
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
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_AbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractManeuverTriggers_addResetter(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_getFirings(t_AbstractManeuverTriggers *self);
          static PyObject *t_AbstractManeuverTriggers_init(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_isFiring(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_get__firings(t_AbstractManeuverTriggers *self, void *data);
          static PyGetSetDef t_AbstractManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractManeuverTriggers, firings),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_AbstractManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, addResetter, METH_VARARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, getFirings, METH_NOARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, init, METH_VARARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, isFiring, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractManeuverTriggers)[] = {
            { Py_tp_methods, t_AbstractManeuverTriggers__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractManeuverTriggers)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractManeuverTriggers, t_AbstractManeuverTriggers, AbstractManeuverTriggers);

          void t_AbstractManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractManeuverTriggers), &PY_TYPE_DEF(AbstractManeuverTriggers), module, "AbstractManeuverTriggers", 0);
          }

          void t_AbstractManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "class_", make_descriptor(AbstractManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "wrapfn_", make_descriptor(t_AbstractManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_AbstractManeuverTriggers::wrap_Object(AbstractManeuverTriggers(((t_AbstractManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_AbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractManeuverTriggers_addResetter(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addResetter(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::parameters_))
                {
                  OBJ_CALL(self->object.addResetter(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addResetter", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_getFirings(t_AbstractManeuverTriggers *self)
          {
            ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFirings());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(Boolean));
          }

          static PyObject *t_AbstractManeuverTriggers_init(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_isFiring(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "isFiring", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_get__firings(t_AbstractManeuverTriggers *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFirings());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryState::class$ = NULL;
              jmethodID *TrajectoryState::mids$ = NULL;
              bool TrajectoryState::live$ = false;

              jclass TrajectoryState::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_555a8c2f3364fe15] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/time/AbsoluteDate;[D)V");
                  mids$[mid_init$_05ae99dd5376ef2f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;ILjava/util/List;)V");
                  mids$[mid_getAvailableDerivatives_237181d932324188] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getElements_7cdc325af0834901] = env->getMethodID(cls, "getElements", "()[D");
                  mids$[mid_getType_89f4b16f0349faa4] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_toCartesian_933d5fd77d5f8558] = env->getMethodID(cls, "toCartesian", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)Lorg/orekit/utils/TimeStampedPVCoordinates;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryState::TrajectoryState(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_555a8c2f3364fe15, a0.this$, a1.this$, a2.this$)) {}

              TrajectoryState::TrajectoryState(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< ::java::lang::String > & a2, jint a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_05ae99dd5376ef2f, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

              ::org::orekit::utils::CartesianDerivativesFilter TrajectoryState::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_237181d932324188]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryState::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
              }

              JArray< jdouble > TrajectoryState::getElements() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_7cdc325af0834901]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType TrajectoryState::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getType_89f4b16f0349faa4]));
              }

              ::org::orekit::utils::TimeStampedPVCoordinates TrajectoryState::toCartesian(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toCartesian_933d5fd77d5f8558], a0.this$, a1));
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
              static PyObject *t_TrajectoryState_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryState_instance_(PyTypeObject *type, PyObject *arg);
              static int t_TrajectoryState_init_(t_TrajectoryState *self, PyObject *args, PyObject *kwds);
              static PyObject *t_TrajectoryState_getAvailableDerivatives(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getDate(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getElements(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getType(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_toCartesian(t_TrajectoryState *self, PyObject *args);
              static PyObject *t_TrajectoryState_get__availableDerivatives(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__date(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__elements(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__type(t_TrajectoryState *self, void *data);
              static PyGetSetDef t_TrajectoryState__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryState, availableDerivatives),
                DECLARE_GET_FIELD(t_TrajectoryState, date),
                DECLARE_GET_FIELD(t_TrajectoryState, elements),
                DECLARE_GET_FIELD(t_TrajectoryState, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryState__methods_[] = {
                DECLARE_METHOD(t_TrajectoryState, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryState, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryState, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getDate, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getElements, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getType, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, toCartesian, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryState)[] = {
                { Py_tp_methods, t_TrajectoryState__methods_ },
                { Py_tp_init, (void *) t_TrajectoryState_init_ },
                { Py_tp_getset, t_TrajectoryState__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryState)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(TrajectoryState, t_TrajectoryState, TrajectoryState);

              void t_TrajectoryState::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryState), &PY_TYPE_DEF(TrajectoryState), module, "TrajectoryState", 0);
              }

              void t_TrajectoryState::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "class_", make_descriptor(TrajectoryState::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "wrapfn_", make_descriptor(t_TrajectoryState::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_TrajectoryState_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryState::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryState::wrap_Object(TrajectoryState(((t_TrajectoryState *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryState_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryState::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_TrajectoryState_init_(t_TrajectoryState *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 3:
                  {
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                    JArray< jdouble > a2((jobject) NULL);
                    TrajectoryState object((jobject) NULL);

                    if (!parseArgs(args, "Kk[D", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_, &a1, &a2))
                    {
                      INT_CALL(object = TrajectoryState(a0, a1, a2));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 5:
                  {
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                    JArray< ::java::lang::String > a2((jobject) NULL);
                    jint a3;
                    ::java::util::List a4((jobject) NULL);
                    PyTypeObject **p4;
                    TrajectoryState object((jobject) NULL);

                    if (!parseArgs(args, "Kk[sIK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
                    {
                      INT_CALL(object = TrajectoryState(a0, a1, a2, a3, a4));
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

              static PyObject *t_TrajectoryState_getAvailableDerivatives(t_TrajectoryState *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_getDate(t_TrajectoryState *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_getElements(t_TrajectoryState *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getElements());
                return result.wrap();
              }

              static PyObject *t_TrajectoryState_getType(t_TrajectoryState *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_toCartesian(t_TrajectoryState *self, PyObject *args)
              {
                ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
                jdouble a1;
                ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.toCartesian(a0, a1));
                  return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toCartesian", args);
                return NULL;
              }

              static PyObject *t_TrajectoryState_get__availableDerivatives(t_TrajectoryState *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_TrajectoryState_get__date(t_TrajectoryState *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryState_get__elements(t_TrajectoryState *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getElements());
                return value.wrap();
              }

              static PyObject *t_TrajectoryState_get__type(t_TrajectoryState *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
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
#include "org/orekit/propagation/events/FootprintOverlapDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/propagation/events/FootprintOverlapDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FootprintOverlapDetector::class$ = NULL;
        jmethodID *FootprintOverlapDetector::mids$ = NULL;
        bool FootprintOverlapDetector::live$ = false;

        jclass FootprintOverlapDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FootprintOverlapDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_244c55273fe6bb9d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/geometry/fov/FieldOfView;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_883d26889ee03ca8] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_getFOV_f51bf66c035a133c] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getZone_b554ba4417ec0cb0] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_create_77e4d91b625a79d6] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FootprintOverlapDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FootprintOverlapDetector::FootprintOverlapDetector(const ::org::orekit::geometry::fov::FieldOfView & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_244c55273fe6bb9d, a0.this$, a1.this$, a2.this$, a3)) {}

        jdouble FootprintOverlapDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::bodies::BodyShape FootprintOverlapDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_883d26889ee03ca8]));
        }

        ::org::orekit::geometry::fov::FieldOfView FootprintOverlapDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_f51bf66c035a133c]));
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet FootprintOverlapDetector::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_b554ba4417ec0cb0]));
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
        static PyObject *t_FootprintOverlapDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FootprintOverlapDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FootprintOverlapDetector_of_(t_FootprintOverlapDetector *self, PyObject *args);
        static int t_FootprintOverlapDetector_init_(t_FootprintOverlapDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FootprintOverlapDetector_g(t_FootprintOverlapDetector *self, PyObject *args);
        static PyObject *t_FootprintOverlapDetector_getBody(t_FootprintOverlapDetector *self);
        static PyObject *t_FootprintOverlapDetector_getFOV(t_FootprintOverlapDetector *self);
        static PyObject *t_FootprintOverlapDetector_getZone(t_FootprintOverlapDetector *self);
        static PyObject *t_FootprintOverlapDetector_get__body(t_FootprintOverlapDetector *self, void *data);
        static PyObject *t_FootprintOverlapDetector_get__fOV(t_FootprintOverlapDetector *self, void *data);
        static PyObject *t_FootprintOverlapDetector_get__zone(t_FootprintOverlapDetector *self, void *data);
        static PyObject *t_FootprintOverlapDetector_get__parameters_(t_FootprintOverlapDetector *self, void *data);
        static PyGetSetDef t_FootprintOverlapDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, body),
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, fOV),
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, zone),
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FootprintOverlapDetector__methods_[] = {
          DECLARE_METHOD(t_FootprintOverlapDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FootprintOverlapDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FootprintOverlapDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, getFOV, METH_NOARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, getZone, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FootprintOverlapDetector)[] = {
          { Py_tp_methods, t_FootprintOverlapDetector__methods_ },
          { Py_tp_init, (void *) t_FootprintOverlapDetector_init_ },
          { Py_tp_getset, t_FootprintOverlapDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FootprintOverlapDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(FootprintOverlapDetector, t_FootprintOverlapDetector, FootprintOverlapDetector);
        PyObject *t_FootprintOverlapDetector::wrap_Object(const FootprintOverlapDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FootprintOverlapDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FootprintOverlapDetector *self = (t_FootprintOverlapDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FootprintOverlapDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FootprintOverlapDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FootprintOverlapDetector *self = (t_FootprintOverlapDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FootprintOverlapDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FootprintOverlapDetector), &PY_TYPE_DEF(FootprintOverlapDetector), module, "FootprintOverlapDetector", 0);
        }

        void t_FootprintOverlapDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FootprintOverlapDetector), "class_", make_descriptor(FootprintOverlapDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FootprintOverlapDetector), "wrapfn_", make_descriptor(t_FootprintOverlapDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FootprintOverlapDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FootprintOverlapDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FootprintOverlapDetector::initializeClass, 1)))
            return NULL;
          return t_FootprintOverlapDetector::wrap_Object(FootprintOverlapDetector(((t_FootprintOverlapDetector *) arg)->object.this$));
        }
        static PyObject *t_FootprintOverlapDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FootprintOverlapDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FootprintOverlapDetector_of_(t_FootprintOverlapDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FootprintOverlapDetector_init_(t_FootprintOverlapDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::geometry::fov::FieldOfView a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble a3;
          FootprintOverlapDetector object((jobject) NULL);

          if (!parseArgs(args, "kkKD", ::org::orekit::geometry::fov::FieldOfView::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a3))
          {
            INT_CALL(object = FootprintOverlapDetector(a0, a1, a2, a3));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FootprintOverlapDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FootprintOverlapDetector_g(t_FootprintOverlapDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FootprintOverlapDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FootprintOverlapDetector_getBody(t_FootprintOverlapDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }

        static PyObject *t_FootprintOverlapDetector_getFOV(t_FootprintOverlapDetector *self)
        {
          ::org::orekit::geometry::fov::FieldOfView result((jobject) NULL);
          OBJ_CALL(result = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(result);
        }

        static PyObject *t_FootprintOverlapDetector_getZone(t_FootprintOverlapDetector *self)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
        }
        static PyObject *t_FootprintOverlapDetector_get__parameters_(t_FootprintOverlapDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FootprintOverlapDetector_get__body(t_FootprintOverlapDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }

        static PyObject *t_FootprintOverlapDetector_get__fOV(t_FootprintOverlapDetector *self, void *data)
        {
          ::org::orekit::geometry::fov::FieldOfView value((jobject) NULL);
          OBJ_CALL(value = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(value);
        }

        static PyObject *t_FootprintOverlapDetector_get__zone(t_FootprintOverlapDetector *self, void *data)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(value);
        }
      }
    }
  }
}
