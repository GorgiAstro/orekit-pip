#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *OffsetModel::class$ = NULL;
      jmethodID *OffsetModel::mids$ = NULL;
      bool OffsetModel::live$ = false;

      jclass OffsetModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/OffsetModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_07bece3cd7a2ccd6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;I)V");
          mids$[mid_init$_bc1e58e77e71782c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;IDD)V");
          mids$[mid_getMJDRef_570ce0828f81a2c1] = env->getMethodID(cls, "getMJDRef", "()I");
          mids$[mid_getOffset_dff5885c2c873297] = env->getMethodID(cls, "getOffset", "()D");
          mids$[mid_getSlope_dff5885c2c873297] = env->getMethodID(cls, "getSlope", "()D");
          mids$[mid_getStart_06e6477664d37caa] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/DateComponents;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OffsetModel::OffsetModel(const ::org::orekit::time::DateComponents & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07bece3cd7a2ccd6, a0.this$, a1)) {}

      OffsetModel::OffsetModel(const ::org::orekit::time::DateComponents & a0, jint a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc1e58e77e71782c, a0.this$, a1, a2, a3)) {}

      jint OffsetModel::getMJDRef() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJDRef_570ce0828f81a2c1]);
      }

      jdouble OffsetModel::getOffset() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_dff5885c2c873297]);
      }

      jdouble OffsetModel::getSlope() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSlope_dff5885c2c873297]);
      }

      ::org::orekit::time::DateComponents OffsetModel::getStart() const
      {
        return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getStart_06e6477664d37caa]));
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
      static PyObject *t_OffsetModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OffsetModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OffsetModel_init_(t_OffsetModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OffsetModel_getMJDRef(t_OffsetModel *self);
      static PyObject *t_OffsetModel_getOffset(t_OffsetModel *self);
      static PyObject *t_OffsetModel_getSlope(t_OffsetModel *self);
      static PyObject *t_OffsetModel_getStart(t_OffsetModel *self);
      static PyObject *t_OffsetModel_get__mJDRef(t_OffsetModel *self, void *data);
      static PyObject *t_OffsetModel_get__offset(t_OffsetModel *self, void *data);
      static PyObject *t_OffsetModel_get__slope(t_OffsetModel *self, void *data);
      static PyObject *t_OffsetModel_get__start(t_OffsetModel *self, void *data);
      static PyGetSetDef t_OffsetModel__fields_[] = {
        DECLARE_GET_FIELD(t_OffsetModel, mJDRef),
        DECLARE_GET_FIELD(t_OffsetModel, offset),
        DECLARE_GET_FIELD(t_OffsetModel, slope),
        DECLARE_GET_FIELD(t_OffsetModel, start),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OffsetModel__methods_[] = {
        DECLARE_METHOD(t_OffsetModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OffsetModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OffsetModel, getMJDRef, METH_NOARGS),
        DECLARE_METHOD(t_OffsetModel, getOffset, METH_NOARGS),
        DECLARE_METHOD(t_OffsetModel, getSlope, METH_NOARGS),
        DECLARE_METHOD(t_OffsetModel, getStart, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OffsetModel)[] = {
        { Py_tp_methods, t_OffsetModel__methods_ },
        { Py_tp_init, (void *) t_OffsetModel_init_ },
        { Py_tp_getset, t_OffsetModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OffsetModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OffsetModel, t_OffsetModel, OffsetModel);

      void t_OffsetModel::install(PyObject *module)
      {
        installType(&PY_TYPE(OffsetModel), &PY_TYPE_DEF(OffsetModel), module, "OffsetModel", 0);
      }

      void t_OffsetModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OffsetModel), "class_", make_descriptor(OffsetModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OffsetModel), "wrapfn_", make_descriptor(t_OffsetModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OffsetModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OffsetModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OffsetModel::initializeClass, 1)))
          return NULL;
        return t_OffsetModel::wrap_Object(OffsetModel(((t_OffsetModel *) arg)->object.this$));
      }
      static PyObject *t_OffsetModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OffsetModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OffsetModel_init_(t_OffsetModel *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            jint a1;
            OffsetModel object((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::time::DateComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OffsetModel(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            jint a1;
            jdouble a2;
            jdouble a3;
            OffsetModel object((jobject) NULL);

            if (!parseArgs(args, "kIDD", ::org::orekit::time::DateComponents::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = OffsetModel(a0, a1, a2, a3));
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

      static PyObject *t_OffsetModel_getMJDRef(t_OffsetModel *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMJDRef());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OffsetModel_getOffset(t_OffsetModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOffset());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OffsetModel_getSlope(t_OffsetModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSlope());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OffsetModel_getStart(t_OffsetModel *self)
      {
        ::org::orekit::time::DateComponents result((jobject) NULL);
        OBJ_CALL(result = self->object.getStart());
        return ::org::orekit::time::t_DateComponents::wrap_Object(result);
      }

      static PyObject *t_OffsetModel_get__mJDRef(t_OffsetModel *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMJDRef());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_OffsetModel_get__offset(t_OffsetModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOffset());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OffsetModel_get__slope(t_OffsetModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSlope());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OffsetModel_get__start(t_OffsetModel *self, void *data)
      {
        ::org::orekit::time::DateComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getStart());
        return ::org::orekit::time::t_DateComponents::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *TideSystemProvider::class$ = NULL;
          jmethodID *TideSystemProvider::mids$ = NULL;
          bool TideSystemProvider::live$ = false;

          jclass TideSystemProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/TideSystemProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTideSystem_c68abf1ca1fc273e] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::TideSystem TideSystemProvider::getTideSystem() const
          {
            return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_c68abf1ca1fc273e]));
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
          static PyObject *t_TideSystemProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystemProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystemProvider_getTideSystem(t_TideSystemProvider *self);
          static PyObject *t_TideSystemProvider_get__tideSystem(t_TideSystemProvider *self, void *data);
          static PyGetSetDef t_TideSystemProvider__fields_[] = {
            DECLARE_GET_FIELD(t_TideSystemProvider, tideSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TideSystemProvider__methods_[] = {
            DECLARE_METHOD(t_TideSystemProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystemProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystemProvider, getTideSystem, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TideSystemProvider)[] = {
            { Py_tp_methods, t_TideSystemProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TideSystemProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TideSystemProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TideSystemProvider, t_TideSystemProvider, TideSystemProvider);

          void t_TideSystemProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(TideSystemProvider), &PY_TYPE_DEF(TideSystemProvider), module, "TideSystemProvider", 0);
          }

          void t_TideSystemProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "class_", make_descriptor(TideSystemProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "wrapfn_", make_descriptor(t_TideSystemProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TideSystemProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TideSystemProvider::initializeClass, 1)))
              return NULL;
            return t_TideSystemProvider::wrap_Object(TideSystemProvider(((t_TideSystemProvider *) arg)->object.this$));
          }
          static PyObject *t_TideSystemProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TideSystemProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TideSystemProvider_getTideSystem(t_TideSystemProvider *self)
          {
            ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
          }

          static PyObject *t_TideSystemProvider_get__tideSystem(t_TideSystemProvider *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TransformProviderUtils.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TransformProviderUtils::class$ = NULL;
      jmethodID *TransformProviderUtils::mids$ = NULL;
      bool TransformProviderUtils::live$ = false;
      ::org::orekit::frames::TransformProvider *TransformProviderUtils::IDENTITY_PROVIDER = NULL;

      jclass TransformProviderUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TransformProviderUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCombinedProvider_a7bb61a39f2f3398] = env->getStaticMethodID(cls, "getCombinedProvider", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/frames/TransformProvider;)Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getReversedProvider_b63c14ebdf355632] = env->getStaticMethodID(cls, "getReversedProvider", "(Lorg/orekit/frames/TransformProvider;)Lorg/orekit/frames/TransformProvider;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY_PROVIDER = new ::org::orekit::frames::TransformProvider(env->getStaticObjectField(cls, "IDENTITY_PROVIDER", "Lorg/orekit/frames/TransformProvider;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::TransformProvider TransformProviderUtils::getCombinedProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::frames::TransformProvider & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::TransformProvider(env->callStaticObjectMethod(cls, mids$[mid_getCombinedProvider_a7bb61a39f2f3398], a0.this$, a1.this$));
      }

      ::org::orekit::frames::TransformProvider TransformProviderUtils::getReversedProvider(const ::org::orekit::frames::TransformProvider & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::TransformProvider(env->callStaticObjectMethod(cls, mids$[mid_getReversedProvider_b63c14ebdf355632], a0.this$));
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
      static PyObject *t_TransformProviderUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProviderUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProviderUtils_getCombinedProvider(PyTypeObject *type, PyObject *args);
      static PyObject *t_TransformProviderUtils_getReversedProvider(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_TransformProviderUtils__methods_[] = {
        DECLARE_METHOD(t_TransformProviderUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, getCombinedProvider, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, getReversedProvider, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TransformProviderUtils)[] = {
        { Py_tp_methods, t_TransformProviderUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TransformProviderUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TransformProviderUtils, t_TransformProviderUtils, TransformProviderUtils);

      void t_TransformProviderUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(TransformProviderUtils), &PY_TYPE_DEF(TransformProviderUtils), module, "TransformProviderUtils", 0);
      }

      void t_TransformProviderUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "class_", make_descriptor(TransformProviderUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "wrapfn_", make_descriptor(t_TransformProviderUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(TransformProviderUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "IDENTITY_PROVIDER", make_descriptor(::org::orekit::frames::t_TransformProvider::wrap_Object(*TransformProviderUtils::IDENTITY_PROVIDER)));
      }

      static PyObject *t_TransformProviderUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TransformProviderUtils::initializeClass, 1)))
          return NULL;
        return t_TransformProviderUtils::wrap_Object(TransformProviderUtils(((t_TransformProviderUtils *) arg)->object.this$));
      }
      static PyObject *t_TransformProviderUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TransformProviderUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TransformProviderUtils_getCombinedProvider(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::frames::TransformProvider a1((jobject) NULL);
        ::org::orekit::frames::TransformProvider result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::TransformProviderUtils::getCombinedProvider(a0, a1));
          return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCombinedProvider", args);
        return NULL;
      }

      static PyObject *t_TransformProviderUtils_getReversedProvider(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::frames::TransformProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::TransformProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::TransformProviderUtils::getReversedProvider(a0));
          return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReversedProvider", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Sphere1D$NoSubSpaceException::class$ = NULL;
          jmethodID *Sphere1D$NoSubSpaceException::mids$ = NULL;
          bool Sphere1D$NoSubSpaceException::live$ = false;

          jclass Sphere1D$NoSubSpaceException::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Sphere1D$NoSubSpaceException::Sphere1D$NoSubSpaceException() : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
          static PyObject *t_Sphere1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Sphere1D$NoSubSpaceException_init_(t_Sphere1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_Sphere1D$NoSubSpaceException__methods_[] = {
            DECLARE_METHOD(t_Sphere1D$NoSubSpaceException, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D$NoSubSpaceException, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere1D$NoSubSpaceException)[] = {
            { Py_tp_methods, t_Sphere1D$NoSubSpaceException__methods_ },
            { Py_tp_init, (void *) t_Sphere1D$NoSubSpaceException_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere1D$NoSubSpaceException)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
            NULL
          };

          DEFINE_TYPE(Sphere1D$NoSubSpaceException, t_Sphere1D$NoSubSpaceException, Sphere1D$NoSubSpaceException);

          void t_Sphere1D$NoSubSpaceException::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere1D$NoSubSpaceException), &PY_TYPE_DEF(Sphere1D$NoSubSpaceException), module, "Sphere1D$NoSubSpaceException", 0);
          }

          void t_Sphere1D$NoSubSpaceException::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "class_", make_descriptor(Sphere1D$NoSubSpaceException::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "wrapfn_", make_descriptor(t_Sphere1D$NoSubSpaceException::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Sphere1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere1D$NoSubSpaceException::initializeClass, 1)))
              return NULL;
            return t_Sphere1D$NoSubSpaceException::wrap_Object(Sphere1D$NoSubSpaceException(((t_Sphere1D$NoSubSpaceException *) arg)->object.this$));
          }
          static PyObject *t_Sphere1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere1D$NoSubSpaceException::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Sphere1D$NoSubSpaceException_init_(t_Sphere1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds)
          {
            Sphere1D$NoSubSpaceException object((jobject) NULL);

            INT_CALL(object = Sphere1D$NoSubSpaceException());
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
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
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
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_distance_07bb97c2794cf6b1] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_f60f567ab8f0d599] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;Lorg/hipparchus/geometry/spherical/oned/S1Point;)D");
              mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_65c7d273e80d497a] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_dff5885c2c873297] = env->getMethodID(cls, "getAlpha", "()D");
              mids$[mid_getSpace_ebbd6b2d39ab0e4f] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getVector_73f627838730c264] = env->getMethodID(cls, "getVector", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NaN = new S1Point(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/spherical/oned/S1Point;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          S1Point::S1Point(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          jdouble S1Point::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_07bb97c2794cf6b1], a0.this$);
          }

          jdouble S1Point::distance(const S1Point & a0, const S1Point & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_f60f567ab8f0d599], a0.this$, a1.this$);
          }

          jboolean S1Point::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
          }

          jboolean S1Point::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_65c7d273e80d497a], a0.this$);
          }

          jdouble S1Point::getAlpha() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::Space S1Point::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_ebbd6b2d39ab0e4f]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D S1Point::getVector() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getVector_73f627838730c264]));
          }

          jint S1Point::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
          }

          jboolean S1Point::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
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
#include "org/orekit/frames/PythonItrfVersionProvider.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonItrfVersionProvider::class$ = NULL;
      jmethodID *PythonItrfVersionProvider::mids$ = NULL;
      bool PythonItrfVersionProvider::live$ = false;

      jclass PythonItrfVersionProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonItrfVersionProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getConfiguration_20c55d75fa126896] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonItrfVersionProvider::PythonItrfVersionProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonItrfVersionProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonItrfVersionProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonItrfVersionProvider::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonItrfVersionProvider_init_(t_PythonItrfVersionProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonItrfVersionProvider_finalize(t_PythonItrfVersionProvider *self);
      static PyObject *t_PythonItrfVersionProvider_pythonExtension(t_PythonItrfVersionProvider *self, PyObject *args);
      static jobject JNICALL t_PythonItrfVersionProvider_getConfiguration0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
      static void JNICALL t_PythonItrfVersionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonItrfVersionProvider_get__self(t_PythonItrfVersionProvider *self, void *data);
      static PyGetSetDef t_PythonItrfVersionProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonItrfVersionProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonItrfVersionProvider__methods_[] = {
        DECLARE_METHOD(t_PythonItrfVersionProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonItrfVersionProvider)[] = {
        { Py_tp_methods, t_PythonItrfVersionProvider__methods_ },
        { Py_tp_init, (void *) t_PythonItrfVersionProvider_init_ },
        { Py_tp_getset, t_PythonItrfVersionProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonItrfVersionProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonItrfVersionProvider, t_PythonItrfVersionProvider, PythonItrfVersionProvider);

      void t_PythonItrfVersionProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonItrfVersionProvider), &PY_TYPE_DEF(PythonItrfVersionProvider), module, "PythonItrfVersionProvider", 1);
      }

      void t_PythonItrfVersionProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "class_", make_descriptor(PythonItrfVersionProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "wrapfn_", make_descriptor(t_PythonItrfVersionProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonItrfVersionProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;", (void *) t_PythonItrfVersionProvider_getConfiguration0 },
          { "pythonDecRef", "()V", (void *) t_PythonItrfVersionProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonItrfVersionProvider::initializeClass, 1)))
          return NULL;
        return t_PythonItrfVersionProvider::wrap_Object(PythonItrfVersionProvider(((t_PythonItrfVersionProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonItrfVersionProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonItrfVersionProvider_init_(t_PythonItrfVersionProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonItrfVersionProvider object((jobject) NULL);

        INT_CALL(object = PythonItrfVersionProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonItrfVersionProvider_finalize(t_PythonItrfVersionProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonItrfVersionProvider_pythonExtension(t_PythonItrfVersionProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonItrfVersionProvider_getConfiguration0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getConfiguration", "Oi", o0, (int) a1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, &value))
        {
          throwTypeError("getConfiguration", result);
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

      static void JNICALL t_PythonItrfVersionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonItrfVersionProvider_get__self(t_PythonItrfVersionProvider *self, void *data)
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
#include "org/hipparchus/stat/inference/BinomialTest.h"
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *BinomialTest::class$ = NULL;
        jmethodID *BinomialTest::mids$ = NULL;
        bool BinomialTest::live$ = false;

        jclass BinomialTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/BinomialTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_binomialTest_ca88065b5070c7c9] = env->getMethodID(cls, "binomialTest", "(IIDLorg/hipparchus/stat/inference/AlternativeHypothesis;)D");
            mids$[mid_binomialTest_b26c4075b34737c4] = env->getMethodID(cls, "binomialTest", "(IIDLorg/hipparchus/stat/inference/AlternativeHypothesis;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BinomialTest::BinomialTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble BinomialTest::binomialTest(jint a0, jint a1, jdouble a2, const ::org::hipparchus::stat::inference::AlternativeHypothesis & a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_binomialTest_ca88065b5070c7c9], a0, a1, a2, a3.this$);
        }

        jboolean BinomialTest::binomialTest(jint a0, jint a1, jdouble a2, const ::org::hipparchus::stat::inference::AlternativeHypothesis & a3, jdouble a4) const
        {
          return env->callBooleanMethod(this$, mids$[mid_binomialTest_b26c4075b34737c4], a0, a1, a2, a3.this$, a4);
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
      namespace inference {
        static PyObject *t_BinomialTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BinomialTest_init_(t_BinomialTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BinomialTest_binomialTest(t_BinomialTest *self, PyObject *args);

        static PyMethodDef t_BinomialTest__methods_[] = {
          DECLARE_METHOD(t_BinomialTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialTest, binomialTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BinomialTest)[] = {
          { Py_tp_methods, t_BinomialTest__methods_ },
          { Py_tp_init, (void *) t_BinomialTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BinomialTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BinomialTest, t_BinomialTest, BinomialTest);

        void t_BinomialTest::install(PyObject *module)
        {
          installType(&PY_TYPE(BinomialTest), &PY_TYPE_DEF(BinomialTest), module, "BinomialTest", 0);
        }

        void t_BinomialTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "class_", make_descriptor(BinomialTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "wrapfn_", make_descriptor(t_BinomialTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BinomialTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BinomialTest::initializeClass, 1)))
            return NULL;
          return t_BinomialTest::wrap_Object(BinomialTest(((t_BinomialTest *) arg)->object.this$));
        }
        static PyObject *t_BinomialTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BinomialTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BinomialTest_init_(t_BinomialTest *self, PyObject *args, PyObject *kwds)
        {
          BinomialTest object((jobject) NULL);

          INT_CALL(object = BinomialTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_BinomialTest_binomialTest(t_BinomialTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              jint a1;
              jdouble a2;
              ::org::hipparchus::stat::inference::AlternativeHypothesis a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble result;

              if (!parseArgs(args, "IIDK", ::org::hipparchus::stat::inference::AlternativeHypothesis::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::stat::inference::t_AlternativeHypothesis::parameters_))
              {
                OBJ_CALL(result = self->object.binomialTest(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              jint a1;
              jdouble a2;
              ::org::hipparchus::stat::inference::AlternativeHypothesis a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jboolean result;

              if (!parseArgs(args, "IIDKD", ::org::hipparchus::stat::inference::AlternativeHypothesis::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::stat::inference::t_AlternativeHypothesis::parameters_, &a4))
              {
                OBJ_CALL(result = self->object.binomialTest(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "binomialTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarC.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarC::class$ = NULL;
          jmethodID *FieldCopolarC::mids$ = NULL;
          bool FieldCopolarC::live$ = false;

          jclass FieldCopolarC::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarC");

              mids$ = new jmethodID[max_mid];
              mids$[mid_dc_eba8e72a22c984ac] = env->getMethodID(cls, "dc", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_nc_eba8e72a22c984ac] = env->getMethodID(cls, "nc", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sc_eba8e72a22c984ac] = env->getMethodID(cls, "sc", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::dc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dc_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::nc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_nc_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::sc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sc_eba8e72a22c984ac]));
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
          static PyObject *t_FieldCopolarC_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarC_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarC_of_(t_FieldCopolarC *self, PyObject *args);
          static PyObject *t_FieldCopolarC_dc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_nc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_sc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_get__parameters_(t_FieldCopolarC *self, void *data);
          static PyGetSetDef t_FieldCopolarC__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarC, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarC__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarC, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarC, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarC, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarC, dc, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarC, nc, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarC, sc, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarC)[] = {
            { Py_tp_methods, t_FieldCopolarC__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarC__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarC)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarC, t_FieldCopolarC, FieldCopolarC);
          PyObject *t_FieldCopolarC::wrap_Object(const FieldCopolarC& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarC::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarC *self = (t_FieldCopolarC *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarC::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarC::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarC *self = (t_FieldCopolarC *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarC::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarC), &PY_TYPE_DEF(FieldCopolarC), module, "FieldCopolarC", 0);
          }

          void t_FieldCopolarC::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "class_", make_descriptor(FieldCopolarC::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "wrapfn_", make_descriptor(t_FieldCopolarC::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarC_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarC::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarC::wrap_Object(FieldCopolarC(((t_FieldCopolarC *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarC_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarC::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarC_of_(t_FieldCopolarC *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarC_dc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.dc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarC_nc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.nc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarC_sc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarC_get__parameters_(t_FieldCopolarC *self, void *data)
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
#include "org/orekit/gnss/attitude/PythonGNSSAttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *PythonGNSSAttitudeProvider::class$ = NULL;
        jmethodID *PythonGNSSAttitudeProvider::mids$ = NULL;
        bool PythonGNSSAttitudeProvider::live$ = false;

        jclass PythonGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/PythonGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
            mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_validityEnd_85703d13e302437e] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_85703d13e302437e] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGNSSAttitudeProvider::PythonGNSSAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonGNSSAttitudeProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonGNSSAttitudeProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonGNSSAttitudeProvider::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace attitude {
        static PyObject *t_PythonGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonGNSSAttitudeProvider_init_(t_PythonGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonGNSSAttitudeProvider_finalize(t_PythonGNSSAttitudeProvider *self);
        static PyObject *t_PythonGNSSAttitudeProvider_pythonExtension(t_PythonGNSSAttitudeProvider *self, PyObject *args);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonGNSSAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityEnd3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityStart4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonGNSSAttitudeProvider_get__self(t_PythonGNSSAttitudeProvider *self, void *data);
        static PyGetSetDef t_PythonGNSSAttitudeProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonGNSSAttitudeProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_PythonGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) t_PythonGNSSAttitudeProvider_init_ },
          { Py_tp_getset, t_PythonGNSSAttitudeProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonGNSSAttitudeProvider, t_PythonGNSSAttitudeProvider, PythonGNSSAttitudeProvider);

        void t_PythonGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonGNSSAttitudeProvider), &PY_TYPE_DEF(PythonGNSSAttitudeProvider), module, "PythonGNSSAttitudeProvider", 1);
        }

        void t_PythonGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "class_", make_descriptor(PythonGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_PythonGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonGNSSAttitudeProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonGNSSAttitudeProvider_getAttitude0 },
            { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonGNSSAttitudeProvider_getAttitude1 },
            { "pythonDecRef", "()V", (void *) t_PythonGNSSAttitudeProvider_pythonDecRef2 },
            { "validityEnd", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonGNSSAttitudeProvider_validityEnd3 },
            { "validityStart", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonGNSSAttitudeProvider_validityStart4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_PythonGNSSAttitudeProvider::wrap_Object(PythonGNSSAttitudeProvider(((t_PythonGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonGNSSAttitudeProvider_init_(t_PythonGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonGNSSAttitudeProvider object((jobject) NULL);

          INT_CALL(object = PythonGNSSAttitudeProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonGNSSAttitudeProvider_finalize(t_PythonGNSSAttitudeProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonGNSSAttitudeProvider_pythonExtension(t_PythonGNSSAttitudeProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::Attitude value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
          {
            throwTypeError("getAttitude", result);
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
          {
            throwTypeError("getAttitude", result);
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

        static void JNICALL t_PythonGNSSAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityEnd3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "validityEnd", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("validityEnd", result);
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityStart4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "validityStart", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("validityStart", result);
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

        static PyObject *t_PythonGNSSAttitudeProvider_get__self(t_PythonGNSSAttitudeProvider *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiTheta.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldTheta.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_072c8635f2164db9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_getQ_eba8e72a22c984ac] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_values_2f1d8d2235142141] = env->getMethodID(cls, "values", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldTheta;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldJacobiTheta::FieldJacobiTheta(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_072c8635f2164db9, a0.this$)) {}

          ::org::hipparchus::CalculusFieldElement FieldJacobiTheta::getQ() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ_eba8e72a22c984ac]));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldTheta FieldJacobiTheta::values(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldTheta(env->callObjectMethod(this$, mids$[mid_values_2f1d8d2235142141], a0.this$));
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
#include "org/hipparchus/geometry/hull/ConvexHullGenerator.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace hull {

        ::java::lang::Class *ConvexHullGenerator::class$ = NULL;
        jmethodID *ConvexHullGenerator::mids$ = NULL;
        bool ConvexHullGenerator::live$ = false;

        jclass ConvexHullGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/hull/ConvexHullGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_generate_260317b8afde2c5b] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/hull/ConvexHull;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::hull::ConvexHull ConvexHullGenerator::generate(const ::java::util::Collection & a0) const
        {
          return ::org::hipparchus::geometry::hull::ConvexHull(env->callObjectMethod(this$, mids$[mid_generate_260317b8afde2c5b], a0.this$));
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
      namespace hull {
        static PyObject *t_ConvexHullGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_of_(t_ConvexHullGenerator *self, PyObject *args);
        static PyObject *t_ConvexHullGenerator_generate(t_ConvexHullGenerator *self, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_get__parameters_(t_ConvexHullGenerator *self, void *data);
        static PyGetSetDef t_ConvexHullGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_ConvexHullGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConvexHullGenerator__methods_[] = {
          DECLARE_METHOD(t_ConvexHullGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHullGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHullGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ConvexHullGenerator, generate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConvexHullGenerator)[] = {
          { Py_tp_methods, t_ConvexHullGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ConvexHullGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConvexHullGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConvexHullGenerator, t_ConvexHullGenerator, ConvexHullGenerator);
        PyObject *t_ConvexHullGenerator::wrap_Object(const ConvexHullGenerator& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHullGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHullGenerator *self = (t_ConvexHullGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_ConvexHullGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHullGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHullGenerator *self = (t_ConvexHullGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_ConvexHullGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(ConvexHullGenerator), &PY_TYPE_DEF(ConvexHullGenerator), module, "ConvexHullGenerator", 0);
        }

        void t_ConvexHullGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "class_", make_descriptor(ConvexHullGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "wrapfn_", make_descriptor(t_ConvexHullGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConvexHullGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConvexHullGenerator::initializeClass, 1)))
            return NULL;
          return t_ConvexHullGenerator::wrap_Object(ConvexHullGenerator(((t_ConvexHullGenerator *) arg)->object.this$));
        }
        static PyObject *t_ConvexHullGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConvexHullGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ConvexHullGenerator_of_(t_ConvexHullGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ConvexHullGenerator_generate(t_ConvexHullGenerator *self, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::hull::ConvexHull result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.generate(a0));
            return ::org::hipparchus::geometry::hull::t_ConvexHull::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "generate", arg);
          return NULL;
        }
        static PyObject *t_ConvexHullGenerator_get__parameters_(t_ConvexHullGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SparseRealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseRealMatrix::class$ = NULL;
      jmethodID *SparseRealMatrix::mids$ = NULL;
      bool SparseRealMatrix::live$ = false;

      jclass SparseRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseRealMatrix");

          class$ = new ::java::lang::Class(cls);
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
  namespace hipparchus {
    namespace linear {
      static PyObject *t_SparseRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseRealMatrix_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_SparseRealMatrix__methods_[] = {
        DECLARE_METHOD(t_SparseRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseRealMatrix, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseRealMatrix)[] = {
        { Py_tp_methods, t_SparseRealMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::RealMatrix),
        NULL
      };

      DEFINE_TYPE(SparseRealMatrix, t_SparseRealMatrix, SparseRealMatrix);

      void t_SparseRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseRealMatrix), &PY_TYPE_DEF(SparseRealMatrix), module, "SparseRealMatrix", 0);
      }

      void t_SparseRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealMatrix), "class_", make_descriptor(SparseRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealMatrix), "wrapfn_", make_descriptor(t_SparseRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseRealMatrix::initializeClass, 1)))
          return NULL;
        return t_SparseRealMatrix::wrap_Object(SparseRealMatrix(((t_SparseRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_SparseRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToSensorMapping.h"
#include "java/util/Map$Entry.h"
#include "java/util/List.h"
#include "java/lang/Double.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorToSensorMapping::class$ = NULL;
          jmethodID *SensorToSensorMapping::mids$ = NULL;
          bool SensorToSensorMapping::live$ = false;

          jclass SensorToSensorMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorToSensorMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6a2001eff0605f71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_d68f2e10a4896937] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;D)V");
              mids$[mid_init$_984b533a39fac42d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_58fc3ae6a88fe4e7] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;D)V");
              mids$[mid_addMapping_c2c81f5deb5307ee] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Double;)V");
              mids$[mid_addMapping_8615aa873d4ae124] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Double;Ljava/lang/Double;)V");
              mids$[mid_getBodyConstraintWeight_dff5885c2c873297] = env->getMethodID(cls, "getBodyConstraintWeight", "()D");
              mids$[mid_getBodyDistance_7f1e975667450bdc] = env->getMethodID(cls, "getBodyDistance", "(I)Ljava/lang/Double;");
              mids$[mid_getBodyDistances_2afa36052df4765d] = env->getMethodID(cls, "getBodyDistances", "()Ljava/util/List;");
              mids$[mid_getLosDistance_7f1e975667450bdc] = env->getMethodID(cls, "getLosDistance", "(I)Ljava/lang/Double;");
              mids$[mid_getLosDistances_2afa36052df4765d] = env->getMethodID(cls, "getLosDistances", "()Ljava/util/List;");
              mids$[mid_getMapping_015730311a5bacdc] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedNameA_11b109bd155ca898] = env->getMethodID(cls, "getRuggedNameA", "()Ljava/lang/String;");
              mids$[mid_getRuggedNameB_11b109bd155ca898] = env->getMethodID(cls, "getRuggedNameB", "()Ljava/lang/String;");
              mids$[mid_getSensorNameA_11b109bd155ca898] = env->getMethodID(cls, "getSensorNameA", "()Ljava/lang/String;");
              mids$[mid_getSensorNameB_11b109bd155ca898] = env->getMethodID(cls, "getSensorNameB", "()Ljava/lang/String;");
              mids$[mid_setBodyConstraintWeight_17db3a65980d3441] = env->getMethodID(cls, "setBodyConstraintWeight", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a2001eff0605f71, a0.this$, a1.this$)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d68f2e10a4896937, a0.this$, a1.this$, a2)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_984b533a39fac42d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_58fc3ae6a88fe4e7, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

          void SensorToSensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::rugged::linesensor::SensorPixel & a1, const ::java::lang::Double & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_c2c81f5deb5307ee], a0.this$, a1.this$, a2.this$);
          }

          void SensorToSensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::rugged::linesensor::SensorPixel & a1, const ::java::lang::Double & a2, const ::java::lang::Double & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_8615aa873d4ae124], a0.this$, a1.this$, a2.this$, a3.this$);
          }

          jdouble SensorToSensorMapping::getBodyConstraintWeight() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBodyConstraintWeight_dff5885c2c873297]);
          }

          ::java::lang::Double SensorToSensorMapping::getBodyDistance(jint a0) const
          {
            return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_getBodyDistance_7f1e975667450bdc], a0));
          }

          ::java::util::List SensorToSensorMapping::getBodyDistances() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBodyDistances_2afa36052df4765d]));
          }

          ::java::lang::Double SensorToSensorMapping::getLosDistance(jint a0) const
          {
            return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_getLosDistance_7f1e975667450bdc], a0));
          }

          ::java::util::List SensorToSensorMapping::getLosDistances() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLosDistances_2afa36052df4765d]));
          }

          ::java::util::Set SensorToSensorMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_015730311a5bacdc]));
          }

          ::java::lang::String SensorToSensorMapping::getRuggedNameA() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedNameA_11b109bd155ca898]));
          }

          ::java::lang::String SensorToSensorMapping::getRuggedNameB() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedNameB_11b109bd155ca898]));
          }

          ::java::lang::String SensorToSensorMapping::getSensorNameA() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorNameA_11b109bd155ca898]));
          }

          ::java::lang::String SensorToSensorMapping::getSensorNameB() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorNameB_11b109bd155ca898]));
          }

          void SensorToSensorMapping::setBodyConstraintWeight(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setBodyConstraintWeight_17db3a65980d3441], a0);
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
      namespace adjustment {
        namespace measurements {
          static PyObject *t_SensorToSensorMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SensorToSensorMapping_init_(t_SensorToSensorMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorToSensorMapping_addMapping(t_SensorToSensorMapping *self, PyObject *args);
          static PyObject *t_SensorToSensorMapping_getBodyConstraintWeight(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getBodyDistance(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_getBodyDistances(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getLosDistance(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_getLosDistances(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getMapping(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getRuggedNameA(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getRuggedNameB(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getSensorNameA(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getSensorNameB(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_setBodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_get__bodyConstraintWeight(t_SensorToSensorMapping *self, void *data);
          static int t_SensorToSensorMapping_set__bodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg, void *data);
          static PyObject *t_SensorToSensorMapping_get__bodyDistances(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__losDistances(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__mapping(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__ruggedNameA(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__ruggedNameB(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__sensorNameA(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__sensorNameB(t_SensorToSensorMapping *self, void *data);
          static PyGetSetDef t_SensorToSensorMapping__fields_[] = {
            DECLARE_GETSET_FIELD(t_SensorToSensorMapping, bodyConstraintWeight),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, bodyDistances),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, losDistances),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, mapping),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, ruggedNameA),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, ruggedNameB),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, sensorNameA),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, sensorNameB),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorToSensorMapping__methods_[] = {
            DECLARE_METHOD(t_SensorToSensorMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToSensorMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToSensorMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyConstraintWeight, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyDistance, METH_O),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyDistances, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getLosDistance, METH_O),
            DECLARE_METHOD(t_SensorToSensorMapping, getLosDistances, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getRuggedNameA, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getRuggedNameB, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getSensorNameA, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getSensorNameB, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, setBodyConstraintWeight, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorToSensorMapping)[] = {
            { Py_tp_methods, t_SensorToSensorMapping__methods_ },
            { Py_tp_init, (void *) t_SensorToSensorMapping_init_ },
            { Py_tp_getset, t_SensorToSensorMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorToSensorMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorToSensorMapping, t_SensorToSensorMapping, SensorToSensorMapping);

          void t_SensorToSensorMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorToSensorMapping), &PY_TYPE_DEF(SensorToSensorMapping), module, "SensorToSensorMapping", 0);
          }

          void t_SensorToSensorMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "class_", make_descriptor(SensorToSensorMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "wrapfn_", make_descriptor(t_SensorToSensorMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorToSensorMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorToSensorMapping::initializeClass, 1)))
              return NULL;
            return t_SensorToSensorMapping::wrap_Object(SensorToSensorMapping(((t_SensorToSensorMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorToSensorMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorToSensorMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SensorToSensorMapping_init_(t_SensorToSensorMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                jdouble a2;
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssD", &a0, &a1, &a2))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2));
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
                ::java::lang::String a3((jobject) NULL);
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssss", &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                jdouble a4;
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssssD", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2, a3, a4));
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

          static PyObject *t_SensorToSensorMapping_addMapping(t_SensorToSensorMapping *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
                ::org::orekit::rugged::linesensor::SensorPixel a1((jobject) NULL);
                ::java::lang::Double a2((jobject) NULL);

                if (!parseArgs(args, "kkO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::java::lang::PY_TYPE(Double), &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.addMapping(a0, a1, a2));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 4:
              {
                ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
                ::org::orekit::rugged::linesensor::SensorPixel a1((jobject) NULL);
                ::java::lang::Double a2((jobject) NULL);
                ::java::lang::Double a3((jobject) NULL);

                if (!parseArgs(args, "kkOO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::java::lang::PY_TYPE(Double), ::java::lang::PY_TYPE(Double), &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(self->object.addMapping(a0, a1, a2, a3));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getBodyConstraintWeight(t_SensorToSensorMapping *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBodyConstraintWeight());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SensorToSensorMapping_getBodyDistance(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jint a0;
            ::java::lang::Double result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getBodyDistance(a0));
              return ::java::lang::t_Double::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getBodyDistance", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getBodyDistances(t_SensorToSensorMapping *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBodyDistances());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_SensorToSensorMapping_getLosDistance(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jint a0;
            ::java::lang::Double result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getLosDistance(a0));
              return ::java::lang::t_Double::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getLosDistance", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getLosDistances(t_SensorToSensorMapping *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getLosDistances());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_SensorToSensorMapping_getMapping(t_SensorToSensorMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorToSensorMapping_getRuggedNameA(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedNameA());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getRuggedNameB(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedNameB());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getSensorNameA(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorNameA());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getSensorNameB(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorNameB());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_setBodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setBodyConstraintWeight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setBodyConstraintWeight", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_get__bodyConstraintWeight(t_SensorToSensorMapping *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBodyConstraintWeight());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SensorToSensorMapping_set__bodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setBodyConstraintWeight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "bodyConstraintWeight", arg);
            return -1;
          }

          static PyObject *t_SensorToSensorMapping_get__bodyDistances(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBodyDistances());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__losDistances(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getLosDistances());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__mapping(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__ruggedNameA(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedNameA());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__ruggedNameB(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedNameB());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__sensorNameA(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorNameA());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__sensorNameB(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorNameB());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldVector::class$ = NULL;
      jmethodID *FieldVector::mids$ = NULL;
      bool FieldVector::live$ = false;

      jclass FieldVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_a657ce460dba8c79] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_ca6f118471875f79] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_a657ce460dba8c79] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_34cb9002c167d93d] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_5546fa4eea5fe461] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_a657ce460dba8c79] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_a657ce460dba8c79] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_ffcdb6600dc6671a] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_cf350b5e44ab330d] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAdd_ca6f118471875f79] = env->getMethodID(cls, "mapAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAddToSelf_ca6f118471875f79] = env->getMethodID(cls, "mapAddToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivide_ca6f118471875f79] = env->getMethodID(cls, "mapDivide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivideToSelf_ca6f118471875f79] = env->getMethodID(cls, "mapDivideToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInv_34cb9002c167d93d] = env->getMethodID(cls, "mapInv", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInvToSelf_34cb9002c167d93d] = env->getMethodID(cls, "mapInvToSelf", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiply_ca6f118471875f79] = env->getMethodID(cls, "mapMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiplyToSelf_ca6f118471875f79] = env->getMethodID(cls, "mapMultiplyToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtract_ca6f118471875f79] = env->getMethodID(cls, "mapSubtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtractToSelf_ca6f118471875f79] = env->getMethodID(cls, "mapSubtractToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_outerProduct_02f30c6e86c806f6] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_a657ce460dba8c79] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_f96eb0f00086e90d] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setEntry_2c97e4718ab5a1ad] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_0c5a38a1f7c3f4d4] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_a657ce460dba8c79] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_cbac806c384cdbe1] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldVector FieldVector::add(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_add_a657ce460dba8c79], a0.this$));
      }

      FieldVector FieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_append_ca6f118471875f79], a0.this$));
      }

      FieldVector FieldVector::append(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_append_a657ce460dba8c79], a0.this$));
      }

      FieldVector FieldVector::copy() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_copy_34cb9002c167d93d]));
      }

      ::org::hipparchus::FieldElement FieldVector::dotProduct(const FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_5546fa4eea5fe461], a0.this$));
      }

      FieldVector FieldVector::ebeDivide(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_a657ce460dba8c79], a0.this$));
      }

      FieldVector FieldVector::ebeMultiply(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_a657ce460dba8c79], a0.this$));
      }

      jint FieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::FieldElement FieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_ffcdb6600dc6671a], a0));
      }

      ::org::hipparchus::Field FieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
      }

      FieldVector FieldVector::getSubVector(jint a0, jint a1) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_cf350b5e44ab330d], a0, a1));
      }

      FieldVector FieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_ca6f118471875f79], a0.this$));
      }

      FieldVector FieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_ca6f118471875f79], a0.this$));
      }

      FieldVector FieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_ca6f118471875f79], a0.this$));
      }

      FieldVector FieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_ca6f118471875f79], a0.this$));
      }

      FieldVector FieldVector::mapInv() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_34cb9002c167d93d]));
      }

      FieldVector FieldVector::mapInvToSelf() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_34cb9002c167d93d]));
      }

      FieldVector FieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_ca6f118471875f79], a0.this$));
      }

      FieldVector FieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_ca6f118471875f79], a0.this$));
      }

      FieldVector FieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_ca6f118471875f79], a0.this$));
      }

      FieldVector FieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix FieldVector::outerProduct(const FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_02f30c6e86c806f6], a0.this$));
      }

      FieldVector FieldVector::projection(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_projection_a657ce460dba8c79], a0.this$));
      }

      void FieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_f96eb0f00086e90d], a0.this$);
      }

      void FieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_2c97e4718ab5a1ad], a0, a1.this$);
      }

      void FieldVector::setSubVector(jint a0, const FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_0c5a38a1f7c3f4d4], a0, a1.this$);
      }

      FieldVector FieldVector::subtract(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_a657ce460dba8c79], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > FieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_cbac806c384cdbe1]));
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
      static PyObject *t_FieldVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVector_of_(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_add(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_append(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_copy(t_FieldVector *self);
      static PyObject *t_FieldVector_dotProduct(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_ebeDivide(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_ebeMultiply(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_getDimension(t_FieldVector *self);
      static PyObject *t_FieldVector_getEntry(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_getField(t_FieldVector *self);
      static PyObject *t_FieldVector_getSubVector(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_mapAdd(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapAddToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapDivide(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapDivideToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapInv(t_FieldVector *self);
      static PyObject *t_FieldVector_mapInvToSelf(t_FieldVector *self);
      static PyObject *t_FieldVector_mapMultiply(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapMultiplyToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapSubtract(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapSubtractToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_outerProduct(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_projection(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_set(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_setEntry(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_setSubVector(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_subtract(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_toArray(t_FieldVector *self);
      static PyObject *t_FieldVector_get__dimension(t_FieldVector *self, void *data);
      static PyObject *t_FieldVector_get__field(t_FieldVector *self, void *data);
      static PyObject *t_FieldVector_get__parameters_(t_FieldVector *self, void *data);
      static PyGetSetDef t_FieldVector__fields_[] = {
        DECLARE_GET_FIELD(t_FieldVector, dimension),
        DECLARE_GET_FIELD(t_FieldVector, field),
        DECLARE_GET_FIELD(t_FieldVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldVector__methods_[] = {
        DECLARE_METHOD(t_FieldVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, add, METH_O),
        DECLARE_METHOD(t_FieldVector, append, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, dotProduct, METH_O),
        DECLARE_METHOD(t_FieldVector, ebeDivide, METH_O),
        DECLARE_METHOD(t_FieldVector, ebeMultiply, METH_O),
        DECLARE_METHOD(t_FieldVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, getEntry, METH_O),
        DECLARE_METHOD(t_FieldVector, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, mapAdd, METH_O),
        DECLARE_METHOD(t_FieldVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapDivide, METH_O),
        DECLARE_METHOD(t_FieldVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapInv, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, mapInvToSelf, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_FieldVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_FieldVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, outerProduct, METH_O),
        DECLARE_METHOD(t_FieldVector, projection, METH_O),
        DECLARE_METHOD(t_FieldVector, set, METH_O),
        DECLARE_METHOD(t_FieldVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, subtract, METH_O),
        DECLARE_METHOD(t_FieldVector, toArray, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldVector)[] = {
        { Py_tp_methods, t_FieldVector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldVector, t_FieldVector, FieldVector);
      PyObject *t_FieldVector::wrap_Object(const FieldVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVector *self = (t_FieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVector *self = (t_FieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldVector::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldVector), &PY_TYPE_DEF(FieldVector), module, "FieldVector", 0);
      }

      void t_FieldVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "class_", make_descriptor(FieldVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "wrapfn_", make_descriptor(t_FieldVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldVector::initializeClass, 1)))
          return NULL;
        return t_FieldVector::wrap_Object(FieldVector(((t_FieldVector *) arg)->object.this$));
      }
      static PyObject *t_FieldVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldVector_of_(t_FieldVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldVector_add(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_append(t_FieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_FieldVector_copy(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_dotProduct(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_ebeDivide(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_ebeMultiply(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_getDimension(t_FieldVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldVector_getEntry(t_FieldVector *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_getField(t_FieldVector *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_getSubVector(t_FieldVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        FieldVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_FieldVector_mapAdd(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapAddToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapDivide(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapDivideToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapInv(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInv());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_mapInvToSelf(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInvToSelf());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_mapMultiply(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapMultiplyToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapSubtract(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapSubtractToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_outerProduct(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.outerProduct(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_projection(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.projection(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "projection", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_set(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "set", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_setEntry(t_FieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_FieldVector_setSubVector(t_FieldVector *self, PyObject *args)
      {
        jint a0;
        FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", FieldVector::initializeClass, &a0, &a1, &p1, t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_FieldVector_subtract(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_toArray(t_FieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }
      static PyObject *t_FieldVector_get__parameters_(t_FieldVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldVector_get__dimension(t_FieldVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldVector_get__field(t_FieldVector *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/SolarRadiationPressure.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *SolarRadiationPressure::class$ = NULL;
        jmethodID *SolarRadiationPressure::mids$ = NULL;
        bool SolarRadiationPressure::live$ = false;

        jclass SolarRadiationPressure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/SolarRadiationPressure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_eb8e6d3dab9933fd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;)V");
            mids$[mid_init$_a14707e8e69d92fb] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;)V");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLightingRatio_41a008afe53da855] = env->getMethodID(cls, "getLightingRatio", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getLightingRatio_432f3d328c15ec82] = env->getMethodID(cls, "getLightingRatio", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolarRadiationPressure::SolarRadiationPressure(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::orekit::forces::radiation::RadiationSensitive & a2) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_eb8e6d3dab9933fd, a0.this$, a1.this$, a2.this$)) {}

        SolarRadiationPressure::SolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, const ::org::orekit::forces::radiation::RadiationSensitive & a4) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_a14707e8e69d92fb, a0, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SolarRadiationPressure::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SolarRadiationPressure::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        ::org::hipparchus::CalculusFieldElement SolarRadiationPressure::getLightingRatio(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLightingRatio_41a008afe53da855], a0.this$));
        }

        jdouble SolarRadiationPressure::getLightingRatio(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLightingRatio_432f3d328c15ec82], a0.this$);
        }

        ::java::util::List SolarRadiationPressure::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
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
      namespace radiation {
        static PyObject *t_SolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SolarRadiationPressure_init_(t_SolarRadiationPressure *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SolarRadiationPressure_acceleration(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_getLightingRatio(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_getParametersDrivers(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_get__parametersDrivers(t_SolarRadiationPressure *self, void *data);
        static PyGetSetDef t_SolarRadiationPressure__fields_[] = {
          DECLARE_GET_FIELD(t_SolarRadiationPressure, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SolarRadiationPressure__methods_[] = {
          DECLARE_METHOD(t_SolarRadiationPressure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolarRadiationPressure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolarRadiationPressure, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SolarRadiationPressure, getLightingRatio, METH_VARARGS),
          DECLARE_METHOD(t_SolarRadiationPressure, getParametersDrivers, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SolarRadiationPressure)[] = {
          { Py_tp_methods, t_SolarRadiationPressure__methods_ },
          { Py_tp_init, (void *) t_SolarRadiationPressure_init_ },
          { Py_tp_getset, t_SolarRadiationPressure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SolarRadiationPressure)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::radiation::AbstractRadiationForceModel),
          NULL
        };

        DEFINE_TYPE(SolarRadiationPressure, t_SolarRadiationPressure, SolarRadiationPressure);

        void t_SolarRadiationPressure::install(PyObject *module)
        {
          installType(&PY_TYPE(SolarRadiationPressure), &PY_TYPE_DEF(SolarRadiationPressure), module, "SolarRadiationPressure", 0);
        }

        void t_SolarRadiationPressure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "class_", make_descriptor(SolarRadiationPressure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "wrapfn_", make_descriptor(t_SolarRadiationPressure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SolarRadiationPressure::initializeClass, 1)))
            return NULL;
          return t_SolarRadiationPressure::wrap_Object(SolarRadiationPressure(((t_SolarRadiationPressure *) arg)->object.this$));
        }
        static PyObject *t_SolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SolarRadiationPressure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SolarRadiationPressure_init_(t_SolarRadiationPressure *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a2((jobject) NULL);
              SolarRadiationPressure object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SolarRadiationPressure(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
              ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a4((jobject) NULL);
              SolarRadiationPressure object((jobject) NULL);

              if (!parseArgs(args, "DDkkk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = SolarRadiationPressure(a0, a1, a2, a3, a4));
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

        static PyObject *t_SolarRadiationPressure_acceleration(t_SolarRadiationPressure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          return callSuper(PY_TYPE(SolarRadiationPressure), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_SolarRadiationPressure_getLightingRatio(t_SolarRadiationPressure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(result = self->object.getLightingRatio(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getLightingRatio(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLightingRatio", args);
          return NULL;
        }

        static PyObject *t_SolarRadiationPressure_getParametersDrivers(t_SolarRadiationPressure *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(SolarRadiationPressure), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_SolarRadiationPressure_get__parametersDrivers(t_SolarRadiationPressure *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/data/PythonAbstractSolarActivityData.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *PythonAbstractSolarActivityData::class$ = NULL;
            jmethodID *PythonAbstractSolarActivityData::mids$ = NULL;
            bool PythonAbstractSolarActivityData::live$ = false;

            jclass PythonAbstractSolarActivityData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/PythonAbstractSolarActivityData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d1f1c08df6ac1f50] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_get24HoursKp_bf1d7732f1acb697] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_2b9aa40de0a696a4] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getInstantFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getThreeHourlyKP_bf1d7732f1acb697] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractSolarActivityData::PythonAbstractSolarActivityData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_d1f1c08df6ac1f50, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7)) {}

            void PythonAbstractSolarActivityData::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonAbstractSolarActivityData::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonAbstractSolarActivityData::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_PythonAbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractSolarActivityData_of_(t_PythonAbstractSolarActivityData *self, PyObject *args);
            static int t_PythonAbstractSolarActivityData_init_(t_PythonAbstractSolarActivityData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractSolarActivityData_finalize(t_PythonAbstractSolarActivityData *self);
            static PyObject *t_PythonAbstractSolarActivityData_pythonExtension(t_PythonAbstractSolarActivityData *self, PyObject *args);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonAbstractSolarActivityData_getAp1(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getAverageFlux2(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getDailyFlux3(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getInstantFlux4(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getMeanFlux5(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getThreeHourlyKP6(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonAbstractSolarActivityData_pythonDecRef7(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonAbstractSolarActivityData_get__self(t_PythonAbstractSolarActivityData *self, void *data);
            static PyObject *t_PythonAbstractSolarActivityData_get__parameters_(t_PythonAbstractSolarActivityData *self, void *data);
            static PyGetSetDef t_PythonAbstractSolarActivityData__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractSolarActivityData, self),
              DECLARE_GET_FIELD(t_PythonAbstractSolarActivityData, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractSolarActivityData__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractSolarActivityData)[] = {
              { Py_tp_methods, t_PythonAbstractSolarActivityData__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractSolarActivityData_init_ },
              { Py_tp_getset, t_PythonAbstractSolarActivityData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractSolarActivityData)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(PythonAbstractSolarActivityData, t_PythonAbstractSolarActivityData, PythonAbstractSolarActivityData);
            PyObject *t_PythonAbstractSolarActivityData::wrap_Object(const PythonAbstractSolarActivityData& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAbstractSolarActivityData::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractSolarActivityData *self = (t_PythonAbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_PythonAbstractSolarActivityData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAbstractSolarActivityData::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractSolarActivityData *self = (t_PythonAbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_PythonAbstractSolarActivityData::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractSolarActivityData), &PY_TYPE_DEF(PythonAbstractSolarActivityData), module, "PythonAbstractSolarActivityData", 1);
            }

            void t_PythonAbstractSolarActivityData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "class_", make_descriptor(PythonAbstractSolarActivityData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "wrapfn_", make_descriptor(t_PythonAbstractSolarActivityData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractSolarActivityData::initializeClass);
              JNINativeMethod methods[] = {
                { "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_get24HoursKp0 },
                { "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonAbstractSolarActivityData_getAp1 },
                { "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getAverageFlux2 },
                { "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getDailyFlux3 },
                { "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getInstantFlux4 },
                { "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getMeanFlux5 },
                { "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getThreeHourlyKP6 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractSolarActivityData_pythonDecRef7 },
              };
              env->registerNatives(cls, methods, 8);
            }

            static PyObject *t_PythonAbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractSolarActivityData::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractSolarActivityData::wrap_Object(PythonAbstractSolarActivityData(((t_PythonAbstractSolarActivityData *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractSolarActivityData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractSolarActivityData_of_(t_PythonAbstractSolarActivityData *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonAbstractSolarActivityData_init_(t_PythonAbstractSolarActivityData *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              jint a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              PythonAbstractSolarActivityData object((jobject) NULL);

              if (!parseArgs(args, "sKkkIDDD", ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader::parameters_, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = PythonAbstractSolarActivityData(a0, a1, a2, a3, a4, a5, a6, a7));
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

            static PyObject *t_PythonAbstractSolarActivityData_finalize(t_PythonAbstractSolarActivityData *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractSolarActivityData_pythonExtension(t_PythonAbstractSolarActivityData *self, PyObject *args)
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

            static jdouble JNICALL t_PythonAbstractSolarActivityData_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "get24HoursKp", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("get24HoursKp", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jobject JNICALL t_PythonAbstractSolarActivityData_getAp1(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getAp", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getAp", result);
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

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getAverageFlux2(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getAverageFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAverageFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getDailyFlux3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getDailyFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getDailyFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getInstantFlux4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getInstantFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getInstantFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getMeanFlux5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getMeanFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getMeanFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getThreeHourlyKP6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getThreeHourlyKP", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getThreeHourlyKP", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonAbstractSolarActivityData_pythonDecRef7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonAbstractSolarActivityData_get__self(t_PythonAbstractSolarActivityData *self, void *data)
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
            static PyObject *t_PythonAbstractSolarActivityData_get__parameters_(t_PythonAbstractSolarActivityData *self, void *data)
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
#include "org/orekit/data/UnixCompressFilter.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *UnixCompressFilter::class$ = NULL;
      jmethodID *UnixCompressFilter::mids$ = NULL;
      bool UnixCompressFilter::live$ = false;

      jclass UnixCompressFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/UnixCompressFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_716adf7a6da8b4d7] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnixCompressFilter::UnixCompressFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ::org::orekit::data::DataSource UnixCompressFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_716adf7a6da8b4d7], a0.this$));
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
      static PyObject *t_UnixCompressFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnixCompressFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UnixCompressFilter_init_(t_UnixCompressFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UnixCompressFilter_filter(t_UnixCompressFilter *self, PyObject *arg);

      static PyMethodDef t_UnixCompressFilter__methods_[] = {
        DECLARE_METHOD(t_UnixCompressFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnixCompressFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnixCompressFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnixCompressFilter)[] = {
        { Py_tp_methods, t_UnixCompressFilter__methods_ },
        { Py_tp_init, (void *) t_UnixCompressFilter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnixCompressFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnixCompressFilter, t_UnixCompressFilter, UnixCompressFilter);

      void t_UnixCompressFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(UnixCompressFilter), &PY_TYPE_DEF(UnixCompressFilter), module, "UnixCompressFilter", 0);
      }

      void t_UnixCompressFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnixCompressFilter), "class_", make_descriptor(UnixCompressFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnixCompressFilter), "wrapfn_", make_descriptor(t_UnixCompressFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnixCompressFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnixCompressFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnixCompressFilter::initializeClass, 1)))
          return NULL;
        return t_UnixCompressFilter::wrap_Object(UnixCompressFilter(((t_UnixCompressFilter *) arg)->object.this$));
      }
      static PyObject *t_UnixCompressFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnixCompressFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UnixCompressFilter_init_(t_UnixCompressFilter *self, PyObject *args, PyObject *kwds)
      {
        UnixCompressFilter object((jobject) NULL);

        INT_CALL(object = UnixCompressFilter());
        self->object = object;

        return 0;
      }

      static PyObject *t_UnixCompressFilter_filter(t_UnixCompressFilter *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.filter(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "java/lang/UnsupportedOperationException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealLinearOperator::class$ = NULL;
      jmethodID *RealLinearOperator::mids$ = NULL;
      bool RealLinearOperator::live$ = false;

      jclass RealLinearOperator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealLinearOperator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isTransposable_b108b35ef48e27bd] = env->getMethodID(cls, "isTransposable", "()Z");
          mids$[mid_operate_613347e28dd909cd] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_operateTranspose_613347e28dd909cd] = env->getMethodID(cls, "operateTranspose", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint RealLinearOperator::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_570ce0828f81a2c1]);
      }

      jint RealLinearOperator::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_570ce0828f81a2c1]);
      }

      jboolean RealLinearOperator::isTransposable() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isTransposable_b108b35ef48e27bd]);
      }

      ::org::hipparchus::linear::RealVector RealLinearOperator::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_613347e28dd909cd], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealLinearOperator::operateTranspose(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operateTranspose_613347e28dd909cd], a0.this$));
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
      static PyObject *t_RealLinearOperator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealLinearOperator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealLinearOperator_getColumnDimension(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_getRowDimension(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_isTransposable(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_operate(t_RealLinearOperator *self, PyObject *arg);
      static PyObject *t_RealLinearOperator_operateTranspose(t_RealLinearOperator *self, PyObject *arg);
      static PyObject *t_RealLinearOperator_get__columnDimension(t_RealLinearOperator *self, void *data);
      static PyObject *t_RealLinearOperator_get__rowDimension(t_RealLinearOperator *self, void *data);
      static PyObject *t_RealLinearOperator_get__transposable(t_RealLinearOperator *self, void *data);
      static PyGetSetDef t_RealLinearOperator__fields_[] = {
        DECLARE_GET_FIELD(t_RealLinearOperator, columnDimension),
        DECLARE_GET_FIELD(t_RealLinearOperator, rowDimension),
        DECLARE_GET_FIELD(t_RealLinearOperator, transposable),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealLinearOperator__methods_[] = {
        DECLARE_METHOD(t_RealLinearOperator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealLinearOperator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealLinearOperator, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, isTransposable, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, operate, METH_O),
        DECLARE_METHOD(t_RealLinearOperator, operateTranspose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealLinearOperator)[] = {
        { Py_tp_methods, t_RealLinearOperator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealLinearOperator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealLinearOperator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealLinearOperator, t_RealLinearOperator, RealLinearOperator);

      void t_RealLinearOperator::install(PyObject *module)
      {
        installType(&PY_TYPE(RealLinearOperator), &PY_TYPE_DEF(RealLinearOperator), module, "RealLinearOperator", 0);
      }

      void t_RealLinearOperator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "class_", make_descriptor(RealLinearOperator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "wrapfn_", make_descriptor(t_RealLinearOperator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealLinearOperator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealLinearOperator::initializeClass, 1)))
          return NULL;
        return t_RealLinearOperator::wrap_Object(RealLinearOperator(((t_RealLinearOperator *) arg)->object.this$));
      }
      static PyObject *t_RealLinearOperator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealLinearOperator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealLinearOperator_getColumnDimension(t_RealLinearOperator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealLinearOperator_getRowDimension(t_RealLinearOperator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealLinearOperator_isTransposable(t_RealLinearOperator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isTransposable());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealLinearOperator_operate(t_RealLinearOperator *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "operate", arg);
        return NULL;
      }

      static PyObject *t_RealLinearOperator_operateTranspose(t_RealLinearOperator *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.operateTranspose(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "operateTranspose", arg);
        return NULL;
      }

      static PyObject *t_RealLinearOperator_get__columnDimension(t_RealLinearOperator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealLinearOperator_get__rowDimension(t_RealLinearOperator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealLinearOperator_get__transposable(t_RealLinearOperator *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isTransposable());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractFieldIntegratorBuilder.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractFieldIntegratorBuilder::live$ = false;

        jclass AbstractFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_c6b1aa22e8585e91] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractFieldIntegratorBuilder::AbstractFieldIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractFieldIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_c6b1aa22e8585e91], a0.this$, a1.this$));
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_048f7039a7622a2b], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_AbstractFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldIntegratorBuilder_of_(t_AbstractFieldIntegratorBuilder *self, PyObject *args);
        static int t_AbstractFieldIntegratorBuilder_init_(t_AbstractFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractFieldIntegratorBuilder_buildIntegrator(t_AbstractFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractFieldIntegratorBuilder_get__parameters_(t_AbstractFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AbstractFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_AbstractFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldIntegratorBuilder, t_AbstractFieldIntegratorBuilder, AbstractFieldIntegratorBuilder);
        PyObject *t_AbstractFieldIntegratorBuilder::wrap_Object(const AbstractFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldIntegratorBuilder *self = (t_AbstractFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldIntegratorBuilder *self = (t_AbstractFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractFieldIntegratorBuilder), module, "AbstractFieldIntegratorBuilder", 0);
        }

        void t_AbstractFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "class_", make_descriptor(AbstractFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldIntegratorBuilder::wrap_Object(AbstractFieldIntegratorBuilder(((t_AbstractFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_of_(t_AbstractFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AbstractFieldIntegratorBuilder_init_(t_AbstractFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          AbstractFieldIntegratorBuilder object((jobject) NULL);

          INT_CALL(object = AbstractFieldIntegratorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_buildIntegrator(t_AbstractFieldIntegratorBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::OrbitType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 3:
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
            }
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
        static PyObject *t_AbstractFieldIntegratorBuilder_get__parameters_(t_AbstractFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFile$EphemerisSegment::class$ = NULL;
        jmethodID *EphemerisFile$EphemerisSegment::mids$ = NULL;
        bool EphemerisFile$EphemerisSegment::live$ = false;

        jclass EphemerisFile$EphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFile$EphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_2afa36052df4765d] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_08b52de56e2dfa9a] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_ac89b644d37ed0fc] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::utils::CartesianDerivativesFilter EphemerisFile$EphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d]));
        }

        ::java::util::List EphemerisFile$EphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_2afa36052df4765d]));
        }

        ::org::orekit::frames::Frame EphemerisFile$EphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
        }

        ::org::orekit::frames::Frame EphemerisFile$EphemerisSegment::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_b86f9f61d97a7244]));
        }

        jint EphemerisFile$EphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_570ce0828f81a2c1]);
        }

        jdouble EphemerisFile$EphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$EphemerisSegment::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_08b52de56e2dfa9a]));
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$EphemerisSegment::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_ac89b644d37ed0fc], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$EphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$EphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
        static PyObject *t_EphemerisFile$EphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$EphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$EphemerisSegment_of_(t_EphemerisFile$EphemerisSegment *self, PyObject *args);
        static PyObject *t_EphemerisFile$EphemerisSegment_getAvailableDerivatives(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getCoordinates(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getFrame(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getInertialFrame(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getInterpolationSamples(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getMu(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getPropagator(t_EphemerisFile$EphemerisSegment *self, PyObject *args);
        static PyObject *t_EphemerisFile$EphemerisSegment_getStart(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getStop(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__availableDerivatives(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__coordinates(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__frame(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__inertialFrame(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__interpolationSamples(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__mu(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__propagator(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__start(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__stop(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__parameters_(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyGetSetDef t_EphemerisFile$EphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, coordinates),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, frame),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, inertialFrame),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, mu),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, propagator),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, start),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, stop),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFile$EphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFile$EphemerisSegment)[] = {
          { Py_tp_methods, t_EphemerisFile$EphemerisSegment__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFile$EphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFile$EphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFile$EphemerisSegment, t_EphemerisFile$EphemerisSegment, EphemerisFile$EphemerisSegment);
        PyObject *t_EphemerisFile$EphemerisSegment::wrap_Object(const EphemerisFile$EphemerisSegment& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFile$EphemerisSegment::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$EphemerisSegment *self = (t_EphemerisFile$EphemerisSegment *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EphemerisFile$EphemerisSegment::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFile$EphemerisSegment::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$EphemerisSegment *self = (t_EphemerisFile$EphemerisSegment *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EphemerisFile$EphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFile$EphemerisSegment), &PY_TYPE_DEF(EphemerisFile$EphemerisSegment), module, "EphemerisFile$EphemerisSegment", 0);
        }

        void t_EphemerisFile$EphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$EphemerisSegment), "class_", make_descriptor(EphemerisFile$EphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$EphemerisSegment), "wrapfn_", make_descriptor(t_EphemerisFile$EphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$EphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFile$EphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_EphemerisFile$EphemerisSegment::wrap_Object(EphemerisFile$EphemerisSegment(((t_EphemerisFile$EphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFile$EphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFile$EphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_of_(t_EphemerisFile$EphemerisSegment *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getAvailableDerivatives(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getCoordinates(t_EphemerisFile$EphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getFrame(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getInertialFrame(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getInterpolationSamples(t_EphemerisFile$EphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getMu(t_EphemerisFile$EphemerisSegment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getPropagator(t_EphemerisFile$EphemerisSegment *self, PyObject *args)
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

        static PyObject *t_EphemerisFile$EphemerisSegment_getStart(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getStop(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_EphemerisFile$EphemerisSegment_get__parameters_(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__availableDerivatives(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__coordinates(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__frame(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__inertialFrame(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__interpolationSamples(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__mu(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__propagator(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__start(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__stop(t_EphemerisFile$EphemerisSegment *self, void *data)
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
#include "org/orekit/estimation/sequential/ConstantProcessNoise.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *ConstantProcessNoise::class$ = NULL;
        jmethodID *ConstantProcessNoise::mids$ = NULL;
        bool ConstantProcessNoise::live$ = false;

        jclass ConstantProcessNoise::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/ConstantProcessNoise");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_f09dcac15bdcc9db] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_getProcessNoiseMatrix_26148f4ae87f73a3] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantProcessNoise::ConstantProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

        ConstantProcessNoise::ConstantProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_f09dcac15bdcc9db, a0.this$, a1.this$)) {}

        ::org::hipparchus::linear::RealMatrix ConstantProcessNoise::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_26148f4ae87f73a3], a0.this$, a1.this$));
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
      namespace sequential {
        static PyObject *t_ConstantProcessNoise_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantProcessNoise_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantProcessNoise_init_(t_ConstantProcessNoise *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantProcessNoise_getProcessNoiseMatrix(t_ConstantProcessNoise *self, PyObject *args);

        static PyMethodDef t_ConstantProcessNoise__methods_[] = {
          DECLARE_METHOD(t_ConstantProcessNoise, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantProcessNoise, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantProcessNoise, getProcessNoiseMatrix, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantProcessNoise)[] = {
          { Py_tp_methods, t_ConstantProcessNoise__methods_ },
          { Py_tp_init, (void *) t_ConstantProcessNoise_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantProcessNoise)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(ConstantProcessNoise, t_ConstantProcessNoise, ConstantProcessNoise);

        void t_ConstantProcessNoise::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantProcessNoise), &PY_TYPE_DEF(ConstantProcessNoise), module, "ConstantProcessNoise", 0);
        }

        void t_ConstantProcessNoise::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "class_", make_descriptor(ConstantProcessNoise::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "wrapfn_", make_descriptor(t_ConstantProcessNoise::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantProcessNoise_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantProcessNoise::initializeClass, 1)))
            return NULL;
          return t_ConstantProcessNoise::wrap_Object(ConstantProcessNoise(((t_ConstantProcessNoise *) arg)->object.this$));
        }
        static PyObject *t_ConstantProcessNoise_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantProcessNoise::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantProcessNoise_init_(t_ConstantProcessNoise *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ConstantProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = ConstantProcessNoise(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
              ConstantProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ConstantProcessNoise(a0, a1));
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

        static PyObject *t_ConstantProcessNoise_getProcessNoiseMatrix(t_ConstantProcessNoise *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(ConstantProcessNoise), (PyObject *) self, "getProcessNoiseMatrix", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldAngularCoordinates::class$ = NULL;
      jmethodID *TimeStampedFieldAngularCoordinates::mids$ = NULL;
      bool TimeStampedFieldAngularCoordinates::live$ = false;

      jclass TimeStampedFieldAngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldAngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b65ab84bb47d00a7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_57465d89f578decb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/TimeStampedAngularCoordinates;)V");
          mids$[mid_init$_d1b59cac8bab6322] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_b615b416f90b473e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_7074573958993f96] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_init$_3b247e4eb3f721c9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_addOffset_7ec0bea5c02f6519] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_revert_d8696322b912d5fd] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_shiftedBy_7e28b13c041efa8b] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_shiftedBy_093b9606e7549330] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_subtractOffset_7ec0bea5c02f6519] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_b65ab84bb47d00a7, a0.this$, a1.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::TimeStampedAngularCoordinates & a1) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_57465d89f578decb, a0.this$, a1.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d1b59cac8bab6322, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_b615b416f90b473e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_7074573958993f96, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3b247e4eb3f721c9, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::addOffset(const ::org::orekit::utils::FieldAngularCoordinates & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_7ec0bea5c02f6519], a0.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate TimeStampedFieldAngularCoordinates::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_51da00d5b8a3b5df]));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::revert() const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_d8696322b912d5fd]));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_7e28b13c041efa8b], a0));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_093b9606e7549330], a0.this$));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::subtractOffset(const ::org::orekit::utils::FieldAngularCoordinates & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_7ec0bea5c02f6519], a0.this$));
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
      static PyObject *t_TimeStampedFieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinates_of_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static int t_TimeStampedFieldAngularCoordinates_init_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldAngularCoordinates_addOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_getDate(t_TimeStampedFieldAngularCoordinates *self);
      static PyObject *t_TimeStampedFieldAngularCoordinates_revert(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_shiftedBy(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_subtractOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__date(t_TimeStampedFieldAngularCoordinates *self, void *data);
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__parameters_(t_TimeStampedFieldAngularCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedFieldAngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinates, date),
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldAngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, addOffset, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, revert, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, subtractOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldAngularCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedFieldAngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldAngularCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedFieldAngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldAngularCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::FieldAngularCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldAngularCoordinates, t_TimeStampedFieldAngularCoordinates, TimeStampedFieldAngularCoordinates);
      PyObject *t_TimeStampedFieldAngularCoordinates::wrap_Object(const TimeStampedFieldAngularCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinates *self = (t_TimeStampedFieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldAngularCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinates *self = (t_TimeStampedFieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldAngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldAngularCoordinates), &PY_TYPE_DEF(TimeStampedFieldAngularCoordinates), module, "TimeStampedFieldAngularCoordinates", 0);
      }

      void t_TimeStampedFieldAngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "class_", make_descriptor(TimeStampedFieldAngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "wrapfn_", make_descriptor(t_TimeStampedFieldAngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldAngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldAngularCoordinates::wrap_Object(TimeStampedFieldAngularCoordinates(((t_TimeStampedFieldAngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldAngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_of_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldAngularCoordinates_init_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedAngularCoordinates a1((jobject) NULL);
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKKD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKD", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_TimeStampedFieldAngularCoordinates_addOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "addOffset", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_getDate(t_TimeStampedFieldAngularCoordinates *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_revert(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.revert());
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "revert", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_shiftedBy(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            TimeStampedFieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            TimeStampedFieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_subtractOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "subtractOffset", args, 2);
      }
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__parameters_(t_TimeStampedFieldAngularCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_get__date(t_TimeStampedFieldAngularCoordinates *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathUtils.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/MathUtils$FieldSumAndResidual.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/MathUtils$SumAndResidual.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils::class$ = NULL;
      jmethodID *MathUtils::mids$ = NULL;
      bool MathUtils::live$ = false;
      jdouble MathUtils::PI_SQUARED = (jdouble) 0;
      jdouble MathUtils::SEMI_PI = (jdouble) 0;
      jdouble MathUtils::TWO_PI = (jdouble) 0;

      jclass MathUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_checkDimension_6f37635c3285dbdf] = env->getStaticMethodID(cls, "checkDimension", "(II)V");
          mids$[mid_checkFinite_fa9d415d19f69361] = env->getStaticMethodID(cls, "checkFinite", "([D)V");
          mids$[mid_checkFinite_17db3a65980d3441] = env->getStaticMethodID(cls, "checkFinite", "(D)V");
          mids$[mid_checkNotNull_2990946c992aafed] = env->getStaticMethodID(cls, "checkNotNull", "(Ljava/lang/Object;)V");
          mids$[mid_checkNotNull_3c65185e850990f7] = env->getStaticMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_checkRangeInclusive_2c56b6dd4d4b1dec] = env->getStaticMethodID(cls, "checkRangeInclusive", "(DDD)V");
          mids$[mid_checkRangeInclusive_112a246dd0c6f6dd] = env->getStaticMethodID(cls, "checkRangeInclusive", "(JJJ)V");
          mids$[mid_copySign_36a7418727e23ece] = env->getStaticMethodID(cls, "copySign", "(BB)B");
          mids$[mid_copySign_819f91eddf220c5b] = env->getStaticMethodID(cls, "copySign", "(II)I");
          mids$[mid_copySign_fe4804b67425641b] = env->getStaticMethodID(cls, "copySign", "(JJ)J");
          mids$[mid_copySign_c6d9b7dbb62504d2] = env->getStaticMethodID(cls, "copySign", "(SS)S");
          mids$[mid_equals_ff85a0d8ff097ee5] = env->getStaticMethodID(cls, "equals", "(DD)Z");
          mids$[mid_hash_e00f7ba4becc2a21] = env->getStaticMethodID(cls, "hash", "([D)I");
          mids$[mid_hash_4508852644846c83] = env->getStaticMethodID(cls, "hash", "(D)I");
          mids$[mid_max_6746cc1cd9210d54] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_6746cc1cd9210d54] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_normalizeAngle_86ffecc08a63eff0] = env->getStaticMethodID(cls, "normalizeAngle", "(DD)D");
          mids$[mid_normalizeAngle_6746cc1cd9210d54] = env->getStaticMethodID(cls, "normalizeAngle", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_reduce_8c19bdea212fe058] = env->getStaticMethodID(cls, "reduce", "(DDD)D");
          mids$[mid_twoSum_a882b4284983c643] = env->getStaticMethodID(cls, "twoSum", "(DD)Lorg/hipparchus/util/MathUtils$SumAndResidual;");
          mids$[mid_twoSum_d5a65cce20bdd72b] = env->getStaticMethodID(cls, "twoSum", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/util/MathUtils$FieldSumAndResidual;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          PI_SQUARED = env->getStaticDoubleField(cls, "PI_SQUARED");
          SEMI_PI = env->getStaticDoubleField(cls, "SEMI_PI");
          TWO_PI = env->getStaticDoubleField(cls, "TWO_PI");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void MathUtils::checkDimension(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkDimension_6f37635c3285dbdf], a0, a1);
      }

      void MathUtils::checkFinite(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFinite_fa9d415d19f69361], a0.this$);
      }

      void MathUtils::checkFinite(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFinite_17db3a65980d3441], a0);
      }

      void MathUtils::checkNotNull(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNull_2990946c992aafed], a0.this$);
      }

      void MathUtils::checkNotNull(const ::java::lang::Object & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNull_3c65185e850990f7], a0.this$, a1.this$, a2.this$);
      }

      void MathUtils::checkRangeInclusive(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRangeInclusive_2c56b6dd4d4b1dec], a0, a1, a2);
      }

      void MathUtils::checkRangeInclusive(jlong a0, jlong a1, jlong a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRangeInclusive_112a246dd0c6f6dd], a0, a1, a2);
      }

      jbyte MathUtils::copySign(jbyte a0, jbyte a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticByteMethod(cls, mids$[mid_copySign_36a7418727e23ece], a0, a1);
      }

      jint MathUtils::copySign(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_copySign_819f91eddf220c5b], a0, a1);
      }

      jlong MathUtils::copySign(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_copySign_fe4804b67425641b], a0, a1);
      }

      jshort MathUtils::copySign(jshort a0, jshort a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticShortMethod(cls, mids$[mid_copySign_c6d9b7dbb62504d2], a0, a1);
      }

      jboolean MathUtils::equals(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_ff85a0d8ff097ee5], a0, a1);
      }

      jint MathUtils::hash(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_hash_e00f7ba4becc2a21], a0.this$);
      }

      jint MathUtils::hash(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_hash_4508852644846c83], a0);
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::max$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::min$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      jdouble MathUtils::normalizeAngle(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_normalizeAngle_86ffecc08a63eff0], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::normalizeAngle(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_normalizeAngle_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      jdouble MathUtils::reduce(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_reduce_8c19bdea212fe058], a0, a1, a2);
      }

      ::org::hipparchus::util::MathUtils$SumAndResidual MathUtils::twoSum(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::MathUtils$SumAndResidual(env->callStaticObjectMethod(cls, mids$[mid_twoSum_a882b4284983c643], a0, a1));
      }

      ::org::hipparchus::util::MathUtils$FieldSumAndResidual MathUtils::twoSum(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::MathUtils$FieldSumAndResidual(env->callStaticObjectMethod(cls, mids$[mid_twoSum_d5a65cce20bdd72b], a0.this$, a1.this$));
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
      static PyObject *t_MathUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils_checkDimension(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkFinite(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkNotNull(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkRangeInclusive(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_copySign(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_hash(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_max(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_min(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_normalizeAngle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_reduce(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_twoSum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_MathUtils__methods_[] = {
        DECLARE_METHOD(t_MathUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkDimension, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkFinite, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkNotNull, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkRangeInclusive, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, copySign, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, hash, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, max, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, min, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, normalizeAngle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, reduce, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, twoSum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils)[] = {
        { Py_tp_methods, t_MathUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils, t_MathUtils, MathUtils);

      void t_MathUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils), &PY_TYPE_DEF(MathUtils), module, "MathUtils", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "FieldSumAndResidual", make_descriptor(&PY_TYPE_DEF(MathUtils$FieldSumAndResidual)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "SumAndResidual", make_descriptor(&PY_TYPE_DEF(MathUtils$SumAndResidual)));
      }

      void t_MathUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "class_", make_descriptor(MathUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "wrapfn_", make_descriptor(t_MathUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(MathUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "PI_SQUARED", make_descriptor(MathUtils::PI_SQUARED));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "SEMI_PI", make_descriptor(MathUtils::SEMI_PI));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "TWO_PI", make_descriptor(MathUtils::TWO_PI));
      }

      static PyObject *t_MathUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils::initializeClass, 1)))
          return NULL;
        return t_MathUtils::wrap_Object(MathUtils(((t_MathUtils *) arg)->object.this$));
      }
      static PyObject *t_MathUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils_checkDimension(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::MathUtils::checkDimension(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkDimension", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkFinite(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkFinite(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkFinite(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkFinite", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkNotNull(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Object a0((jobject) NULL);

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkNotNull(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            ::java::lang::Object a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);

            if (!parseArgs(args, "ok[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkNotNull(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkNotNull", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkRangeInclusive(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkRangeInclusive(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong a2;

            if (!parseArgs(args, "JJJ", &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkRangeInclusive(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkRangeInclusive", args);
        return NULL;
      }

      static PyObject *t_MathUtils_copySign(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            jbyte a1;
            jbyte result;

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jshort a0;
            jshort a1;
            jshort result;

            if (!parseArgs(args, "SS", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "copySign", args);
        return NULL;
      }

      static PyObject *t_MathUtils_equals(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::equals(a0, a1));
          Py_RETURN_BOOL(result);
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_MathUtils_hash(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::hash(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jdouble a0;
            jint result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::hash(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "hash", args);
        return NULL;
      }

      static PyObject *t_MathUtils_max(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::max$(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "max", args);
        return NULL;
      }

      static PyObject *t_MathUtils_min(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::min$(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "min", args);
        return NULL;
      }

      static PyObject *t_MathUtils_normalizeAngle(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::normalizeAngle(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::normalizeAngle(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "normalizeAngle", args);
        return NULL;
      }

      static PyObject *t_MathUtils_reduce(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::reduce(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "reduce", args);
        return NULL;
      }

      static PyObject *t_MathUtils_twoSum(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::util::MathUtils$SumAndResidual result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::twoSum(a0, a1));
              return ::org::hipparchus::util::t_MathUtils$SumAndResidual::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::util::MathUtils$FieldSumAndResidual result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::twoSum(a0, a1));
              return ::org::hipparchus::util::t_MathUtils$FieldSumAndResidual::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "twoSum", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Segment.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
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
            mids$[mid_init$_cf0a3e7ed2ee4790] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_addCoordinate_f3f24d19500877ea] = env->getMethodID(cls, "addCoordinate", "(Lorg/orekit/files/sp3/SP3Coordinate;)V");
            mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_2afa36052df4765d] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_08b52de56e2dfa9a] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_ac89b644d37ed0fc] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Segment::SP3Segment(jdouble a0, const ::org::orekit::frames::Frame & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cf0a3e7ed2ee4790, a0, a1.this$, a2, a3.this$)) {}

        void SP3Segment::addCoordinate(const ::org::orekit::files::sp3::SP3Coordinate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCoordinate_f3f24d19500877ea], a0.this$);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Segment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d]));
        }

        ::java::util::List SP3Segment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_2afa36052df4765d]));
        }

        ::org::orekit::frames::Frame SP3Segment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
        }

        jint SP3Segment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_570ce0828f81a2c1]);
        }

        jdouble SP3Segment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        ::org::orekit::propagation::BoundedPropagator SP3Segment::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_08b52de56e2dfa9a]));
        }

        ::org::orekit::propagation::BoundedPropagator SP3Segment::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_ac89b644d37ed0fc], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SP3Segment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate SP3Segment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
#include "org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSCivilianNavigationMessage::class$ = NULL;
            jmethodID *QZSSCivilianNavigationMessage::mids$ = NULL;
            bool QZSSCivilianNavigationMessage::live$ = false;

            jclass QZSSCivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_bd04c9335fb9e4cf] = env->getMethodID(cls, "<init>", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSCivilianNavigationMessage::QZSSCivilianNavigationMessage(jboolean a0) : ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_bd04c9335fb9e4cf, a0)) {}
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
            static PyObject *t_QZSSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSCivilianNavigationMessage_init_(t_QZSSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_QZSSCivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_QZSSCivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSCivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSCivilianNavigationMessage)[] = {
              { Py_tp_methods, t_QZSSCivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_QZSSCivilianNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSCivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage),
              NULL
            };

            DEFINE_TYPE(QZSSCivilianNavigationMessage, t_QZSSCivilianNavigationMessage, QZSSCivilianNavigationMessage);

            void t_QZSSCivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSCivilianNavigationMessage), &PY_TYPE_DEF(QZSSCivilianNavigationMessage), module, "QZSSCivilianNavigationMessage", 0);
            }

            void t_QZSSCivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "class_", make_descriptor(QZSSCivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "wrapfn_", make_descriptor(t_QZSSCivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSCivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_QZSSCivilianNavigationMessage::wrap_Object(QZSSCivilianNavigationMessage(((t_QZSSCivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_QZSSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSCivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSCivilianNavigationMessage_init_(t_QZSSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              QZSSCivilianNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = QZSSCivilianNavigationMessage(a0));
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data.h"
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
                  mids$[mid_init$_3abeb24823da2f28] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm05Data_6f5a75ccd8c04465] = env->getMethodID(cls, "getSsrIgm05Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05::SsrIgm05(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm05Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_3abeb24823da2f28, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm05::getSsrIgm05Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm05Data_6f5a75ccd8c04465]));
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
#include "org/orekit/frames/AbstractEopParser.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *AbstractEopParser::class$ = NULL;
      jmethodID *AbstractEopParser::mids$ = NULL;
      bool AbstractEopParser::live$ = false;

      jclass AbstractEopParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/AbstractEopParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConverter_0c47cb966ded8a1b] = env->getMethodID(cls, "getConverter", "()Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getUtc_c39031284193adbe] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");
          mids$[mid_getItrfVersionProvider_fbbeda7b7fb3a860] = env->getMethodID(cls, "getItrfVersionProvider", "()Lorg/orekit/frames/ItrfVersionProvider;");

          class$ = new ::java::lang::Class(cls);
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
    namespace frames {
      static PyObject *t_AbstractEopParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractEopParser_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_AbstractEopParser__methods_[] = {
        DECLARE_METHOD(t_AbstractEopParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractEopParser, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractEopParser)[] = {
        { Py_tp_methods, t_AbstractEopParser__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractEopParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractEopParser, t_AbstractEopParser, AbstractEopParser);

      void t_AbstractEopParser::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractEopParser), &PY_TYPE_DEF(AbstractEopParser), module, "AbstractEopParser", 0);
      }

      void t_AbstractEopParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "class_", make_descriptor(AbstractEopParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "wrapfn_", make_descriptor(t_AbstractEopParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractEopParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractEopParser::initializeClass, 1)))
          return NULL;
        return t_AbstractEopParser::wrap_Object(AbstractEopParser(((t_AbstractEopParser *) arg)->object.this$));
      }
      static PyObject *t_AbstractEopParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractEopParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/UpdatableTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *UpdatableTile::class$ = NULL;
        jmethodID *UpdatableTile::mids$ = NULL;
        bool UpdatableTile::live$ = false;

        jclass UpdatableTile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/UpdatableTile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_setElevation_1506189166690b5e] = env->getMethodID(cls, "setElevation", "(IID)V");
            mids$[mid_setGeometry_3a52e67a9decc404] = env->getMethodID(cls, "setGeometry", "(DDDDII)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UpdatableTile::setElevation(jint a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setElevation_1506189166690b5e], a0, a1, a2);
        }

        void UpdatableTile::setGeometry(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_setGeometry_3a52e67a9decc404], a0, a1, a2, a3, a4, a5);
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
      namespace raster {
        static PyObject *t_UpdatableTile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatableTile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatableTile_setElevation(t_UpdatableTile *self, PyObject *args);
        static PyObject *t_UpdatableTile_setGeometry(t_UpdatableTile *self, PyObject *args);

        static PyMethodDef t_UpdatableTile__methods_[] = {
          DECLARE_METHOD(t_UpdatableTile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatableTile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatableTile, setElevation, METH_VARARGS),
          DECLARE_METHOD(t_UpdatableTile, setGeometry, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UpdatableTile)[] = {
          { Py_tp_methods, t_UpdatableTile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UpdatableTile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UpdatableTile, t_UpdatableTile, UpdatableTile);

        void t_UpdatableTile::install(PyObject *module)
        {
          installType(&PY_TYPE(UpdatableTile), &PY_TYPE_DEF(UpdatableTile), module, "UpdatableTile", 0);
        }

        void t_UpdatableTile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "class_", make_descriptor(UpdatableTile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "wrapfn_", make_descriptor(t_UpdatableTile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UpdatableTile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UpdatableTile::initializeClass, 1)))
            return NULL;
          return t_UpdatableTile::wrap_Object(UpdatableTile(((t_UpdatableTile *) arg)->object.this$));
        }
        static PyObject *t_UpdatableTile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UpdatableTile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UpdatableTile_setElevation(t_UpdatableTile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setElevation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setElevation", args);
          return NULL;
        }

        static PyObject *t_UpdatableTile_setGeometry(t_UpdatableTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jint a4;
          jint a5;

          if (!parseArgs(args, "DDDDII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(self->object.setGeometry(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGeometry", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistoryMetadata::class$ = NULL;
              jmethodID *AttitudeStateHistoryMetadata::mids$ = NULL;
              bool AttitudeStateHistoryMetadata::live$ = false;

              jclass AttitudeStateHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAttBasis_11b109bd155ca898] = env->getMethodID(cls, "getAttBasis", "()Ljava/lang/String;");
                  mids$[mid_getAttBasisID_11b109bd155ca898] = env->getMethodID(cls, "getAttBasisID", "()Ljava/lang/String;");
                  mids$[mid_getAttID_11b109bd155ca898] = env->getMethodID(cls, "getAttID", "()Ljava/lang/String;");
                  mids$[mid_getAttPrevID_11b109bd155ca898] = env->getMethodID(cls, "getAttPrevID", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeType_f08064c40442c84b] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getEndpoints_35bd4909c56b6915] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_5aea028785008a06] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getNbStates_570ce0828f81a2c1] = env->getMethodID(cls, "getNbStates", "()I");
                  mids$[mid_getRateType_f2358484d07d6202] = env->getMethodID(cls, "getRateType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_setAttBasis_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAttBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setAttBasisID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAttBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAttID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttPrevID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAttPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeType_4299529dacf75fa7] = env->getMethodID(cls, "setAttitudeType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;)V");
                  mids$[mid_setEulerRotSeq_a908138988eb2a50] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setNbStates_99803b0791f320ff] = env->getMethodID(cls, "setNbStates", "(I)V");
                  mids$[mid_setRateType_819c66db610b1575] = env->getMethodID(cls, "setRateType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeStateHistoryMetadata::AttitudeStateHistoryMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::java::lang::String AttitudeStateHistoryMetadata::getAttBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttBasis_11b109bd155ca898]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttBasisID_11b109bd155ca898]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttID_11b109bd155ca898]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttPrevID_11b109bd155ca898]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeStateHistoryMetadata::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_f08064c40442c84b]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AttitudeStateHistoryMetadata::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_35bd4909c56b6915]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AttitudeStateHistoryMetadata::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_5aea028785008a06]));
              }

              jint AttitudeStateHistoryMetadata::getNbStates() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbStates_570ce0828f81a2c1]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeStateHistoryMetadata::getRateType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateType_f2358484d07d6202]));
              }

              void AttitudeStateHistoryMetadata::setAttBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttBasis_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttBasisID_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttID_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttPrevID_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttitudeType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeType_4299529dacf75fa7], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_a908138988eb2a50], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setNbStates(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbStates_99803b0791f320ff], a0);
              }

              void AttitudeStateHistoryMetadata::setRateType(const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateType_819c66db610b1575], a0.this$);
              }

              void AttitudeStateHistoryMetadata::validate(jdouble a0) const
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
              static PyObject *t_AttitudeStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeStateHistoryMetadata_init_(t_AttitudeStateHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasis(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasisID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttPrevID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttitudeType(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getEndpoints(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getEulerRotSeq(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getNbStates(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getRateType(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setEulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setNbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setRateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_validate(t_AttitudeStateHistoryMetadata *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasis(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasisID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attPrevID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attitudeType(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__endpoints(t_AttitudeStateHistoryMetadata *self, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__nbStates(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__nbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__rateType(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__rateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeStateHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attBasis),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attBasisID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attPrevID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attitudeType),
                DECLARE_GET_FIELD(t_AttitudeStateHistoryMetadata, endpoints),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, eulerRotSeq),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, nbStates),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, rateType),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttBasis, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttBasisID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttPrevID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttitudeType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getNbStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getRateType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttBasis, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttBasisID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttPrevID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttitudeType, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setNbStates, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setRateType, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistoryMetadata)[] = {
                { Py_tp_methods, t_AttitudeStateHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_AttitudeStateHistoryMetadata_init_ },
                { Py_tp_getset, t_AttitudeStateHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistoryMetadata, t_AttitudeStateHistoryMetadata, AttitudeStateHistoryMetadata);

              void t_AttitudeStateHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistoryMetadata), &PY_TYPE_DEF(AttitudeStateHistoryMetadata), module, "AttitudeStateHistoryMetadata", 0);
              }

              void t_AttitudeStateHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "class_", make_descriptor(AttitudeStateHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "wrapfn_", make_descriptor(t_AttitudeStateHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistoryMetadata::wrap_Object(AttitudeStateHistoryMetadata(((t_AttitudeStateHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeStateHistoryMetadata_init_(t_AttitudeStateHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                AttitudeStateHistoryMetadata object((jobject) NULL);

                INT_CALL(object = AttitudeStateHistoryMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasis(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttBasis());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasisID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttBasisID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttPrevID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttPrevID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttitudeType(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getEndpoints(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getEulerRotSeq(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getNbStates(t_AttitudeStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbStates());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getRateType(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getRateType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttBasis", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttBasisID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttPrevID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setAttitudeType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setEulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
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

              static PyObject *t_AttitudeStateHistoryMetadata_setNbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
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

              static PyObject *t_AttitudeStateHistoryMetadata_setRateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setRateType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_validate(t_AttitudeStateHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeStateHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasis(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttBasis());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attBasis", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasisID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttBasisID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attBasisID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attPrevID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttPrevID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attPrevID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attitudeType(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAttitudeType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeType", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__endpoints(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AttitudeStateHistoryMetadata_get__nbStates(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbStates());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeStateHistoryMetadata_set__nbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AttitudeStateHistoryMetadata_get__rateType(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getRateType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__rateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setRateType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateType", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
