#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/ICGEMFormatReader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *ICGEMFormatReader::class$ = NULL;
          jmethodID *ICGEMFormatReader::mids$ = NULL;
          bool ICGEMFormatReader::live$ = false;

          jclass ICGEMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/ICGEMFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e5ca4b97ee6bd2b6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_738db7d6574836ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_getProvider_f0b357b475e18957] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ICGEMFormatReader::ICGEMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_e5ca4b97ee6bd2b6, a0.this$, a1)) {}

          ICGEMFormatReader::ICGEMFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_738db7d6574836ac, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider ICGEMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_f0b357b475e18957], a0, a1, a2));
          }

          void ICGEMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
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
          static PyObject *t_ICGEMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ICGEMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ICGEMFormatReader_init_(t_ICGEMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ICGEMFormatReader_getProvider(t_ICGEMFormatReader *self, PyObject *args);
          static PyObject *t_ICGEMFormatReader_loadData(t_ICGEMFormatReader *self, PyObject *args);

          static PyMethodDef t_ICGEMFormatReader__methods_[] = {
            DECLARE_METHOD(t_ICGEMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ICGEMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ICGEMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_ICGEMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ICGEMFormatReader)[] = {
            { Py_tp_methods, t_ICGEMFormatReader__methods_ },
            { Py_tp_init, (void *) t_ICGEMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ICGEMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(ICGEMFormatReader, t_ICGEMFormatReader, ICGEMFormatReader);

          void t_ICGEMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(ICGEMFormatReader), &PY_TYPE_DEF(ICGEMFormatReader), module, "ICGEMFormatReader", 0);
          }

          void t_ICGEMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "class_", make_descriptor(ICGEMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "wrapfn_", make_descriptor(t_ICGEMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ICGEMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ICGEMFormatReader::initializeClass, 1)))
              return NULL;
            return t_ICGEMFormatReader::wrap_Object(ICGEMFormatReader(((t_ICGEMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_ICGEMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ICGEMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ICGEMFormatReader_init_(t_ICGEMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ICGEMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = ICGEMFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                ICGEMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ICGEMFormatReader(a0, a1, a2));
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

          static PyObject *t_ICGEMFormatReader_getProvider(t_ICGEMFormatReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            return callSuper(PY_TYPE(ICGEMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_ICGEMFormatReader_loadData(t_ICGEMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(ICGEMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MerweUnscentedTransform.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MerweUnscentedTransform::class$ = NULL;
      jmethodID *MerweUnscentedTransform::mids$ = NULL;
      bool MerweUnscentedTransform::live$ = false;
      jdouble MerweUnscentedTransform::DEFAULT_ALPHA = (jdouble) 0;
      jdouble MerweUnscentedTransform::DEFAULT_BETA = (jdouble) 0;
      jdouble MerweUnscentedTransform::DEFAULT_KAPPA = (jdouble) 0;

      jclass MerweUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MerweUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_c4eb928bd0dae600] = env->getMethodID(cls, "<init>", "(IDDD)V");
          mids$[mid_getWc_75d50d73180655b4] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_75d50d73180655b4] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_557b8123390d8d0c] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ALPHA = env->getStaticDoubleField(cls, "DEFAULT_ALPHA");
          DEFAULT_BETA = env->getStaticDoubleField(cls, "DEFAULT_BETA");
          DEFAULT_KAPPA = env->getStaticDoubleField(cls, "DEFAULT_KAPPA");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MerweUnscentedTransform::MerweUnscentedTransform(jint a0) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      MerweUnscentedTransform::MerweUnscentedTransform(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_c4eb928bd0dae600, a0, a1, a2, a3)) {}

      ::org::hipparchus::linear::RealVector MerweUnscentedTransform::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_75d50d73180655b4]));
      }

      ::org::hipparchus::linear::RealVector MerweUnscentedTransform::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_75d50d73180655b4]));
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
      static PyObject *t_MerweUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MerweUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MerweUnscentedTransform_init_(t_MerweUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MerweUnscentedTransform_getWc(t_MerweUnscentedTransform *self, PyObject *args);
      static PyObject *t_MerweUnscentedTransform_getWm(t_MerweUnscentedTransform *self, PyObject *args);
      static PyObject *t_MerweUnscentedTransform_get__wc(t_MerweUnscentedTransform *self, void *data);
      static PyObject *t_MerweUnscentedTransform_get__wm(t_MerweUnscentedTransform *self, void *data);
      static PyGetSetDef t_MerweUnscentedTransform__fields_[] = {
        DECLARE_GET_FIELD(t_MerweUnscentedTransform, wc),
        DECLARE_GET_FIELD(t_MerweUnscentedTransform, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MerweUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_MerweUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MerweUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MerweUnscentedTransform, getWc, METH_VARARGS),
        DECLARE_METHOD(t_MerweUnscentedTransform, getWm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MerweUnscentedTransform)[] = {
        { Py_tp_methods, t_MerweUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_MerweUnscentedTransform_init_ },
        { Py_tp_getset, t_MerweUnscentedTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MerweUnscentedTransform)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::AbstractUnscentedTransform),
        NULL
      };

      DEFINE_TYPE(MerweUnscentedTransform, t_MerweUnscentedTransform, MerweUnscentedTransform);

      void t_MerweUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(MerweUnscentedTransform), &PY_TYPE_DEF(MerweUnscentedTransform), module, "MerweUnscentedTransform", 0);
      }

      void t_MerweUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "class_", make_descriptor(MerweUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "wrapfn_", make_descriptor(t_MerweUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "boxfn_", make_descriptor(boxObject));
        env->getClass(MerweUnscentedTransform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_ALPHA", make_descriptor(MerweUnscentedTransform::DEFAULT_ALPHA));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_BETA", make_descriptor(MerweUnscentedTransform::DEFAULT_BETA));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_KAPPA", make_descriptor(MerweUnscentedTransform::DEFAULT_KAPPA));
      }

      static PyObject *t_MerweUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MerweUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_MerweUnscentedTransform::wrap_Object(MerweUnscentedTransform(((t_MerweUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_MerweUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MerweUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MerweUnscentedTransform_init_(t_MerweUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            MerweUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = MerweUnscentedTransform(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            MerweUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MerweUnscentedTransform(a0, a1, a2, a3));
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

      static PyObject *t_MerweUnscentedTransform_getWc(t_MerweUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWc());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(MerweUnscentedTransform), (PyObject *) self, "getWc", args, 2);
      }

      static PyObject *t_MerweUnscentedTransform_getWm(t_MerweUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWm());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(MerweUnscentedTransform), (PyObject *) self, "getWm", args, 2);
      }

      static PyObject *t_MerweUnscentedTransform_get__wc(t_MerweUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_MerweUnscentedTransform_get__wm(t_MerweUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldSinhCosh::class$ = NULL;
      jmethodID *FieldSinhCosh::mids$ = NULL;
      bool FieldSinhCosh::live$ = false;

      jclass FieldSinhCosh::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldSinhCosh");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cdf90f5ab4b39eca] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_cosh_e661fe3ba2fafb22] = env->getMethodID(cls, "cosh", "()Ljava/lang/Object;");
          mids$[mid_difference_5460d248f7509324] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/FieldSinhCosh;Lorg/hipparchus/util/FieldSinhCosh;)Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sinh_e661fe3ba2fafb22] = env->getMethodID(cls, "sinh", "()Ljava/lang/Object;");
          mids$[mid_sum_5460d248f7509324] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/FieldSinhCosh;Lorg/hipparchus/util/FieldSinhCosh;)Lorg/hipparchus/util/FieldSinhCosh;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSinhCosh::FieldSinhCosh(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cdf90f5ab4b39eca, a0.this$, a1.this$)) {}

      ::java::lang::Object FieldSinhCosh::cosh() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cosh_e661fe3ba2fafb22]));
      }

      FieldSinhCosh FieldSinhCosh::difference(const FieldSinhCosh & a0, const FieldSinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_difference_5460d248f7509324], a0.this$, a1.this$));
      }

      ::java::lang::Object FieldSinhCosh::sinh() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_sinh_e661fe3ba2fafb22]));
      }

      FieldSinhCosh FieldSinhCosh::sum(const FieldSinhCosh & a0, const FieldSinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sum_5460d248f7509324], a0.this$, a1.this$));
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
      static PyObject *t_FieldSinhCosh_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinhCosh_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinhCosh_of_(t_FieldSinhCosh *self, PyObject *args);
      static int t_FieldSinhCosh_init_(t_FieldSinhCosh *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSinhCosh_cosh(t_FieldSinhCosh *self);
      static PyObject *t_FieldSinhCosh_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinhCosh_sinh(t_FieldSinhCosh *self);
      static PyObject *t_FieldSinhCosh_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinhCosh_get__parameters_(t_FieldSinhCosh *self, void *data);
      static PyGetSetDef t_FieldSinhCosh__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSinhCosh, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSinhCosh__methods_[] = {
        DECLARE_METHOD(t_FieldSinhCosh, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSinhCosh, cosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinhCosh, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, sinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinhCosh, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSinhCosh)[] = {
        { Py_tp_methods, t_FieldSinhCosh__methods_ },
        { Py_tp_init, (void *) t_FieldSinhCosh_init_ },
        { Py_tp_getset, t_FieldSinhCosh__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSinhCosh)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSinhCosh, t_FieldSinhCosh, FieldSinhCosh);
      PyObject *t_FieldSinhCosh::wrap_Object(const FieldSinhCosh& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinhCosh::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinhCosh *self = (t_FieldSinhCosh *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSinhCosh::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinhCosh::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinhCosh *self = (t_FieldSinhCosh *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSinhCosh::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSinhCosh), &PY_TYPE_DEF(FieldSinhCosh), module, "FieldSinhCosh", 0);
      }

      void t_FieldSinhCosh::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "class_", make_descriptor(FieldSinhCosh::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "wrapfn_", make_descriptor(t_FieldSinhCosh::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSinhCosh_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSinhCosh::initializeClass, 1)))
          return NULL;
        return t_FieldSinhCosh::wrap_Object(FieldSinhCosh(((t_FieldSinhCosh *) arg)->object.this$));
      }
      static PyObject *t_FieldSinhCosh_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSinhCosh::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSinhCosh_of_(t_FieldSinhCosh *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSinhCosh_init_(t_FieldSinhCosh *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        FieldSinhCosh object((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          INT_CALL(object = FieldSinhCosh(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldSinhCosh_cosh(t_FieldSinhCosh *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinhCosh_difference(PyTypeObject *type, PyObject *args)
      {
        FieldSinhCosh a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinhCosh a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinhCosh result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinhCosh::initializeClass, FieldSinhCosh::initializeClass, &a0, &p0, t_FieldSinhCosh::parameters_, &a1, &p1, t_FieldSinhCosh::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinhCosh::difference(a0, a1));
          return t_FieldSinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_FieldSinhCosh_sinh(t_FieldSinhCosh *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinhCosh_sum(PyTypeObject *type, PyObject *args)
      {
        FieldSinhCosh a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinhCosh a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinhCosh result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinhCosh::initializeClass, FieldSinhCosh::initializeClass, &a0, &p0, t_FieldSinhCosh::parameters_, &a1, &p1, t_FieldSinhCosh::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinhCosh::sum(a0, a1));
          return t_FieldSinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
      static PyObject *t_FieldSinhCosh_get__parameters_(t_FieldSinhCosh *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
          mids$[mid_valueOf_dc8716f3b3d915c3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/MathArrays$OrderDirection;");
          mids$[mid_values_dd3beab7185fa5a4] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/MathArrays$OrderDirection;");

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
        return MathArrays$OrderDirection(env->callStaticObjectMethod(cls, mids$[mid_valueOf_dc8716f3b3d915c3], a0.this$));
      }

      JArray< MathArrays$OrderDirection > MathArrays$OrderDirection::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MathArrays$OrderDirection >(env->callStaticObjectMethod(cls, mids$[mid_values_dd3beab7185fa5a4]));
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
#include "org/orekit/estimation/measurements/generation/Generator.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *Generator::class$ = NULL;
          jmethodID *Generator::mids$ = NULL;
          bool Generator::live$ = false;

          jclass Generator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/Generator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addPropagator_007497abc1d6b5f9] = env->getMethodID(cls, "addPropagator", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_addScheduler_8ab15ab86df361ae] = env->getMethodID(cls, "addScheduler", "(Lorg/orekit/estimation/measurements/generation/Scheduler;)V");
              mids$[mid_addSubscriber_d079e7078bf73ceb] = env->getMethodID(cls, "addSubscriber", "(Lorg/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber;)V");
              mids$[mid_generate_d5db9a5f2035671b] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getPropagator_3290d3d97e59e59d] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/estimation/measurements/ObservableSatellite;)Lorg/orekit/propagation/Propagator;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Generator::Generator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::orekit::estimation::measurements::ObservableSatellite Generator::addPropagator(const ::org::orekit::propagation::Propagator & a0) const
          {
            return ::org::orekit::estimation::measurements::ObservableSatellite(env->callObjectMethod(this$, mids$[mid_addPropagator_007497abc1d6b5f9], a0.this$));
          }

          void Generator::addScheduler(const ::org::orekit::estimation::measurements::generation::Scheduler & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addScheduler_8ab15ab86df361ae], a0.this$);
          }

          void Generator::addSubscriber(const ::org::orekit::estimation::measurements::generation::GeneratedMeasurementSubscriber & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSubscriber_d079e7078bf73ceb], a0.this$);
          }

          void Generator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_generate_d5db9a5f2035671b], a0.this$, a1.this$);
          }

          ::org::orekit::propagation::Propagator Generator::getPropagator(const ::org::orekit::estimation::measurements::ObservableSatellite & a0) const
          {
            return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getPropagator_3290d3d97e59e59d], a0.this$));
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
          static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Generator_init_(t_Generator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Generator_addPropagator(t_Generator *self, PyObject *arg);
          static PyObject *t_Generator_addScheduler(t_Generator *self, PyObject *arg);
          static PyObject *t_Generator_addSubscriber(t_Generator *self, PyObject *arg);
          static PyObject *t_Generator_generate(t_Generator *self, PyObject *args);
          static PyObject *t_Generator_getPropagator(t_Generator *self, PyObject *arg);

          static PyMethodDef t_Generator__methods_[] = {
            DECLARE_METHOD(t_Generator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Generator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Generator, addPropagator, METH_O),
            DECLARE_METHOD(t_Generator, addScheduler, METH_O),
            DECLARE_METHOD(t_Generator, addSubscriber, METH_O),
            DECLARE_METHOD(t_Generator, generate, METH_VARARGS),
            DECLARE_METHOD(t_Generator, getPropagator, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Generator)[] = {
            { Py_tp_methods, t_Generator__methods_ },
            { Py_tp_init, (void *) t_Generator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Generator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Generator, t_Generator, Generator);

          void t_Generator::install(PyObject *module)
          {
            installType(&PY_TYPE(Generator), &PY_TYPE_DEF(Generator), module, "Generator", 0);
          }

          void t_Generator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "class_", make_descriptor(Generator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "wrapfn_", make_descriptor(t_Generator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Generator::initializeClass, 1)))
              return NULL;
            return t_Generator::wrap_Object(Generator(((t_Generator *) arg)->object.this$));
          }
          static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Generator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Generator_init_(t_Generator *self, PyObject *args, PyObject *kwds)
          {
            Generator object((jobject) NULL);

            INT_CALL(object = Generator());
            self->object = object;

            return 0;
          }

          static PyObject *t_Generator_addPropagator(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::propagation::Propagator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.addPropagator(a0));
              return ::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addPropagator", arg);
            return NULL;
          }

          static PyObject *t_Generator_addScheduler(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::generation::Scheduler a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::generation::Scheduler::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_Scheduler::parameters_))
            {
              OBJ_CALL(self->object.addScheduler(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addScheduler", arg);
            return NULL;
          }

          static PyObject *t_Generator_addSubscriber(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::generation::GeneratedMeasurementSubscriber a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::estimation::measurements::generation::GeneratedMeasurementSubscriber::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addSubscriber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSubscriber", arg);
            return NULL;
          }

          static PyObject *t_Generator_generate(t_Generator *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.generate(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "generate", args);
            return NULL;
          }

          static PyObject *t_Generator_getPropagator(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::ObservableSatellite a0((jobject) NULL);
            ::org::orekit::propagation::Propagator result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPropagator(a0));
              return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPropagator", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *FieldComplexField::class$ = NULL;
      jmethodID *FieldComplexField::mids$ = NULL;
      bool FieldComplexField::live$ = false;

      jclass FieldComplexField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/FieldComplexField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getField_ce9ae1019f40cd7c] = env->getStaticMethodID(cls, "getField", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplexField;");
          mids$[mid_getOne_bfc6d3bb8e8278b9] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_bfc6d3bb8e8278b9] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean FieldComplexField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      FieldComplexField FieldComplexField::getField(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplexField(env->callStaticObjectMethod(cls, mids$[mid_getField_ce9ae1019f40cd7c], a0.this$));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexField::getOne() const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_getOne_bfc6d3bb8e8278b9]));
      }

      ::java::lang::Class FieldComplexField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexField::getZero() const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_getZero_bfc6d3bb8e8278b9]));
      }

      jint FieldComplexField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
      static PyObject *t_FieldComplexField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexField_of_(t_FieldComplexField *self, PyObject *args);
      static PyObject *t_FieldComplexField_equals(t_FieldComplexField *self, PyObject *args);
      static PyObject *t_FieldComplexField_getField(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexField_getOne(t_FieldComplexField *self);
      static PyObject *t_FieldComplexField_getRuntimeClass(t_FieldComplexField *self);
      static PyObject *t_FieldComplexField_getZero(t_FieldComplexField *self);
      static PyObject *t_FieldComplexField_hashCode(t_FieldComplexField *self, PyObject *args);
      static PyObject *t_FieldComplexField_get__one(t_FieldComplexField *self, void *data);
      static PyObject *t_FieldComplexField_get__runtimeClass(t_FieldComplexField *self, void *data);
      static PyObject *t_FieldComplexField_get__zero(t_FieldComplexField *self, void *data);
      static PyObject *t_FieldComplexField_get__parameters_(t_FieldComplexField *self, void *data);
      static PyGetSetDef t_FieldComplexField__fields_[] = {
        DECLARE_GET_FIELD(t_FieldComplexField, one),
        DECLARE_GET_FIELD(t_FieldComplexField, runtimeClass),
        DECLARE_GET_FIELD(t_FieldComplexField, zero),
        DECLARE_GET_FIELD(t_FieldComplexField, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldComplexField__methods_[] = {
        DECLARE_METHOD(t_FieldComplexField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexField, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplexField, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplexField, getField, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplexField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplexField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplexField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldComplexField)[] = {
        { Py_tp_methods, t_FieldComplexField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldComplexField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldComplexField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldComplexField, t_FieldComplexField, FieldComplexField);
      PyObject *t_FieldComplexField::wrap_Object(const FieldComplexField& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexField::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexField *self = (t_FieldComplexField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldComplexField::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexField::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexField *self = (t_FieldComplexField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldComplexField::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldComplexField), &PY_TYPE_DEF(FieldComplexField), module, "FieldComplexField", 0);
      }

      void t_FieldComplexField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexField), "class_", make_descriptor(FieldComplexField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexField), "wrapfn_", make_descriptor(t_FieldComplexField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldComplexField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldComplexField::initializeClass, 1)))
          return NULL;
        return t_FieldComplexField::wrap_Object(FieldComplexField(((t_FieldComplexField *) arg)->object.this$));
      }
      static PyObject *t_FieldComplexField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldComplexField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldComplexField_of_(t_FieldComplexField *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldComplexField_equals(t_FieldComplexField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldComplexField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldComplexField_getField(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplexField result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplexField::getField(a0));
          return t_FieldComplexField::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getField", arg);
        return NULL;
      }

      static PyObject *t_FieldComplexField_getOne(t_FieldComplexField *self)
      {
        ::org::hipparchus::complex::FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplexField_getRuntimeClass(t_FieldComplexField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result);
      }

      static PyObject *t_FieldComplexField_getZero(t_FieldComplexField *self)
      {
        ::org::hipparchus::complex::FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplexField_hashCode(t_FieldComplexField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldComplexField), (PyObject *) self, "hashCode", args, 2);
      }
      static PyObject *t_FieldComplexField_get__parameters_(t_FieldComplexField *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldComplexField_get__one(t_FieldComplexField *self, void *data)
      {
        ::org::hipparchus::complex::FieldComplex value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(value);
      }

      static PyObject *t_FieldComplexField_get__runtimeClass(t_FieldComplexField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_FieldComplexField_get__zero(t_FieldComplexField *self, void *data)
      {
        ::org::hipparchus::complex::FieldComplex value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *CoefficientsFactory$NSKey::class$ = NULL;
            jmethodID *CoefficientsFactory$NSKey::mids$ = NULL;
            bool CoefficientsFactory$NSKey::live$ = false;

            jclass CoefficientsFactory$NSKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
                mids$[mid_compareTo_46df49a4ad1ef79a] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey;)I");
                mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getN_412668abc8d889e9] = env->getMethodID(cls, "getN", "()I");
                mids$[mid_getS_412668abc8d889e9] = env->getMethodID(cls, "getS", "()I");
                mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CoefficientsFactory$NSKey::CoefficientsFactory$NSKey(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

            jint CoefficientsFactory$NSKey::compareTo(const CoefficientsFactory$NSKey & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_46df49a4ad1ef79a], a0.this$);
            }

            jboolean CoefficientsFactory$NSKey::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
            }

            jint CoefficientsFactory$NSKey::getN() const
            {
              return env->callIntMethod(this$, mids$[mid_getN_412668abc8d889e9]);
            }

            jint CoefficientsFactory$NSKey::getS() const
            {
              return env->callIntMethod(this$, mids$[mid_getS_412668abc8d889e9]);
            }

            jint CoefficientsFactory$NSKey::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
            static PyObject *t_CoefficientsFactory$NSKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory$NSKey_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CoefficientsFactory$NSKey_init_(t_CoefficientsFactory$NSKey *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CoefficientsFactory$NSKey_compareTo(t_CoefficientsFactory$NSKey *self, PyObject *arg);
            static PyObject *t_CoefficientsFactory$NSKey_equals(t_CoefficientsFactory$NSKey *self, PyObject *args);
            static PyObject *t_CoefficientsFactory$NSKey_getN(t_CoefficientsFactory$NSKey *self);
            static PyObject *t_CoefficientsFactory$NSKey_getS(t_CoefficientsFactory$NSKey *self);
            static PyObject *t_CoefficientsFactory$NSKey_hashCode(t_CoefficientsFactory$NSKey *self, PyObject *args);
            static PyObject *t_CoefficientsFactory$NSKey_get__n(t_CoefficientsFactory$NSKey *self, void *data);
            static PyObject *t_CoefficientsFactory$NSKey_get__s(t_CoefficientsFactory$NSKey *self, void *data);
            static PyGetSetDef t_CoefficientsFactory$NSKey__fields_[] = {
              DECLARE_GET_FIELD(t_CoefficientsFactory$NSKey, n),
              DECLARE_GET_FIELD(t_CoefficientsFactory$NSKey, s),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CoefficientsFactory$NSKey__methods_[] = {
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, compareTo, METH_O),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, equals, METH_VARARGS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, getN, METH_NOARGS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, getS, METH_NOARGS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CoefficientsFactory$NSKey)[] = {
              { Py_tp_methods, t_CoefficientsFactory$NSKey__methods_ },
              { Py_tp_init, (void *) t_CoefficientsFactory$NSKey_init_ },
              { Py_tp_getset, t_CoefficientsFactory$NSKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CoefficientsFactory$NSKey)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CoefficientsFactory$NSKey, t_CoefficientsFactory$NSKey, CoefficientsFactory$NSKey);

            void t_CoefficientsFactory$NSKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CoefficientsFactory$NSKey), &PY_TYPE_DEF(CoefficientsFactory$NSKey), module, "CoefficientsFactory$NSKey", 0);
            }

            void t_CoefficientsFactory$NSKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory$NSKey), "class_", make_descriptor(CoefficientsFactory$NSKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory$NSKey), "wrapfn_", make_descriptor(t_CoefficientsFactory$NSKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory$NSKey), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CoefficientsFactory$NSKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CoefficientsFactory$NSKey::initializeClass, 1)))
                return NULL;
              return t_CoefficientsFactory$NSKey::wrap_Object(CoefficientsFactory$NSKey(((t_CoefficientsFactory$NSKey *) arg)->object.this$));
            }
            static PyObject *t_CoefficientsFactory$NSKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CoefficientsFactory$NSKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CoefficientsFactory$NSKey_init_(t_CoefficientsFactory$NSKey *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jint a1;
              CoefficientsFactory$NSKey object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = CoefficientsFactory$NSKey(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CoefficientsFactory$NSKey_compareTo(t_CoefficientsFactory$NSKey *self, PyObject *arg)
            {
              CoefficientsFactory$NSKey a0((jobject) NULL);
              jint result;

              if (!parseArg(arg, "k", CoefficientsFactory$NSKey::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory$NSKey_equals(t_CoefficientsFactory$NSKey *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CoefficientsFactory$NSKey), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_CoefficientsFactory$NSKey_getN(t_CoefficientsFactory$NSKey *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CoefficientsFactory$NSKey_getS(t_CoefficientsFactory$NSKey *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getS());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CoefficientsFactory$NSKey_hashCode(t_CoefficientsFactory$NSKey *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(CoefficientsFactory$NSKey), (PyObject *) self, "hashCode", args, 2);
            }

            static PyObject *t_CoefficientsFactory$NSKey_get__n(t_CoefficientsFactory$NSKey *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CoefficientsFactory$NSKey_get__s(t_CoefficientsFactory$NSKey *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getS());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/DTM2000.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *DTM2000::class$ = NULL;
          jmethodID *DTM2000::mids$ = NULL;
          bool DTM2000::live$ = false;

          jclass DTM2000::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/DTM2000");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_01310ec5aa4763df] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/DTM2000InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_b6b3afe4e05ae922] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/DTM2000InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_818999d9e7960fd1] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_57dd506d2d9ba196] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_acc20646a0a0aa35] = env->getMethodID(cls, "getDensity", "(IDDDDDDDD)D");
              mids$[mid_getDensity_6f1be0a0dd39a32d] = env->getMethodID(cls, "getDensity", "(ILorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DDDD)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DTM2000::DTM2000(const ::org::orekit::models::earth::atmosphere::DTM2000InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_01310ec5aa4763df, a0.this$, a1.this$, a2.this$)) {}

          DTM2000::DTM2000(const ::org::orekit::models::earth::atmosphere::DTM2000InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6b3afe4e05ae922, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::CalculusFieldElement DTM2000::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_818999d9e7960fd1], a0.this$, a1.this$, a2.this$));
          }

          jdouble DTM2000::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_57dd506d2d9ba196], a0.this$, a1.this$, a2.this$);
          }

          jdouble DTM2000::getDensity(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_acc20646a0a0aa35], a0, a1, a2, a3, a4, a5, a6, a7, a8);
          }

          ::org::hipparchus::CalculusFieldElement DTM2000::getDensity(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_6f1be0a0dd39a32d], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8));
          }

          ::org::orekit::frames::Frame DTM2000::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
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
          static PyObject *t_DTM2000_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DTM2000_init_(t_DTM2000 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DTM2000_getDensity(t_DTM2000 *self, PyObject *args);
          static PyObject *t_DTM2000_getFrame(t_DTM2000 *self);
          static PyObject *t_DTM2000_get__frame(t_DTM2000 *self, void *data);
          static PyGetSetDef t_DTM2000__fields_[] = {
            DECLARE_GET_FIELD(t_DTM2000, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DTM2000__methods_[] = {
            DECLARE_METHOD(t_DTM2000, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_DTM2000, getFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DTM2000)[] = {
            { Py_tp_methods, t_DTM2000__methods_ },
            { Py_tp_init, (void *) t_DTM2000_init_ },
            { Py_tp_getset, t_DTM2000__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DTM2000)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DTM2000, t_DTM2000, DTM2000);

          void t_DTM2000::install(PyObject *module)
          {
            installType(&PY_TYPE(DTM2000), &PY_TYPE_DEF(DTM2000), module, "DTM2000", 0);
          }

          void t_DTM2000::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "class_", make_descriptor(DTM2000::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "wrapfn_", make_descriptor(t_DTM2000::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DTM2000_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DTM2000::initializeClass, 1)))
              return NULL;
            return t_DTM2000::wrap_Object(DTM2000(((t_DTM2000 *) arg)->object.this$));
          }
          static PyObject *t_DTM2000_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DTM2000::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DTM2000_init_(t_DTM2000 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::models::earth::atmosphere::DTM2000InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                DTM2000 object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::DTM2000InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DTM2000(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::models::earth::atmosphere::DTM2000InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                DTM2000 object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::orekit::models::earth::atmosphere::DTM2000InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = DTM2000(a0, a1, a2, a3));
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

          static PyObject *t_DTM2000_getDensity(t_DTM2000 *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 9:
              {
                jint a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                jdouble a5;
                jdouble a6;
                jdouble a7;
                jdouble a8;
                jdouble result;

                if (!parseArgs(args, "IDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                jdouble a5;
                jdouble a6;
                jdouble a7;
                jdouble a8;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IKKKKDDDD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_DTM2000_getFrame(t_DTM2000 *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_DTM2000_get__frame(t_DTM2000 *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitElementsType::class$ = NULL;
              jmethodID *OrbitElementsType::mids$ = NULL;
              bool OrbitElementsType::live$ = false;
              OrbitElementsType *OrbitElementsType::ADBARV = NULL;
              OrbitElementsType *OrbitElementsType::CARTP = NULL;
              OrbitElementsType *OrbitElementsType::CARTPV = NULL;
              OrbitElementsType *OrbitElementsType::CARTPVA = NULL;
              OrbitElementsType *OrbitElementsType::DELAUNAY = NULL;
              OrbitElementsType *OrbitElementsType::DELAUNAYMOD = NULL;
              OrbitElementsType *OrbitElementsType::EIGVAL3EIGVEC3 = NULL;
              OrbitElementsType *OrbitElementsType::EQUINOCTIAL = NULL;
              OrbitElementsType *OrbitElementsType::EQUINOCTIALMOD = NULL;
              OrbitElementsType *OrbitElementsType::GEODETIC = NULL;
              OrbitElementsType *OrbitElementsType::KEPLERIAN = NULL;
              OrbitElementsType *OrbitElementsType::KEPLERIANMEAN = NULL;
              OrbitElementsType *OrbitElementsType::LDBARV = NULL;
              OrbitElementsType *OrbitElementsType::ONSTATION = NULL;
              OrbitElementsType *OrbitElementsType::POINCARE = NULL;

              jclass OrbitElementsType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_0d9551367f7ecdef] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toCartesian_5f4b28935b310dff] = env->getMethodID(cls, "toCartesian", "(Lorg/orekit/time/AbsoluteDate;[DLorg/orekit/bodies/OneAxisEllipsoid;D)Lorg/orekit/utils/TimeStampedPVCoordinates;");
                  mids$[mid_toRawElements_1cd518db0c3e0c39] = env->getMethodID(cls, "toRawElements", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/bodies/OneAxisEllipsoid;D)[D");
                  mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_4690c62372ea2a89] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_values_af07b7766a34208c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ADBARV = new OrbitElementsType(env->getStaticObjectField(cls, "ADBARV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  CARTP = new OrbitElementsType(env->getStaticObjectField(cls, "CARTP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  CARTPV = new OrbitElementsType(env->getStaticObjectField(cls, "CARTPV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  CARTPVA = new OrbitElementsType(env->getStaticObjectField(cls, "CARTPVA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  DELAUNAY = new OrbitElementsType(env->getStaticObjectField(cls, "DELAUNAY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  DELAUNAYMOD = new OrbitElementsType(env->getStaticObjectField(cls, "DELAUNAYMOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  EIGVAL3EIGVEC3 = new OrbitElementsType(env->getStaticObjectField(cls, "EIGVAL3EIGVEC3", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  EQUINOCTIAL = new OrbitElementsType(env->getStaticObjectField(cls, "EQUINOCTIAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  EQUINOCTIALMOD = new OrbitElementsType(env->getStaticObjectField(cls, "EQUINOCTIALMOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  GEODETIC = new OrbitElementsType(env->getStaticObjectField(cls, "GEODETIC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  KEPLERIAN = new OrbitElementsType(env->getStaticObjectField(cls, "KEPLERIAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  KEPLERIANMEAN = new OrbitElementsType(env->getStaticObjectField(cls, "KEPLERIANMEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  LDBARV = new OrbitElementsType(env->getStaticObjectField(cls, "LDBARV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  ONSTATION = new OrbitElementsType(env->getStaticObjectField(cls, "ONSTATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  POINCARE = new OrbitElementsType(env->getStaticObjectField(cls, "POINCARE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List OrbitElementsType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_0d9551367f7ecdef]));
              }

              ::org::orekit::utils::TimeStampedPVCoordinates OrbitElementsType::toCartesian(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toCartesian_5f4b28935b310dff], a0.this$, a1.this$, a2.this$, a3));
              }

              JArray< jdouble > OrbitElementsType::toRawElements(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toRawElements_1cd518db0c3e0c39], a0.this$, a1.this$, a2.this$, a3));
              }

              ::java::lang::String OrbitElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
              }

              OrbitElementsType OrbitElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4690c62372ea2a89], a0.this$));
              }

              JArray< OrbitElementsType > OrbitElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_af07b7766a34208c]));
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
              static PyObject *t_OrbitElementsType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitElementsType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitElementsType_of_(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_getUnits(t_OrbitElementsType *self);
              static PyObject *t_OrbitElementsType_toCartesian(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_toRawElements(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_toString(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitElementsType_values(PyTypeObject *type);
              static PyObject *t_OrbitElementsType_get__units(t_OrbitElementsType *self, void *data);
              static PyObject *t_OrbitElementsType_get__parameters_(t_OrbitElementsType *self, void *data);
              static PyGetSetDef t_OrbitElementsType__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitElementsType, units),
                DECLARE_GET_FIELD(t_OrbitElementsType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitElementsType__methods_[] = {
                DECLARE_METHOD(t_OrbitElementsType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitElementsType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitElementsType, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_OrbitElementsType, toCartesian, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, toRawElements, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, toString, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitElementsType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitElementsType)[] = {
                { Py_tp_methods, t_OrbitElementsType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitElementsType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitElementsType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitElementsType, t_OrbitElementsType, OrbitElementsType);
              PyObject *t_OrbitElementsType::wrap_Object(const OrbitElementsType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitElementsType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitElementsType *self = (t_OrbitElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitElementsType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitElementsType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitElementsType *self = (t_OrbitElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitElementsType::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitElementsType), &PY_TYPE_DEF(OrbitElementsType), module, "OrbitElementsType", 0);
              }

              void t_OrbitElementsType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "class_", make_descriptor(OrbitElementsType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "wrapfn_", make_descriptor(t_OrbitElementsType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitElementsType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "ADBARV", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::ADBARV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "CARTP", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::CARTP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "CARTPV", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::CARTPV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "CARTPVA", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::CARTPVA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "DELAUNAY", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::DELAUNAY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "DELAUNAYMOD", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::DELAUNAYMOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "EIGVAL3EIGVEC3", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::EIGVAL3EIGVEC3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "EQUINOCTIAL", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::EQUINOCTIAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "EQUINOCTIALMOD", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::EQUINOCTIALMOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "GEODETIC", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::GEODETIC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "KEPLERIAN", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::KEPLERIAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "KEPLERIANMEAN", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::KEPLERIANMEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "LDBARV", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::LDBARV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "ONSTATION", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::ONSTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "POINCARE", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::POINCARE)));
              }

              static PyObject *t_OrbitElementsType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitElementsType::initializeClass, 1)))
                  return NULL;
                return t_OrbitElementsType::wrap_Object(OrbitElementsType(((t_OrbitElementsType *) arg)->object.this$));
              }
              static PyObject *t_OrbitElementsType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitElementsType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitElementsType_of_(t_OrbitElementsType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitElementsType_getUnits(t_OrbitElementsType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_OrbitElementsType_toCartesian(t_OrbitElementsType *self, PyObject *args)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
                jdouble a3;
                ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

                if (!parseArgs(args, "k[DkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.toCartesian(a0, a1, a2, a3));
                  return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toCartesian", args);
                return NULL;
              }

              static PyObject *t_OrbitElementsType_toRawElements(t_OrbitElementsType *self, PyObject *args)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
                ::org::orekit::frames::Frame a1((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
                jdouble a3;
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "kkkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.toRawElements(a0, a1, a2, a3));
                  return result.wrap();
                }

                PyErr_SetArgsError((PyObject *) self, "toRawElements", args);
                return NULL;
              }

              static PyObject *t_OrbitElementsType_toString(t_OrbitElementsType *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(OrbitElementsType), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_OrbitElementsType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitElementsType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::valueOf(a0));
                  return t_OrbitElementsType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitElementsType_values(PyTypeObject *type)
              {
                JArray< OrbitElementsType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitElementsType::wrap_jobject);
              }
              static PyObject *t_OrbitElementsType_get__parameters_(t_OrbitElementsType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OrbitElementsType_get__units(t_OrbitElementsType *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnits());
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
#include "org/hipparchus/random/Well1024a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well1024a::class$ = NULL;
      jmethodID *Well1024a::mids$ = NULL;
      bool Well1024a::live$ = false;

      jclass Well1024a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well1024a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ec63cb8a58ef5a54] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_412668abc8d889e9] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well1024a::Well1024a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      Well1024a::Well1024a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_ec63cb8a58ef5a54, a0.this$)) {}

      Well1024a::Well1024a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      Well1024a::Well1024a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

      jint Well1024a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_412668abc8d889e9]);
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
      static PyObject *t_Well1024a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well1024a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well1024a_init_(t_Well1024a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well1024a_nextInt(t_Well1024a *self, PyObject *args);

      static PyMethodDef t_Well1024a__methods_[] = {
        DECLARE_METHOD(t_Well1024a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well1024a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well1024a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well1024a)[] = {
        { Py_tp_methods, t_Well1024a__methods_ },
        { Py_tp_init, (void *) t_Well1024a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well1024a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well1024a, t_Well1024a, Well1024a);

      void t_Well1024a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well1024a), &PY_TYPE_DEF(Well1024a), module, "Well1024a", 0);
      }

      void t_Well1024a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "class_", make_descriptor(Well1024a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "wrapfn_", make_descriptor(t_Well1024a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well1024a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well1024a::initializeClass, 1)))
          return NULL;
        return t_Well1024a::wrap_Object(Well1024a(((t_Well1024a *) arg)->object.this$));
      }
      static PyObject *t_Well1024a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well1024a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well1024a_init_(t_Well1024a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well1024a object((jobject) NULL);

            INT_CALL(object = Well1024a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well1024a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well1024a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well1024a(a0));
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

      static PyObject *t_Well1024a_nextInt(t_Well1024a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well1024a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/NodesSet.h"
#include "java/util/Iterator.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *NodesSet::class$ = NULL;
        jmethodID *NodesSet::mids$ = NULL;
        bool NodesSet::live$ = false;

        jclass NodesSet::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/NodesSet");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_5865d893f5a7dd72] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_addAll_f63faef051c62dc2] = env->getMethodID(cls, "addAll", "(Ljava/lang/Iterable;)V");
            mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NodesSet::NodesSet() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void NodesSet::add(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_5865d893f5a7dd72], a0.this$);
        }

        void NodesSet::addAll(const ::java::lang::Iterable & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAll_f63faef051c62dc2], a0.this$);
        }

        ::java::util::Iterator NodesSet::iterator() const
        {
          return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
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
        static PyObject *t_NodesSet_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodesSet_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodesSet_of_(t_NodesSet *self, PyObject *args);
        static int t_NodesSet_init_(t_NodesSet *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NodesSet_add(t_NodesSet *self, PyObject *arg);
        static PyObject *t_NodesSet_addAll(t_NodesSet *self, PyObject *arg);
        static PyObject *t_NodesSet_iterator(t_NodesSet *self);
        static PyObject *t_NodesSet_get__parameters_(t_NodesSet *self, void *data);
        static PyGetSetDef t_NodesSet__fields_[] = {
          DECLARE_GET_FIELD(t_NodesSet, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NodesSet__methods_[] = {
          DECLARE_METHOD(t_NodesSet, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodesSet, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodesSet, of_, METH_VARARGS),
          DECLARE_METHOD(t_NodesSet, add, METH_O),
          DECLARE_METHOD(t_NodesSet, addAll, METH_O),
          DECLARE_METHOD(t_NodesSet, iterator, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NodesSet)[] = {
          { Py_tp_methods, t_NodesSet__methods_ },
          { Py_tp_init, (void *) t_NodesSet_init_ },
          { Py_tp_getset, t_NodesSet__fields_ },
          { Py_tp_iter, (void *) ((PyObject *(*)(t_NodesSet *)) get_generic_iterator< t_NodesSet >) },
          { Py_tp_iternext, (void *) 0 },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NodesSet)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NodesSet, t_NodesSet, NodesSet);
        PyObject *t_NodesSet::wrap_Object(const NodesSet& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodesSet::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodesSet *self = (t_NodesSet *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NodesSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodesSet::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodesSet *self = (t_NodesSet *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NodesSet::install(PyObject *module)
        {
          installType(&PY_TYPE(NodesSet), &PY_TYPE_DEF(NodesSet), module, "NodesSet", 0);
        }

        void t_NodesSet::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "class_", make_descriptor(NodesSet::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "wrapfn_", make_descriptor(t_NodesSet::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NodesSet_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NodesSet::initializeClass, 1)))
            return NULL;
          return t_NodesSet::wrap_Object(NodesSet(((t_NodesSet *) arg)->object.this$));
        }
        static PyObject *t_NodesSet_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NodesSet::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NodesSet_of_(t_NodesSet *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NodesSet_init_(t_NodesSet *self, PyObject *args, PyObject *kwds)
        {
          NodesSet object((jobject) NULL);

          INT_CALL(object = NodesSet());
          self->object = object;

          return 0;
        }

        static PyObject *t_NodesSet_add(t_NodesSet *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(self->object.add(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "add", arg);
          return NULL;
        }

        static PyObject *t_NodesSet_addAll(t_NodesSet *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(self->object.addAll(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAll", arg);
          return NULL;
        }

        static PyObject *t_NodesSet_iterator(t_NodesSet *self)
        {
          ::java::util::Iterator result((jobject) NULL);
          OBJ_CALL(result = self->object.iterator());
          return ::java::util::t_Iterator::wrap_Object(result);
        }
        static PyObject *t_NodesSet_get__parameters_(t_NodesSet *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/GHIJjsPolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GHIJjsPolynomials::class$ = NULL;
            jmethodID *GHIJjsPolynomials::mids$ = NULL;
            bool GHIJjsPolynomials::live$ = false;

            jclass GHIJjsPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GHIJjsPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_bc3712e794ac7a81] = env->getMethodID(cls, "<init>", "(DDDD)V");
                mids$[mid_getGjs_21b81d54c06b64b0] = env->getMethodID(cls, "getGjs", "(II)D");
                mids$[mid_getHjs_21b81d54c06b64b0] = env->getMethodID(cls, "getHjs", "(II)D");
                mids$[mid_getIjs_21b81d54c06b64b0] = env->getMethodID(cls, "getIjs", "(II)D");
                mids$[mid_getJjs_21b81d54c06b64b0] = env->getMethodID(cls, "getJjs", "(II)D");
                mids$[mid_getdGjsdAlpha_21b81d54c06b64b0] = env->getMethodID(cls, "getdGjsdAlpha", "(II)D");
                mids$[mid_getdGjsdBeta_21b81d54c06b64b0] = env->getMethodID(cls, "getdGjsdBeta", "(II)D");
                mids$[mid_getdGjsdh_21b81d54c06b64b0] = env->getMethodID(cls, "getdGjsdh", "(II)D");
                mids$[mid_getdGjsdk_21b81d54c06b64b0] = env->getMethodID(cls, "getdGjsdk", "(II)D");
                mids$[mid_getdHjsdAlpha_21b81d54c06b64b0] = env->getMethodID(cls, "getdHjsdAlpha", "(II)D");
                mids$[mid_getdHjsdBeta_21b81d54c06b64b0] = env->getMethodID(cls, "getdHjsdBeta", "(II)D");
                mids$[mid_getdHjsdh_21b81d54c06b64b0] = env->getMethodID(cls, "getdHjsdh", "(II)D");
                mids$[mid_getdHjsdk_21b81d54c06b64b0] = env->getMethodID(cls, "getdHjsdk", "(II)D");
                mids$[mid_getdIjsdAlpha_21b81d54c06b64b0] = env->getMethodID(cls, "getdIjsdAlpha", "(II)D");
                mids$[mid_getdIjsdBeta_21b81d54c06b64b0] = env->getMethodID(cls, "getdIjsdBeta", "(II)D");
                mids$[mid_getdIjsdh_21b81d54c06b64b0] = env->getMethodID(cls, "getdIjsdh", "(II)D");
                mids$[mid_getdIjsdk_21b81d54c06b64b0] = env->getMethodID(cls, "getdIjsdk", "(II)D");
                mids$[mid_getdJjsdAlpha_21b81d54c06b64b0] = env->getMethodID(cls, "getdJjsdAlpha", "(II)D");
                mids$[mid_getdJjsdBeta_21b81d54c06b64b0] = env->getMethodID(cls, "getdJjsdBeta", "(II)D");
                mids$[mid_getdJjsdh_21b81d54c06b64b0] = env->getMethodID(cls, "getdJjsdh", "(II)D");
                mids$[mid_getdJjsdk_21b81d54c06b64b0] = env->getMethodID(cls, "getdJjsdk", "(II)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GHIJjsPolynomials::GHIJjsPolynomials(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc3712e794ac7a81, a0, a1, a2, a3)) {}

            jdouble GHIJjsPolynomials::getGjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGjs_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getHjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHjs_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getIjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIjs_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getJjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getJjs_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdAlpha_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdBeta_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdh_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdk_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdAlpha_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdBeta_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdh_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdk_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdAlpha_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdBeta_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdh_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdk_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdAlpha_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdBeta_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdh_21b81d54c06b64b0], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdk_21b81d54c06b64b0], a0, a1);
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
            static PyObject *t_GHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GHIJjsPolynomials_init_(t_GHIJjsPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GHIJjsPolynomials_getGjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getHjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getIjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getJjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdk(t_GHIJjsPolynomials *self, PyObject *args);

            static PyMethodDef t_GHIJjsPolynomials__methods_[] = {
              DECLARE_METHOD(t_GHIJjsPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHIJjsPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getGjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getHjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getIjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getJjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GHIJjsPolynomials)[] = {
              { Py_tp_methods, t_GHIJjsPolynomials__methods_ },
              { Py_tp_init, (void *) t_GHIJjsPolynomials_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GHIJjsPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GHIJjsPolynomials, t_GHIJjsPolynomials, GHIJjsPolynomials);

            void t_GHIJjsPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(GHIJjsPolynomials), &PY_TYPE_DEF(GHIJjsPolynomials), module, "GHIJjsPolynomials", 0);
            }

            void t_GHIJjsPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "class_", make_descriptor(GHIJjsPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "wrapfn_", make_descriptor(t_GHIJjsPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GHIJjsPolynomials::initializeClass, 1)))
                return NULL;
              return t_GHIJjsPolynomials::wrap_Object(GHIJjsPolynomials(((t_GHIJjsPolynomials *) arg)->object.this$));
            }
            static PyObject *t_GHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GHIJjsPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GHIJjsPolynomials_init_(t_GHIJjsPolynomials *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              GHIJjsPolynomials object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GHIJjsPolynomials(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GHIJjsPolynomials_getGjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getHjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getHjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getIjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getIjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getIjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getJjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getJjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getJjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdk", args);
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
#include "org/orekit/forces/maneuvers/propulsion/PythonThrustDirectionProvider.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonThrustDirectionProvider::class$ = NULL;
          jmethodID *PythonThrustDirectionProvider::mids$ = NULL;
          bool PythonThrustDirectionProvider::live$ = false;

          jclass PythonThrustDirectionProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonThrustDirectionProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeThrustDirection_102e5d95cb32da9e] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonThrustDirectionProvider::PythonThrustDirectionProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonThrustDirectionProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonThrustDirectionProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonThrustDirectionProvider::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_PythonThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonThrustDirectionProvider_init_(t_PythonThrustDirectionProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonThrustDirectionProvider_finalize(t_PythonThrustDirectionProvider *self);
          static PyObject *t_PythonThrustDirectionProvider_pythonExtension(t_PythonThrustDirectionProvider *self, PyObject *args);
          static jobject JNICALL t_PythonThrustDirectionProvider_computeThrustDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonThrustDirectionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonThrustDirectionProvider_get__self(t_PythonThrustDirectionProvider *self, void *data);
          static PyGetSetDef t_PythonThrustDirectionProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonThrustDirectionProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonThrustDirectionProvider__methods_[] = {
            DECLARE_METHOD(t_PythonThrustDirectionProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonThrustDirectionProvider)[] = {
            { Py_tp_methods, t_PythonThrustDirectionProvider__methods_ },
            { Py_tp_init, (void *) t_PythonThrustDirectionProvider_init_ },
            { Py_tp_getset, t_PythonThrustDirectionProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonThrustDirectionProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonThrustDirectionProvider, t_PythonThrustDirectionProvider, PythonThrustDirectionProvider);

          void t_PythonThrustDirectionProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonThrustDirectionProvider), &PY_TYPE_DEF(PythonThrustDirectionProvider), module, "PythonThrustDirectionProvider", 1);
          }

          void t_PythonThrustDirectionProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "class_", make_descriptor(PythonThrustDirectionProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "wrapfn_", make_descriptor(t_PythonThrustDirectionProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonThrustDirectionProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustDirectionProvider_computeThrustDirection0 },
              { "pythonDecRef", "()V", (void *) t_PythonThrustDirectionProvider_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonThrustDirectionProvider::initializeClass, 1)))
              return NULL;
            return t_PythonThrustDirectionProvider::wrap_Object(PythonThrustDirectionProvider(((t_PythonThrustDirectionProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonThrustDirectionProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonThrustDirectionProvider_init_(t_PythonThrustDirectionProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonThrustDirectionProvider object((jobject) NULL);

            INT_CALL(object = PythonThrustDirectionProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonThrustDirectionProvider_finalize(t_PythonThrustDirectionProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonThrustDirectionProvider_pythonExtension(t_PythonThrustDirectionProvider *self, PyObject *args)
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

          static jobject JNICALL t_PythonThrustDirectionProvider_computeThrustDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "computeThrustDirection", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("computeThrustDirection", result);
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

          static void JNICALL t_PythonThrustDirectionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonThrustDirectionProvider_get__self(t_PythonThrustDirectionProvider *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AggregatedPVCoordinatesProvider$Builder::class$ = NULL;
      jmethodID *AggregatedPVCoordinatesProvider$Builder::mids$ = NULL;
      bool AggregatedPVCoordinatesProvider$Builder::live$ = false;

      jclass AggregatedPVCoordinatesProvider$Builder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AggregatedPVCoordinatesProvider$Builder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_89227d950841a6f5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;)V");
          mids$[mid_addPVProviderAfter_91816397f6065003] = env->getMethodID(cls, "addPVProviderAfter", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;Z)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_addPVProviderBefore_91816397f6065003] = env->getMethodID(cls, "addPVProviderBefore", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;Z)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_build_5950ada932adf178] = env->getMethodID(cls, "build", "()Lorg/orekit/utils/AggregatedPVCoordinatesProvider;");
          mids$[mid_invalidAfter_034efa53a4f26e25] = env->getMethodID(cls, "invalidAfter", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_invalidBefore_034efa53a4f26e25] = env->getMethodID(cls, "invalidBefore", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider$Builder::AggregatedPVCoordinatesProvider$Builder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      AggregatedPVCoordinatesProvider$Builder::AggregatedPVCoordinatesProvider$Builder(const ::org::orekit::utils::PVCoordinatesProvider & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89227d950841a6f5, a0.this$)) {}

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::addPVProviderAfter(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jboolean a2) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_addPVProviderAfter_91816397f6065003], a0.this$, a1.this$, a2));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::addPVProviderBefore(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jboolean a2) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_addPVProviderBefore_91816397f6065003], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::AggregatedPVCoordinatesProvider AggregatedPVCoordinatesProvider$Builder::build() const
      {
        return ::org::orekit::utils::AggregatedPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_build_5950ada932adf178]));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::invalidAfter(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_invalidAfter_034efa53a4f26e25], a0.this$));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::invalidBefore(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_invalidBefore_034efa53a4f26e25], a0.this$));
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
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregatedPVCoordinatesProvider$Builder_init_(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_build(t_AggregatedPVCoordinatesProvider$Builder *self);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg);

      static PyMethodDef t_AggregatedPVCoordinatesProvider$Builder__methods_[] = {
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, addPVProviderAfter, METH_VARARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, addPVProviderBefore, METH_VARARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, build, METH_NOARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, invalidAfter, METH_O),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, invalidBefore, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregatedPVCoordinatesProvider$Builder)[] = {
        { Py_tp_methods, t_AggregatedPVCoordinatesProvider$Builder__methods_ },
        { Py_tp_init, (void *) t_AggregatedPVCoordinatesProvider$Builder_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregatedPVCoordinatesProvider$Builder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregatedPVCoordinatesProvider$Builder, t_AggregatedPVCoordinatesProvider$Builder, AggregatedPVCoordinatesProvider$Builder);

      void t_AggregatedPVCoordinatesProvider$Builder::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregatedPVCoordinatesProvider$Builder), &PY_TYPE_DEF(AggregatedPVCoordinatesProvider$Builder), module, "AggregatedPVCoordinatesProvider$Builder", 0);
      }

      void t_AggregatedPVCoordinatesProvider$Builder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$Builder), "class_", make_descriptor(AggregatedPVCoordinatesProvider$Builder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$Builder), "wrapfn_", make_descriptor(t_AggregatedPVCoordinatesProvider$Builder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$Builder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregatedPVCoordinatesProvider$Builder::initializeClass, 1)))
          return NULL;
        return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(AggregatedPVCoordinatesProvider$Builder(((t_AggregatedPVCoordinatesProvider$Builder *) arg)->object.this$));
      }
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregatedPVCoordinatesProvider$Builder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregatedPVCoordinatesProvider$Builder_init_(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            AggregatedPVCoordinatesProvider$Builder object((jobject) NULL);

            INT_CALL(object = AggregatedPVCoordinatesProvider$Builder());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            AggregatedPVCoordinatesProvider$Builder object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0))
            {
              INT_CALL(object = AggregatedPVCoordinatesProvider$Builder(a0));
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

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
        jboolean a2;
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArgs(args, "kkZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addPVProviderAfter(a0, a1, a2));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addPVProviderAfter", args);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
        jboolean a2;
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArgs(args, "kkZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addPVProviderBefore(a0, a1, a2));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addPVProviderBefore", args);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_build(t_AggregatedPVCoordinatesProvider$Builder *self)
      {
        ::org::orekit::utils::AggregatedPVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.build());
        return ::org::orekit::utils::t_AggregatedPVCoordinatesProvider::wrap_Object(result);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.invalidAfter(a0));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "invalidAfter", arg);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.invalidBefore(a0));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "invalidBefore", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/EGMFormatReader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/errors/OrekitException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *EGMFormatReader::class$ = NULL;
          jmethodID *EGMFormatReader::mids$ = NULL;
          bool EGMFormatReader::live$ = false;

          jclass EGMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/EGMFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e5ca4b97ee6bd2b6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_c08444eca1af05e2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZZ)V");
              mids$[mid_getProvider_f0b357b475e18957] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EGMFormatReader::EGMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_e5ca4b97ee6bd2b6, a0.this$, a1)) {}

          EGMFormatReader::EGMFormatReader(const ::java::lang::String & a0, jboolean a1, jboolean a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_c08444eca1af05e2, a0.this$, a1, a2)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider EGMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_f0b357b475e18957], a0, a1, a2));
          }

          void EGMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
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
          static PyObject *t_EGMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EGMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EGMFormatReader_init_(t_EGMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EGMFormatReader_getProvider(t_EGMFormatReader *self, PyObject *args);
          static PyObject *t_EGMFormatReader_loadData(t_EGMFormatReader *self, PyObject *args);

          static PyMethodDef t_EGMFormatReader__methods_[] = {
            DECLARE_METHOD(t_EGMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EGMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EGMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_EGMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EGMFormatReader)[] = {
            { Py_tp_methods, t_EGMFormatReader__methods_ },
            { Py_tp_init, (void *) t_EGMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EGMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(EGMFormatReader, t_EGMFormatReader, EGMFormatReader);

          void t_EGMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(EGMFormatReader), &PY_TYPE_DEF(EGMFormatReader), module, "EGMFormatReader", 0);
          }

          void t_EGMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "class_", make_descriptor(EGMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "wrapfn_", make_descriptor(t_EGMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EGMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EGMFormatReader::initializeClass, 1)))
              return NULL;
            return t_EGMFormatReader::wrap_Object(EGMFormatReader(((t_EGMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_EGMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EGMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EGMFormatReader_init_(t_EGMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                EGMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = EGMFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                jboolean a2;
                EGMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZZ", &a0, &a1, &a2))
                {
                  INT_CALL(object = EGMFormatReader(a0, a1, a2));
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

          static PyObject *t_EGMFormatReader_getProvider(t_EGMFormatReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            return callSuper(PY_TYPE(EGMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_EGMFormatReader_loadData(t_EGMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(EGMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseral.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTTesseral::class$ = NULL;
            jmethodID *DSSTTesseral::mids$ = NULL;
            bool DSSTTesseral::live$ = false;
            ::java::lang::String *DSSTTesseral::CM_COEFFICIENTS = NULL;
            ::java::lang::String *DSSTTesseral::SHORT_PERIOD_PREFIX = NULL;
            ::java::lang::String *DSSTTesseral::SM_COEFFICIENTS = NULL;

            jclass DSSTTesseral::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseral");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_de957d647fe18452] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_init$_0d865b1336f1cfaa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;IIIIIII)V");
                mids$[mid_getMeanElementRate_3573019cca22a7a6] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_6930c150caff50e0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_a9be3da5be85857d] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_114c99ef73dfde56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CM_COEFFICIENTS = new ::java::lang::String(env->getStaticObjectField(cls, "CM_COEFFICIENTS", "Ljava/lang/String;"));
                SHORT_PERIOD_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "SHORT_PERIOD_PREFIX", "Ljava/lang/String;"));
                SM_COEFFICIENTS = new ::java::lang::String(env->getStaticObjectField(cls, "SM_COEFFICIENTS", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTTesseral::DSSTTesseral(const ::org::orekit::frames::Frame & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de957d647fe18452, a0.this$, a1, a2.this$)) {}

            DSSTTesseral::DSSTTesseral(const ::org::orekit::frames::Frame & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jint a3, jint a4, jint a5, jint a6, jint a7, jint a8, jint a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d865b1336f1cfaa, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTTesseral::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3573019cca22a7a6], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTTesseral::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_6930c150caff50e0], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTTesseral::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
            }

            ::java::util::List DSSTTesseral::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTTesseral::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554], a0.this$, a1.this$, a2.this$));
            }

            void DSSTTesseral::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
            }

            void DSSTTesseral::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_a9be3da5be85857d], a0.this$, a1.this$);
            }

            void DSSTTesseral::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_114c99ef73dfde56], a0.this$, a1.this$);
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
            static PyObject *t_DSSTTesseral_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseral_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTTesseral_init_(t_DSSTTesseral *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTTesseral_getMeanElementRate(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_getParametersDrivers(t_DSSTTesseral *self);
            static PyObject *t_DSSTTesseral_initializeShortPeriodTerms(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_registerAttitudeProvider(t_DSSTTesseral *self, PyObject *arg);
            static PyObject *t_DSSTTesseral_updateShortPeriodTerms(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_get__parametersDrivers(t_DSSTTesseral *self, void *data);
            static PyGetSetDef t_DSSTTesseral__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTTesseral, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTTesseral__methods_[] = {
              DECLARE_METHOD(t_DSSTTesseral, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseral, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseral, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTTesseral, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseral, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTTesseral, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTTesseral, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTTesseral)[] = {
              { Py_tp_methods, t_DSSTTesseral__methods_ },
              { Py_tp_init, (void *) t_DSSTTesseral_init_ },
              { Py_tp_getset, t_DSSTTesseral__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTTesseral)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTTesseral, t_DSSTTesseral, DSSTTesseral);

            void t_DSSTTesseral::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTTesseral), &PY_TYPE_DEF(DSSTTesseral), module, "DSSTTesseral", 0);
            }

            void t_DSSTTesseral::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "class_", make_descriptor(DSSTTesseral::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "wrapfn_", make_descriptor(t_DSSTTesseral::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTTesseral::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "CM_COEFFICIENTS", make_descriptor(j2p(*DSSTTesseral::CM_COEFFICIENTS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "SHORT_PERIOD_PREFIX", make_descriptor(j2p(*DSSTTesseral::SHORT_PERIOD_PREFIX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "SM_COEFFICIENTS", make_descriptor(j2p(*DSSTTesseral::SM_COEFFICIENTS)));
            }

            static PyObject *t_DSSTTesseral_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTTesseral::initializeClass, 1)))
                return NULL;
              return t_DSSTTesseral::wrap_Object(DSSTTesseral(((t_DSSTTesseral *) arg)->object.this$));
            }
            static PyObject *t_DSSTTesseral_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTTesseral::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTTesseral_init_(t_DSSTTesseral *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
                  DSSTTesseral object((jobject) NULL);

                  if (!parseArgs(args, "kDk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = DSSTTesseral(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 10:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
                  jint a3;
                  jint a4;
                  jint a5;
                  jint a6;
                  jint a7;
                  jint a8;
                  jint a9;
                  DSSTTesseral object((jobject) NULL);

                  if (!parseArgs(args, "kDkIIIIIII", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
                  {
                    INT_CALL(object = DSSTTesseral(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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

            static PyObject *t_DSSTTesseral_getMeanElementRate(t_DSSTTesseral *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_getParametersDrivers(t_DSSTTesseral *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTTesseral_initializeShortPeriodTerms(t_DSSTTesseral *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_registerAttitudeProvider(t_DSSTTesseral *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_updateShortPeriodTerms(t_DSSTTesseral *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_get__parametersDrivers(t_DSSTTesseral *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldAdditionalDerivativesProvider::class$ = NULL;
        jmethodID *FieldAdditionalDerivativesProvider::mids$ = NULL;
        bool FieldAdditionalDerivativesProvider::live$ = false;

        jclass FieldAdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldAdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_combinedDerivatives_33912551ee5141fb] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;");
            mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_yields_4fda3059ab91dbfe] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::integration::FieldCombinedDerivatives FieldAdditionalDerivativesProvider::combinedDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::FieldCombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_33912551ee5141fb], a0.this$));
        }

        jint FieldAdditionalDerivativesProvider::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
        }

        ::java::lang::String FieldAdditionalDerivativesProvider::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
        }

        void FieldAdditionalDerivativesProvider::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
        }

        jboolean FieldAdditionalDerivativesProvider::yields(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_yields_4fda3059ab91dbfe], a0.this$);
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
      namespace integration {
        static PyObject *t_FieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_of_(t_FieldAdditionalDerivativesProvider *self, PyObject *args);
        static PyObject *t_FieldAdditionalDerivativesProvider_combinedDerivatives(t_FieldAdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_getDimension(t_FieldAdditionalDerivativesProvider *self);
        static PyObject *t_FieldAdditionalDerivativesProvider_getName(t_FieldAdditionalDerivativesProvider *self);
        static PyObject *t_FieldAdditionalDerivativesProvider_init(t_FieldAdditionalDerivativesProvider *self, PyObject *args);
        static PyObject *t_FieldAdditionalDerivativesProvider_yields(t_FieldAdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_get__dimension(t_FieldAdditionalDerivativesProvider *self, void *data);
        static PyObject *t_FieldAdditionalDerivativesProvider_get__name(t_FieldAdditionalDerivativesProvider *self, void *data);
        static PyObject *t_FieldAdditionalDerivativesProvider_get__parameters_(t_FieldAdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_FieldAdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdditionalDerivativesProvider, dimension),
          DECLARE_GET_FIELD(t_FieldAdditionalDerivativesProvider, name),
          DECLARE_GET_FIELD(t_FieldAdditionalDerivativesProvider, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, combinedDerivatives, METH_O),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, getName, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, yields, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_FieldAdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdditionalDerivativesProvider, t_FieldAdditionalDerivativesProvider, FieldAdditionalDerivativesProvider);
        PyObject *t_FieldAdditionalDerivativesProvider::wrap_Object(const FieldAdditionalDerivativesProvider& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdditionalDerivativesProvider::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdditionalDerivativesProvider *self = (t_FieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdditionalDerivativesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdditionalDerivativesProvider::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdditionalDerivativesProvider *self = (t_FieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdditionalDerivativesProvider), &PY_TYPE_DEF(FieldAdditionalDerivativesProvider), module, "FieldAdditionalDerivativesProvider", 0);
        }

        void t_FieldAdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalDerivativesProvider), "class_", make_descriptor(FieldAdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_FieldAdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_FieldAdditionalDerivativesProvider::wrap_Object(FieldAdditionalDerivativesProvider(((t_FieldAdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_FieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_of_(t_FieldAdditionalDerivativesProvider *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_combinedDerivatives(t_FieldAdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::integration::FieldCombinedDerivatives result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.combinedDerivatives(a0));
            return ::org::orekit::propagation::integration::t_FieldCombinedDerivatives::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
          return NULL;
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_getDimension(t_FieldAdditionalDerivativesProvider *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_getName(t_FieldAdditionalDerivativesProvider *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_init(t_FieldAdditionalDerivativesProvider *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_yields(t_FieldAdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.yields(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "yields", arg);
          return NULL;
        }
        static PyObject *t_FieldAdditionalDerivativesProvider_get__parameters_(t_FieldAdditionalDerivativesProvider *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_get__dimension(t_FieldAdditionalDerivativesProvider *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_get__name(t_FieldAdditionalDerivativesProvider *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPFWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPFWriter::class$ = NULL;
        jmethodID *CPFWriter::mids$ = NULL;
        bool CPFWriter::live$ = false;

        jclass CPFWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPFWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_07a3276b4776920d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPFHeader;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_init$_377629c5718b541b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPFHeader;Lorg/orekit/time/TimeScale;Z)V");
            mids$[mid_write_0fa910eb9c2e844e] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFWriter::CPFWriter(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07a3276b4776920d, a0.this$, a1.this$)) {}

        CPFWriter::CPFWriter(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::org::orekit::time::TimeScale & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_377629c5718b541b, a0.this$, a1.this$, a2)) {}

        void CPFWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_0fa910eb9c2e844e], a0.this$, a1.this$);
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
        static PyObject *t_CPFWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPFWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPFWriter_init_(t_CPFWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPFWriter_write(t_CPFWriter *self, PyObject *args);

        static PyMethodDef t_CPFWriter__methods_[] = {
          DECLARE_METHOD(t_CPFWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPFWriter)[] = {
          { Py_tp_methods, t_CPFWriter__methods_ },
          { Py_tp_init, (void *) t_CPFWriter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPFWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPFWriter, t_CPFWriter, CPFWriter);

        void t_CPFWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(CPFWriter), &PY_TYPE_DEF(CPFWriter), module, "CPFWriter", 0);
        }

        void t_CPFWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "class_", make_descriptor(CPFWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "wrapfn_", make_descriptor(t_CPFWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPFWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPFWriter::initializeClass, 1)))
            return NULL;
          return t_CPFWriter::wrap_Object(CPFWriter(((t_CPFWriter *) arg)->object.this$));
        }
        static PyObject *t_CPFWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPFWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPFWriter_init_(t_CPFWriter *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              CPFWriter object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CPFWriter(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              jboolean a2;
              CPFWriter object((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CPFWriter(a0, a1, a2));
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

        static PyObject *t_CPFWriter_write(t_CPFWriter *self, PyObject *args)
        {
          ::java::lang::Appendable a0((jobject) NULL);
          ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
          {
            OBJ_CALL(self->object.write(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *ShapiroOneWayGNSSRangeModifier::mids$ = NULL;
          bool ShapiroOneWayGNSSRangeModifier::live$ = false;

          jclass ShapiroOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroOneWayGNSSRangeModifier::ShapiroOneWayGNSSRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          ::java::util::List ShapiroOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void ShapiroOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroOneWayGNSSRangeModifier_init_(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_getParametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_get__parametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroOneWayGNSSRangeModifier, t_ShapiroOneWayGNSSRangeModifier, ShapiroOneWayGNSSRangeModifier);

          void t_ShapiroOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroOneWayGNSSRangeModifier), &PY_TYPE_DEF(ShapiroOneWayGNSSRangeModifier), module, "ShapiroOneWayGNSSRangeModifier", 0);
          }

          void t_ShapiroOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "class_", make_descriptor(ShapiroOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_ShapiroOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroOneWayGNSSRangeModifier::wrap_Object(ShapiroOneWayGNSSRangeModifier(((t_ShapiroOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroOneWayGNSSRangeModifier_init_(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroOneWayGNSSRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_getParametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_get__parametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *SymmetricGaussIntegrator::class$ = NULL;
          jmethodID *SymmetricGaussIntegrator::mids$ = NULL;
          bool SymmetricGaussIntegrator::live$ = false;

          jclass SymmetricGaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7cd681864cf513c2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_ab4840ba016ef1da] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_integrate_b5020c81a1e55ffa] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/UnivariateFunction;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SymmetricGaussIntegrator::SymmetricGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_7cd681864cf513c2, a0.this$)) {}

          SymmetricGaussIntegrator::SymmetricGaussIntegrator(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_ab4840ba016ef1da, a0.this$, a1.this$)) {}

          jdouble SymmetricGaussIntegrator::integrate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_integrate_b5020c81a1e55ffa], a0.this$);
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_SymmetricGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SymmetricGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SymmetricGaussIntegrator_init_(t_SymmetricGaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SymmetricGaussIntegrator_integrate(t_SymmetricGaussIntegrator *self, PyObject *args);

          static PyMethodDef t_SymmetricGaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_SymmetricGaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricGaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricGaussIntegrator, integrate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SymmetricGaussIntegrator)[] = {
            { Py_tp_methods, t_SymmetricGaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_SymmetricGaussIntegrator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SymmetricGaussIntegrator)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::GaussIntegrator),
            NULL
          };

          DEFINE_TYPE(SymmetricGaussIntegrator, t_SymmetricGaussIntegrator, SymmetricGaussIntegrator);

          void t_SymmetricGaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(SymmetricGaussIntegrator), &PY_TYPE_DEF(SymmetricGaussIntegrator), module, "SymmetricGaussIntegrator", 0);
          }

          void t_SymmetricGaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "class_", make_descriptor(SymmetricGaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "wrapfn_", make_descriptor(t_SymmetricGaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SymmetricGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SymmetricGaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_SymmetricGaussIntegrator::wrap_Object(SymmetricGaussIntegrator(((t_SymmetricGaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_SymmetricGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SymmetricGaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SymmetricGaussIntegrator_init_(t_SymmetricGaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                SymmetricGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = SymmetricGaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                SymmetricGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = SymmetricGaussIntegrator(a0, a1));
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

          static PyObject *t_SymmetricGaussIntegrator_integrate(t_SymmetricGaussIntegrator *self, PyObject *args)
          {
            ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SymmetricGaussIntegrator), (PyObject *) self, "integrate", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DormandPrince853FieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DormandPrince853FieldIntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince853FieldIntegratorBuilder::mids$ = NULL;
        bool DormandPrince853FieldIntegratorBuilder::live$ = false;

        jclass DormandPrince853FieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince853FieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853FieldIntegratorBuilder::DormandPrince853FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator DormandPrince853FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_3a1ee7ebe4f0e344], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_of_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args);
        static int t_DormandPrince853FieldIntegratorBuilder_init_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_buildIntegrator(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_get__parameters_(t_DormandPrince853FieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_DormandPrince853FieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince853FieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853FieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince853FieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853FieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_DormandPrince853FieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853FieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(DormandPrince853FieldIntegratorBuilder, t_DormandPrince853FieldIntegratorBuilder, DormandPrince853FieldIntegratorBuilder);
        PyObject *t_DormandPrince853FieldIntegratorBuilder::wrap_Object(const DormandPrince853FieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegratorBuilder *self = (t_DormandPrince853FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince853FieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegratorBuilder *self = (t_DormandPrince853FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince853FieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853FieldIntegratorBuilder), &PY_TYPE_DEF(DormandPrince853FieldIntegratorBuilder), module, "DormandPrince853FieldIntegratorBuilder", 0);
        }

        void t_DormandPrince853FieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "class_", make_descriptor(DormandPrince853FieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince853FieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853FieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853FieldIntegratorBuilder::wrap_Object(DormandPrince853FieldIntegratorBuilder(((t_DormandPrince853FieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853FieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_of_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince853FieldIntegratorBuilder_init_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince853FieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince853FieldIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_buildIntegrator(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_get__parameters_(t_DormandPrince853FieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/Format.h"
#include "java/text/ParsePosition.h"
#include "java/text/ParseException.h"
#include "java/io/Serializable.h"
#include "java/text/AttributedCharacterIterator.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *Format::class$ = NULL;
    jmethodID *Format::mids$ = NULL;
    bool Format::live$ = false;

    jclass Format::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/Format");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_format_fa48e6cfb0766bbf] = env->getMethodID(cls, "format", "(Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_format_60ec49fc2ad8aa0e] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_formatToCharacterIterator_67523d7667ad62e2] = env->getMethodID(cls, "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;");
        mids$[mid_parseObject_86c4b8560f4aa70f] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_parseObject_a7f2c32d9be5fd0d] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object Format::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_e661fe3ba2fafb22]));
    }

    ::java::lang::String Format::format(const ::java::lang::Object & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_fa48e6cfb0766bbf], a0.this$));
    }

    ::java::lang::StringBuffer Format::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_60ec49fc2ad8aa0e], a0.this$, a1.this$, a2.this$));
    }

    ::java::text::AttributedCharacterIterator Format::formatToCharacterIterator(const ::java::lang::Object & a0) const
    {
      return ::java::text::AttributedCharacterIterator(env->callObjectMethod(this$, mids$[mid_formatToCharacterIterator_67523d7667ad62e2], a0.this$));
    }

    ::java::lang::Object Format::parseObject(const ::java::lang::String & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_86c4b8560f4aa70f], a0.this$));
    }

    ::java::lang::Object Format::parseObject(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_a7f2c32d9be5fd0d], a0.this$, a1.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_Format_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Format_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Format_clone(t_Format *self);
    static PyObject *t_Format_format(t_Format *self, PyObject *args);
    static PyObject *t_Format_formatToCharacterIterator(t_Format *self, PyObject *arg);
    static PyObject *t_Format_parseObject(t_Format *self, PyObject *args);

    static PyMethodDef t_Format__methods_[] = {
      DECLARE_METHOD(t_Format, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Format, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Format, clone, METH_NOARGS),
      DECLARE_METHOD(t_Format, format, METH_VARARGS),
      DECLARE_METHOD(t_Format, formatToCharacterIterator, METH_O),
      DECLARE_METHOD(t_Format, parseObject, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Format)[] = {
      { Py_tp_methods, t_Format__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Format)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Format, t_Format, Format);

    void t_Format::install(PyObject *module)
    {
      installType(&PY_TYPE(Format), &PY_TYPE_DEF(Format), module, "Format", 0);
    }

    void t_Format::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format), "class_", make_descriptor(Format::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format), "wrapfn_", make_descriptor(t_Format::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Format_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Format::initializeClass, 1)))
        return NULL;
      return t_Format::wrap_Object(Format(((t_Format *) arg)->object.this$));
    }
    static PyObject *t_Format_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Format::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Format_clone(t_Format *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Format_format(t_Format *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.format(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "format", args);
      return NULL;
    }

    static PyObject *t_Format_formatToCharacterIterator(t_Format *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::text::AttributedCharacterIterator result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.formatToCharacterIterator(a0));
        return ::java::text::t_AttributedCharacterIterator::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "formatToCharacterIterator", arg);
      return NULL;
    }

    static PyObject *t_Format_parseObject(t_Format *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.parseObject(a0));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::text::ParsePosition a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.parseObject(a0, a1));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "parseObject", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/UpperBounds.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *UpperBounds::class$ = NULL;
            jmethodID *UpperBounds::mids$ = NULL;
            bool UpperBounds::live$ = false;

            jclass UpperBounds::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/UpperBounds");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getDnl_371a292f2bee3e78] = env->getStaticMethodID(cls, "getDnl", "(DDII)D");
                mids$[mid_getDnl_7f3419f66cc4ac78] = env->getStaticMethodID(cls, "getDnl", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRnml_49754d423a4d6db5] = env->getStaticMethodID(cls, "getRnml", "(DIIIII)D");
                mids$[mid_getRnml_b3b8a2f485300a3f] = env->getStaticMethodID(cls, "getRnml", "(Lorg/hipparchus/CalculusFieldElement;IIIII)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble UpperBounds::getDnl(jdouble a0, jdouble a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getDnl_371a292f2bee3e78], a0, a1, a2, a3);
            }

            ::org::hipparchus::CalculusFieldElement UpperBounds::getDnl(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_getDnl_7f3419f66cc4ac78], a0.this$, a1.this$, a2, a3));
            }

            jdouble UpperBounds::getRnml(jdouble a0, jint a1, jint a2, jint a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getRnml_49754d423a4d6db5], a0, a1, a2, a3, a4, a5);
            }

            ::org::hipparchus::CalculusFieldElement UpperBounds::getRnml(const ::org::hipparchus::CalculusFieldElement & a0, jint a1, jint a2, jint a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_getRnml_b3b8a2f485300a3f], a0.this$, a1, a2, a3, a4, a5));
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
            static PyObject *t_UpperBounds_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UpperBounds_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UpperBounds_getDnl(PyTypeObject *type, PyObject *args);
            static PyObject *t_UpperBounds_getRnml(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_UpperBounds__methods_[] = {
              DECLARE_METHOD(t_UpperBounds, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UpperBounds, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UpperBounds, getDnl, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_UpperBounds, getRnml, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UpperBounds)[] = {
              { Py_tp_methods, t_UpperBounds__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UpperBounds)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(UpperBounds, t_UpperBounds, UpperBounds);

            void t_UpperBounds::install(PyObject *module)
            {
              installType(&PY_TYPE(UpperBounds), &PY_TYPE_DEF(UpperBounds), module, "UpperBounds", 0);
            }

            void t_UpperBounds::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UpperBounds), "class_", make_descriptor(UpperBounds::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UpperBounds), "wrapfn_", make_descriptor(t_UpperBounds::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UpperBounds), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UpperBounds_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UpperBounds::initializeClass, 1)))
                return NULL;
              return t_UpperBounds::wrap_Object(UpperBounds(((t_UpperBounds *) arg)->object.this$));
            }
            static PyObject *t_UpperBounds_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UpperBounds::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_UpperBounds_getDnl(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  jdouble a0;
                  jdouble a1;
                  jint a2;
                  jint a3;
                  jdouble result;

                  if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getDnl(a0, a1, a2, a3));
                    return PyFloat_FromDouble((double) result);
                  }
                }
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                  PyTypeObject **p1;
                  jint a2;
                  jint a3;
                  ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                  if (!parseArgs(args, "KKII", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getDnl(a0, a1, a2, a3));
                    return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "getDnl", args);
              return NULL;
            }

            static PyObject *t_UpperBounds_getRnml(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 6:
                {
                  jdouble a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jint a5;
                  jdouble result;

                  if (!parseArgs(args, "DIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getRnml(a0, a1, a2, a3, a4, a5));
                    return PyFloat_FromDouble((double) result);
                  }
                }
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jint a5;
                  ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                  if (!parseArgs(args, "KIIIII", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getRnml(a0, a1, a2, a3, a4, a5));
                    return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "getRnml", args);
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
#include "org/hipparchus/ode/nonstiff/GraggBulirschStoerIntegrator.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *GraggBulirschStoerIntegrator::class$ = NULL;
        jmethodID *GraggBulirschStoerIntegrator::mids$ = NULL;
        bool GraggBulirschStoerIntegrator::live$ = false;

        jclass GraggBulirschStoerIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/GraggBulirschStoerIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c13e969c0f339014] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_bc3712e794ac7a81] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_integrate_7b1e7ccc98e27149] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_setControlFactors_bc3712e794ac7a81] = env->getMethodID(cls, "setControlFactors", "(DDDD)V");
            mids$[mid_setInterpolationControl_edc332450b7dadf1] = env->getMethodID(cls, "setInterpolationControl", "(ZI)V");
            mids$[mid_setOrderControl_79cfe3f564275380] = env->getMethodID(cls, "setOrderControl", "(IDD)V");
            mids$[mid_setStabilityCheck_7d55e66ed9bc9409] = env->getMethodID(cls, "setStabilityCheck", "(ZIID)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GraggBulirschStoerIntegrator::GraggBulirschStoerIntegrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(env->newObject(initializeClass, &mids$, mid_init$_c13e969c0f339014, a0, a1, a2.this$, a3.this$)) {}

        GraggBulirschStoerIntegrator::GraggBulirschStoerIntegrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(env->newObject(initializeClass, &mids$, mid_init$_bc3712e794ac7a81, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::ODEStateAndDerivative GraggBulirschStoerIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_7b1e7ccc98e27149], a0.this$, a1.this$, a2));
        }

        void GraggBulirschStoerIntegrator::setControlFactors(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setControlFactors_bc3712e794ac7a81], a0, a1, a2, a3);
        }

        void GraggBulirschStoerIntegrator::setInterpolationControl(jboolean a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setInterpolationControl_edc332450b7dadf1], a0, a1);
        }

        void GraggBulirschStoerIntegrator::setOrderControl(jint a0, jdouble a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrderControl_79cfe3f564275380], a0, a1, a2);
        }

        void GraggBulirschStoerIntegrator::setStabilityCheck(jboolean a0, jint a1, jint a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStabilityCheck_7d55e66ed9bc9409], a0, a1, a2, a3);
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
      namespace nonstiff {
        static PyObject *t_GraggBulirschStoerIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GraggBulirschStoerIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GraggBulirschStoerIntegrator_init_(t_GraggBulirschStoerIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GraggBulirschStoerIntegrator_integrate(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setControlFactors(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setInterpolationControl(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setOrderControl(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setStabilityCheck(t_GraggBulirschStoerIntegrator *self, PyObject *args);

        static PyMethodDef t_GraggBulirschStoerIntegrator__methods_[] = {
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setControlFactors, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setInterpolationControl, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setOrderControl, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setStabilityCheck, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GraggBulirschStoerIntegrator)[] = {
          { Py_tp_methods, t_GraggBulirschStoerIntegrator__methods_ },
          { Py_tp_init, (void *) t_GraggBulirschStoerIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GraggBulirschStoerIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator),
          NULL
        };

        DEFINE_TYPE(GraggBulirschStoerIntegrator, t_GraggBulirschStoerIntegrator, GraggBulirschStoerIntegrator);

        void t_GraggBulirschStoerIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(GraggBulirschStoerIntegrator), &PY_TYPE_DEF(GraggBulirschStoerIntegrator), module, "GraggBulirschStoerIntegrator", 0);
        }

        void t_GraggBulirschStoerIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "class_", make_descriptor(GraggBulirschStoerIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "wrapfn_", make_descriptor(t_GraggBulirschStoerIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GraggBulirschStoerIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GraggBulirschStoerIntegrator::initializeClass, 1)))
            return NULL;
          return t_GraggBulirschStoerIntegrator::wrap_Object(GraggBulirschStoerIntegrator(((t_GraggBulirschStoerIntegrator *) arg)->object.this$));
        }
        static PyObject *t_GraggBulirschStoerIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GraggBulirschStoerIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GraggBulirschStoerIntegrator_init_(t_GraggBulirschStoerIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              GraggBulirschStoerIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GraggBulirschStoerIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              GraggBulirschStoerIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GraggBulirschStoerIntegrator(a0, a1, a2, a3));
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

        static PyObject *t_GraggBulirschStoerIntegrator_integrate(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(GraggBulirschStoerIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setControlFactors(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;

          if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.setControlFactors(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setControlFactors", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setInterpolationControl(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;

          if (!parseArgs(args, "ZI", &a0, &a1))
          {
            OBJ_CALL(self->object.setInterpolationControl(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInterpolationControl", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setOrderControl(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setOrderControl(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrderControl", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setStabilityCheck(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "ZIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.setStabilityCheck(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStabilityCheck", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AdaptableInterval::class$ = NULL;
        jmethodID *AdaptableInterval::mids$ = NULL;
        bool AdaptableInterval::live$ = false;

        jclass AdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_1bbf81d80c47ecdd] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AdaptableInterval::currentInterval(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_1bbf81d80c47ecdd], a0.this$);
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
        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg);

        static PyMethodDef t_AdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_AdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptableInterval)[] = {
          { Py_tp_methods, t_AdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdaptableInterval, t_AdaptableInterval, AdaptableInterval);

        void t_AdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptableInterval), &PY_TYPE_DEF(AdaptableInterval), module, "AdaptableInterval", 0);
        }

        void t_AdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "class_", make_descriptor(AdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "wrapfn_", make_descriptor(t_AdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_AdaptableInterval::wrap_Object(AdaptableInterval(((t_AdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MultidimensionalCounter.h"
#include "java/lang/Iterable.h"
#include "java/lang/Integer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/MultidimensionalCounter$Iterator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MultidimensionalCounter::class$ = NULL;
      jmethodID *MultidimensionalCounter::mids$ = NULL;
      bool MultidimensionalCounter::live$ = false;

      jclass MultidimensionalCounter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MultidimensionalCounter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ec63cb8a58ef5a54] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_getCount_a15ca216c6412600] = env->getMethodID(cls, "getCount", "([I)I");
          mids$[mid_getCounts_014107aa2fd99303] = env->getMethodID(cls, "getCounts", "(I)[I");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getSize_412668abc8d889e9] = env->getMethodID(cls, "getSize", "()I");
          mids$[mid_getSizes_1b41cf9ebf653611] = env->getMethodID(cls, "getSizes", "()[I");
          mids$[mid_iterator_d23f673abf038aa7] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/MultidimensionalCounter$Iterator;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MultidimensionalCounter::MultidimensionalCounter(const JArray< jint > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ec63cb8a58ef5a54, a0.this$)) {}

      jint MultidimensionalCounter::getCount(const JArray< jint > & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_a15ca216c6412600], a0.this$);
      }

      JArray< jint > MultidimensionalCounter::getCounts(jint a0) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCounts_014107aa2fd99303], a0));
      }

      jint MultidimensionalCounter::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      jint MultidimensionalCounter::getSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getSize_412668abc8d889e9]);
      }

      JArray< jint > MultidimensionalCounter::getSizes() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getSizes_1b41cf9ebf653611]));
      }

      ::org::hipparchus::util::MultidimensionalCounter$Iterator MultidimensionalCounter::iterator() const
      {
        return ::org::hipparchus::util::MultidimensionalCounter$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_d23f673abf038aa7]));
      }

      ::java::lang::String MultidimensionalCounter::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_MultidimensionalCounter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MultidimensionalCounter_init_(t_MultidimensionalCounter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MultidimensionalCounter_getCount(t_MultidimensionalCounter *self, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_getCounts(t_MultidimensionalCounter *self, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_getDimension(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_getSize(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_getSizes(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_iterator(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_toString(t_MultidimensionalCounter *self, PyObject *args);
      static PyObject *t_MultidimensionalCounter_get__dimension(t_MultidimensionalCounter *self, void *data);
      static PyObject *t_MultidimensionalCounter_get__size(t_MultidimensionalCounter *self, void *data);
      static PyObject *t_MultidimensionalCounter_get__sizes(t_MultidimensionalCounter *self, void *data);
      static PyGetSetDef t_MultidimensionalCounter__fields_[] = {
        DECLARE_GET_FIELD(t_MultidimensionalCounter, dimension),
        DECLARE_GET_FIELD(t_MultidimensionalCounter, size),
        DECLARE_GET_FIELD(t_MultidimensionalCounter, sizes),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultidimensionalCounter__methods_[] = {
        DECLARE_METHOD(t_MultidimensionalCounter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter, getCount, METH_O),
        DECLARE_METHOD(t_MultidimensionalCounter, getCounts, METH_O),
        DECLARE_METHOD(t_MultidimensionalCounter, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, getSize, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, getSizes, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, iterator, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultidimensionalCounter)[] = {
        { Py_tp_methods, t_MultidimensionalCounter__methods_ },
        { Py_tp_init, (void *) t_MultidimensionalCounter_init_ },
        { Py_tp_getset, t_MultidimensionalCounter__fields_ },
        { Py_tp_iter, (void *) ((PyObject *(*)(t_MultidimensionalCounter *)) get_iterator< t_MultidimensionalCounter >) },
        { Py_tp_iternext, (void *) 0 },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultidimensionalCounter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultidimensionalCounter, t_MultidimensionalCounter, MultidimensionalCounter);

      void t_MultidimensionalCounter::install(PyObject *module)
      {
        installType(&PY_TYPE(MultidimensionalCounter), &PY_TYPE_DEF(MultidimensionalCounter), module, "MultidimensionalCounter", 0);
      }

      void t_MultidimensionalCounter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "class_", make_descriptor(MultidimensionalCounter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "wrapfn_", make_descriptor(t_MultidimensionalCounter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultidimensionalCounter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultidimensionalCounter::initializeClass, 1)))
          return NULL;
        return t_MultidimensionalCounter::wrap_Object(MultidimensionalCounter(((t_MultidimensionalCounter *) arg)->object.this$));
      }
      static PyObject *t_MultidimensionalCounter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultidimensionalCounter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MultidimensionalCounter_init_(t_MultidimensionalCounter *self, PyObject *args, PyObject *kwds)
      {
        JArray< jint > a0((jobject) NULL);
        MultidimensionalCounter object((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          INT_CALL(object = MultidimensionalCounter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MultidimensionalCounter_getCount(t_MultidimensionalCounter *self, PyObject *arg)
      {
        JArray< jint > a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "[I", &a0))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", arg);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter_getCounts(t_MultidimensionalCounter *self, PyObject *arg)
      {
        jint a0;
        JArray< jint > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCounts(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getCounts", arg);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter_getDimension(t_MultidimensionalCounter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultidimensionalCounter_getSize(t_MultidimensionalCounter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultidimensionalCounter_getSizes(t_MultidimensionalCounter *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getSizes());
        return result.wrap();
      }

      static PyObject *t_MultidimensionalCounter_iterator(t_MultidimensionalCounter *self)
      {
        ::org::hipparchus::util::MultidimensionalCounter$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_MultidimensionalCounter$Iterator::wrap_Object(result);
      }

      static PyObject *t_MultidimensionalCounter_toString(t_MultidimensionalCounter *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(MultidimensionalCounter), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_MultidimensionalCounter_get__dimension(t_MultidimensionalCounter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter_get__size(t_MultidimensionalCounter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSize());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter_get__sizes(t_MultidimensionalCounter *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getSizes());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Segment.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Segment::class$ = NULL;
        jmethodID *SP3Segment::mids$ = NULL;
        bool SP3Segment::live$ = false;

        jclass SP3Segment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Segment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3147cb0ef3d8baac] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_addCoordinate_4bd5741539acf9ea] = env->getMethodID(cls, "addCoordinate", "(Lorg/orekit/files/sp3/SP3Coordinate;)V");
            mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_0d9551367f7ecdef] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_fa108fc36df3791a] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_587eea156586204f] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Segment::SP3Segment(jdouble a0, const ::org::orekit::frames::Frame & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3147cb0ef3d8baac, a0, a1.this$, a2, a3.this$)) {}

        void SP3Segment::addCoordinate(const ::org::orekit::files::sp3::SP3Coordinate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCoordinate_4bd5741539acf9ea], a0.this$);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Segment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837]));
        }

        ::java::util::List SP3Segment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_0d9551367f7ecdef]));
        }

        ::org::orekit::frames::Frame SP3Segment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
        }

        jint SP3Segment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_412668abc8d889e9]);
        }

        jdouble SP3Segment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        ::org::orekit::propagation::BoundedPropagator SP3Segment::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_fa108fc36df3791a]));
        }

        ::org::orekit::propagation::BoundedPropagator SP3Segment::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_587eea156586204f], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SP3Segment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate SP3Segment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
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
        static PyObject *t_SP3Segment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Segment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Segment_init_(t_SP3Segment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Segment_addCoordinate(t_SP3Segment *self, PyObject *arg);
        static PyObject *t_SP3Segment_getAvailableDerivatives(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getCoordinates(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getFrame(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getInterpolationSamples(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getMu(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getPropagator(t_SP3Segment *self, PyObject *args);
        static PyObject *t_SP3Segment_getStart(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getStop(t_SP3Segment *self);
        static PyObject *t_SP3Segment_get__availableDerivatives(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__coordinates(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__frame(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__interpolationSamples(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__mu(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__propagator(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__start(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__stop(t_SP3Segment *self, void *data);
        static PyGetSetDef t_SP3Segment__fields_[] = {
          DECLARE_GET_FIELD(t_SP3Segment, availableDerivatives),
          DECLARE_GET_FIELD(t_SP3Segment, coordinates),
          DECLARE_GET_FIELD(t_SP3Segment, frame),
          DECLARE_GET_FIELD(t_SP3Segment, interpolationSamples),
          DECLARE_GET_FIELD(t_SP3Segment, mu),
          DECLARE_GET_FIELD(t_SP3Segment, propagator),
          DECLARE_GET_FIELD(t_SP3Segment, start),
          DECLARE_GET_FIELD(t_SP3Segment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Segment__methods_[] = {
          DECLARE_METHOD(t_SP3Segment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Segment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Segment, addCoordinate, METH_O),
          DECLARE_METHOD(t_SP3Segment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_SP3Segment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Segment)[] = {
          { Py_tp_methods, t_SP3Segment__methods_ },
          { Py_tp_init, (void *) t_SP3Segment_init_ },
          { Py_tp_getset, t_SP3Segment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Segment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Segment, t_SP3Segment, SP3Segment);

        void t_SP3Segment::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Segment), &PY_TYPE_DEF(SP3Segment), module, "SP3Segment", 0);
        }

        void t_SP3Segment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Segment), "class_", make_descriptor(SP3Segment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Segment), "wrapfn_", make_descriptor(t_SP3Segment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Segment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3Segment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Segment::initializeClass, 1)))
            return NULL;
          return t_SP3Segment::wrap_Object(SP3Segment(((t_SP3Segment *) arg)->object.this$));
        }
        static PyObject *t_SP3Segment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Segment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Segment_init_(t_SP3Segment *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          jint a2;
          ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
          PyTypeObject **p3;
          SP3Segment object((jobject) NULL);

          if (!parseArgs(args, "DkIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            INT_CALL(object = SP3Segment(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Segment_addCoordinate(t_SP3Segment *self, PyObject *arg)
        {
          ::org::orekit::files::sp3::SP3Coordinate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sp3::SP3Coordinate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addCoordinate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCoordinate", arg);
          return NULL;
        }

        static PyObject *t_SP3Segment_getAvailableDerivatives(t_SP3Segment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_getCoordinates(t_SP3Segment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::sp3::PY_TYPE(SP3Coordinate));
        }

        static PyObject *t_SP3Segment_getFrame(t_SP3Segment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_getInterpolationSamples(t_SP3Segment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Segment_getMu(t_SP3Segment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Segment_getPropagator(t_SP3Segment *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
              OBJ_CALL(result = self->object.getPropagator());
              return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getPropagator(a0));
                return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_SP3Segment_getStart(t_SP3Segment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_getStop(t_SP3Segment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_get__availableDerivatives(t_SP3Segment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__coordinates(t_SP3Segment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__frame(t_SP3Segment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__interpolationSamples(t_SP3Segment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SP3Segment_get__mu(t_SP3Segment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Segment_get__propagator(t_SP3Segment *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__start(t_SP3Segment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__stop(t_SP3Segment *self, void *data)
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
#include "org/orekit/models/earth/ionosphere/PythonIonosphericMappingFunction.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *PythonIonosphericMappingFunction::class$ = NULL;
          jmethodID *PythonIonosphericMappingFunction::mids$ = NULL;
          bool PythonIonosphericMappingFunction::live$ = false;

          jclass PythonIonosphericMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/PythonIonosphericMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_mappingFactor_7e960cd6eee376d8] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_6672ad854985cb64] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactor_T_6672ad854985cb64] = env->getMethodID(cls, "mappingFactor_T", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIonosphericMappingFunction::PythonIonosphericMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonIonosphericMappingFunction::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonIonosphericMappingFunction::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonIonosphericMappingFunction::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace ionosphere {
          static PyObject *t_PythonIonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonIonosphericMappingFunction_init_(t_PythonIonosphericMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIonosphericMappingFunction_finalize(t_PythonIonosphericMappingFunction *self);
          static PyObject *t_PythonIonosphericMappingFunction_pythonExtension(t_PythonIonosphericMappingFunction *self, PyObject *args);
          static jdouble JNICALL t_PythonIonosphericMappingFunction_mappingFactor0(JNIEnv *jenv, jobject jobj, jdouble a0);
          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor_T2(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonIonosphericMappingFunction_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIonosphericMappingFunction_get__self(t_PythonIonosphericMappingFunction *self, void *data);
          static PyGetSetDef t_PythonIonosphericMappingFunction__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIonosphericMappingFunction, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIonosphericMappingFunction__methods_[] = {
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIonosphericMappingFunction)[] = {
            { Py_tp_methods, t_PythonIonosphericMappingFunction__methods_ },
            { Py_tp_init, (void *) t_PythonIonosphericMappingFunction_init_ },
            { Py_tp_getset, t_PythonIonosphericMappingFunction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIonosphericMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonIonosphericMappingFunction, t_PythonIonosphericMappingFunction, PythonIonosphericMappingFunction);

          void t_PythonIonosphericMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIonosphericMappingFunction), &PY_TYPE_DEF(PythonIonosphericMappingFunction), module, "PythonIonosphericMappingFunction", 1);
          }

          void t_PythonIonosphericMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "class_", make_descriptor(PythonIonosphericMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "wrapfn_", make_descriptor(t_PythonIonosphericMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIonosphericMappingFunction::initializeClass);
            JNINativeMethod methods[] = {
              { "mappingFactor", "(D)D", (void *) t_PythonIonosphericMappingFunction_mappingFactor0 },
              { "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericMappingFunction_mappingFactor1 },
              { "mappingFactor_T", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericMappingFunction_mappingFactor_T2 },
              { "pythonDecRef", "()V", (void *) t_PythonIonosphericMappingFunction_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonIonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIonosphericMappingFunction::initializeClass, 1)))
              return NULL;
            return t_PythonIonosphericMappingFunction::wrap_Object(PythonIonosphericMappingFunction(((t_PythonIonosphericMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_PythonIonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIonosphericMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonIonosphericMappingFunction_init_(t_PythonIonosphericMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            PythonIonosphericMappingFunction object((jobject) NULL);

            INT_CALL(object = PythonIonosphericMappingFunction());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIonosphericMappingFunction_finalize(t_PythonIonosphericMappingFunction *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIonosphericMappingFunction_pythonExtension(t_PythonIonosphericMappingFunction *self, PyObject *args)
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

          static jdouble JNICALL t_PythonIonosphericMappingFunction_mappingFactor0(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor", "d", (double) a0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("mappingFactor", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactor", result);
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

          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor_T2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor_T", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactor_T", result);
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

          static void JNICALL t_PythonIonosphericMappingFunction_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIonosphericMappingFunction_get__self(t_PythonIonosphericMappingFunction *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm05::class$ = NULL;
              jmethodID *SsrIgm05::mids$ = NULL;
              bool SsrIgm05::live$ = false;

              jclass SsrIgm05::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c96a13faf51fd308] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm05Data_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSsrIgm05Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05::SsrIgm05(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm05Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_c96a13faf51fd308, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm05::getSsrIgm05Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm05Data_1e62c2f73fbdd1c4]));
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
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm05_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05_of_(t_SsrIgm05 *self, PyObject *args);
              static int t_SsrIgm05_init_(t_SsrIgm05 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm05_getSsrIgm05Data(t_SsrIgm05 *self);
              static PyObject *t_SsrIgm05_get__ssrIgm05Data(t_SsrIgm05 *self, void *data);
              static PyObject *t_SsrIgm05_get__parameters_(t_SsrIgm05 *self, void *data);
              static PyGetSetDef t_SsrIgm05__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm05, ssrIgm05Data),
                DECLARE_GET_FIELD(t_SsrIgm05, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm05__methods_[] = {
                DECLARE_METHOD(t_SsrIgm05, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm05, getSsrIgm05Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm05)[] = {
                { Py_tp_methods, t_SsrIgm05__methods_ },
                { Py_tp_init, (void *) t_SsrIgm05_init_ },
                { Py_tp_getset, t_SsrIgm05__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm05)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm05, t_SsrIgm05, SsrIgm05);
              PyObject *t_SsrIgm05::wrap_Object(const SsrIgm05& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm05::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm05 *self = (t_SsrIgm05 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm05::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm05::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm05 *self = (t_SsrIgm05 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm05::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm05), &PY_TYPE_DEF(SsrIgm05), module, "SsrIgm05", 0);
              }

              void t_SsrIgm05::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05), "class_", make_descriptor(SsrIgm05::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05), "wrapfn_", make_descriptor(t_SsrIgm05::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm05_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm05::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm05::wrap_Object(SsrIgm05(((t_SsrIgm05 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm05_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm05::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm05_of_(t_SsrIgm05 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm05_init_(t_SsrIgm05 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm05Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm05 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm05Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm05(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm05Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm05Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm05_getSsrIgm05Data(t_SsrIgm05 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm05Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm05_get__parameters_(t_SsrIgm05 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm05_get__ssrIgm05Data(t_SsrIgm05 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm05Data());
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
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {

        ::java::lang::Class *FieldProbabilityOfCollision::class$ = NULL;
        jmethodID *FieldProbabilityOfCollision::mids$ = NULL;
        bool FieldProbabilityOfCollision::live$ = false;

        jclass FieldProbabilityOfCollision::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/ssa/metrics/FieldProbabilityOfCollision");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8d9acc00e9a782f4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;)V");
            mids$[mid_init$_43aa649b713018b7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;Z)V");
            mids$[mid_init$_50b2de22de46bf4c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;Z)V");
            mids$[mid_getLowerLimit_613c8f46c659f636] = env->getMethodID(cls, "getLowerLimit", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getProbabilityOfCollisionMethodName_3cffd47377eca18a] = env->getMethodID(cls, "getProbabilityOfCollisionMethodName", "()Ljava/lang/String;");
            mids$[mid_getUpperLimit_613c8f46c659f636] = env->getMethodID(cls, "getUpperLimit", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_613c8f46c659f636] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_isMaxProbability_89b302893bdbe1f1] = env->getMethodID(cls, "isMaxProbability", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8d9acc00e9a782f4, a0.this$, a1.this$)) {}

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::java::lang::String & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_43aa649b713018b7, a0.this$, a1.this$, a2)) {}

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::java::lang::String & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_50b2de22de46bf4c, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getLowerLimit() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLowerLimit_613c8f46c659f636]));
        }

        ::java::lang::String FieldProbabilityOfCollision::getProbabilityOfCollisionMethodName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProbabilityOfCollisionMethodName_3cffd47377eca18a]));
        }

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getUpperLimit() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getUpperLimit_613c8f46c659f636]));
        }

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_613c8f46c659f636]));
        }

        jboolean FieldProbabilityOfCollision::isMaxProbability() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isMaxProbability_89b302893bdbe1f1]);
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
    namespace ssa {
      namespace metrics {
        static PyObject *t_FieldProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldProbabilityOfCollision_of_(t_FieldProbabilityOfCollision *self, PyObject *args);
        static int t_FieldProbabilityOfCollision_init_(t_FieldProbabilityOfCollision *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldProbabilityOfCollision_getLowerLimit(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_getUpperLimit(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_getValue(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_isMaxProbability(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_get__lowerLimit(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__maxProbability(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__upperLimit(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__value(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__parameters_(t_FieldProbabilityOfCollision *self, void *data);
        static PyGetSetDef t_FieldProbabilityOfCollision__fields_[] = {
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, lowerLimit),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, maxProbability),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, probabilityOfCollisionMethodName),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, upperLimit),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, value),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldProbabilityOfCollision__methods_[] = {
          DECLARE_METHOD(t_FieldProbabilityOfCollision, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getLowerLimit, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getProbabilityOfCollisionMethodName, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getUpperLimit, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getValue, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, isMaxProbability, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldProbabilityOfCollision)[] = {
          { Py_tp_methods, t_FieldProbabilityOfCollision__methods_ },
          { Py_tp_init, (void *) t_FieldProbabilityOfCollision_init_ },
          { Py_tp_getset, t_FieldProbabilityOfCollision__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldProbabilityOfCollision)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldProbabilityOfCollision, t_FieldProbabilityOfCollision, FieldProbabilityOfCollision);
        PyObject *t_FieldProbabilityOfCollision::wrap_Object(const FieldProbabilityOfCollision& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldProbabilityOfCollision::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldProbabilityOfCollision *self = (t_FieldProbabilityOfCollision *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldProbabilityOfCollision::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldProbabilityOfCollision::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldProbabilityOfCollision *self = (t_FieldProbabilityOfCollision *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldProbabilityOfCollision::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldProbabilityOfCollision), &PY_TYPE_DEF(FieldProbabilityOfCollision), module, "FieldProbabilityOfCollision", 0);
        }

        void t_FieldProbabilityOfCollision::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldProbabilityOfCollision), "class_", make_descriptor(FieldProbabilityOfCollision::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldProbabilityOfCollision), "wrapfn_", make_descriptor(t_FieldProbabilityOfCollision::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldProbabilityOfCollision), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldProbabilityOfCollision::initializeClass, 1)))
            return NULL;
          return t_FieldProbabilityOfCollision::wrap_Object(FieldProbabilityOfCollision(((t_FieldProbabilityOfCollision *) arg)->object.this$));
        }
        static PyObject *t_FieldProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldProbabilityOfCollision::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldProbabilityOfCollision_of_(t_FieldProbabilityOfCollision *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldProbabilityOfCollision_init_(t_FieldProbabilityOfCollision *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              FieldProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "Ks", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
              {
                INT_CALL(object = FieldProbabilityOfCollision(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jboolean a2;
              FieldProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "KsZ", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldProbabilityOfCollision(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::lang::String a3((jobject) NULL);
              jboolean a4;
              FieldProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "KKKsZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4))
              {
                INT_CALL(object = FieldProbabilityOfCollision(a0, a1, a2, a3, a4));
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

        static PyObject *t_FieldProbabilityOfCollision_getLowerLimit(t_FieldProbabilityOfCollision *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getLowerLimit());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProbabilityOfCollisionMethodName());
          return j2p(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_getUpperLimit(t_FieldProbabilityOfCollision *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getUpperLimit());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_getValue(t_FieldProbabilityOfCollision *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_isMaxProbability(t_FieldProbabilityOfCollision *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isMaxProbability());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldProbabilityOfCollision_get__parameters_(t_FieldProbabilityOfCollision *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldProbabilityOfCollision_get__lowerLimit(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getLowerLimit());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__maxProbability(t_FieldProbabilityOfCollision *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isMaxProbability());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProbabilityOfCollisionMethodName());
          return j2p(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__upperLimit(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getUpperLimit());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__value(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractSingleFrequencyCombination.h"
#include "java/lang/Throwable.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractSingleFrequencyCombination::class$ = NULL;
          jmethodID *PythonAbstractSingleFrequencyCombination::mids$ = NULL;
          bool PythonAbstractSingleFrequencyCombination::live$ = false;

          jclass PythonAbstractSingleFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractSingleFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e2286686e76d4599] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getCombinedValue_2268d18be49a6087] = env->getMethodID(cls, "getCombinedValue", "(DD)D");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractSingleFrequencyCombination::PythonAbstractSingleFrequencyCombination(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination(env->newObject(initializeClass, &mids$, mid_init$_e2286686e76d4599, a0.this$, a1.this$)) {}

          void PythonAbstractSingleFrequencyCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonAbstractSingleFrequencyCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonAbstractSingleFrequencyCombination::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PythonAbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractSingleFrequencyCombination_init_(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_finalize(t_PythonAbstractSingleFrequencyCombination *self);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_pythonExtension(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args);
          static jdouble JNICALL t_PythonAbstractSingleFrequencyCombination_getCombinedValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
          static void JNICALL t_PythonAbstractSingleFrequencyCombination_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_get__self(t_PythonAbstractSingleFrequencyCombination *self, void *data);
          static PyGetSetDef t_PythonAbstractSingleFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractSingleFrequencyCombination, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractSingleFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractSingleFrequencyCombination)[] = {
            { Py_tp_methods, t_PythonAbstractSingleFrequencyCombination__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractSingleFrequencyCombination_init_ },
            { Py_tp_getset, t_PythonAbstractSingleFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractSingleFrequencyCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(PythonAbstractSingleFrequencyCombination, t_PythonAbstractSingleFrequencyCombination, PythonAbstractSingleFrequencyCombination);

          void t_PythonAbstractSingleFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractSingleFrequencyCombination), &PY_TYPE_DEF(PythonAbstractSingleFrequencyCombination), module, "PythonAbstractSingleFrequencyCombination", 1);
          }

          void t_PythonAbstractSingleFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSingleFrequencyCombination), "class_", make_descriptor(PythonAbstractSingleFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSingleFrequencyCombination), "wrapfn_", make_descriptor(t_PythonAbstractSingleFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSingleFrequencyCombination), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractSingleFrequencyCombination::initializeClass);
            JNINativeMethod methods[] = {
              { "getCombinedValue", "(DD)D", (void *) t_PythonAbstractSingleFrequencyCombination_getCombinedValue0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractSingleFrequencyCombination_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractSingleFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractSingleFrequencyCombination::wrap_Object(PythonAbstractSingleFrequencyCombination(((t_PythonAbstractSingleFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractSingleFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractSingleFrequencyCombination_init_(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            PythonAbstractSingleFrequencyCombination object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::estimation::measurements::gnss::CombinationType::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::gnss::t_CombinationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = PythonAbstractSingleFrequencyCombination(a0, a1));
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

          static PyObject *t_PythonAbstractSingleFrequencyCombination_finalize(t_PythonAbstractSingleFrequencyCombination *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractSingleFrequencyCombination_pythonExtension(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAbstractSingleFrequencyCombination_getCombinedValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getCombinedValue", "dd", (double) a0, (double) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getCombinedValue", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonAbstractSingleFrequencyCombination_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractSingleFrequencyCombination_get__self(t_PythonAbstractSingleFrequencyCombination *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/LeastSquaresConverter.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *LeastSquaresConverter::class$ = NULL;
          jmethodID *LeastSquaresConverter::mids$ = NULL;
          bool LeastSquaresConverter::live$ = false;

          jclass LeastSquaresConverter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/LeastSquaresConverter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9cb9668045142b5a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[D)V");
              mids$[mid_init$_4bc5aeb9e9e93295] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[D[D)V");
              mids$[mid_init$_39c91493eebe07c4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[DLorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_value_86c4a0582e0747ce] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9cb9668045142b5a, a0.this$, a1.this$)) {}

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4bc5aeb9e9e93295, a0.this$, a1.this$, a2.this$)) {}

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_39c91493eebe07c4, a0.this$, a1.this$, a2.this$)) {}

          jdouble LeastSquaresConverter::value(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_value_86c4a0582e0747ce], a0.this$);
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
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          static PyObject *t_LeastSquaresConverter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LeastSquaresConverter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LeastSquaresConverter_init_(t_LeastSquaresConverter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LeastSquaresConverter_value(t_LeastSquaresConverter *self, PyObject *arg);

          static PyMethodDef t_LeastSquaresConverter__methods_[] = {
            DECLARE_METHOD(t_LeastSquaresConverter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LeastSquaresConverter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LeastSquaresConverter, value, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LeastSquaresConverter)[] = {
            { Py_tp_methods, t_LeastSquaresConverter__methods_ },
            { Py_tp_init, (void *) t_LeastSquaresConverter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LeastSquaresConverter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LeastSquaresConverter, t_LeastSquaresConverter, LeastSquaresConverter);

          void t_LeastSquaresConverter::install(PyObject *module)
          {
            installType(&PY_TYPE(LeastSquaresConverter), &PY_TYPE_DEF(LeastSquaresConverter), module, "LeastSquaresConverter", 0);
          }

          void t_LeastSquaresConverter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "class_", make_descriptor(LeastSquaresConverter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "wrapfn_", make_descriptor(t_LeastSquaresConverter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LeastSquaresConverter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LeastSquaresConverter::initializeClass, 1)))
              return NULL;
            return t_LeastSquaresConverter::wrap_Object(LeastSquaresConverter(((t_LeastSquaresConverter *) arg)->object.this$));
          }
          static PyObject *t_LeastSquaresConverter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LeastSquaresConverter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LeastSquaresConverter_init_(t_LeastSquaresConverter *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[D[D", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1, a2));
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

          static PyObject *t_LeastSquaresConverter_value(t_LeastSquaresConverter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "value", arg);
            return NULL;
          }
        }
      }
    }
  }
}
