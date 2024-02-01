#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouAlmanac::class$ = NULL;
            jmethodID *BeidouAlmanac::mids$ = NULL;
            bool BeidouAlmanac::live$ = false;

            jclass BeidouAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_d6ab429752e7c267] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_setHealth_8fd427ab23829bf5] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setI0_13edac039e8cc967] = env->getMethodID(cls, "setI0", "(DD)V");
                mids$[mid_setSqrtA_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouAlmanac::BeidouAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jint BeidouAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_d6ab429752e7c267]);
            }

            void BeidouAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_8fd427ab23829bf5], a0);
            }

            void BeidouAlmanac::setI0(jdouble a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setI0_13edac039e8cc967], a0, a1);
            }

            void BeidouAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_BeidouAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_BeidouAlmanac_init_(t_BeidouAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BeidouAlmanac_getHealth(t_BeidouAlmanac *self);
            static PyObject *t_BeidouAlmanac_setHealth(t_BeidouAlmanac *self, PyObject *arg);
            static PyObject *t_BeidouAlmanac_setI0(t_BeidouAlmanac *self, PyObject *args);
            static PyObject *t_BeidouAlmanac_setSqrtA(t_BeidouAlmanac *self, PyObject *arg);
            static PyObject *t_BeidouAlmanac_get__health(t_BeidouAlmanac *self, void *data);
            static int t_BeidouAlmanac_set__health(t_BeidouAlmanac *self, PyObject *arg, void *data);
            static int t_BeidouAlmanac_set__sqrtA(t_BeidouAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_BeidouAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_BeidouAlmanac, health),
              DECLARE_SET_FIELD(t_BeidouAlmanac, sqrtA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouAlmanac__methods_[] = {
              DECLARE_METHOD(t_BeidouAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_BeidouAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_BeidouAlmanac, setI0, METH_VARARGS),
              DECLARE_METHOD(t_BeidouAlmanac, setSqrtA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouAlmanac)[] = {
              { Py_tp_methods, t_BeidouAlmanac__methods_ },
              { Py_tp_init, (void *) t_BeidouAlmanac_init_ },
              { Py_tp_getset, t_BeidouAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(BeidouAlmanac, t_BeidouAlmanac, BeidouAlmanac);

            void t_BeidouAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouAlmanac), &PY_TYPE_DEF(BeidouAlmanac), module, "BeidouAlmanac", 0);
            }

            void t_BeidouAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "class_", make_descriptor(BeidouAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "wrapfn_", make_descriptor(t_BeidouAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_BeidouAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouAlmanac::initializeClass, 1)))
                return NULL;
              return t_BeidouAlmanac::wrap_Object(BeidouAlmanac(((t_BeidouAlmanac *) arg)->object.this$));
            }
            static PyObject *t_BeidouAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_BeidouAlmanac_init_(t_BeidouAlmanac *self, PyObject *args, PyObject *kwds)
            {
              BeidouAlmanac object((jobject) NULL);

              INT_CALL(object = BeidouAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_BeidouAlmanac_getHealth(t_BeidouAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouAlmanac_setHealth(t_BeidouAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_BeidouAlmanac_setI0(t_BeidouAlmanac *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.setI0(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(BeidouAlmanac), (PyObject *) self, "setI0", args, 2);
            }

            static PyObject *t_BeidouAlmanac_setSqrtA(t_BeidouAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_BeidouAlmanac_get__health(t_BeidouAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouAlmanac_set__health(t_BeidouAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static int t_BeidouAlmanac_set__sqrtA(t_BeidouAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
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
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *StateVector::class$ = NULL;
            jmethodID *StateVector::mids$ = NULL;
            bool StateVector::live$ = false;

            jclass StateVector::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/StateVector");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getEpoch_80e11148db499dda] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_hasAcceleration_eee3de00fe971136] = env->getMethodID(cls, "hasAcceleration", "()Z");
                mids$[mid_setA_4320462275d66e78] = env->getMethodID(cls, "setA", "(ID)V");
                mids$[mid_setEpoch_8497861b879c83f7] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setP_4320462275d66e78] = env->getMethodID(cls, "setP", "(ID)V");
                mids$[mid_setV_4320462275d66e78] = env->getMethodID(cls, "setV", "(ID)V");
                mids$[mid_toTimeStampedPVCoordinates_674031698a428ce8] = env->getMethodID(cls, "toTimeStampedPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVector::StateVector() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            ::org::orekit::time::AbsoluteDate StateVector::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_80e11148db499dda]));
            }

            jboolean StateVector::hasAcceleration() const
            {
              return env->callBooleanMethod(this$, mids$[mid_hasAcceleration_eee3de00fe971136]);
            }

            void StateVector::setA(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setA_4320462275d66e78], a0, a1);
            }

            void StateVector::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_8497861b879c83f7], a0.this$);
            }

            void StateVector::setP(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setP_4320462275d66e78], a0, a1);
            }

            void StateVector::setV(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setV_4320462275d66e78], a0, a1);
            }

            ::org::orekit::utils::TimeStampedPVCoordinates StateVector::toTimeStampedPVCoordinates() const
            {
              return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toTimeStampedPVCoordinates_674031698a428ce8]));
            }

            void StateVector::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg);
            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds);
            static PyObject *t_StateVector_getEpoch(t_StateVector *self);
            static PyObject *t_StateVector_hasAcceleration(t_StateVector *self);
            static PyObject *t_StateVector_setA(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_setEpoch(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setP(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_setV(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_toTimeStampedPVCoordinates(t_StateVector *self);
            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_get__epoch(t_StateVector *self, void *data);
            static int t_StateVector_set__epoch(t_StateVector *self, PyObject *arg, void *data);
            static PyGetSetDef t_StateVector__fields_[] = {
              DECLARE_GETSET_FIELD(t_StateVector, epoch),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVector__methods_[] = {
              DECLARE_METHOD(t_StateVector, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, hasAcceleration, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, setA, METH_VARARGS),
              DECLARE_METHOD(t_StateVector, setEpoch, METH_O),
              DECLARE_METHOD(t_StateVector, setP, METH_VARARGS),
              DECLARE_METHOD(t_StateVector, setV, METH_VARARGS),
              DECLARE_METHOD(t_StateVector, toTimeStampedPVCoordinates, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVector)[] = {
              { Py_tp_methods, t_StateVector__methods_ },
              { Py_tp_init, (void *) t_StateVector_init_ },
              { Py_tp_getset, t_StateVector__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVector)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(StateVector, t_StateVector, StateVector);

            void t_StateVector::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVector), &PY_TYPE_DEF(StateVector), module, "StateVector", 0);
            }

            void t_StateVector::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "class_", make_descriptor(StateVector::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "wrapfn_", make_descriptor(t_StateVector::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVector::initializeClass, 1)))
                return NULL;
              return t_StateVector::wrap_Object(StateVector(((t_StateVector *) arg)->object.this$));
            }
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVector::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds)
            {
              StateVector object((jobject) NULL);

              INT_CALL(object = StateVector());
              self->object = object;

              return 0;
            }

            static PyObject *t_StateVector_getEpoch(t_StateVector *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_StateVector_hasAcceleration(t_StateVector *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.hasAcceleration());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_StateVector_setA(t_StateVector *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.setA(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setA", args);
              return NULL;
            }

            static PyObject *t_StateVector_setEpoch(t_StateVector *self, PyObject *arg)
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

            static PyObject *t_StateVector_setP(t_StateVector *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.setP(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setP", args);
              return NULL;
            }

            static PyObject *t_StateVector_setV(t_StateVector *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.setV(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setV", args);
              return NULL;
            }

            static PyObject *t_StateVector_toTimeStampedPVCoordinates(t_StateVector *self)
            {
              ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
              OBJ_CALL(result = self->object.toTimeStampedPVCoordinates());
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }

            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(StateVector), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_StateVector_get__epoch(t_StateVector *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_StateVector_set__epoch(t_StateVector *self, PyObject *arg, void *data)
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
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/GammaMnsFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GammaMnsFunction::class$ = NULL;
            jmethodID *GammaMnsFunction::mids$ = NULL;
            bool GammaMnsFunction::live$ = false;

            jclass GammaMnsFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GammaMnsFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_6f597dd1112f8328] = env->getMethodID(cls, "<init>", "(IDI)V");
                mids$[mid_getDerivative_d692aeb156453fed] = env->getMethodID(cls, "getDerivative", "(III)D");
                mids$[mid_getValue_d692aeb156453fed] = env->getMethodID(cls, "getValue", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GammaMnsFunction::GammaMnsFunction(jint a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f597dd1112f8328, a0, a1, a2)) {}

            jdouble GammaMnsFunction::getDerivative(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDerivative_d692aeb156453fed], a0, a1, a2);
            }

            jdouble GammaMnsFunction::getValue(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getValue_d692aeb156453fed], a0, a1, a2);
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
            static PyObject *t_GammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GammaMnsFunction_init_(t_GammaMnsFunction *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GammaMnsFunction_getDerivative(t_GammaMnsFunction *self, PyObject *args);
            static PyObject *t_GammaMnsFunction_getValue(t_GammaMnsFunction *self, PyObject *args);

            static PyMethodDef t_GammaMnsFunction__methods_[] = {
              DECLARE_METHOD(t_GammaMnsFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GammaMnsFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GammaMnsFunction, getDerivative, METH_VARARGS),
              DECLARE_METHOD(t_GammaMnsFunction, getValue, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GammaMnsFunction)[] = {
              { Py_tp_methods, t_GammaMnsFunction__methods_ },
              { Py_tp_init, (void *) t_GammaMnsFunction_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GammaMnsFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GammaMnsFunction, t_GammaMnsFunction, GammaMnsFunction);

            void t_GammaMnsFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(GammaMnsFunction), &PY_TYPE_DEF(GammaMnsFunction), module, "GammaMnsFunction", 0);
            }

            void t_GammaMnsFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "class_", make_descriptor(GammaMnsFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "wrapfn_", make_descriptor(t_GammaMnsFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GammaMnsFunction::initializeClass, 1)))
                return NULL;
              return t_GammaMnsFunction::wrap_Object(GammaMnsFunction(((t_GammaMnsFunction *) arg)->object.this$));
            }
            static PyObject *t_GammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GammaMnsFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GammaMnsFunction_init_(t_GammaMnsFunction *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jdouble a1;
              jint a2;
              GammaMnsFunction object((jobject) NULL);

              if (!parseArgs(args, "IDI", &a0, &a1, &a2))
              {
                INT_CALL(object = GammaMnsFunction(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GammaMnsFunction_getDerivative(t_GammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getDerivative(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
              return NULL;
            }

            static PyObject *t_GammaMnsFunction_getValue(t_GammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getValue(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getValue", args);
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
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$LeafMerger.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree::class$ = NULL;
        jmethodID *BSPTree::mids$ = NULL;
        bool BSPTree::live$ = false;

        jclass BSPTree::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_83ee235bb1e64e94] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
            mids$[mid_init$_2376fb9458a8cab3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;Ljava/lang/Object;)V");
            mids$[mid_copySelf_c3378f4554ff6b45] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getAttribute_704a5bee58538972] = env->getMethodID(cls, "getAttribute", "()Ljava/lang/Object;");
            mids$[mid_getCell_8dd9c197139bedc4] = env->getMethodID(cls, "getCell", "(Lorg/hipparchus/geometry/Point;D)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getCloseCuts_61904aad38223443] = env->getMethodID(cls, "getCloseCuts", "(Lorg/hipparchus/geometry/Point;D)Ljava/util/List;");
            mids$[mid_getCut_24c5633e830ec593] = env->getMethodID(cls, "getCut", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getMinus_c3378f4554ff6b45] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getParent_c3378f4554ff6b45] = env->getMethodID(cls, "getParent", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getPlus_c3378f4554ff6b45] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_insertCut_51737f919fe0cf72] = env->getMethodID(cls, "insertCut", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
            mids$[mid_insertInTree_254fe1807762a1b9] = env->getMethodID(cls, "insertInTree", "(Lorg/hipparchus/geometry/partitioning/BSPTree;ZLorg/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler;)V");
            mids$[mid_merge_c0fb7b9ce803d4f3] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree$LeafMerger;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_pruneAroundConvexCell_5609764ef0441416] = env->getMethodID(cls, "pruneAroundConvexCell", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_setAttribute_83ee235bb1e64e94] = env->getMethodID(cls, "setAttribute", "(Ljava/lang/Object;)V");
            mids$[mid_split_ef9a8149f8c25d8e] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_visit_3be3464833921e33] = env->getMethodID(cls, "visit", "(Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BSPTree::BSPTree() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        BSPTree::BSPTree(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_83ee235bb1e64e94, a0.this$)) {}

        BSPTree::BSPTree(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const BSPTree & a1, const BSPTree & a2, const ::java::lang::Object & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2376fb9458a8cab3, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        BSPTree BSPTree::copySelf() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_copySelf_c3378f4554ff6b45]));
        }

        ::java::lang::Object BSPTree::getAttribute() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAttribute_704a5bee58538972]));
        }

        BSPTree BSPTree::getCell(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getCell_8dd9c197139bedc4], a0.this$, a1));
        }

        ::java::util::List BSPTree::getCloseCuts(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCloseCuts_61904aad38223443], a0.this$, a1));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BSPTree::getCut() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getCut_24c5633e830ec593]));
        }

        BSPTree BSPTree::getMinus() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getMinus_c3378f4554ff6b45]));
        }

        BSPTree BSPTree::getParent() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getParent_c3378f4554ff6b45]));
        }

        BSPTree BSPTree::getPlus() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getPlus_c3378f4554ff6b45]));
        }

        jboolean BSPTree::insertCut(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_insertCut_51737f919fe0cf72], a0.this$);
        }

        void BSPTree::insertInTree(const BSPTree & a0, jboolean a1, const ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_insertInTree_254fe1807762a1b9], a0.this$, a1, a2.this$);
        }

        BSPTree BSPTree::merge(const BSPTree & a0, const ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger & a1) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_merge_c0fb7b9ce803d4f3], a0.this$, a1.this$));
        }

        BSPTree BSPTree::pruneAroundConvexCell(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_pruneAroundConvexCell_5609764ef0441416], a0.this$, a1.this$, a2.this$));
        }

        void BSPTree::setAttribute(const ::java::lang::Object & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttribute_83ee235bb1e64e94], a0.this$);
        }

        BSPTree BSPTree::split(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_split_ef9a8149f8c25d8e], a0.this$));
        }

        void BSPTree::visit(const ::org::hipparchus::geometry::partitioning::BSPTreeVisitor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visit_3be3464833921e33], a0.this$);
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
        static PyObject *t_BSPTree_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree_of_(t_BSPTree *self, PyObject *args);
        static int t_BSPTree_init_(t_BSPTree *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BSPTree_copySelf(t_BSPTree *self);
        static PyObject *t_BSPTree_getAttribute(t_BSPTree *self);
        static PyObject *t_BSPTree_getCell(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_getCloseCuts(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_getCut(t_BSPTree *self);
        static PyObject *t_BSPTree_getMinus(t_BSPTree *self);
        static PyObject *t_BSPTree_getParent(t_BSPTree *self);
        static PyObject *t_BSPTree_getPlus(t_BSPTree *self);
        static PyObject *t_BSPTree_insertCut(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_insertInTree(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_merge(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_pruneAroundConvexCell(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_setAttribute(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_split(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_visit(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_get__attribute(t_BSPTree *self, void *data);
        static int t_BSPTree_set__attribute(t_BSPTree *self, PyObject *arg, void *data);
        static PyObject *t_BSPTree_get__cut(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__minus(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__parent(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__plus(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__parameters_(t_BSPTree *self, void *data);
        static PyGetSetDef t_BSPTree__fields_[] = {
          DECLARE_GETSET_FIELD(t_BSPTree, attribute),
          DECLARE_GET_FIELD(t_BSPTree, cut),
          DECLARE_GET_FIELD(t_BSPTree, minus),
          DECLARE_GET_FIELD(t_BSPTree, parent),
          DECLARE_GET_FIELD(t_BSPTree, plus),
          DECLARE_GET_FIELD(t_BSPTree, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree__methods_[] = {
          DECLARE_METHOD(t_BSPTree, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getAttribute, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getCell, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, getCloseCuts, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, getCut, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getMinus, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getParent, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getPlus, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, insertCut, METH_O),
          DECLARE_METHOD(t_BSPTree, insertInTree, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, merge, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, pruneAroundConvexCell, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, setAttribute, METH_O),
          DECLARE_METHOD(t_BSPTree, split, METH_O),
          DECLARE_METHOD(t_BSPTree, visit, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree)[] = {
          { Py_tp_methods, t_BSPTree__methods_ },
          { Py_tp_init, (void *) t_BSPTree_init_ },
          { Py_tp_getset, t_BSPTree__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree, t_BSPTree, BSPTree);
        PyObject *t_BSPTree::wrap_Object(const BSPTree& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree *self = (t_BSPTree *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree *self = (t_BSPTree *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree), &PY_TYPE_DEF(BSPTree), module, "BSPTree", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "VanishingCutHandler", make_descriptor(&PY_TYPE_DEF(BSPTree$VanishingCutHandler)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "LeafMerger", make_descriptor(&PY_TYPE_DEF(BSPTree$LeafMerger)));
        }

        void t_BSPTree::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "class_", make_descriptor(BSPTree::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "wrapfn_", make_descriptor(t_BSPTree::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree::initializeClass, 1)))
            return NULL;
          return t_BSPTree::wrap_Object(BSPTree(((t_BSPTree *) arg)->object.this$));
        }
        static PyObject *t_BSPTree_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree_of_(t_BSPTree *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BSPTree_init_(t_BSPTree *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BSPTree object((jobject) NULL);

              INT_CALL(object = BSPTree());
              self->object = object;
              break;
            }
           case 1:
            {
              ::java::lang::Object a0((jobject) NULL);
              BSPTree object((jobject) NULL);

              if (!parseArgs(args, "o", &a0))
              {
                INT_CALL(object = BSPTree(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
              PyTypeObject **p0;
              BSPTree a1((jobject) NULL);
              PyTypeObject **p1;
              BSPTree a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::lang::Object a3((jobject) NULL);
              BSPTree object((jobject) NULL);

              if (!parseArgs(args, "KKKo", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, BSPTree::initializeClass, BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_, &a1, &p1, t_BSPTree::parameters_, &a2, &p2, t_BSPTree::parameters_, &a3))
              {
                INT_CALL(object = BSPTree(a0, a1, a2, a3));
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

        static PyObject *t_BSPTree_copySelf(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getAttribute(t_BSPTree *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttribute());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_BSPTree_getCell(t_BSPTree *self, PyObject *args)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getCell(a0, a1));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getCell", args);
          return NULL;
        }

        static PyObject *t_BSPTree_getCloseCuts(t_BSPTree *self, PyObject *args)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getCloseCuts(a0, a1));
            return ::java::util::t_List::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCloseCuts", args);
          return NULL;
        }

        static PyObject *t_BSPTree_getCut(t_BSPTree *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getCut());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getMinus(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinus());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getParent(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getParent());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getPlus(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlus());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_insertCut(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.insertCut(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "insertCut", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_insertInTree(t_BSPTree *self, PyObject *args)
        {
          BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;
          ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "KZK", BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler::initializeClass, &a0, &p0, t_BSPTree::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::partitioning::t_BSPTree$VanishingCutHandler::parameters_))
          {
            OBJ_CALL(self->object.insertInTree(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "insertInTree", args);
          return NULL;
        }

        static PyObject *t_BSPTree_merge(t_BSPTree *self, PyObject *args)
        {
          BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger a1((jobject) NULL);
          PyTypeObject **p1;
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KK", BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger::initializeClass, &a0, &p0, t_BSPTree::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_BSPTree$LeafMerger::parameters_))
          {
            OBJ_CALL(result = self->object.merge(a0, a1));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "merge", args);
          return NULL;
        }

        static PyObject *t_BSPTree_pruneAroundConvexCell(t_BSPTree *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pruneAroundConvexCell(a0, a1, a2));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "pruneAroundConvexCell", args);
          return NULL;
        }

        static PyObject *t_BSPTree_setAttribute(t_BSPTree *self, PyObject *arg)
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArg(arg, "o", &a0))
          {
            OBJ_CALL(self->object.setAttribute(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAttribute", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_split(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          BSPTree result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.split(a0));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "split", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_visit(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTreeVisitor a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTreeVisitor::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTreeVisitor::parameters_))
          {
            OBJ_CALL(self->object.visit(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "visit", arg);
          return NULL;
        }
        static PyObject *t_BSPTree_get__parameters_(t_BSPTree *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BSPTree_get__attribute(t_BSPTree *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttribute());
          return ::java::lang::t_Object::wrap_Object(value);
        }
        static int t_BSPTree_set__attribute(t_BSPTree *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::Object value((jobject) NULL);
            if (!parseArg(arg, "o", &value))
            {
              INT_CALL(self->object.setAttribute(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attribute", arg);
          return -1;
        }

        static PyObject *t_BSPTree_get__cut(t_BSPTree *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getCut());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__minus(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinus());
          return t_BSPTree::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__parent(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getParent());
          return t_BSPTree::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__plus(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlus());
          return t_BSPTree::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmMetadataKey::class$ = NULL;
              jmethodID *OmmMetadataKey::mids$ = NULL;
              bool OmmMetadataKey::live$ = false;
              OmmMetadataKey *OmmMetadataKey::MEAN_ELEMENT_THEORY = NULL;

              jclass OmmMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_ed1ae3ad6dd7ed43] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadata;)Z");
                  mids$[mid_valueOf_e86f05c1038adcf7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;");
                  mids$[mid_values_c1ab4eac2e8f6bc9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  MEAN_ELEMENT_THEORY = new OmmMetadataKey(env->getStaticObjectField(cls, "MEAN_ELEMENT_THEORY", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OmmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_ed1ae3ad6dd7ed43], a0.this$, a1.this$, a2.this$);
              }

              OmmMetadataKey OmmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OmmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e86f05c1038adcf7], a0.this$));
              }

              JArray< OmmMetadataKey > OmmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OmmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c1ab4eac2e8f6bc9]));
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
            namespace omm {
              static PyObject *t_OmmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmMetadataKey_of_(t_OmmMetadataKey *self, PyObject *args);
              static PyObject *t_OmmMetadataKey_process(t_OmmMetadataKey *self, PyObject *args);
              static PyObject *t_OmmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OmmMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OmmMetadataKey_get__parameters_(t_OmmMetadataKey *self, void *data);
              static PyGetSetDef t_OmmMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OmmMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OmmMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OmmMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OmmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmMetadataKey)[] = {
                { Py_tp_methods, t_OmmMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OmmMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OmmMetadataKey, t_OmmMetadataKey, OmmMetadataKey);
              PyObject *t_OmmMetadataKey::wrap_Object(const OmmMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmMetadataKey *self = (t_OmmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OmmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmMetadataKey *self = (t_OmmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OmmMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmMetadataKey), &PY_TYPE_DEF(OmmMetadataKey), module, "OmmMetadataKey", 0);
              }

              void t_OmmMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "class_", make_descriptor(OmmMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "wrapfn_", make_descriptor(t_OmmMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "MEAN_ELEMENT_THEORY", make_descriptor(t_OmmMetadataKey::wrap_Object(*OmmMetadataKey::MEAN_ELEMENT_THEORY)));
              }

              static PyObject *t_OmmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OmmMetadataKey::wrap_Object(OmmMetadataKey(((t_OmmMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OmmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmMetadataKey_of_(t_OmmMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OmmMetadataKey_process(t_OmmMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OmmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OmmMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadataKey::valueOf(a0));
                  return t_OmmMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OmmMetadataKey_values(PyTypeObject *type)
              {
                JArray< OmmMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OmmMetadataKey::wrap_jobject);
              }
              static PyObject *t_OmmMetadataKey_get__parameters_(t_OmmMetadataKey *self, void *data)
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Alfriend1999::class$ = NULL;
              jmethodID *Alfriend1999::mids$ = NULL;
              bool Alfriend1999::live$ = false;

              jclass Alfriend1999::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getType_592990a91429410c] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_eee3de00fe971136] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfriend1999::Alfriend1999() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfriend1999::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_592990a91429410c]));
              }

              jboolean Alfriend1999::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_eee3de00fe971136]);
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_Alfriend1999_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Alfriend1999_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Alfriend1999_init_(t_Alfriend1999 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Alfriend1999_getType(t_Alfriend1999 *self, PyObject *args);
              static PyObject *t_Alfriend1999_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, PyObject *args);
              static PyObject *t_Alfriend1999_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, void *data);
              static PyObject *t_Alfriend1999_get__type(t_Alfriend1999 *self, void *data);
              static PyGetSetDef t_Alfriend1999__fields_[] = {
                DECLARE_GET_FIELD(t_Alfriend1999, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_Alfriend1999, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Alfriend1999__methods_[] = {
                DECLARE_METHOD(t_Alfriend1999, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999, getType, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999, isAMaximumProbabilityOfCollisionMethod, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Alfriend1999)[] = {
                { Py_tp_methods, t_Alfriend1999__methods_ },
                { Py_tp_init, (void *) t_Alfriend1999_init_ },
                { Py_tp_getset, t_Alfriend1999__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Alfriend1999)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999),
                NULL
              };

              DEFINE_TYPE(Alfriend1999, t_Alfriend1999, Alfriend1999);

              void t_Alfriend1999::install(PyObject *module)
              {
                installType(&PY_TYPE(Alfriend1999), &PY_TYPE_DEF(Alfriend1999), module, "Alfriend1999", 0);
              }

              void t_Alfriend1999::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "class_", make_descriptor(Alfriend1999::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "wrapfn_", make_descriptor(t_Alfriend1999::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Alfriend1999_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Alfriend1999::initializeClass, 1)))
                  return NULL;
                return t_Alfriend1999::wrap_Object(Alfriend1999(((t_Alfriend1999 *) arg)->object.this$));
              }
              static PyObject *t_Alfriend1999_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Alfriend1999::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Alfriend1999_init_(t_Alfriend1999 *self, PyObject *args, PyObject *kwds)
              {
                Alfriend1999 object((jobject) NULL);

                INT_CALL(object = Alfriend1999());
                self->object = object;

                return 0;
              }

              static PyObject *t_Alfriend1999_getType(t_Alfriend1999 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Alfriend1999), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Alfriend1999_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(Alfriend1999), (PyObject *) self, "isAMaximumProbabilityOfCollisionMethod", args, 2);
              }

              static PyObject *t_Alfriend1999_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_Alfriend1999_get__type(t_Alfriend1999 *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_13540ceeab23d592] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/time/AbsoluteDate;DLjava/util/List;)V");
              mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getObservationData_d751c1a57012b438] = env->getMethodID(cls, "getObservationData", "()Ljava/util/List;");
              mids$[mid_getPrnNumber_d6ab429752e7c267] = env->getMethodID(cls, "getPrnNumber", "()I");
              mids$[mid_getRcvrClkOffset_9981f74b2d109da6] = env->getMethodID(cls, "getRcvrClkOffset", "()D");
              mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CombinedObservationDataSet::CombinedObservationDataSet(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13540ceeab23d592, a0.this$, a1, a2.this$, a3, a4.this$)) {}

          ::org::orekit::time::AbsoluteDate CombinedObservationDataSet::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
          }

          ::java::util::List CombinedObservationDataSet::getObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationData_d751c1a57012b438]));
          }

          jint CombinedObservationDataSet::getPrnNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getPrnNumber_d6ab429752e7c267]);
          }

          jdouble CombinedObservationDataSet::getRcvrClkOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcvrClkOffset_9981f74b2d109da6]);
          }

          ::org::orekit::gnss::SatelliteSystem CombinedObservationDataSet::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc]));
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
#include "org/hipparchus/analysis/function/Logistic.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logistic::class$ = NULL;
        jmethodID *Logistic::mids$ = NULL;
        bool Logistic::live$ = false;

        jclass Logistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_af295e83e836228f] = env->getMethodID(cls, "<init>", "(DDDDDD)V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logistic::Logistic(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_af295e83e836228f, a0, a1, a2, a3, a4, a5)) {}

        jdouble Logistic::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Logistic::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Logistic$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Logistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logistic_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logistic_init_(t_Logistic *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logistic_value(t_Logistic *self, PyObject *args);

        static PyMethodDef t_Logistic__methods_[] = {
          DECLARE_METHOD(t_Logistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logistic)[] = {
          { Py_tp_methods, t_Logistic__methods_ },
          { Py_tp_init, (void *) t_Logistic_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logistic, t_Logistic, Logistic);

        void t_Logistic::install(PyObject *module)
        {
          installType(&PY_TYPE(Logistic), &PY_TYPE_DEF(Logistic), module, "Logistic", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "Parametric", make_descriptor(&PY_TYPE_DEF(Logistic$Parametric)));
        }

        void t_Logistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "class_", make_descriptor(Logistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "wrapfn_", make_descriptor(t_Logistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logistic::initializeClass, 1)))
            return NULL;
          return t_Logistic::wrap_Object(Logistic(((t_Logistic *) arg)->object.this$));
        }
        static PyObject *t_Logistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logistic_init_(t_Logistic *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          Logistic object((jobject) NULL);

          if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = Logistic(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Logistic_value(t_Logistic *self, PyObject *args)
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
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *DutyCycleType::class$ = NULL;
          jmethodID *DutyCycleType::mids$ = NULL;
          bool DutyCycleType::live$ = false;
          DutyCycleType *DutyCycleType::CONTINUOUS = NULL;
          DutyCycleType *DutyCycleType::TIME = NULL;
          DutyCycleType *DutyCycleType::TIME_AND_ANGLE = NULL;

          jclass DutyCycleType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/DutyCycleType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_811734fd48298b7e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/DutyCycleType;");
              mids$[mid_values_550894adaa639e40] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/DutyCycleType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CONTINUOUS = new DutyCycleType(env->getStaticObjectField(cls, "CONTINUOUS", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              TIME = new DutyCycleType(env->getStaticObjectField(cls, "TIME", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              TIME_AND_ANGLE = new DutyCycleType(env->getStaticObjectField(cls, "TIME_AND_ANGLE", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DutyCycleType DutyCycleType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DutyCycleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_811734fd48298b7e], a0.this$));
          }

          JArray< DutyCycleType > DutyCycleType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DutyCycleType >(env->callStaticObjectMethod(cls, mids$[mid_values_550894adaa639e40]));
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
        namespace definitions {
          static PyObject *t_DutyCycleType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DutyCycleType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DutyCycleType_of_(t_DutyCycleType *self, PyObject *args);
          static PyObject *t_DutyCycleType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DutyCycleType_values(PyTypeObject *type);
          static PyObject *t_DutyCycleType_get__parameters_(t_DutyCycleType *self, void *data);
          static PyGetSetDef t_DutyCycleType__fields_[] = {
            DECLARE_GET_FIELD(t_DutyCycleType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DutyCycleType__methods_[] = {
            DECLARE_METHOD(t_DutyCycleType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, of_, METH_VARARGS),
            DECLARE_METHOD(t_DutyCycleType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DutyCycleType)[] = {
            { Py_tp_methods, t_DutyCycleType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DutyCycleType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DutyCycleType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DutyCycleType, t_DutyCycleType, DutyCycleType);
          PyObject *t_DutyCycleType::wrap_Object(const DutyCycleType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DutyCycleType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DutyCycleType *self = (t_DutyCycleType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DutyCycleType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DutyCycleType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DutyCycleType *self = (t_DutyCycleType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DutyCycleType::install(PyObject *module)
          {
            installType(&PY_TYPE(DutyCycleType), &PY_TYPE_DEF(DutyCycleType), module, "DutyCycleType", 0);
          }

          void t_DutyCycleType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "class_", make_descriptor(DutyCycleType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "wrapfn_", make_descriptor(t_DutyCycleType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "boxfn_", make_descriptor(boxObject));
            env->getClass(DutyCycleType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "CONTINUOUS", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::CONTINUOUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "TIME", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::TIME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "TIME_AND_ANGLE", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::TIME_AND_ANGLE)));
          }

          static PyObject *t_DutyCycleType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DutyCycleType::initializeClass, 1)))
              return NULL;
            return t_DutyCycleType::wrap_Object(DutyCycleType(((t_DutyCycleType *) arg)->object.this$));
          }
          static PyObject *t_DutyCycleType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DutyCycleType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DutyCycleType_of_(t_DutyCycleType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DutyCycleType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DutyCycleType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::DutyCycleType::valueOf(a0));
              return t_DutyCycleType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DutyCycleType_values(PyTypeObject *type)
          {
            JArray< DutyCycleType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::DutyCycleType::values());
            return JArray<jobject>(result.this$).wrap(t_DutyCycleType::wrap_jobject);
          }
          static PyObject *t_DutyCycleType_get__parameters_(t_DutyCycleType *self, void *data)
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
#include "org/orekit/forces/radiation/PythonRadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *PythonRadiationSensitive::class$ = NULL;
        jmethodID *PythonRadiationSensitive::mids$ = NULL;
        bool PythonRadiationSensitive::live$ = false;

        jclass PythonRadiationSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/PythonRadiationSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getRadiationParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_radiationPressureAcceleration_b5d2cc91db5ad4cb] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_radiationPressureAcceleration_8ba97ba2fcb659fc] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonRadiationSensitive::PythonRadiationSensitive() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonRadiationSensitive::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonRadiationSensitive::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonRadiationSensitive::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonRadiationSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonRadiationSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonRadiationSensitive_init_(t_PythonRadiationSensitive *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonRadiationSensitive_finalize(t_PythonRadiationSensitive *self);
        static PyObject *t_PythonRadiationSensitive_pythonExtension(t_PythonRadiationSensitive *self, PyObject *args);
        static jobject JNICALL t_PythonRadiationSensitive_getRadiationParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonRadiationSensitive_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonRadiationSensitive_get__self(t_PythonRadiationSensitive *self, void *data);
        static PyGetSetDef t_PythonRadiationSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_PythonRadiationSensitive, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonRadiationSensitive__methods_[] = {
          DECLARE_METHOD(t_PythonRadiationSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonRadiationSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonRadiationSensitive, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonRadiationSensitive, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonRadiationSensitive)[] = {
          { Py_tp_methods, t_PythonRadiationSensitive__methods_ },
          { Py_tp_init, (void *) t_PythonRadiationSensitive_init_ },
          { Py_tp_getset, t_PythonRadiationSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonRadiationSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonRadiationSensitive, t_PythonRadiationSensitive, PythonRadiationSensitive);

        void t_PythonRadiationSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonRadiationSensitive), &PY_TYPE_DEF(PythonRadiationSensitive), module, "PythonRadiationSensitive", 1);
        }

        void t_PythonRadiationSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "class_", make_descriptor(PythonRadiationSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "wrapfn_", make_descriptor(t_PythonRadiationSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonRadiationSensitive::initializeClass);
          JNINativeMethod methods[] = {
            { "getRadiationParametersDrivers", "()Ljava/util/List;", (void *) t_PythonRadiationSensitive_getRadiationParametersDrivers0 },
            { "pythonDecRef", "()V", (void *) t_PythonRadiationSensitive_pythonDecRef1 },
            { "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonRadiationSensitive_radiationPressureAcceleration2 },
            { "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonRadiationSensitive_radiationPressureAcceleration3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonRadiationSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonRadiationSensitive::initializeClass, 1)))
            return NULL;
          return t_PythonRadiationSensitive::wrap_Object(PythonRadiationSensitive(((t_PythonRadiationSensitive *) arg)->object.this$));
        }
        static PyObject *t_PythonRadiationSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonRadiationSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonRadiationSensitive_init_(t_PythonRadiationSensitive *self, PyObject *args, PyObject *kwds)
        {
          PythonRadiationSensitive object((jobject) NULL);

          INT_CALL(object = PythonRadiationSensitive());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonRadiationSensitive_finalize(t_PythonRadiationSensitive *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonRadiationSensitive_pythonExtension(t_PythonRadiationSensitive *self, PyObject *args)
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

        static jobject JNICALL t_PythonRadiationSensitive_getRadiationParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getRadiationParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getRadiationParametersDrivers", result);
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

        static void JNICALL t_PythonRadiationSensitive_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "radiationPressureAcceleration", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("radiationPressureAcceleration", result);
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

        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "radiationPressureAcceleration", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("radiationPressureAcceleration", result);
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

        static PyObject *t_PythonRadiationSensitive_get__self(t_PythonRadiationSensitive *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative1Field::class$ = NULL;
        jmethodID *FieldUnivariateDerivative1Field::mids$ = NULL;
        bool FieldUnivariateDerivative1Field::live$ = false;

        jclass FieldUnivariateDerivative1Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_28456803a1233651] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getUnivariateDerivative1Field_bd87e5d0ffac1a29] = env->getStaticMethodID(cls, "getUnivariateDerivative1Field", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field;");
            mids$[mid_getZero_28456803a1233651] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldUnivariateDerivative1Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 FieldUnivariateDerivative1Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getOne_28456803a1233651]));
        }

        ::java::lang::Class FieldUnivariateDerivative1Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
        }

        FieldUnivariateDerivative1Field FieldUnivariateDerivative1Field::getUnivariateDerivative1Field(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative1Field(env->callStaticObjectMethod(cls, mids$[mid_getUnivariateDerivative1Field_bd87e5d0ffac1a29], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 FieldUnivariateDerivative1Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getZero_28456803a1233651]));
        }

        jint FieldUnivariateDerivative1Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
        static PyObject *t_FieldUnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_of_(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_equals(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_getOne(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_getRuntimeClass(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_getUnivariateDerivative1Field(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_getZero(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_hashCode(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_get__one(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__runtimeClass(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__zero(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__parameters_(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative1Field__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, one),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, runtimeClass),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, zero),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative1Field__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getUnivariateDerivative1Field, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative1Field)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative1Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateDerivative1Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative1Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative1Field, t_FieldUnivariateDerivative1Field, FieldUnivariateDerivative1Field);
        PyObject *t_FieldUnivariateDerivative1Field::wrap_Object(const FieldUnivariateDerivative1Field& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1Field::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1Field *self = (t_FieldUnivariateDerivative1Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative1Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1Field::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1Field *self = (t_FieldUnivariateDerivative1Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative1Field::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative1Field), &PY_TYPE_DEF(FieldUnivariateDerivative1Field), module, "FieldUnivariateDerivative1Field", 0);
        }

        void t_FieldUnivariateDerivative1Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "class_", make_descriptor(FieldUnivariateDerivative1Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative1Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative1Field::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative1Field::wrap_Object(FieldUnivariateDerivative1Field(((t_FieldUnivariateDerivative1Field *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative1Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative1Field_of_(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_equals(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getOne(t_FieldUnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getRuntimeClass(t_FieldUnivariateDerivative1Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getUnivariateDerivative1Field(PyTypeObject *type, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative1Field result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field::getUnivariateDerivative1Field(a0));
            return t_FieldUnivariateDerivative1Field::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getUnivariateDerivative1Field", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getZero(t_FieldUnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_hashCode(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1Field), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative1Field_get__parameters_(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__one(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__runtimeClass(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__zero(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/LUDecomposer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *LUDecomposer::class$ = NULL;
      jmethodID *LUDecomposer::mids$ = NULL;
      bool LUDecomposer::live$ = false;

      jclass LUDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/LUDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_decompose_b099faee6eb73725] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LUDecomposer::LUDecomposer(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

      ::org::hipparchus::linear::DecompositionSolver LUDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_b099faee6eb73725], a0.this$));
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
      static PyObject *t_LUDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LUDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LUDecomposer_init_(t_LUDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LUDecomposer_decompose(t_LUDecomposer *self, PyObject *arg);

      static PyMethodDef t_LUDecomposer__methods_[] = {
        DECLARE_METHOD(t_LUDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LUDecomposer)[] = {
        { Py_tp_methods, t_LUDecomposer__methods_ },
        { Py_tp_init, (void *) t_LUDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LUDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LUDecomposer, t_LUDecomposer, LUDecomposer);

      void t_LUDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(LUDecomposer), &PY_TYPE_DEF(LUDecomposer), module, "LUDecomposer", 0);
      }

      void t_LUDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "class_", make_descriptor(LUDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "wrapfn_", make_descriptor(t_LUDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LUDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LUDecomposer::initializeClass, 1)))
          return NULL;
        return t_LUDecomposer::wrap_Object(LUDecomposer(((t_LUDecomposer *) arg)->object.this$));
      }
      static PyObject *t_LUDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LUDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LUDecomposer_init_(t_LUDecomposer *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        LUDecomposer object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = LUDecomposer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LUDecomposer_decompose(t_LUDecomposer *self, PyObject *arg)
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
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *RangeRate::class$ = NULL;
        jmethodID *RangeRate::mids$ = NULL;
        bool RangeRate::live$ = false;
        ::java::lang::String *RangeRate::MEASUREMENT_TYPE = NULL;

        jclass RangeRate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/RangeRate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9e6612aa2063e531] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDZLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RangeRate::RangeRate(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3, jdouble a4, jboolean a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_9e6612aa2063e531, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$)) {}
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
        static PyObject *t_RangeRate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RangeRate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RangeRate_of_(t_RangeRate *self, PyObject *args);
        static int t_RangeRate_init_(t_RangeRate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RangeRate_get__parameters_(t_RangeRate *self, void *data);
        static PyGetSetDef t_RangeRate__fields_[] = {
          DECLARE_GET_FIELD(t_RangeRate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RangeRate__methods_[] = {
          DECLARE_METHOD(t_RangeRate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RangeRate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RangeRate, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RangeRate)[] = {
          { Py_tp_methods, t_RangeRate__methods_ },
          { Py_tp_init, (void *) t_RangeRate_init_ },
          { Py_tp_getset, t_RangeRate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RangeRate)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(RangeRate, t_RangeRate, RangeRate);
        PyObject *t_RangeRate::wrap_Object(const RangeRate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RangeRate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RangeRate *self = (t_RangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RangeRate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RangeRate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RangeRate *self = (t_RangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RangeRate::install(PyObject *module)
        {
          installType(&PY_TYPE(RangeRate), &PY_TYPE_DEF(RangeRate), module, "RangeRate", 0);
        }

        void t_RangeRate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "class_", make_descriptor(RangeRate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "wrapfn_", make_descriptor(t_RangeRate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "boxfn_", make_descriptor(boxObject));
          env->getClass(RangeRate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "MEASUREMENT_TYPE", make_descriptor(j2p(*RangeRate::MEASUREMENT_TYPE)));
        }

        static PyObject *t_RangeRate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RangeRate::initializeClass, 1)))
            return NULL;
          return t_RangeRate::wrap_Object(RangeRate(((t_RangeRate *) arg)->object.this$));
        }
        static PyObject *t_RangeRate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RangeRate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RangeRate_of_(t_RangeRate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RangeRate_init_(t_RangeRate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jboolean a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          RangeRate object((jobject) NULL);

          if (!parseArgs(args, "kkDDDZk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = RangeRate(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(RangeRate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_RangeRate_get__parameters_(t_RangeRate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter.h"
#include "java/util/List.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalKalmanModel::class$ = NULL;
        jmethodID *SemiAnalyticalKalmanModel::mids$ = NULL;
        bool SemiAnalyticalKalmanModel::live$ = false;

        jclass SemiAnalyticalKalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalKalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_32b51ab222e72e59] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_ff7cb6c242604316] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getCorrectedMeasurement_b4478e72a44f53a7] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_598bcd058df23e79] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_80e11148db499dda] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_d6ab429752e7c267] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_270f067ba2ecffc6] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagator_15d5094a30a75845] = env->getMethodID(cls, "getEstimatedPropagator", "()Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_getEvolution_aa993dea45064d8a] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
            mids$[mid_getInnovation_2ceaf1d4d86d5f30] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getObserver_6e4d0b03328febe6] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_b4478e72a44f53a7] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_598bcd058df23e79] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_initializeShortPeriodicTerms_72b846eb87f3af9a] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_processMeasurements_8aadc45ea7386076] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;Lorg/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_2002169216358a3a] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_updateNominalSpacecraftState_72b846eb87f3af9a] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateReferenceTrajectory_8332d3af92a803d9] = env->getMethodID(cls, "updateReferenceTrajectory", "(Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;)V");
            mids$[mid_updateShortPeriods_72b846eb87f3af9a] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_32b51ab222e72e59], a0.this$, a1.this$);
        }

        void SemiAnalyticalKalmanModel::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_ff7cb6c242604316]);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_b4478e72a44f53a7]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_598bcd058df23e79]));
        }

        ::org::orekit::time::AbsoluteDate SemiAnalyticalKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_80e11148db499dda]));
        }

        jint SemiAnalyticalKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_d6ab429752e7c267]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate SemiAnalyticalKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_270f067ba2ecffc6]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_7c5a416c83e442be]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_7c5a416c83e442be]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_7c5a416c83e442be]));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanModel::getEstimatedPropagator() const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagator_15d5094a30a75845]));
        }

        ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution SemiAnalyticalKalmanModel::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_aa993dea45064d8a], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_2ceaf1d4d86d5f30], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalKalmanModel::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_6e4d0b03328febe6]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_b2eebabce70526d8]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_b4478e72a44f53a7]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_598bcd058df23e79]));
        }

        void SemiAnalyticalKalmanModel::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_72b846eb87f3af9a], a0.this$);
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanModel::processMeasurements(const ::java::util::List & a0, const ::org::hipparchus::filtering::kalman::extended::ExtendedKalmanFilter & a1) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_8aadc45ea7386076], a0.this$, a1.this$));
        }

        void SemiAnalyticalKalmanModel::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_2002169216358a3a], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_72b846eb87f3af9a], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateReferenceTrajectory(const ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateReferenceTrajectory_8332d3af92a803d9], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_72b846eb87f3af9a], a0.this$);
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
        static PyObject *t_SemiAnalyticalKalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_finalizeEstimation(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentDate(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimate(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagator(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEvolution(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_getInnovation(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_getObserver(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedMeasurement(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_processMeasurements(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_setObserver(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_updateReferenceTrajectory(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_updateShortPeriods(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__currentDate(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimate(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagator(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__observer(t_SemiAnalyticalKalmanModel *self, void *data);
        static int t_SemiAnalyticalKalmanModel_set__observer(t_SemiAnalyticalKalmanModel *self, PyObject *arg, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyGetSetDef t_SemiAnalyticalKalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, currentDate),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimate),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedPropagator),
          DECLARE_GETSET_FIELD(t_SemiAnalyticalKalmanModel, observer),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalKalmanModel__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, finalizeOperationsObservationGrid, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedPropagator, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, initializeShortPeriodicTerms, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, processMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, setObserver, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, updateNominalSpacecraftState, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, updateReferenceTrajectory, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, updateShortPeriods, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalKalmanModel)[] = {
          { Py_tp_methods, t_SemiAnalyticalKalmanModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalKalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalKalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalKalmanModel, t_SemiAnalyticalKalmanModel, SemiAnalyticalKalmanModel);

        void t_SemiAnalyticalKalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalKalmanModel), &PY_TYPE_DEF(SemiAnalyticalKalmanModel), module, "SemiAnalyticalKalmanModel", 0);
        }

        void t_SemiAnalyticalKalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanModel), "class_", make_descriptor(SemiAnalyticalKalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanModel), "wrapfn_", make_descriptor(t_SemiAnalyticalKalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalKalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalKalmanModel::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalKalmanModel::wrap_Object(SemiAnalyticalKalmanModel(((t_SemiAnalyticalKalmanModel *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalKalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalKalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_finalizeEstimation(t_SemiAnalyticalKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalKalmanModel *self)
        {
          OBJ_CALL(self->object.finalizeOperationsObservationGrid());
          Py_RETURN_NONE;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentDate(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimate(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagator(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEvolution(t_SemiAnalyticalKalmanModel *self, PyObject *args)
        {
          jdouble a0;
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::extended::t_NonLinearEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getInnovation(t_SemiAnalyticalKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getObserver(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::estimation::sequential::KalmanObserver result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedMeasurement(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.initializeShortPeriodicTerms(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodicTerms", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_processMeasurements(t_SemiAnalyticalKalmanModel *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::extended::ExtendedKalmanFilter a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::hipparchus::filtering::kalman::extended::ExtendedKalmanFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::hipparchus::filtering::kalman::extended::t_ExtendedKalmanFilter::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0, a1));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_setObserver(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateNominalSpacecraftState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateNominalSpacecraftState", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_updateReferenceTrajectory(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateReferenceTrajectory(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateReferenceTrajectory", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_updateShortPeriods(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateShortPeriods(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateShortPeriods", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__currentDate(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimate(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagator(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__observer(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(value);
        }
        static int t_SemiAnalyticalKalmanModel_set__observer(t_SemiAnalyticalKalmanModel *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldTaylorMap.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldTaylorMap.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldTaylorMap::class$ = NULL;
        jmethodID *FieldTaylorMap::mids$ = NULL;
        bool FieldTaylorMap::live$ = false;

        jclass FieldTaylorMap::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldTaylorMap");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2d4107722298a4c6] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_e2ca6bcdfe4e6004] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;III)V");
            mids$[mid_compose_1ca2cfdef9628b01] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;)Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;");
            mids$[mid_getFunction_14f0e73adde16f83] = env->getMethodID(cls, "getFunction", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getNbFunctions_d6ab429752e7c267] = env->getMethodID(cls, "getNbFunctions", "()I");
            mids$[mid_getNbParameters_d6ab429752e7c267] = env->getMethodID(cls, "getNbParameters", "()I");
            mids$[mid_getPoint_94ed2e0620f8833d] = env->getMethodID(cls, "getPoint", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_invert_521d6a28243fe141] = env->getMethodID(cls, "invert", "(Lorg/hipparchus/linear/FieldMatrixDecomposer;)Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;");
            mids$[mid_value_63544903937aafd5] = env->getMethodID(cls, "value", "([D)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_38b803e86c0bea36] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldTaylorMap::FieldTaylorMap(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2d4107722298a4c6, a0.this$, a1.this$)) {}

        FieldTaylorMap::FieldTaylorMap(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e2ca6bcdfe4e6004, a0.this$, a1, a2, a3)) {}

        FieldTaylorMap FieldTaylorMap::compose(const FieldTaylorMap & a0) const
        {
          return FieldTaylorMap(env->callObjectMethod(this$, mids$[mid_compose_1ca2cfdef9628b01], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldTaylorMap::getFunction(jint a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getFunction_14f0e73adde16f83], a0));
        }

        jint FieldTaylorMap::getNbFunctions() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbFunctions_d6ab429752e7c267]);
        }

        jint FieldTaylorMap::getNbParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbParameters_d6ab429752e7c267]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::getPoint() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPoint_94ed2e0620f8833d]));
        }

        FieldTaylorMap FieldTaylorMap::invert(const ::org::hipparchus::linear::FieldMatrixDecomposer & a0) const
        {
          return FieldTaylorMap(env->callObjectMethod(this$, mids$[mid_invert_521d6a28243fe141], a0.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::value(const JArray< jdouble > & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_63544903937aafd5], a0.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_38b803e86c0bea36], a0.this$));
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
        static PyObject *t_FieldTaylorMap_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTaylorMap_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTaylorMap_of_(t_FieldTaylorMap *self, PyObject *args);
        static int t_FieldTaylorMap_init_(t_FieldTaylorMap *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldTaylorMap_compose(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_getFunction(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_getNbFunctions(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_getNbParameters(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_getPoint(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_invert(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_value(t_FieldTaylorMap *self, PyObject *args);
        static PyObject *t_FieldTaylorMap_get__nbFunctions(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__nbParameters(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__point(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__parameters_(t_FieldTaylorMap *self, void *data);
        static PyGetSetDef t_FieldTaylorMap__fields_[] = {
          DECLARE_GET_FIELD(t_FieldTaylorMap, nbFunctions),
          DECLARE_GET_FIELD(t_FieldTaylorMap, nbParameters),
          DECLARE_GET_FIELD(t_FieldTaylorMap, point),
          DECLARE_GET_FIELD(t_FieldTaylorMap, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldTaylorMap__methods_[] = {
          DECLARE_METHOD(t_FieldTaylorMap, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTaylorMap, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTaylorMap, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldTaylorMap, compose, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, getFunction, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, getNbFunctions, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, getNbParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, invert, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldTaylorMap)[] = {
          { Py_tp_methods, t_FieldTaylorMap__methods_ },
          { Py_tp_init, (void *) t_FieldTaylorMap_init_ },
          { Py_tp_getset, t_FieldTaylorMap__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldTaylorMap)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldTaylorMap, t_FieldTaylorMap, FieldTaylorMap);
        PyObject *t_FieldTaylorMap::wrap_Object(const FieldTaylorMap& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTaylorMap::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTaylorMap *self = (t_FieldTaylorMap *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldTaylorMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTaylorMap::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTaylorMap *self = (t_FieldTaylorMap *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldTaylorMap::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldTaylorMap), &PY_TYPE_DEF(FieldTaylorMap), module, "FieldTaylorMap", 0);
        }

        void t_FieldTaylorMap::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "class_", make_descriptor(FieldTaylorMap::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "wrapfn_", make_descriptor(t_FieldTaylorMap::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldTaylorMap_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldTaylorMap::initializeClass, 1)))
            return NULL;
          return t_FieldTaylorMap::wrap_Object(FieldTaylorMap(((t_FieldTaylorMap *) arg)->object.this$));
        }
        static PyObject *t_FieldTaylorMap_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldTaylorMap::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldTaylorMap_of_(t_FieldTaylorMap *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldTaylorMap_init_(t_FieldTaylorMap *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldTaylorMap object((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldTaylorMap(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              jint a3;
              FieldTaylorMap object((jobject) NULL);

              if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldTaylorMap(a0, a1, a2, a3));
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

        static PyObject *t_FieldTaylorMap_compose(t_FieldTaylorMap *self, PyObject *arg)
        {
          FieldTaylorMap a0((jobject) NULL);
          PyTypeObject **p0;
          FieldTaylorMap result((jobject) NULL);

          if (!parseArg(arg, "K", FieldTaylorMap::initializeClass, &a0, &p0, t_FieldTaylorMap::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_FieldTaylorMap::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_getFunction(t_FieldTaylorMap *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getFunction(a0));
            return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getFunction", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_getNbFunctions(t_FieldTaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbFunctions());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldTaylorMap_getNbParameters(t_FieldTaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldTaylorMap_getPoint(t_FieldTaylorMap *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPoint());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldTaylorMap_invert(t_FieldTaylorMap *self, PyObject *arg)
        {
          ::org::hipparchus::linear::FieldMatrixDecomposer a0((jobject) NULL);
          PyTypeObject **p0;
          FieldTaylorMap result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrixDecomposer::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixDecomposer::parameters_))
          {
            OBJ_CALL(result = self->object.invert(a0));
            return t_FieldTaylorMap::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "invert", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_value(t_FieldTaylorMap *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
        static PyObject *t_FieldTaylorMap_get__parameters_(t_FieldTaylorMap *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldTaylorMap_get__nbFunctions(t_FieldTaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbFunctions());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldTaylorMap_get__nbParameters(t_FieldTaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldTaylorMap_get__point(t_FieldTaylorMap *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPoint());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/InterSatellitesRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *InterSatellitesRangeBuilder::class$ = NULL;
          jmethodID *InterSatellitesRangeBuilder::mids$ = NULL;
          bool InterSatellitesRangeBuilder::live$ = false;

          jclass InterSatellitesRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/InterSatellitesRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_234e83b962f2980f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;ZDD)V");
              mids$[mid_build_d968c4613fbbdb9e] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/InterSatellitesRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesRangeBuilder::InterSatellitesRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::estimation::measurements::ObservableSatellite & a2, jboolean a3, jdouble a4, jdouble a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_234e83b962f2980f, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

          ::org::orekit::estimation::measurements::InterSatellitesRange InterSatellitesRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::InterSatellitesRange(env->callObjectMethod(this$, mids$[mid_build_d968c4613fbbdb9e], a0.this$, a1.this$));
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
          static PyObject *t_InterSatellitesRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesRangeBuilder_of_(t_InterSatellitesRangeBuilder *self, PyObject *args);
          static int t_InterSatellitesRangeBuilder_init_(t_InterSatellitesRangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesRangeBuilder_build(t_InterSatellitesRangeBuilder *self, PyObject *args);
          static PyObject *t_InterSatellitesRangeBuilder_get__parameters_(t_InterSatellitesRangeBuilder *self, void *data);
          static PyGetSetDef t_InterSatellitesRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesRangeBuilder)[] = {
            { Py_tp_methods, t_InterSatellitesRangeBuilder__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesRangeBuilder_init_ },
            { Py_tp_getset, t_InterSatellitesRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(InterSatellitesRangeBuilder, t_InterSatellitesRangeBuilder, InterSatellitesRangeBuilder);
          PyObject *t_InterSatellitesRangeBuilder::wrap_Object(const InterSatellitesRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesRangeBuilder *self = (t_InterSatellitesRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesRangeBuilder *self = (t_InterSatellitesRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesRangeBuilder), &PY_TYPE_DEF(InterSatellitesRangeBuilder), module, "InterSatellitesRangeBuilder", 0);
          }

          void t_InterSatellitesRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "class_", make_descriptor(InterSatellitesRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "wrapfn_", make_descriptor(t_InterSatellitesRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesRangeBuilder::wrap_Object(InterSatellitesRangeBuilder(((t_InterSatellitesRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesRangeBuilder_of_(t_InterSatellitesRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesRangeBuilder_init_(t_InterSatellitesRangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a2((jobject) NULL);
            jboolean a3;
            jdouble a4;
            jdouble a5;
            InterSatellitesRangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkZDD", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = InterSatellitesRangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(InterSatellitesRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesRangeBuilder_build(t_InterSatellitesRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::InterSatellitesRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_InterSatellitesRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(InterSatellitesRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_InterSatellitesRangeBuilder_get__parameters_(t_InterSatellitesRangeBuilder *self, void *data)
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
#include "java/util/Collections.h"
#include "java/util/Iterator.h"
#include "java/util/ListIterator.h"
#include "java/util/Set.h"
#include "java/util/ArrayList.h"
#include "java/util/NavigableSet.h"
#include "java/util/Map.h"
#include "java/util/SortedMap.h"
#include "java/util/Deque.h"
#include "java/util/Queue.h"
#include "java/util/Comparator.h"
#include "java/util/NavigableMap.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/util/Random.h"
#include "java/util/Enumeration.h"
#include "java/lang/Boolean.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Collections::class$ = NULL;
    jmethodID *Collections::mids$ = NULL;
    bool Collections::live$ = false;
    ::java::util::List *Collections::EMPTY_LIST = NULL;
    ::java::util::Map *Collections::EMPTY_MAP = NULL;
    ::java::util::Set *Collections::EMPTY_SET = NULL;

    jclass Collections::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Collections");

        mids$ = new jmethodID[max_mid];
        mids$[mid_addAll_399f3f3a9110259a] = env->getStaticMethodID(cls, "addAll", "(Ljava/util/Collection;[Ljava/lang/Object;)Z");
        mids$[mid_asLifoQueue_a72112e8416981e2] = env->getStaticMethodID(cls, "asLifoQueue", "(Ljava/util/Deque;)Ljava/util/Queue;");
        mids$[mid_binarySearch_3ae2f81ebe76a5f8] = env->getStaticMethodID(cls, "binarySearch", "(Ljava/util/List;Ljava/lang/Object;)I");
        mids$[mid_binarySearch_7d264bc14938cc7a] = env->getStaticMethodID(cls, "binarySearch", "(Ljava/util/List;Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_checkedCollection_c4154f9faa06baf0] = env->getStaticMethodID(cls, "checkedCollection", "(Ljava/util/Collection;Ljava/lang/Class;)Ljava/util/Collection;");
        mids$[mid_checkedList_b7cd7f823eba48e8] = env->getStaticMethodID(cls, "checkedList", "(Ljava/util/List;Ljava/lang/Class;)Ljava/util/List;");
        mids$[mid_checkedMap_21e267a28dbbf561] = env->getStaticMethodID(cls, "checkedMap", "(Ljava/util/Map;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/Map;");
        mids$[mid_checkedNavigableMap_d56a1eb052efc678] = env->getStaticMethodID(cls, "checkedNavigableMap", "(Ljava/util/NavigableMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/NavigableMap;");
        mids$[mid_checkedNavigableSet_5d758ca38a44f667] = env->getStaticMethodID(cls, "checkedNavigableSet", "(Ljava/util/NavigableSet;Ljava/lang/Class;)Ljava/util/NavigableSet;");
        mids$[mid_checkedQueue_7715709c65feb490] = env->getStaticMethodID(cls, "checkedQueue", "(Ljava/util/Queue;Ljava/lang/Class;)Ljava/util/Queue;");
        mids$[mid_checkedSet_9836c546c52be1f0] = env->getStaticMethodID(cls, "checkedSet", "(Ljava/util/Set;Ljava/lang/Class;)Ljava/util/Set;");
        mids$[mid_checkedSortedMap_811ef709a1e68ae7] = env->getStaticMethodID(cls, "checkedSortedMap", "(Ljava/util/SortedMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/SortedMap;");
        mids$[mid_checkedSortedSet_f4ea00e721d9b00b] = env->getStaticMethodID(cls, "checkedSortedSet", "(Ljava/util/SortedSet;Ljava/lang/Class;)Ljava/util/SortedSet;");
        mids$[mid_copy_a7e27987d82c9ab2] = env->getStaticMethodID(cls, "copy", "(Ljava/util/List;Ljava/util/List;)V");
        mids$[mid_disjoint_6c2df74e01149722] = env->getStaticMethodID(cls, "disjoint", "(Ljava/util/Collection;Ljava/util/Collection;)Z");
        mids$[mid_emptyEnumeration_21566f230cac5c4a] = env->getStaticMethodID(cls, "emptyEnumeration", "()Ljava/util/Enumeration;");
        mids$[mid_emptyIterator_4f613ccd2f803b4b] = env->getStaticMethodID(cls, "emptyIterator", "()Ljava/util/Iterator;");
        mids$[mid_emptyList_d751c1a57012b438] = env->getStaticMethodID(cls, "emptyList", "()Ljava/util/List;");
        mids$[mid_emptyListIterator_7bb80a6d83d87d72] = env->getStaticMethodID(cls, "emptyListIterator", "()Ljava/util/ListIterator;");
        mids$[mid_emptyMap_dbcb8bbac6b35e0d] = env->getStaticMethodID(cls, "emptyMap", "()Ljava/util/Map;");
        mids$[mid_emptyNavigableMap_93ffcad6c2bfa505] = env->getStaticMethodID(cls, "emptyNavigableMap", "()Ljava/util/NavigableMap;");
        mids$[mid_emptyNavigableSet_915193d823a938b2] = env->getStaticMethodID(cls, "emptyNavigableSet", "()Ljava/util/NavigableSet;");
        mids$[mid_emptySet_6b191a9b12c1004b] = env->getStaticMethodID(cls, "emptySet", "()Ljava/util/Set;");
        mids$[mid_emptySortedMap_329ce98de7adb29e] = env->getStaticMethodID(cls, "emptySortedMap", "()Ljava/util/SortedMap;");
        mids$[mid_emptySortedSet_815c7115fae241c1] = env->getStaticMethodID(cls, "emptySortedSet", "()Ljava/util/SortedSet;");
        mids$[mid_enumeration_c56d5c65b1ea0602] = env->getStaticMethodID(cls, "enumeration", "(Ljava/util/Collection;)Ljava/util/Enumeration;");
        mids$[mid_fill_22b91be4bc7b6a0b] = env->getStaticMethodID(cls, "fill", "(Ljava/util/List;Ljava/lang/Object;)V");
        mids$[mid_frequency_341dc2d39eeb04d4] = env->getStaticMethodID(cls, "frequency", "(Ljava/util/Collection;Ljava/lang/Object;)I");
        mids$[mid_indexOfSubList_a106cf709741c619] = env->getStaticMethodID(cls, "indexOfSubList", "(Ljava/util/List;Ljava/util/List;)I");
        mids$[mid_lastIndexOfSubList_a106cf709741c619] = env->getStaticMethodID(cls, "lastIndexOfSubList", "(Ljava/util/List;Ljava/util/List;)I");
        mids$[mid_list_385576d86d02e1ea] = env->getStaticMethodID(cls, "list", "(Ljava/util/Enumeration;)Ljava/util/ArrayList;");
        mids$[mid_max_c34cfb85a6292bba] = env->getStaticMethodID(cls, "max", "(Ljava/util/Collection;)Ljava/lang/Object;");
        mids$[mid_max_63479742b6e84884] = env->getStaticMethodID(cls, "max", "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;");
        mids$[mid_min_c34cfb85a6292bba] = env->getStaticMethodID(cls, "min", "(Ljava/util/Collection;)Ljava/lang/Object;");
        mids$[mid_min_63479742b6e84884] = env->getStaticMethodID(cls, "min", "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;");
        mids$[mid_nCopies_123b467128195f8a] = env->getStaticMethodID(cls, "nCopies", "(ILjava/lang/Object;)Ljava/util/List;");
        mids$[mid_newSetFromMap_89fe72a6310d0d4c] = env->getStaticMethodID(cls, "newSetFromMap", "(Ljava/util/Map;)Ljava/util/Set;");
        mids$[mid_replaceAll_bfe21376ce92f87b] = env->getStaticMethodID(cls, "replaceAll", "(Ljava/util/List;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_reverse_aa335fea495d60e0] = env->getStaticMethodID(cls, "reverse", "(Ljava/util/List;)V");
        mids$[mid_reverseOrder_44d5f0105a5559b7] = env->getStaticMethodID(cls, "reverseOrder", "()Ljava/util/Comparator;");
        mids$[mid_reverseOrder_855f0cb3fda1e69f] = env->getStaticMethodID(cls, "reverseOrder", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_rotate_26a46e5a5c0ee345] = env->getStaticMethodID(cls, "rotate", "(Ljava/util/List;I)V");
        mids$[mid_shuffle_aa335fea495d60e0] = env->getStaticMethodID(cls, "shuffle", "(Ljava/util/List;)V");
        mids$[mid_shuffle_d847501f0c28f181] = env->getStaticMethodID(cls, "shuffle", "(Ljava/util/List;Ljava/util/Random;)V");
        mids$[mid_singleton_dd7b1a28b924e386] = env->getStaticMethodID(cls, "singleton", "(Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_singletonList_b82a310c35799ced] = env->getStaticMethodID(cls, "singletonList", "(Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_singletonMap_77f04c24e79d294d] = env->getStaticMethodID(cls, "singletonMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_sort_aa335fea495d60e0] = env->getStaticMethodID(cls, "sort", "(Ljava/util/List;)V");
        mids$[mid_sort_04cb538d1d0e79fb] = env->getStaticMethodID(cls, "sort", "(Ljava/util/List;Ljava/util/Comparator;)V");
        mids$[mid_swap_211b68baa6e80058] = env->getStaticMethodID(cls, "swap", "(Ljava/util/List;II)V");
        mids$[mid_synchronizedCollection_ca6e223ef3eef34f] = env->getStaticMethodID(cls, "synchronizedCollection", "(Ljava/util/Collection;)Ljava/util/Collection;");
        mids$[mid_synchronizedList_a27502c31bd75a45] = env->getStaticMethodID(cls, "synchronizedList", "(Ljava/util/List;)Ljava/util/List;");
        mids$[mid_synchronizedMap_f2600be6f3b6923e] = env->getStaticMethodID(cls, "synchronizedMap", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_synchronizedNavigableMap_e89404ea35b31159] = env->getStaticMethodID(cls, "synchronizedNavigableMap", "(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;");
        mids$[mid_synchronizedNavigableSet_acbf53b6d3caa164] = env->getStaticMethodID(cls, "synchronizedNavigableSet", "(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;");
        mids$[mid_synchronizedSet_63f413923fe84378] = env->getStaticMethodID(cls, "synchronizedSet", "(Ljava/util/Set;)Ljava/util/Set;");
        mids$[mid_synchronizedSortedMap_3288916427f76e27] = env->getStaticMethodID(cls, "synchronizedSortedMap", "(Ljava/util/SortedMap;)Ljava/util/SortedMap;");
        mids$[mid_synchronizedSortedSet_f4e5e60d3fd515d6] = env->getStaticMethodID(cls, "synchronizedSortedSet", "(Ljava/util/SortedSet;)Ljava/util/SortedSet;");
        mids$[mid_unmodifiableCollection_ca6e223ef3eef34f] = env->getStaticMethodID(cls, "unmodifiableCollection", "(Ljava/util/Collection;)Ljava/util/Collection;");
        mids$[mid_unmodifiableList_a27502c31bd75a45] = env->getStaticMethodID(cls, "unmodifiableList", "(Ljava/util/List;)Ljava/util/List;");
        mids$[mid_unmodifiableMap_f2600be6f3b6923e] = env->getStaticMethodID(cls, "unmodifiableMap", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_unmodifiableNavigableMap_e89404ea35b31159] = env->getStaticMethodID(cls, "unmodifiableNavigableMap", "(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;");
        mids$[mid_unmodifiableNavigableSet_acbf53b6d3caa164] = env->getStaticMethodID(cls, "unmodifiableNavigableSet", "(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;");
        mids$[mid_unmodifiableSet_63f413923fe84378] = env->getStaticMethodID(cls, "unmodifiableSet", "(Ljava/util/Set;)Ljava/util/Set;");
        mids$[mid_unmodifiableSortedMap_3288916427f76e27] = env->getStaticMethodID(cls, "unmodifiableSortedMap", "(Ljava/util/SortedMap;)Ljava/util/SortedMap;");
        mids$[mid_unmodifiableSortedSet_f4e5e60d3fd515d6] = env->getStaticMethodID(cls, "unmodifiableSortedSet", "(Ljava/util/SortedSet;)Ljava/util/SortedSet;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        EMPTY_LIST = new ::java::util::List(env->getStaticObjectField(cls, "EMPTY_LIST", "Ljava/util/List;"));
        EMPTY_MAP = new ::java::util::Map(env->getStaticObjectField(cls, "EMPTY_MAP", "Ljava/util/Map;"));
        EMPTY_SET = new ::java::util::Set(env->getStaticObjectField(cls, "EMPTY_SET", "Ljava/util/Set;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Collections::addAll(const ::java::util::Collection & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_addAll_399f3f3a9110259a], a0.this$, a1.this$);
    }

    ::java::util::Queue Collections::asLifoQueue(const ::java::util::Deque & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Queue(env->callStaticObjectMethod(cls, mids$[mid_asLifoQueue_a72112e8416981e2], a0.this$));
    }

    jint Collections::binarySearch(const ::java::util::List & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_3ae2f81ebe76a5f8], a0.this$, a1.this$);
    }

    jint Collections::binarySearch(const ::java::util::List & a0, const ::java::lang::Object & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_7d264bc14938cc7a], a0.this$, a1.this$, a2.this$);
    }

    ::java::util::Collection Collections::checkedCollection(const ::java::util::Collection & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_checkedCollection_c4154f9faa06baf0], a0.this$, a1.this$));
    }

    ::java::util::List Collections::checkedList(const ::java::util::List & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_checkedList_b7cd7f823eba48e8], a0.this$, a1.this$));
    }

    ::java::util::Map Collections::checkedMap(const ::java::util::Map & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_checkedMap_21e267a28dbbf561], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::NavigableMap Collections::checkedNavigableMap(const ::java::util::NavigableMap & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_checkedNavigableMap_d56a1eb052efc678], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::NavigableSet Collections::checkedNavigableSet(const ::java::util::NavigableSet & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_checkedNavigableSet_5d758ca38a44f667], a0.this$, a1.this$));
    }

    ::java::util::Queue Collections::checkedQueue(const ::java::util::Queue & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Queue(env->callStaticObjectMethod(cls, mids$[mid_checkedQueue_7715709c65feb490], a0.this$, a1.this$));
    }

    ::java::util::Set Collections::checkedSet(const ::java::util::Set & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_checkedSet_9836c546c52be1f0], a0.this$, a1.this$));
    }

    ::java::util::SortedMap Collections::checkedSortedMap(const ::java::util::SortedMap & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_checkedSortedMap_811ef709a1e68ae7], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::SortedSet Collections::checkedSortedSet(const ::java::util::SortedSet & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_checkedSortedSet_f4ea00e721d9b00b], a0.this$, a1.this$));
    }

    void Collections::copy(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_copy_a7e27987d82c9ab2], a0.this$, a1.this$);
    }

    jboolean Collections::disjoint(const ::java::util::Collection & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_disjoint_6c2df74e01149722], a0.this$, a1.this$);
    }

    ::java::util::Enumeration Collections::emptyEnumeration()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_emptyEnumeration_21566f230cac5c4a]));
    }

    ::java::util::Iterator Collections::emptyIterator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Iterator(env->callStaticObjectMethod(cls, mids$[mid_emptyIterator_4f613ccd2f803b4b]));
    }

    ::java::util::List Collections::emptyList()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_emptyList_d751c1a57012b438]));
    }

    ::java::util::ListIterator Collections::emptyListIterator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::ListIterator(env->callStaticObjectMethod(cls, mids$[mid_emptyListIterator_7bb80a6d83d87d72]));
    }

    ::java::util::Map Collections::emptyMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_emptyMap_dbcb8bbac6b35e0d]));
    }

    ::java::util::NavigableMap Collections::emptyNavigableMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_emptyNavigableMap_93ffcad6c2bfa505]));
    }

    ::java::util::NavigableSet Collections::emptyNavigableSet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_emptyNavigableSet_915193d823a938b2]));
    }

    ::java::util::Set Collections::emptySet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_emptySet_6b191a9b12c1004b]));
    }

    ::java::util::SortedMap Collections::emptySortedMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_emptySortedMap_329ce98de7adb29e]));
    }

    ::java::util::SortedSet Collections::emptySortedSet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_emptySortedSet_815c7115fae241c1]));
    }

    ::java::util::Enumeration Collections::enumeration(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_enumeration_c56d5c65b1ea0602], a0.this$));
    }

    void Collections::fill(const ::java::util::List & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_22b91be4bc7b6a0b], a0.this$, a1.this$);
    }

    jint Collections::frequency(const ::java::util::Collection & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_frequency_341dc2d39eeb04d4], a0.this$, a1.this$);
    }

    jint Collections::indexOfSubList(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_indexOfSubList_a106cf709741c619], a0.this$, a1.this$);
    }

    jint Collections::lastIndexOfSubList(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_lastIndexOfSubList_a106cf709741c619], a0.this$, a1.this$);
    }

    ::java::util::ArrayList Collections::list(const ::java::util::Enumeration & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::ArrayList(env->callStaticObjectMethod(cls, mids$[mid_list_385576d86d02e1ea], a0.this$));
    }

    ::java::lang::Object Collections::max$(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_max_c34cfb85a6292bba], a0.this$));
    }

    ::java::lang::Object Collections::max$(const ::java::util::Collection & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_max_63479742b6e84884], a0.this$, a1.this$));
    }

    ::java::lang::Object Collections::min$(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_min_c34cfb85a6292bba], a0.this$));
    }

    ::java::lang::Object Collections::min$(const ::java::util::Collection & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_min_63479742b6e84884], a0.this$, a1.this$));
    }

    ::java::util::List Collections::nCopies(jint a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_nCopies_123b467128195f8a], a0, a1.this$));
    }

    ::java::util::Set Collections::newSetFromMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_newSetFromMap_89fe72a6310d0d4c], a0.this$));
    }

    jboolean Collections::replaceAll(const ::java::util::List & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_replaceAll_bfe21376ce92f87b], a0.this$, a1.this$, a2.this$);
    }

    void Collections::reverse(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_reverse_aa335fea495d60e0], a0.this$);
    }

    ::java::util::Comparator Collections::reverseOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_44d5f0105a5559b7]));
    }

    ::java::util::Comparator Collections::reverseOrder(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_855f0cb3fda1e69f], a0.this$));
    }

    void Collections::rotate(const ::java::util::List & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_rotate_26a46e5a5c0ee345], a0.this$, a1);
    }

    void Collections::shuffle(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_shuffle_aa335fea495d60e0], a0.this$);
    }

    void Collections::shuffle(const ::java::util::List & a0, const ::java::util::Random & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_shuffle_d847501f0c28f181], a0.this$, a1.this$);
    }

    ::java::util::Set Collections::singleton(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_singleton_dd7b1a28b924e386], a0.this$));
    }

    ::java::util::List Collections::singletonList(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_singletonList_b82a310c35799ced], a0.this$));
    }

    ::java::util::Map Collections::singletonMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_singletonMap_77f04c24e79d294d], a0.this$, a1.this$));
    }

    void Collections::sort(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_aa335fea495d60e0], a0.this$);
    }

    void Collections::sort(const ::java::util::List & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_04cb538d1d0e79fb], a0.this$, a1.this$);
    }

    void Collections::swap(const ::java::util::List & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_swap_211b68baa6e80058], a0.this$, a1, a2);
    }

    ::java::util::Collection Collections::synchronizedCollection(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_synchronizedCollection_ca6e223ef3eef34f], a0.this$));
    }

    ::java::util::List Collections::synchronizedList(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_synchronizedList_a27502c31bd75a45], a0.this$));
    }

    ::java::util::Map Collections::synchronizedMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_synchronizedMap_f2600be6f3b6923e], a0.this$));
    }

    ::java::util::NavigableMap Collections::synchronizedNavigableMap(const ::java::util::NavigableMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_synchronizedNavigableMap_e89404ea35b31159], a0.this$));
    }

    ::java::util::NavigableSet Collections::synchronizedNavigableSet(const ::java::util::NavigableSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_synchronizedNavigableSet_acbf53b6d3caa164], a0.this$));
    }

    ::java::util::Set Collections::synchronizedSet(const ::java::util::Set & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSet_63f413923fe84378], a0.this$));
    }

    ::java::util::SortedMap Collections::synchronizedSortedMap(const ::java::util::SortedMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSortedMap_3288916427f76e27], a0.this$));
    }

    ::java::util::SortedSet Collections::synchronizedSortedSet(const ::java::util::SortedSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSortedSet_f4e5e60d3fd515d6], a0.this$));
    }

    ::java::util::Collection Collections::unmodifiableCollection(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableCollection_ca6e223ef3eef34f], a0.this$));
    }

    ::java::util::List Collections::unmodifiableList(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableList_a27502c31bd75a45], a0.this$));
    }

    ::java::util::Map Collections::unmodifiableMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableMap_f2600be6f3b6923e], a0.this$));
    }

    ::java::util::NavigableMap Collections::unmodifiableNavigableMap(const ::java::util::NavigableMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableNavigableMap_e89404ea35b31159], a0.this$));
    }

    ::java::util::NavigableSet Collections::unmodifiableNavigableSet(const ::java::util::NavigableSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableNavigableSet_acbf53b6d3caa164], a0.this$));
    }

    ::java::util::Set Collections::unmodifiableSet(const ::java::util::Set & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSet_63f413923fe84378], a0.this$));
    }

    ::java::util::SortedMap Collections::unmodifiableSortedMap(const ::java::util::SortedMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSortedMap_3288916427f76e27], a0.this$));
    }

    ::java::util::SortedSet Collections::unmodifiableSortedSet(const ::java::util::SortedSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSortedSet_f4e5e60d3fd515d6], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Collections_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_addAll(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_asLifoQueue(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_binarySearch(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedCollection(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedList(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedNavigableMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedNavigableSet(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedQueue(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedSet(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedSortedMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedSortedSet(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_copy(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_disjoint(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_emptyEnumeration(PyTypeObject *type);
    static PyObject *t_Collections_emptyIterator(PyTypeObject *type);
    static PyObject *t_Collections_emptyList(PyTypeObject *type);
    static PyObject *t_Collections_emptyListIterator(PyTypeObject *type);
    static PyObject *t_Collections_emptyMap(PyTypeObject *type);
    static PyObject *t_Collections_emptyNavigableMap(PyTypeObject *type);
    static PyObject *t_Collections_emptyNavigableSet(PyTypeObject *type);
    static PyObject *t_Collections_emptySet(PyTypeObject *type);
    static PyObject *t_Collections_emptySortedMap(PyTypeObject *type);
    static PyObject *t_Collections_emptySortedSet(PyTypeObject *type);
    static PyObject *t_Collections_enumeration(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_fill(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_frequency(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_indexOfSubList(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_lastIndexOfSubList(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_list(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_nCopies(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_newSetFromMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_replaceAll(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_reverse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_reverseOrder(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_rotate(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_shuffle(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_singleton(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_singletonList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_singletonMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_sort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_swap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_synchronizedCollection(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedNavigableMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedNavigableSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedSortedMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedSortedSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableCollection(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableNavigableMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableNavigableSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableSortedMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableSortedSet(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Collections__methods_[] = {
      DECLARE_METHOD(t_Collections, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, addAll, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, asLifoQueue, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, binarySearch, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedCollection, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedList, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedNavigableMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedNavigableSet, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedQueue, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedSet, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedSortedMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedSortedSet, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, copy, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, disjoint, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyEnumeration, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyIterator, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyList, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyListIterator, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyMap, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyNavigableMap, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyNavigableSet, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptySet, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptySortedMap, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptySortedSet, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, enumeration, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, fill, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, frequency, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, indexOfSubList, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, lastIndexOfSubList, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, list, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, nCopies, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, newSetFromMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, replaceAll, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, reverse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, reverseOrder, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, rotate, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, shuffle, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, singleton, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, singletonList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, singletonMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, sort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, swap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedCollection, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedNavigableMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedNavigableSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedSortedMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedSortedSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableCollection, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableNavigableMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableNavigableSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableSortedMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableSortedSet, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Collections)[] = {
      { Py_tp_methods, t_Collections__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Collections)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Collections, t_Collections, Collections);

    void t_Collections::install(PyObject *module)
    {
      installType(&PY_TYPE(Collections), &PY_TYPE_DEF(Collections), module, "Collections", 0);
    }

    void t_Collections::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "class_", make_descriptor(Collections::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "wrapfn_", make_descriptor(t_Collections::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "boxfn_", make_descriptor(boxObject));
      env->getClass(Collections::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "EMPTY_LIST", make_descriptor(::java::util::t_List::wrap_Object(*Collections::EMPTY_LIST)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "EMPTY_MAP", make_descriptor(::java::util::t_Map::wrap_Object(*Collections::EMPTY_MAP)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "EMPTY_SET", make_descriptor(::java::util::t_Set::wrap_Object(*Collections::EMPTY_SET)));
    }

    static PyObject *t_Collections_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Collections::initializeClass, 1)))
        return NULL;
      return t_Collections::wrap_Object(Collections(((t_Collections *) arg)->object.this$));
    }
    static PyObject *t_Collections_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Collections::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Collections_addAll(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      JArray< ::java::lang::Object > a1((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "K[o", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::addAll(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "addAll", args);
      return NULL;
    }

    static PyObject *t_Collections_asLifoQueue(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Deque a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Queue result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Deque::initializeClass, &a0, &p0, ::java::util::t_Deque::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::asLifoQueue(a0));
        return ::java::util::t_Queue::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "asLifoQueue", arg);
      return NULL;
    }

    static PyObject *t_Collections_binarySearch(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "Ko", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(result = ::java::util::Collections::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "KoK", ::java::util::List::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::binarySearch(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "binarySearch", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedCollection(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedCollection(a0, a1));
        return ::java::util::t_Collection::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedCollection", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedList(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedList(a0, a1));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedList", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedMap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::Class a2((jobject) NULL);
      PyTypeObject **p2;
      ::java::util::Map result((jobject) NULL);

      if (!parseArgs(args, "KKK", ::java::util::Map::initializeClass, ::java::lang::Class::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_, &a2, &p2, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedMap(a0, a1, a2));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedMap", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedNavigableMap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::NavigableMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::Class a2((jobject) NULL);
      PyTypeObject **p2;
      ::java::util::NavigableMap result((jobject) NULL);

      if (!parseArgs(args, "KKK", ::java::util::NavigableMap::initializeClass, ::java::lang::Class::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_, &a2, &p2, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedNavigableMap(a0, a1, a2));
        return ::java::util::t_NavigableMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedNavigableMap", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedNavigableSet(PyTypeObject *type, PyObject *args)
    {
      ::java::util::NavigableSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::NavigableSet result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::NavigableSet::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_NavigableSet::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedNavigableSet(a0, a1));
        return ::java::util::t_NavigableSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedNavigableSet", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedQueue(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Queue a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::Queue result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::Queue::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Queue::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedQueue(a0, a1));
        return ::java::util::t_Queue::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedQueue", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedSet(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Set a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::Set::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedSet(a0, a1));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedSet", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedSortedMap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::SortedMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::Class a2((jobject) NULL);
      PyTypeObject **p2;
      ::java::util::SortedMap result((jobject) NULL);

      if (!parseArgs(args, "KKK", ::java::util::SortedMap::initializeClass, ::java::lang::Class::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_SortedMap::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_, &a2, &p2, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedSortedMap(a0, a1, a2));
        return ::java::util::t_SortedMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedSortedMap", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedSortedSet(PyTypeObject *type, PyObject *args)
    {
      ::java::util::SortedSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::SortedSet result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::SortedSet::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedSortedSet(a0, a1));
        return ::java::util::t_SortedSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedSortedSet", args);
      return NULL;
    }

    static PyObject *t_Collections_copy(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List a1((jobject) NULL);
      PyTypeObject **p1;

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(::java::util::Collections::copy(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "copy", args);
      return NULL;
    }

    static PyObject *t_Collections_disjoint(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      jboolean result;

      if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::disjoint(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "disjoint", args);
      return NULL;
    }

    static PyObject *t_Collections_emptyEnumeration(PyTypeObject *type)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyEnumeration());
      return ::java::util::t_Enumeration::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyIterator(PyTypeObject *type)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyIterator());
      return ::java::util::t_Iterator::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyList(PyTypeObject *type)
    {
      ::java::util::List result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyList());
      return ::java::util::t_List::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyListIterator(PyTypeObject *type)
    {
      ::java::util::ListIterator result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyListIterator());
      return ::java::util::t_ListIterator::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyMap(PyTypeObject *type)
    {
      ::java::util::Map result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyMap());
      return ::java::util::t_Map::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyNavigableMap(PyTypeObject *type)
    {
      ::java::util::NavigableMap result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyNavigableMap());
      return ::java::util::t_NavigableMap::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyNavigableSet(PyTypeObject *type)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyNavigableSet());
      return ::java::util::t_NavigableSet::wrap_Object(result);
    }

    static PyObject *t_Collections_emptySet(PyTypeObject *type)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_Collections_emptySortedMap(PyTypeObject *type)
    {
      ::java::util::SortedMap result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptySortedMap());
      return ::java::util::t_SortedMap::wrap_Object(result);
    }

    static PyObject *t_Collections_emptySortedSet(PyTypeObject *type)
    {
      ::java::util::SortedSet result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptySortedSet());
      return ::java::util::t_SortedSet::wrap_Object(result);
    }

    static PyObject *t_Collections_enumeration(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::enumeration(a0));
        return ::java::util::t_Enumeration::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "enumeration", arg);
      return NULL;
    }

    static PyObject *t_Collections_fill(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Object a1((jobject) NULL);

      if (!parseArgs(args, "Ko", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
      {
        OBJ_CALL(::java::util::Collections::fill(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "fill", args);
      return NULL;
    }

    static PyObject *t_Collections_frequency(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Object a1((jobject) NULL);
      jint result;

      if (!parseArgs(args, "Ko", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::frequency(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "frequency", args);
      return NULL;
    }

    static PyObject *t_Collections_indexOfSubList(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List a1((jobject) NULL);
      PyTypeObject **p1;
      jint result;

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::indexOfSubList(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "indexOfSubList", args);
      return NULL;
    }

    static PyObject *t_Collections_lastIndexOfSubList(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List a1((jobject) NULL);
      PyTypeObject **p1;
      jint result;

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::lastIndexOfSubList(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "lastIndexOfSubList", args);
      return NULL;
    }

    static PyObject *t_Collections_list(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Enumeration a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::ArrayList result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Enumeration::initializeClass, &a0, &p0, ::java::util::t_Enumeration::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::list(a0));
        return ::java::util::t_ArrayList::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "list", arg);
      return NULL;
    }

    static PyObject *t_Collections_max(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::max$(a0));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::max$(a0, a1));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Collections_min(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::min$(a0));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::min$(a0, a1));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Collections_nCopies(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "Io", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::nCopies(a0, a1));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "nCopies", args);
      return NULL;
    }

    static PyObject *t_Collections_newSetFromMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::newSetFromMap(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "newSetFromMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_replaceAll(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object a2((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "Koo", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
      {
        OBJ_CALL(result = ::java::util::Collections::replaceAll(a0, a1, a2));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "replaceAll", args);
      return NULL;
    }

    static PyObject *t_Collections_reverse(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(::java::util::Collections::reverse(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "reverse", arg);
      return NULL;
    }

    static PyObject *t_Collections_reverseOrder(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::Comparator result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Collections::reverseOrder());
          return ::java::util::t_Comparator::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Comparator a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::reverseOrder(a0));
            return ::java::util::t_Comparator::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "reverseOrder", args);
      return NULL;
    }

    static PyObject *t_Collections_rotate(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      jint a1;

      if (!parseArgs(args, "KI", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
      {
        OBJ_CALL(::java::util::Collections::rotate(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "rotate", args);
      return NULL;
    }

    static PyObject *t_Collections_shuffle(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::java::util::Collections::shuffle(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Random a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::java::util::Random::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(::java::util::Collections::shuffle(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "shuffle", args);
      return NULL;
    }

    static PyObject *t_Collections_singleton(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::util::Collections::singleton(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "singleton", arg);
      return NULL;
    }

    static PyObject *t_Collections_singletonList(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::util::Collections::singletonList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "singletonList", arg);
      return NULL;
    }

    static PyObject *t_Collections_singletonMap(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::util::Map result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::singletonMap(a0, a1));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "singletonMap", args);
      return NULL;
    }

    static PyObject *t_Collections_sort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::java::util::Collections::sort(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Collections::sort(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "sort", args);
      return NULL;
    }

    static PyObject *t_Collections_swap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      jint a1;
      jint a2;

      if (!parseArgs(args, "KII", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
      {
        OBJ_CALL(::java::util::Collections::swap(a0, a1, a2));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "swap", args);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedCollection(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedCollection(a0));
        return ::java::util::t_Collection::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedCollection", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedList(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedList", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Map result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedMap(a0));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedNavigableMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableMap::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedNavigableMap(a0));
        return ::java::util::t_NavigableMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedNavigableMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedNavigableSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableSet::initializeClass, &a0, &p0, ::java::util::t_NavigableSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedNavigableSet(a0));
        return ::java::util::t_NavigableSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedNavigableSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Set a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedSet(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedSortedMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedMap::initializeClass, &a0, &p0, ::java::util::t_SortedMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedSortedMap(a0));
        return ::java::util::t_SortedMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedSortedMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedSortedSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedSortedSet(a0));
        return ::java::util::t_SortedSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedSortedSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableCollection(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableCollection(a0));
        return ::java::util::t_Collection::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableCollection", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableList(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableList", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Map result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableMap(a0));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableNavigableMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableMap::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableNavigableMap(a0));
        return ::java::util::t_NavigableMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableNavigableMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableNavigableSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableSet::initializeClass, &a0, &p0, ::java::util::t_NavigableSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableNavigableSet(a0));
        return ::java::util::t_NavigableSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableNavigableSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Set a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableSet(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableSortedMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedMap::initializeClass, &a0, &p0, ::java::util::t_SortedMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableSortedMap(a0));
        return ::java::util::t_SortedMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableSortedMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableSortedSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableSortedSet(a0));
        return ::java::util::t_SortedSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableSortedSet", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *Ndm::class$ = NULL;
          jmethodID *Ndm::mids$ = NULL;
          bool Ndm::live$ = false;

          jclass Ndm::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/Ndm");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a7e27987d82c9ab2] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;)V");
              mids$[mid_getComments_d751c1a57012b438] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
              mids$[mid_getConstituents_d751c1a57012b438] = env->getMethodID(cls, "getConstituents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Ndm::Ndm(const ::java::util::List & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a7e27987d82c9ab2, a0.this$, a1.this$)) {}

          ::java::util::List Ndm::getComments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_d751c1a57012b438]));
          }

          ::java::util::List Ndm::getConstituents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getConstituents_d751c1a57012b438]));
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
          static PyObject *t_Ndm_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Ndm_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Ndm_init_(t_Ndm *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Ndm_getComments(t_Ndm *self);
          static PyObject *t_Ndm_getConstituents(t_Ndm *self);
          static PyObject *t_Ndm_get__comments(t_Ndm *self, void *data);
          static PyObject *t_Ndm_get__constituents(t_Ndm *self, void *data);
          static PyGetSetDef t_Ndm__fields_[] = {
            DECLARE_GET_FIELD(t_Ndm, comments),
            DECLARE_GET_FIELD(t_Ndm, constituents),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Ndm__methods_[] = {
            DECLARE_METHOD(t_Ndm, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Ndm, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Ndm, getComments, METH_NOARGS),
            DECLARE_METHOD(t_Ndm, getConstituents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Ndm)[] = {
            { Py_tp_methods, t_Ndm__methods_ },
            { Py_tp_init, (void *) t_Ndm_init_ },
            { Py_tp_getset, t_Ndm__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Ndm)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Ndm, t_Ndm, Ndm);

          void t_Ndm::install(PyObject *module)
          {
            installType(&PY_TYPE(Ndm), &PY_TYPE_DEF(Ndm), module, "Ndm", 0);
          }

          void t_Ndm::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "class_", make_descriptor(Ndm::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "wrapfn_", make_descriptor(t_Ndm::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Ndm_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Ndm::initializeClass, 1)))
              return NULL;
            return t_Ndm::wrap_Object(Ndm(((t_Ndm *) arg)->object.this$));
          }
          static PyObject *t_Ndm_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Ndm::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Ndm_init_(t_Ndm *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            Ndm object((jobject) NULL);

            if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = Ndm(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Ndm_getComments(t_Ndm *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getComments());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_Ndm_getConstituents(t_Ndm *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getConstituents());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_Ndm_get__comments(t_Ndm *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getComments());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_Ndm_get__constituents(t_Ndm *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getConstituents());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedMeasurement::class$ = NULL;
        jmethodID *EstimatedMeasurement::mids$ = NULL;
        bool EstimatedMeasurement::live$ = false;

        jclass EstimatedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_047f677485db459a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;II[Lorg/orekit/propagation/SpacecraftState;[Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getDerivativesDrivers_11e4ca8182c1933d] = env->getMethodID(cls, "getDerivativesDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_getParameterDerivatives_216e712e7fff98fc] = env->getMethodID(cls, "getParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;)[D");
            mids$[mid_getParameterDerivatives_d136ede758f40943] = env->getMethodID(cls, "getParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_getStateDerivatives_45c1754ef74fe1b8] = env->getMethodID(cls, "getStateDerivatives", "(I)[[D");
            mids$[mid_getStateSize_d6ab429752e7c267] = env->getMethodID(cls, "getStateSize", "()I");
            mids$[mid_setParameterDerivatives_63f001d499f83adb] = env->getMethodID(cls, "setParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/utils/TimeSpanMap;)V");
            mids$[mid_setParameterDerivatives_313626664dd230b6] = env->getMethodID(cls, "setParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;[D)V");
            mids$[mid_setStateDerivatives_5f60b0f0790bcf77] = env->getMethodID(cls, "setStateDerivatives", "(I[[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurement::EstimatedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, jint a1, jint a2, const JArray< ::org::orekit::propagation::SpacecraftState > & a3, const JArray< ::org::orekit::utils::TimeStampedPVCoordinates > & a4) : ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->newObject(initializeClass, &mids$, mid_init$_047f677485db459a, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        ::java::util::stream::Stream EstimatedMeasurement::getDerivativesDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getDerivativesDrivers_11e4ca8182c1933d]));
        }

        JArray< jdouble > EstimatedMeasurement::getParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterDerivatives_216e712e7fff98fc], a0.this$));
        }

        JArray< jdouble > EstimatedMeasurement::getParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterDerivatives_d136ede758f40943], a0.this$, a1.this$));
        }

        JArray< JArray< jdouble > > EstimatedMeasurement::getStateDerivatives(jint a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getStateDerivatives_45c1754ef74fe1b8], a0));
        }

        jint EstimatedMeasurement::getStateSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getStateSize_d6ab429752e7c267]);
        }

        void EstimatedMeasurement::setParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::utils::TimeSpanMap & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterDerivatives_63f001d499f83adb], a0.this$, a1.this$);
        }

        void EstimatedMeasurement::setParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterDerivatives_313626664dd230b6], a0.this$, a1.this$, a2.this$);
        }

        void EstimatedMeasurement::setStateDerivatives(jint a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setStateDerivatives_5f60b0f0790bcf77], a0, a1.this$);
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
        static PyObject *t_EstimatedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurement_of_(t_EstimatedMeasurement *self, PyObject *args);
        static int t_EstimatedMeasurement_init_(t_EstimatedMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EstimatedMeasurement_getDerivativesDrivers(t_EstimatedMeasurement *self);
        static PyObject *t_EstimatedMeasurement_getParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args);
        static PyObject *t_EstimatedMeasurement_getStateDerivatives(t_EstimatedMeasurement *self, PyObject *arg);
        static PyObject *t_EstimatedMeasurement_getStateSize(t_EstimatedMeasurement *self);
        static PyObject *t_EstimatedMeasurement_setParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args);
        static PyObject *t_EstimatedMeasurement_setStateDerivatives(t_EstimatedMeasurement *self, PyObject *args);
        static PyObject *t_EstimatedMeasurement_get__derivativesDrivers(t_EstimatedMeasurement *self, void *data);
        static PyObject *t_EstimatedMeasurement_get__stateSize(t_EstimatedMeasurement *self, void *data);
        static PyObject *t_EstimatedMeasurement_get__parameters_(t_EstimatedMeasurement *self, void *data);
        static PyGetSetDef t_EstimatedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedMeasurement, derivativesDrivers),
          DECLARE_GET_FIELD(t_EstimatedMeasurement, stateSize),
          DECLARE_GET_FIELD(t_EstimatedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedMeasurement__methods_[] = {
          DECLARE_METHOD(t_EstimatedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, getDerivativesDrivers, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, getParameterDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, getStateDerivatives, METH_O),
          DECLARE_METHOD(t_EstimatedMeasurement, getStateSize, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, setParameterDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, setStateDerivatives, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedMeasurement)[] = {
          { Py_tp_methods, t_EstimatedMeasurement__methods_ },
          { Py_tp_init, (void *) t_EstimatedMeasurement_init_ },
          { Py_tp_getset, t_EstimatedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::EstimatedMeasurementBase),
          NULL
        };

        DEFINE_TYPE(EstimatedMeasurement, t_EstimatedMeasurement, EstimatedMeasurement);
        PyObject *t_EstimatedMeasurement::wrap_Object(const EstimatedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurement *self = (t_EstimatedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimatedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurement *self = (t_EstimatedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimatedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedMeasurement), &PY_TYPE_DEF(EstimatedMeasurement), module, "EstimatedMeasurement", 0);
        }

        void t_EstimatedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurement), "class_", make_descriptor(EstimatedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurement), "wrapfn_", make_descriptor(t_EstimatedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimatedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedMeasurement::initializeClass, 1)))
            return NULL;
          return t_EstimatedMeasurement::wrap_Object(EstimatedMeasurement(((t_EstimatedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_EstimatedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimatedMeasurement_of_(t_EstimatedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EstimatedMeasurement_init_(t_EstimatedMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          JArray< ::org::orekit::propagation::SpacecraftState > a3((jobject) NULL);
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > a4((jobject) NULL);
          EstimatedMeasurement object((jobject) NULL);

          if (!parseArgs(args, "KII[k[k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = EstimatedMeasurement(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EstimatedMeasurement_getDerivativesDrivers(t_EstimatedMeasurement *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getDerivativesDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_EstimatedMeasurement_getParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getParameterDerivatives(a0));
                return result.wrap();
              }
            }
            break;
           case 2:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.getParameterDerivatives(a0, a1));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getParameterDerivatives", args);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurement_getStateDerivatives(t_EstimatedMeasurement *self, PyObject *arg)
        {
          jint a0;
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getStateDerivatives(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "getStateDerivatives", arg);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurement_getStateSize(t_EstimatedMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStateSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimatedMeasurement_setParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              ::org::orekit::utils::TimeSpanMap a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::utils::TimeSpanMap::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeSpanMap::parameters_))
              {
                OBJ_CALL(self->object.setParameterDerivatives(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setParameterDerivatives(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setParameterDerivatives", args);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurement_setStateDerivatives(t_EstimatedMeasurement *self, PyObject *args)
        {
          jint a0;
          JArray< JArray< jdouble > > a1((jobject) NULL);

          if (!parseArgs(args, "I[[D", &a0, &a1))
          {
            OBJ_CALL(self->object.setStateDerivatives(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStateDerivatives", args);
          return NULL;
        }
        static PyObject *t_EstimatedMeasurement_get__parameters_(t_EstimatedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EstimatedMeasurement_get__derivativesDrivers(t_EstimatedMeasurement *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getDerivativesDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_EstimatedMeasurement_get__stateSize(t_EstimatedMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStateSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *MeasurementFilter::class$ = NULL;
          jmethodID *MeasurementFilter::mids$ = NULL;
          bool MeasurementFilter::live$ = false;

          jclass MeasurementFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/MeasurementFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_filter_2b2e233a7bb98272] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MeasurementFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_filter_2b2e233a7bb98272], a0.this$, a1.this$);
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
          static PyObject *t_MeasurementFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementFilter_of_(t_MeasurementFilter *self, PyObject *args);
          static PyObject *t_MeasurementFilter_filter(t_MeasurementFilter *self, PyObject *args);
          static PyObject *t_MeasurementFilter_get__parameters_(t_MeasurementFilter *self, void *data);
          static PyGetSetDef t_MeasurementFilter__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementFilter__methods_[] = {
            DECLARE_METHOD(t_MeasurementFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementFilter, filter, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementFilter)[] = {
            { Py_tp_methods, t_MeasurementFilter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementFilter, t_MeasurementFilter, MeasurementFilter);
          PyObject *t_MeasurementFilter::wrap_Object(const MeasurementFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementFilter *self = (t_MeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MeasurementFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementFilter *self = (t_MeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MeasurementFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementFilter), &PY_TYPE_DEF(MeasurementFilter), module, "MeasurementFilter", 0);
          }

          void t_MeasurementFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "class_", make_descriptor(MeasurementFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "wrapfn_", make_descriptor(t_MeasurementFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementFilter::initializeClass, 1)))
              return NULL;
            return t_MeasurementFilter::wrap_Object(MeasurementFilter(((t_MeasurementFilter *) arg)->object.this$));
          }
          static PyObject *t_MeasurementFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementFilter_of_(t_MeasurementFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MeasurementFilter_filter(t_MeasurementFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
            {
              OBJ_CALL(self->object.filter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filter", args);
            return NULL;
          }
          static PyObject *t_MeasurementFilter_get__parameters_(t_MeasurementFilter *self, void *data)
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
#include "org/orekit/models/earth/ionosphere/KlobucharIonoCoefficientsLoader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *KlobucharIonoCoefficientsLoader::class$ = NULL;
          jmethodID *KlobucharIonoCoefficientsLoader::mids$ = NULL;
          bool KlobucharIonoCoefficientsLoader::live$ = false;
          ::java::lang::String *KlobucharIonoCoefficientsLoader::DEFAULT_SUPPORTED_NAMES = NULL;

          jclass KlobucharIonoCoefficientsLoader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/KlobucharIonoCoefficientsLoader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_4c16e57d19ddaa09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getAlpha_be783177b060994b] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_getBeta_be783177b060994b] = env->getMethodID(cls, "getBeta", "()[D");
              mids$[mid_getSupportedNames_d2c8eb4129821f0e] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_loadKlobucharIonosphericCoefficients_ff7cb6c242604316] = env->getMethodID(cls, "loadKlobucharIonosphericCoefficients", "()V");
              mids$[mid_loadKlobucharIonosphericCoefficients_badbbe8d1e1c6168] = env->getMethodID(cls, "loadKlobucharIonosphericCoefficients", "(Lorg/orekit/time/DateComponents;)V");
              mids$[mid_stillAcceptsData_eee3de00fe971136] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader() : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_4c16e57d19ddaa09, a0.this$, a1.this$)) {}

          JArray< jdouble > KlobucharIonoCoefficientsLoader::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_be783177b060994b]));
          }

          JArray< jdouble > KlobucharIonoCoefficientsLoader::getBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBeta_be783177b060994b]));
          }

          ::java::lang::String KlobucharIonoCoefficientsLoader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_d2c8eb4129821f0e]));
          }

          void KlobucharIonoCoefficientsLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
          }

          void KlobucharIonoCoefficientsLoader::loadKlobucharIonosphericCoefficients() const
          {
            env->callVoidMethod(this$, mids$[mid_loadKlobucharIonosphericCoefficients_ff7cb6c242604316]);
          }

          void KlobucharIonoCoefficientsLoader::loadKlobucharIonosphericCoefficients(const ::org::orekit::time::DateComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_loadKlobucharIonosphericCoefficients_badbbe8d1e1c6168], a0.this$);
          }

          jboolean KlobucharIonoCoefficientsLoader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_eee3de00fe971136]);
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
          static PyObject *t_KlobucharIonoCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KlobucharIonoCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_KlobucharIonoCoefficientsLoader_init_(t_KlobucharIonoCoefficientsLoader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_KlobucharIonoCoefficientsLoader_getAlpha(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_getBeta(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_getSupportedNames(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_loadData(t_KlobucharIonoCoefficientsLoader *self, PyObject *args);
          static PyObject *t_KlobucharIonoCoefficientsLoader_loadKlobucharIonosphericCoefficients(t_KlobucharIonoCoefficientsLoader *self, PyObject *args);
          static PyObject *t_KlobucharIonoCoefficientsLoader_stillAcceptsData(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_get__alpha(t_KlobucharIonoCoefficientsLoader *self, void *data);
          static PyObject *t_KlobucharIonoCoefficientsLoader_get__beta(t_KlobucharIonoCoefficientsLoader *self, void *data);
          static PyObject *t_KlobucharIonoCoefficientsLoader_get__supportedNames(t_KlobucharIonoCoefficientsLoader *self, void *data);
          static PyGetSetDef t_KlobucharIonoCoefficientsLoader__fields_[] = {
            DECLARE_GET_FIELD(t_KlobucharIonoCoefficientsLoader, alpha),
            DECLARE_GET_FIELD(t_KlobucharIonoCoefficientsLoader, beta),
            DECLARE_GET_FIELD(t_KlobucharIonoCoefficientsLoader, supportedNames),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_KlobucharIonoCoefficientsLoader__methods_[] = {
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, getBeta, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, loadKlobucharIonosphericCoefficients, METH_VARARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KlobucharIonoCoefficientsLoader)[] = {
            { Py_tp_methods, t_KlobucharIonoCoefficientsLoader__methods_ },
            { Py_tp_init, (void *) t_KlobucharIonoCoefficientsLoader_init_ },
            { Py_tp_getset, t_KlobucharIonoCoefficientsLoader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KlobucharIonoCoefficientsLoader)[] = {
            &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
            NULL
          };

          DEFINE_TYPE(KlobucharIonoCoefficientsLoader, t_KlobucharIonoCoefficientsLoader, KlobucharIonoCoefficientsLoader);

          void t_KlobucharIonoCoefficientsLoader::install(PyObject *module)
          {
            installType(&PY_TYPE(KlobucharIonoCoefficientsLoader), &PY_TYPE_DEF(KlobucharIonoCoefficientsLoader), module, "KlobucharIonoCoefficientsLoader", 0);
          }

          void t_KlobucharIonoCoefficientsLoader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "class_", make_descriptor(KlobucharIonoCoefficientsLoader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "wrapfn_", make_descriptor(t_KlobucharIonoCoefficientsLoader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "boxfn_", make_descriptor(boxObject));
            env->getClass(KlobucharIonoCoefficientsLoader::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*KlobucharIonoCoefficientsLoader::DEFAULT_SUPPORTED_NAMES)));
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KlobucharIonoCoefficientsLoader::initializeClass, 1)))
              return NULL;
            return t_KlobucharIonoCoefficientsLoader::wrap_Object(KlobucharIonoCoefficientsLoader(((t_KlobucharIonoCoefficientsLoader *) arg)->object.this$));
          }
          static PyObject *t_KlobucharIonoCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KlobucharIonoCoefficientsLoader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_KlobucharIonoCoefficientsLoader_init_(t_KlobucharIonoCoefficientsLoader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                KlobucharIonoCoefficientsLoader object((jobject) NULL);

                INT_CALL(object = KlobucharIonoCoefficientsLoader());
                self->object = object;
                break;
              }
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                KlobucharIonoCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = KlobucharIonoCoefficientsLoader(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                KlobucharIonoCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = KlobucharIonoCoefficientsLoader(a0, a1));
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

          static PyObject *t_KlobucharIonoCoefficientsLoader_getAlpha(t_KlobucharIonoCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return result.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_getBeta(t_KlobucharIonoCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getBeta());
            return result.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_getSupportedNames(t_KlobucharIonoCoefficientsLoader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_loadData(t_KlobucharIonoCoefficientsLoader *self, PyObject *args)
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

          static PyObject *t_KlobucharIonoCoefficientsLoader_loadKlobucharIonosphericCoefficients(t_KlobucharIonoCoefficientsLoader *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                OBJ_CALL(self->object.loadKlobucharIonosphericCoefficients());
                Py_RETURN_NONE;
              }
              break;
             case 1:
              {
                ::org::orekit::time::DateComponents a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::DateComponents::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.loadKlobucharIonosphericCoefficients(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "loadKlobucharIonosphericCoefficients", args);
            return NULL;
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_stillAcceptsData(t_KlobucharIonoCoefficientsLoader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_get__alpha(t_KlobucharIonoCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return value.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_get__beta(t_KlobucharIonoCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeta());
            return value.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_get__supportedNames(t_KlobucharIonoCoefficientsLoader *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "java/lang/Iterable.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/oned/Interval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *IntervalsSet::class$ = NULL;
          jmethodID *IntervalsSet::mids$ = NULL;
          bool IntervalsSet::live$ = false;

          jclass IntervalsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/IntervalsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_83911a7bf86bdb7d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_457d0c956b0d24c0] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_asList_d751c1a57012b438] = env->getMethodID(cls, "asList", "()Ljava/util/List;");
              mids$[mid_buildNew_6028f700f3713da6] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;");
              mids$[mid_getInf_9981f74b2d109da6] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getSup_9981f74b2d109da6] = env->getMethodID(cls, "getSup", "()D");
              mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
              mids$[mid_projectToBoundary_5e847af8c64bed2a] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
              mids$[mid_computeGeometricalProperties_ff7cb6c242604316] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntervalsSet::IntervalsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          IntervalsSet::IntervalsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_83911a7bf86bdb7d, a0.this$, a1)) {}

          IntervalsSet::IntervalsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_457d0c956b0d24c0, a0.this$, a1)) {}

          IntervalsSet::IntervalsSet(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

          ::java::util::List IntervalsSet::asList() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_asList_d751c1a57012b438]));
          }

          IntervalsSet IntervalsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return IntervalsSet(env->callObjectMethod(this$, mids$[mid_buildNew_6028f700f3713da6], a0.this$));
          }

          jdouble IntervalsSet::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_9981f74b2d109da6]);
          }

          jdouble IntervalsSet::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_9981f74b2d109da6]);
          }

          ::java::util::Iterator IntervalsSet::iterator() const
          {
            return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
          }

          ::org::hipparchus::geometry::partitioning::BoundaryProjection IntervalsSet::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_5e847af8c64bed2a], a0.this$));
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
        namespace oned {
          static PyObject *t_IntervalsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalsSet_of_(t_IntervalsSet *self, PyObject *args);
          static int t_IntervalsSet_init_(t_IntervalsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntervalsSet_asList(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_buildNew(t_IntervalsSet *self, PyObject *args);
          static PyObject *t_IntervalsSet_getInf(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_getSup(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_iterator(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_projectToBoundary(t_IntervalsSet *self, PyObject *args);
          static PyObject *t_IntervalsSet_get__inf(t_IntervalsSet *self, void *data);
          static PyObject *t_IntervalsSet_get__sup(t_IntervalsSet *self, void *data);
          static PyObject *t_IntervalsSet_get__parameters_(t_IntervalsSet *self, void *data);
          static PyGetSetDef t_IntervalsSet__fields_[] = {
            DECLARE_GET_FIELD(t_IntervalsSet, inf),
            DECLARE_GET_FIELD(t_IntervalsSet, sup),
            DECLARE_GET_FIELD(t_IntervalsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntervalsSet__methods_[] = {
            DECLARE_METHOD(t_IntervalsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_IntervalsSet, asList, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_IntervalsSet, getInf, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, getSup, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, iterator, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, projectToBoundary, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntervalsSet)[] = {
            { Py_tp_methods, t_IntervalsSet__methods_ },
            { Py_tp_init, (void *) t_IntervalsSet_init_ },
            { Py_tp_getset, t_IntervalsSet__fields_ },
            { Py_tp_iter, (void *) ((PyObject *(*)(t_IntervalsSet *)) get_generic_iterator< t_IntervalsSet >) },
            { Py_tp_iternext, (void *) 0 },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntervalsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(IntervalsSet, t_IntervalsSet, IntervalsSet);
          PyObject *t_IntervalsSet::wrap_Object(const IntervalsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_IntervalsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalsSet *self = (t_IntervalsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_IntervalsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_IntervalsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalsSet *self = (t_IntervalsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_IntervalsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(IntervalsSet), &PY_TYPE_DEF(IntervalsSet), module, "IntervalsSet", 0);
          }

          void t_IntervalsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "class_", make_descriptor(IntervalsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "wrapfn_", make_descriptor(t_IntervalsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntervalsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntervalsSet::initializeClass, 1)))
              return NULL;
            return t_IntervalsSet::wrap_Object(IntervalsSet(((t_IntervalsSet *) arg)->object.this$));
          }
          static PyObject *t_IntervalsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntervalsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntervalsSet_of_(t_IntervalsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_IntervalsSet_init_(t_IntervalsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = IntervalsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = IntervalsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = IntervalsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = IntervalsSet(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
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

          static PyObject *t_IntervalsSet_asList(t_IntervalsSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.asList());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Interval));
          }

          static PyObject *t_IntervalsSet_buildNew(t_IntervalsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            IntervalsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_IntervalsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(IntervalsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_IntervalsSet_getInf(t_IntervalsSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntervalsSet_getSup(t_IntervalsSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntervalsSet_iterator(t_IntervalsSet *self)
          {
            ::java::util::Iterator result((jobject) NULL);
            OBJ_CALL(result = self->object.iterator());
            return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
          }

          static PyObject *t_IntervalsSet_projectToBoundary(t_IntervalsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.projectToBoundary(a0));
              return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            return callSuper(PY_TYPE(IntervalsSet), (PyObject *) self, "projectToBoundary", args, 2);
          }
          static PyObject *t_IntervalsSet_get__parameters_(t_IntervalsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_IntervalsSet_get__inf(t_IntervalsSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_IntervalsSet_get__sup(t_IntervalsSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GNSSClockElements::class$ = NULL;
            jmethodID *GNSSClockElements::mids$ = NULL;
            bool GNSSClockElements::live$ = false;

            jclass GNSSClockElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GNSSClockElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAf0_9981f74b2d109da6] = env->getMethodID(cls, "getAf0", "()D");
                mids$[mid_getAf1_9981f74b2d109da6] = env->getMethodID(cls, "getAf1", "()D");
                mids$[mid_getAf2_9981f74b2d109da6] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCycleDuration_9981f74b2d109da6] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getTGD_9981f74b2d109da6] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getToc_9981f74b2d109da6] = env->getMethodID(cls, "getToc", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GNSSClockElements::getAf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf0_9981f74b2d109da6]);
            }

            jdouble GNSSClockElements::getAf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf1_9981f74b2d109da6]);
            }

            jdouble GNSSClockElements::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_9981f74b2d109da6]);
            }

            jdouble GNSSClockElements::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_9981f74b2d109da6]);
            }

            jdouble GNSSClockElements::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_9981f74b2d109da6]);
            }

            jdouble GNSSClockElements::getToc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getToc_9981f74b2d109da6]);
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
            static PyObject *t_GNSSClockElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSClockElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSClockElements_getAf0(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getAf1(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getAf2(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getCycleDuration(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getTGD(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getToc(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_get__af0(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__af1(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__af2(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__cycleDuration(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__tGD(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__toc(t_GNSSClockElements *self, void *data);
            static PyGetSetDef t_GNSSClockElements__fields_[] = {
              DECLARE_GET_FIELD(t_GNSSClockElements, af0),
              DECLARE_GET_FIELD(t_GNSSClockElements, af1),
              DECLARE_GET_FIELD(t_GNSSClockElements, af2),
              DECLARE_GET_FIELD(t_GNSSClockElements, cycleDuration),
              DECLARE_GET_FIELD(t_GNSSClockElements, tGD),
              DECLARE_GET_FIELD(t_GNSSClockElements, toc),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GNSSClockElements__methods_[] = {
              DECLARE_METHOD(t_GNSSClockElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSClockElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSClockElements, getAf0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getAf1, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getAf2, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getCycleDuration, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getToc, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GNSSClockElements)[] = {
              { Py_tp_methods, t_GNSSClockElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_GNSSClockElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GNSSClockElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(GNSSClockElements, t_GNSSClockElements, GNSSClockElements);

            void t_GNSSClockElements::install(PyObject *module)
            {
              installType(&PY_TYPE(GNSSClockElements), &PY_TYPE_DEF(GNSSClockElements), module, "GNSSClockElements", 0);
            }

            void t_GNSSClockElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSClockElements), "class_", make_descriptor(GNSSClockElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSClockElements), "wrapfn_", make_descriptor(t_GNSSClockElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSClockElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GNSSClockElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GNSSClockElements::initializeClass, 1)))
                return NULL;
              return t_GNSSClockElements::wrap_Object(GNSSClockElements(((t_GNSSClockElements *) arg)->object.this$));
            }
            static PyObject *t_GNSSClockElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GNSSClockElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_GNSSClockElements_getAf0(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getAf1(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getAf2(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getCycleDuration(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getTGD(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getToc(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getToc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_get__af0(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__af1(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__af2(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__cycleDuration(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__tGD(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__toc(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getToc());
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
#include "org/orekit/propagation/events/handlers/StopOnDecreasing.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *StopOnDecreasing::class$ = NULL;
          jmethodID *StopOnDecreasing::mids$ = NULL;
          bool StopOnDecreasing::live$ = false;

          jclass StopOnDecreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/StopOnDecreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_66898681536e4202] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnDecreasing::StopOnDecreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::hipparchus::ode::events::Action StopOnDecreasing::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_66898681536e4202], a0.this$, a1.this$, a2));
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
          static PyObject *t_StopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StopOnDecreasing_init_(t_StopOnDecreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StopOnDecreasing_eventOccurred(t_StopOnDecreasing *self, PyObject *args);

          static PyMethodDef t_StopOnDecreasing__methods_[] = {
            DECLARE_METHOD(t_StopOnDecreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnDecreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnDecreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StopOnDecreasing)[] = {
            { Py_tp_methods, t_StopOnDecreasing__methods_ },
            { Py_tp_init, (void *) t_StopOnDecreasing_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StopOnDecreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StopOnDecreasing, t_StopOnDecreasing, StopOnDecreasing);

          void t_StopOnDecreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(StopOnDecreasing), &PY_TYPE_DEF(StopOnDecreasing), module, "StopOnDecreasing", 0);
          }

          void t_StopOnDecreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "class_", make_descriptor(StopOnDecreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "wrapfn_", make_descriptor(t_StopOnDecreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StopOnDecreasing::initializeClass, 1)))
              return NULL;
            return t_StopOnDecreasing::wrap_Object(StopOnDecreasing(((t_StopOnDecreasing *) arg)->object.this$));
          }
          static PyObject *t_StopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StopOnDecreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StopOnDecreasing_init_(t_StopOnDecreasing *self, PyObject *args, PyObject *kwds)
          {
            StopOnDecreasing object((jobject) NULL);

            INT_CALL(object = StopOnDecreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_StopOnDecreasing_eventOccurred(t_StopOnDecreasing *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SecondMoment::class$ = NULL;
          jmethodID *SecondMoment::mids$ = NULL;
          bool SecondMoment::live$ = false;

          jclass SecondMoment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SecondMoment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_4f0cd4b99215b675] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_acd8fdabd379ed95] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/SecondMoment;");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SecondMoment::SecondMoment() : ::org::hipparchus::stat::descriptive::moment::FirstMoment(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void SecondMoment::aggregate(const SecondMoment & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_4f0cd4b99215b675], a0.this$);
          }

          void SecondMoment::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          SecondMoment SecondMoment::copy() const
          {
            return SecondMoment(env->callObjectMethod(this$, mids$[mid_copy_acd8fdabd379ed95]));
          }

          jdouble SecondMoment::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          void SecondMoment::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_1ad26e8c8c0cd65b], a0);
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
        namespace moment {
          static PyObject *t_SecondMoment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SecondMoment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SecondMoment_init_(t_SecondMoment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SecondMoment_aggregate(t_SecondMoment *self, PyObject *arg);
          static PyObject *t_SecondMoment_clear(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_copy(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_getResult(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_increment(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_get__result(t_SecondMoment *self, void *data);
          static PyGetSetDef t_SecondMoment__fields_[] = {
            DECLARE_GET_FIELD(t_SecondMoment, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SecondMoment__methods_[] = {
            DECLARE_METHOD(t_SecondMoment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SecondMoment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SecondMoment, aggregate, METH_O),
            DECLARE_METHOD(t_SecondMoment, clear, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, copy, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, getResult, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SecondMoment)[] = {
            { Py_tp_methods, t_SecondMoment__methods_ },
            { Py_tp_init, (void *) t_SecondMoment_init_ },
            { Py_tp_getset, t_SecondMoment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SecondMoment)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::moment::FirstMoment),
            NULL
          };

          DEFINE_TYPE(SecondMoment, t_SecondMoment, SecondMoment);

          void t_SecondMoment::install(PyObject *module)
          {
            installType(&PY_TYPE(SecondMoment), &PY_TYPE_DEF(SecondMoment), module, "SecondMoment", 0);
          }

          void t_SecondMoment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "class_", make_descriptor(SecondMoment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "wrapfn_", make_descriptor(t_SecondMoment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SecondMoment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SecondMoment::initializeClass, 1)))
              return NULL;
            return t_SecondMoment::wrap_Object(SecondMoment(((t_SecondMoment *) arg)->object.this$));
          }
          static PyObject *t_SecondMoment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SecondMoment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SecondMoment_init_(t_SecondMoment *self, PyObject *args, PyObject *kwds)
          {
            SecondMoment object((jobject) NULL);

            INT_CALL(object = SecondMoment());
            self->object = object;

            return 0;
          }

          static PyObject *t_SecondMoment_aggregate(t_SecondMoment *self, PyObject *arg)
          {
            SecondMoment a0((jobject) NULL);

            if (!parseArg(arg, "k", SecondMoment::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_SecondMoment_clear(t_SecondMoment *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_SecondMoment_copy(t_SecondMoment *self, PyObject *args)
          {
            SecondMoment result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SecondMoment::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SecondMoment_getResult(t_SecondMoment *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_SecondMoment_increment(t_SecondMoment *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_SecondMoment_get__result(t_SecondMoment *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistory::class$ = NULL;
              jmethodID *OrbitManeuverHistory::mids$ = NULL;
              bool OrbitManeuverHistory::live$ = false;

              jclass OrbitManeuverHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_dae8b045b7393657] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getManeuvers_d751c1a57012b438] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMetadata_86e373ba0b34465f] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuverHistory::OrbitManeuverHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dae8b045b7393657, a0.this$, a1.this$)) {}

              ::java::util::List OrbitManeuverHistory::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_d751c1a57012b438]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata OrbitManeuverHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_86e373ba0b34465f]));
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
              static PyObject *t_OrbitManeuverHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuverHistory_init_(t_OrbitManeuverHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuverHistory_getManeuvers(t_OrbitManeuverHistory *self);
              static PyObject *t_OrbitManeuverHistory_getMetadata(t_OrbitManeuverHistory *self);
              static PyObject *t_OrbitManeuverHistory_get__maneuvers(t_OrbitManeuverHistory *self, void *data);
              static PyObject *t_OrbitManeuverHistory_get__metadata(t_OrbitManeuverHistory *self, void *data);
              static PyGetSetDef t_OrbitManeuverHistory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuverHistory, maneuvers),
                DECLARE_GET_FIELD(t_OrbitManeuverHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistory__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistory, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistory)[] = {
                { Py_tp_methods, t_OrbitManeuverHistory__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuverHistory_init_ },
                { Py_tp_getset, t_OrbitManeuverHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistory, t_OrbitManeuverHistory, OrbitManeuverHistory);

              void t_OrbitManeuverHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistory), &PY_TYPE_DEF(OrbitManeuverHistory), module, "OrbitManeuverHistory", 0);
              }

              void t_OrbitManeuverHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "class_", make_descriptor(OrbitManeuverHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "wrapfn_", make_descriptor(t_OrbitManeuverHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitManeuverHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistory::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistory::wrap_Object(OrbitManeuverHistory(((t_OrbitManeuverHistory *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuverHistory_init_(t_OrbitManeuverHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                OrbitManeuverHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OrbitManeuverHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitManeuverHistory_getManeuvers(t_OrbitManeuverHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitManeuver));
              }

              static PyObject *t_OrbitManeuverHistory_getMetadata(t_OrbitManeuverHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitManeuverHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistory_get__maneuvers(t_OrbitManeuverHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuverHistory_get__metadata(t_OrbitManeuverHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitManeuverHistoryMetadata::wrap_Object(value);
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
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *KalmanFilter::class$ = NULL;
        jmethodID *KalmanFilter::mids$ = NULL;
        bool KalmanFilter::live$ = false;

        jclass KalmanFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/KalmanFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimationStep_d720d2299c73357d] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getCorrected_270f067ba2ecffc6] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getPredicted_270f067ba2ecffc6] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_d720d2299c73357d], a0.this$));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::getCorrected() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_270f067ba2ecffc6]));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::getPredicted() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_270f067ba2ecffc6]));
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
    namespace filtering {
      namespace kalman {
        static PyObject *t_KalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanFilter_of_(t_KalmanFilter *self, PyObject *args);
        static PyObject *t_KalmanFilter_estimationStep(t_KalmanFilter *self, PyObject *arg);
        static PyObject *t_KalmanFilter_getCorrected(t_KalmanFilter *self);
        static PyObject *t_KalmanFilter_getPredicted(t_KalmanFilter *self);
        static PyObject *t_KalmanFilter_get__corrected(t_KalmanFilter *self, void *data);
        static PyObject *t_KalmanFilter_get__predicted(t_KalmanFilter *self, void *data);
        static PyObject *t_KalmanFilter_get__parameters_(t_KalmanFilter *self, void *data);
        static PyGetSetDef t_KalmanFilter__fields_[] = {
          DECLARE_GET_FIELD(t_KalmanFilter, corrected),
          DECLARE_GET_FIELD(t_KalmanFilter, predicted),
          DECLARE_GET_FIELD(t_KalmanFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanFilter__methods_[] = {
          DECLARE_METHOD(t_KalmanFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_KalmanFilter, estimationStep, METH_O),
          DECLARE_METHOD(t_KalmanFilter, getCorrected, METH_NOARGS),
          DECLARE_METHOD(t_KalmanFilter, getPredicted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanFilter)[] = {
          { Py_tp_methods, t_KalmanFilter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_KalmanFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanFilter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanFilter, t_KalmanFilter, KalmanFilter);
        PyObject *t_KalmanFilter::wrap_Object(const KalmanFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_KalmanFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_KalmanFilter *self = (t_KalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_KalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_KalmanFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_KalmanFilter *self = (t_KalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_KalmanFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanFilter), &PY_TYPE_DEF(KalmanFilter), module, "KalmanFilter", 0);
        }

        void t_KalmanFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanFilter), "class_", make_descriptor(KalmanFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanFilter), "wrapfn_", make_descriptor(t_KalmanFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanFilter::initializeClass, 1)))
            return NULL;
          return t_KalmanFilter::wrap_Object(KalmanFilter(((t_KalmanFilter *) arg)->object.this$));
        }
        static PyObject *t_KalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanFilter_of_(t_KalmanFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_KalmanFilter_estimationStep(t_KalmanFilter *self, PyObject *arg)
        {
          ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.estimationStep(a0));
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
          return NULL;
        }

        static PyObject *t_KalmanFilter_getCorrected(t_KalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_KalmanFilter_getPredicted(t_KalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }
        static PyObject *t_KalmanFilter_get__parameters_(t_KalmanFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_KalmanFilter_get__corrected(t_KalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_KalmanFilter_get__predicted(t_KalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitEphemerisFile.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/util/Map.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitEphemerisFile::class$ = NULL;
        jmethodID *OrekitEphemerisFile::mids$ = NULL;
        bool OrekitEphemerisFile::live$ = false;

        jclass OrekitEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatellite_d303acaa5081f131] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris;");
            mids$[mid_getSatellites_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile::OrekitEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris OrekitEphemerisFile::addSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris(env->callObjectMethod(this$, mids$[mid_addSatellite_d303acaa5081f131], a0.this$));
        }

        ::java::util::Map OrekitEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_dbcb8bbac6b35e0d]));
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
        static PyObject *t_OrekitEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitEphemerisFile_init_(t_OrekitEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitEphemerisFile_addSatellite(t_OrekitEphemerisFile *self, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile_getSatellites(t_OrekitEphemerisFile *self);
        static PyObject *t_OrekitEphemerisFile_get__satellites(t_OrekitEphemerisFile *self, void *data);
        static PyGetSetDef t_OrekitEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitEphemerisFile, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_OrekitEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile, addSatellite, METH_O),
          DECLARE_METHOD(t_OrekitEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitEphemerisFile)[] = {
          { Py_tp_methods, t_OrekitEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_OrekitEphemerisFile_init_ },
          { Py_tp_getset, t_OrekitEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitEphemerisFile, t_OrekitEphemerisFile, OrekitEphemerisFile);

        void t_OrekitEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitEphemerisFile), &PY_TYPE_DEF(OrekitEphemerisFile), module, "OrekitEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "OrekitEphemerisSegment", make_descriptor(&PY_TYPE_DEF(OrekitEphemerisFile$OrekitEphemerisSegment)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "OrekitSatelliteEphemeris", make_descriptor(&PY_TYPE_DEF(OrekitEphemerisFile$OrekitSatelliteEphemeris)));
        }

        void t_OrekitEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "class_", make_descriptor(OrekitEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "wrapfn_", make_descriptor(t_OrekitEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_OrekitEphemerisFile::wrap_Object(OrekitEphemerisFile(((t_OrekitEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_OrekitEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitEphemerisFile_init_(t_OrekitEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          OrekitEphemerisFile object((jobject) NULL);

          INT_CALL(object = OrekitEphemerisFile());
          self->object = object;

          return 0;
        }

        static PyObject *t_OrekitEphemerisFile_addSatellite(t_OrekitEphemerisFile *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.addSatellite(a0));
            return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitSatelliteEphemeris::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
          return NULL;
        }

        static PyObject *t_OrekitEphemerisFile_getSatellites(t_OrekitEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::general::PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris));
        }

        static PyObject *t_OrekitEphemerisFile_get__satellites(t_OrekitEphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FundamentalNutationArguments.h"
#include "java/util/List.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "java/io/InputStream.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FundamentalNutationArguments::class$ = NULL;
      jmethodID *FundamentalNutationArguments::mids$ = NULL;
      bool FundamentalNutationArguments::live$ = false;

      jclass FundamentalNutationArguments::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FundamentalNutationArguments");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_59387804c188e4fb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/util/List;)V");
          mids$[mid_init$_cd2232c631ab6063] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_init$_1759522db6aad277] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/util/List;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_edca7e198ed24012] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/io/InputStream;Ljava/lang/String;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_evaluateAll_99717f1e804d9d39] = env->getMethodID(cls, "evaluateAll", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/data/BodiesElements;");
          mids$[mid_evaluateAll_1eb2b41141d58bbf] = env->getMethodID(cls, "evaluateAll", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/data/FieldBodiesElements;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_59387804c188e4fb, a0.this$, a1.this$, a2.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::io::InputStream & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd2232c631ab6063, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeScales & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1759522db6aad277, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::io::InputStream & a2, const ::java::lang::String & a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_edca7e198ed24012, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::data::BodiesElements FundamentalNutationArguments::evaluateAll(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::data::BodiesElements(env->callObjectMethod(this$, mids$[mid_evaluateAll_99717f1e804d9d39], a0.this$));
      }

      ::org::orekit::data::FieldBodiesElements FundamentalNutationArguments::evaluateAll(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::data::FieldBodiesElements(env->callObjectMethod(this$, mids$[mid_evaluateAll_1eb2b41141d58bbf], a0.this$));
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
      static PyObject *t_FundamentalNutationArguments_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FundamentalNutationArguments_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FundamentalNutationArguments_init_(t_FundamentalNutationArguments *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FundamentalNutationArguments_evaluateAll(t_FundamentalNutationArguments *self, PyObject *args);

      static PyMethodDef t_FundamentalNutationArguments__methods_[] = {
        DECLARE_METHOD(t_FundamentalNutationArguments, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FundamentalNutationArguments, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FundamentalNutationArguments, evaluateAll, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FundamentalNutationArguments)[] = {
        { Py_tp_methods, t_FundamentalNutationArguments__methods_ },
        { Py_tp_init, (void *) t_FundamentalNutationArguments_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FundamentalNutationArguments)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FundamentalNutationArguments, t_FundamentalNutationArguments, FundamentalNutationArguments);

      void t_FundamentalNutationArguments::install(PyObject *module)
      {
        installType(&PY_TYPE(FundamentalNutationArguments), &PY_TYPE_DEF(FundamentalNutationArguments), module, "FundamentalNutationArguments", 0);
      }

      void t_FundamentalNutationArguments::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "class_", make_descriptor(FundamentalNutationArguments::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "wrapfn_", make_descriptor(t_FundamentalNutationArguments::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FundamentalNutationArguments_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FundamentalNutationArguments::initializeClass, 1)))
          return NULL;
        return t_FundamentalNutationArguments::wrap_Object(FundamentalNutationArguments(((t_FundamentalNutationArguments *) arg)->object.this$));
      }
      static PyObject *t_FundamentalNutationArguments_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FundamentalNutationArguments::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FundamentalNutationArguments_init_(t_FundamentalNutationArguments *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::io::InputStream a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "Kkks", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::io::InputStream::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::TimeScales a3((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "KkKk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::io::InputStream a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::org::orekit::time::TimeScales a4((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "Kkksk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::io::InputStream::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3, a4));
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

      static PyObject *t_FundamentalNutationArguments_evaluateAll(t_FundamentalNutationArguments *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::data::BodiesElements result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.evaluateAll(a0));
              return ::org::orekit::data::t_BodiesElements::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::data::FieldBodiesElements result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.evaluateAll(a0));
              return ::org::orekit::data::t_FieldBodiesElements::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluateAll", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/IAUPole.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *IAUPole::class$ = NULL;
      jmethodID *IAUPole::mids$ = NULL;
      bool IAUPole::live$ = false;

      jclass IAUPole::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/IAUPole");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getNode_8b37cafaaf55a3a5] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNode_8e5aead0a4b0cc16] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPole_8b37cafaaf55a3a5] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPole_8e5aead0a4b0cc16] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPrimeMeridianAngle_209f08246d708042] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getPrimeMeridianAngle_cf010978f3c5a913] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D IAUPole::getNode(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNode_8b37cafaaf55a3a5], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IAUPole::getNode(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNode_8e5aead0a4b0cc16], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D IAUPole::getPole(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPole_8b37cafaaf55a3a5], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IAUPole::getPole(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPole_8e5aead0a4b0cc16], a0.this$));
      }

      jdouble IAUPole::getPrimeMeridianAngle(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPrimeMeridianAngle_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IAUPole::getPrimeMeridianAngle(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianAngle_cf010978f3c5a913], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_IAUPole_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IAUPole_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IAUPole_getNode(t_IAUPole *self, PyObject *args);
      static PyObject *t_IAUPole_getPole(t_IAUPole *self, PyObject *args);
      static PyObject *t_IAUPole_getPrimeMeridianAngle(t_IAUPole *self, PyObject *args);

      static PyMethodDef t_IAUPole__methods_[] = {
        DECLARE_METHOD(t_IAUPole, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IAUPole, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IAUPole, getNode, METH_VARARGS),
        DECLARE_METHOD(t_IAUPole, getPole, METH_VARARGS),
        DECLARE_METHOD(t_IAUPole, getPrimeMeridianAngle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IAUPole)[] = {
        { Py_tp_methods, t_IAUPole__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IAUPole)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(IAUPole, t_IAUPole, IAUPole);

      void t_IAUPole::install(PyObject *module)
      {
        installType(&PY_TYPE(IAUPole), &PY_TYPE_DEF(IAUPole), module, "IAUPole", 0);
      }

      void t_IAUPole::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "class_", make_descriptor(IAUPole::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "wrapfn_", make_descriptor(t_IAUPole::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IAUPole_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IAUPole::initializeClass, 1)))
          return NULL;
        return t_IAUPole::wrap_Object(IAUPole(((t_IAUPole *) arg)->object.this$));
      }
      static PyObject *t_IAUPole_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IAUPole::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IAUPole_getNode(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNode(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getNode(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNode", args);
        return NULL;
      }

      static PyObject *t_IAUPole_getPole(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPole(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getPole(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPole", args);
        return NULL;
      }

      static PyObject *t_IAUPole_getPrimeMeridianAngle(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPrimeMeridianAngle(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getPrimeMeridianAngle(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPrimeMeridianAngle", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/EarthOrientationParameterMessage.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
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
              mids$[mid_init$_96a1aa7c5f1486f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getDut1_9981f74b2d109da6] = env->getMethodID(cls, "getDut1", "()D");
              mids$[mid_getDut1Dot_9981f74b2d109da6] = env->getMethodID(cls, "getDut1Dot", "()D");
              mids$[mid_getDut1DotDot_9981f74b2d109da6] = env->getMethodID(cls, "getDut1DotDot", "()D");
              mids$[mid_getReferenceEpoch_80e11148db499dda] = env->getMethodID(cls, "getReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTransmissionTime_9981f74b2d109da6] = env->getMethodID(cls, "getTransmissionTime", "()D");
              mids$[mid_getXp_9981f74b2d109da6] = env->getMethodID(cls, "getXp", "()D");
              mids$[mid_getXpDot_9981f74b2d109da6] = env->getMethodID(cls, "getXpDot", "()D");
              mids$[mid_getXpDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getXpDotDot", "()D");
              mids$[mid_getYp_9981f74b2d109da6] = env->getMethodID(cls, "getYp", "()D");
              mids$[mid_getYpDot_9981f74b2d109da6] = env->getMethodID(cls, "getYpDot", "()D");
              mids$[mid_getYpDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getYpDotDot", "()D");
              mids$[mid_setDut1_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDut1", "(D)V");
              mids$[mid_setDut1Dot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDut1Dot", "(D)V");
              mids$[mid_setDut1DotDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDut1DotDot", "(D)V");
              mids$[mid_setReferenceEpoch_8497861b879c83f7] = env->getMethodID(cls, "setReferenceEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTransmissionTime_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTransmissionTime", "(D)V");
              mids$[mid_setXp_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setXp", "(D)V");
              mids$[mid_setXpDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setXpDot", "(D)V");
              mids$[mid_setXpDotDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setXpDotDot", "(D)V");
              mids$[mid_setYp_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setYp", "(D)V");
              mids$[mid_setYpDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setYpDot", "(D)V");
              mids$[mid_setYpDotDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setYpDotDot", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EarthOrientationParameterMessage::EarthOrientationParameterMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_96a1aa7c5f1486f9, a0.this$, a1, a2.this$)) {}

          jdouble EarthOrientationParameterMessage::getDut1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1_9981f74b2d109da6]);
          }

          jdouble EarthOrientationParameterMessage::getDut1Dot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1Dot_9981f74b2d109da6]);
          }

          jdouble EarthOrientationParameterMessage::getDut1DotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1DotDot_9981f74b2d109da6]);
          }

          ::org::orekit::time::AbsoluteDate EarthOrientationParameterMessage::getReferenceEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceEpoch_80e11148db499dda]));
          }

          jdouble EarthOrientationParameterMessage::getTransmissionTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_9981f74b2d109da6]);
          }

          jdouble EarthOrientationParameterMessage::getXp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXp_9981f74b2d109da6]);
          }

          jdouble EarthOrientationParameterMessage::getXpDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXpDot_9981f74b2d109da6]);
          }

          jdouble EarthOrientationParameterMessage::getXpDotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXpDotDot_9981f74b2d109da6]);
          }

          jdouble EarthOrientationParameterMessage::getYp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYp_9981f74b2d109da6]);
          }

          jdouble EarthOrientationParameterMessage::getYpDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYpDot_9981f74b2d109da6]);
          }

          jdouble EarthOrientationParameterMessage::getYpDotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYpDotDot_9981f74b2d109da6]);
          }

          void EarthOrientationParameterMessage::setDut1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1_1ad26e8c8c0cd65b], a0);
          }

          void EarthOrientationParameterMessage::setDut1Dot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1Dot_1ad26e8c8c0cd65b], a0);
          }

          void EarthOrientationParameterMessage::setDut1DotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1DotDot_1ad26e8c8c0cd65b], a0);
          }

          void EarthOrientationParameterMessage::setReferenceEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceEpoch_8497861b879c83f7], a0.this$);
          }

          void EarthOrientationParameterMessage::setTransmissionTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmissionTime_1ad26e8c8c0cd65b], a0);
          }

          void EarthOrientationParameterMessage::setXp(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXp_1ad26e8c8c0cd65b], a0);
          }

          void EarthOrientationParameterMessage::setXpDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXpDot_1ad26e8c8c0cd65b], a0);
          }

          void EarthOrientationParameterMessage::setXpDotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXpDotDot_1ad26e8c8c0cd65b], a0);
          }

          void EarthOrientationParameterMessage::setYp(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYp_1ad26e8c8c0cd65b], a0);
          }

          void EarthOrientationParameterMessage::setYpDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYpDot_1ad26e8c8c0cd65b], a0);
          }

          void EarthOrientationParameterMessage::setYpDotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYpDotDot_1ad26e8c8c0cd65b], a0);
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemParser::class$ = NULL;
              jmethodID *OemParser::mids$ = NULL;
              bool OemParser::live$ = false;

              jclass OemParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_d88ce9523b5b01f9] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/oem/Oem;");
                  mids$[mid_finalizeData_eee3de00fe971136] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_eee3de00fe971136] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_eee3de00fe971136] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_662984e7008bcc88] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_inData_eee3de00fe971136] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_eee3de00fe971136] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_eee3de00fe971136] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_b9470d453e85f605] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/odm/oem/Oem;");
                  mids$[mid_prepareData_eee3de00fe971136] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_eee3de00fe971136] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_eee3de00fe971136] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::Oem OemParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::Oem(env->callObjectMethod(this$, mids$[mid_build_d88ce9523b5b01f9]));
              }

              jboolean OemParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_eee3de00fe971136]);
              }

              jboolean OemParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_eee3de00fe971136]);
              }

              jboolean OemParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_eee3de00fe971136]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OemParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_662984e7008bcc88]));
              }

              jboolean OemParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_eee3de00fe971136]);
              }

              jboolean OemParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_eee3de00fe971136]);
              }

              jboolean OemParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_eee3de00fe971136]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::Oem OemParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::Oem(env->callObjectMethod(this$, mids$[mid_parse_b9470d453e85f605], a0.this$));
              }

              jboolean OemParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_eee3de00fe971136]);
              }

              jboolean OemParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_eee3de00fe971136]);
              }

              jboolean OemParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_eee3de00fe971136]);
              }

              void OemParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_a23f5f7531d9b583], a0.this$);
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
            namespace oem {
              static PyObject *t_OemParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemParser_of_(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_build(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_getHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_parse(t_OemParser *self, PyObject *arg);
              static PyObject *t_OemParser_prepareData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_prepareHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_prepareMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_reset(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_get__header(t_OemParser *self, void *data);
              static PyObject *t_OemParser_get__parameters_(t_OemParser *self, void *data);
              static PyGetSetDef t_OemParser__fields_[] = {
                DECLARE_GET_FIELD(t_OemParser, header),
                DECLARE_GET_FIELD(t_OemParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemParser__methods_[] = {
                DECLARE_METHOD(t_OemParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, parse, METH_O),
                DECLARE_METHOD(t_OemParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemParser)[] = {
                { Py_tp_methods, t_OemParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OemParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OemParser, t_OemParser, OemParser);
              PyObject *t_OemParser::wrap_Object(const OemParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemParser *self = (t_OemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OemParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemParser *self = (t_OemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OemParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OemParser), &PY_TYPE_DEF(OemParser), module, "OemParser", 0);
              }

              void t_OemParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "class_", make_descriptor(OemParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "wrapfn_", make_descriptor(t_OemParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemParser::initializeClass, 1)))
                  return NULL;
                return t_OemParser::wrap_Object(OemParser(((t_OemParser *) arg)->object.this$));
              }
              static PyObject *t_OemParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemParser_of_(t_OemParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OemParser_build(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::Oem result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::oem::t_Oem::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OemParser_finalizeData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OemParser_finalizeHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OemParser_finalizeMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OemParser_getHeader(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OemParser_inData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OemParser_inHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OemParser_inMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OemParser_parse(t_OemParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::Oem result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::oem::t_Oem::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_OemParser_prepareData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OemParser_prepareHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OemParser_prepareMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OemParser_reset(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OemParser_get__parameters_(t_OemParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OemParser_get__header(t_OemParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
