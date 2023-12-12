#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/NonNegativeConstraint.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *NonNegativeConstraint::class$ = NULL;
        jmethodID *NonNegativeConstraint::mids$ = NULL;
        bool NonNegativeConstraint::live$ = false;

        jclass NonNegativeConstraint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/NonNegativeConstraint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ed2afdb8506b9742] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_isRestrictedToNonNegative_89b302893bdbe1f1] = env->getMethodID(cls, "isRestrictedToNonNegative", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NonNegativeConstraint::NonNegativeConstraint(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed2afdb8506b9742, a0)) {}

        jboolean NonNegativeConstraint::isRestrictedToNonNegative() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isRestrictedToNonNegative_89b302893bdbe1f1]);
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
        static PyObject *t_NonNegativeConstraint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NonNegativeConstraint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NonNegativeConstraint_init_(t_NonNegativeConstraint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NonNegativeConstraint_isRestrictedToNonNegative(t_NonNegativeConstraint *self);
        static PyObject *t_NonNegativeConstraint_get__restrictedToNonNegative(t_NonNegativeConstraint *self, void *data);
        static PyGetSetDef t_NonNegativeConstraint__fields_[] = {
          DECLARE_GET_FIELD(t_NonNegativeConstraint, restrictedToNonNegative),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NonNegativeConstraint__methods_[] = {
          DECLARE_METHOD(t_NonNegativeConstraint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NonNegativeConstraint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NonNegativeConstraint, isRestrictedToNonNegative, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NonNegativeConstraint)[] = {
          { Py_tp_methods, t_NonNegativeConstraint__methods_ },
          { Py_tp_init, (void *) t_NonNegativeConstraint_init_ },
          { Py_tp_getset, t_NonNegativeConstraint__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NonNegativeConstraint)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NonNegativeConstraint, t_NonNegativeConstraint, NonNegativeConstraint);

        void t_NonNegativeConstraint::install(PyObject *module)
        {
          installType(&PY_TYPE(NonNegativeConstraint), &PY_TYPE_DEF(NonNegativeConstraint), module, "NonNegativeConstraint", 0);
        }

        void t_NonNegativeConstraint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "class_", make_descriptor(NonNegativeConstraint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "wrapfn_", make_descriptor(t_NonNegativeConstraint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NonNegativeConstraint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NonNegativeConstraint::initializeClass, 1)))
            return NULL;
          return t_NonNegativeConstraint::wrap_Object(NonNegativeConstraint(((t_NonNegativeConstraint *) arg)->object.this$));
        }
        static PyObject *t_NonNegativeConstraint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NonNegativeConstraint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NonNegativeConstraint_init_(t_NonNegativeConstraint *self, PyObject *args, PyObject *kwds)
        {
          jboolean a0;
          NonNegativeConstraint object((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            INT_CALL(object = NonNegativeConstraint(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NonNegativeConstraint_isRestrictedToNonNegative(t_NonNegativeConstraint *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isRestrictedToNonNegative());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_NonNegativeConstraint_get__restrictedToNonNegative(t_NonNegativeConstraint *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isRestrictedToNonNegative());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSOrbitalElements::class$ = NULL;
            jmethodID *GLONASSOrbitalElements::mids$ = NULL;
            bool GLONASSOrbitalElements::live$ = false;

            jclass GLONASSOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getDeltaI_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaI", "()D");
                mids$[mid_getDeltaT_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaT", "()D");
                mids$[mid_getDeltaTDot_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaTDot", "()D");
                mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getGammaN_557b8123390d8d0c] = env->getMethodID(cls, "getGammaN", "()D");
                mids$[mid_getIOD_412668abc8d889e9] = env->getMethodID(cls, "getIOD", "()I");
                mids$[mid_getLambda_557b8123390d8d0c] = env->getMethodID(cls, "getLambda", "()D");
                mids$[mid_getN4_412668abc8d889e9] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_412668abc8d889e9] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getPa_557b8123390d8d0c] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getTN_557b8123390d8d0c] = env->getMethodID(cls, "getTN", "()D");
                mids$[mid_getTime_557b8123390d8d0c] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getX_557b8123390d8d0c] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_557b8123390d8d0c] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_557b8123390d8d0c] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_557b8123390d8d0c] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_557b8123390d8d0c] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_557b8123390d8d0c] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GLONASSOrbitalElements::getDeltaI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaI_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getDeltaT() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaT_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getDeltaTDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaTDot_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getGammaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGammaN_557b8123390d8d0c]);
            }

            jint GLONASSOrbitalElements::getIOD() const
            {
              return env->callIntMethod(this$, mids$[mid_getIOD_412668abc8d889e9]);
            }

            jdouble GLONASSOrbitalElements::getLambda() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLambda_557b8123390d8d0c]);
            }

            jint GLONASSOrbitalElements::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_412668abc8d889e9]);
            }

            jint GLONASSOrbitalElements::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_412668abc8d889e9]);
            }

            jdouble GLONASSOrbitalElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getTN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTN_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_557b8123390d8d0c]);
            }

            jdouble GLONASSOrbitalElements::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_557b8123390d8d0c]);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GLONASSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSOrbitalElements_getDeltaI(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getDeltaT(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getDeltaTDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getE(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getGammaN(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getIOD(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getLambda(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getN4(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getNa(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getPa(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getTN(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getTime(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getX(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getXDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getXDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getY(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getYDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getYDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZ(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_get__deltaI(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__deltaT(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__deltaTDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__e(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__gammaN(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__iOD(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__lambda(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__n4(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__na(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__pa(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__tN(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__time(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__x(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__xDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__xDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__y(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__yDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__yDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__z(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__zDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__zDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyGetSetDef t_GLONASSOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaI),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaT),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaTDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, e),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, gammaN),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, iOD),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, lambda),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, n4),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, na),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, pa),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, tN),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, time),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, x),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, xDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, xDotDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, y),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, yDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, yDotDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, z),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, zDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_GLONASSOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaI, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaT, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaTDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getE, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getGammaN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getIOD, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getLambda, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getN4, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getNa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getPa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getTN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getX, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getY, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZ, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZDotDot, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSOrbitalElements)[] = {
              { Py_tp_methods, t_GLONASSOrbitalElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_GLONASSOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSOrbitalElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(GLONASSOrbitalElements, t_GLONASSOrbitalElements, GLONASSOrbitalElements);

            void t_GLONASSOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSOrbitalElements), &PY_TYPE_DEF(GLONASSOrbitalElements), module, "GLONASSOrbitalElements", 0);
            }

            void t_GLONASSOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "class_", make_descriptor(GLONASSOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "wrapfn_", make_descriptor(t_GLONASSOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_GLONASSOrbitalElements::wrap_Object(GLONASSOrbitalElements(((t_GLONASSOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_GLONASSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaI(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaT(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaT());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaTDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getE(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getGammaN(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGammaN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getIOD(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIOD());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getLambda(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLambda());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getN4(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN4());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getNa(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getNa());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getPa(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getTN(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getTime(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getX(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getXDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getXDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getY(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getYDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getYDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZ(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaI(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaI());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaT(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaT());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaTDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__e(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__gammaN(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGammaN());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__iOD(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIOD());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__lambda(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLambda());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__n4(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN4());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__na(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getNa());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__pa(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__tN(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTN());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__time(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__x(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__xDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__xDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__y(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__yDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__yDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__z(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__zDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__zDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
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
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSLegacyNavigationMessage::class$ = NULL;
            jmethodID *QZSSLegacyNavigationMessage::mids$ = NULL;
            bool QZSSLegacyNavigationMessage::live$ = false;

            jclass QZSSLegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSLegacyNavigationMessage::QZSSLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
            static PyObject *t_QZSSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSLegacyNavigationMessage_init_(t_QZSSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_QZSSLegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_QZSSLegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSLegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSLegacyNavigationMessage)[] = {
              { Py_tp_methods, t_QZSSLegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_QZSSLegacyNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSLegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage),
              NULL
            };

            DEFINE_TYPE(QZSSLegacyNavigationMessage, t_QZSSLegacyNavigationMessage, QZSSLegacyNavigationMessage);

            void t_QZSSLegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSLegacyNavigationMessage), &PY_TYPE_DEF(QZSSLegacyNavigationMessage), module, "QZSSLegacyNavigationMessage", 0);
            }

            void t_QZSSLegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "class_", make_descriptor(QZSSLegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "wrapfn_", make_descriptor(t_QZSSLegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSLegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_QZSSLegacyNavigationMessage::wrap_Object(QZSSLegacyNavigationMessage(((t_QZSSLegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_QZSSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSLegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSLegacyNavigationMessage_init_(t_QZSSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              QZSSLegacyNavigationMessage object((jobject) NULL);

              INT_CALL(object = QZSSLegacyNavigationMessage());
              self->object = object;

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
#include "org/orekit/files/rinex/clock/RinexClock$ReferenceClock.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ReferenceClock::class$ = NULL;
          jmethodID *RinexClock$ReferenceClock::mids$ = NULL;
          bool RinexClock$ReferenceClock::live$ = false;

          jclass RinexClock$ReferenceClock::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ReferenceClock");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2db2697bafc57f1a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getClockConstraint_557b8123390d8d0c] = env->getMethodID(cls, "getClockConstraint", "()D");
              mids$[mid_getClockID_3cffd47377eca18a] = env->getMethodID(cls, "getClockID", "()Ljava/lang/String;");
              mids$[mid_getEndDate_7a97f7e149e79afb] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getReferenceName_3cffd47377eca18a] = env->getMethodID(cls, "getReferenceName", "()Ljava/lang/String;");
              mids$[mid_getStartDate_7a97f7e149e79afb] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$ReferenceClock::RinexClock$ReferenceClock(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::time::AbsoluteDate & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2db2697bafc57f1a, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

          jdouble RinexClock$ReferenceClock::getClockConstraint() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockConstraint_557b8123390d8d0c]);
          }

          ::java::lang::String RinexClock$ReferenceClock::getClockID() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClockID_3cffd47377eca18a]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ReferenceClock::getEndDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_7a97f7e149e79afb]));
          }

          ::java::lang::String RinexClock$ReferenceClock::getReferenceName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReferenceName_3cffd47377eca18a]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ReferenceClock::getStartDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_7a97f7e149e79afb]));
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
        namespace clock {
          static PyObject *t_RinexClock$ReferenceClock_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ReferenceClock_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClock$ReferenceClock_init_(t_RinexClock$ReferenceClock *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClock$ReferenceClock_getClockConstraint(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getClockID(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getEndDate(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getReferenceName(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getStartDate(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_get__clockConstraint(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__clockID(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__endDate(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__referenceName(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__startDate(t_RinexClock$ReferenceClock *self, void *data);
          static PyGetSetDef t_RinexClock$ReferenceClock__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, clockConstraint),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, clockID),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, endDate),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, referenceName),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, startDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ReferenceClock__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ReferenceClock, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getClockConstraint, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getClockID, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getEndDate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getReferenceName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getStartDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ReferenceClock)[] = {
            { Py_tp_methods, t_RinexClock$ReferenceClock__methods_ },
            { Py_tp_init, (void *) t_RinexClock$ReferenceClock_init_ },
            { Py_tp_getset, t_RinexClock$ReferenceClock__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ReferenceClock)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock$ReferenceClock, t_RinexClock$ReferenceClock, RinexClock$ReferenceClock);

          void t_RinexClock$ReferenceClock::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ReferenceClock), &PY_TYPE_DEF(RinexClock$ReferenceClock), module, "RinexClock$ReferenceClock", 0);
          }

          void t_RinexClock$ReferenceClock::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "class_", make_descriptor(RinexClock$ReferenceClock::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "wrapfn_", make_descriptor(t_RinexClock$ReferenceClock::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock$ReferenceClock_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ReferenceClock::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ReferenceClock::wrap_Object(RinexClock$ReferenceClock(((t_RinexClock$ReferenceClock *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ReferenceClock_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ReferenceClock::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClock$ReferenceClock_init_(t_RinexClock$ReferenceClock *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            RinexClock$ReferenceClock object((jobject) NULL);

            if (!parseArgs(args, "ssDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = RinexClock$ReferenceClock(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexClock$ReferenceClock_getClockConstraint(t_RinexClock$ReferenceClock *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockConstraint());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getClockID(t_RinexClock$ReferenceClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockID());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getEndDate(t_RinexClock$ReferenceClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getReferenceName(t_RinexClock$ReferenceClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceName());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getStartDate(t_RinexClock$ReferenceClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__clockConstraint(t_RinexClock$ReferenceClock *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockConstraint());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__clockID(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockID());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__endDate(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__referenceName(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceName());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__startDate(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "org/orekit/files/ccsds/section/Section.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *CommentsContainer::class$ = NULL;
          jmethodID *CommentsContainer::mids$ = NULL;
          bool CommentsContainer::live$ = false;

          jclass CommentsContainer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/CommentsContainer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_acceptComments_89b302893bdbe1f1] = env->getMethodID(cls, "acceptComments", "()Z");
              mids$[mid_addComment_fd2162b8a05a22fe] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)Z");
              mids$[mid_checkAllowed_5ebcb2d7669fd61d] = env->getMethodID(cls, "checkAllowed", "(DLjava/lang/Object;Ljava/lang/String;DD)V");
              mids$[mid_checkNotNaN_d159d90d402c6e37] = env->getMethodID(cls, "checkNotNaN", "(DLjava/lang/String;)V");
              mids$[mid_checkNotNegative_da9d52f3cfda13c8] = env->getMethodID(cls, "checkNotNegative", "(ILjava/lang/String;)V");
              mids$[mid_checkNotNull_d4801ac1961ee2ac] = env->getMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Ljava/lang/String;)V");
              mids$[mid_getComments_0d9551367f7ecdef] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
              mids$[mid_refuseFurtherComments_0640e6acf969ed28] = env->getMethodID(cls, "refuseFurtherComments", "()V");
              mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CommentsContainer::CommentsContainer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          jboolean CommentsContainer::acceptComments() const
          {
            return env->callBooleanMethod(this$, mids$[mid_acceptComments_89b302893bdbe1f1]);
          }

          jboolean CommentsContainer::addComment(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_addComment_fd2162b8a05a22fe], a0.this$);
          }

          void CommentsContainer::checkAllowed(jdouble a0, const ::java::lang::Object & a1, const ::java::lang::String & a2, jdouble a3, jdouble a4) const
          {
            env->callVoidMethod(this$, mids$[mid_checkAllowed_5ebcb2d7669fd61d], a0, a1.this$, a2.this$, a3, a4);
          }

          void CommentsContainer::checkNotNaN(jdouble a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNaN_d159d90d402c6e37], a0, a1.this$);
          }

          void CommentsContainer::checkNotNegative(jint a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNegative_da9d52f3cfda13c8], a0, a1.this$);
          }

          void CommentsContainer::checkNotNull(const ::java::lang::Object & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNull_d4801ac1961ee2ac], a0.this$, a1.this$);
          }

          ::java::util::List CommentsContainer::getComments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_0d9551367f7ecdef]));
          }

          void CommentsContainer::refuseFurtherComments() const
          {
            env->callVoidMethod(this$, mids$[mid_refuseFurtherComments_0640e6acf969ed28]);
          }

          void CommentsContainer::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
        namespace section {
          static PyObject *t_CommentsContainer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CommentsContainer_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CommentsContainer_init_(t_CommentsContainer *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CommentsContainer_acceptComments(t_CommentsContainer *self);
          static PyObject *t_CommentsContainer_addComment(t_CommentsContainer *self, PyObject *arg);
          static PyObject *t_CommentsContainer_checkAllowed(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_checkNotNaN(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_checkNotNegative(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_checkNotNull(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_getComments(t_CommentsContainer *self);
          static PyObject *t_CommentsContainer_refuseFurtherComments(t_CommentsContainer *self);
          static PyObject *t_CommentsContainer_validate(t_CommentsContainer *self, PyObject *arg);
          static PyObject *t_CommentsContainer_get__comments(t_CommentsContainer *self, void *data);
          static PyGetSetDef t_CommentsContainer__fields_[] = {
            DECLARE_GET_FIELD(t_CommentsContainer, comments),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CommentsContainer__methods_[] = {
            DECLARE_METHOD(t_CommentsContainer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommentsContainer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommentsContainer, acceptComments, METH_NOARGS),
            DECLARE_METHOD(t_CommentsContainer, addComment, METH_O),
            DECLARE_METHOD(t_CommentsContainer, checkAllowed, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, checkNotNaN, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, checkNotNegative, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, checkNotNull, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, getComments, METH_NOARGS),
            DECLARE_METHOD(t_CommentsContainer, refuseFurtherComments, METH_NOARGS),
            DECLARE_METHOD(t_CommentsContainer, validate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CommentsContainer)[] = {
            { Py_tp_methods, t_CommentsContainer__methods_ },
            { Py_tp_init, (void *) t_CommentsContainer_init_ },
            { Py_tp_getset, t_CommentsContainer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CommentsContainer)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CommentsContainer, t_CommentsContainer, CommentsContainer);

          void t_CommentsContainer::install(PyObject *module)
          {
            installType(&PY_TYPE(CommentsContainer), &PY_TYPE_DEF(CommentsContainer), module, "CommentsContainer", 0);
          }

          void t_CommentsContainer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommentsContainer), "class_", make_descriptor(CommentsContainer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommentsContainer), "wrapfn_", make_descriptor(t_CommentsContainer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommentsContainer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CommentsContainer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CommentsContainer::initializeClass, 1)))
              return NULL;
            return t_CommentsContainer::wrap_Object(CommentsContainer(((t_CommentsContainer *) arg)->object.this$));
          }
          static PyObject *t_CommentsContainer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CommentsContainer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CommentsContainer_init_(t_CommentsContainer *self, PyObject *args, PyObject *kwds)
          {
            CommentsContainer object((jobject) NULL);

            INT_CALL(object = CommentsContainer());
            self->object = object;

            return 0;
          }

          static PyObject *t_CommentsContainer_acceptComments(t_CommentsContainer *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.acceptComments());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_CommentsContainer_addComment(t_CommentsContainer *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.addComment(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addComment", arg);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkAllowed(t_CommentsContainer *self, PyObject *args)
          {
            jdouble a0;
            ::java::lang::Object a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jdouble a3;
            jdouble a4;

            if (!parseArgs(args, "DosDD", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(self->object.checkAllowed(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkAllowed", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkNotNaN(t_CommentsContainer *self, PyObject *args)
          {
            jdouble a0;
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "Ds", &a0, &a1))
            {
              OBJ_CALL(self->object.checkNotNaN(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkNotNaN", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkNotNegative(t_CommentsContainer *self, PyObject *args)
          {
            jint a0;
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "Is", &a0, &a1))
            {
              OBJ_CALL(self->object.checkNotNegative(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkNotNegative", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkNotNull(t_CommentsContainer *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "os", &a0, &a1))
            {
              OBJ_CALL(self->object.checkNotNull(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkNotNull", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_getComments(t_CommentsContainer *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getComments());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_CommentsContainer_refuseFurtherComments(t_CommentsContainer *self)
          {
            OBJ_CALL(self->object.refuseFurtherComments());
            Py_RETURN_NONE;
          }

          static PyObject *t_CommentsContainer_validate(t_CommentsContainer *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "validate", arg);
            return NULL;
          }

          static PyObject *t_CommentsContainer_get__comments(t_CommentsContainer *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getComments());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DiagonalMatrix::class$ = NULL;
      jmethodID *DiagonalMatrix::mids$ = NULL;
      bool DiagonalMatrix::live$ = false;

      jclass DiagonalMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DiagonalMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_bdd4888f749f6b83] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_add_22eb29f902e0135d] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_addToEntry_754312f3734d6e2f] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_70a207fcbc031df2] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createMatrix_e8546415f980523f] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnDimension_412668abc8d889e9] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_8cf5267aa13a77f3] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getDataRef_a53a7513ecedada2] = env->getMethodID(cls, "getDataRef", "()[D");
          mids$[mid_getEntry_21b81d54c06b64b0] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRowDimension_412668abc8d889e9] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_inverse_b1a245683de9728d] = env->getMethodID(cls, "inverse", "()Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_inverse_b27f94a2ca88181f] = env->getMethodID(cls, "inverse", "(D)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_isSingular_dd69c3ab2404bb71] = env->getMethodID(cls, "isSingular", "(D)Z");
          mids$[mid_multiply_22eb29f902e0135d] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_multiply_340b47d21842d02c] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_754312f3734d6e2f] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_22eb29f902e0135d] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_multiplyTransposed_340b47d21842d02c] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_1db7c087750eaffe] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_1db7c087750eaffe] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_342d5b01463e0dc5] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_setEntry_754312f3734d6e2f] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_subtract_22eb29f902e0135d] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_transposeMultiply_22eb29f902e0135d] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_transposeMultiply_340b47d21842d02c] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DiagonalMatrix::DiagonalMatrix(const JArray< jdouble > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

      DiagonalMatrix::DiagonalMatrix(jint a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      DiagonalMatrix::DiagonalMatrix(const JArray< jdouble > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_bdd4888f749f6b83, a0.this$, a1)) {}

      DiagonalMatrix DiagonalMatrix::add(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_add_22eb29f902e0135d], a0.this$));
      }

      void DiagonalMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_754312f3734d6e2f], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_e8546415f980523f], a0, a1));
      }

      jint DiagonalMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_412668abc8d889e9]);
      }

      JArray< JArray< jdouble > > DiagonalMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_8cf5267aa13a77f3]));
      }

      JArray< jdouble > DiagonalMatrix::getDataRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDataRef_a53a7513ecedada2]));
      }

      jdouble DiagonalMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_21b81d54c06b64b0], a0, a1);
      }

      jint DiagonalMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_412668abc8d889e9]);
      }

      DiagonalMatrix DiagonalMatrix::inverse() const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_inverse_b1a245683de9728d]));
      }

      DiagonalMatrix DiagonalMatrix::inverse(jdouble a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_inverse_b27f94a2ca88181f], a0));
      }

      jboolean DiagonalMatrix::isSingular(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSingular_dd69c3ab2404bb71], a0);
      }

      DiagonalMatrix DiagonalMatrix::multiply(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_multiply_22eb29f902e0135d], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_340b47d21842d02c], a0.this$));
      }

      void DiagonalMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_754312f3734d6e2f], a0, a1, a2);
      }

      DiagonalMatrix DiagonalMatrix::multiplyTransposed(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_22eb29f902e0135d], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_340b47d21842d02c], a0.this$));
      }

      JArray< jdouble > DiagonalMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_1db7c087750eaffe], a0.this$));
      }

      JArray< jdouble > DiagonalMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_1db7c087750eaffe], a0.this$));
      }

      ::org::hipparchus::linear::RealVector DiagonalMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_342d5b01463e0dc5], a0.this$));
      }

      void DiagonalMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_754312f3734d6e2f], a0, a1, a2);
      }

      DiagonalMatrix DiagonalMatrix::subtract(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_subtract_22eb29f902e0135d], a0.this$));
      }

      DiagonalMatrix DiagonalMatrix::transposeMultiply(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_22eb29f902e0135d], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_340b47d21842d02c], a0.this$));
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
      static PyObject *t_DiagonalMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DiagonalMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DiagonalMatrix_init_(t_DiagonalMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DiagonalMatrix_add(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_addToEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_copy(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_createMatrix(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getColumnDimension(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getData(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getDataRef(t_DiagonalMatrix *self);
      static PyObject *t_DiagonalMatrix_getEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getRowDimension(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_inverse(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_isSingular(t_DiagonalMatrix *self, PyObject *arg);
      static PyObject *t_DiagonalMatrix_multiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_multiplyEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_multiplyTransposed(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_operate(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_preMultiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_setEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_subtract(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_transposeMultiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_get__columnDimension(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__data(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__dataRef(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__rowDimension(t_DiagonalMatrix *self, void *data);
      static PyGetSetDef t_DiagonalMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_DiagonalMatrix, columnDimension),
        DECLARE_GET_FIELD(t_DiagonalMatrix, data),
        DECLARE_GET_FIELD(t_DiagonalMatrix, dataRef),
        DECLARE_GET_FIELD(t_DiagonalMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DiagonalMatrix__methods_[] = {
        DECLARE_METHOD(t_DiagonalMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DiagonalMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DiagonalMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, inverse, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, isSingular, METH_O),
        DECLARE_METHOD(t_DiagonalMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, transposeMultiply, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DiagonalMatrix)[] = {
        { Py_tp_methods, t_DiagonalMatrix__methods_ },
        { Py_tp_init, (void *) t_DiagonalMatrix_init_ },
        { Py_tp_getset, t_DiagonalMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DiagonalMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(DiagonalMatrix, t_DiagonalMatrix, DiagonalMatrix);

      void t_DiagonalMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(DiagonalMatrix), &PY_TYPE_DEF(DiagonalMatrix), module, "DiagonalMatrix", 0);
      }

      void t_DiagonalMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "class_", make_descriptor(DiagonalMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "wrapfn_", make_descriptor(t_DiagonalMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DiagonalMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DiagonalMatrix::initializeClass, 1)))
          return NULL;
        return t_DiagonalMatrix::wrap_Object(DiagonalMatrix(((t_DiagonalMatrix *) arg)->object.this$));
      }
      static PyObject *t_DiagonalMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DiagonalMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DiagonalMatrix_init_(t_DiagonalMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = DiagonalMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DiagonalMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jboolean a1;
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "[DZ", &a0, &a1))
            {
              INT_CALL(object = DiagonalMatrix(a0, a1));
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

      static PyObject *t_DiagonalMatrix_add(t_DiagonalMatrix *self, PyObject *args)
      {
        DiagonalMatrix a0((jobject) NULL);
        DiagonalMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_DiagonalMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_DiagonalMatrix_addToEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_copy(t_DiagonalMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_DiagonalMatrix_createMatrix(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getColumnDimension(t_DiagonalMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getData(t_DiagonalMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getDataRef(t_DiagonalMatrix *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return result.wrap();
      }

      static PyObject *t_DiagonalMatrix_getEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getRowDimension(t_DiagonalMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_DiagonalMatrix_inverse(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            DiagonalMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.inverse());
            return t_DiagonalMatrix::wrap_Object(result);
          }
          break;
         case 1:
          {
            jdouble a0;
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.inverse(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "inverse", args);
        return NULL;
      }

      static PyObject *t_DiagonalMatrix_isSingular(t_DiagonalMatrix *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isSingular(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSingular", arg);
        return NULL;
      }

      static PyObject *t_DiagonalMatrix_multiply(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_multiplyEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_multiplyTransposed(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_DiagonalMatrix_operate(t_DiagonalMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_DiagonalMatrix_preMultiply(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_setEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_subtract(t_DiagonalMatrix *self, PyObject *args)
      {
        DiagonalMatrix a0((jobject) NULL);
        DiagonalMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_DiagonalMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_DiagonalMatrix_transposeMultiply(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_get__columnDimension(t_DiagonalMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DiagonalMatrix_get__data(t_DiagonalMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_DiagonalMatrix_get__dataRef(t_DiagonalMatrix *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return value.wrap();
      }

      static PyObject *t_DiagonalMatrix_get__rowDimension(t_DiagonalMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
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
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_openOnce_ce4348991af8a1a1] = env->getMethodID(cls, "openOnce", "()Ljava/io/InputStream;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStreamOpener::PythonStreamOpener() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonStreamOpener::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonStreamOpener::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonStreamOpener::pythonExtension(jlong a0) const
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_9e26256fb0d384a2]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmWriter.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmWriter::class$ = NULL;
              jmethodID *ApmWriter::mids$ = NULL;
              bool ApmWriter::live$ = false;
              jdouble ApmWriter::CCSDS_APM_VERS = (jdouble) 0;
              jint ApmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass ApmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_170ee021ab23bf06] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_e9836ce27ccfe3b9] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_APM_VERS = env->getStaticDoubleField(cls, "CCSDS_APM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmWriter::ApmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_170ee021ab23bf06, a0.this$, a1.this$, a2.this$)) {}
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
            namespace apm {
              static PyObject *t_ApmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmWriter_of_(t_ApmWriter *self, PyObject *args);
              static int t_ApmWriter_init_(t_ApmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmWriter_get__parameters_(t_ApmWriter *self, void *data);
              static PyGetSetDef t_ApmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_ApmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmWriter__methods_[] = {
                DECLARE_METHOD(t_ApmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmWriter)[] = {
                { Py_tp_methods, t_ApmWriter__methods_ },
                { Py_tp_init, (void *) t_ApmWriter_init_ },
                { Py_tp_getset, t_ApmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(ApmWriter, t_ApmWriter, ApmWriter);
              PyObject *t_ApmWriter::wrap_Object(const ApmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_ApmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmWriter *self = (t_ApmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_ApmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_ApmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmWriter *self = (t_ApmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_ApmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmWriter), &PY_TYPE_DEF(ApmWriter), module, "ApmWriter", 0);
              }

              void t_ApmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "class_", make_descriptor(ApmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "wrapfn_", make_descriptor(t_ApmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(ApmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "CCSDS_APM_VERS", make_descriptor(ApmWriter::CCSDS_APM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "KVN_PADDING_WIDTH", make_descriptor(ApmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_ApmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmWriter::initializeClass, 1)))
                  return NULL;
                return t_ApmWriter::wrap_Object(ApmWriter(((t_ApmWriter *) arg)->object.this$));
              }
              static PyObject *t_ApmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmWriter_of_(t_ApmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_ApmWriter_init_(t_ApmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                ApmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = ApmWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::adm::apm::PY_TYPE(Apm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_ApmWriter_get__parameters_(t_ApmWriter *self, void *data)
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
#include "org/orekit/estimation/measurements/filtering/SingleFrequencySmoother.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/util/List.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/util/HashMap.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SingleFrequencySmoother::class$ = NULL;
          jmethodID *SingleFrequencySmoother::mids$ = NULL;
          bool SingleFrequencySmoother::live$ = false;

          jclass SingleFrequencySmoother::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SingleFrequencySmoother");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6c94f1a23ed7c29a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/MeasurementType;DID)V");
              mids$[mid_copyObservationData_f6f450be0ab92fea] = env->getMethodID(cls, "copyObservationData", "(Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_createFilter_d3b5cedf330d3f01] = env->getMethodID(cls, "createFilter", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter;");
              mids$[mid_filterDataSet_262da5617a6dd751] = env->getMethodID(cls, "filterDataSet", "(Ljava/util/List;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getFilteredDataMap_2bd3906654d055d1] = env->getMethodID(cls, "getFilteredDataMap", "()Ljava/util/HashMap;");
              mids$[mid_getMapFilters_2bd3906654d055d1] = env->getMethodID(cls, "getMapFilters", "()Ljava/util/HashMap;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleFrequencySmoother::SingleFrequencySmoother(const ::org::orekit::gnss::MeasurementType & a0, jdouble a1, jint a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6c94f1a23ed7c29a, a0.this$, a1, a2, a3)) {}

          ::org::orekit::files::rinex::observation::ObservationData SingleFrequencySmoother::copyObservationData(const ::org::orekit::files::rinex::observation::ObservationData & a0) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_copyObservationData_f6f450be0ab92fea], a0.this$));
          }

          ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter SingleFrequencySmoother::createFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::gnss::SatelliteSystem & a2) const
          {
            return ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter(env->callObjectMethod(this$, mids$[mid_createFilter_d3b5cedf330d3f01], a0.this$, a1.this$, a2.this$));
          }

          void SingleFrequencySmoother::filterDataSet(const ::java::util::List & a0, const ::org::orekit::gnss::SatelliteSystem & a1, jint a2, const ::org::orekit::gnss::ObservationType & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_filterDataSet_262da5617a6dd751], a0.this$, a1.this$, a2, a3.this$);
          }

          ::java::util::HashMap SingleFrequencySmoother::getFilteredDataMap() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getFilteredDataMap_2bd3906654d055d1]));
          }

          ::java::util::HashMap SingleFrequencySmoother::getMapFilters() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getMapFilters_2bd3906654d055d1]));
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
        namespace filtering {
          static PyObject *t_SingleFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleFrequencySmoother_init_(t_SingleFrequencySmoother *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleFrequencySmoother_copyObservationData(t_SingleFrequencySmoother *self, PyObject *arg);
          static PyObject *t_SingleFrequencySmoother_createFilter(t_SingleFrequencySmoother *self, PyObject *args);
          static PyObject *t_SingleFrequencySmoother_filterDataSet(t_SingleFrequencySmoother *self, PyObject *args);
          static PyObject *t_SingleFrequencySmoother_getFilteredDataMap(t_SingleFrequencySmoother *self);
          static PyObject *t_SingleFrequencySmoother_getMapFilters(t_SingleFrequencySmoother *self);
          static PyObject *t_SingleFrequencySmoother_get__filteredDataMap(t_SingleFrequencySmoother *self, void *data);
          static PyObject *t_SingleFrequencySmoother_get__mapFilters(t_SingleFrequencySmoother *self, void *data);
          static PyGetSetDef t_SingleFrequencySmoother__fields_[] = {
            DECLARE_GET_FIELD(t_SingleFrequencySmoother, filteredDataMap),
            DECLARE_GET_FIELD(t_SingleFrequencySmoother, mapFilters),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SingleFrequencySmoother__methods_[] = {
            DECLARE_METHOD(t_SingleFrequencySmoother, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencySmoother, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencySmoother, copyObservationData, METH_O),
            DECLARE_METHOD(t_SingleFrequencySmoother, createFilter, METH_VARARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, filterDataSet, METH_VARARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, getFilteredDataMap, METH_NOARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, getMapFilters, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleFrequencySmoother)[] = {
            { Py_tp_methods, t_SingleFrequencySmoother__methods_ },
            { Py_tp_init, (void *) t_SingleFrequencySmoother_init_ },
            { Py_tp_getset, t_SingleFrequencySmoother__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleFrequencySmoother)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SingleFrequencySmoother, t_SingleFrequencySmoother, SingleFrequencySmoother);

          void t_SingleFrequencySmoother::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleFrequencySmoother), &PY_TYPE_DEF(SingleFrequencySmoother), module, "SingleFrequencySmoother", 0);
          }

          void t_SingleFrequencySmoother::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "class_", make_descriptor(SingleFrequencySmoother::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "wrapfn_", make_descriptor(t_SingleFrequencySmoother::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleFrequencySmoother::initializeClass, 1)))
              return NULL;
            return t_SingleFrequencySmoother::wrap_Object(SingleFrequencySmoother(((t_SingleFrequencySmoother *) arg)->object.this$));
          }
          static PyObject *t_SingleFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleFrequencySmoother::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleFrequencySmoother_init_(t_SingleFrequencySmoother *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::MeasurementType a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            jdouble a3;
            SingleFrequencySmoother object((jobject) NULL);

            if (!parseArgs(args, "KDID", ::org::orekit::gnss::MeasurementType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_MeasurementType::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = SingleFrequencySmoother(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SingleFrequencySmoother_copyObservationData(t_SingleFrequencySmoother *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copyObservationData(a0));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "copyObservationData", arg);
            return NULL;
          }

          static PyObject *t_SingleFrequencySmoother_createFilter(t_SingleFrequencySmoother *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter result((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.createFilter(a0, a1, a2));
              return ::org::orekit::estimation::measurements::filtering::t_SingleFrequencyHatchFilter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "createFilter", args);
            return NULL;
          }

          static PyObject *t_SingleFrequencySmoother_filterDataSet(t_SingleFrequencySmoother *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::gnss::ObservationType a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "KKIK", ::java::util::List::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.filterDataSet(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filterDataSet", args);
            return NULL;
          }

          static PyObject *t_SingleFrequencySmoother_getFilteredDataMap(t_SingleFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(result);
          }

          static PyObject *t_SingleFrequencySmoother_getMapFilters(t_SingleFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(ObservationType), ::org::orekit::estimation::measurements::filtering::PY_TYPE(SingleFrequencyHatchFilter));
          }

          static PyObject *t_SingleFrequencySmoother_get__filteredDataMap(t_SingleFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(value);
          }

          static PyObject *t_SingleFrequencySmoother_get__mapFilters(t_SingleFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(value);
          }
        }
      }
    }
  }
}
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
          mids$[mid_init$_2cfd6eaa6758b3d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;I)V");
          mids$[mid_init$_7ff55b3cf6ee3c81] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;IDD)V");
          mids$[mid_getMJDRef_412668abc8d889e9] = env->getMethodID(cls, "getMJDRef", "()I");
          mids$[mid_getOffset_557b8123390d8d0c] = env->getMethodID(cls, "getOffset", "()D");
          mids$[mid_getSlope_557b8123390d8d0c] = env->getMethodID(cls, "getSlope", "()D");
          mids$[mid_getStart_ef81839d8717cc3a] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/DateComponents;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OffsetModel::OffsetModel(const ::org::orekit::time::DateComponents & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2cfd6eaa6758b3d2, a0.this$, a1)) {}

      OffsetModel::OffsetModel(const ::org::orekit::time::DateComponents & a0, jint a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ff55b3cf6ee3c81, a0.this$, a1, a2, a3)) {}

      jint OffsetModel::getMJDRef() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJDRef_412668abc8d889e9]);
      }

      jdouble OffsetModel::getOffset() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_557b8123390d8d0c]);
      }

      jdouble OffsetModel::getSlope() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSlope_557b8123390d8d0c]);
      }

      ::org::orekit::time::DateComponents OffsetModel::getStart() const
      {
        return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getStart_ef81839d8717cc3a]));
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
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "org/orekit/files/ccsds/ndm/NdmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *ParserBuilder::class$ = NULL;
          jmethodID *ParserBuilder::mids$ = NULL;
          bool ParserBuilder::live$ = false;

          jclass ParserBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/ParserBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_23625b258f7a7479] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
              mids$[mid_buildAcmParser_a6519a9380eaaaf5] = env->getMethodID(cls, "buildAcmParser", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;");
              mids$[mid_buildAemParser_9ac1c95a2e207c3f] = env->getMethodID(cls, "buildAemParser", "()Lorg/orekit/files/ccsds/ndm/adm/aem/AemParser;");
              mids$[mid_buildApmParser_bf78fe4d9417c3b9] = env->getMethodID(cls, "buildApmParser", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmParser;");
              mids$[mid_buildCdmParser_c202e8e2ea242b80] = env->getMethodID(cls, "buildCdmParser", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;");
              mids$[mid_buildNdmParser_5bad0a6d587f3cbd] = env->getMethodID(cls, "buildNdmParser", "()Lorg/orekit/files/ccsds/ndm/NdmParser;");
              mids$[mid_buildOcmParser_102244e00399c31e] = env->getMethodID(cls, "buildOcmParser", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmParser;");
              mids$[mid_buildOemParser_33c71f44d6c0e191] = env->getMethodID(cls, "buildOemParser", "()Lorg/orekit/files/ccsds/ndm/odm/oem/OemParser;");
              mids$[mid_buildOmmParser_f739eeebf6641686] = env->getMethodID(cls, "buildOmmParser", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmParser;");
              mids$[mid_buildOpmParser_7abca2de4e339a48] = env->getMethodID(cls, "buildOpmParser", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmParser;");
              mids$[mid_buildTdmParser_e52a56c28cd727a7] = env->getMethodID(cls, "buildTdmParser", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmParser;");
              mids$[mid_getDefaultInterpolationDegree_412668abc8d889e9] = env->getMethodID(cls, "getDefaultInterpolationDegree", "()I");
              mids$[mid_getDefaultMass_557b8123390d8d0c] = env->getMethodID(cls, "getDefaultMass", "()D");
              mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getParsedUnitsBehavior_430d6c1485d1d8cb] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_isSimpleEOP_89b302893bdbe1f1] = env->getMethodID(cls, "isSimpleEOP", "()Z");
              mids$[mid_withDefaultInterpolationDegree_7ca0964da3353719] = env->getMethodID(cls, "withDefaultInterpolationDegree", "(I)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withDefaultMass_d20f07dc9475132d] = env->getMethodID(cls, "withDefaultMass", "(D)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withMu_d20f07dc9475132d] = env->getMethodID(cls, "withMu", "(D)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withParsedUnitsBehavior_c085c85d123384ae] = env->getMethodID(cls, "withParsedUnitsBehavior", "(Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withSimpleEOP_8a5b5cc3921c1e36] = env->getMethodID(cls, "withSimpleEOP", "(Z)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_create_d5c8eda04d2cfb3c] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ParserBuilder::ParserBuilder() : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ParserBuilder::ParserBuilder(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_23625b258f7a7479, a0.this$)) {}

          ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser ParserBuilder::buildAcmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser(env->callObjectMethod(this$, mids$[mid_buildAcmParser_a6519a9380eaaaf5]));
          }

          ::org::orekit::files::ccsds::ndm::adm::aem::AemParser ParserBuilder::buildAemParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::aem::AemParser(env->callObjectMethod(this$, mids$[mid_buildAemParser_9ac1c95a2e207c3f]));
          }

          ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser ParserBuilder::buildApmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser(env->callObjectMethod(this$, mids$[mid_buildApmParser_bf78fe4d9417c3b9]));
          }

          ::org::orekit::files::ccsds::ndm::cdm::CdmParser ParserBuilder::buildCdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::cdm::CdmParser(env->callObjectMethod(this$, mids$[mid_buildCdmParser_c202e8e2ea242b80]));
          }

          ::org::orekit::files::ccsds::ndm::NdmParser ParserBuilder::buildNdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::NdmParser(env->callObjectMethod(this$, mids$[mid_buildNdmParser_5bad0a6d587f3cbd]));
          }

          ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser ParserBuilder::buildOcmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser(env->callObjectMethod(this$, mids$[mid_buildOcmParser_102244e00399c31e]));
          }

          ::org::orekit::files::ccsds::ndm::odm::oem::OemParser ParserBuilder::buildOemParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::oem::OemParser(env->callObjectMethod(this$, mids$[mid_buildOemParser_33c71f44d6c0e191]));
          }

          ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser ParserBuilder::buildOmmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser(env->callObjectMethod(this$, mids$[mid_buildOmmParser_f739eeebf6641686]));
          }

          ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser ParserBuilder::buildOpmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser(env->callObjectMethod(this$, mids$[mid_buildOpmParser_7abca2de4e339a48]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::TdmParser ParserBuilder::buildTdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::TdmParser(env->callObjectMethod(this$, mids$[mid_buildTdmParser_e52a56c28cd727a7]));
          }

          jint ParserBuilder::getDefaultInterpolationDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getDefaultInterpolationDegree_412668abc8d889e9]);
          }

          jdouble ParserBuilder::getDefaultMass() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDefaultMass_557b8123390d8d0c]);
          }

          jdouble ParserBuilder::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
          }

          ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior ParserBuilder::getParsedUnitsBehavior() const
          {
            return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_430d6c1485d1d8cb]));
          }

          jboolean ParserBuilder::isSimpleEOP() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_89b302893bdbe1f1]);
          }

          ParserBuilder ParserBuilder::withDefaultInterpolationDegree(jint a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withDefaultInterpolationDegree_7ca0964da3353719], a0));
          }

          ParserBuilder ParserBuilder::withDefaultMass(jdouble a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withDefaultMass_d20f07dc9475132d], a0));
          }

          ParserBuilder ParserBuilder::withMu(jdouble a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withMu_d20f07dc9475132d], a0));
          }

          ParserBuilder ParserBuilder::withParsedUnitsBehavior(const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withParsedUnitsBehavior_c085c85d123384ae], a0.this$));
          }

          ParserBuilder ParserBuilder::withSimpleEOP(jboolean a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withSimpleEOP_8a5b5cc3921c1e36], a0));
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
          static PyObject *t_ParserBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParserBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParserBuilder_of_(t_ParserBuilder *self, PyObject *args);
          static int t_ParserBuilder_init_(t_ParserBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ParserBuilder_buildAcmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildAemParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildApmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildCdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildNdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOcmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOemParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOmmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOpmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildTdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getDefaultInterpolationDegree(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getDefaultMass(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getMu(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getParsedUnitsBehavior(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_isSimpleEOP(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_withDefaultInterpolationDegree(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withDefaultMass(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withMu(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withParsedUnitsBehavior(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withSimpleEOP(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_get__defaultInterpolationDegree(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__defaultMass(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__mu(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__parsedUnitsBehavior(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__simpleEOP(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__parameters_(t_ParserBuilder *self, void *data);
          static PyGetSetDef t_ParserBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_ParserBuilder, defaultInterpolationDegree),
            DECLARE_GET_FIELD(t_ParserBuilder, defaultMass),
            DECLARE_GET_FIELD(t_ParserBuilder, mu),
            DECLARE_GET_FIELD(t_ParserBuilder, parsedUnitsBehavior),
            DECLARE_GET_FIELD(t_ParserBuilder, simpleEOP),
            DECLARE_GET_FIELD(t_ParserBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ParserBuilder__methods_[] = {
            DECLARE_METHOD(t_ParserBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParserBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParserBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_ParserBuilder, buildAcmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildAemParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildApmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildCdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildNdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOcmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOemParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOmmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOpmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildTdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getDefaultInterpolationDegree, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getDefaultMass, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getMu, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getParsedUnitsBehavior, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, isSimpleEOP, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, withDefaultInterpolationDegree, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withDefaultMass, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withMu, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withParsedUnitsBehavior, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withSimpleEOP, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ParserBuilder)[] = {
            { Py_tp_methods, t_ParserBuilder__methods_ },
            { Py_tp_init, (void *) t_ParserBuilder_init_ },
            { Py_tp_getset, t_ParserBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ParserBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(ParserBuilder, t_ParserBuilder, ParserBuilder);
          PyObject *t_ParserBuilder::wrap_Object(const ParserBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParserBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParserBuilder *self = (t_ParserBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ParserBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParserBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParserBuilder *self = (t_ParserBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ParserBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(ParserBuilder), &PY_TYPE_DEF(ParserBuilder), module, "ParserBuilder", 0);
          }

          void t_ParserBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "class_", make_descriptor(ParserBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "wrapfn_", make_descriptor(t_ParserBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ParserBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ParserBuilder::initializeClass, 1)))
              return NULL;
            return t_ParserBuilder::wrap_Object(ParserBuilder(((t_ParserBuilder *) arg)->object.this$));
          }
          static PyObject *t_ParserBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ParserBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ParserBuilder_of_(t_ParserBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ParserBuilder_init_(t_ParserBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ParserBuilder object((jobject) NULL);

                INT_CALL(object = ParserBuilder());
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(ParserBuilder);
                break;
              }
             case 1:
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                ParserBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = ParserBuilder(a0));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(ParserBuilder);
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ParserBuilder_buildAcmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAcmParser());
            return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildAemParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::aem::AemParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAemParser());
            return ::org::orekit::files::ccsds::ndm::adm::aem::t_AemParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildApmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildApmParser());
            return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildCdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::cdm::CdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildCdmParser());
            return ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildNdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::NdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildNdmParser());
            return ::org::orekit::files::ccsds::ndm::t_NdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOcmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOcmParser());
            return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOemParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::oem::OemParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOemParser());
            return ::org::orekit::files::ccsds::ndm::odm::oem::t_OemParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOmmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOmmParser());
            return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOpmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOpmParser());
            return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildTdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::TdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildTdmParser());
            return ::org::orekit::files::ccsds::ndm::tdm::t_TdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_getDefaultInterpolationDegree(t_ParserBuilder *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDefaultInterpolationDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ParserBuilder_getDefaultMass(t_ParserBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDefaultMass());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ParserBuilder_getMu(t_ParserBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMu());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ParserBuilder_getParsedUnitsBehavior(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior result((jobject) NULL);
            OBJ_CALL(result = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_isSimpleEOP(t_ParserBuilder *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isSimpleEOP());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ParserBuilder_withDefaultInterpolationDegree(t_ParserBuilder *self, PyObject *arg)
          {
            jint a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.withDefaultInterpolationDegree(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDefaultInterpolationDegree", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withDefaultMass(t_ParserBuilder *self, PyObject *arg)
          {
            jdouble a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withDefaultMass(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDefaultMass", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withMu(t_ParserBuilder *self, PyObject *arg)
          {
            jdouble a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withMu(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withMu", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withParsedUnitsBehavior(t_ParserBuilder *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a0((jobject) NULL);
            PyTypeObject **p0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_))
            {
              OBJ_CALL(result = self->object.withParsedUnitsBehavior(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withParsedUnitsBehavior", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withSimpleEOP(t_ParserBuilder *self, PyObject *arg)
          {
            jboolean a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withSimpleEOP(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withSimpleEOP", arg);
            return NULL;
          }
          static PyObject *t_ParserBuilder_get__parameters_(t_ParserBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_ParserBuilder_get__defaultInterpolationDegree(t_ParserBuilder *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDefaultInterpolationDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ParserBuilder_get__defaultMass(t_ParserBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDefaultMass());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ParserBuilder_get__mu(t_ParserBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMu());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ParserBuilder_get__parsedUnitsBehavior(t_ParserBuilder *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior value((jobject) NULL);
            OBJ_CALL(value = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(value);
          }

          static PyObject *t_ParserBuilder_get__simpleEOP(t_ParserBuilder *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isSimpleEOP());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldSimpsonIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldSimpsonIntegrator::class$ = NULL;
        jmethodID *FieldSimpsonIntegrator::mids$ = NULL;
        bool FieldSimpsonIntegrator::live$ = false;
        jint FieldSimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldSimpsonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldSimpsonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_a9ccb012d4cb48bd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_54078aff55a90bb9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_613c8f46c659f636] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SIMPSON_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "SIMPSON_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a9ccb012d4cb48bd, a0.this$, a1, a2)) {}

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_54078aff55a90bb9, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldSimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldSimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldSimpsonIntegrator_of_(t_FieldSimpsonIntegrator *self, PyObject *args);
        static int t_FieldSimpsonIntegrator_init_(t_FieldSimpsonIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldSimpsonIntegrator_get__parameters_(t_FieldSimpsonIntegrator *self, void *data);
        static PyGetSetDef t_FieldSimpsonIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldSimpsonIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldSimpsonIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldSimpsonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldSimpsonIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldSimpsonIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldSimpsonIntegrator)[] = {
          { Py_tp_methods, t_FieldSimpsonIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldSimpsonIntegrator_init_ },
          { Py_tp_getset, t_FieldSimpsonIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldSimpsonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldSimpsonIntegrator, t_FieldSimpsonIntegrator, FieldSimpsonIntegrator);
        PyObject *t_FieldSimpsonIntegrator::wrap_Object(const FieldSimpsonIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldSimpsonIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldSimpsonIntegrator *self = (t_FieldSimpsonIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldSimpsonIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldSimpsonIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldSimpsonIntegrator *self = (t_FieldSimpsonIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldSimpsonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldSimpsonIntegrator), &PY_TYPE_DEF(FieldSimpsonIntegrator), module, "FieldSimpsonIntegrator", 0);
        }

        void t_FieldSimpsonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "class_", make_descriptor(FieldSimpsonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "wrapfn_", make_descriptor(t_FieldSimpsonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldSimpsonIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "SIMPSON_MAX_ITERATIONS_COUNT", make_descriptor(FieldSimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldSimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldSimpsonIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldSimpsonIntegrator::wrap_Object(FieldSimpsonIntegrator(((t_FieldSimpsonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldSimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldSimpsonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldSimpsonIntegrator_of_(t_FieldSimpsonIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldSimpsonIntegrator_init_(t_FieldSimpsonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldSimpsonIntegrator_get__parameters_(t_FieldSimpsonIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/PythonMessageType.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonMessageType::class$ = NULL;
          jmethodID *PythonMessageType::mids$ = NULL;
          bool PythonMessageType::live$ = false;

          jclass PythonMessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonMessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_parse_0a827faad8220c1a] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMessageType::PythonMessageType() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonMessageType::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonMessageType::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonMessageType::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_PythonMessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMessageType_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMessageType_init_(t_PythonMessageType *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMessageType_finalize(t_PythonMessageType *self);
          static PyObject *t_PythonMessageType_pythonExtension(t_PythonMessageType *self, PyObject *args);
          static jobject JNICALL t_PythonMessageType_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
          static void JNICALL t_PythonMessageType_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMessageType_get__self(t_PythonMessageType *self, void *data);
          static PyGetSetDef t_PythonMessageType__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMessageType, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMessageType__methods_[] = {
            DECLARE_METHOD(t_PythonMessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageType, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMessageType, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMessageType)[] = {
            { Py_tp_methods, t_PythonMessageType__methods_ },
            { Py_tp_init, (void *) t_PythonMessageType_init_ },
            { Py_tp_getset, t_PythonMessageType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMessageType, t_PythonMessageType, PythonMessageType);

          void t_PythonMessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMessageType), &PY_TYPE_DEF(PythonMessageType), module, "PythonMessageType", 1);
          }

          void t_PythonMessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "class_", make_descriptor(PythonMessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "wrapfn_", make_descriptor(t_PythonMessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMessageType::initializeClass);
            JNINativeMethod methods[] = {
              { "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;", (void *) t_PythonMessageType_parse0 },
              { "pythonDecRef", "()V", (void *) t_PythonMessageType_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMessageType::initializeClass, 1)))
              return NULL;
            return t_PythonMessageType::wrap_Object(PythonMessageType(((t_PythonMessageType *) arg)->object.this$));
          }
          static PyObject *t_PythonMessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMessageType_init_(t_PythonMessageType *self, PyObject *args, PyObject *kwds)
          {
            PythonMessageType object((jobject) NULL);

            INT_CALL(object = PythonMessageType());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMessageType_finalize(t_PythonMessageType *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMessageType_pythonExtension(t_PythonMessageType *self, PyObject *args)
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

          static jobject JNICALL t_PythonMessageType_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::gnss::metric::messages::ParsedMessage value((jobject) NULL);
            PyObject *o0 = ::org::orekit::gnss::metric::parser::t_EncodedMessage::wrap_Object(::org::orekit::gnss::metric::parser::EncodedMessage(a0));
            PyObject *result = PyObject_CallMethod(obj, "parse", "Oi", o0, (int) a1);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::gnss::metric::messages::ParsedMessage::initializeClass, &value))
            {
              throwTypeError("parse", result);
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

          static void JNICALL t_PythonMessageType_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMessageType_get__self(t_PythonMessageType *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeRateIonosphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeRateIonosphericDelayModifier::mids$ = NULL;
          bool BaseRangeRateIonosphericDelayModifier::live$ = false;

          jclass BaseRangeRateIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getIonoModel_d442018e79d7cb97] = env->getMethodID(cls, "getIonoModel", "()Lorg/orekit/models/earth/ionosphere/IonosphericModel;");
              mids$[mid_rangeRateErrorIonosphericModel_81f653af97ea34a8] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeRateErrorIonosphericModel_17bae2e3aa9bc870] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeRateIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
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
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_getParametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeRateIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeRateIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeRateIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeRateIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeRateIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeRateIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeRateIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeRateIonosphericDelayModifier, t_BaseRangeRateIonosphericDelayModifier, BaseRangeRateIonosphericDelayModifier);

          void t_BaseRangeRateIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeRateIonosphericDelayModifier), &PY_TYPE_DEF(BaseRangeRateIonosphericDelayModifier), module, "BaseRangeRateIonosphericDelayModifier", 0);
          }

          void t_BaseRangeRateIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "class_", make_descriptor(BaseRangeRateIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeRateIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeRateIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeRateIonosphericDelayModifier::wrap_Object(BaseRangeRateIonosphericDelayModifier(((t_BaseRangeRateIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeRateIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_getParametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self, void *data)
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
#include "org/hipparchus/linear/RRQRDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RRQRDecomposition::class$ = NULL;
      jmethodID *RRQRDecomposition::mids$ = NULL;
      bool RRQRDecomposition::live$ = false;

      jclass RRQRDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RRQRDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_08eaf415db10314f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getP_70a207fcbc031df2] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRank_abbeb9db7144ca23] = env->getMethodID(cls, "getRank", "(D)I");
          mids$[mid_getSolver_ccd666b17ae2e6eb] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_decompose_edb361bfdd1ad9ae] = env->getMethodID(cls, "decompose", "([[D)V");
          mids$[mid_performHouseholderReflection_03f9d79d0168ba0b] = env->getMethodID(cls, "performHouseholderReflection", "(I[[D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RRQRDecomposition::RRQRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::hipparchus::linear::QRDecomposition(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

      RRQRDecomposition::RRQRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::org::hipparchus::linear::QRDecomposition(env->newObject(initializeClass, &mids$, mid_init$_08eaf415db10314f, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix RRQRDecomposition::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_70a207fcbc031df2]));
      }

      jint RRQRDecomposition::getRank(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_abbeb9db7144ca23], a0);
      }

      ::org::hipparchus::linear::DecompositionSolver RRQRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_ccd666b17ae2e6eb]));
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
      static PyObject *t_RRQRDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RRQRDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RRQRDecomposition_init_(t_RRQRDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RRQRDecomposition_getP(t_RRQRDecomposition *self);
      static PyObject *t_RRQRDecomposition_getRank(t_RRQRDecomposition *self, PyObject *arg);
      static PyObject *t_RRQRDecomposition_getSolver(t_RRQRDecomposition *self, PyObject *args);
      static PyObject *t_RRQRDecomposition_get__p(t_RRQRDecomposition *self, void *data);
      static PyObject *t_RRQRDecomposition_get__solver(t_RRQRDecomposition *self, void *data);
      static PyGetSetDef t_RRQRDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_RRQRDecomposition, p),
        DECLARE_GET_FIELD(t_RRQRDecomposition, solver),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RRQRDecomposition__methods_[] = {
        DECLARE_METHOD(t_RRQRDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RRQRDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RRQRDecomposition, getP, METH_NOARGS),
        DECLARE_METHOD(t_RRQRDecomposition, getRank, METH_O),
        DECLARE_METHOD(t_RRQRDecomposition, getSolver, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RRQRDecomposition)[] = {
        { Py_tp_methods, t_RRQRDecomposition__methods_ },
        { Py_tp_init, (void *) t_RRQRDecomposition_init_ },
        { Py_tp_getset, t_RRQRDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RRQRDecomposition)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::QRDecomposition),
        NULL
      };

      DEFINE_TYPE(RRQRDecomposition, t_RRQRDecomposition, RRQRDecomposition);

      void t_RRQRDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(RRQRDecomposition), &PY_TYPE_DEF(RRQRDecomposition), module, "RRQRDecomposition", 0);
      }

      void t_RRQRDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RRQRDecomposition), "class_", make_descriptor(RRQRDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RRQRDecomposition), "wrapfn_", make_descriptor(t_RRQRDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RRQRDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RRQRDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RRQRDecomposition::initializeClass, 1)))
          return NULL;
        return t_RRQRDecomposition::wrap_Object(RRQRDecomposition(((t_RRQRDecomposition *) arg)->object.this$));
      }
      static PyObject *t_RRQRDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RRQRDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RRQRDecomposition_init_(t_RRQRDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            RRQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = RRQRDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            RRQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RRQRDecomposition(a0, a1));
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

      static PyObject *t_RRQRDecomposition_getP(t_RRQRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RRQRDecomposition_getRank(t_RRQRDecomposition *self, PyObject *arg)
      {
        jdouble a0;
        jint result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getRank(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRank", arg);
        return NULL;
      }

      static PyObject *t_RRQRDecomposition_getSolver(t_RRQRDecomposition *self, PyObject *args)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        return callSuper(PY_TYPE(RRQRDecomposition), (PyObject *) self, "getSolver", args, 2);
      }

      static PyObject *t_RRQRDecomposition_get__p(t_RRQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_RRQRDecomposition_get__solver(t_RRQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPF$CPFCoordinate::class$ = NULL;
        jmethodID *CPF$CPFCoordinate::mids$ = NULL;
        bool CPF$CPFCoordinate::live$ = false;

        jclass CPF$CPFCoordinate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPF$CPFCoordinate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9b2895eb1071c88b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;I)V");
            mids$[mid_init$_771259e0fa2256e6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;I)V");
            mids$[mid_getLeap_412668abc8d889e9] = env->getMethodID(cls, "getLeap", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF$CPFCoordinate::CPF$CPFCoordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_9b2895eb1071c88b, a0.this$, a1.this$, a2)) {}

        CPF$CPFCoordinate::CPF$CPFCoordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jint a3) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_771259e0fa2256e6, a0.this$, a1.this$, a2.this$, a3)) {}

        jint CPF$CPFCoordinate::getLeap() const
        {
          return env->callIntMethod(this$, mids$[mid_getLeap_412668abc8d889e9]);
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
        static PyObject *t_CPF$CPFCoordinate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPF$CPFCoordinate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPF$CPFCoordinate_init_(t_CPF$CPFCoordinate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPF$CPFCoordinate_getLeap(t_CPF$CPFCoordinate *self);
        static PyObject *t_CPF$CPFCoordinate_get__leap(t_CPF$CPFCoordinate *self, void *data);
        static PyGetSetDef t_CPF$CPFCoordinate__fields_[] = {
          DECLARE_GET_FIELD(t_CPF$CPFCoordinate, leap),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPF$CPFCoordinate__methods_[] = {
          DECLARE_METHOD(t_CPF$CPFCoordinate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFCoordinate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFCoordinate, getLeap, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPF$CPFCoordinate)[] = {
          { Py_tp_methods, t_CPF$CPFCoordinate__methods_ },
          { Py_tp_init, (void *) t_CPF$CPFCoordinate_init_ },
          { Py_tp_getset, t_CPF$CPFCoordinate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPF$CPFCoordinate)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
          NULL
        };

        DEFINE_TYPE(CPF$CPFCoordinate, t_CPF$CPFCoordinate, CPF$CPFCoordinate);

        void t_CPF$CPFCoordinate::install(PyObject *module)
        {
          installType(&PY_TYPE(CPF$CPFCoordinate), &PY_TYPE_DEF(CPF$CPFCoordinate), module, "CPF$CPFCoordinate", 0);
        }

        void t_CPF$CPFCoordinate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "class_", make_descriptor(CPF$CPFCoordinate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "wrapfn_", make_descriptor(t_CPF$CPFCoordinate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPF$CPFCoordinate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPF$CPFCoordinate::initializeClass, 1)))
            return NULL;
          return t_CPF$CPFCoordinate::wrap_Object(CPF$CPFCoordinate(((t_CPF$CPFCoordinate *) arg)->object.this$));
        }
        static PyObject *t_CPF$CPFCoordinate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPF$CPFCoordinate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPF$CPFCoordinate_init_(t_CPF$CPFCoordinate *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jint a2;
              CPF$CPFCoordinate object((jobject) NULL);

              if (!parseArgs(args, "kkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CPF$CPFCoordinate(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jint a3;
              CPF$CPFCoordinate object((jobject) NULL);

              if (!parseArgs(args, "kkkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CPF$CPFCoordinate(a0, a1, a2, a3));
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

        static PyObject *t_CPF$CPFCoordinate_getLeap(t_CPF$CPFCoordinate *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLeap());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPF$CPFCoordinate_get__leap(t_CPF$CPFCoordinate *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLeap());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitEphemerisFile$OrekitEphemerisSegment::class$ = NULL;
        jmethodID *OrekitEphemerisFile$OrekitEphemerisSegment::mids$ = NULL;
        bool OrekitEphemerisFile$OrekitEphemerisSegment::live$ = false;

        jclass OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1573fde9982ede03] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/frames/Frame;DI)V");
            mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_0d9551367f7ecdef] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile$OrekitEphemerisSegment::OrekitEphemerisFile$OrekitEphemerisSegment(const ::java::util::List & a0, const ::org::orekit::frames::Frame & a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1573fde9982ede03, a0.this$, a1.this$, a2, a3)) {}

        ::org::orekit::utils::CartesianDerivativesFilter OrekitEphemerisFile$OrekitEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837]));
        }

        ::java::util::List OrekitEphemerisFile$OrekitEphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_0d9551367f7ecdef]));
        }

        ::org::orekit::frames::Frame OrekitEphemerisFile$OrekitEphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
        }

        ::org::orekit::frames::Frame OrekitEphemerisFile$OrekitEphemerisSegment::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_6c9bc0a928c56d4e]));
        }

        jint OrekitEphemerisFile$OrekitEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_412668abc8d889e9]);
        }

        jdouble OrekitEphemerisFile$OrekitEphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitEphemerisSegment::getStop() const
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
      namespace general {
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitEphemerisFile$OrekitEphemerisSegment_init_(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getAvailableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getCoordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInterpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getMu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStart(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__availableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__coordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__frame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__inertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__interpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__mu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__start(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__stop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyGetSetDef t_OrekitEphemerisFile$OrekitEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, coordinates),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, frame),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, inertialFrame),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, mu),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, start),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitEphemerisFile$OrekitEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitEphemerisFile$OrekitEphemerisSegment)[] = {
          { Py_tp_methods, t_OrekitEphemerisFile$OrekitEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_OrekitEphemerisFile$OrekitEphemerisSegment_init_ },
          { Py_tp_getset, t_OrekitEphemerisFile$OrekitEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitEphemerisFile$OrekitEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment, t_OrekitEphemerisFile$OrekitEphemerisSegment, OrekitEphemerisFile$OrekitEphemerisSegment);

        void t_OrekitEphemerisFile$OrekitEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), &PY_TYPE_DEF(OrekitEphemerisFile$OrekitEphemerisSegment), module, "OrekitEphemerisFile$OrekitEphemerisSegment", 0);
        }

        void t_OrekitEphemerisFile$OrekitEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), "class_", make_descriptor(OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), "wrapfn_", make_descriptor(t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(OrekitEphemerisFile$OrekitEphemerisSegment(((t_OrekitEphemerisFile$OrekitEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitEphemerisFile$OrekitEphemerisSegment_init_(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          jdouble a2;
          jint a3;
          OrekitEphemerisFile$OrekitEphemerisSegment object((jobject) NULL);

          if (!parseArgs(args, "KkDI", ::java::util::List::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3))
          {
            INT_CALL(object = OrekitEphemerisFile$OrekitEphemerisSegment(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getAvailableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getCoordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInterpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getMu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStart(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__availableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__coordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__frame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__inertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__interpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__mu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__start(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__stop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
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
#include "org/orekit/attitudes/FieldAttitudeInterpolator.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldAttitudeInterpolator::class$ = NULL;
      jmethodID *FieldAttitudeInterpolator::mids$ = NULL;
      bool FieldAttitudeInterpolator::live$ = false;

      jclass FieldAttitudeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldAttitudeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fc2a315cdd1f83f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldTimeInterpolator;)V");
          mids$[mid_getAngularInterpolator_4c2e2080b65cbf9b] = env->getMethodID(cls, "getAngularInterpolator", "()Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_getReferenceFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_92e8eecd665d9f5b] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/attitudes/FieldAttitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAttitudeInterpolator::FieldAttitudeInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldTimeInterpolator & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_fc2a315cdd1f83f9, a0.this$, a1.this$)) {}

      ::org::orekit::time::FieldTimeInterpolator FieldAttitudeInterpolator::getAngularInterpolator() const
      {
        return ::org::orekit::time::FieldTimeInterpolator(env->callObjectMethod(this$, mids$[mid_getAngularInterpolator_4c2e2080b65cbf9b]));
      }

      ::org::orekit::frames::Frame FieldAttitudeInterpolator::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_6c9bc0a928c56d4e]));
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
      static PyObject *t_FieldAttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitudeInterpolator_of_(t_FieldAttitudeInterpolator *self, PyObject *args);
      static int t_FieldAttitudeInterpolator_init_(t_FieldAttitudeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAttitudeInterpolator_getAngularInterpolator(t_FieldAttitudeInterpolator *self);
      static PyObject *t_FieldAttitudeInterpolator_getReferenceFrame(t_FieldAttitudeInterpolator *self);
      static PyObject *t_FieldAttitudeInterpolator_get__angularInterpolator(t_FieldAttitudeInterpolator *self, void *data);
      static PyObject *t_FieldAttitudeInterpolator_get__referenceFrame(t_FieldAttitudeInterpolator *self, void *data);
      static PyObject *t_FieldAttitudeInterpolator_get__parameters_(t_FieldAttitudeInterpolator *self, void *data);
      static PyGetSetDef t_FieldAttitudeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, angularInterpolator),
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, referenceFrame),
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAttitudeInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldAttitudeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, getAngularInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, getReferenceFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAttitudeInterpolator)[] = {
        { Py_tp_methods, t_FieldAttitudeInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldAttitudeInterpolator_init_ },
        { Py_tp_getset, t_FieldAttitudeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAttitudeInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldAttitudeInterpolator, t_FieldAttitudeInterpolator, FieldAttitudeInterpolator);
      PyObject *t_FieldAttitudeInterpolator::wrap_Object(const FieldAttitudeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitudeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitudeInterpolator *self = (t_FieldAttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAttitudeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitudeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitudeInterpolator *self = (t_FieldAttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAttitudeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAttitudeInterpolator), &PY_TYPE_DEF(FieldAttitudeInterpolator), module, "FieldAttitudeInterpolator", 0);
      }

      void t_FieldAttitudeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "class_", make_descriptor(FieldAttitudeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "wrapfn_", make_descriptor(t_FieldAttitudeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAttitudeInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldAttitudeInterpolator::wrap_Object(FieldAttitudeInterpolator(((t_FieldAttitudeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldAttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAttitudeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAttitudeInterpolator_of_(t_FieldAttitudeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAttitudeInterpolator_init_(t_FieldAttitudeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::time::FieldTimeInterpolator a1((jobject) NULL);
        PyTypeObject **p1;
        FieldAttitudeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldTimeInterpolator::parameters_))
        {
          INT_CALL(object = FieldAttitudeInterpolator(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldAttitudeInterpolator_getAngularInterpolator(t_FieldAttitudeInterpolator *self)
      {
        ::org::orekit::time::FieldTimeInterpolator result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_FieldTimeInterpolator::wrap_Object(result);
      }

      static PyObject *t_FieldAttitudeInterpolator_getReferenceFrame(t_FieldAttitudeInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_FieldAttitudeInterpolator_get__parameters_(t_FieldAttitudeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAttitudeInterpolator_get__angularInterpolator(t_FieldAttitudeInterpolator *self, void *data)
      {
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_FieldTimeInterpolator::wrap_Object(value);
      }

      static PyObject *t_FieldAttitudeInterpolator_get__referenceFrame(t_FieldAttitudeInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CombinedObservationDataSet::class$ = NULL;
          jmethodID *CombinedObservationDataSet::mids$ = NULL;
          bool CombinedObservationDataSet::live$ = false;

          jclass CombinedObservationDataSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CombinedObservationDataSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_436465e6f8c87d12] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/time/AbsoluteDate;DLjava/util/List;)V");
              mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getObservationData_0d9551367f7ecdef] = env->getMethodID(cls, "getObservationData", "()Ljava/util/List;");
              mids$[mid_getPrnNumber_412668abc8d889e9] = env->getMethodID(cls, "getPrnNumber", "()I");
              mids$[mid_getRcvrClkOffset_557b8123390d8d0c] = env->getMethodID(cls, "getRcvrClkOffset", "()D");
              mids$[mid_getSatelliteSystem_8b86408cc2633961] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CombinedObservationDataSet::CombinedObservationDataSet(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_436465e6f8c87d12, a0.this$, a1, a2.this$, a3, a4.this$)) {}

          ::org::orekit::time::AbsoluteDate CombinedObservationDataSet::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
          }

          ::java::util::List CombinedObservationDataSet::getObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationData_0d9551367f7ecdef]));
          }

          jint CombinedObservationDataSet::getPrnNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getPrnNumber_412668abc8d889e9]);
          }

          jdouble CombinedObservationDataSet::getRcvrClkOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcvrClkOffset_557b8123390d8d0c]);
          }

          ::org::orekit::gnss::SatelliteSystem CombinedObservationDataSet::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_8b86408cc2633961]));
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
          static PyObject *t_CombinedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CombinedObservationDataSet_init_(t_CombinedObservationDataSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CombinedObservationDataSet_getDate(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getObservationData(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getPrnNumber(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getRcvrClkOffset(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getSatelliteSystem(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_get__date(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__observationData(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__prnNumber(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__rcvrClkOffset(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__satelliteSystem(t_CombinedObservationDataSet *self, void *data);
          static PyGetSetDef t_CombinedObservationDataSet__fields_[] = {
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, date),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, observationData),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, prnNumber),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, rcvrClkOffset),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, satelliteSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CombinedObservationDataSet__methods_[] = {
            DECLARE_METHOD(t_CombinedObservationDataSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationDataSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getDate, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getObservationData, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getPrnNumber, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getRcvrClkOffset, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getSatelliteSystem, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CombinedObservationDataSet)[] = {
            { Py_tp_methods, t_CombinedObservationDataSet__methods_ },
            { Py_tp_init, (void *) t_CombinedObservationDataSet_init_ },
            { Py_tp_getset, t_CombinedObservationDataSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CombinedObservationDataSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CombinedObservationDataSet, t_CombinedObservationDataSet, CombinedObservationDataSet);

          void t_CombinedObservationDataSet::install(PyObject *module)
          {
            installType(&PY_TYPE(CombinedObservationDataSet), &PY_TYPE_DEF(CombinedObservationDataSet), module, "CombinedObservationDataSet", 0);
          }

          void t_CombinedObservationDataSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationDataSet), "class_", make_descriptor(CombinedObservationDataSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationDataSet), "wrapfn_", make_descriptor(t_CombinedObservationDataSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationDataSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CombinedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CombinedObservationDataSet::initializeClass, 1)))
              return NULL;
            return t_CombinedObservationDataSet::wrap_Object(CombinedObservationDataSet(((t_CombinedObservationDataSet *) arg)->object.this$));
          }
          static PyObject *t_CombinedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CombinedObservationDataSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CombinedObservationDataSet_init_(t_CombinedObservationDataSet *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            ::java::util::List a4((jobject) NULL);
            PyTypeObject **p4;
            CombinedObservationDataSet object((jobject) NULL);

            if (!parseArgs(args, "KIkDK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = CombinedObservationDataSet(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CombinedObservationDataSet_getDate(t_CombinedObservationDataSet *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationDataSet_getObservationData(t_CombinedObservationDataSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CombinedObservationData));
          }

          static PyObject *t_CombinedObservationDataSet_getPrnNumber(t_CombinedObservationDataSet *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPrnNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CombinedObservationDataSet_getRcvrClkOffset(t_CombinedObservationDataSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CombinedObservationDataSet_getSatelliteSystem(t_CombinedObservationDataSet *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationDataSet_get__date(t_CombinedObservationDataSet *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationDataSet_get__observationData(t_CombinedObservationDataSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationDataSet_get__prnNumber(t_CombinedObservationDataSet *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPrnNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CombinedObservationDataSet_get__rcvrClkOffset(t_CombinedObservationDataSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CombinedObservationDataSet_get__satelliteSystem(t_CombinedObservationDataSet *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ClassicalRungeKuttaIntegrator::class$ = NULL;
        jmethodID *ClassicalRungeKuttaIntegrator::mids$ = NULL;
        bool ClassicalRungeKuttaIntegrator::live$ = false;

        jclass ClassicalRungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_8cf5267aa13a77f3] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_a53a7513ecedada2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_a53a7513ecedada2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_78423fdbb55f4b1a] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaIntegrator::ClassicalRungeKuttaIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        JArray< JArray< jdouble > > ClassicalRungeKuttaIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_8cf5267aa13a77f3]));
        }

        JArray< jdouble > ClassicalRungeKuttaIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_a53a7513ecedada2]));
        }

        JArray< jdouble > ClassicalRungeKuttaIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_a53a7513ecedada2]));
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
        static PyObject *t_ClassicalRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ClassicalRungeKuttaIntegrator_init_(t_ClassicalRungeKuttaIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getA(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getB(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getC(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__a(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__b(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__c(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, a),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, b),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaIntegrator_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaIntegrator, t_ClassicalRungeKuttaIntegrator, ClassicalRungeKuttaIntegrator);

        void t_ClassicalRungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaIntegrator), &PY_TYPE_DEF(ClassicalRungeKuttaIntegrator), module, "ClassicalRungeKuttaIntegrator", 0);
        }

        void t_ClassicalRungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "class_", make_descriptor(ClassicalRungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaIntegrator::wrap_Object(ClassicalRungeKuttaIntegrator(((t_ClassicalRungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ClassicalRungeKuttaIntegrator_init_(t_ClassicalRungeKuttaIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ClassicalRungeKuttaIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ClassicalRungeKuttaIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getA(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getB(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getC(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__a(t_ClassicalRungeKuttaIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__b(t_ClassicalRungeKuttaIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__c(t_ClassicalRungeKuttaIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/refraction/AtmosphericComputationParameters.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *AtmosphericRefraction::class$ = NULL;
        jmethodID *AtmosphericRefraction::mids$ = NULL;
        bool AtmosphericRefraction::live$ = false;

        jclass AtmosphericRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/AtmosphericRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_applyCorrection_981eb3dc755df9fc] = env->getMethodID(cls, "applyCorrection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/orekit/rugged/intersection/IntersectionAlgorithm;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_computeGridCorrectionFunctions_7f8f3b09c1fc49ca] = env->getMethodID(cls, "computeGridCorrectionFunctions", "([[Lorg/orekit/rugged/linesensor/SensorPixel;)V");
            mids$[mid_configureCorrectionGrid_03c83376fa653679] = env->getMethodID(cls, "configureCorrectionGrid", "(Lorg/orekit/rugged/linesensor/LineSensor;II)V");
            mids$[mid_deactivateComputation_0640e6acf969ed28] = env->getMethodID(cls, "deactivateComputation", "()V");
            mids$[mid_getBifLine_21978c3787844e9d] = env->getMethodID(cls, "getBifLine", "()Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");
            mids$[mid_getBifPixel_21978c3787844e9d] = env->getMethodID(cls, "getBifPixel", "()Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");
            mids$[mid_getComputationParameters_68f95f8b3d5bc1b9] = env->getMethodID(cls, "getComputationParameters", "()Lorg/orekit/rugged/refraction/AtmosphericComputationParameters;");
            mids$[mid_isSameContext_81615cd59e7dd174] = env->getMethodID(cls, "isSameContext", "(Ljava/lang/String;II)Ljava/lang/Boolean;");
            mids$[mid_mustBeComputed_89b302893bdbe1f1] = env->getMethodID(cls, "mustBeComputed", "()Z");
            mids$[mid_reactivateComputation_0640e6acf969ed28] = env->getMethodID(cls, "reactivateComputation", "()V");
            mids$[mid_setGridSteps_a84c9a223722150c] = env->getMethodID(cls, "setGridSteps", "(II)V");
            mids$[mid_setInverseLocMargin_10f281d777284cea] = env->getMethodID(cls, "setInverseLocMargin", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint AtmosphericRefraction::applyCorrection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a2, const ::org::orekit::rugged::intersection::IntersectionAlgorithm & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_applyCorrection_981eb3dc755df9fc], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        void AtmosphericRefraction::computeGridCorrectionFunctions(const JArray< JArray< ::org::orekit::rugged::linesensor::SensorPixel > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_computeGridCorrectionFunctions_7f8f3b09c1fc49ca], a0.this$);
        }

        void AtmosphericRefraction::configureCorrectionGrid(const ::org::orekit::rugged::linesensor::LineSensor & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_configureCorrectionGrid_03c83376fa653679], a0.this$, a1, a2);
        }

        void AtmosphericRefraction::deactivateComputation() const
        {
          env->callVoidMethod(this$, mids$[mid_deactivateComputation_0640e6acf969ed28]);
        }

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction AtmosphericRefraction::getBifLine() const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_getBifLine_21978c3787844e9d]));
        }

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction AtmosphericRefraction::getBifPixel() const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_getBifPixel_21978c3787844e9d]));
        }

        ::org::orekit::rugged::refraction::AtmosphericComputationParameters AtmosphericRefraction::getComputationParameters() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericComputationParameters(env->callObjectMethod(this$, mids$[mid_getComputationParameters_68f95f8b3d5bc1b9]));
        }

        ::java::lang::Boolean AtmosphericRefraction::isSameContext(const ::java::lang::String & a0, jint a1, jint a2) const
        {
          return ::java::lang::Boolean(env->callObjectMethod(this$, mids$[mid_isSameContext_81615cd59e7dd174], a0.this$, a1, a2));
        }

        jboolean AtmosphericRefraction::mustBeComputed() const
        {
          return env->callBooleanMethod(this$, mids$[mid_mustBeComputed_89b302893bdbe1f1]);
        }

        void AtmosphericRefraction::reactivateComputation() const
        {
          env->callVoidMethod(this$, mids$[mid_reactivateComputation_0640e6acf969ed28]);
        }

        void AtmosphericRefraction::setGridSteps(jint a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setGridSteps_a84c9a223722150c], a0, a1);
        }

        void AtmosphericRefraction::setInverseLocMargin(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInverseLocMargin_10f281d777284cea], a0);
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
      namespace refraction {
        static PyObject *t_AtmosphericRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_applyCorrection(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_computeGridCorrectionFunctions(t_AtmosphericRefraction *self, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_configureCorrectionGrid(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_deactivateComputation(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getBifLine(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getBifPixel(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getComputationParameters(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_isSameContext(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_mustBeComputed(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_reactivateComputation(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_setGridSteps(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_setInverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_get__bifLine(t_AtmosphericRefraction *self, void *data);
        static PyObject *t_AtmosphericRefraction_get__bifPixel(t_AtmosphericRefraction *self, void *data);
        static PyObject *t_AtmosphericRefraction_get__computationParameters(t_AtmosphericRefraction *self, void *data);
        static int t_AtmosphericRefraction_set__inverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg, void *data);
        static PyGetSetDef t_AtmosphericRefraction__fields_[] = {
          DECLARE_GET_FIELD(t_AtmosphericRefraction, bifLine),
          DECLARE_GET_FIELD(t_AtmosphericRefraction, bifPixel),
          DECLARE_GET_FIELD(t_AtmosphericRefraction, computationParameters),
          DECLARE_SET_FIELD(t_AtmosphericRefraction, inverseLocMargin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AtmosphericRefraction__methods_[] = {
          DECLARE_METHOD(t_AtmosphericRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericRefraction, applyCorrection, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, computeGridCorrectionFunctions, METH_O),
          DECLARE_METHOD(t_AtmosphericRefraction, configureCorrectionGrid, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, deactivateComputation, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getBifLine, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getBifPixel, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getComputationParameters, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, isSameContext, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, mustBeComputed, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, reactivateComputation, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, setGridSteps, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, setInverseLocMargin, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AtmosphericRefraction)[] = {
          { Py_tp_methods, t_AtmosphericRefraction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AtmosphericRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AtmosphericRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AtmosphericRefraction, t_AtmosphericRefraction, AtmosphericRefraction);

        void t_AtmosphericRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(AtmosphericRefraction), &PY_TYPE_DEF(AtmosphericRefraction), module, "AtmosphericRefraction", 0);
        }

        void t_AtmosphericRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "class_", make_descriptor(AtmosphericRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "wrapfn_", make_descriptor(t_AtmosphericRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AtmosphericRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AtmosphericRefraction::initializeClass, 1)))
            return NULL;
          return t_AtmosphericRefraction::wrap_Object(AtmosphericRefraction(((t_AtmosphericRefraction *) arg)->object.this$));
        }
        static PyObject *t_AtmosphericRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AtmosphericRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AtmosphericRefraction_applyCorrection(t_AtmosphericRefraction *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a2((jobject) NULL);
          ::org::orekit::rugged::intersection::IntersectionAlgorithm a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::orekit::rugged::intersection::IntersectionAlgorithm::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.applyCorrection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "applyCorrection", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_computeGridCorrectionFunctions(t_AtmosphericRefraction *self, PyObject *arg)
        {
          JArray< JArray< ::org::orekit::rugged::linesensor::SensorPixel > > a0((jobject) NULL);

          if (!parseArg(arg, "[[k", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.computeGridCorrectionFunctions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "computeGridCorrectionFunctions", arg);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_configureCorrectionGrid(t_AtmosphericRefraction *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "kII", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.configureCorrectionGrid(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "configureCorrectionGrid", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_deactivateComputation(t_AtmosphericRefraction *self)
        {
          OBJ_CALL(self->object.deactivateComputation());
          Py_RETURN_NONE;
        }

        static PyObject *t_AtmosphericRefraction_getBifLine(t_AtmosphericRefraction *self)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getBifLine());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_getBifPixel(t_AtmosphericRefraction *self)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getBifPixel());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_getComputationParameters(t_AtmosphericRefraction *self)
        {
          ::org::orekit::rugged::refraction::AtmosphericComputationParameters result((jobject) NULL);
          OBJ_CALL(result = self->object.getComputationParameters());
          return ::org::orekit::rugged::refraction::t_AtmosphericComputationParameters::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_isSameContext(t_AtmosphericRefraction *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Boolean result((jobject) NULL);

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.isSameContext(a0, a1, a2));
            return ::java::lang::t_Boolean::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isSameContext", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_mustBeComputed(t_AtmosphericRefraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.mustBeComputed());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AtmosphericRefraction_reactivateComputation(t_AtmosphericRefraction *self)
        {
          OBJ_CALL(self->object.reactivateComputation());
          Py_RETURN_NONE;
        }

        static PyObject *t_AtmosphericRefraction_setGridSteps(t_AtmosphericRefraction *self, PyObject *args)
        {
          jint a0;
          jint a1;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(self->object.setGridSteps(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGridSteps", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_setInverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInverseLocMargin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInverseLocMargin", arg);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_get__bifLine(t_AtmosphericRefraction *self, void *data)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getBifLine());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(value);
        }

        static PyObject *t_AtmosphericRefraction_get__bifPixel(t_AtmosphericRefraction *self, void *data)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getBifPixel());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(value);
        }

        static PyObject *t_AtmosphericRefraction_get__computationParameters(t_AtmosphericRefraction *self, void *data)
        {
          ::org::orekit::rugged::refraction::AtmosphericComputationParameters value((jobject) NULL);
          OBJ_CALL(value = self->object.getComputationParameters());
          return ::org::orekit::rugged::refraction::t_AtmosphericComputationParameters::wrap_Object(value);
        }

        static int t_AtmosphericRefraction_set__inverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInverseLocMargin(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "inverseLocMargin", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/UniformIntegerDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *UniformIntegerDistribution::class$ = NULL;
        jmethodID *UniformIntegerDistribution::mids$ = NULL;
        bool UniformIntegerDistribution::live$ = false;

        jclass UniformIntegerDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/UniformIntegerDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_cumulativeProbability_69cfb132c661aca4] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_69cfb132c661aca4] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UniformIntegerDistribution::UniformIntegerDistribution(jint a0, jint a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

        jdouble UniformIntegerDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_69cfb132c661aca4], a0);
        }

        jdouble UniformIntegerDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble UniformIntegerDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jint UniformIntegerDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_412668abc8d889e9]);
        }

        jint UniformIntegerDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_412668abc8d889e9]);
        }

        jboolean UniformIntegerDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble UniformIntegerDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_69cfb132c661aca4], a0);
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
      namespace discrete {
        static PyObject *t_UniformIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UniformIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UniformIntegerDistribution_init_(t_UniformIntegerDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UniformIntegerDistribution_cumulativeProbability(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getNumericalMean(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getNumericalVariance(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getSupportLowerBound(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getSupportUpperBound(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_isSupportConnected(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_probability(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_get__numericalMean(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__numericalVariance(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportConnected(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportLowerBound(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportUpperBound(t_UniformIntegerDistribution *self, void *data);
        static PyGetSetDef t_UniformIntegerDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, numericalMean),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportConnected),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UniformIntegerDistribution__methods_[] = {
          DECLARE_METHOD(t_UniformIntegerDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformIntegerDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformIntegerDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UniformIntegerDistribution)[] = {
          { Py_tp_methods, t_UniformIntegerDistribution__methods_ },
          { Py_tp_init, (void *) t_UniformIntegerDistribution_init_ },
          { Py_tp_getset, t_UniformIntegerDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UniformIntegerDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(UniformIntegerDistribution, t_UniformIntegerDistribution, UniformIntegerDistribution);

        void t_UniformIntegerDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(UniformIntegerDistribution), &PY_TYPE_DEF(UniformIntegerDistribution), module, "UniformIntegerDistribution", 0);
        }

        void t_UniformIntegerDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "class_", make_descriptor(UniformIntegerDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "wrapfn_", make_descriptor(t_UniformIntegerDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UniformIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UniformIntegerDistribution::initializeClass, 1)))
            return NULL;
          return t_UniformIntegerDistribution::wrap_Object(UniformIntegerDistribution(((t_UniformIntegerDistribution *) arg)->object.this$));
        }
        static PyObject *t_UniformIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UniformIntegerDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UniformIntegerDistribution_init_(t_UniformIntegerDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          UniformIntegerDistribution object((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            INT_CALL(object = UniformIntegerDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UniformIntegerDistribution_cumulativeProbability(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getNumericalMean(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getNumericalVariance(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getSupportLowerBound(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getSupportUpperBound(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_isSupportConnected(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_probability(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_get__numericalMean(t_UniformIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__numericalVariance(t_UniformIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportConnected(t_UniformIntegerDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportLowerBound(t_UniformIntegerDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportUpperBound(t_UniformIntegerDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {

          ::java::lang::Class *RinexFileType::class$ = NULL;
          jmethodID *RinexFileType::mids$ = NULL;
          bool RinexFileType::live$ = false;
          RinexFileType *RinexFileType::NAVIGATION = NULL;
          RinexFileType *RinexFileType::OBSERVATION = NULL;

          jclass RinexFileType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/utils/RinexFileType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_parseRinexFileType_541df4a60273096d] = env->getStaticMethodID(cls, "parseRinexFileType", "(Ljava/lang/String;)Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_valueOf_541df4a60273096d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_values_564b10a0f5ff5244] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/utils/RinexFileType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NAVIGATION = new RinexFileType(env->getStaticObjectField(cls, "NAVIGATION", "Lorg/orekit/files/rinex/utils/RinexFileType;"));
              OBSERVATION = new RinexFileType(env->getStaticObjectField(cls, "OBSERVATION", "Lorg/orekit/files/rinex/utils/RinexFileType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexFileType RinexFileType::parseRinexFileType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexFileType(env->callStaticObjectMethod(cls, mids$[mid_parseRinexFileType_541df4a60273096d], a0.this$));
          }

          RinexFileType RinexFileType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexFileType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_541df4a60273096d], a0.this$));
          }

          JArray< RinexFileType > RinexFileType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexFileType >(env->callStaticObjectMethod(cls, mids$[mid_values_564b10a0f5ff5244]));
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
        namespace utils {
          static PyObject *t_RinexFileType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_of_(t_RinexFileType *self, PyObject *args);
          static PyObject *t_RinexFileType_parseRinexFileType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RinexFileType_values(PyTypeObject *type);
          static PyObject *t_RinexFileType_get__parameters_(t_RinexFileType *self, void *data);
          static PyGetSetDef t_RinexFileType__fields_[] = {
            DECLARE_GET_FIELD(t_RinexFileType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexFileType__methods_[] = {
            DECLARE_METHOD(t_RinexFileType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexFileType, parseRinexFileType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexFileType)[] = {
            { Py_tp_methods, t_RinexFileType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexFileType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexFileType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RinexFileType, t_RinexFileType, RinexFileType);
          PyObject *t_RinexFileType::wrap_Object(const RinexFileType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexFileType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexFileType *self = (t_RinexFileType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexFileType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexFileType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexFileType *self = (t_RinexFileType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexFileType::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexFileType), &PY_TYPE_DEF(RinexFileType), module, "RinexFileType", 0);
          }

          void t_RinexFileType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "class_", make_descriptor(RinexFileType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "wrapfn_", make_descriptor(t_RinexFileType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexFileType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "NAVIGATION", make_descriptor(t_RinexFileType::wrap_Object(*RinexFileType::NAVIGATION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "OBSERVATION", make_descriptor(t_RinexFileType::wrap_Object(*RinexFileType::OBSERVATION)));
          }

          static PyObject *t_RinexFileType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexFileType::initializeClass, 1)))
              return NULL;
            return t_RinexFileType::wrap_Object(RinexFileType(((t_RinexFileType *) arg)->object.this$));
          }
          static PyObject *t_RinexFileType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexFileType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexFileType_of_(t_RinexFileType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RinexFileType_parseRinexFileType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexFileType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::parseRinexFileType(a0));
              return t_RinexFileType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parseRinexFileType", arg);
            return NULL;
          }

          static PyObject *t_RinexFileType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexFileType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::valueOf(a0));
              return t_RinexFileType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RinexFileType_values(PyTypeObject *type)
          {
            JArray< RinexFileType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::values());
            return JArray<jobject>(result.this$).wrap(t_RinexFileType::wrap_jobject);
          }
          static PyObject *t_RinexFileType_get__parameters_(t_RinexFileType *self, void *data)
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
#include "java/util/Set.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Set::class$ = NULL;
    jmethodID *Set::mids$ = NULL;
    bool Set::live$ = false;

    jclass Set::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Set");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_221e8e85cb385209] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_221e8e85cb385209] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_copyOf_eaf82a41b60fcb5a] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Collection;)Ljava/util/Set;");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_of_2dfcbd371d62f4e1] = env->getStaticMethodID(cls, "of", "()Ljava/util/Set;");
        mids$[mid_of_d6456602906d57e6] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_6459512c177e7487] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_8a965f74d6131377] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_f57530e6ea576bb5] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_09e567b2bb3add30] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_af2f8f32107687bd] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_38e2afb23e227320] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_8f075837d6ee7cbf] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_5f65cd7ea119758f] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_9930f3a9d057e17d] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_c5f04903206f4633] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_remove_221e8e85cb385209] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_0a89e3b18808f850] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_toArray_6555a5198c71b73a] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_73423092793bcd23] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Set::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_221e8e85cb385209], a0.this$);
    }

    jboolean Set::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_15ecf331dcc5aaf3], a0.this$);
    }

    void Set::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
    }

    jboolean Set::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_221e8e85cb385209], a0.this$);
    }

    jboolean Set::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_15ecf331dcc5aaf3], a0.this$);
    }

    Set Set::copyOf(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_copyOf_eaf82a41b60fcb5a], a0.this$));
    }

    jboolean Set::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jint Set::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean Set::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    ::java::util::Iterator Set::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
    }

    Set Set::of()
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_2dfcbd371d62f4e1]));
    }

    Set Set::of(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_d6456602906d57e6], a0.this$));
    }

    Set Set::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_6459512c177e7487], a0.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_8a965f74d6131377], a0.this$, a1.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_f57530e6ea576bb5], a0.this$, a1.this$, a2.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_09e567b2bb3add30], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_af2f8f32107687bd], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_38e2afb23e227320], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_8f075837d6ee7cbf], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_5f65cd7ea119758f], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_9930f3a9d057e17d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_c5f04903206f4633], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    jboolean Set::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_221e8e85cb385209], a0.this$);
    }

    jboolean Set::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_15ecf331dcc5aaf3], a0.this$);
    }

    jboolean Set::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_15ecf331dcc5aaf3], a0.this$);
    }

    jint Set::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
    }

    ::java::util::Spliterator Set::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_0a89e3b18808f850]));
    }

    JArray< ::java::lang::Object > Set::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_6555a5198c71b73a]));
    }

    JArray< ::java::lang::Object > Set::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_73423092793bcd23], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Set_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Set_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Set_of_(t_Set *self, PyObject *args);
    static PyObject *t_Set_add(t_Set *self, PyObject *args);
    static PyObject *t_Set_addAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_clear(t_Set *self, PyObject *args);
    static PyObject *t_Set_contains(t_Set *self, PyObject *args);
    static PyObject *t_Set_containsAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_copyOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Set_equals(t_Set *self, PyObject *args);
    static PyObject *t_Set_hashCode(t_Set *self, PyObject *args);
    static PyObject *t_Set_isEmpty(t_Set *self, PyObject *args);
    static PyObject *t_Set_iterator(t_Set *self, PyObject *args);
    static PyObject *t_Set_of(PyTypeObject *type, PyObject *args);
    static PyObject *t_Set_remove(t_Set *self, PyObject *args);
    static PyObject *t_Set_removeAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_retainAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_size(t_Set *self, PyObject *args);
    static PyObject *t_Set_spliterator(t_Set *self, PyObject *args);
    static PyObject *t_Set_toArray(t_Set *self, PyObject *args);
    static PyObject *t_Set_get__empty(t_Set *self, void *data);
    static PyObject *t_Set_get__parameters_(t_Set *self, void *data);
    static PyGetSetDef t_Set__fields_[] = {
      DECLARE_GET_FIELD(t_Set, empty),
      DECLARE_GET_FIELD(t_Set, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Set__methods_[] = {
      DECLARE_METHOD(t_Set, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Set, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Set, of_, METH_VARARGS),
      DECLARE_METHOD(t_Set, add, METH_VARARGS),
      DECLARE_METHOD(t_Set, addAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, clear, METH_VARARGS),
      DECLARE_METHOD(t_Set, contains, METH_VARARGS),
      DECLARE_METHOD(t_Set, containsAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, copyOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Set, equals, METH_VARARGS),
      DECLARE_METHOD(t_Set, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Set, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_Set, iterator, METH_VARARGS),
      DECLARE_METHOD(t_Set, of, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Set, remove, METH_VARARGS),
      DECLARE_METHOD(t_Set, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, size, METH_VARARGS),
      DECLARE_METHOD(t_Set, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_Set, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Set)[] = {
      { Py_tp_methods, t_Set__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Set__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_Set *)) get_generic_iterator< t_Set >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Set)[] = {
      &PY_TYPE_DEF(::java::util::Collection),
      NULL
    };

    DEFINE_TYPE(Set, t_Set, Set);
    PyObject *t_Set::wrap_Object(const Set& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Set::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Set *self = (t_Set *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Set::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Set::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Set *self = (t_Set *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Set::install(PyObject *module)
    {
      installType(&PY_TYPE(Set), &PY_TYPE_DEF(Set), module, "Set", 0);
    }

    void t_Set::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Set), "class_", make_descriptor(Set::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Set), "wrapfn_", make_descriptor(t_Set::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Set), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Set_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Set::initializeClass, 1)))
        return NULL;
      return t_Set::wrap_Object(Set(((t_Set *) arg)->object.this$));
    }
    static PyObject *t_Set_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Set::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Set_of_(t_Set *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Set_add(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_Set_addAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_Set_clear(t_Set *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_Set_contains(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_Set_containsAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "containsAll", args, 2);
    }

    static PyObject *t_Set_copyOf(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Set::copyOf(a0));
        return t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "copyOf", arg);
      return NULL;
    }

    static PyObject *t_Set_equals(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Set_hashCode(t_Set *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Set_isEmpty(t_Set *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_Set_iterator(t_Set *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_Set_of(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Set result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Set::of());
          return t_Set::wrap_Object(result);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0));
            return t_Set::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 5:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooooo", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooooo", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 7:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6, a7));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 9:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6, a7, a8));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 10:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            return t_Set::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "of", args);
      return NULL;
    }

    static PyObject *t_Set_remove(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_Set_removeAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_Set_retainAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_Set_size(t_Set *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_Set_spliterator(t_Set *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_Set_toArray(t_Set *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "toArray", args, 2);
    }
    static PyObject *t_Set_get__parameters_(t_Set *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Set_get__empty(t_Set *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonUTCTAIOffsetsLoader.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonUTCTAIOffsetsLoader::class$ = NULL;
      jmethodID *PythonUTCTAIOffsetsLoader::mids$ = NULL;
      bool PythonUTCTAIOffsetsLoader::live$ = false;

      jclass PythonUTCTAIOffsetsLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonUTCTAIOffsetsLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadOffsets_0d9551367f7ecdef] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUTCTAIOffsetsLoader::PythonUTCTAIOffsetsLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonUTCTAIOffsetsLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonUTCTAIOffsetsLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonUTCTAIOffsetsLoader::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonUTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonUTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonUTCTAIOffsetsLoader_init_(t_PythonUTCTAIOffsetsLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonUTCTAIOffsetsLoader_finalize(t_PythonUTCTAIOffsetsLoader *self);
      static PyObject *t_PythonUTCTAIOffsetsLoader_pythonExtension(t_PythonUTCTAIOffsetsLoader *self, PyObject *args);
      static jobject JNICALL t_PythonUTCTAIOffsetsLoader_loadOffsets0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonUTCTAIOffsetsLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonUTCTAIOffsetsLoader_get__self(t_PythonUTCTAIOffsetsLoader *self, void *data);
      static PyGetSetDef t_PythonUTCTAIOffsetsLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonUTCTAIOffsetsLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonUTCTAIOffsetsLoader__methods_[] = {
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonUTCTAIOffsetsLoader)[] = {
        { Py_tp_methods, t_PythonUTCTAIOffsetsLoader__methods_ },
        { Py_tp_init, (void *) t_PythonUTCTAIOffsetsLoader_init_ },
        { Py_tp_getset, t_PythonUTCTAIOffsetsLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonUTCTAIOffsetsLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonUTCTAIOffsetsLoader, t_PythonUTCTAIOffsetsLoader, PythonUTCTAIOffsetsLoader);

      void t_PythonUTCTAIOffsetsLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonUTCTAIOffsetsLoader), &PY_TYPE_DEF(PythonUTCTAIOffsetsLoader), module, "PythonUTCTAIOffsetsLoader", 1);
      }

      void t_PythonUTCTAIOffsetsLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUTCTAIOffsetsLoader), "class_", make_descriptor(PythonUTCTAIOffsetsLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUTCTAIOffsetsLoader), "wrapfn_", make_descriptor(t_PythonUTCTAIOffsetsLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUTCTAIOffsetsLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonUTCTAIOffsetsLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "loadOffsets", "()Ljava/util/List;", (void *) t_PythonUTCTAIOffsetsLoader_loadOffsets0 },
          { "pythonDecRef", "()V", (void *) t_PythonUTCTAIOffsetsLoader_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonUTCTAIOffsetsLoader::initializeClass, 1)))
          return NULL;
        return t_PythonUTCTAIOffsetsLoader::wrap_Object(PythonUTCTAIOffsetsLoader(((t_PythonUTCTAIOffsetsLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonUTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonUTCTAIOffsetsLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonUTCTAIOffsetsLoader_init_(t_PythonUTCTAIOffsetsLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonUTCTAIOffsetsLoader object((jobject) NULL);

        INT_CALL(object = PythonUTCTAIOffsetsLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_finalize(t_PythonUTCTAIOffsetsLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_pythonExtension(t_PythonUTCTAIOffsetsLoader *self, PyObject *args)
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

      static jobject JNICALL t_PythonUTCTAIOffsetsLoader_loadOffsets0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "loadOffsets", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("loadOffsets", result);
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

      static void JNICALL t_PythonUTCTAIOffsetsLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_get__self(t_PythonUTCTAIOffsetsLoader *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeManeuverKey::class$ = NULL;
              jmethodID *AttitudeManeuverKey::mids$ = NULL;
              bool AttitudeManeuverKey::live$ = false;
              AttitudeManeuverKey *AttitudeManeuverKey::ACTUATOR_USED = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::COMMENT = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_BEGIN_TIME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_DURATION = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_END_TIME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_ID = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_PREV_ID = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_PURPOSE = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_ATTITUDE = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_MOMENTUM = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_MOM_FRAME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_SPINRATE = NULL;

              jclass AttitudeManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_0d19cfc750cef9e3] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver;)Z");
                  mids$[mid_valueOf_55f378a0290449fd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;");
                  mids$[mid_values_fe8b7d4a129438b3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACTUATOR_USED = new AttitudeManeuverKey(env->getStaticObjectField(cls, "ACTUATOR_USED", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  COMMENT = new AttitudeManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_BEGIN_TIME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_BEGIN_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_DURATION = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_END_TIME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_END_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_ID = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_PREV_ID = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_PURPOSE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_PURPOSE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_ATTITUDE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_ATTITUDE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_MOMENTUM = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_MOMENTUM", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_MOM_FRAME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_MOM_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_SPINRATE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_SPINRATE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_0d19cfc750cef9e3], a0.this$, a1.this$, a2.this$);
              }

              AttitudeManeuverKey AttitudeManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_55f378a0290449fd], a0.this$));
              }

              JArray< AttitudeManeuverKey > AttitudeManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_fe8b7d4a129438b3]));
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
              static PyObject *t_AttitudeManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeManeuverKey_of_(t_AttitudeManeuverKey *self, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_process(t_AttitudeManeuverKey *self, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeManeuverKey_get__parameters_(t_AttitudeManeuverKey *self, void *data);
              static PyGetSetDef t_AttitudeManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeManeuverKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeManeuverKey)[] = {
                { Py_tp_methods, t_AttitudeManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeManeuverKey, t_AttitudeManeuverKey, AttitudeManeuverKey);
              PyObject *t_AttitudeManeuverKey::wrap_Object(const AttitudeManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeManeuverKey *self = (t_AttitudeManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeManeuverKey *self = (t_AttitudeManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeManeuverKey), &PY_TYPE_DEF(AttitudeManeuverKey), module, "AttitudeManeuverKey", 0);
              }

              void t_AttitudeManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "class_", make_descriptor(AttitudeManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "wrapfn_", make_descriptor(t_AttitudeManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "ACTUATOR_USED", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::ACTUATOR_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "COMMENT", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_BEGIN_TIME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_BEGIN_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_DURATION", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_END_TIME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_END_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_ID", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_PREV_ID", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_PURPOSE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_PURPOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_ATTITUDE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_ATTITUDE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_MOMENTUM", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_MOMENTUM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_MOM_FRAME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_MOM_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_SPINRATE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_SPINRATE)));
              }

              static PyObject *t_AttitudeManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeManeuverKey::wrap_Object(AttitudeManeuverKey(((t_AttitudeManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeManeuverKey_of_(t_AttitudeManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeManeuverKey_process(t_AttitudeManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuverKey::valueOf(a0));
                  return t_AttitudeManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeManeuverKey_values(PyTypeObject *type)
              {
                JArray< AttitudeManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeManeuverKey::wrap_jobject);
              }
              static PyObject *t_AttitudeManeuverKey_get__parameters_(t_AttitudeManeuverKey *self, void *data)
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
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitStepInterpolator::class$ = NULL;
        jmethodID *OrekitStepInterpolator::mids$ = NULL;
        bool OrekitStepInterpolator::live$ = false;

        jclass OrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_15e85d5301b90ef8] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getInterpolatedState_15e0d02372b1347b] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPreviousState_15e85d5301b90ef8] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isCurrentStateInterpolated_89b302893bdbe1f1] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_89b302893bdbe1f1] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_89b302893bdbe1f1] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_6456e7061fff7584] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/sampling/OrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getCurrentState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getCurrentState_15e85d5301b90ef8]));
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getInterpolatedState(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_15e0d02372b1347b], a0.this$));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates OrekitStepInterpolator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_17742a9a6655bdb1], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getPreviousState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getPreviousState_15e85d5301b90ef8]));
        }

        jboolean OrekitStepInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_89b302893bdbe1f1]);
        }

        jboolean OrekitStepInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_89b302893bdbe1f1]);
        }

        jboolean OrekitStepInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_89b302893bdbe1f1]);
        }

        OrekitStepInterpolator OrekitStepInterpolator::restrictStep(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return OrekitStepInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_6456e7061fff7584], a0.this$, a1.this$));
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
        static PyObject *t_OrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_getCurrentState(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_getInterpolatedState(t_OrekitStepInterpolator *self, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_getPVCoordinates(t_OrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_OrekitStepInterpolator_getPreviousState(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isCurrentStateInterpolated(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isForward(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isPreviousStateInterpolated(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_restrictStep(t_OrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_OrekitStepInterpolator_get__currentState(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__currentStateInterpolated(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__forward(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__previousState(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__previousStateInterpolated(t_OrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_OrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, currentState),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, forward),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, previousState),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_OrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_OrekitStepInterpolator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitStepInterpolator)[] = {
          { Py_tp_methods, t_OrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_OrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::PVCoordinatesProvider),
          NULL
        };

        DEFINE_TYPE(OrekitStepInterpolator, t_OrekitStepInterpolator, OrekitStepInterpolator);

        void t_OrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitStepInterpolator), &PY_TYPE_DEF(OrekitStepInterpolator), module, "OrekitStepInterpolator", 0);
        }

        void t_OrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "class_", make_descriptor(OrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "wrapfn_", make_descriptor(t_OrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_OrekitStepInterpolator::wrap_Object(OrekitStepInterpolator(((t_OrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_OrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OrekitStepInterpolator_getCurrentState(t_OrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_OrekitStepInterpolator_getInterpolatedState(t_OrekitStepInterpolator *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepInterpolator_getPVCoordinates(t_OrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(OrekitStepInterpolator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_OrekitStepInterpolator_getPreviousState(t_OrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_OrekitStepInterpolator_isCurrentStateInterpolated(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_isForward(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_isPreviousStateInterpolated(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_restrictStep(t_OrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          OrekitStepInterpolator result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_OrekitStepInterpolator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }

        static PyObject *t_OrekitStepInterpolator_get__currentState(t_OrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__currentStateInterpolated(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__forward(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__previousState(t_OrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__previousStateInterpolated(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/GillIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *GillIntegrator::class$ = NULL;
        jmethodID *GillIntegrator::mids$ = NULL;
        bool GillIntegrator::live$ = false;

        jclass GillIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/GillIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_8cf5267aa13a77f3] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_a53a7513ecedada2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_a53a7513ecedada2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_f0445bcc27666a8c] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/GillStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillIntegrator::GillIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        JArray< JArray< jdouble > > GillIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_8cf5267aa13a77f3]));
        }

        JArray< jdouble > GillIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_a53a7513ecedada2]));
        }

        JArray< jdouble > GillIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_a53a7513ecedada2]));
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
        static PyObject *t_GillIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GillIntegrator_init_(t_GillIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillIntegrator_getA(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_getB(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_getC(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_get__a(t_GillIntegrator *self, void *data);
        static PyObject *t_GillIntegrator_get__b(t_GillIntegrator *self, void *data);
        static PyObject *t_GillIntegrator_get__c(t_GillIntegrator *self, void *data);
        static PyGetSetDef t_GillIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_GillIntegrator, a),
          DECLARE_GET_FIELD(t_GillIntegrator, b),
          DECLARE_GET_FIELD(t_GillIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GillIntegrator__methods_[] = {
          DECLARE_METHOD(t_GillIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_GillIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_GillIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillIntegrator)[] = {
          { Py_tp_methods, t_GillIntegrator__methods_ },
          { Py_tp_init, (void *) t_GillIntegrator_init_ },
          { Py_tp_getset, t_GillIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(GillIntegrator, t_GillIntegrator, GillIntegrator);

        void t_GillIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(GillIntegrator), &PY_TYPE_DEF(GillIntegrator), module, "GillIntegrator", 0);
        }

        void t_GillIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "class_", make_descriptor(GillIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "wrapfn_", make_descriptor(t_GillIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillIntegrator::initializeClass, 1)))
            return NULL;
          return t_GillIntegrator::wrap_Object(GillIntegrator(((t_GillIntegrator *) arg)->object.this$));
        }
        static PyObject *t_GillIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GillIntegrator_init_(t_GillIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GillIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GillIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GillIntegrator_getA(t_GillIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_GillIntegrator_getB(t_GillIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_GillIntegrator_getC(t_GillIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_GillIntegrator_get__a(t_GillIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_GillIntegrator_get__b(t_GillIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_GillIntegrator_get__c(t_GillIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Float.h"
#include "java/lang/Float.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Float::class$ = NULL;
    jmethodID *Float::mids$ = NULL;
    bool Float::live$ = false;
    jint Float::BYTES = (jint) 0;
    jint Float::MAX_EXPONENT = (jint) 0;
    jfloat Float::MAX_VALUE = (jfloat) 0;
    jint Float::MIN_EXPONENT = (jint) 0;
    jfloat Float::MIN_NORMAL = (jfloat) 0;
    jfloat Float::MIN_VALUE = (jfloat) 0;
    jfloat Float::NEGATIVE_INFINITY = (jfloat) 0;
    jfloat Float::NaN = (jfloat) 0;
    jfloat Float::POSITIVE_INFINITY = (jfloat) 0;
    jint Float::SIZE = (jint) 0;
    ::java::lang::Class *Float::TYPE = NULL;

    jclass Float::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Float");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
        mids$[mid_init$_3ac7cc3def9efaa9] = env->getMethodID(cls, "<init>", "(F)V");
        mids$[mid_byteValue_acadfed42a0dbd0d] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_28d6c4cafbbf22ca] = env->getStaticMethodID(cls, "compare", "(FF)I");
        mids$[mid_compareTo_c4acd4278c631cef] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Float;)I");
        mids$[mid_doubleValue_557b8123390d8d0c] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatToIntBits_8654c9c587b855bf] = env->getStaticMethodID(cls, "floatToIntBits", "(F)I");
        mids$[mid_floatToRawIntBits_8654c9c587b855bf] = env->getStaticMethodID(cls, "floatToRawIntBits", "(F)I");
        mids$[mid_floatValue_04fe014f7609dc26] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_8654c9c587b855bf] = env->getStaticMethodID(cls, "hashCode", "(F)I");
        mids$[mid_intBitsToFloat_4a1b89ce3fd92e16] = env->getStaticMethodID(cls, "intBitsToFloat", "(I)F");
        mids$[mid_intValue_412668abc8d889e9] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_isFinite_2637f4d79297c2ad] = env->getStaticMethodID(cls, "isFinite", "(F)Z");
        mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isInfinite_2637f4d79297c2ad] = env->getStaticMethodID(cls, "isInfinite", "(F)Z");
        mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_isNaN_2637f4d79297c2ad] = env->getStaticMethodID(cls, "isNaN", "(F)Z");
        mids$[mid_longValue_9e26256fb0d384a2] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_max_cd0283dc4491c41d] = env->getStaticMethodID(cls, "max", "(FF)F");
        mids$[mid_min_cd0283dc4491c41d] = env->getStaticMethodID(cls, "min", "(FF)F");
        mids$[mid_parseFloat_4c53e11f170cb6dc] = env->getStaticMethodID(cls, "parseFloat", "(Ljava/lang/String;)F");
        mids$[mid_shortValue_2554afc868a7ba2a] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_sum_cd0283dc4491c41d] = env->getStaticMethodID(cls, "sum", "(FF)F");
        mids$[mid_toHexString_d2dc74ed6e6ec7d8] = env->getStaticMethodID(cls, "toHexString", "(F)Ljava/lang/String;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_d2dc74ed6e6ec7d8] = env->getStaticMethodID(cls, "toString", "(F)Ljava/lang/String;");
        mids$[mid_valueOf_51c36c239fa71636] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Float;");
        mids$[mid_valueOf_7b1570e089e1af54] = env->getStaticMethodID(cls, "valueOf", "(F)Ljava/lang/Float;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_EXPONENT = env->getStaticIntField(cls, "MAX_EXPONENT");
        MAX_VALUE = env->getStaticFloatField(cls, "MAX_VALUE");
        MIN_EXPONENT = env->getStaticIntField(cls, "MIN_EXPONENT");
        MIN_NORMAL = env->getStaticFloatField(cls, "MIN_NORMAL");
        MIN_VALUE = env->getStaticFloatField(cls, "MIN_VALUE");
        NEGATIVE_INFINITY = env->getStaticFloatField(cls, "NEGATIVE_INFINITY");
        NaN = env->getStaticFloatField(cls, "NaN");
        POSITIVE_INFINITY = env->getStaticFloatField(cls, "POSITIVE_INFINITY");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Float::Float(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    Float::Float(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

    Float::Float(jfloat a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_3ac7cc3def9efaa9, a0)) {}

    jbyte Float::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_acadfed42a0dbd0d]);
    }

    jint Float::compare(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_28d6c4cafbbf22ca], a0, a1);
    }

    jint Float::compareTo(const Float & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_c4acd4278c631cef], a0.this$);
    }

    jdouble Float::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_557b8123390d8d0c]);
    }

    jboolean Float::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jint Float::floatToIntBits(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_floatToIntBits_8654c9c587b855bf], a0);
    }

    jint Float::floatToRawIntBits(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_floatToRawIntBits_8654c9c587b855bf], a0);
    }

    jfloat Float::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_04fe014f7609dc26]);
    }

    jint Float::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jint Float::hashCode(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_8654c9c587b855bf], a0);
    }

    jfloat Float::intBitsToFloat(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_intBitsToFloat_4a1b89ce3fd92e16], a0);
    }

    jint Float::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_412668abc8d889e9]);
    }

    jboolean Float::isFinite(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isFinite_2637f4d79297c2ad], a0);
    }

    jboolean Float::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
    }

    jboolean Float::isInfinite(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isInfinite_2637f4d79297c2ad], a0);
    }

    jboolean Float::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
    }

    jboolean Float::isNaN(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isNaN_2637f4d79297c2ad], a0);
    }

    jlong Float::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_9e26256fb0d384a2]);
    }

    jfloat Float::max$(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_max_cd0283dc4491c41d], a0, a1);
    }

    jfloat Float::min$(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_min_cd0283dc4491c41d], a0, a1);
    }

    jfloat Float::parseFloat(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_parseFloat_4c53e11f170cb6dc], a0.this$);
    }

    jshort Float::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_2554afc868a7ba2a]);
    }

    jfloat Float::sum(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_sum_cd0283dc4491c41d], a0, a1);
    }

    ::java::lang::String Float::toHexString(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_d2dc74ed6e6ec7d8], a0));
    }

    ::java::lang::String Float::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    ::java::lang::String Float::toString(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_d2dc74ed6e6ec7d8], a0));
    }

    Float Float::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Float(env->callStaticObjectMethod(cls, mids$[mid_valueOf_51c36c239fa71636], a0.this$));
    }

    Float Float::valueOf(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Float(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7b1570e089e1af54], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Float_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Float_init_(t_Float *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Float_byteValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_compareTo(t_Float *self, PyObject *arg);
    static PyObject *t_Float_doubleValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_equals(t_Float *self, PyObject *args);
    static PyObject *t_Float_floatToIntBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_floatToRawIntBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_floatValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_hashCode(t_Float *self, PyObject *args);
    static PyObject *t_Float_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_intBitsToFloat(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_intValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_isFinite(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_isInfinite(t_Float *self);
    static PyObject *t_Float_isInfinite_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_isNaN(t_Float *self);
    static PyObject *t_Float_isNaN_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_longValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_parseFloat(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_shortValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_toString(t_Float *self, PyObject *args);
    static PyObject *t_Float_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_get__infinite(t_Float *self, void *data);
    static PyObject *t_Float_get__naN(t_Float *self, void *data);
    static PyGetSetDef t_Float__fields_[] = {
      DECLARE_GET_FIELD(t_Float, infinite),
      DECLARE_GET_FIELD(t_Float, naN),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Float__methods_[] = {
      DECLARE_METHOD(t_Float, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, compareTo, METH_O),
      DECLARE_METHOD(t_Float, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, equals, METH_VARARGS),
      DECLARE_METHOD(t_Float, floatToIntBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, floatToRawIntBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Float, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, intBitsToFloat, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, isFinite, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, isInfinite, METH_NOARGS),
      DECLARE_METHOD(t_Float, isInfinite_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, isNaN, METH_NOARGS),
      DECLARE_METHOD(t_Float, isNaN_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, parseFloat, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, toString, METH_VARARGS),
      DECLARE_METHOD(t_Float, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Float)[] = {
      { Py_tp_methods, t_Float__methods_ },
      { Py_tp_init, (void *) t_Float_init_ },
      { Py_tp_getset, t_Float__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Float)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Float, t_Float, Float);

    void t_Float::install(PyObject *module)
    {
      installType(&PY_TYPE(Float), &PY_TYPE_DEF(Float), module, "Float", 0);
    }

    void t_Float::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "class_", make_descriptor(Float::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "wrapfn_", make_descriptor(unboxFloat));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "boxfn_", make_descriptor(boxFloat));
      env->getClass(Float::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "BYTES", make_descriptor(Float::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MAX_EXPONENT", make_descriptor(Float::MAX_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MAX_VALUE", make_descriptor(Float::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MIN_EXPONENT", make_descriptor(Float::MIN_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MIN_NORMAL", make_descriptor(Float::MIN_NORMAL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MIN_VALUE", make_descriptor(Float::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "NEGATIVE_INFINITY", make_descriptor(Float::NEGATIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "NaN", make_descriptor(Float::NaN));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "POSITIVE_INFINITY", make_descriptor(Float::POSITIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "SIZE", make_descriptor(Float::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Float::TYPE)));
    }

    static PyObject *t_Float_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Float::initializeClass, 1)))
        return NULL;
      return t_Float::wrap_Object(Float(((t_Float *) arg)->object.this$));
    }
    static PyObject *t_Float_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Float::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Float_init_(t_Float *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Float object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Float(a0));
            self->object = object;
            break;
          }
        }
        {
          jdouble a0;
          Float object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Float(a0));
            self->object = object;
            break;
          }
        }
        {
          jfloat a0;
          Float object((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            INT_CALL(object = Float(a0));
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

    static PyObject *t_Float_byteValue(t_Float *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Float_compare(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jint result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Float_compareTo(t_Float *self, PyObject *arg)
    {
      Float a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Float), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Float_doubleValue(t_Float *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Float_equals(t_Float *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Float_floatToIntBits(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jint result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::floatToIntBits(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "floatToIntBits", arg);
      return NULL;
    }

    static PyObject *t_Float_floatToRawIntBits(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jint result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::floatToRawIntBits(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "floatToRawIntBits", arg);
      return NULL;
    }

    static PyObject *t_Float_floatValue(t_Float *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Float_hashCode(t_Float *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Float_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jint result;

      if (!parseArgs(args, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Float_intBitsToFloat(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jfloat result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::intBitsToFloat(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "intBitsToFloat", arg);
      return NULL;
    }

    static PyObject *t_Float_intValue(t_Float *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Float_isFinite(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jboolean result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::isFinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isFinite", arg);
      return NULL;
    }

    static PyObject *t_Float_isInfinite(t_Float *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInfinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Float_isInfinite_(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jboolean result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::isInfinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isInfinite_", arg);
      return NULL;
    }

    static PyObject *t_Float_isNaN(t_Float *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNaN());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Float_isNaN_(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jboolean result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::isNaN(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isNaN_", arg);
      return NULL;
    }

    static PyObject *t_Float_longValue(t_Float *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Float_max(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jfloat result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::max$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Float_min(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jfloat result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::min$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Float_parseFloat(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jfloat result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::parseFloat(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "parseFloat", arg);
      return NULL;
    }

    static PyObject *t_Float_shortValue(t_Float *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Float_sum(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jfloat result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::sum(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Float_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Float_toString(t_Float *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Float_toString_(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Float_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Float result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Float::valueOf(a0));
            return t_Float::wrap_Object(result);
          }
        }
        {
          jfloat a0;
          Float result((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(result = ::java::lang::Float::valueOf(a0));
            return t_Float::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }

    static PyObject *t_Float_get__infinite(t_Float *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInfinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Float_get__naN(t_Float *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNaN());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexODEStateAndDerivative.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEStateAndDerivative::class$ = NULL;
      jmethodID *ComplexODEStateAndDerivative::mids$ = NULL;
      bool ComplexODEStateAndDerivative::live$ = false;

      jclass ComplexODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_372f25aed1be170d] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_init$_1010734d16ad58e8] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_getCompleteDerivative_cdf70bdb2a575f18] = env->getMethodID(cls, "getCompleteDerivative", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getPrimaryDerivative_cdf70bdb2a575f18] = env->getMethodID(cls, "getPrimaryDerivative", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getSecondaryDerivative_3c568c3957abbd69] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEStateAndDerivative::ComplexODEStateAndDerivative(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2) : ::org::hipparchus::ode::ComplexODEState(env->newObject(initializeClass, &mids$, mid_init$_372f25aed1be170d, a0, a1.this$, a2.this$)) {}

      ComplexODEStateAndDerivative::ComplexODEStateAndDerivative(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a3, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a4) : ::org::hipparchus::ode::ComplexODEState(env->newObject(initializeClass, &mids$, mid_init$_1010734d16ad58e8, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_cdf70bdb2a575f18]));
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_cdf70bdb2a575f18]));
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_3c568c3957abbd69], a0));
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
      static PyObject *t_ComplexODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEStateAndDerivative_init_(t_ComplexODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEStateAndDerivative_getCompleteDerivative(t_ComplexODEStateAndDerivative *self);
      static PyObject *t_ComplexODEStateAndDerivative_getPrimaryDerivative(t_ComplexODEStateAndDerivative *self);
      static PyObject *t_ComplexODEStateAndDerivative_getSecondaryDerivative(t_ComplexODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_ComplexODEStateAndDerivative_get__completeDerivative(t_ComplexODEStateAndDerivative *self, void *data);
      static PyObject *t_ComplexODEStateAndDerivative_get__primaryDerivative(t_ComplexODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_ComplexODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_ComplexODEStateAndDerivative, primaryDerivative),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEStateAndDerivative)[] = {
        { Py_tp_methods, t_ComplexODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_ComplexODEStateAndDerivative_init_ },
        { Py_tp_getset, t_ComplexODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::ComplexODEState),
        NULL
      };

      DEFINE_TYPE(ComplexODEStateAndDerivative, t_ComplexODEStateAndDerivative, ComplexODEStateAndDerivative);

      void t_ComplexODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEStateAndDerivative), &PY_TYPE_DEF(ComplexODEStateAndDerivative), module, "ComplexODEStateAndDerivative", 0);
      }

      void t_ComplexODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "class_", make_descriptor(ComplexODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "wrapfn_", make_descriptor(t_ComplexODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_ComplexODEStateAndDerivative::wrap_Object(ComplexODEStateAndDerivative(((t_ComplexODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEStateAndDerivative_init_(t_ComplexODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
            ComplexODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[k[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ComplexODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a3((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a4((jobject) NULL);
            ComplexODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[k[k[[k[[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ComplexODEStateAndDerivative(a0, a1, a2, a3, a4));
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

      static PyObject *t_ComplexODEStateAndDerivative_getCompleteDerivative(t_ComplexODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_getPrimaryDerivative(t_ComplexODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_getSecondaryDerivative(t_ComplexODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEStateAndDerivative_get__completeDerivative(t_ComplexODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_get__primaryDerivative(t_ComplexODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *JB2008InputParameters::class$ = NULL;
          jmethodID *JB2008InputParameters::mids$ = NULL;
          bool JB2008InputParameters::live$ = false;

          jclass JB2008InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/JB2008InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDSTDTC_b0b988f941da47d8] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10_b0b988f941da47d8] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10B_b0b988f941da47d8] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getS10_b0b988f941da47d8] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getS10B_b0b988f941da47d8] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10_b0b988f941da47d8] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10B_b0b988f941da47d8] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10_b0b988f941da47d8] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10B_b0b988f941da47d8] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble JB2008InputParameters::getDSTDTC(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_b0b988f941da47d8], a0.this$);
          }

          jdouble JB2008InputParameters::getF10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getF10_b0b988f941da47d8], a0.this$);
          }

          jdouble JB2008InputParameters::getF10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getF10B_b0b988f941da47d8], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate JB2008InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
          }

          ::org::orekit::time::AbsoluteDate JB2008InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
          }

          jdouble JB2008InputParameters::getS10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getS10_b0b988f941da47d8], a0.this$);
          }

          jdouble JB2008InputParameters::getS10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getS10B_b0b988f941da47d8], a0.this$);
          }

          jdouble JB2008InputParameters::getXM10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXM10_b0b988f941da47d8], a0.this$);
          }

          jdouble JB2008InputParameters::getXM10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXM10B_b0b988f941da47d8], a0.this$);
          }

          jdouble JB2008InputParameters::getY10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY10_b0b988f941da47d8], a0.this$);
          }

          jdouble JB2008InputParameters::getY10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY10B_b0b988f941da47d8], a0.this$);
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
          static PyObject *t_JB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getDSTDTC(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getF10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getF10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getMaxDate(t_JB2008InputParameters *self);
          static PyObject *t_JB2008InputParameters_getMinDate(t_JB2008InputParameters *self);
          static PyObject *t_JB2008InputParameters_getS10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getS10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getXM10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getXM10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getY10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getY10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_get__maxDate(t_JB2008InputParameters *self, void *data);
          static PyObject *t_JB2008InputParameters_get__minDate(t_JB2008InputParameters *self, void *data);
          static PyGetSetDef t_JB2008InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_JB2008InputParameters, maxDate),
            DECLARE_GET_FIELD(t_JB2008InputParameters, minDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JB2008InputParameters__methods_[] = {
            DECLARE_METHOD(t_JB2008InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008InputParameters, getDSTDTC, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getF10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getF10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getMaxDate, METH_NOARGS),
            DECLARE_METHOD(t_JB2008InputParameters, getMinDate, METH_NOARGS),
            DECLARE_METHOD(t_JB2008InputParameters, getS10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getS10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getXM10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getXM10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getY10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getY10B, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JB2008InputParameters)[] = {
            { Py_tp_methods, t_JB2008InputParameters__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_JB2008InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JB2008InputParameters)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(JB2008InputParameters, t_JB2008InputParameters, JB2008InputParameters);

          void t_JB2008InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(JB2008InputParameters), &PY_TYPE_DEF(JB2008InputParameters), module, "JB2008InputParameters", 0);
          }

          void t_JB2008InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "class_", make_descriptor(JB2008InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "wrapfn_", make_descriptor(t_JB2008InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JB2008InputParameters::initializeClass, 1)))
              return NULL;
            return t_JB2008InputParameters::wrap_Object(JB2008InputParameters(((t_JB2008InputParameters *) arg)->object.this$));
          }
          static PyObject *t_JB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JB2008InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_JB2008InputParameters_getDSTDTC(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDSTDTC(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDSTDTC", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getF10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getF10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getF10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getF10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getF10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getF10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getMaxDate(t_JB2008InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_JB2008InputParameters_getMinDate(t_JB2008InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_JB2008InputParameters_getS10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getS10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getS10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getS10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getS10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getS10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getXM10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXM10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getXM10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getXM10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXM10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getXM10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getY10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getY10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getY10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getY10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getY10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getY10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_get__maxDate(t_JB2008InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_JB2008InputParameters_get__minDate(t_JB2008InputParameters *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm07::class$ = NULL;
              jmethodID *SsrIgm07::mids$ = NULL;
              bool SsrIgm07::live$ = false;

              jclass SsrIgm07::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_88bc970f6a867404] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm07Data_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSsrIgm07Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07::SsrIgm07(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_88bc970f6a867404, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm07::getSsrIgm07Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm07Data_1e62c2f73fbdd1c4]));
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
              static PyObject *t_SsrIgm07_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07_of_(t_SsrIgm07 *self, PyObject *args);
              static int t_SsrIgm07_init_(t_SsrIgm07 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm07_getSsrIgm07Data(t_SsrIgm07 *self);
              static PyObject *t_SsrIgm07_get__ssrIgm07Data(t_SsrIgm07 *self, void *data);
              static PyObject *t_SsrIgm07_get__parameters_(t_SsrIgm07 *self, void *data);
              static PyGetSetDef t_SsrIgm07__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm07, ssrIgm07Data),
                DECLARE_GET_FIELD(t_SsrIgm07, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm07__methods_[] = {
                DECLARE_METHOD(t_SsrIgm07, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm07, getSsrIgm07Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm07)[] = {
                { Py_tp_methods, t_SsrIgm07__methods_ },
                { Py_tp_init, (void *) t_SsrIgm07_init_ },
                { Py_tp_getset, t_SsrIgm07__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm07)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm07, t_SsrIgm07, SsrIgm07);
              PyObject *t_SsrIgm07::wrap_Object(const SsrIgm07& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm07::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm07 *self = (t_SsrIgm07 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm07::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm07::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm07 *self = (t_SsrIgm07 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm07::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm07), &PY_TYPE_DEF(SsrIgm07), module, "SsrIgm07", 0);
              }

              void t_SsrIgm07::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "class_", make_descriptor(SsrIgm07::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "wrapfn_", make_descriptor(t_SsrIgm07::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm07_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm07::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm07::wrap_Object(SsrIgm07(((t_SsrIgm07 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm07_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm07::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm07_of_(t_SsrIgm07 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm07_init_(t_SsrIgm07 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm07 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm07(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm07Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm07Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm07_getSsrIgm07Data(t_SsrIgm07 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm07Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm07_get__parameters_(t_SsrIgm07 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm07_get__ssrIgm07Data(t_SsrIgm07 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm07Data());
                return ::java::util::t_Map::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
