#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {

          ::java::lang::Class *FileFormat::class$ = NULL;
          jmethodID *FileFormat::mids$ = NULL;
          bool FileFormat::live$ = false;
          FileFormat *FileFormat::KVN = NULL;
          FileFormat *FileFormat::XML = NULL;

          jclass FileFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/FileFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_5b990ca2a38ebac4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/utils/FileFormat;");
              mids$[mid_values_07b18792ff213d8e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/utils/FileFormat;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              KVN = new FileFormat(env->getStaticObjectField(cls, "KVN", "Lorg/orekit/files/ccsds/utils/FileFormat;"));
              XML = new FileFormat(env->getStaticObjectField(cls, "XML", "Lorg/orekit/files/ccsds/utils/FileFormat;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FileFormat FileFormat::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FileFormat(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5b990ca2a38ebac4], a0.this$));
          }

          JArray< FileFormat > FileFormat::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< FileFormat >(env->callStaticObjectMethod(cls, mids$[mid_values_07b18792ff213d8e]));
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
        namespace utils {
          static PyObject *t_FileFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FileFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FileFormat_of_(t_FileFormat *self, PyObject *args);
          static PyObject *t_FileFormat_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_FileFormat_values(PyTypeObject *type);
          static PyObject *t_FileFormat_get__parameters_(t_FileFormat *self, void *data);
          static PyGetSetDef t_FileFormat__fields_[] = {
            DECLARE_GET_FIELD(t_FileFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FileFormat__methods_[] = {
            DECLARE_METHOD(t_FileFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FileFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FileFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_FileFormat, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FileFormat, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FileFormat)[] = {
            { Py_tp_methods, t_FileFormat__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FileFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FileFormat)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(FileFormat, t_FileFormat, FileFormat);
          PyObject *t_FileFormat::wrap_Object(const FileFormat& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FileFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FileFormat *self = (t_FileFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FileFormat::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FileFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FileFormat *self = (t_FileFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FileFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(FileFormat), &PY_TYPE_DEF(FileFormat), module, "FileFormat", 0);
          }

          void t_FileFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "class_", make_descriptor(FileFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "wrapfn_", make_descriptor(t_FileFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "boxfn_", make_descriptor(boxObject));
            env->getClass(FileFormat::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "KVN", make_descriptor(t_FileFormat::wrap_Object(*FileFormat::KVN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "XML", make_descriptor(t_FileFormat::wrap_Object(*FileFormat::XML)));
          }

          static PyObject *t_FileFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FileFormat::initializeClass, 1)))
              return NULL;
            return t_FileFormat::wrap_Object(FileFormat(((t_FileFormat *) arg)->object.this$));
          }
          static PyObject *t_FileFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FileFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FileFormat_of_(t_FileFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FileFormat_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            FileFormat result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::utils::FileFormat::valueOf(a0));
              return t_FileFormat::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_FileFormat_values(PyTypeObject *type)
          {
            JArray< FileFormat > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::utils::FileFormat::values());
            return JArray<jobject>(result.this$).wrap(t_FileFormat::wrap_jobject);
          }
          static PyObject *t_FileFormat_get__parameters_(t_FileFormat *self, void *data)
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
#include "org/hipparchus/distribution/continuous/BetaDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *BetaDistribution::class$ = NULL;
        jmethodID *BetaDistribution::mids$ = NULL;
        bool BetaDistribution::live$ = false;

        jclass BetaDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/BetaDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getAlpha_557b8123390d8d0c] = env->getMethodID(cls, "getAlpha", "()D");
            mids$[mid_getBeta_557b8123390d8d0c] = env->getMethodID(cls, "getBeta", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_7e960cd6eee376d8] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BetaDistribution::BetaDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        BetaDistribution::BetaDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        jdouble BetaDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble BetaDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble BetaDistribution::getAlpha() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAlpha_557b8123390d8d0c]);
        }

        jdouble BetaDistribution::getBeta() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBeta_557b8123390d8d0c]);
        }

        jdouble BetaDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble BetaDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble BetaDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble BetaDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jboolean BetaDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble BetaDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_7e960cd6eee376d8], a0);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_BetaDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BetaDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BetaDistribution_init_(t_BetaDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BetaDistribution_cumulativeProbability(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_density(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getAlpha(t_BetaDistribution *self);
        static PyObject *t_BetaDistribution_getBeta(t_BetaDistribution *self);
        static PyObject *t_BetaDistribution_getNumericalMean(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getNumericalVariance(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getSupportLowerBound(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getSupportUpperBound(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_isSupportConnected(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_logDensity(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_get__alpha(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__beta(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__numericalMean(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__numericalVariance(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportConnected(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportLowerBound(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportUpperBound(t_BetaDistribution *self, void *data);
        static PyGetSetDef t_BetaDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_BetaDistribution, alpha),
          DECLARE_GET_FIELD(t_BetaDistribution, beta),
          DECLARE_GET_FIELD(t_BetaDistribution, numericalMean),
          DECLARE_GET_FIELD(t_BetaDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_BetaDistribution, supportConnected),
          DECLARE_GET_FIELD(t_BetaDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_BetaDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BetaDistribution__methods_[] = {
          DECLARE_METHOD(t_BetaDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BetaDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BetaDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getAlpha, METH_NOARGS),
          DECLARE_METHOD(t_BetaDistribution, getBeta, METH_NOARGS),
          DECLARE_METHOD(t_BetaDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BetaDistribution)[] = {
          { Py_tp_methods, t_BetaDistribution__methods_ },
          { Py_tp_init, (void *) t_BetaDistribution_init_ },
          { Py_tp_getset, t_BetaDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BetaDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(BetaDistribution, t_BetaDistribution, BetaDistribution);

        void t_BetaDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(BetaDistribution), &PY_TYPE_DEF(BetaDistribution), module, "BetaDistribution", 0);
        }

        void t_BetaDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "class_", make_descriptor(BetaDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "wrapfn_", make_descriptor(t_BetaDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BetaDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BetaDistribution::initializeClass, 1)))
            return NULL;
          return t_BetaDistribution::wrap_Object(BetaDistribution(((t_BetaDistribution *) arg)->object.this$));
        }
        static PyObject *t_BetaDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BetaDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BetaDistribution_init_(t_BetaDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BetaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BetaDistribution(a0, a1));
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
              BetaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = BetaDistribution(a0, a1, a2));
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

        static PyObject *t_BetaDistribution_cumulativeProbability(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_BetaDistribution_density(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_BetaDistribution_getAlpha(t_BetaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAlpha());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BetaDistribution_getBeta(t_BetaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBeta());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BetaDistribution_getNumericalMean(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_BetaDistribution_getNumericalVariance(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_BetaDistribution_getSupportLowerBound(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_BetaDistribution_getSupportUpperBound(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_BetaDistribution_isSupportConnected(t_BetaDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_BetaDistribution_logDensity(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_BetaDistribution_get__alpha(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAlpha());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__beta(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBeta());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__numericalMean(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__numericalVariance(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__supportConnected(t_BetaDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_BetaDistribution_get__supportLowerBound(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__supportUpperBound(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/io/IOException.h"
#include "java/lang/InstantiationException.h"
#include "java/util/Locale.h"
#include "java/util/List.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ResourceBundle$Control::class$ = NULL;
    jmethodID *ResourceBundle$Control::mids$ = NULL;
    bool ResourceBundle$Control::live$ = false;
    ::java::util::List *ResourceBundle$Control::FORMAT_CLASS = NULL;
    ::java::util::List *ResourceBundle$Control::FORMAT_DEFAULT = NULL;
    ::java::util::List *ResourceBundle$Control::FORMAT_PROPERTIES = NULL;
    jlong ResourceBundle$Control::TTL_DONT_CACHE = (jlong) 0;
    jlong ResourceBundle$Control::TTL_NO_EXPIRATION_CONTROL = (jlong) 0;

    jclass ResourceBundle$Control::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ResourceBundle$Control");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getCandidateLocales_31d5ff3a82e11577] = env->getMethodID(cls, "getCandidateLocales", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;");
        mids$[mid_getControl_5a94baa170b5bb61] = env->getStaticMethodID(cls, "getControl", "(Ljava/util/List;)Ljava/util/ResourceBundle$Control;");
        mids$[mid_getFallbackLocale_5b93a5dd19b99d50] = env->getMethodID(cls, "getFallbackLocale", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/Locale;");
        mids$[mid_getFormats_112f9b169ddc4fbe] = env->getMethodID(cls, "getFormats", "(Ljava/lang/String;)Ljava/util/List;");
        mids$[mid_getNoFallbackControl_5a94baa170b5bb61] = env->getStaticMethodID(cls, "getNoFallbackControl", "(Ljava/util/List;)Ljava/util/ResourceBundle$Control;");
        mids$[mid_getTimeToLive_5b4fedcee16880a3] = env->getMethodID(cls, "getTimeToLive", "(Ljava/lang/String;Ljava/util/Locale;)J");
        mids$[mid_needsReload_65cfc4d7faf66b3e] = env->getMethodID(cls, "needsReload", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle;J)Z");
        mids$[mid_newBundle_c5caa61954589488] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");
        mids$[mid_toBundleName_23e0ac6ff2600e8d] = env->getMethodID(cls, "toBundleName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toResourceName_495add03b8c9417b] = env->getMethodID(cls, "toResourceName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        FORMAT_CLASS = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_CLASS", "Ljava/util/List;"));
        FORMAT_DEFAULT = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_DEFAULT", "Ljava/util/List;"));
        FORMAT_PROPERTIES = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_PROPERTIES", "Ljava/util/List;"));
        TTL_DONT_CACHE = env->getStaticLongField(cls, "TTL_DONT_CACHE");
        TTL_NO_EXPIRATION_CONTROL = env->getStaticLongField(cls, "TTL_NO_EXPIRATION_CONTROL");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::List ResourceBundle$Control::getCandidateLocales(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCandidateLocales_31d5ff3a82e11577], a0.this$, a1.this$));
    }

    ResourceBundle$Control ResourceBundle$Control::getControl(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle$Control(env->callStaticObjectMethod(cls, mids$[mid_getControl_5a94baa170b5bb61], a0.this$));
    }

    ::java::util::Locale ResourceBundle$Control::getFallbackLocale(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::util::Locale(env->callObjectMethod(this$, mids$[mid_getFallbackLocale_5b93a5dd19b99d50], a0.this$, a1.this$));
    }

    ::java::util::List ResourceBundle$Control::getFormats(const ::java::lang::String & a0) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFormats_112f9b169ddc4fbe], a0.this$));
    }

    ResourceBundle$Control ResourceBundle$Control::getNoFallbackControl(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle$Control(env->callStaticObjectMethod(cls, mids$[mid_getNoFallbackControl_5a94baa170b5bb61], a0.this$));
    }

    jlong ResourceBundle$Control::getTimeToLive(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return env->callLongMethod(this$, mids$[mid_getTimeToLive_5b4fedcee16880a3], a0.this$, a1.this$);
    }

    jboolean ResourceBundle$Control::needsReload(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, const ::java::util::ResourceBundle & a4, jlong a5) const
    {
      return env->callBooleanMethod(this$, mids$[mid_needsReload_65cfc4d7faf66b3e], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5);
    }

    ::java::util::ResourceBundle ResourceBundle$Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
    {
      return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_c5caa61954589488], a0.this$, a1.this$, a2.this$, a3.this$, a4));
    }

    ::java::lang::String ResourceBundle$Control::toBundleName(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toBundleName_23e0ac6ff2600e8d], a0.this$, a1.this$));
    }

    ::java::lang::String ResourceBundle$Control::toResourceName(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toResourceName_495add03b8c9417b], a0.this$, a1.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ResourceBundle$Control_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getCandidateLocales(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_getControl(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getFallbackLocale(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_getFormats(t_ResourceBundle$Control *self, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getNoFallbackControl(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getTimeToLive(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_needsReload(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_newBundle(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_toBundleName(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_toResourceName(t_ResourceBundle$Control *self, PyObject *args);

    static PyMethodDef t_ResourceBundle$Control__methods_[] = {
      DECLARE_METHOD(t_ResourceBundle$Control, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getCandidateLocales, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, getControl, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getFallbackLocale, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, getFormats, METH_O),
      DECLARE_METHOD(t_ResourceBundle$Control, getNoFallbackControl, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getTimeToLive, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, needsReload, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, newBundle, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, toBundleName, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, toResourceName, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ResourceBundle$Control)[] = {
      { Py_tp_methods, t_ResourceBundle$Control__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ResourceBundle$Control)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ResourceBundle$Control, t_ResourceBundle$Control, ResourceBundle$Control);

    void t_ResourceBundle$Control::install(PyObject *module)
    {
      installType(&PY_TYPE(ResourceBundle$Control), &PY_TYPE_DEF(ResourceBundle$Control), module, "ResourceBundle$Control", 0);
    }

    void t_ResourceBundle$Control::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "class_", make_descriptor(ResourceBundle$Control::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "wrapfn_", make_descriptor(t_ResourceBundle$Control::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "boxfn_", make_descriptor(boxObject));
      env->getClass(ResourceBundle$Control::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_CLASS", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_CLASS)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_DEFAULT", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_DEFAULT)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_PROPERTIES", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_PROPERTIES)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "TTL_DONT_CACHE", make_descriptor(ResourceBundle$Control::TTL_DONT_CACHE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "TTL_NO_EXPIRATION_CONTROL", make_descriptor(ResourceBundle$Control::TTL_NO_EXPIRATION_CONTROL));
    }

    static PyObject *t_ResourceBundle$Control_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ResourceBundle$Control::initializeClass, 1)))
        return NULL;
      return t_ResourceBundle$Control::wrap_Object(ResourceBundle$Control(((t_ResourceBundle$Control *) arg)->object.this$));
    }
    static PyObject *t_ResourceBundle$Control_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ResourceBundle$Control::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ResourceBundle$Control_getCandidateLocales(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getCandidateLocales(a0, a1));
        return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
      }

      PyErr_SetArgsError((PyObject *) self, "getCandidateLocales", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getControl(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ResourceBundle$Control result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::ResourceBundle$Control::getControl(a0));
        return t_ResourceBundle$Control::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getControl", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getFallbackLocale(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::util::Locale result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getFallbackLocale(a0, a1));
        return ::java::util::t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getFallbackLocale", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getFormats(t_ResourceBundle$Control *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getFormats(a0));
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      PyErr_SetArgsError((PyObject *) self, "getFormats", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getNoFallbackControl(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ResourceBundle$Control result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::ResourceBundle$Control::getNoFallbackControl(a0));
        return t_ResourceBundle$Control::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getNoFallbackControl", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getTimeToLive(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      jlong result;

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getTimeToLive(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "getTimeToLive", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_needsReload(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String a2((jobject) NULL);
      ::java::lang::ClassLoader a3((jobject) NULL);
      ::java::util::ResourceBundle a4((jobject) NULL);
      jlong a5;
      jboolean result;

      if (!parseArgs(args, "skskkJ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, ::java::util::ResourceBundle::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
      {
        OBJ_CALL(result = self->object.needsReload(a0, a1, a2, a3, a4, a5));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "needsReload", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_newBundle(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String a2((jobject) NULL);
      ::java::lang::ClassLoader a3((jobject) NULL);
      jboolean a4;
      ::java::util::ResourceBundle result((jobject) NULL);

      if (!parseArgs(args, "skskZ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2, &a3, &a4))
      {
        OBJ_CALL(result = self->object.newBundle(a0, a1, a2, a3, a4));
        return ::java::util::t_ResourceBundle::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "newBundle", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_toBundleName(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.toBundleName(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "toBundleName", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_toResourceName(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.toResourceName(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "toResourceName", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *NormalizedGeodeticPoint::class$ = NULL;
        jmethodID *NormalizedGeodeticPoint::mids$ = NULL;
        bool NormalizedGeodeticPoint::live$ = false;

        jclass NormalizedGeodeticPoint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/NormalizedGeodeticPoint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bc3712e794ac7a81] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getLongitude_557b8123390d8d0c] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NormalizedGeodeticPoint::NormalizedGeodeticPoint(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::bodies::GeodeticPoint(env->newObject(initializeClass, &mids$, mid_init$_bc3712e794ac7a81, a0, a1, a2, a3)) {}

        jboolean NormalizedGeodeticPoint::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        jdouble NormalizedGeodeticPoint::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_557b8123390d8d0c]);
        }

        jint NormalizedGeodeticPoint::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
      namespace utils {
        static PyObject *t_NormalizedGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NormalizedGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NormalizedGeodeticPoint_init_(t_NormalizedGeodeticPoint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NormalizedGeodeticPoint_equals(t_NormalizedGeodeticPoint *self, PyObject *args);
        static PyObject *t_NormalizedGeodeticPoint_getLongitude(t_NormalizedGeodeticPoint *self, PyObject *args);
        static PyObject *t_NormalizedGeodeticPoint_hashCode(t_NormalizedGeodeticPoint *self, PyObject *args);
        static PyObject *t_NormalizedGeodeticPoint_get__longitude(t_NormalizedGeodeticPoint *self, void *data);
        static PyGetSetDef t_NormalizedGeodeticPoint__fields_[] = {
          DECLARE_GET_FIELD(t_NormalizedGeodeticPoint, longitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NormalizedGeodeticPoint__methods_[] = {
          DECLARE_METHOD(t_NormalizedGeodeticPoint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalizedGeodeticPoint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalizedGeodeticPoint, equals, METH_VARARGS),
          DECLARE_METHOD(t_NormalizedGeodeticPoint, getLongitude, METH_VARARGS),
          DECLARE_METHOD(t_NormalizedGeodeticPoint, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NormalizedGeodeticPoint)[] = {
          { Py_tp_methods, t_NormalizedGeodeticPoint__methods_ },
          { Py_tp_init, (void *) t_NormalizedGeodeticPoint_init_ },
          { Py_tp_getset, t_NormalizedGeodeticPoint__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NormalizedGeodeticPoint)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::GeodeticPoint),
          NULL
        };

        DEFINE_TYPE(NormalizedGeodeticPoint, t_NormalizedGeodeticPoint, NormalizedGeodeticPoint);

        void t_NormalizedGeodeticPoint::install(PyObject *module)
        {
          installType(&PY_TYPE(NormalizedGeodeticPoint), &PY_TYPE_DEF(NormalizedGeodeticPoint), module, "NormalizedGeodeticPoint", 0);
        }

        void t_NormalizedGeodeticPoint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedGeodeticPoint), "class_", make_descriptor(NormalizedGeodeticPoint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedGeodeticPoint), "wrapfn_", make_descriptor(t_NormalizedGeodeticPoint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedGeodeticPoint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NormalizedGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NormalizedGeodeticPoint::initializeClass, 1)))
            return NULL;
          return t_NormalizedGeodeticPoint::wrap_Object(NormalizedGeodeticPoint(((t_NormalizedGeodeticPoint *) arg)->object.this$));
        }
        static PyObject *t_NormalizedGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NormalizedGeodeticPoint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NormalizedGeodeticPoint_init_(t_NormalizedGeodeticPoint *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          NormalizedGeodeticPoint object((jobject) NULL);

          if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = NormalizedGeodeticPoint(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NormalizedGeodeticPoint_equals(t_NormalizedGeodeticPoint *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(NormalizedGeodeticPoint), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_NormalizedGeodeticPoint_getLongitude(t_NormalizedGeodeticPoint *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getLongitude());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalizedGeodeticPoint), (PyObject *) self, "getLongitude", args, 2);
        }

        static PyObject *t_NormalizedGeodeticPoint_hashCode(t_NormalizedGeodeticPoint *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(NormalizedGeodeticPoint), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_NormalizedGeodeticPoint_get__longitude(t_NormalizedGeodeticPoint *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolator.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BilinearInterpolator::class$ = NULL;
        jmethodID *BilinearInterpolator::mids$ = NULL;
        bool BilinearInterpolator::live$ = false;

        jclass BilinearInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BilinearInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_764fc59555c8ae60] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BilinearInterpolator::BilinearInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction BilinearInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_764fc59555c8ae60], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_BilinearInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BilinearInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BilinearInterpolator_init_(t_BilinearInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BilinearInterpolator_interpolate(t_BilinearInterpolator *self, PyObject *args);

        static PyMethodDef t_BilinearInterpolator__methods_[] = {
          DECLARE_METHOD(t_BilinearInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BilinearInterpolator)[] = {
          { Py_tp_methods, t_BilinearInterpolator__methods_ },
          { Py_tp_init, (void *) t_BilinearInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BilinearInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BilinearInterpolator, t_BilinearInterpolator, BilinearInterpolator);

        void t_BilinearInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(BilinearInterpolator), &PY_TYPE_DEF(BilinearInterpolator), module, "BilinearInterpolator", 0);
        }

        void t_BilinearInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "class_", make_descriptor(BilinearInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "wrapfn_", make_descriptor(t_BilinearInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BilinearInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BilinearInterpolator::initializeClass, 1)))
            return NULL;
          return t_BilinearInterpolator::wrap_Object(BilinearInterpolator(((t_BilinearInterpolator *) arg)->object.this$));
        }
        static PyObject *t_BilinearInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BilinearInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BilinearInterpolator_init_(t_BilinearInterpolator *self, PyObject *args, PyObject *kwds)
        {
          BilinearInterpolator object((jobject) NULL);

          INT_CALL(object = BilinearInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_BilinearInterpolator_interpolate(t_BilinearInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
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
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *UnivariatePointValuePair::class$ = NULL;
        jmethodID *UnivariatePointValuePair::mids$ = NULL;
        bool UnivariatePointValuePair::live$ = false;

        jclass UnivariatePointValuePair::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/UnivariatePointValuePair");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getPoint_557b8123390d8d0c] = env->getMethodID(cls, "getPoint", "()D");
            mids$[mid_getValue_557b8123390d8d0c] = env->getMethodID(cls, "getValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariatePointValuePair::UnivariatePointValuePair(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble UnivariatePointValuePair::getPoint() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPoint_557b8123390d8d0c]);
        }

        jdouble UnivariatePointValuePair::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_557b8123390d8d0c]);
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
        static PyObject *t_UnivariatePointValuePair_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariatePointValuePair_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariatePointValuePair_init_(t_UnivariatePointValuePair *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariatePointValuePair_getPoint(t_UnivariatePointValuePair *self);
        static PyObject *t_UnivariatePointValuePair_getValue(t_UnivariatePointValuePair *self);
        static PyObject *t_UnivariatePointValuePair_get__point(t_UnivariatePointValuePair *self, void *data);
        static PyObject *t_UnivariatePointValuePair_get__value(t_UnivariatePointValuePair *self, void *data);
        static PyGetSetDef t_UnivariatePointValuePair__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariatePointValuePair, point),
          DECLARE_GET_FIELD(t_UnivariatePointValuePair, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariatePointValuePair__methods_[] = {
          DECLARE_METHOD(t_UnivariatePointValuePair, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePointValuePair, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePointValuePair, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_UnivariatePointValuePair, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariatePointValuePair)[] = {
          { Py_tp_methods, t_UnivariatePointValuePair__methods_ },
          { Py_tp_init, (void *) t_UnivariatePointValuePair_init_ },
          { Py_tp_getset, t_UnivariatePointValuePair__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariatePointValuePair)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariatePointValuePair, t_UnivariatePointValuePair, UnivariatePointValuePair);

        void t_UnivariatePointValuePair::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariatePointValuePair), &PY_TYPE_DEF(UnivariatePointValuePair), module, "UnivariatePointValuePair", 0);
        }

        void t_UnivariatePointValuePair::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "class_", make_descriptor(UnivariatePointValuePair::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "wrapfn_", make_descriptor(t_UnivariatePointValuePair::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariatePointValuePair_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariatePointValuePair::initializeClass, 1)))
            return NULL;
          return t_UnivariatePointValuePair::wrap_Object(UnivariatePointValuePair(((t_UnivariatePointValuePair *) arg)->object.this$));
        }
        static PyObject *t_UnivariatePointValuePair_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariatePointValuePair::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariatePointValuePair_init_(t_UnivariatePointValuePair *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          UnivariatePointValuePair object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = UnivariatePointValuePair(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnivariatePointValuePair_getPoint(t_UnivariatePointValuePair *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPoint());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariatePointValuePair_getValue(t_UnivariatePointValuePair *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariatePointValuePair_get__point(t_UnivariatePointValuePair *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPoint());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariatePointValuePair_get__value(t_UnivariatePointValuePair *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/StateJacobian.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *StateJacobian::class$ = NULL;
      jmethodID *StateJacobian::mids$ = NULL;
      bool StateJacobian::live$ = false;

      jclass StateJacobian::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/StateJacobian");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_223e694727d946d7] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > StateJacobian::value(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_223e694727d946d7], a0.this$));
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
      static PyObject *t_StateJacobian_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateJacobian_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateJacobian_value(t_StateJacobian *self, PyObject *arg);

      static PyMethodDef t_StateJacobian__methods_[] = {
        DECLARE_METHOD(t_StateJacobian, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateJacobian, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateJacobian, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateJacobian)[] = {
        { Py_tp_methods, t_StateJacobian__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateJacobian)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateJacobian, t_StateJacobian, StateJacobian);

      void t_StateJacobian::install(PyObject *module)
      {
        installType(&PY_TYPE(StateJacobian), &PY_TYPE_DEF(StateJacobian), module, "StateJacobian", 0);
      }

      void t_StateJacobian::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "class_", make_descriptor(StateJacobian::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "wrapfn_", make_descriptor(t_StateJacobian::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateJacobian_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateJacobian::initializeClass, 1)))
          return NULL;
        return t_StateJacobian::wrap_Object(StateJacobian(((t_StateJacobian *) arg)->object.this$));
      }
      static PyObject *t_StateJacobian_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateJacobian::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateJacobian_value(t_StateJacobian *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ElevationMask.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ElevationMask::class$ = NULL;
      jmethodID *ElevationMask::mids$ = NULL;
      bool ElevationMask::live$ = false;

      jclass ElevationMask::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ElevationMask");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_edb361bfdd1ad9ae] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_getElevation_7e960cd6eee376d8] = env->getMethodID(cls, "getElevation", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ElevationMask::ElevationMask(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_edb361bfdd1ad9ae, a0.this$)) {}

      jdouble ElevationMask::getElevation(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_7e960cd6eee376d8], a0);
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
      static PyObject *t_ElevationMask_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ElevationMask_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ElevationMask_init_(t_ElevationMask *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ElevationMask_getElevation(t_ElevationMask *self, PyObject *arg);

      static PyMethodDef t_ElevationMask__methods_[] = {
        DECLARE_METHOD(t_ElevationMask, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ElevationMask, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ElevationMask, getElevation, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ElevationMask)[] = {
        { Py_tp_methods, t_ElevationMask__methods_ },
        { Py_tp_init, (void *) t_ElevationMask_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ElevationMask)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ElevationMask, t_ElevationMask, ElevationMask);

      void t_ElevationMask::install(PyObject *module)
      {
        installType(&PY_TYPE(ElevationMask), &PY_TYPE_DEF(ElevationMask), module, "ElevationMask", 0);
      }

      void t_ElevationMask::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "class_", make_descriptor(ElevationMask::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "wrapfn_", make_descriptor(t_ElevationMask::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ElevationMask_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ElevationMask::initializeClass, 1)))
          return NULL;
        return t_ElevationMask::wrap_Object(ElevationMask(((t_ElevationMask *) arg)->object.this$));
      }
      static PyObject *t_ElevationMask_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ElevationMask::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ElevationMask_init_(t_ElevationMask *self, PyObject *args, PyObject *kwds)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        ElevationMask object((jobject) NULL);

        if (!parseArgs(args, "[[D", &a0))
        {
          INT_CALL(object = ElevationMask(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ElevationMask_getElevation(t_ElevationMask *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getElevation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/FieldDSSTPropagator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/Set.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *FieldDSSTPropagator::class$ = NULL;
          jmethodID *FieldDSSTPropagator::mids$ = NULL;
          bool FieldDSSTPropagator::live$ = false;

          jclass FieldDSSTPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/FieldDSSTPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_68cc2850ac8c3b8a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;)V");
              mids$[mid_init$_d00ce4881929b1dd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_init$_5fd536ebd2e543f8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_init$_ae4c2f2efe8d710a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_addForceModel_2a559dedc6480c51] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
              mids$[mid_computeMeanState_187529c751235134] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_computeMeanState_13d36b3f0ae97f91] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;DI)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_computeOsculatingState_187529c751235134] = env->getStaticMethodID(cls, "computeOsculatingState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_getAllForceModels_0d9551367f7ecdef] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
              mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getSatelliteRevolution_412668abc8d889e9] = env->getMethodID(cls, "getSatelliteRevolution", "()I");
              mids$[mid_getSelectedCoefficients_2dfcbd371d62f4e1] = env->getMethodID(cls, "getSelectedCoefficients", "()Ljava/util/Set;");
              mids$[mid_initialIsOsculating_89b302893bdbe1f1] = env->getMethodID(cls, "initialIsOsculating", "()Z");
              mids$[mid_removeForceModels_0640e6acf969ed28] = env->getMethodID(cls, "removeForceModels", "()V");
              mids$[mid_resetInitialState_b66c84a5711243d5] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_setInitialState_b66c84a5711243d5] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_setInitialState_9c62e0ce1624c4ca] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_setInterpolationGridToFixedNumberOfPoints_a3da1a935cb37f7b] = env->getMethodID(cls, "setInterpolationGridToFixedNumberOfPoints", "(I)V");
              mids$[mid_setInterpolationGridToMaxTimeGap_1ee4bed350fde589] = env->getMethodID(cls, "setInterpolationGridToMaxTimeGap", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_setMu_1ee4bed350fde589] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_setSatelliteRevolution_a3da1a935cb37f7b] = env->getMethodID(cls, "setSatelliteRevolution", "(I)V");
              mids$[mid_setSelectedCoefficients_d05f6817e35222f6] = env->getMethodID(cls, "setSelectedCoefficients", "(Ljava/util/Set;)V");
              mids$[mid_tolerances_308f592d4493a9ec] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)[[D");
              mids$[mid_tolerances_77222708c227fa61] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)[[D");
              mids$[mid_createMapper_ad7c2ac9dfe2008b] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
              mids$[mid_getInitialIntegrationState_381b3e011cde018d] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_beforeIntegration_811e49dad2467b67] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_afterIntegration_0640e6acf969ed28] = env->getMethodID(cls, "afterIntegration", "()V");
              mids$[mid_getMainStateEquations_c822d3b1a2fa150a] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_68cc2850ac8c3b8a, a0.this$, a1.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_d00ce4881929b1dd, a0.this$, a1.this$, a2.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_5fd536ebd2e543f8, a0.this$, a1.this$, a2.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2, const ::org::orekit::attitudes::AttitudeProvider & a3) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_ae4c2f2efe8d710a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          void FieldDSSTPropagator::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addForceModel_2a559dedc6480c51], a0.this$);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeMeanState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_187529c751235134], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeMeanState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2, jdouble a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_13d36b3f0ae97f91], a0.this$, a1.this$, a2.this$, a3, a4));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeOsculatingState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeOsculatingState_187529c751235134], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List FieldDSSTPropagator::getAllForceModels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_0d9551367f7ecdef]));
          }

          ::org::orekit::orbits::OrbitType FieldDSSTPropagator::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_2cea2a2cb3e02091]));
          }

          ::org::orekit::orbits::PositionAngleType FieldDSSTPropagator::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
          }

          jint FieldDSSTPropagator::getSatelliteRevolution() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteRevolution_412668abc8d889e9]);
          }

          ::java::util::Set FieldDSSTPropagator::getSelectedCoefficients() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSelectedCoefficients_2dfcbd371d62f4e1]));
          }

          jboolean FieldDSSTPropagator::initialIsOsculating() const
          {
            return env->callBooleanMethod(this$, mids$[mid_initialIsOsculating_89b302893bdbe1f1]);
          }

          void FieldDSSTPropagator::removeForceModels() const
          {
            env->callVoidMethod(this$, mids$[mid_removeForceModels_0640e6acf969ed28]);
          }

          void FieldDSSTPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_b66c84a5711243d5], a0.this$);
          }

          void FieldDSSTPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
          }

          void FieldDSSTPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_b66c84a5711243d5], a0.this$);
          }

          void FieldDSSTPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_9c62e0ce1624c4ca], a0.this$, a1.this$);
          }

          void FieldDSSTPropagator::setInterpolationGridToFixedNumberOfPoints(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToFixedNumberOfPoints_a3da1a935cb37f7b], a0);
          }

          void FieldDSSTPropagator::setInterpolationGridToMaxTimeGap(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToMaxTimeGap_1ee4bed350fde589], a0.this$);
          }

          void FieldDSSTPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMu_1ee4bed350fde589], a0.this$);
          }

          void FieldDSSTPropagator::setSatelliteRevolution(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteRevolution_a3da1a935cb37f7b], a0);
          }

          void FieldDSSTPropagator::setSelectedCoefficients(const ::java::util::Set & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSelectedCoefficients_d05f6817e35222f6], a0.this$);
          }

          JArray< JArray< jdouble > > FieldDSSTPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_308f592d4493a9ec], a0.this$, a1.this$));
          }

          JArray< JArray< jdouble > > FieldDSSTPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::FieldOrbit & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_77222708c227fa61], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_FieldDSSTPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_of_(t_FieldDSSTPropagator *self, PyObject *args);
          static int t_FieldDSSTPropagator_init_(t_FieldDSSTPropagator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldDSSTPropagator_addForceModel(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_getAllForceModels(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getOrbitType(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getPositionAngleType(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getSatelliteRevolution(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getSelectedCoefficients(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_initialIsOsculating(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_removeForceModels(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_resetInitialState(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setAttitudeProvider(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setInitialState(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_setMu(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setSatelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_setSelectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_tolerances(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_get__allForceModels(t_FieldDSSTPropagator *self, void *data);
          static int t_FieldDSSTPropagator_set__attitudeProvider(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__initialState(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__interpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__mu(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_FieldDSSTPropagator_get__orbitType(t_FieldDSSTPropagator *self, void *data);
          static PyObject *t_FieldDSSTPropagator_get__positionAngleType(t_FieldDSSTPropagator *self, void *data);
          static PyObject *t_FieldDSSTPropagator_get__satelliteRevolution(t_FieldDSSTPropagator *self, void *data);
          static int t_FieldDSSTPropagator_set__satelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_FieldDSSTPropagator_get__selectedCoefficients(t_FieldDSSTPropagator *self, void *data);
          static int t_FieldDSSTPropagator_set__selectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_FieldDSSTPropagator_get__parameters_(t_FieldDSSTPropagator *self, void *data);
          static PyGetSetDef t_FieldDSSTPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, allForceModels),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, attitudeProvider),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, initialState),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, interpolationGridToFixedNumberOfPoints),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, interpolationGridToMaxTimeGap),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, mu),
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, orbitType),
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, positionAngleType),
            DECLARE_GETSET_FIELD(t_FieldDSSTPropagator, satelliteRevolution),
            DECLARE_GETSET_FIELD(t_FieldDSSTPropagator, selectedCoefficients),
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldDSSTPropagator__methods_[] = {
            DECLARE_METHOD(t_FieldDSSTPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, addForceModel, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, computeMeanState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, computeOsculatingState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getAllForceModels, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getOrbitType, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getPositionAngleType, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getSatelliteRevolution, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getSelectedCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, initialIsOsculating, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, removeForceModels, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setAttitudeProvider, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setInitialState, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setInterpolationGridToFixedNumberOfPoints, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, setInterpolationGridToMaxTimeGap, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, setMu, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setSatelliteRevolution, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, setSelectedCoefficients, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, tolerances, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldDSSTPropagator)[] = {
            { Py_tp_methods, t_FieldDSSTPropagator__methods_ },
            { Py_tp_init, (void *) t_FieldDSSTPropagator_init_ },
            { Py_tp_getset, t_FieldDSSTPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldDSSTPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator),
            NULL
          };

          DEFINE_TYPE(FieldDSSTPropagator, t_FieldDSSTPropagator, FieldDSSTPropagator);
          PyObject *t_FieldDSSTPropagator::wrap_Object(const FieldDSSTPropagator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDSSTPropagator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDSSTPropagator *self = (t_FieldDSSTPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldDSSTPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDSSTPropagator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDSSTPropagator *self = (t_FieldDSSTPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldDSSTPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldDSSTPropagator), &PY_TYPE_DEF(FieldDSSTPropagator), module, "FieldDSSTPropagator", 0);
          }

          void t_FieldDSSTPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTPropagator), "class_", make_descriptor(FieldDSSTPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTPropagator), "wrapfn_", make_descriptor(t_FieldDSSTPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldDSSTPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldDSSTPropagator::initializeClass, 1)))
              return NULL;
            return t_FieldDSSTPropagator::wrap_Object(FieldDSSTPropagator(((t_FieldDSSTPropagator *) arg)->object.this$));
          }
          static PyObject *t_FieldDSSTPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldDSSTPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldDSSTPropagator_of_(t_FieldDSSTPropagator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldDSSTPropagator_init_(t_FieldDSSTPropagator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::propagation::PropagationType a2((jobject) NULL);
                PyTypeObject **p2;
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::propagation::PropagationType a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::attitudes::AttitudeProvider a3((jobject) NULL);
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KKKk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_, &a3))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1, a2, a3));
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

          static PyObject *t_FieldDSSTPropagator_addForceModel(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addForceModel(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "KkK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::computeMeanState(a0, a1, a2));
                  return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                jdouble a3;
                jint a4;
                ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "KkKDI", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::computeMeanState(a0, a1, a2, a3, a4));
                  return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "computeMeanState", args);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
            ::java::util::Collection a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::computeOsculatingState(a0, a1, a2));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "computeOsculatingState", args);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_getAllForceModels(t_FieldDSSTPropagator *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(DSSTForceModel));
          }

          static PyObject *t_FieldDSSTPropagator_getOrbitType(t_FieldDSSTPropagator *self)
          {
            ::org::orekit::orbits::OrbitType result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
          }

          static PyObject *t_FieldDSSTPropagator_getPositionAngleType(t_FieldDSSTPropagator *self)
          {
            ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
            OBJ_CALL(result = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
          }

          static PyObject *t_FieldDSSTPropagator_getSatelliteRevolution(t_FieldDSSTPropagator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldDSSTPropagator_getSelectedCoefficients(t_FieldDSSTPropagator *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_FieldDSSTPropagator_initialIsOsculating(t_FieldDSSTPropagator *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.initialIsOsculating());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldDSSTPropagator_removeForceModels(t_FieldDSSTPropagator *self)
          {
            OBJ_CALL(self->object.removeForceModels());
            Py_RETURN_NONE;
          }

          static PyObject *t_FieldDSSTPropagator_resetInitialState(t_FieldDSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldDSSTPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_FieldDSSTPropagator_setAttitudeProvider(t_FieldDSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAttitudeProvider(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldDSSTPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
          }

          static PyObject *t_FieldDSSTPropagator_setInitialState(t_FieldDSSTPropagator *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                {
                  OBJ_CALL(self->object.setInitialState(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  OBJ_CALL(self->object.setInitialState(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "setInitialState", args);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setInterpolationGridToFixedNumberOfPoints(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterpolationGridToFixedNumberOfPoints", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.setInterpolationGridToMaxTimeGap(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterpolationGridToMaxTimeGap", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setMu(t_FieldDSSTPropagator *self, PyObject *args)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.setMu(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldDSSTPropagator), (PyObject *) self, "setMu", args, 2);
          }

          static PyObject *t_FieldDSSTPropagator_setSatelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setSatelliteRevolution(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSatelliteRevolution", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setSelectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            ::java::util::Set a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
            {
              OBJ_CALL(self->object.setSelectedCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSelectedCoefficients", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_tolerances(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::tolerances(a0, a1));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
              break;
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::tolerances(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
            }

            PyErr_SetArgsError(type, "tolerances", args);
            return NULL;
          }
          static PyObject *t_FieldDSSTPropagator_get__parameters_(t_FieldDSSTPropagator *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldDSSTPropagator_get__allForceModels(t_FieldDSSTPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(value);
          }

          static int t_FieldDSSTPropagator_set__attitudeProvider(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
              {
                INT_CALL(self->object.setAttitudeProvider(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return -1;
          }

          static int t_FieldDSSTPropagator_set__initialState(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setInitialState(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "initialState", arg);
            return -1;
          }

          static int t_FieldDSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setInterpolationGridToFixedNumberOfPoints(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interpolationGridToFixedNumberOfPoints", arg);
            return -1;
          }

          static int t_FieldDSSTPropagator_set__interpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                INT_CALL(self->object.setInterpolationGridToMaxTimeGap(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interpolationGridToMaxTimeGap", arg);
            return -1;
          }

          static int t_FieldDSSTPropagator_set__mu(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                INT_CALL(self->object.setMu(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "mu", arg);
            return -1;
          }

          static PyObject *t_FieldDSSTPropagator_get__orbitType(t_FieldDSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
          }

          static PyObject *t_FieldDSSTPropagator_get__positionAngleType(t_FieldDSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            OBJ_CALL(value = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
          }

          static PyObject *t_FieldDSSTPropagator_get__satelliteRevolution(t_FieldDSSTPropagator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) value);
          }
          static int t_FieldDSSTPropagator_set__satelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setSatelliteRevolution(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "satelliteRevolution", arg);
            return -1;
          }

          static PyObject *t_FieldDSSTPropagator_get__selectedCoefficients(t_FieldDSSTPropagator *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(value);
          }
          static int t_FieldDSSTPropagator_set__selectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::java::util::Set value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::Set::initializeClass, &value))
              {
                INT_CALL(self->object.setSelectedCoefficients(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "selectedCoefficients", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/AnyMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *AnyMatrix::class$ = NULL;
      jmethodID *AnyMatrix::mids$ = NULL;
      bool AnyMatrix::live$ = false;

      jclass AnyMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/AnyMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_412668abc8d889e9] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_412668abc8d889e9] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isSquare_89b302893bdbe1f1] = env->getMethodID(cls, "isSquare", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint AnyMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_412668abc8d889e9]);
      }

      jint AnyMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_412668abc8d889e9]);
      }

      jboolean AnyMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_89b302893bdbe1f1]);
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
      static PyObject *t_AnyMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AnyMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AnyMatrix_getColumnDimension(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_getRowDimension(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_isSquare(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_get__columnDimension(t_AnyMatrix *self, void *data);
      static PyObject *t_AnyMatrix_get__rowDimension(t_AnyMatrix *self, void *data);
      static PyObject *t_AnyMatrix_get__square(t_AnyMatrix *self, void *data);
      static PyGetSetDef t_AnyMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_AnyMatrix, columnDimension),
        DECLARE_GET_FIELD(t_AnyMatrix, rowDimension),
        DECLARE_GET_FIELD(t_AnyMatrix, square),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AnyMatrix__methods_[] = {
        DECLARE_METHOD(t_AnyMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AnyMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AnyMatrix, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_AnyMatrix, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_AnyMatrix, isSquare, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AnyMatrix)[] = {
        { Py_tp_methods, t_AnyMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AnyMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AnyMatrix)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AnyMatrix, t_AnyMatrix, AnyMatrix);

      void t_AnyMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(AnyMatrix), &PY_TYPE_DEF(AnyMatrix), module, "AnyMatrix", 0);
      }

      void t_AnyMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "class_", make_descriptor(AnyMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "wrapfn_", make_descriptor(t_AnyMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AnyMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AnyMatrix::initializeClass, 1)))
          return NULL;
        return t_AnyMatrix::wrap_Object(AnyMatrix(((t_AnyMatrix *) arg)->object.this$));
      }
      static PyObject *t_AnyMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AnyMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AnyMatrix_getColumnDimension(t_AnyMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AnyMatrix_getRowDimension(t_AnyMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AnyMatrix_isSquare(t_AnyMatrix *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSquare());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_AnyMatrix_get__columnDimension(t_AnyMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AnyMatrix_get__rowDimension(t_AnyMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AnyMatrix_get__square(t_AnyMatrix *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSquare());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$EnumListConsumer::class$ = NULL;
            jmethodID *ParseToken$EnumListConsumer::mids$ = NULL;
            bool ParseToken$EnumListConsumer::live$ = false;

            jclass ParseToken$EnumListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_4ccaedadb068bdeb] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$EnumListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_4ccaedadb068bdeb], a0.this$);
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
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$EnumListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_of_(t_ParseToken$EnumListConsumer *self, PyObject *args);
            static PyObject *t_ParseToken$EnumListConsumer_accept(t_ParseToken$EnumListConsumer *self, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_get__parameters_(t_ParseToken$EnumListConsumer *self, void *data);
            static PyGetSetDef t_ParseToken$EnumListConsumer__fields_[] = {
              DECLARE_GET_FIELD(t_ParseToken$EnumListConsumer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ParseToken$EnumListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, of_, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$EnumListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$EnumListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ParseToken$EnumListConsumer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$EnumListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$EnumListConsumer, t_ParseToken$EnumListConsumer, ParseToken$EnumListConsumer);
            PyObject *t_ParseToken$EnumListConsumer::wrap_Object(const ParseToken$EnumListConsumer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumListConsumer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumListConsumer *self = (t_ParseToken$EnumListConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ParseToken$EnumListConsumer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumListConsumer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumListConsumer *self = (t_ParseToken$EnumListConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ParseToken$EnumListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$EnumListConsumer), &PY_TYPE_DEF(ParseToken$EnumListConsumer), module, "ParseToken$EnumListConsumer", 0);
            }

            void t_ParseToken$EnumListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "class_", make_descriptor(ParseToken$EnumListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "wrapfn_", make_descriptor(t_ParseToken$EnumListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$EnumListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$EnumListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$EnumListConsumer::wrap_Object(ParseToken$EnumListConsumer(((t_ParseToken$EnumListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$EnumListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$EnumListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$EnumListConsumer_of_(t_ParseToken$EnumListConsumer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ParseToken$EnumListConsumer_accept(t_ParseToken$EnumListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
            static PyObject *t_ParseToken$EnumListConsumer_get__parameters_(t_ParseToken$EnumListConsumer *self, void *data)
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
#include "org/hipparchus/analysis/solvers/FieldBracketingNthOrderBrentSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *FieldBracketingNthOrderBrentSolver::class$ = NULL;
        jmethodID *FieldBracketingNthOrderBrentSolver::mids$ = NULL;
        bool FieldBracketingNthOrderBrentSolver::live$ = false;

        jclass FieldBracketingNthOrderBrentSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/FieldBracketingNthOrderBrentSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d3b041702ce20594] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_getAbsoluteAccuracy_613c8f46c659f636] = env->getMethodID(cls, "getAbsoluteAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_613c8f46c659f636] = env->getMethodID(cls, "getFunctionValueAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMaxEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getMaximalOrder_412668abc8d889e9] = env->getMethodID(cls, "getMaximalOrder", "()I");
            mids$[mid_getRelativeAccuracy_613c8f46c659f636] = env->getMethodID(cls, "getRelativeAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_f6a5d6fadadd7d54] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_430e429ac2a8f17e] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solveInterval_1d0ea34064f6834b] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBracketingNthOrderBrentSolver::FieldBracketingNthOrderBrentSolver(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d3b041702ce20594, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getAbsoluteAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbsoluteAccuracy_613c8f46c659f636]));
        }

        jint FieldBracketingNthOrderBrentSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getFunctionValueAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFunctionValueAccuracy_613c8f46c659f636]));
        }

        jint FieldBracketingNthOrderBrentSolver::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_412668abc8d889e9]);
        }

        jint FieldBracketingNthOrderBrentSolver::getMaximalOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalOrder_412668abc8d889e9]);
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getRelativeAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRelativeAccuracy_613c8f46c659f636]));
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_f6a5d6fadadd7d54], a0, a1.this$, a2.this$, a3.this$, a4.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_430e429ac2a8f17e], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval FieldBracketingNthOrderBrentSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_1d0ea34064f6834b], a0, a1.this$, a2.this$, a3.this$, a4.this$));
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
      namespace solvers {
        static PyObject *t_FieldBracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_of_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static int t_FieldBracketingNthOrderBrentSolver_init_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getAbsoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getEvaluations(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getFunctionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaxEvaluations(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaximalOrder(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getRelativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_solve(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_solveInterval(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__absoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__evaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__functionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maxEvaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maximalOrder(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__relativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__parameters_(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyGetSetDef t_FieldBracketingNthOrderBrentSolver__fields_[] = {
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, evaluations),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, maxEvaluations),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, maximalOrder),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldBracketingNthOrderBrentSolver__methods_[] = {
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getMaxEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getMaximalOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldBracketingNthOrderBrentSolver)[] = {
          { Py_tp_methods, t_FieldBracketingNthOrderBrentSolver__methods_ },
          { Py_tp_init, (void *) t_FieldBracketingNthOrderBrentSolver_init_ },
          { Py_tp_getset, t_FieldBracketingNthOrderBrentSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldBracketingNthOrderBrentSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldBracketingNthOrderBrentSolver, t_FieldBracketingNthOrderBrentSolver, FieldBracketingNthOrderBrentSolver);
        PyObject *t_FieldBracketingNthOrderBrentSolver::wrap_Object(const FieldBracketingNthOrderBrentSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBracketingNthOrderBrentSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBracketingNthOrderBrentSolver *self = (t_FieldBracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldBracketingNthOrderBrentSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBracketingNthOrderBrentSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBracketingNthOrderBrentSolver *self = (t_FieldBracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldBracketingNthOrderBrentSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldBracketingNthOrderBrentSolver), &PY_TYPE_DEF(FieldBracketingNthOrderBrentSolver), module, "FieldBracketingNthOrderBrentSolver", 0);
        }

        void t_FieldBracketingNthOrderBrentSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "class_", make_descriptor(FieldBracketingNthOrderBrentSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "wrapfn_", make_descriptor(t_FieldBracketingNthOrderBrentSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldBracketingNthOrderBrentSolver::initializeClass, 1)))
            return NULL;
          return t_FieldBracketingNthOrderBrentSolver::wrap_Object(FieldBracketingNthOrderBrentSolver(((t_FieldBracketingNthOrderBrentSolver *) arg)->object.this$));
        }
        static PyObject *t_FieldBracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldBracketingNthOrderBrentSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_of_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldBracketingNthOrderBrentSolver_init_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          jint a3;
          FieldBracketingNthOrderBrentSolver object((jobject) NULL);

          if (!parseArgs(args, "KKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
          {
            INT_CALL(object = FieldBracketingNthOrderBrentSolver(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getAbsoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getEvaluations(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getFunctionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaxEvaluations(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaximalOrder(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getRelativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_solve(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_solveInterval(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

          if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
            return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__parameters_(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__absoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__evaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__functionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maxEvaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maximalOrder(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__relativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *MessageParser::class$ = NULL;
            jmethodID *MessageParser::mids$ = NULL;
            bool MessageParser::live$ = false;

            jclass MessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/MessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_e661fe3ba2fafb22] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_getFileFormat_c3a4c5f37e67a25e] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_3cffd47377eca18a] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_850ca290e1713a38] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_1eac6345cb6bda02] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::Object MessageParser::build() const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_build_e661fe3ba2fafb22]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat MessageParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_c3a4c5f37e67a25e]));
            }

            ::java::lang::String MessageParser::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_3cffd47377eca18a]));
            }

            ::java::util::Map MessageParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4]));
            }

            ::java::lang::Object MessageParser::parseMessage(const ::org::orekit::data::DataSource & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseMessage_850ca290e1713a38], a0.this$));
            }

            void MessageParser::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_process_1eac6345cb6bda02], a0.this$);
            }

            void MessageParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_reset_a580586827f4ec13], a0.this$);
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
        namespace utils {
          namespace lexical {
            static PyObject *t_MessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageParser_of_(t_MessageParser *self, PyObject *args);
            static PyObject *t_MessageParser_build(t_MessageParser *self);
            static PyObject *t_MessageParser_getFileFormat(t_MessageParser *self);
            static PyObject *t_MessageParser_getFormatVersionKey(t_MessageParser *self);
            static PyObject *t_MessageParser_getSpecialXmlElementsBuilders(t_MessageParser *self);
            static PyObject *t_MessageParser_parseMessage(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_process(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_reset(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_get__fileFormat(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__formatVersionKey(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__specialXmlElementsBuilders(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__parameters_(t_MessageParser *self, void *data);
            static PyGetSetDef t_MessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_MessageParser, fileFormat),
              DECLARE_GET_FIELD(t_MessageParser, formatVersionKey),
              DECLARE_GET_FIELD(t_MessageParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_MessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MessageParser__methods_[] = {
              DECLARE_METHOD(t_MessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_MessageParser, build, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getFileFormat, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getSpecialXmlElementsBuilders, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, parseMessage, METH_O),
              DECLARE_METHOD(t_MessageParser, process, METH_O),
              DECLARE_METHOD(t_MessageParser, reset, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageParser)[] = {
              { Py_tp_methods, t_MessageParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageParser, t_MessageParser, MessageParser);
            PyObject *t_MessageParser::wrap_Object(const MessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageParser *self = (t_MessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageParser *self = (t_MessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageParser), &PY_TYPE_DEF(MessageParser), module, "MessageParser", 0);
            }

            void t_MessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "class_", make_descriptor(MessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "wrapfn_", make_descriptor(t_MessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageParser::initializeClass, 1)))
                return NULL;
              return t_MessageParser::wrap_Object(MessageParser(((t_MessageParser *) arg)->object.this$));
            }
            static PyObject *t_MessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MessageParser_of_(t_MessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MessageParser_build(t_MessageParser *self)
            {
              ::java::lang::Object result((jobject) NULL);
              OBJ_CALL(result = self->object.build());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
            }

            static PyObject *t_MessageParser_getFileFormat(t_MessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_MessageParser_getFormatVersionKey(t_MessageParser *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_MessageParser_getSpecialXmlElementsBuilders(t_MessageParser *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            static PyObject *t_MessageParser_parseMessage(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.parseMessage(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parseMessage", arg);
              return NULL;
            }

            static PyObject *t_MessageParser_process(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(self->object.process(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "process", arg);
              return NULL;
            }

            static PyObject *t_MessageParser_reset(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
              {
                OBJ_CALL(self->object.reset(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "reset", arg);
              return NULL;
            }
            static PyObject *t_MessageParser_get__parameters_(t_MessageParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MessageParser_get__fileFormat(t_MessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_MessageParser_get__formatVersionKey(t_MessageParser *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_MessageParser_get__specialXmlElementsBuilders(t_MessageParser *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/LinearConstraintSet.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/linear/LinearConstraint.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearConstraintSet::class$ = NULL;
        jmethodID *LinearConstraintSet::mids$ = NULL;
        bool LinearConstraintSet::live$ = false;

        jclass LinearConstraintSet::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearConstraintSet");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c3f07fb0fd6d2519] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/optim/linear/LinearConstraint;)V");
            mids$[mid_init$_3abde0be9b9c9773] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
            mids$[mid_getConstraints_12ee61573a18f417] = env->getMethodID(cls, "getConstraints", "()Ljava/util/Collection;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearConstraintSet::LinearConstraintSet(const JArray< ::org::hipparchus::optim::linear::LinearConstraint > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3f07fb0fd6d2519, a0.this$)) {}

        LinearConstraintSet::LinearConstraintSet(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3abde0be9b9c9773, a0.this$)) {}

        ::java::util::Collection LinearConstraintSet::getConstraints() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getConstraints_12ee61573a18f417]));
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
      namespace linear {
        static PyObject *t_LinearConstraintSet_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearConstraintSet_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearConstraintSet_init_(t_LinearConstraintSet *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearConstraintSet_getConstraints(t_LinearConstraintSet *self);
        static PyObject *t_LinearConstraintSet_get__constraints(t_LinearConstraintSet *self, void *data);
        static PyGetSetDef t_LinearConstraintSet__fields_[] = {
          DECLARE_GET_FIELD(t_LinearConstraintSet, constraints),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearConstraintSet__methods_[] = {
          DECLARE_METHOD(t_LinearConstraintSet, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraintSet, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraintSet, getConstraints, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearConstraintSet)[] = {
          { Py_tp_methods, t_LinearConstraintSet__methods_ },
          { Py_tp_init, (void *) t_LinearConstraintSet_init_ },
          { Py_tp_getset, t_LinearConstraintSet__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearConstraintSet)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearConstraintSet, t_LinearConstraintSet, LinearConstraintSet);

        void t_LinearConstraintSet::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearConstraintSet), &PY_TYPE_DEF(LinearConstraintSet), module, "LinearConstraintSet", 0);
        }

        void t_LinearConstraintSet::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "class_", make_descriptor(LinearConstraintSet::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "wrapfn_", make_descriptor(t_LinearConstraintSet::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearConstraintSet_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearConstraintSet::initializeClass, 1)))
            return NULL;
          return t_LinearConstraintSet::wrap_Object(LinearConstraintSet(((t_LinearConstraintSet *) arg)->object.this$));
        }
        static PyObject *t_LinearConstraintSet_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearConstraintSet::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearConstraintSet_init_(t_LinearConstraintSet *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::hipparchus::optim::linear::LinearConstraint > a0((jobject) NULL);
              LinearConstraintSet object((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::linear::LinearConstraint::initializeClass, &a0))
              {
                INT_CALL(object = LinearConstraintSet(a0));
                self->object = object;
                break;
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              LinearConstraintSet object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                INT_CALL(object = LinearConstraintSet(a0));
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

        static PyObject *t_LinearConstraintSet_getConstraints(t_LinearConstraintSet *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getConstraints());
          return ::java::util::t_Collection::wrap_Object(result, ::org::hipparchus::optim::linear::PY_TYPE(LinearConstraint));
        }

        static PyObject *t_LinearConstraintSet_get__constraints(t_LinearConstraintSet *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getConstraints());
          return ::java::util::t_Collection::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScale::class$ = NULL;
      jmethodID *TimeScale::mids$ = NULL;
      bool TimeScale::live$ = false;

      jclass TimeScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLeap_b0b988f941da47d8] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_b884068a2c99f6ca] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_insideLeap_981023bfa4a8a093] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_f02ea951706eaf64] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_7488878b3477b7fd] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_2c4b5d48930cdcbe] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e4171ab80e571373] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_b884068a2c99f6ca], a0.this$));
      }

      ::java::lang::String TimeScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jboolean TimeScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_981023bfa4a8a093], a0.this$);
      }

      jboolean TimeScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_f02ea951706eaf64], a0.this$);
      }

      jint TimeScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_7488878b3477b7fd], a0.this$);
      }

      jint TimeScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_2c4b5d48930cdcbe], a0.this$);
      }

      jdouble TimeScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      jdouble TimeScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e4171ab80e571373], a0.this$, a1.this$);
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
      static PyObject *t_TimeScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScale_getLeap(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_getName(t_TimeScale *self);
      static PyObject *t_TimeScale_insideLeap(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_minuteDuration(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_offsetFromTAI(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_offsetToTAI(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_get__name(t_TimeScale *self, void *data);
      static PyGetSetDef t_TimeScale__fields_[] = {
        DECLARE_GET_FIELD(t_TimeScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeScale__methods_[] = {
        DECLARE_METHOD(t_TimeScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScale, getLeap, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TimeScale, insideLeap, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, minuteDuration, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, offsetToTAI, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScale)[] = {
        { Py_tp_methods, t_TimeScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScale)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(TimeScale, t_TimeScale, TimeScale);

      void t_TimeScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScale), &PY_TYPE_DEF(TimeScale), module, "TimeScale", 0);
      }

      void t_TimeScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScale), "class_", make_descriptor(TimeScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScale), "wrapfn_", make_descriptor(t_TimeScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScale::initializeClass, 1)))
          return NULL;
        return t_TimeScale::wrap_Object(TimeScale(((t_TimeScale *) arg)->object.this$));
      }
      static PyObject *t_TimeScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScale_getLeap(t_TimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLeap", args);
        return NULL;
      }

      static PyObject *t_TimeScale_getName(t_TimeScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TimeScale_insideLeap(t_TimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "insideLeap", args);
        return NULL;
      }

      static PyObject *t_TimeScale_minuteDuration(t_TimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "minuteDuration", args);
        return NULL;
      }

      static PyObject *t_TimeScale_offsetFromTAI(t_TimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_TimeScale_offsetToTAI(t_TimeScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_TimeScale_get__name(t_TimeScale *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiTheta.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldTheta.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldJacobiTheta::class$ = NULL;
          jmethodID *FieldJacobiTheta::mids$ = NULL;
          bool FieldJacobiTheta::live$ = false;

          jclass FieldJacobiTheta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldJacobiTheta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ee4bed350fde589] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_getQ_613c8f46c659f636] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_values_3cb29dfc24a29ae0] = env->getMethodID(cls, "values", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldTheta;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldJacobiTheta::FieldJacobiTheta(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ee4bed350fde589, a0.this$)) {}

          ::org::hipparchus::CalculusFieldElement FieldJacobiTheta::getQ() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ_613c8f46c659f636]));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldTheta FieldJacobiTheta::values(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldTheta(env->callObjectMethod(this$, mids$[mid_values_3cb29dfc24a29ae0], a0.this$));
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
          static PyObject *t_FieldJacobiTheta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiTheta_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiTheta_of_(t_FieldJacobiTheta *self, PyObject *args);
          static int t_FieldJacobiTheta_init_(t_FieldJacobiTheta *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldJacobiTheta_getQ(t_FieldJacobiTheta *self);
          static PyObject *t_FieldJacobiTheta_values(t_FieldJacobiTheta *self, PyObject *arg);
          static PyObject *t_FieldJacobiTheta_get__q(t_FieldJacobiTheta *self, void *data);
          static PyObject *t_FieldJacobiTheta_get__parameters_(t_FieldJacobiTheta *self, void *data);
          static PyGetSetDef t_FieldJacobiTheta__fields_[] = {
            DECLARE_GET_FIELD(t_FieldJacobiTheta, q),
            DECLARE_GET_FIELD(t_FieldJacobiTheta, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldJacobiTheta__methods_[] = {
            DECLARE_METHOD(t_FieldJacobiTheta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiTheta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiTheta, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiTheta, getQ, METH_NOARGS),
            DECLARE_METHOD(t_FieldJacobiTheta, values, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldJacobiTheta)[] = {
            { Py_tp_methods, t_FieldJacobiTheta__methods_ },
            { Py_tp_init, (void *) t_FieldJacobiTheta_init_ },
            { Py_tp_getset, t_FieldJacobiTheta__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldJacobiTheta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldJacobiTheta, t_FieldJacobiTheta, FieldJacobiTheta);
          PyObject *t_FieldJacobiTheta::wrap_Object(const FieldJacobiTheta& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiTheta::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiTheta *self = (t_FieldJacobiTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldJacobiTheta::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiTheta::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiTheta *self = (t_FieldJacobiTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldJacobiTheta::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldJacobiTheta), &PY_TYPE_DEF(FieldJacobiTheta), module, "FieldJacobiTheta", 0);
          }

          void t_FieldJacobiTheta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiTheta), "class_", make_descriptor(FieldJacobiTheta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiTheta), "wrapfn_", make_descriptor(t_FieldJacobiTheta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiTheta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldJacobiTheta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldJacobiTheta::initializeClass, 1)))
              return NULL;
            return t_FieldJacobiTheta::wrap_Object(FieldJacobiTheta(((t_FieldJacobiTheta *) arg)->object.this$));
          }
          static PyObject *t_FieldJacobiTheta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldJacobiTheta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldJacobiTheta_of_(t_FieldJacobiTheta *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldJacobiTheta_init_(t_FieldJacobiTheta *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldJacobiTheta object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldJacobiTheta(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldJacobiTheta_getQ(t_FieldJacobiTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldJacobiTheta_values(t_FieldJacobiTheta *self, PyObject *arg)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::special::elliptic::jacobi::FieldTheta result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.values(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_FieldTheta::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "values", arg);
            return NULL;
          }
          static PyObject *t_FieldJacobiTheta_get__parameters_(t_FieldJacobiTheta *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldJacobiTheta_get__q(t_FieldJacobiTheta *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *SphericalPolygonsSet::class$ = NULL;
          jmethodID *SphericalPolygonsSet::mids$ = NULL;
          bool SphericalPolygonsSet::live$ = false;

          jclass SphericalPolygonsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_7835dd17b9d5eb91] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/geometry/spherical/twod/S2Point;)V");
              mids$[mid_init$_9eca765a47180abb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_546559a08b08816f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_bdacd7c5506b494c] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_e8e60e3c99d0924a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DID)V");
              mids$[mid_buildNew_b311f7976ae2cd69] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_getBoundaryLoops_0d9551367f7ecdef] = env->getMethodID(cls, "getBoundaryLoops", "()Ljava/util/List;");
              mids$[mid_getEnclosingCap_21e9b023bf1fc695] = env->getMethodID(cls, "getEnclosingCap", "()Lorg/hipparchus/geometry/enclosing/EnclosingBall;");
              mids$[mid_computeGeometricalProperties_0640e6acf969ed28] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphericalPolygonsSet::SphericalPolygonsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(jdouble a0, const JArray< ::org::hipparchus::geometry::spherical::twod::S2Point > & a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_7835dd17b9d5eb91, a0, a1.this$)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_9eca765a47180abb, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_546559a08b08816f, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_bdacd7c5506b494c, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jint a3, jdouble a4) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_e8e60e3c99d0924a, a0.this$, a1.this$, a2, a3, a4)) {}

          SphericalPolygonsSet SphericalPolygonsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_buildNew_b311f7976ae2cd69], a0.this$));
          }

          ::java::util::List SphericalPolygonsSet::getBoundaryLoops() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBoundaryLoops_0d9551367f7ecdef]));
          }

          ::org::hipparchus::geometry::enclosing::EnclosingBall SphericalPolygonsSet::getEnclosingCap() const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_getEnclosingCap_21e9b023bf1fc695]));
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
        namespace twod {
          static PyObject *t_SphericalPolygonsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalPolygonsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalPolygonsSet_of_(t_SphericalPolygonsSet *self, PyObject *args);
          static int t_SphericalPolygonsSet_init_(t_SphericalPolygonsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphericalPolygonsSet_buildNew(t_SphericalPolygonsSet *self, PyObject *args);
          static PyObject *t_SphericalPolygonsSet_getBoundaryLoops(t_SphericalPolygonsSet *self);
          static PyObject *t_SphericalPolygonsSet_getEnclosingCap(t_SphericalPolygonsSet *self);
          static PyObject *t_SphericalPolygonsSet_get__boundaryLoops(t_SphericalPolygonsSet *self, void *data);
          static PyObject *t_SphericalPolygonsSet_get__enclosingCap(t_SphericalPolygonsSet *self, void *data);
          static PyObject *t_SphericalPolygonsSet_get__parameters_(t_SphericalPolygonsSet *self, void *data);
          static PyGetSetDef t_SphericalPolygonsSet__fields_[] = {
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, boundaryLoops),
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, enclosingCap),
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SphericalPolygonsSet__methods_[] = {
            DECLARE_METHOD(t_SphericalPolygonsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalPolygonsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalPolygonsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, getBoundaryLoops, METH_NOARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, getEnclosingCap, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphericalPolygonsSet)[] = {
            { Py_tp_methods, t_SphericalPolygonsSet__methods_ },
            { Py_tp_init, (void *) t_SphericalPolygonsSet_init_ },
            { Py_tp_getset, t_SphericalPolygonsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphericalPolygonsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(SphericalPolygonsSet, t_SphericalPolygonsSet, SphericalPolygonsSet);
          PyObject *t_SphericalPolygonsSet::wrap_Object(const SphericalPolygonsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SphericalPolygonsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SphericalPolygonsSet *self = (t_SphericalPolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SphericalPolygonsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SphericalPolygonsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SphericalPolygonsSet *self = (t_SphericalPolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SphericalPolygonsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(SphericalPolygonsSet), &PY_TYPE_DEF(SphericalPolygonsSet), module, "SphericalPolygonsSet", 0);
          }

          void t_SphericalPolygonsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "class_", make_descriptor(SphericalPolygonsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "wrapfn_", make_descriptor(t_SphericalPolygonsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphericalPolygonsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphericalPolygonsSet::initializeClass, 1)))
              return NULL;
            return t_SphericalPolygonsSet::wrap_Object(SphericalPolygonsSet(((t_SphericalPolygonsSet *) arg)->object.this$));
          }
          static PyObject *t_SphericalPolygonsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphericalPolygonsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SphericalPolygonsSet_of_(t_SphericalPolygonsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SphericalPolygonsSet_init_(t_SphericalPolygonsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                JArray< ::org::hipparchus::geometry::spherical::twod::S2Point > a1((jobject) NULL);
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble a2;
                jint a3;
                jdouble a4;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "kkDID", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
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

          static PyObject *t_SphericalPolygonsSet_buildNew(t_SphericalPolygonsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            SphericalPolygonsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_SphericalPolygonsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SphericalPolygonsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_SphericalPolygonsSet_getBoundaryLoops(t_SphericalPolygonsSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBoundaryLoops());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Vertex));
          }

          static PyObject *t_SphericalPolygonsSet_getEnclosingCap(t_SphericalPolygonsSet *self)
          {
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnclosingCap());
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D), ::org::hipparchus::geometry::spherical::twod::PY_TYPE(S2Point));
          }
          static PyObject *t_SphericalPolygonsSet_get__parameters_(t_SphericalPolygonsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SphericalPolygonsSet_get__boundaryLoops(t_SphericalPolygonsSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBoundaryLoops());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SphericalPolygonsSet_get__enclosingCap(t_SphericalPolygonsSet *self, void *data)
          {
            ::org::hipparchus::geometry::enclosing::EnclosingBall value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnclosingCap());
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Parser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/sp3/SP3.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Parser::class$ = NULL;
        jmethodID *SP3Parser::mids$ = NULL;
        bool SP3Parser::live$ = false;
        ::java::lang::String *SP3Parser::SP3_FRAME_CENTER_STRING = NULL;

        jclass SP3Parser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Parser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_parse_ea0a0988ed14fe01] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/sp3/SP3;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SP3_FRAME_CENTER_STRING = new ::java::lang::String(env->getStaticObjectField(cls, "SP3_FRAME_CENTER_STRING", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Parser::SP3Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::orekit::files::sp3::SP3 SP3Parser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::sp3::SP3(env->callObjectMethod(this$, mids$[mid_parse_ea0a0988ed14fe01], a0.this$));
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
        static PyObject *t_SP3Parser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Parser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Parser_init_(t_SP3Parser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Parser_parse(t_SP3Parser *self, PyObject *arg);

        static PyMethodDef t_SP3Parser__methods_[] = {
          DECLARE_METHOD(t_SP3Parser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Parser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Parser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Parser)[] = {
          { Py_tp_methods, t_SP3Parser__methods_ },
          { Py_tp_init, (void *) t_SP3Parser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Parser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Parser, t_SP3Parser, SP3Parser);

        void t_SP3Parser::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Parser), &PY_TYPE_DEF(SP3Parser), module, "SP3Parser", 0);
        }

        void t_SP3Parser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "class_", make_descriptor(SP3Parser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "wrapfn_", make_descriptor(t_SP3Parser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Parser::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "SP3_FRAME_CENTER_STRING", make_descriptor(j2p(*SP3Parser::SP3_FRAME_CENTER_STRING)));
        }

        static PyObject *t_SP3Parser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Parser::initializeClass, 1)))
            return NULL;
          return t_SP3Parser::wrap_Object(SP3Parser(((t_SP3Parser *) arg)->object.this$));
        }
        static PyObject *t_SP3Parser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Parser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Parser_init_(t_SP3Parser *self, PyObject *args, PyObject *kwds)
        {
          SP3Parser object((jobject) NULL);

          INT_CALL(object = SP3Parser());
          self->object = object;

          return 0;
        }

        static PyObject *t_SP3Parser_parse(t_SP3Parser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::sp3::SP3 result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::sp3::t_SP3::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/OpenMapRealVector.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/OpenMapRealVector.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Double.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *OpenMapRealVector::class$ = NULL;
      jmethodID *OpenMapRealVector::mids$ = NULL;
      bool OpenMapRealVector::live$ = false;
      jdouble OpenMapRealVector::DEFAULT_ZERO_TOLERANCE = (jdouble) 0;

      jclass OpenMapRealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/OpenMapRealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_c354c911a2a99469] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;)V");
          mids$[mid_init$_87d15d6564ad754f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3682f2e0c8382fe5] = env->getMethodID(cls, "<init>", "([DD)V");
          mids$[mid_init$_4c962094e30c788c] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;D)V");
          mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_754312f3734d6e2f] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_add_c8caf6b86809b421] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_add_342d5b01463e0dc5] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_c8caf6b86809b421] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_append_7841ff123295f72b] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_append_75541c8200d1f16e] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_copy_0f75e049dcae9e48] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_ebeDivide_7841ff123295f72b] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_ebeMultiply_7841ff123295f72b] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_db11e5a6053f761d] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/OpenMapRealVector;)D");
          mids$[mid_getDistance_4062041acf71098b] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_69cfb132c661aca4] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_db11e5a6053f761d] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/OpenMapRealVector;)D");
          mids$[mid_getL1Distance_4062041acf71098b] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfDistance_4062041acf71098b] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getSparsity_557b8123390d8d0c] = env->getMethodID(cls, "getSparsity", "()D");
          mids$[mid_getSubVector_dd99dbbd80939c15] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_mapAdd_75541c8200d1f16e] = env->getMethodID(cls, "mapAdd", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_mapAddToSelf_75541c8200d1f16e] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_set_10f281d777284cea] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_89aad365fb0ed8da] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_a967cf1fffd0038f] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_sparseIterator_834a3801c426326d] = env->getMethodID(cls, "sparseIterator", "()Ljava/util/Iterator;");
          mids$[mid_subtract_c8caf6b86809b421] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_subtract_342d5b01463e0dc5] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_toArray_a53a7513ecedada2] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_unitVector_0f75e049dcae9e48] = env->getMethodID(cls, "unitVector", "()Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_unitize_0640e6acf969ed28] = env->getMethodID(cls, "unitize", "()V");
          mids$[mid_isDefaultValue_dd69c3ab2404bb71] = env->getMethodID(cls, "isDefaultValue", "(D)Z");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ZERO_TOLERANCE = env->getStaticDoubleField(cls, "DEFAULT_ZERO_TOLERANCE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenMapRealVector::OpenMapRealVector() : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< jdouble > & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< ::java::lang::Double > & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_c354c911a2a99469, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(const ::org::hipparchus::linear::RealVector & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_87d15d6564ad754f, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< jdouble > & a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_3682f2e0c8382fe5, a0.this$, a1)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< ::java::lang::Double > & a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_4c962094e30c788c, a0.this$, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jint a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jint a1, jdouble a2) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_754312f3734d6e2f, a0, a1, a2)) {}

      OpenMapRealVector OpenMapRealVector::add(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_add_c8caf6b86809b421], a0.this$));
      }

      ::org::hipparchus::linear::RealVector OpenMapRealVector::add(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_add_342d5b01463e0dc5], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_c8caf6b86809b421], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_7841ff123295f72b], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_75541c8200d1f16e], a0));
      }

      OpenMapRealVector OpenMapRealVector::copy() const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_copy_0f75e049dcae9e48]));
      }

      OpenMapRealVector OpenMapRealVector::ebeDivide(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_7841ff123295f72b], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::ebeMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_7841ff123295f72b], a0.this$));
      }

      jboolean OpenMapRealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      jint OpenMapRealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      jdouble OpenMapRealVector::getDistance(const OpenMapRealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_db11e5a6053f761d], a0.this$);
      }

      jdouble OpenMapRealVector::getDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_4062041acf71098b], a0.this$);
      }

      jdouble OpenMapRealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_69cfb132c661aca4], a0);
      }

      jdouble OpenMapRealVector::getL1Distance(const OpenMapRealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_db11e5a6053f761d], a0.this$);
      }

      jdouble OpenMapRealVector::getL1Distance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_4062041acf71098b], a0.this$);
      }

      jdouble OpenMapRealVector::getLInfDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_4062041acf71098b], a0.this$);
      }

      jdouble OpenMapRealVector::getSparsity() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSparsity_557b8123390d8d0c]);
      }

      OpenMapRealVector OpenMapRealVector::getSubVector(jint a0, jint a1) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_dd99dbbd80939c15], a0, a1));
      }

      jint OpenMapRealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      jboolean OpenMapRealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
      }

      jboolean OpenMapRealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
      }

      OpenMapRealVector OpenMapRealVector::mapAdd(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_mapAdd_75541c8200d1f16e], a0));
      }

      OpenMapRealVector OpenMapRealVector::mapAddToSelf(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_75541c8200d1f16e], a0));
      }

      void OpenMapRealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_10f281d777284cea], a0);
      }

      void OpenMapRealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_89aad365fb0ed8da], a0, a1);
      }

      void OpenMapRealVector::setSubVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_a967cf1fffd0038f], a0, a1.this$);
      }

      ::java::util::Iterator OpenMapRealVector::sparseIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_sparseIterator_834a3801c426326d]));
      }

      OpenMapRealVector OpenMapRealVector::subtract(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_subtract_c8caf6b86809b421], a0.this$));
      }

      ::org::hipparchus::linear::RealVector OpenMapRealVector::subtract(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_subtract_342d5b01463e0dc5], a0.this$));
      }

      JArray< jdouble > OpenMapRealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_a53a7513ecedada2]));
      }

      OpenMapRealVector OpenMapRealVector::unitVector() const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_unitVector_0f75e049dcae9e48]));
      }

      void OpenMapRealVector::unitize() const
      {
        env->callVoidMethod(this$, mids$[mid_unitize_0640e6acf969ed28]);
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
      static PyObject *t_OpenMapRealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenMapRealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OpenMapRealVector_init_(t_OpenMapRealVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenMapRealVector_add(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_append(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_copy(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_ebeDivide(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_ebeMultiply(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_equals(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getDimension(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getDistance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getEntry(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getL1Distance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getLInfDistance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getSparsity(t_OpenMapRealVector *self);
      static PyObject *t_OpenMapRealVector_getSubVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_hashCode(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_isInfinite(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_isNaN(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_mapAdd(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_mapAddToSelf(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_set(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_setEntry(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_setSubVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_sparseIterator(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_subtract(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_toArray(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_unitVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_unitize(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_get__dimension(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__infinite(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__naN(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__sparsity(t_OpenMapRealVector *self, void *data);
      static PyGetSetDef t_OpenMapRealVector__fields_[] = {
        DECLARE_GET_FIELD(t_OpenMapRealVector, dimension),
        DECLARE_GET_FIELD(t_OpenMapRealVector, infinite),
        DECLARE_GET_FIELD(t_OpenMapRealVector, naN),
        DECLARE_GET_FIELD(t_OpenMapRealVector, sparsity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenMapRealVector__methods_[] = {
        DECLARE_METHOD(t_OpenMapRealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealVector, add, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, append, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, copy, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, ebeDivide, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, ebeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getDimension, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getDistance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getL1Distance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getLInfDistance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getSparsity, METH_NOARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, isInfinite, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, isNaN, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, mapAdd, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, mapAddToSelf, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, set, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, sparseIterator, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, toArray, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, unitVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, unitize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenMapRealVector)[] = {
        { Py_tp_methods, t_OpenMapRealVector__methods_ },
        { Py_tp_init, (void *) t_OpenMapRealVector_init_ },
        { Py_tp_getset, t_OpenMapRealVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenMapRealVector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::SparseRealVector),
        NULL
      };

      DEFINE_TYPE(OpenMapRealVector, t_OpenMapRealVector, OpenMapRealVector);

      void t_OpenMapRealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenMapRealVector), &PY_TYPE_DEF(OpenMapRealVector), module, "OpenMapRealVector", 0);
      }

      void t_OpenMapRealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "class_", make_descriptor(OpenMapRealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "wrapfn_", make_descriptor(t_OpenMapRealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "boxfn_", make_descriptor(boxObject));
        env->getClass(OpenMapRealVector::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "DEFAULT_ZERO_TOLERANCE", make_descriptor(OpenMapRealVector::DEFAULT_ZERO_TOLERANCE));
      }

      static PyObject *t_OpenMapRealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenMapRealVector::initializeClass, 1)))
          return NULL;
        return t_OpenMapRealVector::wrap_Object(OpenMapRealVector(((t_OpenMapRealVector *) arg)->object.this$));
      }
      static PyObject *t_OpenMapRealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenMapRealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OpenMapRealVector_init_(t_OpenMapRealVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OpenMapRealVector object((jobject) NULL);

            INT_CALL(object = OpenMapRealVector());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[O", ::java::lang::PY_TYPE(Double), &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[OD", ::java::lang::PY_TYPE(Double), &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jint a1;
            jdouble a2;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "IID", &a0, &a1, &a2))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1, a2));
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

      static PyObject *t_OpenMapRealVector_add(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_OpenMapRealVector_append(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "append", args, 2);
      }

      static PyObject *t_OpenMapRealVector_copy(t_OpenMapRealVector *self, PyObject *args)
      {
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_OpenMapRealVector_ebeDivide(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "ebeDivide", args, 2);
      }

      static PyObject *t_OpenMapRealVector_ebeMultiply(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "ebeMultiply", args, 2);
      }

      static PyObject *t_OpenMapRealVector_equals(t_OpenMapRealVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getDimension(t_OpenMapRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getDimension", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getDistance(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDistance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDistance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getDistance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getEntry(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getL1Distance(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getL1Distance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getL1Distance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getL1Distance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getLInfDistance(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLInfDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getLInfDistance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getSparsity(t_OpenMapRealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSparsity());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OpenMapRealVector_getSubVector(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getSubVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_hashCode(t_OpenMapRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_OpenMapRealVector_isInfinite(t_OpenMapRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isInfinite());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "isInfinite", args, 2);
      }

      static PyObject *t_OpenMapRealVector_isNaN(t_OpenMapRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isNaN());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "isNaN", args, 2);
      }

      static PyObject *t_OpenMapRealVector_mapAdd(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "mapAdd", args, 2);
      }

      static PyObject *t_OpenMapRealVector_mapAddToSelf(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "mapAddToSelf", args, 2);
      }

      static PyObject *t_OpenMapRealVector_set(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "set", args, 2);
      }

      static PyObject *t_OpenMapRealVector_setEntry(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_OpenMapRealVector_setSubVector(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "setSubVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_sparseIterator(t_OpenMapRealVector *self, PyObject *args)
      {
        ::java::util::Iterator result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.sparseIterator());
          return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "sparseIterator", args, 2);
      }

      static PyObject *t_OpenMapRealVector_subtract(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_OpenMapRealVector_toArray(t_OpenMapRealVector *self, PyObject *args)
      {
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toArray());
          return result.wrap();
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "toArray", args, 2);
      }

      static PyObject *t_OpenMapRealVector_unitVector(t_OpenMapRealVector *self, PyObject *args)
      {
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.unitVector());
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "unitVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_unitize(t_OpenMapRealVector *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.unitize());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "unitize", args, 2);
      }

      static PyObject *t_OpenMapRealVector_get__dimension(t_OpenMapRealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_OpenMapRealVector_get__infinite(t_OpenMapRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_OpenMapRealVector_get__naN(t_OpenMapRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_OpenMapRealVector_get__sparsity(t_OpenMapRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSparsity());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *NullArgumentException::class$ = NULL;
      jmethodID *NullArgumentException::mids$ = NULL;
      bool NullArgumentException::live$ = false;

      jclass NullArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/NullArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_4fde7f3f87bbd6f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_3cffd47377eca18a] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cffd47377eca18a] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_4b51060c6b7ea981] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_6555a5198c71b73a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_a86d7419cf3241b7] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NullArgumentException::NullArgumentException() : ::java::lang::NullPointerException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      NullArgumentException::NullArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::NullPointerException(env->newObject(initializeClass, &mids$, mid_init$_4fde7f3f87bbd6f7, a0.this$, a1.this$)) {}

      ::java::lang::String NullArgumentException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_3cffd47377eca18a]));
      }

      ::java::lang::String NullArgumentException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cffd47377eca18a]));
      }

      ::java::lang::String NullArgumentException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_4b51060c6b7ea981], a0.this$));
      }

      JArray< ::java::lang::Object > NullArgumentException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_6555a5198c71b73a]));
      }

      ::org::hipparchus::exception::Localizable NullArgumentException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_a86d7419cf3241b7]));
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
      static PyObject *t_NullArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NullArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_NullArgumentException_init_(t_NullArgumentException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_NullArgumentException_getLocalizedMessage(t_NullArgumentException *self, PyObject *args);
      static PyObject *t_NullArgumentException_getMessage(t_NullArgumentException *self, PyObject *args);
      static PyObject *t_NullArgumentException_getParts(t_NullArgumentException *self);
      static PyObject *t_NullArgumentException_getSpecifier(t_NullArgumentException *self);
      static PyObject *t_NullArgumentException_get__localizedMessage(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__message(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__parts(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__specifier(t_NullArgumentException *self, void *data);
      static PyGetSetDef t_NullArgumentException__fields_[] = {
        DECLARE_GET_FIELD(t_NullArgumentException, localizedMessage),
        DECLARE_GET_FIELD(t_NullArgumentException, message),
        DECLARE_GET_FIELD(t_NullArgumentException, parts),
        DECLARE_GET_FIELD(t_NullArgumentException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_NullArgumentException__methods_[] = {
        DECLARE_METHOD(t_NullArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NullArgumentException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NullArgumentException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_NullArgumentException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_NullArgumentException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_NullArgumentException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NullArgumentException)[] = {
        { Py_tp_methods, t_NullArgumentException__methods_ },
        { Py_tp_init, (void *) t_NullArgumentException_init_ },
        { Py_tp_getset, t_NullArgumentException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NullArgumentException)[] = {
        &PY_TYPE_DEF(::java::lang::NullPointerException),
        NULL
      };

      DEFINE_TYPE(NullArgumentException, t_NullArgumentException, NullArgumentException);

      void t_NullArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(NullArgumentException), &PY_TYPE_DEF(NullArgumentException), module, "NullArgumentException", 0);
      }

      void t_NullArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "class_", make_descriptor(NullArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "wrapfn_", make_descriptor(t_NullArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NullArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NullArgumentException::initializeClass, 1)))
          return NULL;
        return t_NullArgumentException::wrap_Object(NullArgumentException(((t_NullArgumentException *) arg)->object.this$));
      }
      static PyObject *t_NullArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NullArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_NullArgumentException_init_(t_NullArgumentException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            NullArgumentException object((jobject) NULL);

            INT_CALL(object = NullArgumentException());
            self->object = object;
            break;
          }
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            NullArgumentException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = NullArgumentException(a0, a1));
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

      static PyObject *t_NullArgumentException_getLocalizedMessage(t_NullArgumentException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(NullArgumentException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_NullArgumentException_getMessage(t_NullArgumentException *self, PyObject *args)
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

        return callSuper(PY_TYPE(NullArgumentException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_NullArgumentException_getParts(t_NullArgumentException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_NullArgumentException_getSpecifier(t_NullArgumentException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_NullArgumentException_get__localizedMessage(t_NullArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_NullArgumentException_get__message(t_NullArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_NullArgumentException_get__parts(t_NullArgumentException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_NullArgumentException_get__specifier(t_NullArgumentException *self, void *data)
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
#include "org/hipparchus/stat/regression/MultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *MultipleLinearRegression::class$ = NULL;
        jmethodID *MultipleLinearRegression::mids$ = NULL;
        bool MultipleLinearRegression::live$ = false;

        jclass MultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/MultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimateRegressandVariance_557b8123390d8d0c] = env->getMethodID(cls, "estimateRegressandVariance", "()D");
            mids$[mid_estimateRegressionParameters_a53a7513ecedada2] = env->getMethodID(cls, "estimateRegressionParameters", "()[D");
            mids$[mid_estimateRegressionParametersStandardErrors_a53a7513ecedada2] = env->getMethodID(cls, "estimateRegressionParametersStandardErrors", "()[D");
            mids$[mid_estimateRegressionParametersVariance_8cf5267aa13a77f3] = env->getMethodID(cls, "estimateRegressionParametersVariance", "()[[D");
            mids$[mid_estimateResiduals_a53a7513ecedada2] = env->getMethodID(cls, "estimateResiduals", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble MultipleLinearRegression::estimateRegressandVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressandVariance_557b8123390d8d0c]);
        }

        JArray< jdouble > MultipleLinearRegression::estimateRegressionParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParameters_a53a7513ecedada2]));
        }

        JArray< jdouble > MultipleLinearRegression::estimateRegressionParametersStandardErrors() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersStandardErrors_a53a7513ecedada2]));
        }

        JArray< JArray< jdouble > > MultipleLinearRegression::estimateRegressionParametersVariance() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersVariance_8cf5267aa13a77f3]));
        }

        JArray< jdouble > MultipleLinearRegression::estimateResiduals() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateResiduals_a53a7513ecedada2]));
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
        static PyObject *t_MultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultipleLinearRegression_estimateRegressandVariance(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateRegressionParameters(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersStandardErrors(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersVariance(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateResiduals(t_MultipleLinearRegression *self);

        static PyMethodDef t_MultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_MultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressandVariance, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressionParameters, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressionParametersStandardErrors, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressionParametersVariance, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateResiduals, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultipleLinearRegression)[] = {
          { Py_tp_methods, t_MultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultipleLinearRegression, t_MultipleLinearRegression, MultipleLinearRegression);

        void t_MultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(MultipleLinearRegression), &PY_TYPE_DEF(MultipleLinearRegression), module, "MultipleLinearRegression", 0);
        }

        void t_MultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleLinearRegression), "class_", make_descriptor(MultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleLinearRegression), "wrapfn_", make_descriptor(t_MultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_MultipleLinearRegression::wrap_Object(MultipleLinearRegression(((t_MultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_MultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressandVariance(t_MultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateRegressandVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressionParameters(t_MultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParameters());
          return result.wrap();
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersStandardErrors(t_MultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersStandardErrors());
          return result.wrap();
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersVariance(t_MultipleLinearRegression *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersVariance());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_MultipleLinearRegression_estimateResiduals(t_MultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateResiduals());
          return result.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/AbstractListCrawler.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *AbstractListCrawler::class$ = NULL;
      jmethodID *AbstractListCrawler::mids$ = NULL;
      bool AbstractListCrawler::live$ = false;

      jclass AbstractListCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/AbstractListCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addInput_009757f2c0fd9090] = env->getMethodID(cls, "addInput", "(Ljava/lang/Object;)V");
          mids$[mid_getInputs_0d9551367f7ecdef] = env->getMethodID(cls, "getInputs", "()Ljava/util/List;");
          mids$[mid_getCompleteName_fa48e6cfb0766bbf] = env->getMethodID(cls, "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getBaseName_fa48e6cfb0766bbf] = env->getMethodID(cls, "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getZipJarCrawler_bb8b4fd10482c728] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_getStream_9f5def4cb35ed37f] = env->getMethodID(cls, "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractListCrawler::addInput(const ::java::lang::Object & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addInput_009757f2c0fd9090], a0.this$);
      }

      ::java::util::List AbstractListCrawler::getInputs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getInputs_0d9551367f7ecdef]));
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
      static PyObject *t_AbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractListCrawler_of_(t_AbstractListCrawler *self, PyObject *args);
      static PyObject *t_AbstractListCrawler_addInput(t_AbstractListCrawler *self, PyObject *arg);
      static PyObject *t_AbstractListCrawler_getInputs(t_AbstractListCrawler *self);
      static PyObject *t_AbstractListCrawler_get__inputs(t_AbstractListCrawler *self, void *data);
      static PyObject *t_AbstractListCrawler_get__parameters_(t_AbstractListCrawler *self, void *data);
      static PyGetSetDef t_AbstractListCrawler__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractListCrawler, inputs),
        DECLARE_GET_FIELD(t_AbstractListCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractListCrawler__methods_[] = {
        DECLARE_METHOD(t_AbstractListCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractListCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractListCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractListCrawler, addInput, METH_O),
        DECLARE_METHOD(t_AbstractListCrawler, getInputs, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractListCrawler)[] = {
        { Py_tp_methods, t_AbstractListCrawler__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractListCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractListCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractListCrawler, t_AbstractListCrawler, AbstractListCrawler);
      PyObject *t_AbstractListCrawler::wrap_Object(const AbstractListCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractListCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractListCrawler *self = (t_AbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractListCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractListCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractListCrawler *self = (t_AbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractListCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractListCrawler), &PY_TYPE_DEF(AbstractListCrawler), module, "AbstractListCrawler", 0);
      }

      void t_AbstractListCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "class_", make_descriptor(AbstractListCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "wrapfn_", make_descriptor(t_AbstractListCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractListCrawler::initializeClass, 1)))
          return NULL;
        return t_AbstractListCrawler::wrap_Object(AbstractListCrawler(((t_AbstractListCrawler *) arg)->object.this$));
      }
      static PyObject *t_AbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractListCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractListCrawler_of_(t_AbstractListCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractListCrawler_addInput(t_AbstractListCrawler *self, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);

        if (!parseArg(arg, "O", self->parameters[0], &a0))
        {
          OBJ_CALL(self->object.addInput(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addInput", arg);
        return NULL;
      }

      static PyObject *t_AbstractListCrawler_getInputs(t_AbstractListCrawler *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getInputs());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_AbstractListCrawler_get__parameters_(t_AbstractListCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractListCrawler_get__inputs(t_AbstractListCrawler *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getInputs());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/vector/VectorialStorelessStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/StorelessMultivariateStatistic.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {

          ::java::lang::Class *VectorialStorelessStatistic::class$ = NULL;
          jmethodID *VectorialStorelessStatistic::mids$ = NULL;
          bool VectorialStorelessStatistic::live$ = false;

          jclass VectorialStorelessStatistic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/vector/VectorialStorelessStatistic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_87f7acbd7d5116c5] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_a53a7513ecedada2] = env->getMethodID(cls, "getResult", "()[D");
              mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_cc18240f4a737f14] = env->getMethodID(cls, "increment", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          VectorialStorelessStatistic::VectorialStorelessStatistic(jint a0, const ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87f7acbd7d5116c5, a0, a1.this$)) {}

          void VectorialStorelessStatistic::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          jboolean VectorialStorelessStatistic::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
          }

          jint VectorialStorelessStatistic::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
          }

          jlong VectorialStorelessStatistic::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          JArray< jdouble > VectorialStorelessStatistic::getResult() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getResult_a53a7513ecedada2]));
          }

          jint VectorialStorelessStatistic::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
          }

          void VectorialStorelessStatistic::increment(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_cc18240f4a737f14], a0.this$);
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
    namespace stat {
      namespace descriptive {
        namespace vector {
          static PyObject *t_VectorialStorelessStatistic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_VectorialStorelessStatistic_instance_(PyTypeObject *type, PyObject *arg);
          static int t_VectorialStorelessStatistic_init_(t_VectorialStorelessStatistic *self, PyObject *args, PyObject *kwds);
          static PyObject *t_VectorialStorelessStatistic_clear(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_equals(t_VectorialStorelessStatistic *self, PyObject *args);
          static PyObject *t_VectorialStorelessStatistic_getDimension(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_getN(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_getResult(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_hashCode(t_VectorialStorelessStatistic *self, PyObject *args);
          static PyObject *t_VectorialStorelessStatistic_increment(t_VectorialStorelessStatistic *self, PyObject *arg);
          static PyObject *t_VectorialStorelessStatistic_get__dimension(t_VectorialStorelessStatistic *self, void *data);
          static PyObject *t_VectorialStorelessStatistic_get__n(t_VectorialStorelessStatistic *self, void *data);
          static PyObject *t_VectorialStorelessStatistic_get__result(t_VectorialStorelessStatistic *self, void *data);
          static PyGetSetDef t_VectorialStorelessStatistic__fields_[] = {
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, dimension),
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, n),
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_VectorialStorelessStatistic__methods_[] = {
            DECLARE_METHOD(t_VectorialStorelessStatistic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, clear, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, equals, METH_VARARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getN, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getResult, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, increment, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(VectorialStorelessStatistic)[] = {
            { Py_tp_methods, t_VectorialStorelessStatistic__methods_ },
            { Py_tp_init, (void *) t_VectorialStorelessStatistic_init_ },
            { Py_tp_getset, t_VectorialStorelessStatistic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(VectorialStorelessStatistic)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(VectorialStorelessStatistic, t_VectorialStorelessStatistic, VectorialStorelessStatistic);

          void t_VectorialStorelessStatistic::install(PyObject *module)
          {
            installType(&PY_TYPE(VectorialStorelessStatistic), &PY_TYPE_DEF(VectorialStorelessStatistic), module, "VectorialStorelessStatistic", 0);
          }

          void t_VectorialStorelessStatistic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "class_", make_descriptor(VectorialStorelessStatistic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "wrapfn_", make_descriptor(t_VectorialStorelessStatistic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_VectorialStorelessStatistic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, VectorialStorelessStatistic::initializeClass, 1)))
              return NULL;
            return t_VectorialStorelessStatistic::wrap_Object(VectorialStorelessStatistic(((t_VectorialStorelessStatistic *) arg)->object.this$));
          }
          static PyObject *t_VectorialStorelessStatistic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, VectorialStorelessStatistic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_VectorialStorelessStatistic_init_(t_VectorialStorelessStatistic *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic a1((jobject) NULL);
            VectorialStorelessStatistic object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic::initializeClass, &a0, &a1))
            {
              INT_CALL(object = VectorialStorelessStatistic(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_VectorialStorelessStatistic_clear(t_VectorialStorelessStatistic *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_VectorialStorelessStatistic_equals(t_VectorialStorelessStatistic *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(VectorialStorelessStatistic), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_VectorialStorelessStatistic_getDimension(t_VectorialStorelessStatistic *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_VectorialStorelessStatistic_getN(t_VectorialStorelessStatistic *self)
          {
            jlong result;
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }

          static PyObject *t_VectorialStorelessStatistic_getResult(t_VectorialStorelessStatistic *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getResult());
            return result.wrap();
          }

          static PyObject *t_VectorialStorelessStatistic_hashCode(t_VectorialStorelessStatistic *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(VectorialStorelessStatistic), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_VectorialStorelessStatistic_increment(t_VectorialStorelessStatistic *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "increment", arg);
            return NULL;
          }

          static PyObject *t_VectorialStorelessStatistic_get__dimension(t_VectorialStorelessStatistic *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_VectorialStorelessStatistic_get__n(t_VectorialStorelessStatistic *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_VectorialStorelessStatistic_get__result(t_VectorialStorelessStatistic *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getResult());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemData.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemData::class$ = NULL;
              jmethodID *AemData::mids$ = NULL;
              bool AemData::live$ = false;

              jclass AemData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addData_1adeff44d5ae21ba] = env->getMethodID(cls, "addData", "(Lorg/orekit/utils/TimeStampedAngularCoordinates;)Z");
                  mids$[mid_getAngularCoordinates_0d9551367f7ecdef] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemData::AemData() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jboolean AemData::addData(const ::org::orekit::utils::TimeStampedAngularCoordinates & a0) const
              {
                return env->callBooleanMethod(this$, mids$[mid_addData_1adeff44d5ae21ba], a0.this$);
              }

              ::java::util::List AemData::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_0d9551367f7ecdef]));
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
            namespace aem {
              static PyObject *t_AemData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AemData_init_(t_AemData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemData_addData(t_AemData *self, PyObject *arg);
              static PyObject *t_AemData_getAngularCoordinates(t_AemData *self);
              static PyObject *t_AemData_get__angularCoordinates(t_AemData *self, void *data);
              static PyGetSetDef t_AemData__fields_[] = {
                DECLARE_GET_FIELD(t_AemData, angularCoordinates),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemData__methods_[] = {
                DECLARE_METHOD(t_AemData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemData, addData, METH_O),
                DECLARE_METHOD(t_AemData, getAngularCoordinates, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemData)[] = {
                { Py_tp_methods, t_AemData__methods_ },
                { Py_tp_init, (void *) t_AemData_init_ },
                { Py_tp_getset, t_AemData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemData)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AemData, t_AemData, AemData);

              void t_AemData::install(PyObject *module)
              {
                installType(&PY_TYPE(AemData), &PY_TYPE_DEF(AemData), module, "AemData", 0);
              }

              void t_AemData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "class_", make_descriptor(AemData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "wrapfn_", make_descriptor(t_AemData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemData::initializeClass, 1)))
                  return NULL;
                return t_AemData::wrap_Object(AemData(((t_AemData *) arg)->object.this$));
              }
              static PyObject *t_AemData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AemData_init_(t_AemData *self, PyObject *args, PyObject *kwds)
              {
                AemData object((jobject) NULL);

                INT_CALL(object = AemData());
                self->object = object;

                return 0;
              }

              static PyObject *t_AemData_addData(t_AemData *self, PyObject *arg)
              {
                ::org::orekit::utils::TimeStampedAngularCoordinates a0((jobject) NULL);
                jboolean result;

                if (!parseArg(arg, "k", ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.addData(a0));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "addData", arg);
                return NULL;
              }

              static PyObject *t_AemData_getAngularCoordinates(t_AemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AemData_get__angularCoordinates(t_AemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/hipparchus/distribution/continuous/LevyDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LevyDistribution::class$ = NULL;
        jmethodID *LevyDistribution::mids$ = NULL;
        bool LevyDistribution::live$ = false;

        jclass LevyDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LevyDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_557b8123390d8d0c] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_557b8123390d8d0c] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_7e960cd6eee376d8] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LevyDistribution::LevyDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble LevyDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble LevyDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble LevyDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_557b8123390d8d0c]);
        }

        jdouble LevyDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble LevyDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble LevyDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_557b8123390d8d0c]);
        }

        jdouble LevyDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble LevyDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jdouble LevyDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
        }

        jboolean LevyDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble LevyDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_7e960cd6eee376d8], a0);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_LevyDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LevyDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LevyDistribution_init_(t_LevyDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LevyDistribution_cumulativeProbability(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_density(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getLocation(t_LevyDistribution *self);
        static PyObject *t_LevyDistribution_getNumericalMean(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getNumericalVariance(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getScale(t_LevyDistribution *self);
        static PyObject *t_LevyDistribution_getSupportLowerBound(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getSupportUpperBound(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_inverseCumulativeProbability(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_isSupportConnected(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_logDensity(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_get__location(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__numericalMean(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__numericalVariance(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__scale(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__supportConnected(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__supportLowerBound(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__supportUpperBound(t_LevyDistribution *self, void *data);
        static PyGetSetDef t_LevyDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LevyDistribution, location),
          DECLARE_GET_FIELD(t_LevyDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LevyDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LevyDistribution, scale),
          DECLARE_GET_FIELD(t_LevyDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LevyDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LevyDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LevyDistribution__methods_[] = {
          DECLARE_METHOD(t_LevyDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LevyDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LevyDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LevyDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_LevyDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LevyDistribution)[] = {
          { Py_tp_methods, t_LevyDistribution__methods_ },
          { Py_tp_init, (void *) t_LevyDistribution_init_ },
          { Py_tp_getset, t_LevyDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LevyDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LevyDistribution, t_LevyDistribution, LevyDistribution);

        void t_LevyDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LevyDistribution), &PY_TYPE_DEF(LevyDistribution), module, "LevyDistribution", 0);
        }

        void t_LevyDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LevyDistribution), "class_", make_descriptor(LevyDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LevyDistribution), "wrapfn_", make_descriptor(t_LevyDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LevyDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LevyDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LevyDistribution::initializeClass, 1)))
            return NULL;
          return t_LevyDistribution::wrap_Object(LevyDistribution(((t_LevyDistribution *) arg)->object.this$));
        }
        static PyObject *t_LevyDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LevyDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LevyDistribution_init_(t_LevyDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          LevyDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = LevyDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LevyDistribution_cumulativeProbability(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LevyDistribution_density(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LevyDistribution_getLocation(t_LevyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LevyDistribution_getNumericalMean(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LevyDistribution_getNumericalVariance(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LevyDistribution_getScale(t_LevyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LevyDistribution_getSupportLowerBound(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LevyDistribution_getSupportUpperBound(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LevyDistribution_inverseCumulativeProbability(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_LevyDistribution_isSupportConnected(t_LevyDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LevyDistribution_logDensity(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_LevyDistribution_get__location(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__numericalMean(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__numericalVariance(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__scale(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__supportConnected(t_LevyDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LevyDistribution_get__supportLowerBound(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__supportUpperBound(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EopHistoryLoader$Parser::class$ = NULL;
      jmethodID *EopHistoryLoader$Parser::mids$ = NULL;
      bool EopHistoryLoader$Parser::live$ = false;

      jclass EopHistoryLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EopHistoryLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_newBulletinBParser_6f6ad2a6ae8828b0] = env->getStaticMethodID(cls, "newBulletinBParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newEopC04Parser_6f6ad2a6ae8828b0] = env->getStaticMethodID(cls, "newEopC04Parser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newFinalsColumnsParser_f68fb5c951d93d52] = env->getStaticMethodID(cls, "newFinalsColumnsParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;Z)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newFinalsXmlParser_6f6ad2a6ae8828b0] = env->getStaticMethodID(cls, "newFinalsXmlParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_parse_b37b9ef659753c44] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newBulletinBParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newBulletinBParser_6f6ad2a6ae8828b0], a0.this$, a1.this$, a2.this$));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newEopC04Parser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newEopC04Parser_6f6ad2a6ae8828b0], a0.this$, a1.this$, a2.this$));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newFinalsColumnsParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newFinalsColumnsParser_f68fb5c951d93d52], a0.this$, a1.this$, a2.this$, a3));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newFinalsXmlParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newFinalsXmlParser_6f6ad2a6ae8828b0], a0.this$, a1.this$, a2.this$));
      }

      ::java::util::Collection EopHistoryLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_parse_b37b9ef659753c44], a0.this$, a1.this$));
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
      static PyObject *t_EopHistoryLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader$Parser_newBulletinBParser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_newEopC04Parser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_newFinalsColumnsParser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_newFinalsXmlParser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_parse(t_EopHistoryLoader$Parser *self, PyObject *args);

      static PyMethodDef t_EopHistoryLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_EopHistoryLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newBulletinBParser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newEopC04Parser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newFinalsColumnsParser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newFinalsXmlParser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EopHistoryLoader$Parser)[] = {
        { Py_tp_methods, t_EopHistoryLoader$Parser__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EopHistoryLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EopHistoryLoader$Parser, t_EopHistoryLoader$Parser, EopHistoryLoader$Parser);

      void t_EopHistoryLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(EopHistoryLoader$Parser), &PY_TYPE_DEF(EopHistoryLoader$Parser), module, "EopHistoryLoader$Parser", 0);
      }

      void t_EopHistoryLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader$Parser), "class_", make_descriptor(EopHistoryLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader$Parser), "wrapfn_", make_descriptor(t_EopHistoryLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EopHistoryLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EopHistoryLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_EopHistoryLoader$Parser::wrap_Object(EopHistoryLoader$Parser(((t_EopHistoryLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_EopHistoryLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EopHistoryLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EopHistoryLoader$Parser_newBulletinBParser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newBulletinBParser(a0, a1, a2));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newBulletinBParser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_newEopC04Parser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newEopC04Parser(a0, a1, a2));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newEopC04Parser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_newFinalsColumnsParser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        jboolean a3;
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "KkkZ", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newFinalsColumnsParser(a0, a1, a2, a3));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newFinalsColumnsParser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_newFinalsXmlParser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newFinalsXmlParser(a0, a1, a2));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newFinalsXmlParser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_parse(t_EopHistoryLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::Collection result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::frames::PY_TYPE(EOPEntry));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative1::class$ = NULL;
        jmethodID *UnivariateDerivative1::mids$ = NULL;
        bool UnivariateDerivative1::live$ = false;
        UnivariateDerivative1 *UnivariateDerivative1::PI = NULL;

        jclass UnivariateDerivative1::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative1");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_db212c86bccc027a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_abs_23c0f53d490c173c] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_acos_23c0f53d490c173c] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_acosh_23c0f53d490c173c] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_add_8e24ca97f1ddac52] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_add_3abecf1dd8bcdfaa] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_asin_23c0f53d490c173c] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_asinh_23c0f53d490c173c] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atan_23c0f53d490c173c] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atan2_8e24ca97f1ddac52] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atanh_23c0f53d490c173c] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cbrt_23c0f53d490c173c] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_ceil_23c0f53d490c173c] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_compareTo_79066c0a10a9c90a] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)I");
            mids$[mid_compose_07c566f537564bf9] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_copySign_8e24ca97f1ddac52] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_copySign_3abecf1dd8bcdfaa] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cos_23c0f53d490c173c] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cosh_23c0f53d490c173c] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_divide_8e24ca97f1ddac52] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_divide_3abecf1dd8bcdfaa] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_23c0f53d490c173c] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_expm1_23c0f53d490c173c] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_floor_23c0f53d490c173c] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getDerivative_69cfb132c661aca4] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getExponent_412668abc8d889e9] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_a70907128b423cca] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1Field;");
            mids$[mid_getFirstDerivative_557b8123390d8d0c] = env->getMethodID(cls, "getFirstDerivative", "()D");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_23c0f53d490c173c] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_557b8123390d8d0c] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_8e24ca97f1ddac52] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_5cd64a6ee7a7f2c6] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_98079e401755bb9b] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_6ccb231305ea52f9] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_a843fdc2486f08c0] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_be7180be9b9c508e] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_e6e2c2f17852186e] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_f87b54fa6425b9d2] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_256606dc17f37e12] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log_23c0f53d490c173c] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log10_23c0f53d490c173c] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log1p_23c0f53d490c173c] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_8e24ca97f1ddac52] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_3abecf1dd8bcdfaa] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_0a0f5be08be889b0] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_negate_23c0f53d490c173c] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_newInstance_3abecf1dd8bcdfaa] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_8e24ca97f1ddac52] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_3abecf1dd8bcdfaa] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_0a0f5be08be889b0] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_f20f95cf728c3c7a] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_reciprocal_23c0f53d490c173c] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_remainder_8e24ca97f1ddac52] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_remainder_3abecf1dd8bcdfaa] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_rint_23c0f53d490c173c] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_rootN_0a0f5be08be889b0] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_scalb_0a0f5be08be889b0] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sign_23c0f53d490c173c] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sin_23c0f53d490c173c] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_23c0f53d490c173c] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_23c0f53d490c173c] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_subtract_8e24ca97f1ddac52] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_subtract_3abecf1dd8bcdfaa] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_tan_23c0f53d490c173c] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_tanh_23c0f53d490c173c] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_taylor_7e960cd6eee376d8] = env->getMethodID(cls, "taylor", "(D)D");
            mids$[mid_toDegrees_23c0f53d490c173c] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_toDerivativeStructure_9f40c2a430225d38] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_23c0f53d490c173c] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_ulp_23c0f53d490c173c] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PI = new UnivariateDerivative1(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative1::UnivariateDerivative1(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_db212c86bccc027a, a0.this$)) {}

        UnivariateDerivative1::UnivariateDerivative1(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        UnivariateDerivative1 UnivariateDerivative1::abs() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_abs_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::acos() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acos_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::acosh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acosh_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::add(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_8e24ca97f1ddac52], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::add(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_3abecf1dd8bcdfaa], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::asin() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asin_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::asinh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asinh_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::atan() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::atan2(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan2_8e24ca97f1ddac52], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::atanh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atanh_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::cbrt() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cbrt_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::ceil() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ceil_23c0f53d490c173c]));
        }

        jint UnivariateDerivative1::compareTo(const UnivariateDerivative1 & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_79066c0a10a9c90a], a0.this$);
        }

        UnivariateDerivative1 UnivariateDerivative1::compose(const JArray< jdouble > & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_compose_07c566f537564bf9], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::copySign(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_8e24ca97f1ddac52], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::copySign(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_3abecf1dd8bcdfaa], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::cos() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cos_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::cosh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cosh_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::divide(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_8e24ca97f1ddac52], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::divide(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_3abecf1dd8bcdfaa], a0));
        }

        jboolean UnivariateDerivative1::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        UnivariateDerivative1 UnivariateDerivative1::exp() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_exp_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::expm1() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_expm1_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::floor() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_floor_23c0f53d490c173c]));
        }

        jdouble UnivariateDerivative1::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_69cfb132c661aca4], a0);
        }

        jint UnivariateDerivative1::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_412668abc8d889e9]);
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field UnivariateDerivative1::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field(env->callObjectMethod(this$, mids$[mid_getField_a70907128b423cca]));
        }

        jdouble UnivariateDerivative1::getFirstDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFirstDerivative_557b8123390d8d0c]);
        }

        jint UnivariateDerivative1::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }

        UnivariateDerivative1 UnivariateDerivative1::getPi() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getPi_23c0f53d490c173c]));
        }

        jdouble UnivariateDerivative1::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
        }

        jdouble UnivariateDerivative1::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_557b8123390d8d0c]);
        }

        jint UnivariateDerivative1::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        UnivariateDerivative1 UnivariateDerivative1::hypot(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_hypot_8e24ca97f1ddac52], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const JArray< jdouble > & a0, const JArray< UnivariateDerivative1 > & a1) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_5cd64a6ee7a7f2c6], a0.this$, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const JArray< UnivariateDerivative1 > & a0, const JArray< UnivariateDerivative1 > & a1) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_98079e401755bb9b], a0.this$, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_6ccb231305ea52f9], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_a843fdc2486f08c0], a0, a1.this$, a2, a3.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3, const UnivariateDerivative1 & a4, const UnivariateDerivative1 & a5) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_be7180be9b9c508e], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3, jdouble a4, const UnivariateDerivative1 & a5) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_e6e2c2f17852186e], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3, const UnivariateDerivative1 & a4, const UnivariateDerivative1 & a5, const UnivariateDerivative1 & a6, const UnivariateDerivative1 & a7) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_f87b54fa6425b9d2], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3, jdouble a4, const UnivariateDerivative1 & a5, jdouble a6, const UnivariateDerivative1 & a7) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_256606dc17f37e12], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::log() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::log10() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log10_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::log1p() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log1p_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_8e24ca97f1ddac52], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_3abecf1dd8bcdfaa], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_0a0f5be08be889b0], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::negate() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_negate_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::newInstance(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_newInstance_3abecf1dd8bcdfaa], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_8e24ca97f1ddac52], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_3abecf1dd8bcdfaa], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_0a0f5be08be889b0], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jdouble a0, const UnivariateDerivative1 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative1(env->callStaticObjectMethod(cls, mids$[mid_pow_f20f95cf728c3c7a], a0, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::reciprocal() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_reciprocal_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::remainder(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_8e24ca97f1ddac52], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::remainder(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_3abecf1dd8bcdfaa], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::rint() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rint_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::rootN(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rootN_0a0f5be08be889b0], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::scalb(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_scalb_0a0f5be08be889b0], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::sign() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sign_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sin() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sin_23c0f53d490c173c]));
        }

        ::org::hipparchus::util::FieldSinCos UnivariateDerivative1::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sinh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sinh_23c0f53d490c173c]));
        }

        ::org::hipparchus::util::FieldSinhCosh UnivariateDerivative1::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sqrt() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sqrt_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::subtract(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_8e24ca97f1ddac52], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::subtract(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_3abecf1dd8bcdfaa], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::tan() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tan_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::tanh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tanh_23c0f53d490c173c]));
        }

        jdouble UnivariateDerivative1::taylor(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_7e960cd6eee376d8], a0);
        }

        UnivariateDerivative1 UnivariateDerivative1::toDegrees() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toDegrees_23c0f53d490c173c]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative1::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_9f40c2a430225d38]));
        }

        UnivariateDerivative1 UnivariateDerivative1::toRadians() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toRadians_23c0f53d490c173c]));
        }

        UnivariateDerivative1 UnivariateDerivative1::ulp() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ulp_23c0f53d490c173c]));
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
        static PyObject *t_UnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_of_(t_UnivariateDerivative1 *self, PyObject *args);
        static int t_UnivariateDerivative1_init_(t_UnivariateDerivative1 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateDerivative1_abs(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_acos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_acosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_add(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_asin(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_asinh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atan(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atan2(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atanh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cbrt(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_ceil(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_compareTo(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_compose(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_copySign(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_divide(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_equals(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_exp(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_expm1(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_floor(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getDerivative(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getExponent(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getField(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getFirstDerivative(t_UnivariateDerivative1 *self);
        static PyObject *t_UnivariateDerivative1_getOrder(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getPi(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getReal(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getValue(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_hashCode(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_hypot(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_linearCombination(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log10(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log1p(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_multiply(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_negate(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_newInstance(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_pow(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateDerivative1_reciprocal(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_remainder(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_rint(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_rootN(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_scalb(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sign(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sin(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinCos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinhCosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sqrt(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_subtract(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_tan(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_tanh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_taylor(t_UnivariateDerivative1 *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_toDegrees(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_toDerivativeStructure(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_toRadians(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_ulp(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_get__exponent(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__field(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__firstDerivative(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__order(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__pi(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__real(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__value(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__parameters_(t_UnivariateDerivative1 *self, void *data);
        static PyGetSetDef t_UnivariateDerivative1__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative1, exponent),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, field),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, firstDerivative),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, order),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, pi),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, real),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, value),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative1__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative1, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, abs, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, acos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, acosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, add, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, asin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, asinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atan2, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, ceil, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, compareTo, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, compose, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, copySign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, divide, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, exp, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, expm1, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, floor, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getField, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getPi, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getReal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getValue, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, hypot, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log10, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log1p, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, multiply, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, negate, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, pow, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, remainder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, rint, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, rootN, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, scalb, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, subtract, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, tan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, tanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, taylor, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative1, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative1)[] = {
          { Py_tp_methods, t_UnivariateDerivative1__methods_ },
          { Py_tp_init, (void *) t_UnivariateDerivative1_init_ },
          { Py_tp_getset, t_UnivariateDerivative1__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative1)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::UnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative1, t_UnivariateDerivative1, UnivariateDerivative1);
        PyObject *t_UnivariateDerivative1::wrap_Object(const UnivariateDerivative1& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative1::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative1 *self = (t_UnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateDerivative1::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative1::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative1 *self = (t_UnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateDerivative1::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative1), &PY_TYPE_DEF(UnivariateDerivative1), module, "UnivariateDerivative1", 0);
        }

        void t_UnivariateDerivative1::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "class_", make_descriptor(UnivariateDerivative1::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "wrapfn_", make_descriptor(t_UnivariateDerivative1::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnivariateDerivative1::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "PI", make_descriptor(t_UnivariateDerivative1::wrap_Object(*UnivariateDerivative1::PI)));
        }

        static PyObject *t_UnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative1::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative1::wrap_Object(UnivariateDerivative1(((t_UnivariateDerivative1 *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative1::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative1_of_(t_UnivariateDerivative1 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_UnivariateDerivative1_init_(t_UnivariateDerivative1 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::DerivativeStructure a0((jobject) NULL);
              UnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
              {
                INT_CALL(object = UnivariateDerivative1(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              UnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = UnivariateDerivative1(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1);
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

        static PyObject *t_UnivariateDerivative1_abs(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_acos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_acosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_add(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_asin(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_asinh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atan(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atan2(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atanh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cbrt(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_ceil(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_compareTo(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.compareTo(a0));
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "compareTo", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_compose(t_UnivariateDerivative1 *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "compose", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_copySign(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_divide(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_equals(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_exp(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_expm1(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_floor(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getDerivative(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getExponent(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getField(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1Field::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getFirstDerivative(t_UnivariateDerivative1 *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateDerivative1_getOrder(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getPi(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getReal(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getValue(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_hashCode(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_hypot(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_linearCombination(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< UnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              JArray< UnivariateDerivative1 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< UnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &p4, t_UnivariateDerivative1::parameters_, &a5, &p5, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &a5, &p5, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 a6((jobject) NULL);
              PyTypeObject **p6;
              UnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &p4, t_UnivariateDerivative1::parameters_, &a5, &p5, t_UnivariateDerivative1::parameters_, &a6, &p6, t_UnivariateDerivative1::parameters_, &a7, &p7, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              UnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &a5, &p5, t_UnivariateDerivative1::parameters_, &a6, &a7, &p7, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log10(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log1p(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_multiply(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_negate(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_newInstance(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_pow(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative1 a1((jobject) NULL);
          PyTypeObject **p1;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "DK", UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative1::pow(a0, a1));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative1_reciprocal(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_remainder(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_rint(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_rootN(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_scalb(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sign(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sin(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinCos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinhCosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sqrt(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_subtract(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_tan(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_tanh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_taylor(t_UnivariateDerivative1 *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative1_toDegrees(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_toDerivativeStructure(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_toRadians(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_ulp(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_UnivariateDerivative1_get__parameters_(t_UnivariateDerivative1 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateDerivative1_get__exponent(t_UnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative1_get__field(t_UnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1_get__firstDerivative(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative1_get__order(t_UnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative1_get__pi(t_UnivariateDerivative1 *self, void *data)
        {
          UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_UnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1_get__real(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative1_get__value(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockInterSatellitesRangeModifier::class$ = NULL;
          jmethodID *RelativisticClockInterSatellitesRangeModifier::mids$ = NULL;
          bool RelativisticClockInterSatellitesRangeModifier::live$ = false;

          jclass RelativisticClockInterSatellitesRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockInterSatellitesRangeModifier::RelativisticClockInterSatellitesRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::java::util::List RelativisticClockInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void RelativisticClockInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockInterSatellitesRangeModifier_init_(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockInterSatellitesRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockInterSatellitesRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockInterSatellitesRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockInterSatellitesRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticClockInterSatellitesRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockInterSatellitesRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticClockInterSatellitesRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockInterSatellitesRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockInterSatellitesRangeModifier, t_RelativisticClockInterSatellitesRangeModifier, RelativisticClockInterSatellitesRangeModifier);

          void t_RelativisticClockInterSatellitesRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockInterSatellitesRangeModifier), &PY_TYPE_DEF(RelativisticClockInterSatellitesRangeModifier), module, "RelativisticClockInterSatellitesRangeModifier", 0);
          }

          void t_RelativisticClockInterSatellitesRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "class_", make_descriptor(RelativisticClockInterSatellitesRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "wrapfn_", make_descriptor(t_RelativisticClockInterSatellitesRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockInterSatellitesRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockInterSatellitesRangeModifier::wrap_Object(RelativisticClockInterSatellitesRangeModifier(((t_RelativisticClockInterSatellitesRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockInterSatellitesRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockInterSatellitesRangeModifier_init_(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockInterSatellitesRangeModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockInterSatellitesRangeModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self, void *data)
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
#include "org/orekit/attitudes/PythonGroundPointing.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonGroundPointing::class$ = NULL;
      jmethodID *PythonGroundPointing::mids$ = NULL;
      bool PythonGroundPointing::live$ = false;

      jclass PythonGroundPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonGroundPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_16d9dfdcb9768806] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getTargetPV_ee00ab612436435b] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_9e0119a6fef31431] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonGroundPointing::PythonGroundPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_16d9dfdcb9768806, a0.this$, a1.this$)) {}

      void PythonGroundPointing::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonGroundPointing::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonGroundPointing::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonGroundPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonGroundPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonGroundPointing_init_(t_PythonGroundPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonGroundPointing_finalize(t_PythonGroundPointing *self);
      static PyObject *t_PythonGroundPointing_pythonExtension(t_PythonGroundPointing *self, PyObject *args);
      static jobject JNICALL t_PythonGroundPointing_getTargetPV0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonGroundPointing_getTargetPV1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonGroundPointing_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonGroundPointing_get__self(t_PythonGroundPointing *self, void *data);
      static PyGetSetDef t_PythonGroundPointing__fields_[] = {
        DECLARE_GET_FIELD(t_PythonGroundPointing, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonGroundPointing__methods_[] = {
        DECLARE_METHOD(t_PythonGroundPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonGroundPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonGroundPointing, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonGroundPointing, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonGroundPointing)[] = {
        { Py_tp_methods, t_PythonGroundPointing__methods_ },
        { Py_tp_init, (void *) t_PythonGroundPointing_init_ },
        { Py_tp_getset, t_PythonGroundPointing__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonGroundPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(PythonGroundPointing, t_PythonGroundPointing, PythonGroundPointing);

      void t_PythonGroundPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonGroundPointing), &PY_TYPE_DEF(PythonGroundPointing), module, "PythonGroundPointing", 1);
      }

      void t_PythonGroundPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "class_", make_descriptor(PythonGroundPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "wrapfn_", make_descriptor(t_PythonGroundPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonGroundPointing::initializeClass);
        JNINativeMethod methods[] = {
          { "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonGroundPointing_getTargetPV0 },
          { "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonGroundPointing_getTargetPV1 },
          { "pythonDecRef", "()V", (void *) t_PythonGroundPointing_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonGroundPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonGroundPointing::initializeClass, 1)))
          return NULL;
        return t_PythonGroundPointing::wrap_Object(PythonGroundPointing(((t_PythonGroundPointing *) arg)->object.this$));
      }
      static PyObject *t_PythonGroundPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonGroundPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonGroundPointing_init_(t_PythonGroundPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        PythonGroundPointing object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          INT_CALL(object = PythonGroundPointing(a0, a1));
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

      static PyObject *t_PythonGroundPointing_finalize(t_PythonGroundPointing *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonGroundPointing_pythonExtension(t_PythonGroundPointing *self, PyObject *args)
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

      static jobject JNICALL t_PythonGroundPointing_getTargetPV0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getTargetPV", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getTargetPV", result);
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

      static jobject JNICALL t_PythonGroundPointing_getTargetPV1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getTargetPV", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getTargetPV", result);
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

      static void JNICALL t_PythonGroundPointing_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonGroundPointing_get__self(t_PythonGroundPointing *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmOrbitCorrectionHeader::class$ = NULL;
              jmethodID *RtcmOrbitCorrectionHeader::mids$ = NULL;
              bool RtcmOrbitCorrectionHeader::live$ = false;

              jclass RtcmOrbitCorrectionHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteReferenceDatum_412668abc8d889e9] = env->getMethodID(cls, "getSatelliteReferenceDatum", "()I");
                  mids$[mid_setSatelliteReferenceDatum_a3da1a935cb37f7b] = env->getMethodID(cls, "setSatelliteReferenceDatum", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmOrbitCorrectionHeader::RtcmOrbitCorrectionHeader() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jint RtcmOrbitCorrectionHeader::getSatelliteReferenceDatum() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteReferenceDatum_412668abc8d889e9]);
              }

              void RtcmOrbitCorrectionHeader::setSatelliteReferenceDatum(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteReferenceDatum_a3da1a935cb37f7b], a0);
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
              static PyObject *t_RtcmOrbitCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmOrbitCorrectionHeader_init_(t_RtcmOrbitCorrectionHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmOrbitCorrectionHeader_getSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self);
              static PyObject *t_RtcmOrbitCorrectionHeader_setSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionHeader_get__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, void *data);
              static int t_RtcmOrbitCorrectionHeader_set__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmOrbitCorrectionHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmOrbitCorrectionHeader, satelliteReferenceDatum),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmOrbitCorrectionHeader__methods_[] = {
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, getSatelliteReferenceDatum, METH_NOARGS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, setSatelliteReferenceDatum, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmOrbitCorrectionHeader)[] = {
                { Py_tp_methods, t_RtcmOrbitCorrectionHeader__methods_ },
                { Py_tp_init, (void *) t_RtcmOrbitCorrectionHeader_init_ },
                { Py_tp_getset, t_RtcmOrbitCorrectionHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmOrbitCorrectionHeader)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader),
                NULL
              };

              DEFINE_TYPE(RtcmOrbitCorrectionHeader, t_RtcmOrbitCorrectionHeader, RtcmOrbitCorrectionHeader);

              void t_RtcmOrbitCorrectionHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmOrbitCorrectionHeader), &PY_TYPE_DEF(RtcmOrbitCorrectionHeader), module, "RtcmOrbitCorrectionHeader", 0);
              }

              void t_RtcmOrbitCorrectionHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "class_", make_descriptor(RtcmOrbitCorrectionHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "wrapfn_", make_descriptor(t_RtcmOrbitCorrectionHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmOrbitCorrectionHeader::initializeClass, 1)))
                  return NULL;
                return t_RtcmOrbitCorrectionHeader::wrap_Object(RtcmOrbitCorrectionHeader(((t_RtcmOrbitCorrectionHeader *) arg)->object.this$));
              }
              static PyObject *t_RtcmOrbitCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmOrbitCorrectionHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmOrbitCorrectionHeader_init_(t_RtcmOrbitCorrectionHeader *self, PyObject *args, PyObject *kwds)
              {
                RtcmOrbitCorrectionHeader object((jobject) NULL);

                INT_CALL(object = RtcmOrbitCorrectionHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_getSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteReferenceDatum());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_setSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteReferenceDatum(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteReferenceDatum", arg);
                return NULL;
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_get__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteReferenceDatum());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmOrbitCorrectionHeader_set__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteReferenceDatum(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteReferenceDatum", arg);
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
#include "org/orekit/time/PythonTimeScalarFunction.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeScalarFunction::class$ = NULL;
      jmethodID *PythonTimeScalarFunction::mids$ = NULL;
      bool PythonTimeScalarFunction::live$ = false;

      jclass PythonTimeScalarFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeScalarFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_b0b988f941da47d8] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_value_b884068a2c99f6ca] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScalarFunction::PythonTimeScalarFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonTimeScalarFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonTimeScalarFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonTimeScalarFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonTimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeScalarFunction_init_(t_PythonTimeScalarFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeScalarFunction_finalize(t_PythonTimeScalarFunction *self);
      static PyObject *t_PythonTimeScalarFunction_pythonExtension(t_PythonTimeScalarFunction *self, PyObject *args);
      static void JNICALL t_PythonTimeScalarFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonTimeScalarFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeScalarFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonTimeScalarFunction_get__self(t_PythonTimeScalarFunction *self, void *data);
      static PyGetSetDef t_PythonTimeScalarFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeScalarFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeScalarFunction__methods_[] = {
        DECLARE_METHOD(t_PythonTimeScalarFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeScalarFunction)[] = {
        { Py_tp_methods, t_PythonTimeScalarFunction__methods_ },
        { Py_tp_init, (void *) t_PythonTimeScalarFunction_init_ },
        { Py_tp_getset, t_PythonTimeScalarFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeScalarFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeScalarFunction, t_PythonTimeScalarFunction, PythonTimeScalarFunction);

      void t_PythonTimeScalarFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeScalarFunction), &PY_TYPE_DEF(PythonTimeScalarFunction), module, "PythonTimeScalarFunction", 1);
      }

      void t_PythonTimeScalarFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "class_", make_descriptor(PythonTimeScalarFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "wrapfn_", make_descriptor(t_PythonTimeScalarFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeScalarFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonTimeScalarFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonTimeScalarFunction_value1 },
          { "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonTimeScalarFunction_value2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonTimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeScalarFunction::initializeClass, 1)))
          return NULL;
        return t_PythonTimeScalarFunction::wrap_Object(PythonTimeScalarFunction(((t_PythonTimeScalarFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeScalarFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeScalarFunction_init_(t_PythonTimeScalarFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeScalarFunction object((jobject) NULL);

        INT_CALL(object = PythonTimeScalarFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeScalarFunction_finalize(t_PythonTimeScalarFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeScalarFunction_pythonExtension(t_PythonTimeScalarFunction *self, PyObject *args)
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

      static void JNICALL t_PythonTimeScalarFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonTimeScalarFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonTimeScalarFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
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

      static PyObject *t_PythonTimeScalarFunction_get__self(t_PythonTimeScalarFunction *self, void *data)
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
#include "org/orekit/forces/maneuvers/ConstantThrustManeuver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *ConstantThrustManeuver::class$ = NULL;
        jmethodID *ConstantThrustManeuver::mids$ = NULL;
        bool ConstantThrustManeuver::live$ = false;

        jclass ConstantThrustManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/ConstantThrustManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4f93678b88c255da] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers;Lorg/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel;)V");
            mids$[mid_init$_553de90fa169df1b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel;)V");
            mids$[mid_init$_5256b9ba65320d41] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_init$_7b6bd86b98a97305] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
            mids$[mid_init$_70317b76a6b31964] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_init$_91944649ff91b0d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
            mids$[mid_init$_4e43b10d66db1cc7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
            mids$[mid_getDirection_f88961cca75a2c0a] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDirection_3df461fe15362b2b] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDuration_557b8123390d8d0c] = env->getMethodID(cls, "getDuration", "()D");
            mids$[mid_getEndDate_7a97f7e149e79afb] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFlowRate_557b8123390d8d0c] = env->getMethodID(cls, "getFlowRate", "()D");
            mids$[mid_getFlowRate_b0b988f941da47d8] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getIsp_557b8123390d8d0c] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getIsp_b0b988f941da47d8] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getStartDate_7a97f7e149e79afb] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getThrustMagnitude_557b8123390d8d0c] = env->getMethodID(cls, "getThrustMagnitude", "()D");
            mids$[mid_getThrustMagnitude_b0b988f941da47d8] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getThrustVector_f88961cca75a2c0a] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getThrustVector_3df461fe15362b2b] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_isFiring_4fda3059ab91dbfe] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_isFiring_abdf3beb789bbd4e] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/propagation/SpacecraftState;)Z");
            mids$[mid_isFiring_981023bfa4a8a093] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers & a1, const ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel & a2) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_4f93678b88c255da, a0.this$, a1.this$, a2.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel & a3) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_553de90fa169df1b, a0.this$, a1, a2.this$, a3.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_5256b9ba65320d41, a0.this$, a1, a2, a3, a4.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::java::lang::String & a5) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_7b6bd86b98a97305, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_70317b76a6b31964, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::java::lang::String & a6) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_91944649ff91b0d4, a0.this$, a1, a2, a3, a4.this$, a5.this$, a6.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a6, const ::java::lang::String & a7) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_4e43b10d66db1cc7, a0.this$, a1, a2, a3, a4.this$, a5.this$, a6.this$, a7.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getDirection() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_f88961cca75a2c0a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getDirection(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_3df461fe15362b2b], a0.this$));
        }

        jdouble ConstantThrustManeuver::getDuration() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDuration_557b8123390d8d0c]);
        }

        ::org::orekit::time::AbsoluteDate ConstantThrustManeuver::getEndDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_7a97f7e149e79afb]));
        }

        jdouble ConstantThrustManeuver::getFlowRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFlowRate_557b8123390d8d0c]);
        }

        jdouble ConstantThrustManeuver::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFlowRate_b0b988f941da47d8], a0.this$);
        }

        jdouble ConstantThrustManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_557b8123390d8d0c]);
        }

        jdouble ConstantThrustManeuver::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_b0b988f941da47d8], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate ConstantThrustManeuver::getStartDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_7a97f7e149e79afb]));
        }

        jdouble ConstantThrustManeuver::getThrustMagnitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_557b8123390d8d0c]);
        }

        jdouble ConstantThrustManeuver::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_b0b988f941da47d8], a0.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getThrustVector() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_f88961cca75a2c0a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_3df461fe15362b2b], a0.this$));
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_4fda3059ab91dbfe], a0.this$);
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_abdf3beb789bbd4e], a0.this$);
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_981023bfa4a8a093], a0.this$);
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
        static PyObject *t_ConstantThrustManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantThrustManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantThrustManeuver_init_(t_ConstantThrustManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantThrustManeuver_getDirection(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getDuration(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getEndDate(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getFlowRate(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getIsp(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getStartDate(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getThrustMagnitude(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getThrustVector(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_isFiring(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_get__direction(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__duration(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__endDate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__flowRate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__isp(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__startDate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__thrustMagnitude(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__thrustVector(t_ConstantThrustManeuver *self, void *data);
        static PyGetSetDef t_ConstantThrustManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, direction),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, duration),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, endDate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, flowRate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, isp),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, startDate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, thrustMagnitude),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, thrustVector),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantThrustManeuver__methods_[] = {
          DECLARE_METHOD(t_ConstantThrustManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantThrustManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getDirection, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getDuration, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getEndDate, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getFlowRate, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getIsp, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getStartDate, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getThrustMagnitude, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getThrustVector, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, isFiring, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantThrustManeuver)[] = {
          { Py_tp_methods, t_ConstantThrustManeuver__methods_ },
          { Py_tp_init, (void *) t_ConstantThrustManeuver_init_ },
          { Py_tp_getset, t_ConstantThrustManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantThrustManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::maneuvers::Maneuver),
          NULL
        };

        DEFINE_TYPE(ConstantThrustManeuver, t_ConstantThrustManeuver, ConstantThrustManeuver);

        void t_ConstantThrustManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantThrustManeuver), &PY_TYPE_DEF(ConstantThrustManeuver), module, "ConstantThrustManeuver", 0);
        }

        void t_ConstantThrustManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "class_", make_descriptor(ConstantThrustManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "wrapfn_", make_descriptor(t_ConstantThrustManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantThrustManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantThrustManeuver::initializeClass, 1)))
            return NULL;
          return t_ConstantThrustManeuver::wrap_Object(ConstantThrustManeuver(((t_ConstantThrustManeuver *) arg)->object.this$));
        }
        static PyObject *t_ConstantThrustManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantThrustManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantThrustManeuver_init_(t_ConstantThrustManeuver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel a2((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kKk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers::initializeClass, ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel::initializeClass, &a0, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_DateBasedManeuverTriggers::parameters_, &a2))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel a3((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::java::lang::String a5((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDks", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::java::lang::String a6((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkks", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::forces::maneuvers::Control3DVectorCostType a6((jobject) NULL);
              PyTypeObject **p6;
              ::java::lang::String a7((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkkKs", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a7))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_ConstantThrustManeuver_getDirection(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getDirection());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDirection(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getDirection", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getDuration(t_ConstantThrustManeuver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDuration());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConstantThrustManeuver_getEndDate(t_ConstantThrustManeuver *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEndDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ConstantThrustManeuver_getFlowRate(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getFlowRate());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFlowRate(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getIsp(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIsp());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getIsp(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getIsp", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getStartDate(t_ConstantThrustManeuver *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ConstantThrustManeuver_getThrustMagnitude(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustMagnitude());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getThrustVector(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getThrustVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustVector(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_isFiring(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFiring", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_get__direction(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getDirection());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__duration(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDuration());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__endDate(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEndDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__flowRate(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFlowRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__isp(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIsp());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__startDate(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__thrustMagnitude(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThrustMagnitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__thrustVector(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getThrustVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
