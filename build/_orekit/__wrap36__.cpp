#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/AstronomicalAmplitudeReader.h"
#include "java/util/Map.h"
#include "java/io/IOException.h"
#include "java/lang/Integer.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *AstronomicalAmplitudeReader::class$ = NULL;
          jmethodID *AstronomicalAmplitudeReader::mids$ = NULL;
          bool AstronomicalAmplitudeReader::live$ = false;

          jclass AstronomicalAmplitudeReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/AstronomicalAmplitudeReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_adf8b4a2b16bfd9e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIID)V");
              mids$[mid_getAstronomicalAmplitudesMap_6f5a75ccd8c04465] = env->getMethodID(cls, "getAstronomicalAmplitudesMap", "()Ljava/util/Map;");
              mids$[mid_getSupportedNames_11b109bd155ca898] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_stillAcceptsData_b108b35ef48e27bd] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AstronomicalAmplitudeReader::AstronomicalAmplitudeReader(const ::java::lang::String & a0, jint a1, jint a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_adf8b4a2b16bfd9e, a0.this$, a1, a2, a3, a4)) {}

          ::java::util::Map AstronomicalAmplitudeReader::getAstronomicalAmplitudesMap() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getAstronomicalAmplitudesMap_6f5a75ccd8c04465]));
          }

          ::java::lang::String AstronomicalAmplitudeReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_11b109bd155ca898]));
          }

          void AstronomicalAmplitudeReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
          }

          jboolean AstronomicalAmplitudeReader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_b108b35ef48e27bd]);
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
      namespace gravity {
        namespace potential {
          static PyObject *t_AstronomicalAmplitudeReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AstronomicalAmplitudeReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AstronomicalAmplitudeReader_init_(t_AstronomicalAmplitudeReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AstronomicalAmplitudeReader_getAstronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_getSupportedNames(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_loadData(t_AstronomicalAmplitudeReader *self, PyObject *args);
          static PyObject *t_AstronomicalAmplitudeReader_stillAcceptsData(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_get__astronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self, void *data);
          static PyObject *t_AstronomicalAmplitudeReader_get__supportedNames(t_AstronomicalAmplitudeReader *self, void *data);
          static PyGetSetDef t_AstronomicalAmplitudeReader__fields_[] = {
            DECLARE_GET_FIELD(t_AstronomicalAmplitudeReader, astronomicalAmplitudesMap),
            DECLARE_GET_FIELD(t_AstronomicalAmplitudeReader, supportedNames),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AstronomicalAmplitudeReader__methods_[] = {
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, getAstronomicalAmplitudesMap, METH_NOARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AstronomicalAmplitudeReader)[] = {
            { Py_tp_methods, t_AstronomicalAmplitudeReader__methods_ },
            { Py_tp_init, (void *) t_AstronomicalAmplitudeReader_init_ },
            { Py_tp_getset, t_AstronomicalAmplitudeReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AstronomicalAmplitudeReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AstronomicalAmplitudeReader, t_AstronomicalAmplitudeReader, AstronomicalAmplitudeReader);

          void t_AstronomicalAmplitudeReader::install(PyObject *module)
          {
            installType(&PY_TYPE(AstronomicalAmplitudeReader), &PY_TYPE_DEF(AstronomicalAmplitudeReader), module, "AstronomicalAmplitudeReader", 0);
          }

          void t_AstronomicalAmplitudeReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "class_", make_descriptor(AstronomicalAmplitudeReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "wrapfn_", make_descriptor(t_AstronomicalAmplitudeReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AstronomicalAmplitudeReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AstronomicalAmplitudeReader::initializeClass, 1)))
              return NULL;
            return t_AstronomicalAmplitudeReader::wrap_Object(AstronomicalAmplitudeReader(((t_AstronomicalAmplitudeReader *) arg)->object.this$));
          }
          static PyObject *t_AstronomicalAmplitudeReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AstronomicalAmplitudeReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AstronomicalAmplitudeReader_init_(t_AstronomicalAmplitudeReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jdouble a4;
            AstronomicalAmplitudeReader object((jobject) NULL);

            if (!parseArgs(args, "sIIID", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AstronomicalAmplitudeReader(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AstronomicalAmplitudeReader_getAstronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getAstronomicalAmplitudesMap());
            return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_AstronomicalAmplitudeReader_getSupportedNames(t_AstronomicalAmplitudeReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_AstronomicalAmplitudeReader_loadData(t_AstronomicalAmplitudeReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "loadData", args);
            return NULL;
          }

          static PyObject *t_AstronomicalAmplitudeReader_stillAcceptsData(t_AstronomicalAmplitudeReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_AstronomicalAmplitudeReader_get__astronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getAstronomicalAmplitudesMap());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_AstronomicalAmplitudeReader_get__supportedNames(t_AstronomicalAmplitudeReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/KeplerianAnomalyUtility.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *KeplerianAnomalyUtility::class$ = NULL;
      jmethodID *KeplerianAnomalyUtility::mids$ = NULL;
      bool KeplerianAnomalyUtility::live$ = false;

      jclass KeplerianAnomalyUtility::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/KeplerianAnomalyUtility");

          mids$ = new jmethodID[max_mid];
          mids$[mid_ellipticEccentricToMean_86ffecc08a63eff0] = env->getStaticMethodID(cls, "ellipticEccentricToMean", "(DD)D");
          mids$[mid_ellipticEccentricToTrue_86ffecc08a63eff0] = env->getStaticMethodID(cls, "ellipticEccentricToTrue", "(DD)D");
          mids$[mid_ellipticMeanToEccentric_86ffecc08a63eff0] = env->getStaticMethodID(cls, "ellipticMeanToEccentric", "(DD)D");
          mids$[mid_ellipticMeanToTrue_86ffecc08a63eff0] = env->getStaticMethodID(cls, "ellipticMeanToTrue", "(DD)D");
          mids$[mid_ellipticTrueToEccentric_86ffecc08a63eff0] = env->getStaticMethodID(cls, "ellipticTrueToEccentric", "(DD)D");
          mids$[mid_ellipticTrueToMean_86ffecc08a63eff0] = env->getStaticMethodID(cls, "ellipticTrueToMean", "(DD)D");
          mids$[mid_hyperbolicEccentricToMean_86ffecc08a63eff0] = env->getStaticMethodID(cls, "hyperbolicEccentricToMean", "(DD)D");
          mids$[mid_hyperbolicEccentricToTrue_86ffecc08a63eff0] = env->getStaticMethodID(cls, "hyperbolicEccentricToTrue", "(DD)D");
          mids$[mid_hyperbolicMeanToEccentric_86ffecc08a63eff0] = env->getStaticMethodID(cls, "hyperbolicMeanToEccentric", "(DD)D");
          mids$[mid_hyperbolicMeanToTrue_86ffecc08a63eff0] = env->getStaticMethodID(cls, "hyperbolicMeanToTrue", "(DD)D");
          mids$[mid_hyperbolicTrueToEccentric_86ffecc08a63eff0] = env->getStaticMethodID(cls, "hyperbolicTrueToEccentric", "(DD)D");
          mids$[mid_hyperbolicTrueToMean_86ffecc08a63eff0] = env->getStaticMethodID(cls, "hyperbolicTrueToMean", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble KeplerianAnomalyUtility::ellipticEccentricToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticEccentricToMean_86ffecc08a63eff0], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticEccentricToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticEccentricToTrue_86ffecc08a63eff0], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticMeanToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticMeanToEccentric_86ffecc08a63eff0], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticMeanToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticMeanToTrue_86ffecc08a63eff0], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticTrueToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticTrueToEccentric_86ffecc08a63eff0], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticTrueToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticTrueToMean_86ffecc08a63eff0], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicEccentricToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicEccentricToMean_86ffecc08a63eff0], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicEccentricToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicEccentricToTrue_86ffecc08a63eff0], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicMeanToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicMeanToEccentric_86ffecc08a63eff0], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicMeanToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicMeanToTrue_86ffecc08a63eff0], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicTrueToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicTrueToEccentric_86ffecc08a63eff0], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicTrueToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicTrueToMean_86ffecc08a63eff0], a0, a1);
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
      static PyObject *t_KeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_KeplerianAnomalyUtility__methods_[] = {
        DECLARE_METHOD(t_KeplerianAnomalyUtility, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticTrueToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicTrueToMean, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(KeplerianAnomalyUtility)[] = {
        { Py_tp_methods, t_KeplerianAnomalyUtility__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(KeplerianAnomalyUtility)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(KeplerianAnomalyUtility, t_KeplerianAnomalyUtility, KeplerianAnomalyUtility);

      void t_KeplerianAnomalyUtility::install(PyObject *module)
      {
        installType(&PY_TYPE(KeplerianAnomalyUtility), &PY_TYPE_DEF(KeplerianAnomalyUtility), module, "KeplerianAnomalyUtility", 0);
      }

      void t_KeplerianAnomalyUtility::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianAnomalyUtility), "class_", make_descriptor(KeplerianAnomalyUtility::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianAnomalyUtility), "wrapfn_", make_descriptor(t_KeplerianAnomalyUtility::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianAnomalyUtility), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_KeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, KeplerianAnomalyUtility::initializeClass, 1)))
          return NULL;
        return t_KeplerianAnomalyUtility::wrap_Object(KeplerianAnomalyUtility(((t_KeplerianAnomalyUtility *) arg)->object.this$));
      }
      static PyObject *t_KeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, KeplerianAnomalyUtility::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticEccentricToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticEccentricToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticMeanToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticMeanToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticTrueToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticTrueToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToMean", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicEccentricToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicEccentricToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicMeanToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicMeanToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicTrueToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicTrueToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToMean", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Logit$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logit$Parametric::class$ = NULL;
        jmethodID *Logit$Parametric::mids$ = NULL;
        bool Logit$Parametric::live$ = false;

        jclass Logit$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logit$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_125ce48de7dbfde5] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_19285de97bbc7eea] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logit$Parametric::Logit$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        JArray< jdouble > Logit$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_125ce48de7dbfde5], a0, a1.this$));
        }

        jdouble Logit$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_19285de97bbc7eea], a0, a1.this$);
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
        static PyObject *t_Logit$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logit$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logit$Parametric_init_(t_Logit$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logit$Parametric_gradient(t_Logit$Parametric *self, PyObject *args);
        static PyObject *t_Logit$Parametric_value(t_Logit$Parametric *self, PyObject *args);

        static PyMethodDef t_Logit$Parametric__methods_[] = {
          DECLARE_METHOD(t_Logit$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Logit$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logit$Parametric)[] = {
          { Py_tp_methods, t_Logit$Parametric__methods_ },
          { Py_tp_init, (void *) t_Logit$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logit$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logit$Parametric, t_Logit$Parametric, Logit$Parametric);

        void t_Logit$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Logit$Parametric), &PY_TYPE_DEF(Logit$Parametric), module, "Logit$Parametric", 0);
        }

        void t_Logit$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "class_", make_descriptor(Logit$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "wrapfn_", make_descriptor(t_Logit$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logit$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logit$Parametric::initializeClass, 1)))
            return NULL;
          return t_Logit$Parametric::wrap_Object(Logit$Parametric(((t_Logit$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Logit$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logit$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logit$Parametric_init_(t_Logit$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Logit$Parametric object((jobject) NULL);

          INT_CALL(object = Logit$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Logit$Parametric_gradient(t_Logit$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_Logit$Parametric_value(t_Logit$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
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
#include "org/orekit/orbits/CR3BPDifferentialCorrection.h"
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *CR3BPDifferentialCorrection::class$ = NULL;
      jmethodID *CR3BPDifferentialCorrection::mids$ = NULL;
      bool CR3BPDifferentialCorrection::live$ = false;

      jclass CR3BPDifferentialCorrection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/CR3BPDifferentialCorrection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8711376640fe818b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/bodies/CR3BPSystem;D)V");
          mids$[mid_compute_8c47a766c47a33fc] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/LibrationOrbitType;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_computeLyapunov_9b7c658c14883c84] = env->getMethodID(cls, "computeLyapunov", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getOrbitalPeriod_dff5885c2c873297] = env->getMethodID(cls, "getOrbitalPeriod", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPDifferentialCorrection::CR3BPDifferentialCorrection(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::bodies::CR3BPSystem & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8711376640fe818b, a0.this$, a1.this$, a2)) {}

      ::org::orekit::utils::PVCoordinates CR3BPDifferentialCorrection::compute(const ::org::orekit::orbits::LibrationOrbitType & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_compute_8c47a766c47a33fc], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates CR3BPDifferentialCorrection::computeLyapunov() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeLyapunov_9b7c658c14883c84]));
      }

      jdouble CR3BPDifferentialCorrection::getOrbitalPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOrbitalPeriod_dff5885c2c873297]);
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
      static PyObject *t_CR3BPDifferentialCorrection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPDifferentialCorrection_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CR3BPDifferentialCorrection_init_(t_CR3BPDifferentialCorrection *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CR3BPDifferentialCorrection_compute(t_CR3BPDifferentialCorrection *self, PyObject *arg);
      static PyObject *t_CR3BPDifferentialCorrection_computeLyapunov(t_CR3BPDifferentialCorrection *self);
      static PyObject *t_CR3BPDifferentialCorrection_getOrbitalPeriod(t_CR3BPDifferentialCorrection *self);
      static PyObject *t_CR3BPDifferentialCorrection_get__orbitalPeriod(t_CR3BPDifferentialCorrection *self, void *data);
      static PyGetSetDef t_CR3BPDifferentialCorrection__fields_[] = {
        DECLARE_GET_FIELD(t_CR3BPDifferentialCorrection, orbitalPeriod),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CR3BPDifferentialCorrection__methods_[] = {
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, compute, METH_O),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, computeLyapunov, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, getOrbitalPeriod, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPDifferentialCorrection)[] = {
        { Py_tp_methods, t_CR3BPDifferentialCorrection__methods_ },
        { Py_tp_init, (void *) t_CR3BPDifferentialCorrection_init_ },
        { Py_tp_getset, t_CR3BPDifferentialCorrection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPDifferentialCorrection)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CR3BPDifferentialCorrection, t_CR3BPDifferentialCorrection, CR3BPDifferentialCorrection);

      void t_CR3BPDifferentialCorrection::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPDifferentialCorrection), &PY_TYPE_DEF(CR3BPDifferentialCorrection), module, "CR3BPDifferentialCorrection", 0);
      }

      void t_CR3BPDifferentialCorrection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPDifferentialCorrection), "class_", make_descriptor(CR3BPDifferentialCorrection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPDifferentialCorrection), "wrapfn_", make_descriptor(t_CR3BPDifferentialCorrection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPDifferentialCorrection), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPDifferentialCorrection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPDifferentialCorrection::initializeClass, 1)))
          return NULL;
        return t_CR3BPDifferentialCorrection::wrap_Object(CR3BPDifferentialCorrection(((t_CR3BPDifferentialCorrection *) arg)->object.this$));
      }
      static PyObject *t_CR3BPDifferentialCorrection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPDifferentialCorrection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CR3BPDifferentialCorrection_init_(t_CR3BPDifferentialCorrection *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
        ::org::orekit::bodies::CR3BPSystem a1((jobject) NULL);
        jdouble a2;
        CR3BPDifferentialCorrection object((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::bodies::CR3BPSystem::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = CR3BPDifferentialCorrection(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CR3BPDifferentialCorrection_compute(t_CR3BPDifferentialCorrection *self, PyObject *arg)
      {
        ::org::orekit::orbits::LibrationOrbitType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::LibrationOrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_LibrationOrbitType::parameters_))
        {
          OBJ_CALL(result = self->object.compute(a0));
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "compute", arg);
        return NULL;
      }

      static PyObject *t_CR3BPDifferentialCorrection_computeLyapunov(t_CR3BPDifferentialCorrection *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.computeLyapunov());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_CR3BPDifferentialCorrection_getOrbitalPeriod(t_CR3BPDifferentialCorrection *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPDifferentialCorrection_get__orbitalPeriod(t_CR3BPDifferentialCorrection *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Header.h"
#include "java/util/List.h"
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/files/sp3/DataUsed.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/String.h"
#include "org/orekit/files/sp3/SP3FileType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Header::class$ = NULL;
        jmethodID *SP3Header::mids$ = NULL;
        bool SP3Header::live$ = false;
        ::java::lang::String *SP3Header::SP3_FRAME_CENTER_STRING = NULL;

        jclass SP3Header::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Header");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addComment_d0bc48d5b00dc40c] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
            mids$[mid_addSatId_d0bc48d5b00dc40c] = env->getMethodID(cls, "addSatId", "(Ljava/lang/String;)V");
            mids$[mid_getAccuracy_b36dde1444e08956] = env->getMethodID(cls, "getAccuracy", "(Ljava/lang/String;)D");
            mids$[mid_getAgency_11b109bd155ca898] = env->getMethodID(cls, "getAgency", "()Ljava/lang/String;");
            mids$[mid_getClockBase_dff5885c2c873297] = env->getMethodID(cls, "getClockBase", "()D");
            mids$[mid_getComments_2afa36052df4765d] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getCoordinateSystem_11b109bd155ca898] = env->getMethodID(cls, "getCoordinateSystem", "()Ljava/lang/String;");
            mids$[mid_getDataUsed_2afa36052df4765d] = env->getMethodID(cls, "getDataUsed", "()Ljava/util/List;");
            mids$[mid_getDayFraction_dff5885c2c873297] = env->getMethodID(cls, "getDayFraction", "()D");
            mids$[mid_getEpoch_85703d13e302437e] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEpochInterval_dff5885c2c873297] = env->getMethodID(cls, "getEpochInterval", "()D");
            mids$[mid_getFilter_16e9a7b5414faf2d] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getGpsWeek_570ce0828f81a2c1] = env->getMethodID(cls, "getGpsWeek", "()I");
            mids$[mid_getModifiedJulianDay_570ce0828f81a2c1] = env->getMethodID(cls, "getModifiedJulianDay", "()I");
            mids$[mid_getNumberOfEpochs_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfEpochs", "()I");
            mids$[mid_getOrbitType_a0014784875d2563] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_getOrbitTypeKey_11b109bd155ca898] = env->getMethodID(cls, "getOrbitTypeKey", "()Ljava/lang/String;");
            mids$[mid_getPosVelBase_dff5885c2c873297] = env->getMethodID(cls, "getPosVelBase", "()D");
            mids$[mid_getSatIds_2afa36052df4765d] = env->getMethodID(cls, "getSatIds", "()Ljava/util/List;");
            mids$[mid_getSecondsOfWeek_dff5885c2c873297] = env->getMethodID(cls, "getSecondsOfWeek", "()D");
            mids$[mid_getTimeSystem_47ed81afbc0cea8f] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
            mids$[mid_getType_1b0144a14b3b7d4f] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_getVersion_7818f5b58320cd1f] = env->getMethodID(cls, "getVersion", "()C");
            mids$[mid_setAccuracy_bb79ca80d85d0a66] = env->getMethodID(cls, "setAccuracy", "(ID)V");
            mids$[mid_setAgency_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAgency", "(Ljava/lang/String;)V");
            mids$[mid_setClockBase_17db3a65980d3441] = env->getMethodID(cls, "setClockBase", "(D)V");
            mids$[mid_setCoordinateSystem_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCoordinateSystem", "(Ljava/lang/String;)V");
            mids$[mid_setDataUsed_de3e021e7266b71e] = env->getMethodID(cls, "setDataUsed", "(Ljava/util/List;)V");
            mids$[mid_setDayFraction_17db3a65980d3441] = env->getMethodID(cls, "setDayFraction", "(D)V");
            mids$[mid_setEpoch_600a2a61652bc473] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setEpochInterval_17db3a65980d3441] = env->getMethodID(cls, "setEpochInterval", "(D)V");
            mids$[mid_setFilter_10d93bbae9f06624] = env->getMethodID(cls, "setFilter", "(Lorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_setGpsWeek_99803b0791f320ff] = env->getMethodID(cls, "setGpsWeek", "(I)V");
            mids$[mid_setModifiedJulianDay_99803b0791f320ff] = env->getMethodID(cls, "setModifiedJulianDay", "(I)V");
            mids$[mid_setNumberOfEpochs_99803b0791f320ff] = env->getMethodID(cls, "setNumberOfEpochs", "(I)V");
            mids$[mid_setOrbitTypeKey_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOrbitTypeKey", "(Ljava/lang/String;)V");
            mids$[mid_setPosVelBase_17db3a65980d3441] = env->getMethodID(cls, "setPosVelBase", "(D)V");
            mids$[mid_setSecondsOfWeek_17db3a65980d3441] = env->getMethodID(cls, "setSecondsOfWeek", "(D)V");
            mids$[mid_setTimeSystem_188d9681dd6fbe69] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
            mids$[mid_setType_032acd332d70b501] = env->getMethodID(cls, "setType", "(Lorg/orekit/files/sp3/SP3FileType;)V");
            mids$[mid_setVersion_636c0bbb96cab723] = env->getMethodID(cls, "setVersion", "(C)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SP3_FRAME_CENTER_STRING = new ::java::lang::String(env->getStaticObjectField(cls, "SP3_FRAME_CENTER_STRING", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Header::SP3Header() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void SP3Header::addComment(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addComment_d0bc48d5b00dc40c], a0.this$);
        }

        void SP3Header::addSatId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatId_d0bc48d5b00dc40c], a0.this$);
        }

        jdouble SP3Header::getAccuracy(const ::java::lang::String & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAccuracy_b36dde1444e08956], a0.this$);
        }

        ::java::lang::String SP3Header::getAgency() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgency_11b109bd155ca898]));
        }

        jdouble SP3Header::getClockBase() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockBase_dff5885c2c873297]);
        }

        ::java::util::List SP3Header::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_2afa36052df4765d]));
        }

        ::java::lang::String SP3Header::getCoordinateSystem() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoordinateSystem_11b109bd155ca898]));
        }

        ::java::util::List SP3Header::getDataUsed() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataUsed_2afa36052df4765d]));
        }

        jdouble SP3Header::getDayFraction() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDayFraction_dff5885c2c873297]);
        }

        ::org::orekit::time::AbsoluteDate SP3Header::getEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_85703d13e302437e]));
        }

        jdouble SP3Header::getEpochInterval() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpochInterval_dff5885c2c873297]);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Header::getFilter() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_16e9a7b5414faf2d]));
        }

        jint SP3Header::getGpsWeek() const
        {
          return env->callIntMethod(this$, mids$[mid_getGpsWeek_570ce0828f81a2c1]);
        }

        jint SP3Header::getModifiedJulianDay() const
        {
          return env->callIntMethod(this$, mids$[mid_getModifiedJulianDay_570ce0828f81a2c1]);
        }

        jint SP3Header::getNumberOfEpochs() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfEpochs_570ce0828f81a2c1]);
        }

        ::org::orekit::files::sp3::SP3OrbitType SP3Header::getOrbitType() const
        {
          return ::org::orekit::files::sp3::SP3OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_a0014784875d2563]));
        }

        ::java::lang::String SP3Header::getOrbitTypeKey() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOrbitTypeKey_11b109bd155ca898]));
        }

        jdouble SP3Header::getPosVelBase() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPosVelBase_dff5885c2c873297]);
        }

        ::java::util::List SP3Header::getSatIds() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatIds_2afa36052df4765d]));
        }

        jdouble SP3Header::getSecondsOfWeek() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondsOfWeek_dff5885c2c873297]);
        }

        ::org::orekit::gnss::TimeSystem SP3Header::getTimeSystem() const
        {
          return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_47ed81afbc0cea8f]));
        }

        ::org::orekit::files::sp3::SP3FileType SP3Header::getType() const
        {
          return ::org::orekit::files::sp3::SP3FileType(env->callObjectMethod(this$, mids$[mid_getType_1b0144a14b3b7d4f]));
        }

        jchar SP3Header::getVersion() const
        {
          return env->callCharMethod(this$, mids$[mid_getVersion_7818f5b58320cd1f]);
        }

        void SP3Header::setAccuracy(jint a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setAccuracy_bb79ca80d85d0a66], a0, a1);
        }

        void SP3Header::setAgency(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAgency_d0bc48d5b00dc40c], a0.this$);
        }

        void SP3Header::setClockBase(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setClockBase_17db3a65980d3441], a0);
        }

        void SP3Header::setCoordinateSystem(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setCoordinateSystem_d0bc48d5b00dc40c], a0.this$);
        }

        void SP3Header::setDataUsed(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataUsed_de3e021e7266b71e], a0.this$);
        }

        void SP3Header::setDayFraction(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDayFraction_17db3a65980d3441], a0);
        }

        void SP3Header::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpoch_600a2a61652bc473], a0.this$);
        }

        void SP3Header::setEpochInterval(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochInterval_17db3a65980d3441], a0);
        }

        void SP3Header::setFilter(const ::org::orekit::utils::CartesianDerivativesFilter & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFilter_10d93bbae9f06624], a0.this$);
        }

        void SP3Header::setGpsWeek(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setGpsWeek_99803b0791f320ff], a0);
        }

        void SP3Header::setModifiedJulianDay(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setModifiedJulianDay_99803b0791f320ff], a0);
        }

        void SP3Header::setNumberOfEpochs(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNumberOfEpochs_99803b0791f320ff], a0);
        }

        void SP3Header::setOrbitTypeKey(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitTypeKey_d0bc48d5b00dc40c], a0.this$);
        }

        void SP3Header::setPosVelBase(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPosVelBase_17db3a65980d3441], a0);
        }

        void SP3Header::setSecondsOfWeek(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSecondsOfWeek_17db3a65980d3441], a0);
        }

        void SP3Header::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSystem_188d9681dd6fbe69], a0.this$);
        }

        void SP3Header::setType(const ::org::orekit::files::sp3::SP3FileType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setType_032acd332d70b501], a0.this$);
        }

        void SP3Header::setVersion(jchar a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVersion_636c0bbb96cab723], a0);
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
      namespace sp3 {
        static PyObject *t_SP3Header_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Header_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Header_init_(t_SP3Header *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Header_addComment(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_addSatId(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_getAccuracy(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_getAgency(t_SP3Header *self);
        static PyObject *t_SP3Header_getClockBase(t_SP3Header *self);
        static PyObject *t_SP3Header_getComments(t_SP3Header *self);
        static PyObject *t_SP3Header_getCoordinateSystem(t_SP3Header *self);
        static PyObject *t_SP3Header_getDataUsed(t_SP3Header *self);
        static PyObject *t_SP3Header_getDayFraction(t_SP3Header *self);
        static PyObject *t_SP3Header_getEpoch(t_SP3Header *self);
        static PyObject *t_SP3Header_getEpochInterval(t_SP3Header *self);
        static PyObject *t_SP3Header_getFilter(t_SP3Header *self);
        static PyObject *t_SP3Header_getGpsWeek(t_SP3Header *self);
        static PyObject *t_SP3Header_getModifiedJulianDay(t_SP3Header *self);
        static PyObject *t_SP3Header_getNumberOfEpochs(t_SP3Header *self);
        static PyObject *t_SP3Header_getOrbitType(t_SP3Header *self);
        static PyObject *t_SP3Header_getOrbitTypeKey(t_SP3Header *self);
        static PyObject *t_SP3Header_getPosVelBase(t_SP3Header *self);
        static PyObject *t_SP3Header_getSatIds(t_SP3Header *self);
        static PyObject *t_SP3Header_getSecondsOfWeek(t_SP3Header *self);
        static PyObject *t_SP3Header_getTimeSystem(t_SP3Header *self);
        static PyObject *t_SP3Header_getType(t_SP3Header *self);
        static PyObject *t_SP3Header_getVersion(t_SP3Header *self);
        static PyObject *t_SP3Header_setAccuracy(t_SP3Header *self, PyObject *args);
        static PyObject *t_SP3Header_setAgency(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setClockBase(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setCoordinateSystem(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setDataUsed(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setDayFraction(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setEpoch(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setEpochInterval(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setFilter(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setGpsWeek(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setModifiedJulianDay(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setNumberOfEpochs(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setOrbitTypeKey(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setPosVelBase(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setSecondsOfWeek(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setTimeSystem(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setType(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setVersion(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_get__agency(t_SP3Header *self, void *data);
        static int t_SP3Header_set__agency(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__clockBase(t_SP3Header *self, void *data);
        static int t_SP3Header_set__clockBase(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__comments(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__coordinateSystem(t_SP3Header *self, void *data);
        static int t_SP3Header_set__coordinateSystem(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__dataUsed(t_SP3Header *self, void *data);
        static int t_SP3Header_set__dataUsed(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__dayFraction(t_SP3Header *self, void *data);
        static int t_SP3Header_set__dayFraction(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__epoch(t_SP3Header *self, void *data);
        static int t_SP3Header_set__epoch(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__epochInterval(t_SP3Header *self, void *data);
        static int t_SP3Header_set__epochInterval(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__filter(t_SP3Header *self, void *data);
        static int t_SP3Header_set__filter(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__gpsWeek(t_SP3Header *self, void *data);
        static int t_SP3Header_set__gpsWeek(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__modifiedJulianDay(t_SP3Header *self, void *data);
        static int t_SP3Header_set__modifiedJulianDay(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__numberOfEpochs(t_SP3Header *self, void *data);
        static int t_SP3Header_set__numberOfEpochs(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__orbitType(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__orbitTypeKey(t_SP3Header *self, void *data);
        static int t_SP3Header_set__orbitTypeKey(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__posVelBase(t_SP3Header *self, void *data);
        static int t_SP3Header_set__posVelBase(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__satIds(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__secondsOfWeek(t_SP3Header *self, void *data);
        static int t_SP3Header_set__secondsOfWeek(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__timeSystem(t_SP3Header *self, void *data);
        static int t_SP3Header_set__timeSystem(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__type(t_SP3Header *self, void *data);
        static int t_SP3Header_set__type(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__version(t_SP3Header *self, void *data);
        static int t_SP3Header_set__version(t_SP3Header *self, PyObject *arg, void *data);
        static PyGetSetDef t_SP3Header__fields_[] = {
          DECLARE_GETSET_FIELD(t_SP3Header, agency),
          DECLARE_GETSET_FIELD(t_SP3Header, clockBase),
          DECLARE_GET_FIELD(t_SP3Header, comments),
          DECLARE_GETSET_FIELD(t_SP3Header, coordinateSystem),
          DECLARE_GETSET_FIELD(t_SP3Header, dataUsed),
          DECLARE_GETSET_FIELD(t_SP3Header, dayFraction),
          DECLARE_GETSET_FIELD(t_SP3Header, epoch),
          DECLARE_GETSET_FIELD(t_SP3Header, epochInterval),
          DECLARE_GETSET_FIELD(t_SP3Header, filter),
          DECLARE_GETSET_FIELD(t_SP3Header, gpsWeek),
          DECLARE_GETSET_FIELD(t_SP3Header, modifiedJulianDay),
          DECLARE_GETSET_FIELD(t_SP3Header, numberOfEpochs),
          DECLARE_GET_FIELD(t_SP3Header, orbitType),
          DECLARE_GETSET_FIELD(t_SP3Header, orbitTypeKey),
          DECLARE_GETSET_FIELD(t_SP3Header, posVelBase),
          DECLARE_GET_FIELD(t_SP3Header, satIds),
          DECLARE_GETSET_FIELD(t_SP3Header, secondsOfWeek),
          DECLARE_GETSET_FIELD(t_SP3Header, timeSystem),
          DECLARE_GETSET_FIELD(t_SP3Header, type),
          DECLARE_GETSET_FIELD(t_SP3Header, version),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Header__methods_[] = {
          DECLARE_METHOD(t_SP3Header, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Header, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Header, addComment, METH_O),
          DECLARE_METHOD(t_SP3Header, addSatId, METH_O),
          DECLARE_METHOD(t_SP3Header, getAccuracy, METH_O),
          DECLARE_METHOD(t_SP3Header, getAgency, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getClockBase, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getComments, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getCoordinateSystem, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getDataUsed, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getDayFraction, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getEpochInterval, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getFilter, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getGpsWeek, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getModifiedJulianDay, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getNumberOfEpochs, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getOrbitTypeKey, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getPosVelBase, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getSatIds, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getSecondsOfWeek, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getTimeSystem, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getType, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getVersion, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, setAccuracy, METH_VARARGS),
          DECLARE_METHOD(t_SP3Header, setAgency, METH_O),
          DECLARE_METHOD(t_SP3Header, setClockBase, METH_O),
          DECLARE_METHOD(t_SP3Header, setCoordinateSystem, METH_O),
          DECLARE_METHOD(t_SP3Header, setDataUsed, METH_O),
          DECLARE_METHOD(t_SP3Header, setDayFraction, METH_O),
          DECLARE_METHOD(t_SP3Header, setEpoch, METH_O),
          DECLARE_METHOD(t_SP3Header, setEpochInterval, METH_O),
          DECLARE_METHOD(t_SP3Header, setFilter, METH_O),
          DECLARE_METHOD(t_SP3Header, setGpsWeek, METH_O),
          DECLARE_METHOD(t_SP3Header, setModifiedJulianDay, METH_O),
          DECLARE_METHOD(t_SP3Header, setNumberOfEpochs, METH_O),
          DECLARE_METHOD(t_SP3Header, setOrbitTypeKey, METH_O),
          DECLARE_METHOD(t_SP3Header, setPosVelBase, METH_O),
          DECLARE_METHOD(t_SP3Header, setSecondsOfWeek, METH_O),
          DECLARE_METHOD(t_SP3Header, setTimeSystem, METH_O),
          DECLARE_METHOD(t_SP3Header, setType, METH_O),
          DECLARE_METHOD(t_SP3Header, setVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Header)[] = {
          { Py_tp_methods, t_SP3Header__methods_ },
          { Py_tp_init, (void *) t_SP3Header_init_ },
          { Py_tp_getset, t_SP3Header__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Header)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Header, t_SP3Header, SP3Header);

        void t_SP3Header::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Header), &PY_TYPE_DEF(SP3Header), module, "SP3Header", 0);
        }

        void t_SP3Header::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "class_", make_descriptor(SP3Header::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "wrapfn_", make_descriptor(t_SP3Header::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Header::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "SP3_FRAME_CENTER_STRING", make_descriptor(j2p(*SP3Header::SP3_FRAME_CENTER_STRING)));
        }

        static PyObject *t_SP3Header_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Header::initializeClass, 1)))
            return NULL;
          return t_SP3Header::wrap_Object(SP3Header(((t_SP3Header *) arg)->object.this$));
        }
        static PyObject *t_SP3Header_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Header::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Header_init_(t_SP3Header *self, PyObject *args, PyObject *kwds)
        {
          SP3Header object((jobject) NULL);

          INT_CALL(object = SP3Header());
          self->object = object;

          return 0;
        }

        static PyObject *t_SP3Header_addComment(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.addComment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addComment", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_addSatId(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.addSatId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatId", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_getAccuracy(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getAccuracy(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getAccuracy", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_getAgency(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getAgency());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getClockBase(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockBase());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getComments(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_SP3Header_getCoordinateSystem(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinateSystem());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getDataUsed(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDataUsed());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::sp3::PY_TYPE(DataUsed));
        }

        static PyObject *t_SP3Header_getDayFraction(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDayFraction());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getEpoch(t_SP3Header *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getEpochInterval(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEpochInterval());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getFilter(t_SP3Header *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getGpsWeek(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getGpsWeek());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getModifiedJulianDay(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getModifiedJulianDay());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getNumberOfEpochs(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfEpochs());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getOrbitType(t_SP3Header *self)
        {
          ::org::orekit::files::sp3::SP3OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::files::sp3::t_SP3OrbitType::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getOrbitTypeKey(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitTypeKey());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getPosVelBase(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPosVelBase());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getSatIds(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatIds());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_SP3Header_getSecondsOfWeek(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSecondsOfWeek());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getTimeSystem(t_SP3Header *self)
        {
          ::org::orekit::gnss::TimeSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getType(t_SP3Header *self)
        {
          ::org::orekit::files::sp3::SP3FileType result((jobject) NULL);
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::files::sp3::t_SP3FileType::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getVersion(t_SP3Header *self)
        {
          jchar result;
          OBJ_CALL(result = self->object.getVersion());
          return c2p(result);
        }

        static PyObject *t_SP3Header_setAccuracy(t_SP3Header *self, PyObject *args)
        {
          jint a0;
          jdouble a1;

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(self->object.setAccuracy(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAccuracy", args);
          return NULL;
        }

        static PyObject *t_SP3Header_setAgency(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setAgency(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAgency", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setClockBase(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setClockBase(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setClockBase", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setCoordinateSystem(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setCoordinateSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setCoordinateSystem", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setDataUsed(t_SP3Header *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.setDataUsed(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDataUsed", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setDayFraction(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setDayFraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDayFraction", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setEpoch(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setEpochInterval(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setEpochInterval(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpochInterval", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setFilter(t_SP3Header *self, PyObject *arg)
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

        static PyObject *t_SP3Header_setGpsWeek(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setGpsWeek(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGpsWeek", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setModifiedJulianDay(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setModifiedJulianDay(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setModifiedJulianDay", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setNumberOfEpochs(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setNumberOfEpochs(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNumberOfEpochs", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setOrbitTypeKey(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setOrbitTypeKey(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitTypeKey", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setPosVelBase(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPosVelBase(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPosVelBase", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setSecondsOfWeek(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSecondsOfWeek(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSecondsOfWeek", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setTimeSystem(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
          {
            OBJ_CALL(self->object.setTimeSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setType(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::files::sp3::SP3FileType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::files::sp3::SP3FileType::initializeClass, &a0, &p0, ::org::orekit::files::sp3::t_SP3FileType::parameters_))
          {
            OBJ_CALL(self->object.setType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setType", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setVersion(t_SP3Header *self, PyObject *arg)
        {
          jchar a0;

          if (!parseArg(arg, "C", &a0))
          {
            OBJ_CALL(self->object.setVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVersion", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_get__agency(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getAgency());
          return j2p(value);
        }
        static int t_SP3Header_set__agency(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setAgency(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "agency", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__clockBase(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockBase());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__clockBase(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setClockBase(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "clockBase", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__comments(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__coordinateSystem(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinateSystem());
          return j2p(value);
        }
        static int t_SP3Header_set__coordinateSystem(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setCoordinateSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "coordinateSystem", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__dataUsed(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDataUsed());
          return ::java::util::t_List::wrap_Object(value);
        }
        static int t_SP3Header_set__dataUsed(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::util::List value((jobject) NULL);
            if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
            {
              INT_CALL(self->object.setDataUsed(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dataUsed", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__dayFraction(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDayFraction());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__dayFraction(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setDayFraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dayFraction", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__epoch(t_SP3Header *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_SP3Header_set__epoch(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epoch", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__epochInterval(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEpochInterval());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__epochInterval(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setEpochInterval(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epochInterval", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__filter(t_SP3Header *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }
        static int t_SP3Header_set__filter(t_SP3Header *self, PyObject *arg, void *data)
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

        static PyObject *t_SP3Header_get__gpsWeek(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getGpsWeek());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__gpsWeek(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setGpsWeek(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "gpsWeek", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__modifiedJulianDay(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getModifiedJulianDay());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__modifiedJulianDay(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setModifiedJulianDay(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "modifiedJulianDay", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__numberOfEpochs(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfEpochs());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__numberOfEpochs(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setNumberOfEpochs(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "numberOfEpochs", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__orbitType(t_SP3Header *self, void *data)
        {
          ::org::orekit::files::sp3::SP3OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::files::sp3::t_SP3OrbitType::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__orbitTypeKey(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitTypeKey());
          return j2p(value);
        }
        static int t_SP3Header_set__orbitTypeKey(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setOrbitTypeKey(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitTypeKey", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__posVelBase(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPosVelBase());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__posVelBase(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPosVelBase(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "posVelBase", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__satIds(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatIds());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__secondsOfWeek(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSecondsOfWeek());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__secondsOfWeek(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSecondsOfWeek(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "secondsOfWeek", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__timeSystem(t_SP3Header *self, void *data)
        {
          ::org::orekit::gnss::TimeSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
        }
        static int t_SP3Header_set__timeSystem(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
            {
              INT_CALL(self->object.setTimeSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__type(t_SP3Header *self, void *data)
        {
          ::org::orekit::files::sp3::SP3FileType value((jobject) NULL);
          OBJ_CALL(value = self->object.getType());
          return ::org::orekit::files::sp3::t_SP3FileType::wrap_Object(value);
        }
        static int t_SP3Header_set__type(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sp3::SP3FileType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sp3::SP3FileType::initializeClass, &value))
            {
              INT_CALL(self->object.setType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "type", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__version(t_SP3Header *self, void *data)
        {
          jchar value;
          OBJ_CALL(value = self->object.getVersion());
          return c2p(value);
        }
        static int t_SP3Header_set__version(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jchar value;
            if (!parseArg(arg, "C", &value))
            {
              INT_CALL(self->object.setVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "version", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
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
                mids$[mid_init$_2983f6562ac8a7e8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getA4_dff5885c2c873297] = env->getMethodID(cls, "getA4", "()D");
                mids$[mid_getAlpha4_dff5885c2c873297] = env->getMethodID(cls, "getAlpha4", "()D");
                mids$[mid_getC_dff5885c2c873297] = env->getMethodID(cls, "getC", "()D");
                mids$[mid_getEta_dff5885c2c873297] = env->getMethodID(cls, "getEta", "()D");
                mids$[mid_getS2_dff5885c2c873297] = env->getMethodID(cls, "getS2", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTJ2SquaredClosedFormContext::DSSTJ2SquaredClosedFormContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_2983f6562ac8a7e8, a0.this$, a1.this$)) {}

            jdouble DSSTJ2SquaredClosedFormContext::getA4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA4_dff5885c2c873297]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getAlpha4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha4_dff5885c2c873297]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getC_dff5885c2c873297]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getEta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEta_dff5885c2c873297]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getS2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS2_dff5885c2c873297]);
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
#include "org/orekit/utils/units/Unit.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *Unit::class$ = NULL;
        jmethodID *Unit::mids$ = NULL;
        bool Unit::live$ = false;
        Unit *Unit::AMPERE = NULL;
        Unit *Unit::ARC_MINUTE = NULL;
        Unit *Unit::ARC_SECOND = NULL;
        Unit *Unit::BAR = NULL;
        Unit *Unit::COULOMB = NULL;
        Unit *Unit::DAY = NULL;
        Unit *Unit::DEGREE = NULL;
        Unit *Unit::EARTH_RADII = NULL;
        Unit *Unit::GRAM = NULL;
        Unit *Unit::HERTZ = NULL;
        Unit *Unit::HOUR = NULL;
        Unit *Unit::JOULE = NULL;
        Unit *Unit::KILOGRAM = NULL;
        Unit *Unit::KILOMETRE = NULL;
        Unit *Unit::METRE = NULL;
        Unit *Unit::MINUTE = NULL;
        Unit *Unit::NEWTON = NULL;
        Unit *Unit::NONE = NULL;
        Unit *Unit::OHM = NULL;
        Unit *Unit::ONE = NULL;
        Unit *Unit::PASCAL = NULL;
        Unit *Unit::PERCENT = NULL;
        Unit *Unit::RADIAN = NULL;
        Unit *Unit::REVOLUTION = NULL;
        Unit *Unit::SECOND = NULL;
        Unit *Unit::SOLAR_FLUX_UNIT = NULL;
        Unit *Unit::TESLA = NULL;
        Unit *Unit::TOTAL_ELECTRON_CONTENT_UNIT = NULL;
        Unit *Unit::VOLT = NULL;
        Unit *Unit::WATT = NULL;
        Unit *Unit::YEAR = NULL;

        jclass Unit::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/Unit");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_284b61790ebbd4ed] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;)V");
            mids$[mid_alias_0a5740869b287d80] = env->getMethodID(cls, "alias", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_divide_fec86d24e27a1c31] = env->getMethodID(cls, "divide", "(Ljava/lang/String;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_ensureCompatible_064d1197ec1b60e4] = env->getStaticMethodID(cls, "ensureCompatible", "(Ljava/lang/String;Ljava/util/List;ZLjava/util/List;)V");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_fromSI_71d2acbe9dbc79f5] = env->getMethodID(cls, "fromSI", "(Ljava/lang/Double;)D");
            mids$[mid_fromSI_dcbc7ce2902fa136] = env->getMethodID(cls, "fromSI", "(D)D");
            mids$[mid_getAngle_883007575ab78b44] = env->getMethodID(cls, "getAngle", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getCurrent_883007575ab78b44] = env->getMethodID(cls, "getCurrent", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getLength_883007575ab78b44] = env->getMethodID(cls, "getLength", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getMass_883007575ab78b44] = env->getMethodID(cls, "getMass", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getScale_dff5885c2c873297] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getTime_883007575ab78b44] = env->getMethodID(cls, "getTime", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_multiply_fec86d24e27a1c31] = env->getMethodID(cls, "multiply", "(Ljava/lang/String;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_parse_0a5740869b287d80] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_power_7df14d78e751ac15] = env->getMethodID(cls, "power", "(Ljava/lang/String;Lorg/hipparchus/fraction/Fraction;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_sameDimension_43de8ce72aa2edad] = env->getMethodID(cls, "sameDimension", "(Lorg/orekit/utils/units/Unit;)Z");
            mids$[mid_sameDimensionSI_de9b417ee3c58e2e] = env->getMethodID(cls, "sameDimensionSI", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_scale_fc750ab1c8920e40] = env->getMethodID(cls, "scale", "(Ljava/lang/String;D)Lorg/orekit/utils/units/Unit;");
            mids$[mid_sqrt_0a5740869b287d80] = env->getMethodID(cls, "sqrt", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_toSI_71d2acbe9dbc79f5] = env->getMethodID(cls, "toSI", "(Ljava/lang/Double;)D");
            mids$[mid_toSI_dcbc7ce2902fa136] = env->getMethodID(cls, "toSI", "(D)D");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            AMPERE = new Unit(env->getStaticObjectField(cls, "AMPERE", "Lorg/orekit/utils/units/Unit;"));
            ARC_MINUTE = new Unit(env->getStaticObjectField(cls, "ARC_MINUTE", "Lorg/orekit/utils/units/Unit;"));
            ARC_SECOND = new Unit(env->getStaticObjectField(cls, "ARC_SECOND", "Lorg/orekit/utils/units/Unit;"));
            BAR = new Unit(env->getStaticObjectField(cls, "BAR", "Lorg/orekit/utils/units/Unit;"));
            COULOMB = new Unit(env->getStaticObjectField(cls, "COULOMB", "Lorg/orekit/utils/units/Unit;"));
            DAY = new Unit(env->getStaticObjectField(cls, "DAY", "Lorg/orekit/utils/units/Unit;"));
            DEGREE = new Unit(env->getStaticObjectField(cls, "DEGREE", "Lorg/orekit/utils/units/Unit;"));
            EARTH_RADII = new Unit(env->getStaticObjectField(cls, "EARTH_RADII", "Lorg/orekit/utils/units/Unit;"));
            GRAM = new Unit(env->getStaticObjectField(cls, "GRAM", "Lorg/orekit/utils/units/Unit;"));
            HERTZ = new Unit(env->getStaticObjectField(cls, "HERTZ", "Lorg/orekit/utils/units/Unit;"));
            HOUR = new Unit(env->getStaticObjectField(cls, "HOUR", "Lorg/orekit/utils/units/Unit;"));
            JOULE = new Unit(env->getStaticObjectField(cls, "JOULE", "Lorg/orekit/utils/units/Unit;"));
            KILOGRAM = new Unit(env->getStaticObjectField(cls, "KILOGRAM", "Lorg/orekit/utils/units/Unit;"));
            KILOMETRE = new Unit(env->getStaticObjectField(cls, "KILOMETRE", "Lorg/orekit/utils/units/Unit;"));
            METRE = new Unit(env->getStaticObjectField(cls, "METRE", "Lorg/orekit/utils/units/Unit;"));
            MINUTE = new Unit(env->getStaticObjectField(cls, "MINUTE", "Lorg/orekit/utils/units/Unit;"));
            NEWTON = new Unit(env->getStaticObjectField(cls, "NEWTON", "Lorg/orekit/utils/units/Unit;"));
            NONE = new Unit(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/utils/units/Unit;"));
            OHM = new Unit(env->getStaticObjectField(cls, "OHM", "Lorg/orekit/utils/units/Unit;"));
            ONE = new Unit(env->getStaticObjectField(cls, "ONE", "Lorg/orekit/utils/units/Unit;"));
            PASCAL = new Unit(env->getStaticObjectField(cls, "PASCAL", "Lorg/orekit/utils/units/Unit;"));
            PERCENT = new Unit(env->getStaticObjectField(cls, "PERCENT", "Lorg/orekit/utils/units/Unit;"));
            RADIAN = new Unit(env->getStaticObjectField(cls, "RADIAN", "Lorg/orekit/utils/units/Unit;"));
            REVOLUTION = new Unit(env->getStaticObjectField(cls, "REVOLUTION", "Lorg/orekit/utils/units/Unit;"));
            SECOND = new Unit(env->getStaticObjectField(cls, "SECOND", "Lorg/orekit/utils/units/Unit;"));
            SOLAR_FLUX_UNIT = new Unit(env->getStaticObjectField(cls, "SOLAR_FLUX_UNIT", "Lorg/orekit/utils/units/Unit;"));
            TESLA = new Unit(env->getStaticObjectField(cls, "TESLA", "Lorg/orekit/utils/units/Unit;"));
            TOTAL_ELECTRON_CONTENT_UNIT = new Unit(env->getStaticObjectField(cls, "TOTAL_ELECTRON_CONTENT_UNIT", "Lorg/orekit/utils/units/Unit;"));
            VOLT = new Unit(env->getStaticObjectField(cls, "VOLT", "Lorg/orekit/utils/units/Unit;"));
            WATT = new Unit(env->getStaticObjectField(cls, "WATT", "Lorg/orekit/utils/units/Unit;"));
            YEAR = new Unit(env->getStaticObjectField(cls, "YEAR", "Lorg/orekit/utils/units/Unit;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Unit::Unit(const ::java::lang::String & a0, jdouble a1, const ::org::hipparchus::fraction::Fraction & a2, const ::org::hipparchus::fraction::Fraction & a3, const ::org::hipparchus::fraction::Fraction & a4, const ::org::hipparchus::fraction::Fraction & a5, const ::org::hipparchus::fraction::Fraction & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_284b61790ebbd4ed, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        Unit Unit::alias(const ::java::lang::String & a0) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_alias_0a5740869b287d80], a0.this$));
        }

        Unit Unit::divide(const ::java::lang::String & a0, const Unit & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_divide_fec86d24e27a1c31], a0.this$, a1.this$));
        }

        void Unit::ensureCompatible(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2, const ::java::util::List & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_ensureCompatible_064d1197ec1b60e4], a0.this$, a1.this$, a2, a3.this$);
        }

        jboolean Unit::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        jdouble Unit::fromSI(const ::java::lang::Double & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_fromSI_71d2acbe9dbc79f5], a0.this$);
        }

        jdouble Unit::fromSI(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_fromSI_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::fraction::Fraction Unit::getAngle() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getAngle_883007575ab78b44]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getCurrent() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getCurrent_883007575ab78b44]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getLength() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getLength_883007575ab78b44]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getMass() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getMass_883007575ab78b44]));
        }

        ::java::lang::String Unit::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
        }

        jdouble Unit::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_dff5885c2c873297]);
        }

        ::org::hipparchus::fraction::Fraction Unit::getTime() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getTime_883007575ab78b44]));
        }

        jint Unit::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        Unit Unit::multiply(const ::java::lang::String & a0, const Unit & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_multiply_fec86d24e27a1c31], a0.this$, a1.this$));
        }

        Unit Unit::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Unit(env->callStaticObjectMethod(cls, mids$[mid_parse_0a5740869b287d80], a0.this$));
        }

        Unit Unit::power(const ::java::lang::String & a0, const ::org::hipparchus::fraction::Fraction & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_power_7df14d78e751ac15], a0.this$, a1.this$));
        }

        jboolean Unit::sameDimension(const Unit & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_sameDimension_43de8ce72aa2edad], a0.this$);
        }

        Unit Unit::sameDimensionSI() const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_sameDimensionSI_de9b417ee3c58e2e]));
        }

        Unit Unit::scale(const ::java::lang::String & a0, jdouble a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_scale_fc750ab1c8920e40], a0.this$, a1));
        }

        Unit Unit::sqrt(const ::java::lang::String & a0) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_sqrt_0a5740869b287d80], a0.this$));
        }

        jdouble Unit::toSI(const ::java::lang::Double & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_toSI_71d2acbe9dbc79f5], a0.this$);
        }

        jdouble Unit::toSI(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_toSI_dcbc7ce2902fa136], a0);
        }

        ::java::lang::String Unit::toString() const
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
    namespace utils {
      namespace units {
        static PyObject *t_Unit_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Unit_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Unit_init_(t_Unit *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Unit_alias(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_divide(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_ensureCompatible(PyTypeObject *type, PyObject *args);
        static PyObject *t_Unit_equals(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_fromSI(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_getAngle(t_Unit *self);
        static PyObject *t_Unit_getCurrent(t_Unit *self);
        static PyObject *t_Unit_getLength(t_Unit *self);
        static PyObject *t_Unit_getMass(t_Unit *self);
        static PyObject *t_Unit_getName(t_Unit *self);
        static PyObject *t_Unit_getScale(t_Unit *self);
        static PyObject *t_Unit_getTime(t_Unit *self);
        static PyObject *t_Unit_hashCode(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_multiply(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Unit_power(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_sameDimension(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_sameDimensionSI(t_Unit *self);
        static PyObject *t_Unit_scale(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_sqrt(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_toSI(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_toString(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_get__angle(t_Unit *self, void *data);
        static PyObject *t_Unit_get__current(t_Unit *self, void *data);
        static PyObject *t_Unit_get__length(t_Unit *self, void *data);
        static PyObject *t_Unit_get__mass(t_Unit *self, void *data);
        static PyObject *t_Unit_get__name(t_Unit *self, void *data);
        static PyObject *t_Unit_get__time(t_Unit *self, void *data);
        static PyGetSetDef t_Unit__fields_[] = {
          DECLARE_GET_FIELD(t_Unit, angle),
          DECLARE_GET_FIELD(t_Unit, current),
          DECLARE_GET_FIELD(t_Unit, length),
          DECLARE_GET_FIELD(t_Unit, mass),
          DECLARE_GET_FIELD(t_Unit, name),
          DECLARE_GET_FIELD(t_Unit, time),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Unit__methods_[] = {
          DECLARE_METHOD(t_Unit, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, alias, METH_O),
          DECLARE_METHOD(t_Unit, divide, METH_VARARGS),
          DECLARE_METHOD(t_Unit, ensureCompatible, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Unit, equals, METH_VARARGS),
          DECLARE_METHOD(t_Unit, fromSI, METH_VARARGS),
          DECLARE_METHOD(t_Unit, getAngle, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getCurrent, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getLength, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getMass, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getName, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getScale, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getTime, METH_NOARGS),
          DECLARE_METHOD(t_Unit, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_Unit, multiply, METH_VARARGS),
          DECLARE_METHOD(t_Unit, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, power, METH_VARARGS),
          DECLARE_METHOD(t_Unit, sameDimension, METH_O),
          DECLARE_METHOD(t_Unit, sameDimensionSI, METH_NOARGS),
          DECLARE_METHOD(t_Unit, scale, METH_VARARGS),
          DECLARE_METHOD(t_Unit, sqrt, METH_O),
          DECLARE_METHOD(t_Unit, toSI, METH_VARARGS),
          DECLARE_METHOD(t_Unit, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Unit)[] = {
          { Py_tp_methods, t_Unit__methods_ },
          { Py_tp_init, (void *) t_Unit_init_ },
          { Py_tp_getset, t_Unit__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Unit)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Unit, t_Unit, Unit);

        void t_Unit::install(PyObject *module)
        {
          installType(&PY_TYPE(Unit), &PY_TYPE_DEF(Unit), module, "Unit", 0);
        }

        void t_Unit::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "class_", make_descriptor(Unit::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "wrapfn_", make_descriptor(t_Unit::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "boxfn_", make_descriptor(boxObject));
          env->getClass(Unit::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "AMPERE", make_descriptor(t_Unit::wrap_Object(*Unit::AMPERE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ARC_MINUTE", make_descriptor(t_Unit::wrap_Object(*Unit::ARC_MINUTE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ARC_SECOND", make_descriptor(t_Unit::wrap_Object(*Unit::ARC_SECOND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "BAR", make_descriptor(t_Unit::wrap_Object(*Unit::BAR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "COULOMB", make_descriptor(t_Unit::wrap_Object(*Unit::COULOMB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "DAY", make_descriptor(t_Unit::wrap_Object(*Unit::DAY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "DEGREE", make_descriptor(t_Unit::wrap_Object(*Unit::DEGREE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "EARTH_RADII", make_descriptor(t_Unit::wrap_Object(*Unit::EARTH_RADII)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "GRAM", make_descriptor(t_Unit::wrap_Object(*Unit::GRAM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "HERTZ", make_descriptor(t_Unit::wrap_Object(*Unit::HERTZ)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "HOUR", make_descriptor(t_Unit::wrap_Object(*Unit::HOUR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "JOULE", make_descriptor(t_Unit::wrap_Object(*Unit::JOULE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "KILOGRAM", make_descriptor(t_Unit::wrap_Object(*Unit::KILOGRAM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "KILOMETRE", make_descriptor(t_Unit::wrap_Object(*Unit::KILOMETRE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "METRE", make_descriptor(t_Unit::wrap_Object(*Unit::METRE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "MINUTE", make_descriptor(t_Unit::wrap_Object(*Unit::MINUTE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "NEWTON", make_descriptor(t_Unit::wrap_Object(*Unit::NEWTON)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "NONE", make_descriptor(t_Unit::wrap_Object(*Unit::NONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "OHM", make_descriptor(t_Unit::wrap_Object(*Unit::OHM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ONE", make_descriptor(t_Unit::wrap_Object(*Unit::ONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "PASCAL", make_descriptor(t_Unit::wrap_Object(*Unit::PASCAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "PERCENT", make_descriptor(t_Unit::wrap_Object(*Unit::PERCENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "RADIAN", make_descriptor(t_Unit::wrap_Object(*Unit::RADIAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "REVOLUTION", make_descriptor(t_Unit::wrap_Object(*Unit::REVOLUTION)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "SECOND", make_descriptor(t_Unit::wrap_Object(*Unit::SECOND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "SOLAR_FLUX_UNIT", make_descriptor(t_Unit::wrap_Object(*Unit::SOLAR_FLUX_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "TESLA", make_descriptor(t_Unit::wrap_Object(*Unit::TESLA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "TOTAL_ELECTRON_CONTENT_UNIT", make_descriptor(t_Unit::wrap_Object(*Unit::TOTAL_ELECTRON_CONTENT_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "VOLT", make_descriptor(t_Unit::wrap_Object(*Unit::VOLT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "WATT", make_descriptor(t_Unit::wrap_Object(*Unit::WATT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "YEAR", make_descriptor(t_Unit::wrap_Object(*Unit::YEAR)));
        }

        static PyObject *t_Unit_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Unit::initializeClass, 1)))
            return NULL;
          return t_Unit::wrap_Object(Unit(((t_Unit *) arg)->object.this$));
        }
        static PyObject *t_Unit_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Unit::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Unit_init_(t_Unit *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::fraction::Fraction a2((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a3((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a4((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a5((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a6((jobject) NULL);
          Unit object((jobject) NULL);

          if (!parseArgs(args, "sDkkkkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = Unit(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Unit_alias(t_Unit *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.alias(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "alias", arg);
          return NULL;
        }

        static PyObject *t_Unit_divide(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", Unit::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.divide(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_Unit_ensureCompatible(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean a2;
          ::java::util::List a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "sKZK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::org::orekit::utils::units::Unit::ensureCompatible(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "ensureCompatible", args);
          return NULL;
        }

        static PyObject *t_Unit_equals(t_Unit *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_Unit_fromSI(t_Unit *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::Double a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "O", ::java::lang::PY_TYPE(Double), &a0))
              {
                OBJ_CALL(result = self->object.fromSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.fromSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "fromSI", args);
          return NULL;
        }

        static PyObject *t_Unit_getAngle(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getAngle());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getCurrent(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getLength(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getLength());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getMass(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getMass());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getName(t_Unit *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Unit_getScale(t_Unit *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Unit_getTime(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getTime());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_hashCode(t_Unit *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_Unit_multiply(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", Unit::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.multiply(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_Unit_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::utils::units::Unit::parse(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_Unit_power(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::hipparchus::fraction::Fraction::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.power(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "power", args);
          return NULL;
        }

        static PyObject *t_Unit_sameDimension(t_Unit *self, PyObject *arg)
        {
          Unit a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", Unit::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.sameDimension(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sameDimension", arg);
          return NULL;
        }

        static PyObject *t_Unit_sameDimensionSI(t_Unit *self)
        {
          Unit result((jobject) NULL);
          OBJ_CALL(result = self->object.sameDimensionSI());
          return t_Unit::wrap_Object(result);
        }

        static PyObject *t_Unit_scale(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.scale(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scale", args);
          return NULL;
        }

        static PyObject *t_Unit_sqrt(t_Unit *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.sqrt(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sqrt", arg);
          return NULL;
        }

        static PyObject *t_Unit_toSI(t_Unit *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::Double a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "O", ::java::lang::PY_TYPE(Double), &a0))
              {
                OBJ_CALL(result = self->object.toSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.toSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "toSI", args);
          return NULL;
        }

        static PyObject *t_Unit_toString(t_Unit *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_Unit_get__angle(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getAngle());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__current(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__length(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getLength());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__mass(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getMass());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__name(t_Unit *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Unit_get__time(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getTime());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *GLONASSNumericalPropagator::class$ = NULL;
        jmethodID *GLONASSNumericalPropagator::mids$ = NULL;
        bool GLONASSNumericalPropagator::live$ = false;

        jclass GLONASSNumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/GLONASSNumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bcc36abbe353bf79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/data/DataContext;Z)V");
            mids$[mid_getGLONASSOrbitalElements_44dc208271d1b6f9] = env->getMethodID(cls, "getGLONASSOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;");
            mids$[mid_propagate_fbff2ff5554d95e1] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_createMapper_2bea84b26b1efc07] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_getMainStateEquations_e1fa3ce287fe2655] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLONASSNumericalPropagator::GLONASSNumericalPropagator(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::attitudes::AttitudeProvider & a3, jdouble a4, const ::org::orekit::data::DataContext & a5, jboolean a6) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_bcc36abbe353bf79, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6)) {}

        ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements GLONASSNumericalPropagator::getGLONASSOrbitalElements() const
        {
          return ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getGLONASSOrbitalElements_44dc208271d1b6f9]));
        }

        ::org::orekit::propagation::SpacecraftState GLONASSNumericalPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_fbff2ff5554d95e1], a0.this$));
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
      namespace numerical {
        static PyObject *t_GLONASSNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLONASSNumericalPropagator_init_(t_GLONASSNumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLONASSNumericalPropagator_getGLONASSOrbitalElements(t_GLONASSNumericalPropagator *self);
        static PyObject *t_GLONASSNumericalPropagator_propagate(t_GLONASSNumericalPropagator *self, PyObject *args);
        static PyObject *t_GLONASSNumericalPropagator_get__gLONASSOrbitalElements(t_GLONASSNumericalPropagator *self, void *data);
        static PyGetSetDef t_GLONASSNumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_GLONASSNumericalPropagator, gLONASSOrbitalElements),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GLONASSNumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_GLONASSNumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, getGLONASSOrbitalElements, METH_NOARGS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLONASSNumericalPropagator)[] = {
          { Py_tp_methods, t_GLONASSNumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_GLONASSNumericalPropagator_init_ },
          { Py_tp_getset, t_GLONASSNumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLONASSNumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(GLONASSNumericalPropagator, t_GLONASSNumericalPropagator, GLONASSNumericalPropagator);

        void t_GLONASSNumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(GLONASSNumericalPropagator), &PY_TYPE_DEF(GLONASSNumericalPropagator), module, "GLONASSNumericalPropagator", 0);
        }

        void t_GLONASSNumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "class_", make_descriptor(GLONASSNumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "wrapfn_", make_descriptor(t_GLONASSNumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLONASSNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLONASSNumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_GLONASSNumericalPropagator::wrap_Object(GLONASSNumericalPropagator(((t_GLONASSNumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_GLONASSNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLONASSNumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLONASSNumericalPropagator_init_(t_GLONASSNumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
          ::org::orekit::frames::Frame a2((jobject) NULL);
          ::org::orekit::attitudes::AttitudeProvider a3((jobject) NULL);
          jdouble a4;
          ::org::orekit::data::DataContext a5((jobject) NULL);
          jboolean a6;
          GLONASSNumericalPropagator object((jobject) NULL);

          if (!parseArgs(args, "kkkkDkZ", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = GLONASSNumericalPropagator(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GLONASSNumericalPropagator_getGLONASSOrbitalElements(t_GLONASSNumericalPropagator *self)
        {
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements result((jobject) NULL);
          OBJ_CALL(result = self->object.getGLONASSOrbitalElements());
          return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(result);
        }

        static PyObject *t_GLONASSNumericalPropagator_propagate(t_GLONASSNumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.propagate(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(GLONASSNumericalPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_GLONASSNumericalPropagator_get__gLONASSOrbitalElements(t_GLONASSNumericalPropagator *self, void *data)
        {
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements value((jobject) NULL);
          OBJ_CALL(value = self->object.getGLONASSOrbitalElements());
          return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonPropagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonPropagator::class$ = NULL;
      jmethodID *PythonPropagator::mids$ = NULL;
      bool PythonPropagator::live$ = false;

      jclass PythonPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_81bc0d009507f0f4] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_efb7003d866d4523] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_2afa36052df4765d] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_18d439b26e70ccd0] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_37528d110cff6b74] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_c6311115fea01a34] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_808e9f10a9e4927b] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_fbff2ff5554d95e1] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_a69ef29c3ea1e1fa] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setEphemerisModeHandler_bacb99df21c3a796] = env->getMethodID(cls, "setEphemerisModeHandler", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
          mids$[mid_setupMatricesComputation_ae2572b7a98390d4] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonPropagator::PythonPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonPropagator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonPropagator_init_(t_PythonPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonPropagator_finalize(t_PythonPropagator *self);
      static PyObject *t_PythonPropagator_pythonExtension(t_PythonPropagator *self, PyObject *args);
      static void JNICALL t_PythonPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_setEphemerisModeHandler18(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonPropagator_setupMatricesComputation19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonPropagator_get__self(t_PythonPropagator *self, void *data);
      static PyGetSetDef t_PythonPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonPropagator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonPropagator)[] = {
        { Py_tp_methods, t_PythonPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonPropagator_init_ },
        { Py_tp_getset, t_PythonPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonPropagator, t_PythonPropagator, PythonPropagator);

      void t_PythonPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonPropagator), &PY_TYPE_DEF(PythonPropagator), module, "PythonPropagator", 1);
      }

      void t_PythonPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagator), "class_", make_descriptor(PythonPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagator), "wrapfn_", make_descriptor(t_PythonPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V", (void *) t_PythonPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;", (void *) t_PythonPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonPropagator_getManagedAdditionalStates9 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;", (void *) t_PythonPropagator_getMultiplexer10 },
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonPropagator_getPVCoordinates11 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonPropagator_isAdditionalStateManaged12 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonPropagator_propagate13 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonPropagator_propagate14 },
          { "pythonDecRef", "()V", (void *) t_PythonPropagator_pythonDecRef15 },
          { "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonPropagator_resetInitialState16 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonPropagator_setAttitudeProvider17 },
          { "setEphemerisModeHandler", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V", (void *) t_PythonPropagator_setEphemerisModeHandler18 },
          { "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;", (void *) t_PythonPropagator_setupMatricesComputation19 },
        };
        env->registerNatives(cls, methods, 20);
      }

      static PyObject *t_PythonPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonPropagator::wrap_Object(PythonPropagator(((t_PythonPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonPropagator_init_(t_PythonPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonPropagator object((jobject) NULL);

        INT_CALL(object = PythonPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonPropagator_finalize(t_PythonPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonPropagator_pythonExtension(t_PythonPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_AdditionalStateProvider::wrap_Object(::org::orekit::propagation::AdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalStateProviders", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getAdditionalStateProviders", result);
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

      static jobject JNICALL t_PythonPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getAttitudeProvider", result);
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

      static jobject JNICALL t_PythonPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::EphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getFrame", result);
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

      static jobject JNICALL t_PythonPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("getInitialState", result);
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

      static jobject JNICALL t_PythonPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::String > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getManagedAdditionalStates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[s", &value))
        {
          throwTypeError("getManagedAdditionalStates", result);
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

      static jobject JNICALL t_PythonPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::StepHandlerMultiplexer::initializeClass, &value))
        {
          throwTypeError("getMultiplexer", result);
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

      static jobject JNICALL t_PythonPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static jboolean JNICALL t_PythonPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isAdditionalStateManaged", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isAdditionalStateManaged", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static jobject JNICALL t_PythonPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "setAttitudeProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_setEphemerisModeHandler18(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::sampling::t_OrekitStepHandler::wrap_Object(::org::orekit::propagation::sampling::OrekitStepHandler(a0));
        PyObject *result = PyObject_CallMethod(obj, "setEphemerisModeHandler", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonPropagator_setupMatricesComputation19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::MatricesHarvester value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *o1 = ::org::hipparchus::linear::t_RealMatrix::wrap_Object(::org::hipparchus::linear::RealMatrix(a1));
        PyObject *o2 = ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(::org::orekit::utils::DoubleArrayDictionary(a2));
        PyObject *result = PyObject_CallMethod(obj, "setupMatricesComputation", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::MatricesHarvester::initializeClass, &value))
        {
          throwTypeError("setupMatricesComputation", result);
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

      static PyObject *t_PythonPropagator_get__self(t_PythonPropagator *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarD.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarD::class$ = NULL;
          jmethodID *CopolarD::mids$ = NULL;
          bool CopolarD::live$ = false;

          jclass CopolarD::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarD");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cd_dff5885c2c873297] = env->getMethodID(cls, "cd", "()D");
              mids$[mid_nd_dff5885c2c873297] = env->getMethodID(cls, "nd", "()D");
              mids$[mid_sd_dff5885c2c873297] = env->getMethodID(cls, "sd", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarD::cd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cd_dff5885c2c873297]);
          }

          jdouble CopolarD::nd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_nd_dff5885c2c873297]);
          }

          jdouble CopolarD::sd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sd_dff5885c2c873297]);
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_CopolarD_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarD_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarD_cd(t_CopolarD *self);
          static PyObject *t_CopolarD_nd(t_CopolarD *self);
          static PyObject *t_CopolarD_sd(t_CopolarD *self);

          static PyMethodDef t_CopolarD__methods_[] = {
            DECLARE_METHOD(t_CopolarD, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarD, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarD, cd, METH_NOARGS),
            DECLARE_METHOD(t_CopolarD, nd, METH_NOARGS),
            DECLARE_METHOD(t_CopolarD, sd, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarD)[] = {
            { Py_tp_methods, t_CopolarD__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarD)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarD, t_CopolarD, CopolarD);

          void t_CopolarD::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarD), &PY_TYPE_DEF(CopolarD), module, "CopolarD", 0);
          }

          void t_CopolarD::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "class_", make_descriptor(CopolarD::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "wrapfn_", make_descriptor(t_CopolarD::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarD_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarD::initializeClass, 1)))
              return NULL;
            return t_CopolarD::wrap_Object(CopolarD(((t_CopolarD *) arg)->object.this$));
          }
          static PyObject *t_CopolarD_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarD::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarD_cd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cd());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarD_nd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.nd());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarD_sd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.sd());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanLoadDeformationCoefficients::class$ = NULL;
          jmethodID *OceanLoadDeformationCoefficients::mids$ = NULL;
          bool OceanLoadDeformationCoefficients::live$ = false;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::GEGOUT = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_1996 = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_2003 = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_2010 = NULL;

          jclass OceanLoadDeformationCoefficients::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCoefficients_60c7040667a7dc5c] = env->getMethodID(cls, "getCoefficients", "()[D");
              mids$[mid_valueOf_815c15baced2232a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_values_1052e2990c2c19df] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GEGOUT = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "GEGOUT", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_1996 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_1996", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_2003 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_2003", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_2010 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_2010", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jdouble > OceanLoadDeformationCoefficients::getCoefficients() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_60c7040667a7dc5c]));
          }

          OceanLoadDeformationCoefficients OceanLoadDeformationCoefficients::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OceanLoadDeformationCoefficients(env->callStaticObjectMethod(cls, mids$[mid_valueOf_815c15baced2232a], a0.this$));
          }

          JArray< OceanLoadDeformationCoefficients > OceanLoadDeformationCoefficients::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OceanLoadDeformationCoefficients >(env->callStaticObjectMethod(cls, mids$[mid_values_1052e2990c2c19df]));
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
      namespace gravity {
        namespace potential {
          static PyObject *t_OceanLoadDeformationCoefficients_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadDeformationCoefficients_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadDeformationCoefficients_of_(t_OceanLoadDeformationCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadDeformationCoefficients_getCoefficients(t_OceanLoadDeformationCoefficients *self);
          static PyObject *t_OceanLoadDeformationCoefficients_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OceanLoadDeformationCoefficients_values(PyTypeObject *type);
          static PyObject *t_OceanLoadDeformationCoefficients_get__coefficients(t_OceanLoadDeformationCoefficients *self, void *data);
          static PyObject *t_OceanLoadDeformationCoefficients_get__parameters_(t_OceanLoadDeformationCoefficients *self, void *data);
          static PyGetSetDef t_OceanLoadDeformationCoefficients__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadDeformationCoefficients, coefficients),
            DECLARE_GET_FIELD(t_OceanLoadDeformationCoefficients, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadDeformationCoefficients__methods_[] = {
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, of_, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, getCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadDeformationCoefficients)[] = {
            { Py_tp_methods, t_OceanLoadDeformationCoefficients__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OceanLoadDeformationCoefficients__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadDeformationCoefficients)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OceanLoadDeformationCoefficients, t_OceanLoadDeformationCoefficients, OceanLoadDeformationCoefficients);
          PyObject *t_OceanLoadDeformationCoefficients::wrap_Object(const OceanLoadDeformationCoefficients& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OceanLoadDeformationCoefficients::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OceanLoadDeformationCoefficients *self = (t_OceanLoadDeformationCoefficients *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OceanLoadDeformationCoefficients::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OceanLoadDeformationCoefficients::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OceanLoadDeformationCoefficients *self = (t_OceanLoadDeformationCoefficients *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OceanLoadDeformationCoefficients::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadDeformationCoefficients), &PY_TYPE_DEF(OceanLoadDeformationCoefficients), module, "OceanLoadDeformationCoefficients", 0);
          }

          void t_OceanLoadDeformationCoefficients::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "class_", make_descriptor(OceanLoadDeformationCoefficients::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "wrapfn_", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "boxfn_", make_descriptor(boxObject));
            env->getClass(OceanLoadDeformationCoefficients::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "GEGOUT", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::GEGOUT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_1996", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_1996)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_2003", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_2010", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_2010)));
          }

          static PyObject *t_OceanLoadDeformationCoefficients_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadDeformationCoefficients::initializeClass, 1)))
              return NULL;
            return t_OceanLoadDeformationCoefficients::wrap_Object(OceanLoadDeformationCoefficients(((t_OceanLoadDeformationCoefficients *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadDeformationCoefficients_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadDeformationCoefficients::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OceanLoadDeformationCoefficients_of_(t_OceanLoadDeformationCoefficients *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OceanLoadDeformationCoefficients_getCoefficients(t_OceanLoadDeformationCoefficients *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getCoefficients());
            return result.wrap();
          }

          static PyObject *t_OceanLoadDeformationCoefficients_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OceanLoadDeformationCoefficients result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::valueOf(a0));
              return t_OceanLoadDeformationCoefficients::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OceanLoadDeformationCoefficients_values(PyTypeObject *type)
          {
            JArray< OceanLoadDeformationCoefficients > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::values());
            return JArray<jobject>(result.this$).wrap(t_OceanLoadDeformationCoefficients::wrap_jobject);
          }
          static PyObject *t_OceanLoadDeformationCoefficients_get__parameters_(t_OceanLoadDeformationCoefficients *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OceanLoadDeformationCoefficients_get__coefficients(t_OceanLoadDeformationCoefficients *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getCoefficients());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/DumpReplayer$Result.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *DumpReplayer$Result::class$ = NULL;
        jmethodID *DumpReplayer$Result::mids$ = NULL;
        bool DumpReplayer$Result::live$ = false;

        jclass DumpReplayer$Result::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/DumpReplayer$Result");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getExpected_4d26fd885228c716] = env->getMethodID(cls, "getExpected", "()Ljava/lang/Object;");
            mids$[mid_getReplayed_4d26fd885228c716] = env->getMethodID(cls, "getReplayed", "()Ljava/lang/Object;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::Object DumpReplayer$Result::getExpected() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getExpected_4d26fd885228c716]));
        }

        ::java::lang::Object DumpReplayer$Result::getReplayed() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getReplayed_4d26fd885228c716]));
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
      namespace errors {
        static PyObject *t_DumpReplayer$Result_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpReplayer$Result_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpReplayer$Result_getExpected(t_DumpReplayer$Result *self);
        static PyObject *t_DumpReplayer$Result_getReplayed(t_DumpReplayer$Result *self);
        static PyObject *t_DumpReplayer$Result_get__expected(t_DumpReplayer$Result *self, void *data);
        static PyObject *t_DumpReplayer$Result_get__replayed(t_DumpReplayer$Result *self, void *data);
        static PyGetSetDef t_DumpReplayer$Result__fields_[] = {
          DECLARE_GET_FIELD(t_DumpReplayer$Result, expected),
          DECLARE_GET_FIELD(t_DumpReplayer$Result, replayed),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DumpReplayer$Result__methods_[] = {
          DECLARE_METHOD(t_DumpReplayer$Result, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer$Result, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer$Result, getExpected, METH_NOARGS),
          DECLARE_METHOD(t_DumpReplayer$Result, getReplayed, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DumpReplayer$Result)[] = {
          { Py_tp_methods, t_DumpReplayer$Result__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DumpReplayer$Result__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DumpReplayer$Result)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DumpReplayer$Result, t_DumpReplayer$Result, DumpReplayer$Result);

        void t_DumpReplayer$Result::install(PyObject *module)
        {
          installType(&PY_TYPE(DumpReplayer$Result), &PY_TYPE_DEF(DumpReplayer$Result), module, "DumpReplayer$Result", 0);
        }

        void t_DumpReplayer$Result::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "class_", make_descriptor(DumpReplayer$Result::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "wrapfn_", make_descriptor(t_DumpReplayer$Result::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DumpReplayer$Result_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DumpReplayer$Result::initializeClass, 1)))
            return NULL;
          return t_DumpReplayer$Result::wrap_Object(DumpReplayer$Result(((t_DumpReplayer$Result *) arg)->object.this$));
        }
        static PyObject *t_DumpReplayer$Result_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DumpReplayer$Result::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DumpReplayer$Result_getExpected(t_DumpReplayer$Result *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getExpected());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_DumpReplayer$Result_getReplayed(t_DumpReplayer$Result *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getReplayed());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_DumpReplayer$Result_get__expected(t_DumpReplayer$Result *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getExpected());
          return ::java::lang::t_Object::wrap_Object(value);
        }

        static PyObject *t_DumpReplayer$Result_get__replayed(t_DumpReplayer$Result *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getReplayed());
          return ::java::lang::t_Object::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BoundaryProjection::class$ = NULL;
        jmethodID *BoundaryProjection::mids$ = NULL;
        bool BoundaryProjection::live$ = false;

        jclass BoundaryProjection::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BoundaryProjection");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c53bbff1c5a45bc0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/Point;Lorg/hipparchus/geometry/Point;D)V");
            mids$[mid_getOffset_dff5885c2c873297] = env->getMethodID(cls, "getOffset", "()D");
            mids$[mid_getOriginal_e164db6eb4ec1f00] = env->getMethodID(cls, "getOriginal", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getProjected_e164db6eb4ec1f00] = env->getMethodID(cls, "getProjected", "()Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BoundaryProjection::BoundaryProjection(const ::org::hipparchus::geometry::Point & a0, const ::org::hipparchus::geometry::Point & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c53bbff1c5a45bc0, a0.this$, a1.this$, a2)) {}

        jdouble BoundaryProjection::getOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOffset_dff5885c2c873297]);
        }

        ::org::hipparchus::geometry::Point BoundaryProjection::getOriginal() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getOriginal_e164db6eb4ec1f00]));
        }

        ::org::hipparchus::geometry::Point BoundaryProjection::getProjected() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getProjected_e164db6eb4ec1f00]));
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
        static PyObject *t_BoundaryProjection_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryProjection_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryProjection_of_(t_BoundaryProjection *self, PyObject *args);
        static int t_BoundaryProjection_init_(t_BoundaryProjection *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BoundaryProjection_getOffset(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_getOriginal(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_getProjected(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_get__offset(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__original(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__projected(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__parameters_(t_BoundaryProjection *self, void *data);
        static PyGetSetDef t_BoundaryProjection__fields_[] = {
          DECLARE_GET_FIELD(t_BoundaryProjection, offset),
          DECLARE_GET_FIELD(t_BoundaryProjection, original),
          DECLARE_GET_FIELD(t_BoundaryProjection, projected),
          DECLARE_GET_FIELD(t_BoundaryProjection, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BoundaryProjection__methods_[] = {
          DECLARE_METHOD(t_BoundaryProjection, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryProjection, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryProjection, of_, METH_VARARGS),
          DECLARE_METHOD(t_BoundaryProjection, getOffset, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryProjection, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryProjection, getProjected, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BoundaryProjection)[] = {
          { Py_tp_methods, t_BoundaryProjection__methods_ },
          { Py_tp_init, (void *) t_BoundaryProjection_init_ },
          { Py_tp_getset, t_BoundaryProjection__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BoundaryProjection)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BoundaryProjection, t_BoundaryProjection, BoundaryProjection);
        PyObject *t_BoundaryProjection::wrap_Object(const BoundaryProjection& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryProjection::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryProjection *self = (t_BoundaryProjection *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BoundaryProjection::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryProjection::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryProjection *self = (t_BoundaryProjection *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BoundaryProjection::install(PyObject *module)
        {
          installType(&PY_TYPE(BoundaryProjection), &PY_TYPE_DEF(BoundaryProjection), module, "BoundaryProjection", 0);
        }

        void t_BoundaryProjection::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "class_", make_descriptor(BoundaryProjection::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "wrapfn_", make_descriptor(t_BoundaryProjection::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BoundaryProjection_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BoundaryProjection::initializeClass, 1)))
            return NULL;
          return t_BoundaryProjection::wrap_Object(BoundaryProjection(((t_BoundaryProjection *) arg)->object.this$));
        }
        static PyObject *t_BoundaryProjection_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BoundaryProjection::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BoundaryProjection_of_(t_BoundaryProjection *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BoundaryProjection_init_(t_BoundaryProjection *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          BoundaryProjection object((jobject) NULL);

          if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::Point::initializeClass, ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1, &p1, ::org::hipparchus::geometry::t_Point::parameters_, &a2))
          {
            INT_CALL(object = BoundaryProjection(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BoundaryProjection_getOffset(t_BoundaryProjection *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BoundaryProjection_getOriginal(t_BoundaryProjection *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BoundaryProjection_getProjected(t_BoundaryProjection *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getProjected());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_BoundaryProjection_get__parameters_(t_BoundaryProjection *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BoundaryProjection_get__offset(t_BoundaryProjection *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOffset());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BoundaryProjection_get__original(t_BoundaryProjection *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_BoundaryProjection_get__projected(t_BoundaryProjection *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getProjected());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/BaseRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *BaseRandomGenerator::class$ = NULL;
      jmethodID *BaseRandomGenerator::mids$ = NULL;
      bool BaseRandomGenerator::live$ = false;

      jclass BaseRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/BaseRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextGaussian_dff5885c2c873297] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_2235cd056f5a882b] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_02b241598e254a3f] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_99803b0791f320ff] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3a8e7649f31fdb20] = env->getMethodID(cls, "setSeed", "(J)V");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_clearCache_0fa09c18fee449d5] = env->getMethodID(cls, "clearCache", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble BaseRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_dff5885c2c873297]);
      }

      jint BaseRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_2235cd056f5a882b], a0);
      }

      jlong BaseRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_02b241598e254a3f], a0);
      }

      void BaseRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_99803b0791f320ff], a0);
      }

      void BaseRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3a8e7649f31fdb20], a0);
      }

      ::java::lang::String BaseRandomGenerator::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_BaseRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseRandomGenerator_nextGaussian(t_BaseRandomGenerator *self);
      static PyObject *t_BaseRandomGenerator_nextInt(t_BaseRandomGenerator *self, PyObject *arg);
      static PyObject *t_BaseRandomGenerator_nextLong(t_BaseRandomGenerator *self, PyObject *arg);
      static PyObject *t_BaseRandomGenerator_setSeed(t_BaseRandomGenerator *self, PyObject *args);
      static PyObject *t_BaseRandomGenerator_toString(t_BaseRandomGenerator *self, PyObject *args);
      static int t_BaseRandomGenerator_set__seed(t_BaseRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_BaseRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_BaseRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_BaseRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseRandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_BaseRandomGenerator, nextInt, METH_O),
        DECLARE_METHOD(t_BaseRandomGenerator, nextLong, METH_O),
        DECLARE_METHOD(t_BaseRandomGenerator, setSeed, METH_VARARGS),
        DECLARE_METHOD(t_BaseRandomGenerator, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseRandomGenerator)[] = {
        { Py_tp_methods, t_BaseRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BaseRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BaseRandomGenerator, t_BaseRandomGenerator, BaseRandomGenerator);

      void t_BaseRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseRandomGenerator), &PY_TYPE_DEF(BaseRandomGenerator), module, "BaseRandomGenerator", 0);
      }

      void t_BaseRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRandomGenerator), "class_", make_descriptor(BaseRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRandomGenerator), "wrapfn_", make_descriptor(t_BaseRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_BaseRandomGenerator::wrap_Object(BaseRandomGenerator(((t_BaseRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_BaseRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseRandomGenerator_nextGaussian(t_BaseRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BaseRandomGenerator_nextInt(t_BaseRandomGenerator *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nextInt(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextInt", arg);
        return NULL;
      }

      static PyObject *t_BaseRandomGenerator_nextLong(t_BaseRandomGenerator *self, PyObject *arg)
      {
        jlong a0;
        jlong result;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.nextLong(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", arg);
        return NULL;
      }

      static PyObject *t_BaseRandomGenerator_setSeed(t_BaseRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
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

        PyErr_SetArgsError((PyObject *) self, "setSeed", args);
        return NULL;
      }

      static PyObject *t_BaseRandomGenerator_toString(t_BaseRandomGenerator *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(BaseRandomGenerator), (PyObject *) self, "toString", args, 2);
      }

      static int t_BaseRandomGenerator_set__seed(t_BaseRandomGenerator *self, PyObject *arg, void *data)
      {
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
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTJ2SquaredClosedFormContext::class$ = NULL;
            jmethodID *FieldDSSTJ2SquaredClosedFormContext::mids$ = NULL;
            bool FieldDSSTJ2SquaredClosedFormContext::live$ = false;

            jclass FieldDSSTJ2SquaredClosedFormContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b8c95322f4a30a39] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getA4_eba8e72a22c984ac] = env->getMethodID(cls, "getA4", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getAlpha4_dff5885c2c873297] = env->getMethodID(cls, "getAlpha4", "()D");
                mids$[mid_getC_eba8e72a22c984ac] = env->getMethodID(cls, "getC", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getEta_eba8e72a22c984ac] = env->getMethodID(cls, "getEta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getS2_eba8e72a22c984ac] = env->getMethodID(cls, "getS2", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldDSSTJ2SquaredClosedFormContext::FieldDSSTJ2SquaredClosedFormContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_b8c95322f4a30a39, a0.this$, a1.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getA4() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA4_eba8e72a22c984ac]));
            }

            jdouble FieldDSSTJ2SquaredClosedFormContext::getAlpha4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha4_dff5885c2c873297]);
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getC() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getC_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getEta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEta_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getS2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getS2_eba8e72a22c984ac]));
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
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_of_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args);
            static int t_FieldDSSTJ2SquaredClosedFormContext_init_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getA4(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getAlpha4(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getC(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getEta(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getS2(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__a4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__alpha4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__c(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__eta(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__s2(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__parameters_(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyGetSetDef t_FieldDSSTJ2SquaredClosedFormContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, a4),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, alpha4),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, c),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, eta),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, s2),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTJ2SquaredClosedFormContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getA4, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getAlpha4, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getC, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getEta, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getS2, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTJ2SquaredClosedFormContext)[] = {
              { Py_tp_methods, t_FieldDSSTJ2SquaredClosedFormContext__methods_ },
              { Py_tp_init, (void *) t_FieldDSSTJ2SquaredClosedFormContext_init_ },
              { Py_tp_getset, t_FieldDSSTJ2SquaredClosedFormContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTJ2SquaredClosedFormContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTJ2SquaredClosedFormContext, t_FieldDSSTJ2SquaredClosedFormContext, FieldDSSTJ2SquaredClosedFormContext);
            PyObject *t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(const FieldDSSTJ2SquaredClosedFormContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTJ2SquaredClosedFormContext *self = (t_FieldDSSTJ2SquaredClosedFormContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTJ2SquaredClosedFormContext *self = (t_FieldDSSTJ2SquaredClosedFormContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTJ2SquaredClosedFormContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), &PY_TYPE_DEF(FieldDSSTJ2SquaredClosedFormContext), module, "FieldDSSTJ2SquaredClosedFormContext", 0);
            }

            void t_FieldDSSTJ2SquaredClosedFormContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "class_", make_descriptor(FieldDSSTJ2SquaredClosedFormContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "wrapfn_", make_descriptor(t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTJ2SquaredClosedFormContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(FieldDSSTJ2SquaredClosedFormContext(((t_FieldDSSTJ2SquaredClosedFormContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTJ2SquaredClosedFormContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_of_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldDSSTJ2SquaredClosedFormContext_init_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              FieldDSSTJ2SquaredClosedFormContext object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1))
              {
                INT_CALL(object = FieldDSSTJ2SquaredClosedFormContext(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getA4(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA4());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getAlpha4(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha4());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getC(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getC());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getEta(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getEta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getS2(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getS2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__parameters_(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__a4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA4());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__alpha4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha4());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__c(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getC());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__eta(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getEta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__s2(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getS2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldKeplerianPropagator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldKeplerianPropagator::class$ = NULL;
        jmethodID *FieldKeplerianPropagator::mids$ = NULL;
        bool FieldKeplerianPropagator::live$ = false;

        jclass FieldKeplerianPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldKeplerianPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1cbcb2601e7d1334] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_init$_a724b159b42485f4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_78df6e2abd2c4c9f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_11e81d70dfcadffc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_e726da50143f87ae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_resetInitialState_1463d3d0d52f94dd] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_propagateOrbit_3de5e0312fd3e848] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_getMass_2a5f05be83ff251d] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_resetIntermediateState_33f1c56ea7775d4e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_1cbcb2601e7d1334, a0.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a724b159b42485f4, a0.this$, a1.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_78df6e2abd2c4c9f, a0.this$, a1.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_11e81d70dfcadffc, a0.this$, a1.this$, a2.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e726da50143f87ae, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::util::List FieldKeplerianPropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        void FieldKeplerianPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_1463d3d0d52f94dd], a0.this$);
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
      namespace analytical {
        static PyObject *t_FieldKeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldKeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldKeplerianPropagator_of_(t_FieldKeplerianPropagator *self, PyObject *args);
        static int t_FieldKeplerianPropagator_init_(t_FieldKeplerianPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldKeplerianPropagator_getParametersDrivers(t_FieldKeplerianPropagator *self, PyObject *args);
        static PyObject *t_FieldKeplerianPropagator_resetInitialState(t_FieldKeplerianPropagator *self, PyObject *args);
        static PyObject *t_FieldKeplerianPropagator_get__parametersDrivers(t_FieldKeplerianPropagator *self, void *data);
        static PyObject *t_FieldKeplerianPropagator_get__parameters_(t_FieldKeplerianPropagator *self, void *data);
        static PyGetSetDef t_FieldKeplerianPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldKeplerianPropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldKeplerianPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldKeplerianPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldKeplerianPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldKeplerianPropagator)[] = {
          { Py_tp_methods, t_FieldKeplerianPropagator__methods_ },
          { Py_tp_init, (void *) t_FieldKeplerianPropagator_init_ },
          { Py_tp_getset, t_FieldKeplerianPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldKeplerianPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldKeplerianPropagator, t_FieldKeplerianPropagator, FieldKeplerianPropagator);
        PyObject *t_FieldKeplerianPropagator::wrap_Object(const FieldKeplerianPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldKeplerianPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldKeplerianPropagator *self = (t_FieldKeplerianPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldKeplerianPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldKeplerianPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldKeplerianPropagator *self = (t_FieldKeplerianPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldKeplerianPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldKeplerianPropagator), &PY_TYPE_DEF(FieldKeplerianPropagator), module, "FieldKeplerianPropagator", 0);
        }

        void t_FieldKeplerianPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianPropagator), "class_", make_descriptor(FieldKeplerianPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianPropagator), "wrapfn_", make_descriptor(t_FieldKeplerianPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldKeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldKeplerianPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldKeplerianPropagator::wrap_Object(FieldKeplerianPropagator(((t_FieldKeplerianPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldKeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldKeplerianPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldKeplerianPropagator_of_(t_FieldKeplerianPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldKeplerianPropagator_init_(t_FieldKeplerianPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1, a2, a3));
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

        static PyObject *t_FieldKeplerianPropagator_getParametersDrivers(t_FieldKeplerianPropagator *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldKeplerianPropagator), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldKeplerianPropagator_resetInitialState(t_FieldKeplerianPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldKeplerianPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldKeplerianPropagator_get__parameters_(t_FieldKeplerianPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldKeplerianPropagator_get__parametersDrivers(t_FieldKeplerianPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1020Data::class$ = NULL;
              jmethodID *Rtcm1020Data::mids$ = NULL;
              bool Rtcm1020Data::live$ = false;

              jclass Rtcm1020Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_areAdditionalDataAvailable_b108b35ef48e27bd] = env->getMethodID(cls, "areAdditionalDataAvailable", "()Z");
                  mids$[mid_getBN_570ce0828f81a2c1] = env->getMethodID(cls, "getBN", "()I");
                  mids$[mid_getDeltaTN_dff5885c2c873297] = env->getMethodID(cls, "getDeltaTN", "()D");
                  mids$[mid_getEn_570ce0828f81a2c1] = env->getMethodID(cls, "getEn", "()I");
                  mids$[mid_getFT_570ce0828f81a2c1] = env->getMethodID(cls, "getFT", "()I");
                  mids$[mid_getGlonassNavigationMessage_17df07811745e427] = env->getMethodID(cls, "getGlonassNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;");
                  mids$[mid_getGlonassNavigationMessage_42c1c61c25a503ca] = env->getMethodID(cls, "getGlonassNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;");
                  mids$[mid_getLNFifthString_570ce0828f81a2c1] = env->getMethodID(cls, "getLNFifthString", "()I");
                  mids$[mid_getLNThirdString_570ce0828f81a2c1] = env->getMethodID(cls, "getLNThirdString", "()I");
                  mids$[mid_getM_570ce0828f81a2c1] = env->getMethodID(cls, "getM", "()I");
                  mids$[mid_getN4_570ce0828f81a2c1] = env->getMethodID(cls, "getN4", "()I");
                  mids$[mid_getNA_570ce0828f81a2c1] = env->getMethodID(cls, "getNA", "()I");
                  mids$[mid_getNt_570ce0828f81a2c1] = env->getMethodID(cls, "getNt", "()I");
                  mids$[mid_getP_570ce0828f81a2c1] = env->getMethodID(cls, "getP", "()I");
                  mids$[mid_getP1_570ce0828f81a2c1] = env->getMethodID(cls, "getP1", "()I");
                  mids$[mid_getP2_570ce0828f81a2c1] = env->getMethodID(cls, "getP2", "()I");
                  mids$[mid_getP3_570ce0828f81a2c1] = env->getMethodID(cls, "getP3", "()I");
                  mids$[mid_getP4_570ce0828f81a2c1] = env->getMethodID(cls, "getP4", "()I");
                  mids$[mid_getTauC_dff5885c2c873297] = env->getMethodID(cls, "getTauC", "()D");
                  mids$[mid_getTauGps_dff5885c2c873297] = env->getMethodID(cls, "getTauGps", "()D");
                  mids$[mid_getTk_dff5885c2c873297] = env->getMethodID(cls, "getTk", "()D");
                  mids$[mid_isHealthAvailable_b108b35ef48e27bd] = env->getMethodID(cls, "isHealthAvailable", "()Z");
                  mids$[mid_setAreAdditionalDataAvailable_bd04c9335fb9e4cf] = env->getMethodID(cls, "setAreAdditionalDataAvailable", "(Z)V");
                  mids$[mid_setBN_99803b0791f320ff] = env->getMethodID(cls, "setBN", "(I)V");
                  mids$[mid_setDeltaTN_17db3a65980d3441] = env->getMethodID(cls, "setDeltaTN", "(D)V");
                  mids$[mid_setEn_99803b0791f320ff] = env->getMethodID(cls, "setEn", "(I)V");
                  mids$[mid_setFT_99803b0791f320ff] = env->getMethodID(cls, "setFT", "(I)V");
                  mids$[mid_setGlonassNavigationMessage_03382bf5f212b94b] = env->getMethodID(cls, "setGlonassNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;)V");
                  mids$[mid_setHealthAvailabilityIndicator_bd04c9335fb9e4cf] = env->getMethodID(cls, "setHealthAvailabilityIndicator", "(Z)V");
                  mids$[mid_setLNFifthString_99803b0791f320ff] = env->getMethodID(cls, "setLNFifthString", "(I)V");
                  mids$[mid_setLNThirdString_99803b0791f320ff] = env->getMethodID(cls, "setLNThirdString", "(I)V");
                  mids$[mid_setM_99803b0791f320ff] = env->getMethodID(cls, "setM", "(I)V");
                  mids$[mid_setN4_99803b0791f320ff] = env->getMethodID(cls, "setN4", "(I)V");
                  mids$[mid_setNA_99803b0791f320ff] = env->getMethodID(cls, "setNA", "(I)V");
                  mids$[mid_setNt_99803b0791f320ff] = env->getMethodID(cls, "setNt", "(I)V");
                  mids$[mid_setP_99803b0791f320ff] = env->getMethodID(cls, "setP", "(I)V");
                  mids$[mid_setP1_99803b0791f320ff] = env->getMethodID(cls, "setP1", "(I)V");
                  mids$[mid_setP2_99803b0791f320ff] = env->getMethodID(cls, "setP2", "(I)V");
                  mids$[mid_setP3_99803b0791f320ff] = env->getMethodID(cls, "setP3", "(I)V");
                  mids$[mid_setP4_99803b0791f320ff] = env->getMethodID(cls, "setP4", "(I)V");
                  mids$[mid_setTauC_17db3a65980d3441] = env->getMethodID(cls, "setTauC", "(D)V");
                  mids$[mid_setTauGps_17db3a65980d3441] = env->getMethodID(cls, "setTauGps", "(D)V");
                  mids$[mid_setTk_17db3a65980d3441] = env->getMethodID(cls, "setTk", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1020Data::Rtcm1020Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jboolean Rtcm1020Data::areAdditionalDataAvailable() const
              {
                return env->callBooleanMethod(this$, mids$[mid_areAdditionalDataAvailable_b108b35ef48e27bd]);
              }

              jint Rtcm1020Data::getBN() const
              {
                return env->callIntMethod(this$, mids$[mid_getBN_570ce0828f81a2c1]);
              }

              jdouble Rtcm1020Data::getDeltaTN() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaTN_dff5885c2c873297]);
              }

              jint Rtcm1020Data::getEn() const
              {
                return env->callIntMethod(this$, mids$[mid_getEn_570ce0828f81a2c1]);
              }

              jint Rtcm1020Data::getFT() const
              {
                return env->callIntMethod(this$, mids$[mid_getFT_570ce0828f81a2c1]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage Rtcm1020Data::getGlonassNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessage_17df07811745e427]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage Rtcm1020Data::getGlonassNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessage_42c1c61c25a503ca], a0.this$));
              }

              jint Rtcm1020Data::getLNFifthString() const
              {
                return env->callIntMethod(this$, mids$[mid_getLNFifthString_570ce0828f81a2c1]);
              }

              jint Rtcm1020Data::getLNThirdString() const
              {
                return env->callIntMethod(this$, mids$[mid_getLNThirdString_570ce0828f81a2c1]);
              }

              jint Rtcm1020Data::getM() const
              {
                return env->callIntMethod(this$, mids$[mid_getM_570ce0828f81a2c1]);
              }

              jint Rtcm1020Data::getN4() const
              {
                return env->callIntMethod(this$, mids$[mid_getN4_570ce0828f81a2c1]);
              }

              jint Rtcm1020Data::getNA() const
              {
                return env->callIntMethod(this$, mids$[mid_getNA_570ce0828f81a2c1]);
              }

              jint Rtcm1020Data::getNt() const
              {
                return env->callIntMethod(this$, mids$[mid_getNt_570ce0828f81a2c1]);
              }

              jint Rtcm1020Data::getP() const
              {
                return env->callIntMethod(this$, mids$[mid_getP_570ce0828f81a2c1]);
              }

              jint Rtcm1020Data::getP1() const
              {
                return env->callIntMethod(this$, mids$[mid_getP1_570ce0828f81a2c1]);
              }

              jint Rtcm1020Data::getP2() const
              {
                return env->callIntMethod(this$, mids$[mid_getP2_570ce0828f81a2c1]);
              }

              jint Rtcm1020Data::getP3() const
              {
                return env->callIntMethod(this$, mids$[mid_getP3_570ce0828f81a2c1]);
              }

              jint Rtcm1020Data::getP4() const
              {
                return env->callIntMethod(this$, mids$[mid_getP4_570ce0828f81a2c1]);
              }

              jdouble Rtcm1020Data::getTauC() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTauC_dff5885c2c873297]);
              }

              jdouble Rtcm1020Data::getTauGps() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTauGps_dff5885c2c873297]);
              }

              jdouble Rtcm1020Data::getTk() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTk_dff5885c2c873297]);
              }

              jboolean Rtcm1020Data::isHealthAvailable() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isHealthAvailable_b108b35ef48e27bd]);
              }

              void Rtcm1020Data::setAreAdditionalDataAvailable(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAreAdditionalDataAvailable_bd04c9335fb9e4cf], a0);
              }

              void Rtcm1020Data::setBN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBN_99803b0791f320ff], a0);
              }

              void Rtcm1020Data::setDeltaTN(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaTN_17db3a65980d3441], a0);
              }

              void Rtcm1020Data::setEn(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEn_99803b0791f320ff], a0);
              }

              void Rtcm1020Data::setFT(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFT_99803b0791f320ff], a0);
              }

              void Rtcm1020Data::setGlonassNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGlonassNavigationMessage_03382bf5f212b94b], a0.this$);
              }

              void Rtcm1020Data::setHealthAvailabilityIndicator(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHealthAvailabilityIndicator_bd04c9335fb9e4cf], a0);
              }

              void Rtcm1020Data::setLNFifthString(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setLNFifthString_99803b0791f320ff], a0);
              }

              void Rtcm1020Data::setLNThirdString(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setLNThirdString_99803b0791f320ff], a0);
              }

              void Rtcm1020Data::setM(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setM_99803b0791f320ff], a0);
              }

              void Rtcm1020Data::setN4(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setN4_99803b0791f320ff], a0);
              }

              void Rtcm1020Data::setNA(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNA_99803b0791f320ff], a0);
              }

              void Rtcm1020Data::setNt(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNt_99803b0791f320ff], a0);
              }

              void Rtcm1020Data::setP(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP_99803b0791f320ff], a0);
              }

              void Rtcm1020Data::setP1(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP1_99803b0791f320ff], a0);
              }

              void Rtcm1020Data::setP2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP2_99803b0791f320ff], a0);
              }

              void Rtcm1020Data::setP3(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP3_99803b0791f320ff], a0);
              }

              void Rtcm1020Data::setP4(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP4_99803b0791f320ff], a0);
              }

              void Rtcm1020Data::setTauC(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTauC_17db3a65980d3441], a0);
              }

              void Rtcm1020Data::setTauGps(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTauGps_17db3a65980d3441], a0);
              }

              void Rtcm1020Data::setTk(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTk_17db3a65980d3441], a0);
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
            namespace ephemeris {
              static PyObject *t_Rtcm1020Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1020Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1020Data_init_(t_Rtcm1020Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1020Data_areAdditionalDataAvailable(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getBN(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getDeltaTN(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getEn(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getFT(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *args);
              static PyObject *t_Rtcm1020Data_getLNFifthString(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getLNThirdString(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getM(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getN4(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getNA(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getNt(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP1(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP2(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP3(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP4(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getTauC(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getTauGps(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getTk(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_isHealthAvailable(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_setAreAdditionalDataAvailable(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setBN(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setDeltaTN(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setEn(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setFT(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setHealthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setLNFifthString(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setLNThirdString(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setM(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setN4(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setNA(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setNt(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP1(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP2(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP3(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP4(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setTauC(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setTauGps(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setTk(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_get__bN(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__bN(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__deltaTN(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__deltaTN(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__en(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__en(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__fT(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__fT(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__glonassNavigationMessage(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__glonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static int t_Rtcm1020Data_set__healthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__healthAvailable(t_Rtcm1020Data *self, void *data);
              static PyObject *t_Rtcm1020Data_get__lNFifthString(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__lNFifthString(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__lNThirdString(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__lNThirdString(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__m(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__m(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__n4(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__n4(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__nA(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__nA(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__nt(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__nt(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p1(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p1(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p2(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p2(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p3(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p3(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p4(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p4(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__tauC(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__tauC(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__tauGps(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__tauGps(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__tk(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__tk(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1020Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, bN),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, deltaTN),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, en),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, fT),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, glonassNavigationMessage),
                DECLARE_SET_FIELD(t_Rtcm1020Data, healthAvailabilityIndicator),
                DECLARE_GET_FIELD(t_Rtcm1020Data, healthAvailable),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, lNFifthString),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, lNThirdString),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, m),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, n4),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, nA),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, nt),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p1),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p2),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p3),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p4),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, tauC),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, tauGps),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, tk),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1020Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1020Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020Data, areAdditionalDataAvailable, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getBN, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getDeltaTN, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getEn, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getFT, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getGlonassNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getLNFifthString, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getLNThirdString, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getM, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getN4, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getNA, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getNt, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP1, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP2, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP3, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP4, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getTauC, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getTauGps, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getTk, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, isHealthAvailable, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, setAreAdditionalDataAvailable, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setBN, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setDeltaTN, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setEn, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setFT, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setGlonassNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setHealthAvailabilityIndicator, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setLNFifthString, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setLNThirdString, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setM, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setN4, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setNA, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setNt, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP1, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP2, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP3, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP4, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setTauC, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setTauGps, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setTk, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1020Data)[] = {
                { Py_tp_methods, t_Rtcm1020Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1020Data_init_ },
                { Py_tp_getset, t_Rtcm1020Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1020Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1020Data, t_Rtcm1020Data, Rtcm1020Data);

              void t_Rtcm1020Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1020Data), &PY_TYPE_DEF(Rtcm1020Data), module, "Rtcm1020Data", 0);
              }

              void t_Rtcm1020Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020Data), "class_", make_descriptor(Rtcm1020Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020Data), "wrapfn_", make_descriptor(t_Rtcm1020Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1020Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1020Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1020Data::wrap_Object(Rtcm1020Data(((t_Rtcm1020Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1020Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1020Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1020Data_init_(t_Rtcm1020Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1020Data object((jobject) NULL);

                INT_CALL(object = Rtcm1020Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1020Data_areAdditionalDataAvailable(t_Rtcm1020Data *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.areAdditionalDataAvailable());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Rtcm1020Data_getBN(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getBN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getDeltaTN(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaTN());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_getEn(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getEn());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getFT(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getFT());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getGlonassNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getGlonassNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getGlonassNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_getLNFifthString(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getLNFifthString());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getLNThirdString(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getLNThirdString());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getM(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getM());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getN4(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getN4());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getNA(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNA());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getNt(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNt());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP1(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP1());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP2(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP2());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP3(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP3());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP4(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP4());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getTauC(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTauC());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_getTauGps(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTauGps());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_getTk(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTk());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_isHealthAvailable(t_Rtcm1020Data *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isHealthAvailable());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Rtcm1020Data_setAreAdditionalDataAvailable(t_Rtcm1020Data *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setAreAdditionalDataAvailable(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAreAdditionalDataAvailable", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setBN(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setBN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBN", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setDeltaTN(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeltaTN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeltaTN", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setEn(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setEn(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEn", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setFT(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setFT(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFT", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGlonassNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGlonassNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setHealthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setHealthAvailabilityIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setHealthAvailabilityIndicator", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setLNFifthString(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setLNFifthString(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLNFifthString", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setLNThirdString(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setLNThirdString(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLNThirdString", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setM(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setM(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setM", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setN4(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setN4(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setN4", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setNA(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNA(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNA", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setNt(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNt(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNt", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP1(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP1(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP1", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP2(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP2(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP2", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP3(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP3(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP3", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP4(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP4(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP4", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setTauC(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTauC(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTauC", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setTauGps(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTauGps(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTauGps", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setTk(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTk(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTk", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_get__bN(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getBN());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__bN(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setBN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bN", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__deltaTN(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaTN());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__deltaTN(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeltaTN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deltaTN", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__en(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getEn());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__en(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setEn(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "en", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__fT(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getFT());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__fT(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setFT(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fT", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__glonassNavigationMessage(t_Rtcm1020Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getGlonassNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1020Data_set__glonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGlonassNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "glonassNavigationMessage", arg);
                return -1;
              }

              static int t_Rtcm1020Data_set__healthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jboolean value;
                  if (!parseArg(arg, "Z", &value))
                  {
                    INT_CALL(self->object.setHealthAvailabilityIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "healthAvailabilityIndicator", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__healthAvailable(t_Rtcm1020Data *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isHealthAvailable());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_Rtcm1020Data_get__lNFifthString(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getLNFifthString());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__lNFifthString(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setLNFifthString(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "lNFifthString", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__lNThirdString(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getLNThirdString());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__lNThirdString(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setLNThirdString(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "lNThirdString", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__m(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getM());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__m(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setM(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "m", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__n4(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getN4());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__n4(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setN4(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "n4", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__nA(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNA());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__nA(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNA(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nA", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__nt(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNt());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__nt(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNt(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nt", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p1(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP1());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p1(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP1(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p1", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p2(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP2());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p2(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP2(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p2", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p3(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP3());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p3(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP3(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p3", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p4(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP4());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p4(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP4(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p4", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__tauC(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTauC());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__tauC(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTauC(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tauC", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__tauGps(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTauGps());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__tauGps(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTauGps(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tauGps", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__tk(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTk());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__tk(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTk(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tk", arg);
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
#include "org/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GPSCivilianNavigationMessage::class$ = NULL;
            jmethodID *GPSCivilianNavigationMessage::mids$ = NULL;
            bool GPSCivilianNavigationMessage::live$ = false;

            jclass GPSCivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_bd04c9335fb9e4cf] = env->getMethodID(cls, "<init>", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSCivilianNavigationMessage::GPSCivilianNavigationMessage(jboolean a0) : ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_bd04c9335fb9e4cf, a0)) {}
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GPSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GPSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GPSCivilianNavigationMessage_init_(t_GPSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_GPSCivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GPSCivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSCivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GPSCivilianNavigationMessage)[] = {
              { Py_tp_methods, t_GPSCivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GPSCivilianNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GPSCivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage),
              NULL
            };

            DEFINE_TYPE(GPSCivilianNavigationMessage, t_GPSCivilianNavigationMessage, GPSCivilianNavigationMessage);

            void t_GPSCivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GPSCivilianNavigationMessage), &PY_TYPE_DEF(GPSCivilianNavigationMessage), module, "GPSCivilianNavigationMessage", 0);
            }

            void t_GPSCivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSCivilianNavigationMessage), "class_", make_descriptor(GPSCivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSCivilianNavigationMessage), "wrapfn_", make_descriptor(t_GPSCivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSCivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GPSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GPSCivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GPSCivilianNavigationMessage::wrap_Object(GPSCivilianNavigationMessage(((t_GPSCivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GPSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GPSCivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GPSCivilianNavigationMessage_init_(t_GPSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              GPSCivilianNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = GPSCivilianNavigationMessage(a0));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmRelativeMetadata::class$ = NULL;
            jmethodID *CdmRelativeMetadata::mids$ = NULL;
            bool CdmRelativeMetadata::live$ = false;

            jclass CdmRelativeMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addComment_d0bc48d5b00dc40c] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
                mids$[mid_checkNotNull_dcb614849fe787ea] = env->getMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Ljava/lang/Enum;)V");
                mids$[mid_checkScreenVolumeConditions_0fa09c18fee449d5] = env->getMethodID(cls, "checkScreenVolumeConditions", "()V");
                mids$[mid_getApproachAngle_dff5885c2c873297] = env->getMethodID(cls, "getApproachAngle", "()D");
                mids$[mid_getCollisionPercentile_d0635cea09dc178c] = env->getMethodID(cls, "getCollisionPercentile", "()[I");
                mids$[mid_getCollisionProbaMethod_1dc70063264cd4f8] = env->getMethodID(cls, "getCollisionProbaMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getCollisionProbability_dff5885c2c873297] = env->getMethodID(cls, "getCollisionProbability", "()D");
                mids$[mid_getComment_2afa36052df4765d] = env->getMethodID(cls, "getComment", "()Ljava/util/List;");
                mids$[mid_getConjunctionId_11b109bd155ca898] = env->getMethodID(cls, "getConjunctionId", "()Ljava/lang/String;");
                mids$[mid_getMahalanobisDistance_dff5885c2c873297] = env->getMethodID(cls, "getMahalanobisDistance", "()D");
                mids$[mid_getMaxCollisionProbability_dff5885c2c873297] = env->getMethodID(cls, "getMaxCollisionProbability", "()D");
                mids$[mid_getMaxCollisionProbabilityMethod_1dc70063264cd4f8] = env->getMethodID(cls, "getMaxCollisionProbabilityMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getMissDistance_dff5885c2c873297] = env->getMethodID(cls, "getMissDistance", "()D");
                mids$[mid_getNextMessageEpoch_85703d13e302437e] = env->getMethodID(cls, "getNextMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getPreviousMessageEpoch_85703d13e302437e] = env->getMethodID(cls, "getPreviousMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getPreviousMessageId_11b109bd155ca898] = env->getMethodID(cls, "getPreviousMessageId", "()Ljava/lang/String;");
                mids$[mid_getRelativePosition_d52645e0d4c07563] = env->getMethodID(cls, "getRelativePosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getRelativeSpeed_dff5885c2c873297] = env->getMethodID(cls, "getRelativeSpeed", "()D");
                mids$[mid_getRelativeVelocity_d52645e0d4c07563] = env->getMethodID(cls, "getRelativeVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getScreenEntryTime_85703d13e302437e] = env->getMethodID(cls, "getScreenEntryTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getScreenExitTime_85703d13e302437e] = env->getMethodID(cls, "getScreenExitTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getScreenPcThreshold_dff5885c2c873297] = env->getMethodID(cls, "getScreenPcThreshold", "()D");
                mids$[mid_getScreenType_4c3c84cfd1df633b] = env->getMethodID(cls, "getScreenType", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");
                mids$[mid_getScreenVolumeFrame_c9526cd35a34ff41] = env->getMethodID(cls, "getScreenVolumeFrame", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");
                mids$[mid_getScreenVolumeRadius_dff5885c2c873297] = env->getMethodID(cls, "getScreenVolumeRadius", "()D");
                mids$[mid_getScreenVolumeShape_edfe08671412204c] = env->getMethodID(cls, "getScreenVolumeShape", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");
                mids$[mid_getScreenVolumeX_dff5885c2c873297] = env->getMethodID(cls, "getScreenVolumeX", "()D");
                mids$[mid_getScreenVolumeY_dff5885c2c873297] = env->getMethodID(cls, "getScreenVolumeY", "()D");
                mids$[mid_getScreenVolumeZ_dff5885c2c873297] = env->getMethodID(cls, "getScreenVolumeZ", "()D");
                mids$[mid_getSefiCollisionProbability_dff5885c2c873297] = env->getMethodID(cls, "getSefiCollisionProbability", "()D");
                mids$[mid_getSefiCollisionProbabilityMethod_1dc70063264cd4f8] = env->getMethodID(cls, "getSefiCollisionProbabilityMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getSefiFragmentationModel_11b109bd155ca898] = env->getMethodID(cls, "getSefiFragmentationModel", "()Ljava/lang/String;");
                mids$[mid_getStartScreenPeriod_85703d13e302437e] = env->getMethodID(cls, "getStartScreenPeriod", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getStopScreenPeriod_85703d13e302437e] = env->getMethodID(cls, "getStopScreenPeriod", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTca_85703d13e302437e] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimeSystem_ee0a6b60b63a969e] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
                mids$[mid_setApproachAngle_17db3a65980d3441] = env->getMethodID(cls, "setApproachAngle", "(D)V");
                mids$[mid_setCollisionPercentile_d147d7ce001e2d45] = env->getMethodID(cls, "setCollisionPercentile", "([I)V");
                mids$[mid_setCollisionProbaMethod_e2c3decdacf83401] = env->getMethodID(cls, "setCollisionProbaMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setCollisionProbability_17db3a65980d3441] = env->getMethodID(cls, "setCollisionProbability", "(D)V");
                mids$[mid_setConjunctionId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setConjunctionId", "(Ljava/lang/String;)V");
                mids$[mid_setMahalanobisDistance_17db3a65980d3441] = env->getMethodID(cls, "setMahalanobisDistance", "(D)V");
                mids$[mid_setMaxCollisionProbability_17db3a65980d3441] = env->getMethodID(cls, "setMaxCollisionProbability", "(D)V");
                mids$[mid_setMaxCollisionProbabilityMethod_e2c3decdacf83401] = env->getMethodID(cls, "setMaxCollisionProbabilityMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setMissDistance_17db3a65980d3441] = env->getMethodID(cls, "setMissDistance", "(D)V");
                mids$[mid_setNextMessageEpoch_600a2a61652bc473] = env->getMethodID(cls, "setNextMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setPreviousMessageEpoch_600a2a61652bc473] = env->getMethodID(cls, "setPreviousMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setPreviousMessageId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setPreviousMessageId", "(Ljava/lang/String;)V");
                mids$[mid_setRelativePositionN_17db3a65980d3441] = env->getMethodID(cls, "setRelativePositionN", "(D)V");
                mids$[mid_setRelativePositionR_17db3a65980d3441] = env->getMethodID(cls, "setRelativePositionR", "(D)V");
                mids$[mid_setRelativePositionT_17db3a65980d3441] = env->getMethodID(cls, "setRelativePositionT", "(D)V");
                mids$[mid_setRelativeSpeed_17db3a65980d3441] = env->getMethodID(cls, "setRelativeSpeed", "(D)V");
                mids$[mid_setRelativeVelocityN_17db3a65980d3441] = env->getMethodID(cls, "setRelativeVelocityN", "(D)V");
                mids$[mid_setRelativeVelocityR_17db3a65980d3441] = env->getMethodID(cls, "setRelativeVelocityR", "(D)V");
                mids$[mid_setRelativeVelocityT_17db3a65980d3441] = env->getMethodID(cls, "setRelativeVelocityT", "(D)V");
                mids$[mid_setScreenEntryTime_600a2a61652bc473] = env->getMethodID(cls, "setScreenEntryTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setScreenExitTime_600a2a61652bc473] = env->getMethodID(cls, "setScreenExitTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setScreenPcThreshold_17db3a65980d3441] = env->getMethodID(cls, "setScreenPcThreshold", "(D)V");
                mids$[mid_setScreenType_e50a1364ae4b8842] = env->getMethodID(cls, "setScreenType", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;)V");
                mids$[mid_setScreenVolumeFrame_d95c2fcff45bc246] = env->getMethodID(cls, "setScreenVolumeFrame", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;)V");
                mids$[mid_setScreenVolumeRadius_17db3a65980d3441] = env->getMethodID(cls, "setScreenVolumeRadius", "(D)V");
                mids$[mid_setScreenVolumeShape_32ea11c65ba738be] = env->getMethodID(cls, "setScreenVolumeShape", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;)V");
                mids$[mid_setScreenVolumeX_17db3a65980d3441] = env->getMethodID(cls, "setScreenVolumeX", "(D)V");
                mids$[mid_setScreenVolumeY_17db3a65980d3441] = env->getMethodID(cls, "setScreenVolumeY", "(D)V");
                mids$[mid_setScreenVolumeZ_17db3a65980d3441] = env->getMethodID(cls, "setScreenVolumeZ", "(D)V");
                mids$[mid_setSefiCollisionProbability_17db3a65980d3441] = env->getMethodID(cls, "setSefiCollisionProbability", "(D)V");
                mids$[mid_setSefiCollisionProbabilityMethod_e2c3decdacf83401] = env->getMethodID(cls, "setSefiCollisionProbabilityMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setSefiFragmentationModel_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSefiFragmentationModel", "(Ljava/lang/String;)V");
                mids$[mid_setStartScreenPeriod_600a2a61652bc473] = env->getMethodID(cls, "setStartScreenPeriod", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setStopScreenPeriod_600a2a61652bc473] = env->getMethodID(cls, "setStopScreenPeriod", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTca_600a2a61652bc473] = env->getMethodID(cls, "setTca", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimeSystem_08d7048316d8d7b2] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");
                mids$[mid_validate_0fa09c18fee449d5] = env->getMethodID(cls, "validate", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmRelativeMetadata::CdmRelativeMetadata() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void CdmRelativeMetadata::addComment(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_addComment_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmRelativeMetadata::checkNotNull(const ::java::lang::Object & a0, const ::java::lang::Enum & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_checkNotNull_dcb614849fe787ea], a0.this$, a1.this$);
            }

            void CdmRelativeMetadata::checkScreenVolumeConditions() const
            {
              env->callVoidMethod(this$, mids$[mid_checkScreenVolumeConditions_0fa09c18fee449d5]);
            }

            jdouble CdmRelativeMetadata::getApproachAngle() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApproachAngle_dff5885c2c873297]);
            }

            JArray< jint > CdmRelativeMetadata::getCollisionPercentile() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCollisionPercentile_d0635cea09dc178c]));
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getCollisionProbaMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getCollisionProbaMethod_1dc70063264cd4f8]));
            }

            jdouble CdmRelativeMetadata::getCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCollisionProbability_dff5885c2c873297]);
            }

            ::java::util::List CdmRelativeMetadata::getComment() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComment_2afa36052df4765d]));
            }

            ::java::lang::String CdmRelativeMetadata::getConjunctionId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConjunctionId_11b109bd155ca898]));
            }

            jdouble CdmRelativeMetadata::getMahalanobisDistance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMahalanobisDistance_dff5885c2c873297]);
            }

            jdouble CdmRelativeMetadata::getMaxCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMaxCollisionProbability_dff5885c2c873297]);
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getMaxCollisionProbabilityMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getMaxCollisionProbabilityMethod_1dc70063264cd4f8]));
            }

            jdouble CdmRelativeMetadata::getMissDistance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMissDistance_dff5885c2c873297]);
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getNextMessageEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextMessageEpoch_85703d13e302437e]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getPreviousMessageEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPreviousMessageEpoch_85703d13e302437e]));
            }

            ::java::lang::String CdmRelativeMetadata::getPreviousMessageId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPreviousMessageId_11b109bd155ca898]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D CdmRelativeMetadata::getRelativePosition() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRelativePosition_d52645e0d4c07563]));
            }

            jdouble CdmRelativeMetadata::getRelativeSpeed() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRelativeSpeed_dff5885c2c873297]);
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D CdmRelativeMetadata::getRelativeVelocity() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRelativeVelocity_d52645e0d4c07563]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getScreenEntryTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getScreenEntryTime_85703d13e302437e]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getScreenExitTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getScreenExitTime_85703d13e302437e]));
            }

            jdouble CdmRelativeMetadata::getScreenPcThreshold() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenPcThreshold_dff5885c2c873297]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenType CdmRelativeMetadata::getScreenType() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenType(env->callObjectMethod(this$, mids$[mid_getScreenType_4c3c84cfd1df633b]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame CdmRelativeMetadata::getScreenVolumeFrame() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame(env->callObjectMethod(this$, mids$[mid_getScreenVolumeFrame_c9526cd35a34ff41]));
            }

            jdouble CdmRelativeMetadata::getScreenVolumeRadius() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeRadius_dff5885c2c873297]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape CdmRelativeMetadata::getScreenVolumeShape() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape(env->callObjectMethod(this$, mids$[mid_getScreenVolumeShape_edfe08671412204c]));
            }

            jdouble CdmRelativeMetadata::getScreenVolumeX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeX_dff5885c2c873297]);
            }

            jdouble CdmRelativeMetadata::getScreenVolumeY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeY_dff5885c2c873297]);
            }

            jdouble CdmRelativeMetadata::getScreenVolumeZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeZ_dff5885c2c873297]);
            }

            jdouble CdmRelativeMetadata::getSefiCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSefiCollisionProbability_dff5885c2c873297]);
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getSefiCollisionProbabilityMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getSefiCollisionProbabilityMethod_1dc70063264cd4f8]));
            }

            ::java::lang::String CdmRelativeMetadata::getSefiFragmentationModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSefiFragmentationModel_11b109bd155ca898]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getStartScreenPeriod() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartScreenPeriod_85703d13e302437e]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getStopScreenPeriod() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopScreenPeriod_85703d13e302437e]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getTca() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_85703d13e302437e]));
            }

            ::org::orekit::files::ccsds::definitions::TimeSystem CdmRelativeMetadata::getTimeSystem() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_ee0a6b60b63a969e]));
            }

            void CdmRelativeMetadata::setApproachAngle(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setApproachAngle_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setCollisionPercentile(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionPercentile_d147d7ce001e2d45], a0.this$);
            }

            void CdmRelativeMetadata::setCollisionProbaMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionProbaMethod_e2c3decdacf83401], a0.this$);
            }

            void CdmRelativeMetadata::setCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionProbability_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setConjunctionId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setConjunctionId_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmRelativeMetadata::setMahalanobisDistance(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMahalanobisDistance_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setMaxCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxCollisionProbability_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setMaxCollisionProbabilityMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxCollisionProbabilityMethod_e2c3decdacf83401], a0.this$);
            }

            void CdmRelativeMetadata::setMissDistance(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMissDistance_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setNextMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setNextMessageEpoch_600a2a61652bc473], a0.this$);
            }

            void CdmRelativeMetadata::setPreviousMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPreviousMessageEpoch_600a2a61652bc473], a0.this$);
            }

            void CdmRelativeMetadata::setPreviousMessageId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPreviousMessageId_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmRelativeMetadata::setRelativePositionN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionN_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setRelativePositionR(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionR_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setRelativePositionT(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionT_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setRelativeSpeed(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeSpeed_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityN_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityR(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityR_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityT(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityT_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setScreenEntryTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenEntryTime_600a2a61652bc473], a0.this$);
            }

            void CdmRelativeMetadata::setScreenExitTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenExitTime_600a2a61652bc473], a0.this$);
            }

            void CdmRelativeMetadata::setScreenPcThreshold(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenPcThreshold_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setScreenType(const ::org::orekit::files::ccsds::ndm::cdm::ScreenType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenType_e50a1364ae4b8842], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeFrame(const ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeFrame_d95c2fcff45bc246], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeRadius(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeRadius_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeShape(const ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeShape_32ea11c65ba738be], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeX_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeY_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeZ_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setSefiCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiCollisionProbability_17db3a65980d3441], a0);
            }

            void CdmRelativeMetadata::setSefiCollisionProbabilityMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiCollisionProbabilityMethod_e2c3decdacf83401], a0.this$);
            }

            void CdmRelativeMetadata::setSefiFragmentationModel(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiFragmentationModel_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmRelativeMetadata::setStartScreenPeriod(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStartScreenPeriod_600a2a61652bc473], a0.this$);
            }

            void CdmRelativeMetadata::setStopScreenPeriod(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStopScreenPeriod_600a2a61652bc473], a0.this$);
            }

            void CdmRelativeMetadata::setTca(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTca_600a2a61652bc473], a0.this$);
            }

            void CdmRelativeMetadata::setTimeSystem(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeSystem_08d7048316d8d7b2], a0.this$);
            }

            void CdmRelativeMetadata::validate() const
            {
              env->callVoidMethod(this$, mids$[mid_validate_0fa09c18fee449d5]);
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
            static PyObject *t_CdmRelativeMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmRelativeMetadata_init_(t_CdmRelativeMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmRelativeMetadata_addComment(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_checkNotNull(t_CdmRelativeMetadata *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadata_checkScreenVolumeConditions(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getApproachAngle(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionPercentile(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionProbaMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getComment(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getConjunctionId(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMahalanobisDistance(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMissDistance(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getNextMessageEpoch(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getPreviousMessageEpoch(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getPreviousMessageId(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativePosition(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativeSpeed(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativeVelocity(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenEntryTime(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenExitTime(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenPcThreshold(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenType(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeFrame(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeRadius(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeShape(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeX(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeY(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeZ(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiFragmentationModel(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getStartScreenPeriod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getStopScreenPeriod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getTca(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getTimeSystem(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_setApproachAngle(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setConjunctionId(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMissDistance(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setNextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setPreviousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setPreviousMessageId(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionN(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionR(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionT(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenExitTime(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenType(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setStartScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setStopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setTca(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setTimeSystem(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_validate(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_get__approachAngle(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__approachAngle(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionPercentile(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionProbaMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__comment(t_CdmRelativeMetadata *self, void *data);
            static PyObject *t_CdmRelativeMetadata_get__conjunctionId(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__conjunctionId(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__mahalanobisDistance(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__mahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__maxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__missDistance(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__missDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__nextMessageEpoch(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__nextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__previousMessageEpoch(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__previousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__previousMessageId(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__previousMessageId(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativePosition(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionN(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionR(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionT(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativeSpeed(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativeVelocity(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenEntryTime(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenExitTime(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenExitTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenPcThreshold(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenType(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenType(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeFrame(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeRadius(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeShape(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeX(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeY(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeZ(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiFragmentationModel(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__startScreenPeriod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__startScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__stopScreenPeriod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__stopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__tca(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__tca(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__timeSystem(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__timeSystem(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmRelativeMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, approachAngle),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionPercentile),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionProbaMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionProbability),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, comment),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, conjunctionId),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, mahalanobisDistance),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, maxCollisionProbability),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, maxCollisionProbabilityMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, missDistance),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, nextMessageEpoch),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, previousMessageEpoch),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, previousMessageId),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, relativePosition),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionN),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionR),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionT),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, relativeSpeed),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, relativeVelocity),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityN),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityR),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityT),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenEntryTime),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenExitTime),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenPcThreshold),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenType),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeFrame),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeRadius),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeShape),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeX),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeY),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeZ),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiCollisionProbability),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiCollisionProbabilityMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiFragmentationModel),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, startScreenPeriod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, stopScreenPeriod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, tca),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, timeSystem),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmRelativeMetadata__methods_[] = {
              DECLARE_METHOD(t_CdmRelativeMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadata, addComment, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, checkNotNull, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, checkScreenVolumeConditions, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getApproachAngle, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionPercentile, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionProbaMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getComment, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getConjunctionId, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMahalanobisDistance, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMaxCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMaxCollisionProbabilityMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMissDistance, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getNextMessageEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getPreviousMessageEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getPreviousMessageId, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativePosition, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativeSpeed, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativeVelocity, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenEntryTime, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenExitTime, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenPcThreshold, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenType, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeRadius, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeShape, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeX, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeY, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeZ, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiCollisionProbabilityMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiFragmentationModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getStartScreenPeriod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getStopScreenPeriod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getTca, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getTimeSystem, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, setApproachAngle, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionPercentile, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionProbaMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setConjunctionId, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMahalanobisDistance, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMaxCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMaxCollisionProbabilityMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMissDistance, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setNextMessageEpoch, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setPreviousMessageEpoch, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setPreviousMessageId, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionN, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionR, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionT, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeSpeed, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityN, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityR, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityT, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenEntryTime, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenExitTime, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenPcThreshold, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenType, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeFrame, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeRadius, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeShape, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeX, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeY, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeZ, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiCollisionProbabilityMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiFragmentationModel, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setStartScreenPeriod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setStopScreenPeriod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setTca, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setTimeSystem, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, validate, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmRelativeMetadata)[] = {
              { Py_tp_methods, t_CdmRelativeMetadata__methods_ },
              { Py_tp_init, (void *) t_CdmRelativeMetadata_init_ },
              { Py_tp_getset, t_CdmRelativeMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmRelativeMetadata)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmRelativeMetadata, t_CdmRelativeMetadata, CdmRelativeMetadata);

            void t_CdmRelativeMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmRelativeMetadata), &PY_TYPE_DEF(CdmRelativeMetadata), module, "CdmRelativeMetadata", 0);
            }

            void t_CdmRelativeMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "class_", make_descriptor(CdmRelativeMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "wrapfn_", make_descriptor(t_CdmRelativeMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmRelativeMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmRelativeMetadata::initializeClass, 1)))
                return NULL;
              return t_CdmRelativeMetadata::wrap_Object(CdmRelativeMetadata(((t_CdmRelativeMetadata *) arg)->object.this$));
            }
            static PyObject *t_CdmRelativeMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmRelativeMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmRelativeMetadata_init_(t_CdmRelativeMetadata *self, PyObject *args, PyObject *kwds)
            {
              CdmRelativeMetadata object((jobject) NULL);

              INT_CALL(object = CdmRelativeMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_CdmRelativeMetadata_addComment(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.addComment(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addComment", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_checkNotNull(t_CdmRelativeMetadata *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "oK", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkNotNull(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkNotNull", args);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_checkScreenVolumeConditions(t_CdmRelativeMetadata *self)
            {
              OBJ_CALL(self->object.checkScreenVolumeConditions());
              Py_RETURN_NONE;
            }

            static PyObject *t_CdmRelativeMetadata_getApproachAngle(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getApproachAngle());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionPercentile(t_CdmRelativeMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getCollisionPercentile());
              return result.wrap();
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionProbaMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getCollisionProbaMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getComment(t_CdmRelativeMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getComment());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_CdmRelativeMetadata_getConjunctionId(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getConjunctionId());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getMahalanobisDistance(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMahalanobisDistance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMaxCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getMissDistance(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMissDistance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getNextMessageEpoch(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getNextMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getPreviousMessageEpoch(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getPreviousMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getPreviousMessageId(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getPreviousMessageId());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativePosition(t_CdmRelativeMetadata *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativePosition());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativeSpeed(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRelativeSpeed());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativeVelocity(t_CdmRelativeMetadata *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeVelocity());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenEntryTime(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenEntryTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenExitTime(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenExitTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenPcThreshold(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenPcThreshold());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenType(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeFrame(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenVolumeFrame());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeRadius(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeRadius());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeShape(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenVolumeShape());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeX(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeY(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeZ(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSefiCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getSefiCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiFragmentationModel(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSefiFragmentationModel());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getStartScreenPeriod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStartScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getStopScreenPeriod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStopScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getTca(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getTca());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getTimeSystem(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeSystem());
              return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_setApproachAngle(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setApproachAngle(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setApproachAngle", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setCollisionPercentile(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionPercentile", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCollisionProbaMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionProbaMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setConjunctionId(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setConjunctionId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setConjunctionId", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMahalanobisDistance(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMahalanobisDistance", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMaxCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMaxCollisionProbabilityMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxCollisionProbabilityMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMissDistance(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMissDistance(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMissDistance", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setNextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setNextMessageEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setNextMessageEpoch", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setPreviousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setPreviousMessageEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPreviousMessageEpoch", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setPreviousMessageId(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setPreviousMessageId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPreviousMessageId", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionN(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionN", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionR(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionR(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionR", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionT(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionT(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionT", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeSpeed(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeSpeed", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityN", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityR(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityR", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityT(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityT", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setScreenEntryTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenEntryTime", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenExitTime(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setScreenExitTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenExitTime", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenPcThreshold(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenPcThreshold", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenType(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::parameters_))
              {
                OBJ_CALL(self->object.setScreenType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenType", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::parameters_))
              {
                OBJ_CALL(self->object.setScreenVolumeFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeRadius(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeRadius", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::parameters_))
              {
                OBJ_CALL(self->object.setScreenVolumeShape(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeShape", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeX", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeY", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeZ", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSefiCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setSefiCollisionProbabilityMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiCollisionProbabilityMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setSefiFragmentationModel(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiFragmentationModel", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setStartScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStartScreenPeriod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStartScreenPeriod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setStopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStopScreenPeriod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStopScreenPeriod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setTca(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setTca(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTca", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setTimeSystem(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
              {
                OBJ_CALL(self->object.setTimeSystem(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_validate(t_CdmRelativeMetadata *self)
            {
              OBJ_CALL(self->object.validate());
              Py_RETURN_NONE;
            }

            static PyObject *t_CdmRelativeMetadata_get__approachAngle(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getApproachAngle());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__approachAngle(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setApproachAngle(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "approachAngle", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionPercentile(t_CdmRelativeMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getCollisionPercentile());
              return value.wrap();
            }
            static int t_CdmRelativeMetadata_set__collisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setCollisionPercentile(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionPercentile", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionProbaMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getCollisionProbaMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__collisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setCollisionProbaMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionProbaMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__collisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__comment(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getComment());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CdmRelativeMetadata_get__conjunctionId(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getConjunctionId());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__conjunctionId(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setConjunctionId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "conjunctionId", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__mahalanobisDistance(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMahalanobisDistance());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__mahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMahalanobisDistance(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mahalanobisDistance", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMaxCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__maxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMaxCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxCollisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setMaxCollisionProbabilityMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxCollisionProbabilityMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__missDistance(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMissDistance());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__missDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMissDistance(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "missDistance", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__nextMessageEpoch(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getNextMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__nextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setNextMessageEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "nextMessageEpoch", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__previousMessageEpoch(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getPreviousMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__previousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setPreviousMessageEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "previousMessageEpoch", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__previousMessageId(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getPreviousMessageId());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__previousMessageId(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setPreviousMessageId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "previousMessageId", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativePosition(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativePosition());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_CdmRelativeMetadata_set__relativePositionN(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionN", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativePositionR(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionR(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionR", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativePositionT(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionT(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionT", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativeSpeed(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRelativeSpeed());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__relativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeSpeed(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeSpeed", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativeVelocity(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeVelocity());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityN", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityR(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityR", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityT(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityT", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenEntryTime(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenEntryTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenEntryTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenEntryTime", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenExitTime(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenExitTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenExitTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenExitTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenExitTime", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenPcThreshold(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenPcThreshold());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenPcThreshold(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenPcThreshold", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenType(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenType(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenType::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenType", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeFrame(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenVolumeFrame());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenVolumeFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeFrame", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeRadius(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeRadius());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeRadius(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeRadius", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeShape(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenVolumeShape());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenVolumeShape(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeShape", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeX(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeX());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeX", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeY(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeY());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeY", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeZ(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeZ());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeZ", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSefiCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__sefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSefiCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiCollisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getSefiCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setSefiCollisionProbabilityMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiCollisionProbabilityMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiFragmentationModel(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSefiFragmentationModel());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__sefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setSefiFragmentationModel(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiFragmentationModel", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__startScreenPeriod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStartScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__startScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStartScreenPeriod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "startScreenPeriod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__stopScreenPeriod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStopScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__stopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStopScreenPeriod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "stopScreenPeriod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__tca(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getTca());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__tca(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setTca(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tca", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__timeSystem(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeSystem());
              return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__timeSystem(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimeSystem(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
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
#include "org/hipparchus/analysis/function/Sqrt.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sqrt::class$ = NULL;
        jmethodID *Sqrt::mids$ = NULL;
        bool Sqrt::live$ = false;

        jclass Sqrt::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sqrt");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sqrt::Sqrt() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Sqrt::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sqrt::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Sqrt_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sqrt_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sqrt_init_(t_Sqrt *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sqrt_value(t_Sqrt *self, PyObject *args);

        static PyMethodDef t_Sqrt__methods_[] = {
          DECLARE_METHOD(t_Sqrt, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sqrt, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sqrt, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sqrt)[] = {
          { Py_tp_methods, t_Sqrt__methods_ },
          { Py_tp_init, (void *) t_Sqrt_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sqrt)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sqrt, t_Sqrt, Sqrt);

        void t_Sqrt::install(PyObject *module)
        {
          installType(&PY_TYPE(Sqrt), &PY_TYPE_DEF(Sqrt), module, "Sqrt", 0);
        }

        void t_Sqrt::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "class_", make_descriptor(Sqrt::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "wrapfn_", make_descriptor(t_Sqrt::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sqrt_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sqrt::initializeClass, 1)))
            return NULL;
          return t_Sqrt::wrap_Object(Sqrt(((t_Sqrt *) arg)->object.this$));
        }
        static PyObject *t_Sqrt_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sqrt::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sqrt_init_(t_Sqrt *self, PyObject *args, PyObject *kwds)
        {
          Sqrt object((jobject) NULL);

          INT_CALL(object = Sqrt());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sqrt_value(t_Sqrt *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *SigmaEigenvectorsCovarianceKey::class$ = NULL;
            jmethodID *SigmaEigenvectorsCovarianceKey::mids$ = NULL;
            bool SigmaEigenvectorsCovarianceKey::live$ = false;
            SigmaEigenvectorsCovarianceKey *SigmaEigenvectorsCovarianceKey::COMMENT = NULL;
            SigmaEigenvectorsCovarianceKey *SigmaEigenvectorsCovarianceKey::CSIG3EIGVEC3 = NULL;

            jclass SigmaEigenvectorsCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_99f301aa1807780e] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;)Z");
                mids$[mid_valueOf_fb224734339f9cf1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;");
                mids$[mid_values_aa045796a1890a66] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new SigmaEigenvectorsCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;"));
                CSIG3EIGVEC3 = new SigmaEigenvectorsCovarianceKey(env->getStaticObjectField(cls, "CSIG3EIGVEC3", "Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean SigmaEigenvectorsCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_99f301aa1807780e], a0.this$, a1.this$, a2.this$);
            }

            SigmaEigenvectorsCovarianceKey SigmaEigenvectorsCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return SigmaEigenvectorsCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fb224734339f9cf1], a0.this$));
            }

            JArray< SigmaEigenvectorsCovarianceKey > SigmaEigenvectorsCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< SigmaEigenvectorsCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_aa045796a1890a66]));
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
            static PyObject *t_SigmaEigenvectorsCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_of_(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_process(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_get__parameters_(t_SigmaEigenvectorsCovarianceKey *self, void *data);
            static PyGetSetDef t_SigmaEigenvectorsCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_SigmaEigenvectorsCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SigmaEigenvectorsCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SigmaEigenvectorsCovarianceKey)[] = {
              { Py_tp_methods, t_SigmaEigenvectorsCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_SigmaEigenvectorsCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SigmaEigenvectorsCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(SigmaEigenvectorsCovarianceKey, t_SigmaEigenvectorsCovarianceKey, SigmaEigenvectorsCovarianceKey);
            PyObject *t_SigmaEigenvectorsCovarianceKey::wrap_Object(const SigmaEigenvectorsCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SigmaEigenvectorsCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SigmaEigenvectorsCovarianceKey *self = (t_SigmaEigenvectorsCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_SigmaEigenvectorsCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SigmaEigenvectorsCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SigmaEigenvectorsCovarianceKey *self = (t_SigmaEigenvectorsCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_SigmaEigenvectorsCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(SigmaEigenvectorsCovarianceKey), &PY_TYPE_DEF(SigmaEigenvectorsCovarianceKey), module, "SigmaEigenvectorsCovarianceKey", 0);
            }

            void t_SigmaEigenvectorsCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "class_", make_descriptor(SigmaEigenvectorsCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "wrapfn_", make_descriptor(t_SigmaEigenvectorsCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(SigmaEigenvectorsCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "COMMENT", make_descriptor(t_SigmaEigenvectorsCovarianceKey::wrap_Object(*SigmaEigenvectorsCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "CSIG3EIGVEC3", make_descriptor(t_SigmaEigenvectorsCovarianceKey::wrap_Object(*SigmaEigenvectorsCovarianceKey::CSIG3EIGVEC3)));
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SigmaEigenvectorsCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_SigmaEigenvectorsCovarianceKey::wrap_Object(SigmaEigenvectorsCovarianceKey(((t_SigmaEigenvectorsCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_SigmaEigenvectorsCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SigmaEigenvectorsCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_of_(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_process(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              SigmaEigenvectorsCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovarianceKey::valueOf(a0));
                return t_SigmaEigenvectorsCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_values(PyTypeObject *type)
            {
              JArray< SigmaEigenvectorsCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_SigmaEigenvectorsCovarianceKey::wrap_jobject);
            }
            static PyObject *t_SigmaEigenvectorsCovarianceKey_get__parameters_(t_SigmaEigenvectorsCovarianceKey *self, void *data)
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
#include "org/orekit/orbits/OrbitBlender.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *OrbitBlender::class$ = NULL;
      jmethodID *OrbitBlender::mids$ = NULL;
      bool OrbitBlender::live$ = false;

      jclass OrbitBlender::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/OrbitBlender");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6c77d9d7589928e2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/propagation/Propagator;Lorg/orekit/frames/Frame;)V");
          mids$[mid_interpolate_1274df0c3ddd4327] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrbitBlender::OrbitBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::propagation::Propagator & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_6c77d9d7589928e2, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_OrbitBlender_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitBlender_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitBlender_of_(t_OrbitBlender *self, PyObject *args);
      static int t_OrbitBlender_init_(t_OrbitBlender *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrbitBlender_get__parameters_(t_OrbitBlender *self, void *data);
      static PyGetSetDef t_OrbitBlender__fields_[] = {
        DECLARE_GET_FIELD(t_OrbitBlender, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrbitBlender__methods_[] = {
        DECLARE_METHOD(t_OrbitBlender, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitBlender, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitBlender, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrbitBlender)[] = {
        { Py_tp_methods, t_OrbitBlender__methods_ },
        { Py_tp_init, (void *) t_OrbitBlender_init_ },
        { Py_tp_getset, t_OrbitBlender__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrbitBlender)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(OrbitBlender, t_OrbitBlender, OrbitBlender);
      PyObject *t_OrbitBlender::wrap_Object(const OrbitBlender& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitBlender::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitBlender *self = (t_OrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrbitBlender::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitBlender::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitBlender *self = (t_OrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrbitBlender::install(PyObject *module)
      {
        installType(&PY_TYPE(OrbitBlender), &PY_TYPE_DEF(OrbitBlender), module, "OrbitBlender", 0);
      }

      void t_OrbitBlender::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitBlender), "class_", make_descriptor(OrbitBlender::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitBlender), "wrapfn_", make_descriptor(t_OrbitBlender::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitBlender), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrbitBlender_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrbitBlender::initializeClass, 1)))
          return NULL;
        return t_OrbitBlender::wrap_Object(OrbitBlender(((t_OrbitBlender *) arg)->object.this$));
      }
      static PyObject *t_OrbitBlender_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrbitBlender::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrbitBlender_of_(t_OrbitBlender *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OrbitBlender_init_(t_OrbitBlender *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction a0((jobject) NULL);
        ::org::orekit::propagation::Propagator a1((jobject) NULL);
        ::org::orekit::frames::Frame a2((jobject) NULL);
        OrbitBlender object((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = OrbitBlender(a0, a1, a2));
          self->object = object;
          self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
      static PyObject *t_OrbitBlender_get__parameters_(t_OrbitBlender *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonStreamOpener.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonStreamOpener::class$ = NULL;
      jmethodID *PythonStreamOpener::mids$ = NULL;
      bool PythonStreamOpener::live$ = false;

      jclass PythonStreamOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonStreamOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_openOnce_51fdc45647b8e866] = env->getMethodID(cls, "openOnce", "()Ljava/io/InputStream;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStreamOpener::PythonStreamOpener() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonStreamOpener::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonStreamOpener::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonStreamOpener::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonStreamOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStreamOpener_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStreamOpener_init_(t_PythonStreamOpener *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStreamOpener_finalize(t_PythonStreamOpener *self);
      static PyObject *t_PythonStreamOpener_pythonExtension(t_PythonStreamOpener *self, PyObject *args);
      static jobject JNICALL t_PythonStreamOpener_openOnce0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonStreamOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonStreamOpener_get__self(t_PythonStreamOpener *self, void *data);
      static PyGetSetDef t_PythonStreamOpener__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStreamOpener, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStreamOpener__methods_[] = {
        DECLARE_METHOD(t_PythonStreamOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStreamOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStreamOpener, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStreamOpener, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStreamOpener)[] = {
        { Py_tp_methods, t_PythonStreamOpener__methods_ },
        { Py_tp_init, (void *) t_PythonStreamOpener_init_ },
        { Py_tp_getset, t_PythonStreamOpener__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStreamOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStreamOpener, t_PythonStreamOpener, PythonStreamOpener);

      void t_PythonStreamOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStreamOpener), &PY_TYPE_DEF(PythonStreamOpener), module, "PythonStreamOpener", 1);
      }

      void t_PythonStreamOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStreamOpener), "class_", make_descriptor(PythonStreamOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStreamOpener), "wrapfn_", make_descriptor(t_PythonStreamOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStreamOpener), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStreamOpener::initializeClass);
        JNINativeMethod methods[] = {
          { "openOnce", "()Ljava/io/InputStream;", (void *) t_PythonStreamOpener_openOnce0 },
          { "pythonDecRef", "()V", (void *) t_PythonStreamOpener_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonStreamOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStreamOpener::initializeClass, 1)))
          return NULL;
        return t_PythonStreamOpener::wrap_Object(PythonStreamOpener(((t_PythonStreamOpener *) arg)->object.this$));
      }
      static PyObject *t_PythonStreamOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStreamOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStreamOpener_init_(t_PythonStreamOpener *self, PyObject *args, PyObject *kwds)
      {
        PythonStreamOpener object((jobject) NULL);

        INT_CALL(object = PythonStreamOpener());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStreamOpener_finalize(t_PythonStreamOpener *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStreamOpener_pythonExtension(t_PythonStreamOpener *self, PyObject *args)
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

      static jobject JNICALL t_PythonStreamOpener_openOnce0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::io::InputStream value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "openOnce", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::io::InputStream::initializeClass, &value))
        {
          throwTypeError("openOnce", result);
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

      static void JNICALL t_PythonStreamOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonStreamOpener_get__self(t_PythonStreamOpener *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OpsStatus::class$ = NULL;
              jmethodID *OpsStatus::mids$ = NULL;
              bool OpsStatus::live$ = false;
              OpsStatus *OpsStatus::BACKUP = NULL;
              OpsStatus *OpsStatus::DECAYED = NULL;
              OpsStatus *OpsStatus::EXTENDED_MISSION = NULL;
              OpsStatus *OpsStatus::NONOPERATIONAL = NULL;
              OpsStatus *OpsStatus::OPERATIONAL = NULL;
              OpsStatus *OpsStatus::PARTIALLY_OPERATIONAL = NULL;
              OpsStatus *OpsStatus::REENTRY_MODE = NULL;
              OpsStatus *OpsStatus::STANBY = NULL;
              OpsStatus *OpsStatus::UNKNOWN = NULL;

              jclass OpsStatus::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_ab200ce1a4e45d0e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");
                  mids$[mid_values_9966445f68bfd6eb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  BACKUP = new OpsStatus(env->getStaticObjectField(cls, "BACKUP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  DECAYED = new OpsStatus(env->getStaticObjectField(cls, "DECAYED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  EXTENDED_MISSION = new OpsStatus(env->getStaticObjectField(cls, "EXTENDED_MISSION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  NONOPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "NONOPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  OPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "OPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  PARTIALLY_OPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "PARTIALLY_OPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  REENTRY_MODE = new OpsStatus(env->getStaticObjectField(cls, "REENTRY_MODE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  STANBY = new OpsStatus(env->getStaticObjectField(cls, "STANBY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  UNKNOWN = new OpsStatus(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::lang::String OpsStatus::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
              }

              OpsStatus OpsStatus::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OpsStatus(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ab200ce1a4e45d0e], a0.this$));
              }

              JArray< OpsStatus > OpsStatus::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OpsStatus >(env->callStaticObjectMethod(cls, mids$[mid_values_9966445f68bfd6eb]));
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
              static PyObject *t_OpsStatus_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpsStatus_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpsStatus_of_(t_OpsStatus *self, PyObject *args);
              static PyObject *t_OpsStatus_toString(t_OpsStatus *self, PyObject *args);
              static PyObject *t_OpsStatus_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OpsStatus_values(PyTypeObject *type);
              static PyObject *t_OpsStatus_get__parameters_(t_OpsStatus *self, void *data);
              static PyGetSetDef t_OpsStatus__fields_[] = {
                DECLARE_GET_FIELD(t_OpsStatus, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpsStatus__methods_[] = {
                DECLARE_METHOD(t_OpsStatus, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, of_, METH_VARARGS),
                DECLARE_METHOD(t_OpsStatus, toString, METH_VARARGS),
                DECLARE_METHOD(t_OpsStatus, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpsStatus)[] = {
                { Py_tp_methods, t_OpsStatus__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OpsStatus__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpsStatus)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OpsStatus, t_OpsStatus, OpsStatus);
              PyObject *t_OpsStatus::wrap_Object(const OpsStatus& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OpsStatus::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpsStatus *self = (t_OpsStatus *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OpsStatus::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OpsStatus::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpsStatus *self = (t_OpsStatus *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OpsStatus::install(PyObject *module)
              {
                installType(&PY_TYPE(OpsStatus), &PY_TYPE_DEF(OpsStatus), module, "OpsStatus", 0);
              }

              void t_OpsStatus::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "class_", make_descriptor(OpsStatus::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "wrapfn_", make_descriptor(t_OpsStatus::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "boxfn_", make_descriptor(boxObject));
                env->getClass(OpsStatus::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "BACKUP", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::BACKUP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "DECAYED", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::DECAYED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "EXTENDED_MISSION", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::EXTENDED_MISSION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "NONOPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::NONOPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "OPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::OPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "PARTIALLY_OPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::PARTIALLY_OPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "REENTRY_MODE", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::REENTRY_MODE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "STANBY", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::STANBY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "UNKNOWN", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::UNKNOWN)));
              }

              static PyObject *t_OpsStatus_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpsStatus::initializeClass, 1)))
                  return NULL;
                return t_OpsStatus::wrap_Object(OpsStatus(((t_OpsStatus *) arg)->object.this$));
              }
              static PyObject *t_OpsStatus_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpsStatus::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OpsStatus_of_(t_OpsStatus *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OpsStatus_toString(t_OpsStatus *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(OpsStatus), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_OpsStatus_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OpsStatus result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::valueOf(a0));
                  return t_OpsStatus::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OpsStatus_values(PyTypeObject *type)
              {
                JArray< OpsStatus > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::values());
                return JArray<jobject>(result.this$).wrap(t_OpsStatus::wrap_jobject);
              }
              static PyObject *t_OpsStatus_get__parameters_(t_OpsStatus *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/twod/Vector2DFormat.h"
#include "org/hipparchus/geometry/Vector.h"
#include "java/text/NumberFormat.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/text/ParsePosition.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2DFormat.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Vector2DFormat::class$ = NULL;
          jmethodID *Vector2DFormat::mids$ = NULL;
          bool Vector2DFormat::live$ = false;

          jclass Vector2DFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Vector2DFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_256f36a22c0d0f55] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_3c57e287341c9288] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_4ed7d7dd28d1bddd] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_84b38396c796d436] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector2DFormat_1f9518acb9b68e05] = env->getStaticMethodID(cls, "getVector2DFormat", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2DFormat;");
              mids$[mid_getVector2DFormat_7fa127a67e45ef7a] = env->getStaticMethodID(cls, "getVector2DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/twod/Vector2DFormat;");
              mids$[mid_parse_f1dbee0de937ae53] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_parse_99419362d0089fc6] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector2DFormat::Vector2DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          Vector2DFormat::Vector2DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_256f36a22c0d0f55, a0.this$)) {}

          Vector2DFormat::Vector2DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_3c57e287341c9288, a0.this$, a1.this$, a2.this$)) {}

          Vector2DFormat::Vector2DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_4ed7d7dd28d1bddd, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::StringBuffer Vector2DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_84b38396c796d436], a0.this$, a1.this$, a2.this$));
          }

          Vector2DFormat Vector2DFormat::getVector2DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector2DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector2DFormat_1f9518acb9b68e05]));
          }

          Vector2DFormat Vector2DFormat::getVector2DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector2DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector2DFormat_7fa127a67e45ef7a], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Vector2DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_parse_f1dbee0de937ae53], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Vector2DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_parse_99419362d0089fc6], a0.this$, a1.this$));
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
          static PyObject *t_Vector2DFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2DFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2DFormat_of_(t_Vector2DFormat *self, PyObject *args);
          static int t_Vector2DFormat_init_(t_Vector2DFormat *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector2DFormat_format(t_Vector2DFormat *self, PyObject *args);
          static PyObject *t_Vector2DFormat_getVector2DFormat(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2DFormat_parse(t_Vector2DFormat *self, PyObject *args);
          static PyObject *t_Vector2DFormat_get__vector2DFormat(t_Vector2DFormat *self, void *data);
          static PyObject *t_Vector2DFormat_get__parameters_(t_Vector2DFormat *self, void *data);
          static PyGetSetDef t_Vector2DFormat__fields_[] = {
            DECLARE_GET_FIELD(t_Vector2DFormat, vector2DFormat),
            DECLARE_GET_FIELD(t_Vector2DFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector2DFormat__methods_[] = {
            DECLARE_METHOD(t_Vector2DFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_Vector2DFormat, format, METH_VARARGS),
            DECLARE_METHOD(t_Vector2DFormat, getVector2DFormat, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector2DFormat)[] = {
            { Py_tp_methods, t_Vector2DFormat__methods_ },
            { Py_tp_init, (void *) t_Vector2DFormat_init_ },
            { Py_tp_getset, t_Vector2DFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector2DFormat)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::VectorFormat),
            NULL
          };

          DEFINE_TYPE(Vector2DFormat, t_Vector2DFormat, Vector2DFormat);
          PyObject *t_Vector2DFormat::wrap_Object(const Vector2DFormat& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector2DFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector2DFormat *self = (t_Vector2DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Vector2DFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector2DFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector2DFormat *self = (t_Vector2DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Vector2DFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector2DFormat), &PY_TYPE_DEF(Vector2DFormat), module, "Vector2DFormat", 0);
          }

          void t_Vector2DFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "class_", make_descriptor(Vector2DFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "wrapfn_", make_descriptor(t_Vector2DFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vector2DFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector2DFormat::initializeClass, 1)))
              return NULL;
            return t_Vector2DFormat::wrap_Object(Vector2DFormat(((t_Vector2DFormat *) arg)->object.this$));
          }
          static PyObject *t_Vector2DFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector2DFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vector2DFormat_of_(t_Vector2DFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Vector2DFormat_init_(t_Vector2DFormat *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector2DFormat object((jobject) NULL);

                INT_CALL(object = Vector2DFormat());
                self->object = object;
                self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
                break;
              }
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  INT_CALL(object = Vector2DFormat(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "sss", &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector2DFormat(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
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
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector2DFormat(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
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

          static PyObject *t_Vector2DFormat_format(t_Vector2DFormat *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Vector2DFormat), (PyObject *) self, "format", args, 2);
          }

          static PyObject *t_Vector2DFormat_getVector2DFormat(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector2DFormat result((jobject) NULL);
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2DFormat::getVector2DFormat());
                return t_Vector2DFormat::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::util::Locale a0((jobject) NULL);
                Vector2DFormat result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2DFormat::getVector2DFormat(a0));
                  return t_Vector2DFormat::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getVector2DFormat", args);
            return NULL;
          }

          static PyObject *t_Vector2DFormat_parse(t_Vector2DFormat *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::text::ParsePosition a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector2DFormat), (PyObject *) self, "parse", args, 2);
          }
          static PyObject *t_Vector2DFormat_get__parameters_(t_Vector2DFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Vector2DFormat_get__vector2DFormat(t_Vector2DFormat *self, void *data)
          {
            Vector2DFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector2DFormat());
            return t_Vector2DFormat::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldLatitudeCrossingDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldLatitudeCrossingDetector::class$ = NULL;
        jmethodID *FieldLatitudeCrossingDetector::mids$ = NULL;
        bool FieldLatitudeCrossingDetector::live$ = false;

        jclass FieldLatitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldLatitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5d0d2e5636982682] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_275c74b6b22ce273] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBody_000d48aad6c74b0a] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLatitude_dff5885c2c873297] = env->getMethodID(cls, "getLatitude", "()D");
            mids$[mid_create_a2bce466813c5267] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldLatitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldLatitudeCrossingDetector::FieldLatitudeCrossingDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5d0d2e5636982682, a0.this$, a1.this$, a2)) {}

        FieldLatitudeCrossingDetector::FieldLatitudeCrossingDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_275c74b6b22ce273, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldLatitudeCrossingDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::orekit::bodies::OneAxisEllipsoid FieldLatitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_000d48aad6c74b0a]));
        }

        jdouble FieldLatitudeCrossingDetector::getLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitude_dff5885c2c873297]);
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
        static PyObject *t_FieldLatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldLatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldLatitudeCrossingDetector_of_(t_FieldLatitudeCrossingDetector *self, PyObject *args);
        static int t_FieldLatitudeCrossingDetector_init_(t_FieldLatitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldLatitudeCrossingDetector_g(t_FieldLatitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_FieldLatitudeCrossingDetector_getBody(t_FieldLatitudeCrossingDetector *self);
        static PyObject *t_FieldLatitudeCrossingDetector_getLatitude(t_FieldLatitudeCrossingDetector *self);
        static PyObject *t_FieldLatitudeCrossingDetector_get__body(t_FieldLatitudeCrossingDetector *self, void *data);
        static PyObject *t_FieldLatitudeCrossingDetector_get__latitude(t_FieldLatitudeCrossingDetector *self, void *data);
        static PyObject *t_FieldLatitudeCrossingDetector_get__parameters_(t_FieldLatitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_FieldLatitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldLatitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_FieldLatitudeCrossingDetector, latitude),
          DECLARE_GET_FIELD(t_FieldLatitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldLatitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, getLatitude, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldLatitudeCrossingDetector)[] = {
          { Py_tp_methods, t_FieldLatitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_FieldLatitudeCrossingDetector_init_ },
          { Py_tp_getset, t_FieldLatitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldLatitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldLatitudeCrossingDetector, t_FieldLatitudeCrossingDetector, FieldLatitudeCrossingDetector);
        PyObject *t_FieldLatitudeCrossingDetector::wrap_Object(const FieldLatitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldLatitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldLatitudeCrossingDetector *self = (t_FieldLatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldLatitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldLatitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldLatitudeCrossingDetector *self = (t_FieldLatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldLatitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldLatitudeCrossingDetector), &PY_TYPE_DEF(FieldLatitudeCrossingDetector), module, "FieldLatitudeCrossingDetector", 0);
        }

        void t_FieldLatitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLatitudeCrossingDetector), "class_", make_descriptor(FieldLatitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLatitudeCrossingDetector), "wrapfn_", make_descriptor(t_FieldLatitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLatitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldLatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldLatitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_FieldLatitudeCrossingDetector::wrap_Object(FieldLatitudeCrossingDetector(((t_FieldLatitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldLatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldLatitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldLatitudeCrossingDetector_of_(t_FieldLatitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldLatitudeCrossingDetector_init_(t_FieldLatitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
              jdouble a2;
              FieldLatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::hipparchus::Field::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldLatitudeCrossingDetector(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jdouble a3;
              FieldLatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "KKkD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
              {
                INT_CALL(object = FieldLatitudeCrossingDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldLatitudeCrossingDetector_g(t_FieldLatitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldLatitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldLatitudeCrossingDetector_getBody(t_FieldLatitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_FieldLatitudeCrossingDetector_getLatitude(t_FieldLatitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitude());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_FieldLatitudeCrossingDetector_get__parameters_(t_FieldLatitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldLatitudeCrossingDetector_get__body(t_FieldLatitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_FieldLatitudeCrossingDetector_get__latitude(t_FieldLatitudeCrossingDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/TDOABuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *TDOABuilder::class$ = NULL;
          jmethodID *TDOABuilder::mids$ = NULL;
          bool TDOABuilder::live$ = false;

          jclass TDOABuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/TDOABuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f2d2df585c0173ae] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_29d60226226ca3ca] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/TDOA;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TDOABuilder::TDOABuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_f2d2df585c0173ae, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::TDOA TDOABuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::TDOA(env->callObjectMethod(this$, mids$[mid_build_29d60226226ca3ca], a0.this$, a1.this$));
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
        namespace generation {
          static PyObject *t_TDOABuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOABuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOABuilder_of_(t_TDOABuilder *self, PyObject *args);
          static int t_TDOABuilder_init_(t_TDOABuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOABuilder_build(t_TDOABuilder *self, PyObject *args);
          static PyObject *t_TDOABuilder_get__parameters_(t_TDOABuilder *self, void *data);
          static PyGetSetDef t_TDOABuilder__fields_[] = {
            DECLARE_GET_FIELD(t_TDOABuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOABuilder__methods_[] = {
            DECLARE_METHOD(t_TDOABuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOABuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOABuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_TDOABuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOABuilder)[] = {
            { Py_tp_methods, t_TDOABuilder__methods_ },
            { Py_tp_init, (void *) t_TDOABuilder_init_ },
            { Py_tp_getset, t_TDOABuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOABuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(TDOABuilder, t_TDOABuilder, TDOABuilder);
          PyObject *t_TDOABuilder::wrap_Object(const TDOABuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TDOABuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TDOABuilder *self = (t_TDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TDOABuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TDOABuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TDOABuilder *self = (t_TDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TDOABuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOABuilder), &PY_TYPE_DEF(TDOABuilder), module, "TDOABuilder", 0);
          }

          void t_TDOABuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "class_", make_descriptor(TDOABuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "wrapfn_", make_descriptor(t_TDOABuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOABuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOABuilder::initializeClass, 1)))
              return NULL;
            return t_TDOABuilder::wrap_Object(TDOABuilder(((t_TDOABuilder *) arg)->object.this$));
          }
          static PyObject *t_TDOABuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOABuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TDOABuilder_of_(t_TDOABuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_TDOABuilder_init_(t_TDOABuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            TDOABuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = TDOABuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TDOA);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOABuilder_build(t_TDOABuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::TDOA result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_TDOA::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TDOABuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_TDOABuilder_get__parameters_(t_TDOABuilder *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/LegendreRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *LegendreRuleFactory::class$ = NULL;
          jmethodID *LegendreRuleFactory::mids$ = NULL;
          bool LegendreRuleFactory::live$ = false;

          jclass LegendreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/LegendreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_e670405dd33862ee] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LegendreRuleFactory::LegendreRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
      namespace integration {
        namespace gauss {
          static PyObject *t_LegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LegendreRuleFactory_init_(t_LegendreRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LegendreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_LegendreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LegendreRuleFactory)[] = {
            { Py_tp_methods, t_LegendreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_LegendreRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LegendreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(LegendreRuleFactory, t_LegendreRuleFactory, LegendreRuleFactory);

          void t_LegendreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(LegendreRuleFactory), &PY_TYPE_DEF(LegendreRuleFactory), module, "LegendreRuleFactory", 0);
          }

          void t_LegendreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "class_", make_descriptor(LegendreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "wrapfn_", make_descriptor(t_LegendreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LegendreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_LegendreRuleFactory::wrap_Object(LegendreRuleFactory(((t_LegendreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_LegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LegendreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LegendreRuleFactory_init_(t_LegendreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            LegendreRuleFactory object((jobject) NULL);

            INT_CALL(object = LegendreRuleFactory());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonParameterDriversProvider.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonParameterDriversProvider::class$ = NULL;
      jmethodID *PythonParameterDriversProvider::mids$ = NULL;
      bool PythonParameterDriversProvider::live$ = false;

      jclass PythonParameterDriversProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonParameterDriversProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterDriversProvider::PythonParameterDriversProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonParameterDriversProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonParameterDriversProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonParameterDriversProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParameterDriversProvider_init_(t_PythonParameterDriversProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParameterDriversProvider_finalize(t_PythonParameterDriversProvider *self);
      static PyObject *t_PythonParameterDriversProvider_pythonExtension(t_PythonParameterDriversProvider *self, PyObject *args);
      static jobject JNICALL t_PythonParameterDriversProvider_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonParameterDriversProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonParameterDriversProvider_get__self(t_PythonParameterDriversProvider *self, void *data);
      static PyGetSetDef t_PythonParameterDriversProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParameterDriversProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParameterDriversProvider__methods_[] = {
        DECLARE_METHOD(t_PythonParameterDriversProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParameterDriversProvider)[] = {
        { Py_tp_methods, t_PythonParameterDriversProvider__methods_ },
        { Py_tp_init, (void *) t_PythonParameterDriversProvider_init_ },
        { Py_tp_getset, t_PythonParameterDriversProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParameterDriversProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParameterDriversProvider, t_PythonParameterDriversProvider, PythonParameterDriversProvider);

      void t_PythonParameterDriversProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParameterDriversProvider), &PY_TYPE_DEF(PythonParameterDriversProvider), module, "PythonParameterDriversProvider", 1);
      }

      void t_PythonParameterDriversProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "class_", make_descriptor(PythonParameterDriversProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "wrapfn_", make_descriptor(t_PythonParameterDriversProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParameterDriversProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonParameterDriversProvider_getParametersDrivers0 },
          { "pythonDecRef", "()V", (void *) t_PythonParameterDriversProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParameterDriversProvider::initializeClass, 1)))
          return NULL;
        return t_PythonParameterDriversProvider::wrap_Object(PythonParameterDriversProvider(((t_PythonParameterDriversProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParameterDriversProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParameterDriversProvider_init_(t_PythonParameterDriversProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonParameterDriversProvider object((jobject) NULL);

        INT_CALL(object = PythonParameterDriversProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParameterDriversProvider_finalize(t_PythonParameterDriversProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParameterDriversProvider_pythonExtension(t_PythonParameterDriversProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonParameterDriversProvider_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getParametersDrivers", result);
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

      static void JNICALL t_PythonParameterDriversProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonParameterDriversProvider_get__self(t_PythonParameterDriversProvider *self, void *data)
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
