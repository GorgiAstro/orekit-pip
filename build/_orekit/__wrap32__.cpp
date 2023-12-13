#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldStopOnIncreasing.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldStopOnIncreasing::class$ = NULL;
          jmethodID *FieldStopOnIncreasing::mids$ = NULL;
          bool FieldStopOnIncreasing::live$ = false;

          jclass FieldStopOnIncreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldStopOnIncreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_839b1f3ec2c4fbf6] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnIncreasing::FieldStopOnIncreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnIncreasing::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_839b1f3ec2c4fbf6], a0.this$, a1.this$, a2));
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
          static PyObject *t_FieldStopOnIncreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnIncreasing_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnIncreasing_of_(t_FieldStopOnIncreasing *self, PyObject *args);
          static int t_FieldStopOnIncreasing_init_(t_FieldStopOnIncreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldStopOnIncreasing_eventOccurred(t_FieldStopOnIncreasing *self, PyObject *args);
          static PyObject *t_FieldStopOnIncreasing_get__parameters_(t_FieldStopOnIncreasing *self, void *data);
          static PyGetSetDef t_FieldStopOnIncreasing__fields_[] = {
            DECLARE_GET_FIELD(t_FieldStopOnIncreasing, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldStopOnIncreasing__methods_[] = {
            DECLARE_METHOD(t_FieldStopOnIncreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnIncreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnIncreasing, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldStopOnIncreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldStopOnIncreasing)[] = {
            { Py_tp_methods, t_FieldStopOnIncreasing__methods_ },
            { Py_tp_init, (void *) t_FieldStopOnIncreasing_init_ },
            { Py_tp_getset, t_FieldStopOnIncreasing__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldStopOnIncreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldStopOnIncreasing, t_FieldStopOnIncreasing, FieldStopOnIncreasing);
          PyObject *t_FieldStopOnIncreasing::wrap_Object(const FieldStopOnIncreasing& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnIncreasing::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnIncreasing *self = (t_FieldStopOnIncreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldStopOnIncreasing::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnIncreasing::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnIncreasing *self = (t_FieldStopOnIncreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldStopOnIncreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldStopOnIncreasing), &PY_TYPE_DEF(FieldStopOnIncreasing), module, "FieldStopOnIncreasing", 0);
          }

          void t_FieldStopOnIncreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnIncreasing), "class_", make_descriptor(FieldStopOnIncreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnIncreasing), "wrapfn_", make_descriptor(t_FieldStopOnIncreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnIncreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldStopOnIncreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldStopOnIncreasing::initializeClass, 1)))
              return NULL;
            return t_FieldStopOnIncreasing::wrap_Object(FieldStopOnIncreasing(((t_FieldStopOnIncreasing *) arg)->object.this$));
          }
          static PyObject *t_FieldStopOnIncreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldStopOnIncreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldStopOnIncreasing_of_(t_FieldStopOnIncreasing *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldStopOnIncreasing_init_(t_FieldStopOnIncreasing *self, PyObject *args, PyObject *kwds)
          {
            FieldStopOnIncreasing object((jobject) NULL);

            INT_CALL(object = FieldStopOnIncreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldStopOnIncreasing_eventOccurred(t_FieldStopOnIncreasing *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldStopOnIncreasing_get__parameters_(t_FieldStopOnIncreasing *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OdMethodType::class$ = NULL;
          jmethodID *OdMethodType::mids$ = NULL;
          bool OdMethodType::live$ = false;
          OdMethodType *OdMethodType::BWLS = NULL;
          OdMethodType *OdMethodType::EKF = NULL;
          OdMethodType *OdMethodType::SF = NULL;
          OdMethodType *OdMethodType::SRIF = NULL;
          OdMethodType *OdMethodType::SSEM = NULL;

          jclass OdMethodType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OdMethodType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_e1c30b51cd4a3741] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OdMethodType;");
              mids$[mid_values_dd534feb5c92d832] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OdMethodType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BWLS = new OdMethodType(env->getStaticObjectField(cls, "BWLS", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              EKF = new OdMethodType(env->getStaticObjectField(cls, "EKF", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              SF = new OdMethodType(env->getStaticObjectField(cls, "SF", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              SRIF = new OdMethodType(env->getStaticObjectField(cls, "SRIF", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              SSEM = new OdMethodType(env->getStaticObjectField(cls, "SSEM", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OdMethodType OdMethodType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OdMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e1c30b51cd4a3741], a0.this$));
          }

          JArray< OdMethodType > OdMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OdMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_dd534feb5c92d832]));
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
          static PyObject *t_OdMethodType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodType_of_(t_OdMethodType *self, PyObject *args);
          static PyObject *t_OdMethodType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OdMethodType_values(PyTypeObject *type);
          static PyObject *t_OdMethodType_get__parameters_(t_OdMethodType *self, void *data);
          static PyGetSetDef t_OdMethodType__fields_[] = {
            DECLARE_GET_FIELD(t_OdMethodType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OdMethodType__methods_[] = {
            DECLARE_METHOD(t_OdMethodType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodType, of_, METH_VARARGS),
            DECLARE_METHOD(t_OdMethodType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OdMethodType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OdMethodType)[] = {
            { Py_tp_methods, t_OdMethodType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OdMethodType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OdMethodType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OdMethodType, t_OdMethodType, OdMethodType);
          PyObject *t_OdMethodType::wrap_Object(const OdMethodType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OdMethodType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OdMethodType *self = (t_OdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OdMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OdMethodType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OdMethodType *self = (t_OdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OdMethodType::install(PyObject *module)
          {
            installType(&PY_TYPE(OdMethodType), &PY_TYPE_DEF(OdMethodType), module, "OdMethodType", 0);
          }

          void t_OdMethodType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "class_", make_descriptor(OdMethodType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "wrapfn_", make_descriptor(t_OdMethodType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "boxfn_", make_descriptor(boxObject));
            env->getClass(OdMethodType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "BWLS", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::BWLS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "EKF", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::EKF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "SF", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::SF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "SRIF", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::SRIF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "SSEM", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::SSEM)));
          }

          static PyObject *t_OdMethodType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OdMethodType::initializeClass, 1)))
              return NULL;
            return t_OdMethodType::wrap_Object(OdMethodType(((t_OdMethodType *) arg)->object.this$));
          }
          static PyObject *t_OdMethodType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OdMethodType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OdMethodType_of_(t_OdMethodType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OdMethodType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OdMethodType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OdMethodType::valueOf(a0));
              return t_OdMethodType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OdMethodType_values(PyTypeObject *type)
          {
            JArray< OdMethodType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OdMethodType::values());
            return JArray<jobject>(result.this$).wrap(t_OdMethodType::wrap_jobject);
          }
          static PyObject *t_OdMethodType_get__parameters_(t_OdMethodType *self, void *data)
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
#include "org/hipparchus/ode/ComplexSecondaryODE.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexSecondaryODE::class$ = NULL;
      jmethodID *ComplexSecondaryODE::mids$ = NULL;
      bool ComplexSecondaryODE::live$ = false;

      jclass ComplexSecondaryODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexSecondaryODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_a82408c988efa417] = env->getMethodID(cls, "computeDerivatives", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_c745d8e01c0347d6] = env->getMethodID(cls, "init", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexSecondaryODE::computeDerivatives(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, const JArray< ::org::hipparchus::complex::Complex > & a3) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_a82408c988efa417], a0, a1.this$, a2.this$, a3.this$));
      }

      jint ComplexSecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      void ComplexSecondaryODE::init(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_c745d8e01c0347d6], a0, a1.this$, a2.this$, a3);
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
      static PyObject *t_ComplexSecondaryODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexSecondaryODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexSecondaryODE_computeDerivatives(t_ComplexSecondaryODE *self, PyObject *args);
      static PyObject *t_ComplexSecondaryODE_getDimension(t_ComplexSecondaryODE *self);
      static PyObject *t_ComplexSecondaryODE_init(t_ComplexSecondaryODE *self, PyObject *args);
      static PyObject *t_ComplexSecondaryODE_get__dimension(t_ComplexSecondaryODE *self, void *data);
      static PyGetSetDef t_ComplexSecondaryODE__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexSecondaryODE, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexSecondaryODE__methods_[] = {
        DECLARE_METHOD(t_ComplexSecondaryODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexSecondaryODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexSecondaryODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ComplexSecondaryODE, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexSecondaryODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexSecondaryODE)[] = {
        { Py_tp_methods, t_ComplexSecondaryODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexSecondaryODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexSecondaryODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexSecondaryODE, t_ComplexSecondaryODE, ComplexSecondaryODE);

      void t_ComplexSecondaryODE::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexSecondaryODE), &PY_TYPE_DEF(ComplexSecondaryODE), module, "ComplexSecondaryODE", 0);
      }

      void t_ComplexSecondaryODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "class_", make_descriptor(ComplexSecondaryODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "wrapfn_", make_descriptor(t_ComplexSecondaryODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexSecondaryODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexSecondaryODE::initializeClass, 1)))
          return NULL;
        return t_ComplexSecondaryODE::wrap_Object(ComplexSecondaryODE(((t_ComplexSecondaryODE *) arg)->object.this$));
      }
      static PyObject *t_ComplexSecondaryODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexSecondaryODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexSecondaryODE_computeDerivatives(t_ComplexSecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a3((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArgs(args, "D[k[k[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1, a2, a3));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_ComplexSecondaryODE_getDimension(t_ComplexSecondaryODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexSecondaryODE_init(t_ComplexSecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
        jdouble a3;

        if (!parseArgs(args, "D[k[kD", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.init(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ComplexSecondaryODE_get__dimension(t_ComplexSecondaryODE *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/HolmesFeatherstoneAttractionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *HolmesFeatherstoneAttractionModel::class$ = NULL;
        jmethodID *HolmesFeatherstoneAttractionModel::mids$ = NULL;
        bool HolmesFeatherstoneAttractionModel::live$ = false;

        jclass HolmesFeatherstoneAttractionModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/HolmesFeatherstoneAttractionModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bb1db3646718fb67] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getMu_fd347811007a6ba3] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getTideSystem_b2b14af197a8eaf6] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
            mids$[mid_gradient_35fa29941c7f6542] = env->getMethodID(cls, "gradient", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)[D");
            mids$[mid_gradient_8b9044e5f4efdb74] = env->getMethodID(cls, "gradient", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_nonCentralPart_f361b0df99f3dc75] = env->getMethodID(cls, "nonCentralPart", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)D");
            mids$[mid_value_f361b0df99f3dc75] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HolmesFeatherstoneAttractionModel::HolmesFeatherstoneAttractionModel(const ::org::orekit::frames::Frame & a0, const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb1db3646718fb67, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D HolmesFeatherstoneAttractionModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D HolmesFeatherstoneAttractionModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        jboolean HolmesFeatherstoneAttractionModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        jdouble HolmesFeatherstoneAttractionModel::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        jdouble HolmesFeatherstoneAttractionModel::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_fd347811007a6ba3], a0.this$);
        }

        ::java::util::List HolmesFeatherstoneAttractionModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        ::org::orekit::forces::gravity::potential::TideSystem HolmesFeatherstoneAttractionModel::getTideSystem() const
        {
          return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_b2b14af197a8eaf6]));
        }

        JArray< jdouble > HolmesFeatherstoneAttractionModel::gradient(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_35fa29941c7f6542], a0.this$, a1.this$, a2));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HolmesFeatherstoneAttractionModel::gradient(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_gradient_8b9044e5f4efdb74], a0.this$, a1.this$, a2.this$));
        }

        jdouble HolmesFeatherstoneAttractionModel::nonCentralPart(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_nonCentralPart_f361b0df99f3dc75], a0.this$, a1.this$, a2);
        }

        jdouble HolmesFeatherstoneAttractionModel::value(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_f361b0df99f3dc75], a0.this$, a1.this$, a2);
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
        static PyObject *t_HolmesFeatherstoneAttractionModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HolmesFeatherstoneAttractionModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HolmesFeatherstoneAttractionModel_init_(t_HolmesFeatherstoneAttractionModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HolmesFeatherstoneAttractionModel_acceleration(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_dependsOnPositionOnly(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getMu(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getParametersDrivers(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getTideSystem(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_gradient(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_nonCentralPart(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_value(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__mu(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__parametersDrivers(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__tideSystem(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyGetSetDef t_HolmesFeatherstoneAttractionModel__fields_[] = {
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, mu),
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, parametersDrivers),
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, tideSystem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HolmesFeatherstoneAttractionModel__methods_[] = {
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getMu, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getTideSystem, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, gradient, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, nonCentralPart, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HolmesFeatherstoneAttractionModel)[] = {
          { Py_tp_methods, t_HolmesFeatherstoneAttractionModel__methods_ },
          { Py_tp_init, (void *) t_HolmesFeatherstoneAttractionModel_init_ },
          { Py_tp_getset, t_HolmesFeatherstoneAttractionModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HolmesFeatherstoneAttractionModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HolmesFeatherstoneAttractionModel, t_HolmesFeatherstoneAttractionModel, HolmesFeatherstoneAttractionModel);

        void t_HolmesFeatherstoneAttractionModel::install(PyObject *module)
        {
          installType(&PY_TYPE(HolmesFeatherstoneAttractionModel), &PY_TYPE_DEF(HolmesFeatherstoneAttractionModel), module, "HolmesFeatherstoneAttractionModel", 0);
        }

        void t_HolmesFeatherstoneAttractionModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "class_", make_descriptor(HolmesFeatherstoneAttractionModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "wrapfn_", make_descriptor(t_HolmesFeatherstoneAttractionModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HolmesFeatherstoneAttractionModel::initializeClass, 1)))
            return NULL;
          return t_HolmesFeatherstoneAttractionModel::wrap_Object(HolmesFeatherstoneAttractionModel(((t_HolmesFeatherstoneAttractionModel *) arg)->object.this$));
        }
        static PyObject *t_HolmesFeatherstoneAttractionModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HolmesFeatherstoneAttractionModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HolmesFeatherstoneAttractionModel_init_(t_HolmesFeatherstoneAttractionModel *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a1((jobject) NULL);
          HolmesFeatherstoneAttractionModel object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
          {
            INT_CALL(object = HolmesFeatherstoneAttractionModel(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_acceleration(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_dependsOnPositionOnly(t_HolmesFeatherstoneAttractionModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getMu(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMu(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMu", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getParametersDrivers(t_HolmesFeatherstoneAttractionModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getTideSystem(t_HolmesFeatherstoneAttractionModel *self)
        {
          ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTideSystem());
          return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_gradient(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.gradient(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.gradient(a0, a1, a2));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_nonCentralPart(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.nonCentralPart(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "nonCentralPart", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_value(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.value(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__mu(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__parametersDrivers(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__tideSystem(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTideSystem());
          return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldSinCos::class$ = NULL;
      jmethodID *FieldSinCos::mids$ = NULL;
      bool FieldSinCos::live$ = false;

      jclass FieldSinCos::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldSinCos");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cb233f2d837bf6b7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_cos_541690f9ee81d3ad] = env->getMethodID(cls, "cos", "()Ljava/lang/Object;");
          mids$[mid_difference_763eaba2c000bc47] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/FieldSinCos;Lorg/hipparchus/util/FieldSinCos;)Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sin_541690f9ee81d3ad] = env->getMethodID(cls, "sin", "()Ljava/lang/Object;");
          mids$[mid_sum_763eaba2c000bc47] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/FieldSinCos;Lorg/hipparchus/util/FieldSinCos;)Lorg/hipparchus/util/FieldSinCos;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSinCos::FieldSinCos(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cb233f2d837bf6b7, a0.this$, a1.this$)) {}

      ::java::lang::Object FieldSinCos::cos() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cos_541690f9ee81d3ad]));
      }

      FieldSinCos FieldSinCos::difference(const FieldSinCos & a0, const FieldSinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_difference_763eaba2c000bc47], a0.this$, a1.this$));
      }

      ::java::lang::Object FieldSinCos::sin() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_sin_541690f9ee81d3ad]));
      }

      FieldSinCos FieldSinCos::sum(const FieldSinCos & a0, const FieldSinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_sum_763eaba2c000bc47], a0.this$, a1.this$));
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
      static PyObject *t_FieldSinCos_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinCos_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinCos_of_(t_FieldSinCos *self, PyObject *args);
      static int t_FieldSinCos_init_(t_FieldSinCos *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSinCos_cos(t_FieldSinCos *self);
      static PyObject *t_FieldSinCos_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinCos_sin(t_FieldSinCos *self);
      static PyObject *t_FieldSinCos_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinCos_get__parameters_(t_FieldSinCos *self, void *data);
      static PyGetSetDef t_FieldSinCos__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSinCos, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSinCos__methods_[] = {
        DECLARE_METHOD(t_FieldSinCos, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSinCos, cos, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinCos, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, sin, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinCos, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSinCos)[] = {
        { Py_tp_methods, t_FieldSinCos__methods_ },
        { Py_tp_init, (void *) t_FieldSinCos_init_ },
        { Py_tp_getset, t_FieldSinCos__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSinCos)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSinCos, t_FieldSinCos, FieldSinCos);
      PyObject *t_FieldSinCos::wrap_Object(const FieldSinCos& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinCos::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinCos *self = (t_FieldSinCos *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSinCos::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinCos::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinCos *self = (t_FieldSinCos *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSinCos::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSinCos), &PY_TYPE_DEF(FieldSinCos), module, "FieldSinCos", 0);
      }

      void t_FieldSinCos::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "class_", make_descriptor(FieldSinCos::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "wrapfn_", make_descriptor(t_FieldSinCos::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSinCos_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSinCos::initializeClass, 1)))
          return NULL;
        return t_FieldSinCos::wrap_Object(FieldSinCos(((t_FieldSinCos *) arg)->object.this$));
      }
      static PyObject *t_FieldSinCos_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSinCos::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSinCos_of_(t_FieldSinCos *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSinCos_init_(t_FieldSinCos *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        FieldSinCos object((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          INT_CALL(object = FieldSinCos(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldSinCos_cos(t_FieldSinCos *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinCos_difference(PyTypeObject *type, PyObject *args)
      {
        FieldSinCos a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinCos a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinCos result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinCos::initializeClass, FieldSinCos::initializeClass, &a0, &p0, t_FieldSinCos::parameters_, &a1, &p1, t_FieldSinCos::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinCos::difference(a0, a1));
          return t_FieldSinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_FieldSinCos_sin(t_FieldSinCos *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinCos_sum(PyTypeObject *type, PyObject *args)
      {
        FieldSinCos a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinCos a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinCos result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinCos::initializeClass, FieldSinCos::initializeClass, &a0, &p0, t_FieldSinCos::parameters_, &a1, &p1, t_FieldSinCos::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinCos::sum(a0, a1));
          return t_FieldSinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
      static PyObject *t_FieldSinCos_get__parameters_(t_FieldSinCos *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTThirdBodyDynamicContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTThirdBodyDynamicContext::class$ = NULL;
            jmethodID *FieldDSSTThirdBodyDynamicContext::mids$ = NULL;
            bool FieldDSSTThirdBodyDynamicContext::live$ = false;

            jclass FieldDSSTThirdBodyDynamicContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTThirdBodyDynamicContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7d613228456ec52a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/bodies/CelestialBody;[Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getA_81520b552cb3fa26] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getAlpha_81520b552cb3fa26] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBB_81520b552cb3fa26] = env->getMethodID(cls, "getBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBBB_81520b552cb3fa26] = env->getMethodID(cls, "getBBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBeta_81520b552cb3fa26] = env->getMethodID(cls, "getBeta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_81520b552cb3fa26] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_81520b552cb3fa26] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getGamma_81520b552cb3fa26] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHXXX_81520b552cb3fa26] = env->getMethodID(cls, "getHXXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getKXXX_81520b552cb3fa26] = env->getMethodID(cls, "getKXXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getM2aoA_81520b552cb3fa26] = env->getMethodID(cls, "getM2aoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMCo2AB_81520b552cb3fa26] = env->getMethodID(cls, "getMCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_81520b552cb3fa26] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMuoR3_81520b552cb3fa26] = env->getMethodID(cls, "getMuoR3", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_81520b552cb3fa26] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getR3_81520b552cb3fa26] = env->getMethodID(cls, "getR3", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX_81520b552cb3fa26] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXX_81520b552cb3fa26] = env->getMethodID(cls, "getXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getb_81520b552cb3fa26] = env->getMethodID(cls, "getb", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldDSSTThirdBodyDynamicContext::FieldDSSTThirdBodyDynamicContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::bodies::CelestialBody & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_7d613228456ec52a, a0.this$, a1.this$, a2.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getAlpha() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBB_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBBB_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBeta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBeta_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getGamma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getHXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHXXX_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getKXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKXXX_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getM2aoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM2aoA_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMCo2AB_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMuoR3() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMuoR3_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getR3() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getR3_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXX_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getb() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getb_81520b552cb3fa26]));
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
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_of_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args);
            static int t_FieldDSSTThirdBodyDynamicContext_init_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getAlpha(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBBB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBeta(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoABpo(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getGamma(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getHXXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getKXXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getM2aoA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMCo2AB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMeanMotion(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMuoR3(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getOoAB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getR3(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getb(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__a(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__alpha(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__b(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bBB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__beta(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boA(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boABpo(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__gamma(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__hXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__kXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__m2aoA(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__mCo2AB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__meanMotion(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__muoR3(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__ooAB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__r3(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__x(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__xX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__parameters_(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyGetSetDef t_FieldDSSTThirdBodyDynamicContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, a),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, alpha),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, b),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, bB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, bBB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, beta),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, boA),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, boABpo),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, gamma),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, hXXX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, kXXX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, m2aoA),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, mCo2AB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, muoR3),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, ooAB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, r3),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, x),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, xX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTThirdBodyDynamicContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBBB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getHXXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getKXXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMuoR3, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getR3, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getb, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTThirdBodyDynamicContext)[] = {
              { Py_tp_methods, t_FieldDSSTThirdBodyDynamicContext__methods_ },
              { Py_tp_init, (void *) t_FieldDSSTThirdBodyDynamicContext_init_ },
              { Py_tp_getset, t_FieldDSSTThirdBodyDynamicContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTThirdBodyDynamicContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTThirdBodyDynamicContext, t_FieldDSSTThirdBodyDynamicContext, FieldDSSTThirdBodyDynamicContext);
            PyObject *t_FieldDSSTThirdBodyDynamicContext::wrap_Object(const FieldDSSTThirdBodyDynamicContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTThirdBodyDynamicContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTThirdBodyDynamicContext *self = (t_FieldDSSTThirdBodyDynamicContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTThirdBodyDynamicContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTThirdBodyDynamicContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTThirdBodyDynamicContext *self = (t_FieldDSSTThirdBodyDynamicContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTThirdBodyDynamicContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTThirdBodyDynamicContext), &PY_TYPE_DEF(FieldDSSTThirdBodyDynamicContext), module, "FieldDSSTThirdBodyDynamicContext", 0);
            }

            void t_FieldDSSTThirdBodyDynamicContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "class_", make_descriptor(FieldDSSTThirdBodyDynamicContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "wrapfn_", make_descriptor(t_FieldDSSTThirdBodyDynamicContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTThirdBodyDynamicContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTThirdBodyDynamicContext::wrap_Object(FieldDSSTThirdBodyDynamicContext(((t_FieldDSSTThirdBodyDynamicContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTThirdBodyDynamicContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_of_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldDSSTThirdBodyDynamicContext_init_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDSSTThirdBodyDynamicContext object((jobject) NULL);

              if (!parseArgs(args, "Kk[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldDSSTThirdBodyDynamicContext(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getAlpha(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getAlpha());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBBB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBBB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBeta(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBeta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoABpo(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoABpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getGamma(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getGamma());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getHXXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getHXXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getKXXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getKXXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getM2aoA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getM2aoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMCo2AB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMeanMotion(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMuoR3(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMuoR3());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getOoAB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getR3(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getR3());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getb(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getb());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__parameters_(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__a(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__alpha(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getAlpha());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__b(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getb());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bBB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBBB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__beta(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBeta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boA(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boABpo(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoABpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__gamma(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getGamma());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__hXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getHXXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__kXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getKXXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__m2aoA(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getM2aoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__mCo2AB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__meanMotion(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__muoR3(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMuoR3());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__ooAB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__r3(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getR3());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__x(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__xX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXX());
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
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldUnivariateIntegrator::class$ = NULL;
        jmethodID *FieldUnivariateIntegrator::mids$ = NULL;
        bool FieldUnivariateIntegrator::live$ = false;

        jclass FieldUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_55546ef6a647f39b] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_6b15562ea2d5cce9] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_b74f83833fdad017]);
        }

        jint FieldUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
        }

        jint FieldUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_55546ef6a647f39b]);
        }

        jint FieldUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_55546ef6a647f39b]);
        }

        jint FieldUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_55546ef6a647f39b]);
        }

        jdouble FieldUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_b74f83833fdad017]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_6b15562ea2d5cce9], a0, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_FieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateIntegrator_of_(t_FieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_FieldUnivariateIntegrator_getAbsoluteAccuracy(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getEvaluations(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getIterations(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getMaximalIterationCount(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getMinimalIterationCount(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getRelativeAccuracy(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_integrate(t_FieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_FieldUnivariateIntegrator_get__absoluteAccuracy(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__evaluations(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__iterations(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__maximalIterationCount(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__minimalIterationCount(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__relativeAccuracy(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__parameters_(t_FieldUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_FieldUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, relativeAccuracy),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateIntegrator)[] = {
          { Py_tp_methods, t_FieldUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateIntegrator, t_FieldUnivariateIntegrator, FieldUnivariateIntegrator);
        PyObject *t_FieldUnivariateIntegrator::wrap_Object(const FieldUnivariateIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateIntegrator *self = (t_FieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateIntegrator *self = (t_FieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateIntegrator), &PY_TYPE_DEF(FieldUnivariateIntegrator), module, "FieldUnivariateIntegrator", 0);
        }

        void t_FieldUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "class_", make_descriptor(FieldUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "wrapfn_", make_descriptor(t_FieldUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateIntegrator::wrap_Object(FieldUnivariateIntegrator(((t_FieldUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateIntegrator_of_(t_FieldUnivariateIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateIntegrator_getAbsoluteAccuracy(t_FieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getEvaluations(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getIterations(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getMaximalIterationCount(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getMinimalIterationCount(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getRelativeAccuracy(t_FieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_integrate(t_FieldUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }
        static PyObject *t_FieldUnivariateIntegrator_get__parameters_(t_FieldUnivariateIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateIntegrator_get__absoluteAccuracy(t_FieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__evaluations(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__iterations(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__maximalIterationCount(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__minimalIterationCount(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__relativeAccuracy(t_FieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FirstOrderConverter.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/SecondOrderODE.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FirstOrderConverter::class$ = NULL;
      jmethodID *FirstOrderConverter::mids$ = NULL;
      bool FirstOrderConverter::live$ = false;

      jclass FirstOrderConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FirstOrderConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cb0587d5a14984f5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/SecondOrderODE;)V");
          mids$[mid_computeDerivatives_91fbb4072ae7ce9a] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FirstOrderConverter::FirstOrderConverter(const ::org::hipparchus::ode::SecondOrderODE & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cb0587d5a14984f5, a0.this$)) {}

      JArray< jdouble > FirstOrderConverter::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_91fbb4072ae7ce9a], a0, a1.this$));
      }

      jint FirstOrderConverter::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
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
      static PyObject *t_FirstOrderConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FirstOrderConverter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FirstOrderConverter_init_(t_FirstOrderConverter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FirstOrderConverter_computeDerivatives(t_FirstOrderConverter *self, PyObject *args);
      static PyObject *t_FirstOrderConverter_getDimension(t_FirstOrderConverter *self);
      static PyObject *t_FirstOrderConverter_get__dimension(t_FirstOrderConverter *self, void *data);
      static PyGetSetDef t_FirstOrderConverter__fields_[] = {
        DECLARE_GET_FIELD(t_FirstOrderConverter, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FirstOrderConverter__methods_[] = {
        DECLARE_METHOD(t_FirstOrderConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FirstOrderConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FirstOrderConverter, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FirstOrderConverter, getDimension, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FirstOrderConverter)[] = {
        { Py_tp_methods, t_FirstOrderConverter__methods_ },
        { Py_tp_init, (void *) t_FirstOrderConverter_init_ },
        { Py_tp_getset, t_FirstOrderConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FirstOrderConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FirstOrderConverter, t_FirstOrderConverter, FirstOrderConverter);

      void t_FirstOrderConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(FirstOrderConverter), &PY_TYPE_DEF(FirstOrderConverter), module, "FirstOrderConverter", 0);
      }

      void t_FirstOrderConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "class_", make_descriptor(FirstOrderConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "wrapfn_", make_descriptor(t_FirstOrderConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FirstOrderConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FirstOrderConverter::initializeClass, 1)))
          return NULL;
        return t_FirstOrderConverter::wrap_Object(FirstOrderConverter(((t_FirstOrderConverter *) arg)->object.this$));
      }
      static PyObject *t_FirstOrderConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FirstOrderConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FirstOrderConverter_init_(t_FirstOrderConverter *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::SecondOrderODE a0((jobject) NULL);
        FirstOrderConverter object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::ode::SecondOrderODE::initializeClass, &a0))
        {
          INT_CALL(object = FirstOrderConverter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FirstOrderConverter_computeDerivatives(t_FirstOrderConverter *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FirstOrderConverter_getDimension(t_FirstOrderConverter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FirstOrderConverter_get__dimension(t_FirstOrderConverter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockInterSatellitesPhaseModifier::mids$ = NULL;
          bool RelativisticJ2ClockInterSatellitesPhaseModifier::live$ = false;

          jclass RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockInterSatellitesPhaseModifier::RelativisticJ2ClockInterSatellitesPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void RelativisticJ2ClockInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier, t_RelativisticJ2ClockInterSatellitesPhaseModifier, RelativisticJ2ClockInterSatellitesPhaseModifier);

          void t_RelativisticJ2ClockInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), &PY_TYPE_DEF(RelativisticJ2ClockInterSatellitesPhaseModifier), module, "RelativisticJ2ClockInterSatellitesPhaseModifier", 0);
          }

          void t_RelativisticJ2ClockInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "class_", make_descriptor(RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockInterSatellitesPhaseModifier::wrap_Object(RelativisticJ2ClockInterSatellitesPhaseModifier(((t_RelativisticJ2ClockInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockInterSatellitesPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockInterSatellitesPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, void *data)
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
#include "org/hipparchus/stat/LongFrequency.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *LongFrequency::class$ = NULL;
      jmethodID *LongFrequency::mids$ = NULL;
      bool LongFrequency::live$ = false;

      jclass LongFrequency::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/LongFrequency");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_2c01874c65d2ef2f] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
          mids$[mid_addValue_44ed599e93e8a30c] = env->getMethodID(cls, "addValue", "(I)V");
          mids$[mid_getCount_f4947a88f79e0725] = env->getMethodID(cls, "getCount", "(I)J");
          mids$[mid_getCumFreq_f4947a88f79e0725] = env->getMethodID(cls, "getCumFreq", "(I)J");
          mids$[mid_getCumPct_2afcbc21f4e57ab2] = env->getMethodID(cls, "getCumPct", "(I)D");
          mids$[mid_getPct_2afcbc21f4e57ab2] = env->getMethodID(cls, "getPct", "(I)D");
          mids$[mid_incrementValue_d66948af01f0fd9b] = env->getMethodID(cls, "incrementValue", "(IJ)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LongFrequency::LongFrequency() : ::org::hipparchus::stat::Frequency(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      LongFrequency::LongFrequency(const ::java::util::Comparator & a0) : ::org::hipparchus::stat::Frequency(env->newObject(initializeClass, &mids$, mid_init$_2c01874c65d2ef2f, a0.this$)) {}

      void LongFrequency::addValue(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addValue_44ed599e93e8a30c], a0);
      }

      jlong LongFrequency::getCount(jint a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCount_f4947a88f79e0725], a0);
      }

      jlong LongFrequency::getCumFreq(jint a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCumFreq_f4947a88f79e0725], a0);
      }

      jdouble LongFrequency::getCumPct(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCumPct_2afcbc21f4e57ab2], a0);
      }

      jdouble LongFrequency::getPct(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPct_2afcbc21f4e57ab2], a0);
      }

      void LongFrequency::incrementValue(jint a0, jlong a1) const
      {
        env->callVoidMethod(this$, mids$[mid_incrementValue_d66948af01f0fd9b], a0, a1);
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
      static PyObject *t_LongFrequency_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongFrequency_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongFrequency_of_(t_LongFrequency *self, PyObject *args);
      static int t_LongFrequency_init_(t_LongFrequency *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LongFrequency_addValue(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCount(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCumFreq(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCumPct(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getPct(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_incrementValue(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_get__parameters_(t_LongFrequency *self, void *data);
      static PyGetSetDef t_LongFrequency__fields_[] = {
        DECLARE_GET_FIELD(t_LongFrequency, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LongFrequency__methods_[] = {
        DECLARE_METHOD(t_LongFrequency, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongFrequency, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongFrequency, of_, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, addValue, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCount, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCumFreq, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCumPct, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getPct, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, incrementValue, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LongFrequency)[] = {
        { Py_tp_methods, t_LongFrequency__methods_ },
        { Py_tp_init, (void *) t_LongFrequency_init_ },
        { Py_tp_getset, t_LongFrequency__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LongFrequency)[] = {
        &PY_TYPE_DEF(::org::hipparchus::stat::Frequency),
        NULL
      };

      DEFINE_TYPE(LongFrequency, t_LongFrequency, LongFrequency);
      PyObject *t_LongFrequency::wrap_Object(const LongFrequency& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LongFrequency::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LongFrequency *self = (t_LongFrequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LongFrequency::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LongFrequency::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LongFrequency *self = (t_LongFrequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LongFrequency::install(PyObject *module)
      {
        installType(&PY_TYPE(LongFrequency), &PY_TYPE_DEF(LongFrequency), module, "LongFrequency", 0);
      }

      void t_LongFrequency::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "class_", make_descriptor(LongFrequency::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "wrapfn_", make_descriptor(t_LongFrequency::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LongFrequency_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LongFrequency::initializeClass, 1)))
          return NULL;
        return t_LongFrequency::wrap_Object(LongFrequency(((t_LongFrequency *) arg)->object.this$));
      }
      static PyObject *t_LongFrequency_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LongFrequency::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LongFrequency_of_(t_LongFrequency *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_LongFrequency_init_(t_LongFrequency *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            LongFrequency object((jobject) NULL);

            INT_CALL(object = LongFrequency());
            self->object = object;
            self->parameters[0] = ::java::lang::PY_TYPE(Long);
            break;
          }
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            LongFrequency object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              INT_CALL(object = LongFrequency(a0));
              self->object = object;
              self->parameters[0] = ::java::lang::PY_TYPE(Long);
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LongFrequency_addValue(t_LongFrequency *self, PyObject *args)
      {
        jint a0;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(self->object.addValue(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "addValue", args, 2);
      }

      static PyObject *t_LongFrequency_getCount(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCount", args, 2);
      }

      static PyObject *t_LongFrequency_getCumFreq(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCumFreq(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCumFreq", args, 2);
      }

      static PyObject *t_LongFrequency_getCumPct(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCumPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCumPct", args, 2);
      }

      static PyObject *t_LongFrequency_getPct(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getPct", args, 2);
      }

      static PyObject *t_LongFrequency_incrementValue(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong a1;

        if (!parseArgs(args, "IJ", &a0, &a1))
        {
          OBJ_CALL(self->object.incrementValue(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "incrementValue", args, 2);
      }
      static PyObject *t_LongFrequency_get__parameters_(t_LongFrequency *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldQRDecomposition.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldQRDecomposition::class$ = NULL;
      jmethodID *FieldQRDecomposition::mids$ = NULL;
      bool FieldQRDecomposition::live$ = false;

      jclass FieldQRDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldQRDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3c04247304967ec8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_init$_f4b7eb9fa427ae68] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getH_81d49643ce3a3c0b] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getQ_81d49643ce3a3c0b] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getQT_81d49643ce3a3c0b] = env->getMethodID(cls, "getQT", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getR_81d49643ce3a3c0b] = env->getMethodID(cls, "getR", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSolver_61721a02c0d2f3a9] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/FieldDecompositionSolver;");
          mids$[mid_decompose_f3f5764495a272b1] = env->getMethodID(cls, "decompose", "([[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_performHouseholderReflection_d5ea180418cdb6e6] = env->getMethodID(cls, "performHouseholderReflection", "(I[[Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldQRDecomposition::FieldQRDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c04247304967ec8, a0.this$)) {}

      FieldQRDecomposition::FieldQRDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f4b7eb9fa427ae68, a0.this$, a1.this$)) {}

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getH() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getH_81d49643ce3a3c0b]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getQ() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getQ_81d49643ce3a3c0b]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getQT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getQT_81d49643ce3a3c0b]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getR() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getR_81d49643ce3a3c0b]));
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldQRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_61721a02c0d2f3a9]));
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
      static PyObject *t_FieldQRDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposition_of_(t_FieldQRDecomposition *self, PyObject *args);
      static int t_FieldQRDecomposition_init_(t_FieldQRDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldQRDecomposition_getH(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getQ(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getQT(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getR(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getSolver(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_get__h(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__q(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__qT(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__r(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__solver(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__parameters_(t_FieldQRDecomposition *self, void *data);
      static PyGetSetDef t_FieldQRDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_FieldQRDecomposition, h),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, q),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, qT),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, r),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, solver),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldQRDecomposition__methods_[] = {
        DECLARE_METHOD(t_FieldQRDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposition, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getH, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getQ, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getQT, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getR, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getSolver, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldQRDecomposition)[] = {
        { Py_tp_methods, t_FieldQRDecomposition__methods_ },
        { Py_tp_init, (void *) t_FieldQRDecomposition_init_ },
        { Py_tp_getset, t_FieldQRDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldQRDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldQRDecomposition, t_FieldQRDecomposition, FieldQRDecomposition);
      PyObject *t_FieldQRDecomposition::wrap_Object(const FieldQRDecomposition& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposition *self = (t_FieldQRDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldQRDecomposition::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposition *self = (t_FieldQRDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldQRDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldQRDecomposition), &PY_TYPE_DEF(FieldQRDecomposition), module, "FieldQRDecomposition", 0);
      }

      void t_FieldQRDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "class_", make_descriptor(FieldQRDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "wrapfn_", make_descriptor(t_FieldQRDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldQRDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldQRDecomposition::initializeClass, 1)))
          return NULL;
        return t_FieldQRDecomposition::wrap_Object(FieldQRDecomposition(((t_FieldQRDecomposition *) arg)->object.this$));
      }
      static PyObject *t_FieldQRDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldQRDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldQRDecomposition_of_(t_FieldQRDecomposition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldQRDecomposition_init_(t_FieldQRDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            FieldQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              INT_CALL(object = FieldQRDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::linear::FieldMatrix::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldQRDecomposition(a0, a1));
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

      static PyObject *t_FieldQRDecomposition_getH(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getQ(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQ());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getQT(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getR(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getR());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getSolver(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldQRDecomposition_get__parameters_(t_FieldQRDecomposition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldQRDecomposition_get__h(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__q(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQ());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__qT(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__r(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getR());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__solver(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data.h"
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
                  mids$[mid_init$_ee5d5ca06bbb4115] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm05Data_810bed48fafb0b9a] = env->getMethodID(cls, "getSsrIgm05Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05::SsrIgm05(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm05Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_ee5d5ca06bbb4115, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm05::getSsrIgm05Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm05Data_810bed48fafb0b9a]));
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
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Inertia::class$ = NULL;
              jmethodID *Inertia::mids$ = NULL;
              bool Inertia::live$ = false;

              jclass Inertia::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Inertia");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getInertiaMatrix_f77d745f2128c391] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_setFrame_4755133c5c4c59be] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setInertiaMatrixEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Inertia::Inertia() : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::org::orekit::files::ccsds::definitions::FrameFacade Inertia::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_69d8be1b6b0a1a94]));
              }

              ::org::hipparchus::linear::RealMatrix Inertia::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_f77d745f2128c391]));
              }

              void Inertia::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_4755133c5c4c59be], a0.this$);
              }

              void Inertia::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_94fe8d9ffeb50676], a0, a1, a2);
              }

              void Inertia::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
            namespace apm {
              static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Inertia_init_(t_Inertia *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Inertia_getFrame(t_Inertia *self);
              static PyObject *t_Inertia_getInertiaMatrix(t_Inertia *self);
              static PyObject *t_Inertia_setFrame(t_Inertia *self, PyObject *arg);
              static PyObject *t_Inertia_setInertiaMatrixEntry(t_Inertia *self, PyObject *args);
              static PyObject *t_Inertia_validate(t_Inertia *self, PyObject *args);
              static PyObject *t_Inertia_get__frame(t_Inertia *self, void *data);
              static int t_Inertia_set__frame(t_Inertia *self, PyObject *arg, void *data);
              static PyObject *t_Inertia_get__inertiaMatrix(t_Inertia *self, void *data);
              static PyGetSetDef t_Inertia__fields_[] = {
                DECLARE_GETSET_FIELD(t_Inertia, frame),
                DECLARE_GET_FIELD(t_Inertia, inertiaMatrix),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Inertia__methods_[] = {
                DECLARE_METHOD(t_Inertia, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Inertia, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Inertia, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_Inertia, getInertiaMatrix, METH_NOARGS),
                DECLARE_METHOD(t_Inertia, setFrame, METH_O),
                DECLARE_METHOD(t_Inertia, setInertiaMatrixEntry, METH_VARARGS),
                DECLARE_METHOD(t_Inertia, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Inertia)[] = {
                { Py_tp_methods, t_Inertia__methods_ },
                { Py_tp_init, (void *) t_Inertia_init_ },
                { Py_tp_getset, t_Inertia__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Inertia)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::CommonPhysicalProperties),
                NULL
              };

              DEFINE_TYPE(Inertia, t_Inertia, Inertia);

              void t_Inertia::install(PyObject *module)
              {
                installType(&PY_TYPE(Inertia), &PY_TYPE_DEF(Inertia), module, "Inertia", 0);
              }

              void t_Inertia::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "class_", make_descriptor(Inertia::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "wrapfn_", make_descriptor(t_Inertia::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Inertia::initializeClass, 1)))
                  return NULL;
                return t_Inertia::wrap_Object(Inertia(((t_Inertia *) arg)->object.this$));
              }
              static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Inertia::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Inertia_init_(t_Inertia *self, PyObject *args, PyObject *kwds)
              {
                Inertia object((jobject) NULL);

                INT_CALL(object = Inertia());
                self->object = object;

                return 0;
              }

              static PyObject *t_Inertia_getFrame(t_Inertia *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_Inertia_getInertiaMatrix(t_Inertia *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_Inertia_setFrame(t_Inertia *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFrame", arg);
                return NULL;
              }

              static PyObject *t_Inertia_setInertiaMatrixEntry(t_Inertia *self, PyObject *args)
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

              static PyObject *t_Inertia_validate(t_Inertia *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(Inertia), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_Inertia_get__frame(t_Inertia *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_Inertia_set__frame(t_Inertia *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "frame", arg);
                return -1;
              }

              static PyObject *t_Inertia_get__inertiaMatrix(t_Inertia *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmHeader::class$ = NULL;
            jmethodID *CdmHeader::mids$ = NULL;
            bool CdmHeader::live$ = false;

            jclass CdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getMessageFor_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMessageFor", "()Ljava/lang/String;");
                mids$[mid_setMessageFor_734b91ac30d5f9b4] = env->getMethodID(cls, "setMessageFor", "(Ljava/lang/String;)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmHeader::CdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            ::java::lang::String CdmHeader::getMessageFor() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessageFor_1c1fa1e935d6cdcf]));
            }

            void CdmHeader::setMessageFor(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMessageFor_734b91ac30d5f9b4], a0.this$);
            }

            void CdmHeader::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
            static PyObject *t_CdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmHeader_init_(t_CdmHeader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmHeader_getMessageFor(t_CdmHeader *self);
            static PyObject *t_CdmHeader_setMessageFor(t_CdmHeader *self, PyObject *arg);
            static PyObject *t_CdmHeader_validate(t_CdmHeader *self, PyObject *args);
            static PyObject *t_CdmHeader_get__messageFor(t_CdmHeader *self, void *data);
            static int t_CdmHeader_set__messageFor(t_CdmHeader *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmHeader__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmHeader, messageFor),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmHeader__methods_[] = {
              DECLARE_METHOD(t_CdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeader, getMessageFor, METH_NOARGS),
              DECLARE_METHOD(t_CdmHeader, setMessageFor, METH_O),
              DECLARE_METHOD(t_CdmHeader, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmHeader)[] = {
              { Py_tp_methods, t_CdmHeader__methods_ },
              { Py_tp_init, (void *) t_CdmHeader_init_ },
              { Py_tp_getset, t_CdmHeader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(CdmHeader, t_CdmHeader, CdmHeader);

            void t_CdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmHeader), &PY_TYPE_DEF(CdmHeader), module, "CdmHeader", 0);
            }

            void t_CdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "class_", make_descriptor(CdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "wrapfn_", make_descriptor(t_CdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmHeader::initializeClass, 1)))
                return NULL;
              return t_CdmHeader::wrap_Object(CdmHeader(((t_CdmHeader *) arg)->object.this$));
            }
            static PyObject *t_CdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmHeader_init_(t_CdmHeader *self, PyObject *args, PyObject *kwds)
            {
              CdmHeader object((jobject) NULL);

              INT_CALL(object = CdmHeader());
              self->object = object;

              return 0;
            }

            static PyObject *t_CdmHeader_getMessageFor(t_CdmHeader *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getMessageFor());
              return j2p(result);
            }

            static PyObject *t_CdmHeader_setMessageFor(t_CdmHeader *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setMessageFor(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMessageFor", arg);
              return NULL;
            }

            static PyObject *t_CdmHeader_validate(t_CdmHeader *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmHeader), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CdmHeader_get__messageFor(t_CdmHeader *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getMessageFor());
              return j2p(value);
            }
            static int t_CdmHeader_set__messageFor(t_CdmHeader *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setMessageFor(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "messageFor", arg);
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
#include "org/orekit/files/ccsds/ndm/odm/StateVectorKey.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorKey.h"
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

            ::java::lang::Class *StateVectorKey::class$ = NULL;
            jmethodID *StateVectorKey::mids$ = NULL;
            bool StateVectorKey::live$ = false;
            StateVectorKey *StateVectorKey::COMMENT = NULL;
            StateVectorKey *StateVectorKey::EPOCH = NULL;
            StateVectorKey *StateVectorKey::X = NULL;
            StateVectorKey *StateVectorKey::X_DDOT = NULL;
            StateVectorKey *StateVectorKey::X_DOT = NULL;
            StateVectorKey *StateVectorKey::Y = NULL;
            StateVectorKey *StateVectorKey::Y_DDOT = NULL;
            StateVectorKey *StateVectorKey::Y_DOT = NULL;
            StateVectorKey *StateVectorKey::Z = NULL;
            StateVectorKey *StateVectorKey::Z_DDOT = NULL;
            StateVectorKey *StateVectorKey::Z_DOT = NULL;

            jclass StateVectorKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/StateVectorKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_0349d2b1acb06568] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/StateVector;)Z");
                mids$[mid_valueOf_06d924a8e12f54db] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;");
                mids$[mid_values_4145c94e6d4555b5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new StateVectorKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                EPOCH = new StateVectorKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                X = new StateVectorKey(env->getStaticObjectField(cls, "X", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                X_DDOT = new StateVectorKey(env->getStaticObjectField(cls, "X_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                X_DOT = new StateVectorKey(env->getStaticObjectField(cls, "X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Y = new StateVectorKey(env->getStaticObjectField(cls, "Y", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Y_DDOT = new StateVectorKey(env->getStaticObjectField(cls, "Y_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Y_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Y_DOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Z = new StateVectorKey(env->getStaticObjectField(cls, "Z", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Z_DDOT = new StateVectorKey(env->getStaticObjectField(cls, "Z_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Z_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Z_DOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean StateVectorKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::StateVector & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_0349d2b1acb06568], a0.this$, a1.this$, a2.this$);
            }

            StateVectorKey StateVectorKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return StateVectorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_06d924a8e12f54db], a0.this$));
            }

            JArray< StateVectorKey > StateVectorKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< StateVectorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_4145c94e6d4555b5]));
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
            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_StateVectorKey_values(PyTypeObject *type);
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data);
            static PyGetSetDef t_StateVectorKey__fields_[] = {
              DECLARE_GET_FIELD(t_StateVectorKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVectorKey__methods_[] = {
              DECLARE_METHOD(t_StateVectorKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, process, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorKey)[] = {
              { Py_tp_methods, t_StateVectorKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_StateVectorKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(StateVectorKey, t_StateVectorKey, StateVectorKey);
            PyObject *t_StateVectorKey::wrap_Object(const StateVectorKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_StateVectorKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_StateVectorKey::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorKey), &PY_TYPE_DEF(StateVectorKey), module, "StateVectorKey", 0);
            }

            void t_StateVectorKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "class_", make_descriptor(StateVectorKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "wrapfn_", make_descriptor(t_StateVectorKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(StateVectorKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "COMMENT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "EPOCH", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X_DDOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X_DDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y_DDOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y_DDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z_DDOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z_DDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z_DOT)));
            }

            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorKey::initializeClass, 1)))
                return NULL;
              return t_StateVectorKey::wrap_Object(StateVectorKey(((t_StateVectorKey *) arg)->object.this$));
            }
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::StateVector a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::StateVector::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              StateVectorKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::StateVectorKey::valueOf(a0));
                return t_StateVectorKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_StateVectorKey_values(PyTypeObject *type)
            {
              JArray< StateVectorKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::StateVectorKey::values());
              return JArray<jobject>(result.this$).wrap(t_StateVectorKey::wrap_jobject);
            }
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DoublyIndexedDoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$DoublyIndexedDoubleConsumer::mids$ = NULL;
            bool ParseToken$DoublyIndexedDoubleConsumer::live$ = false;

            jclass ParseToken$DoublyIndexedDoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_94fe8d9ffeb50676] = env->getMethodID(cls, "accept", "(IID)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoublyIndexedDoubleConsumer::accept(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_94fe8d9ffeb50676], a0, a1, a2);
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
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_accept(t_ParseToken$DoublyIndexedDoubleConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$DoublyIndexedDoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DoublyIndexedDoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoublyIndexedDoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoublyIndexedDoubleConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DoublyIndexedDoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DoublyIndexedDoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DoublyIndexedDoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DoublyIndexedDoubleConsumer, t_ParseToken$DoublyIndexedDoubleConsumer, ParseToken$DoublyIndexedDoubleConsumer);

            void t_ParseToken$DoublyIndexedDoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), &PY_TYPE_DEF(ParseToken$DoublyIndexedDoubleConsumer), module, "ParseToken$DoublyIndexedDoubleConsumer", 0);
            }

            void t_ParseToken$DoublyIndexedDoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), "class_", make_descriptor(ParseToken$DoublyIndexedDoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$DoublyIndexedDoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DoublyIndexedDoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DoublyIndexedDoubleConsumer::wrap_Object(ParseToken$DoublyIndexedDoubleConsumer(((t_ParseToken$DoublyIndexedDoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DoublyIndexedDoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_accept(t_ParseToken$DoublyIndexedDoubleConsumer *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.accept(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *MultivariateJacobianFunction::class$ = NULL;
            jmethodID *MultivariateJacobianFunction::mids$ = NULL;
            bool MultivariateJacobianFunction::live$ = false;

            jclass MultivariateJacobianFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_value_75baf79414a7355b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::util::Pair MultivariateJacobianFunction::value(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_value_75baf79414a7355b], a0.this$));
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
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_MultivariateJacobianFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultivariateJacobianFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultivariateJacobianFunction_value(t_MultivariateJacobianFunction *self, PyObject *arg);

            static PyMethodDef t_MultivariateJacobianFunction__methods_[] = {
              DECLARE_METHOD(t_MultivariateJacobianFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultivariateJacobianFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultivariateJacobianFunction, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MultivariateJacobianFunction)[] = {
              { Py_tp_methods, t_MultivariateJacobianFunction__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MultivariateJacobianFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MultivariateJacobianFunction, t_MultivariateJacobianFunction, MultivariateJacobianFunction);

            void t_MultivariateJacobianFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(MultivariateJacobianFunction), &PY_TYPE_DEF(MultivariateJacobianFunction), module, "MultivariateJacobianFunction", 0);
            }

            void t_MultivariateJacobianFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "class_", make_descriptor(MultivariateJacobianFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "wrapfn_", make_descriptor(t_MultivariateJacobianFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MultivariateJacobianFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MultivariateJacobianFunction::initializeClass, 1)))
                return NULL;
              return t_MultivariateJacobianFunction::wrap_Object(MultivariateJacobianFunction(((t_MultivariateJacobianFunction *) arg)->object.this$));
            }
            static PyObject *t_MultivariateJacobianFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MultivariateJacobianFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MultivariateJacobianFunction_value(t_MultivariateJacobianFunction *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::util::Pair result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector), ::org::hipparchus::linear::PY_TYPE(RealMatrix));
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
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
#include "org/hipparchus/ode/nonstiff/RungeKuttaIntegrator.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *RungeKuttaIntegrator::class$ = NULL;
        jmethodID *RungeKuttaIntegrator::mids$ = NULL;
        bool RungeKuttaIntegrator::live$ = false;

        jclass RungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/RungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDefaultStep_b74f83833fdad017] = env->getMethodID(cls, "getDefaultStep", "()D");
            mids$[mid_integrate_8cb4bf2a0c64fd92] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_singleStep_4150bb9eea7d7a8e] = env->getMethodID(cls, "singleStep", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;D[DD)[D");
            mids$[mid_createInterpolator_3e673c4450f1ccb4] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble RungeKuttaIntegrator::getDefaultStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDefaultStep_b74f83833fdad017]);
        }

        ::org::hipparchus::ode::ODEStateAndDerivative RungeKuttaIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_8cb4bf2a0c64fd92], a0.this$, a1.this$, a2));
        }

        JArray< jdouble > RungeKuttaIntegrator::singleStep(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0, jdouble a1, const JArray< jdouble > & a2, jdouble a3) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_singleStep_4150bb9eea7d7a8e], a0.this$, a1, a2.this$, a3));
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
        static PyObject *t_RungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaIntegrator_getDefaultStep(t_RungeKuttaIntegrator *self);
        static PyObject *t_RungeKuttaIntegrator_integrate(t_RungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaIntegrator_singleStep(t_RungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaIntegrator_get__defaultStep(t_RungeKuttaIntegrator *self, void *data);
        static PyGetSetDef t_RungeKuttaIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_RungeKuttaIntegrator, defaultStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_RungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, getDefaultStep, METH_NOARGS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, singleStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_RungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractIntegrator),
          NULL
        };

        DEFINE_TYPE(RungeKuttaIntegrator, t_RungeKuttaIntegrator, RungeKuttaIntegrator);

        void t_RungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(RungeKuttaIntegrator), &PY_TYPE_DEF(RungeKuttaIntegrator), module, "RungeKuttaIntegrator", 0);
        }

        void t_RungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "class_", make_descriptor(RungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "wrapfn_", make_descriptor(t_RungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_RungeKuttaIntegrator::wrap_Object(RungeKuttaIntegrator(((t_RungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_RungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RungeKuttaIntegrator_getDefaultStep(t_RungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDefaultStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RungeKuttaIntegrator_integrate(t_RungeKuttaIntegrator *self, PyObject *args)
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

          return callSuper(PY_TYPE(RungeKuttaIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_RungeKuttaIntegrator_singleStep(t_RungeKuttaIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::OrdinaryDifferentialEquation a0((jobject) NULL);
          jdouble a1;
          JArray< jdouble > a2((jobject) NULL);
          jdouble a3;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "kD[DD", ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.singleStep(a0, a1, a2, a3));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "singleStep", args);
          return NULL;
        }

        static PyObject *t_RungeKuttaIntegrator_get__defaultStep(t_RungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDefaultStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *PythonAbstractAnalyticalPropagator::mids$ = NULL;
        bool PythonAbstractAnalyticalPropagator::live$ = false;

        jclass PythonAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8e4d3ea100bc0095] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMass_fd347811007a6ba3] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_propagateOrbit_5df6dcb5c4123339] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetIntermediateState_1c47c97cdbc7e206] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalPropagator::PythonAbstractAnalyticalPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_8e4d3ea100bc0095, a0.this$)) {}

        void PythonAbstractAnalyticalPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAbstractAnalyticalPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractAnalyticalPropagator::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractAnalyticalPropagator_init_(t_PythonAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractAnalyticalPropagator_finalize(t_PythonAbstractAnalyticalPropagator *self);
        static PyObject *t_PythonAbstractAnalyticalPropagator_pythonExtension(t_PythonAbstractAnalyticalPropagator *self, PyObject *args);
        static jdouble JNICALL t_PythonAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractAnalyticalPropagator_propagateOrbit1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractAnalyticalPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractAnalyticalPropagator_resetIntermediateState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
        static PyObject *t_PythonAbstractAnalyticalPropagator_get__self(t_PythonAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_PythonAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractAnalyticalPropagator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_PythonAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractAnalyticalPropagator_init_ },
          { Py_tp_getset, t_PythonAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(PythonAbstractAnalyticalPropagator, t_PythonAbstractAnalyticalPropagator, PythonAbstractAnalyticalPropagator);

        void t_PythonAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractAnalyticalPropagator), &PY_TYPE_DEF(PythonAbstractAnalyticalPropagator), module, "PythonAbstractAnalyticalPropagator", 1);
        }

        void t_PythonAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "class_", make_descriptor(PythonAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_PythonAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractAnalyticalPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "getMass", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractAnalyticalPropagator_getMass0 },
            { "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;", (void *) t_PythonAbstractAnalyticalPropagator_propagateOrbit1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractAnalyticalPropagator_pythonDecRef2 },
            { "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V", (void *) t_PythonAbstractAnalyticalPropagator_resetIntermediateState3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractAnalyticalPropagator::wrap_Object(PythonAbstractAnalyticalPropagator(((t_PythonAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractAnalyticalPropagator_init_(t_PythonAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          PythonAbstractAnalyticalPropagator object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractAnalyticalPropagator(a0));
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

        static PyObject *t_PythonAbstractAnalyticalPropagator_finalize(t_PythonAbstractAnalyticalPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_pythonExtension(t_PythonAbstractAnalyticalPropagator *self, PyObject *args)
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

        static jdouble JNICALL t_PythonAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMass", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMass", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonAbstractAnalyticalPropagator_propagateOrbit1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::Orbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "propagateOrbit", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
          {
            throwTypeError("propagateOrbit", result);
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

        static void JNICALL t_PythonAbstractAnalyticalPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAbstractAnalyticalPropagator_resetIntermediateState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "resetIntermediateState", "OO", o0, o1);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_get__self(t_PythonAbstractAnalyticalPropagator *self, void *data)
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
#include "org/orekit/time/PythonUTCTAIOffsetsLoader.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
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
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadOffsets_e62d3bb06d56d7e3] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUTCTAIOffsetsLoader::PythonUTCTAIOffsetsLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonUTCTAIOffsetsLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonUTCTAIOffsetsLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonUTCTAIOffsetsLoader::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
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
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *Array2DRowRealMatrix::class$ = NULL;
      jmethodID *Array2DRowRealMatrix::mids$ = NULL;
      bool Array2DRowRealMatrix::live$ = false;

      jclass Array2DRowRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/Array2DRowRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_07adb42ffaa97d31] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_init$_30d41d58c8b5e4dc] = env->getMethodID(cls, "<init>", "([[DZ)V");
          mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_add_f7e2a664bf09ba0b] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_addToEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_f77d745f2128c391] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createMatrix_28a444e31666746c] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnDimension_55546ef6a647f39b] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_3b7b373db8e7887f] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getDataRef_3b7b373db8e7887f] = env->getMethodID(cls, "getDataRef", "()[[D");
          mids$[mid_getEntry_cad98089d00f8a5b] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRow_bb2a44a76ad252f7] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_55546ef6a647f39b] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getSubMatrix_f6333def4d085867] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_kroneckerProduct_be124f4006dc9f69] = env->getMethodID(cls, "kroneckerProduct", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiply_f7e2a664bf09ba0b] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_multiplyEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_aebe28c801f89be8] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyTransposed_be124f4006dc9f69] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_14dee4cb8cc3e959] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_14dee4cb8cc3e959] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_setEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_75061e5f5bbace93] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setSubMatrix_f12104c26dcf5b23] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_stack_f77d745f2128c391] = env->getMethodID(cls, "stack", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_subtract_f7e2a664bf09ba0b] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_transposeMultiply_aebe28c801f89be8] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transposeMultiply_be124f4006dc9f69] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_unstackSquare_f77d745f2128c391] = env->getMethodID(cls, "unstackSquare", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_e9eacc024b91638e] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_8c777cbbebb3f320] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_7a8f404d3cc13545] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_0efcec2037689a79] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_e9eacc024b91638e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_8c777cbbebb3f320] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_7a8f404d3cc13545] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_0efcec2037689a79] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Array2DRowRealMatrix::Array2DRowRealMatrix() : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< jdouble > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_07adb42ffaa97d31, a0.this$)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< JArray< jdouble > > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_30d41d58c8b5e4dc, a0.this$, a1)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

      Array2DRowRealMatrix Array2DRowRealMatrix::add(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_add_f7e2a664bf09ba0b], a0.this$));
      }

      void Array2DRowRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_28a444e31666746c], a0, a1));
      }

      jint Array2DRowRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_55546ef6a647f39b]);
      }

      JArray< JArray< jdouble > > Array2DRowRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_3b7b373db8e7887f]));
      }

      JArray< JArray< jdouble > > Array2DRowRealMatrix::getDataRef() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getDataRef_3b7b373db8e7887f]));
      }

      jdouble Array2DRowRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_cad98089d00f8a5b], a0, a1);
      }

      JArray< jdouble > Array2DRowRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_bb2a44a76ad252f7], a0));
      }

      jint Array2DRowRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_f6333def4d085867], a0, a1, a2, a3));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::kroneckerProduct(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_kroneckerProduct_be124f4006dc9f69], a0.this$));
      }

      Array2DRowRealMatrix Array2DRowRealMatrix::multiply(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_f7e2a664bf09ba0b], a0.this$));
      }

      void Array2DRowRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::multiplyTransposed(const Array2DRowRealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_aebe28c801f89be8], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_be124f4006dc9f69], a0.this$));
      }

      JArray< jdouble > Array2DRowRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_14dee4cb8cc3e959], a0.this$));
      }

      JArray< jdouble > Array2DRowRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_14dee4cb8cc3e959], a0.this$));
      }

      void Array2DRowRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      void Array2DRowRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_75061e5f5bbace93], a0, a1.this$);
      }

      void Array2DRowRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_f12104c26dcf5b23], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::stack() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_stack_f77d745f2128c391]));
      }

      Array2DRowRealMatrix Array2DRowRealMatrix::subtract(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_f7e2a664bf09ba0b], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::transposeMultiply(const Array2DRowRealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_aebe28c801f89be8], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_be124f4006dc9f69], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::unstackSquare() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_unstackSquare_f77d745f2128c391]));
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_e9eacc024b91638e], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_8c777cbbebb3f320], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_7a8f404d3cc13545], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_0efcec2037689a79], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_e9eacc024b91638e], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_8c777cbbebb3f320], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_7a8f404d3cc13545], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_0efcec2037689a79], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_Array2DRowRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Array2DRowRealMatrix_init_(t_Array2DRowRealMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Array2DRowRealMatrix_add(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_addToEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_copy(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_createMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getColumnDimension(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getData(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getDataRef(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_getEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getRow(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getRowDimension(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_kroneckerProduct(t_Array2DRowRealMatrix *self, PyObject *arg);
      static PyObject *t_Array2DRowRealMatrix_multiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_multiplyEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_multiplyTransposed(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_operate(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_preMultiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setRow(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_stack(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_subtract(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_transposeMultiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_unstackSquare(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_walkInColumnOrder(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_walkInRowOrder(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_get__columnDimension(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__data(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__dataRef(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__rowDimension(t_Array2DRowRealMatrix *self, void *data);
      static PyGetSetDef t_Array2DRowRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, data),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, dataRef),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Array2DRowRealMatrix__methods_[] = {
        DECLARE_METHOD(t_Array2DRowRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, kroneckerProduct, METH_O),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, stack, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, unstackSquare, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Array2DRowRealMatrix)[] = {
        { Py_tp_methods, t_Array2DRowRealMatrix__methods_ },
        { Py_tp_init, (void *) t_Array2DRowRealMatrix_init_ },
        { Py_tp_getset, t_Array2DRowRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Array2DRowRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(Array2DRowRealMatrix, t_Array2DRowRealMatrix, Array2DRowRealMatrix);

      void t_Array2DRowRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(Array2DRowRealMatrix), &PY_TYPE_DEF(Array2DRowRealMatrix), module, "Array2DRowRealMatrix", 0);
      }

      void t_Array2DRowRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "class_", make_descriptor(Array2DRowRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "wrapfn_", make_descriptor(t_Array2DRowRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Array2DRowRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Array2DRowRealMatrix::initializeClass, 1)))
          return NULL;
        return t_Array2DRowRealMatrix::wrap_Object(Array2DRowRealMatrix(((t_Array2DRowRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_Array2DRowRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Array2DRowRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Array2DRowRealMatrix_init_(t_Array2DRowRealMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Array2DRowRealMatrix object((jobject) NULL);

            INT_CALL(object = Array2DRowRealMatrix());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[D", &a0))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            jboolean a1;
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[DZ", &a0, &a1))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0, a1));
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

      static PyObject *t_Array2DRowRealMatrix_add(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_addToEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_copy(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_createMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getColumnDimension(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getData(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getDataRef(t_Array2DRowRealMatrix *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_getEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getRow(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getRowDimension(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_kroneckerProduct(t_Array2DRowRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.kroneckerProduct(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "kroneckerProduct", arg);
        return NULL;
      }

      static PyObject *t_Array2DRowRealMatrix_multiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_multiplyEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_multiplyTransposed(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowRealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
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

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_operate(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_preMultiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setRow(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_stack(t_Array2DRowRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.stack());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_Array2DRowRealMatrix_subtract(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_transposeMultiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowRealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
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

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_unstackSquare(t_Array2DRowRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.unstackSquare());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_Array2DRowRealMatrix_walkInColumnOrder(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "walkInColumnOrder", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_walkInRowOrder(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_get__columnDimension(t_Array2DRowRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Array2DRowRealMatrix_get__data(t_Array2DRowRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_get__dataRef(t_Array2DRowRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_get__rowDimension(t_Array2DRowRealMatrix *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *AbstractGaussianContribution::class$ = NULL;
            jmethodID *AbstractGaussianContribution::mids$ = NULL;
            bool AbstractGaussianContribution::live$ = false;

            jclass AbstractGaussianContribution::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMeanElementRate_0483a0f94731abef] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_7d3eb19aa1e75a63] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
                mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_3144241334d46411] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_5401e749436ec3b7] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_getLLimits_9b6fd6b3a2b07f62] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getLLimits_1abf2eee80dffc68] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_d134ffff44a2b5b4] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution$GaussQuadrature;DDLorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext;[D)[D");
                mids$[mid_getMeanElementRate_89606da00856aa41] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution$GaussQuadrature;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDriversWithoutMu_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > AbstractGaussianContribution::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_0483a0f94731abef], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > AbstractGaussianContribution::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_7d3eb19aa1e75a63], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List AbstractGaussianContribution::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
            }

            void AbstractGaussianContribution::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
            }

            void AbstractGaussianContribution::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
            }

            ::java::util::List AbstractGaussianContribution::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List AbstractGaussianContribution::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_3144241334d46411], a0.this$, a1.this$, a2.this$));
            }

            void AbstractGaussianContribution::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095], a0.this$);
            }

            void AbstractGaussianContribution::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_5401e749436ec3b7], a0.this$, a1.this$);
            }

            void AbstractGaussianContribution::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276], a0.this$, a1.this$);
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
            static PyObject *t_AbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_getMeanElementRate(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_getParametersDrivers(t_AbstractGaussianContribution *self);
            static PyObject *t_AbstractGaussianContribution_init(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_initializeShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_registerAttitudeProvider(t_AbstractGaussianContribution *self, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_updateShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_get__parametersDrivers(t_AbstractGaussianContribution *self, void *data);
            static PyGetSetDef t_AbstractGaussianContribution__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGaussianContribution, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGaussianContribution__methods_[] = {
              DECLARE_METHOD(t_AbstractGaussianContribution, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContribution, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContribution, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, init, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_AbstractGaussianContribution, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGaussianContribution)[] = {
              { Py_tp_methods, t_AbstractGaussianContribution__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractGaussianContribution__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGaussianContribution)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractGaussianContribution, t_AbstractGaussianContribution, AbstractGaussianContribution);

            void t_AbstractGaussianContribution::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGaussianContribution), &PY_TYPE_DEF(AbstractGaussianContribution), module, "AbstractGaussianContribution", 0);
            }

            void t_AbstractGaussianContribution::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "class_", make_descriptor(AbstractGaussianContribution::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "wrapfn_", make_descriptor(t_AbstractGaussianContribution::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGaussianContribution::initializeClass, 1)))
                return NULL;
              return t_AbstractGaussianContribution::wrap_Object(AbstractGaussianContribution(((t_AbstractGaussianContribution *) arg)->object.this$));
            }
            static PyObject *t_AbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGaussianContribution::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractGaussianContribution_getMeanElementRate(t_AbstractGaussianContribution *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
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
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_AbstractGaussianContribution_getParametersDrivers(t_AbstractGaussianContribution *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_AbstractGaussianContribution_init(t_AbstractGaussianContribution *self, PyObject *args)
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

            static PyObject *t_AbstractGaussianContribution_initializeShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args)
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

            static PyObject *t_AbstractGaussianContribution_registerAttitudeProvider(t_AbstractGaussianContribution *self, PyObject *arg)
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

            static PyObject *t_AbstractGaussianContribution_updateShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args)
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

            static PyObject *t_AbstractGaussianContribution_get__parametersDrivers(t_AbstractGaussianContribution *self, void *data)
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
#include "org/orekit/gnss/antenna/TwoDVariation.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *TwoDVariation::class$ = NULL;
        jmethodID *TwoDVariation::mids$ = NULL;
        bool TwoDVariation::live$ = false;

        jclass TwoDVariation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/TwoDVariation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2b694b5e2fbd217b] = env->getMethodID(cls, "<init>", "(DDD[[D)V");
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TwoDVariation::TwoDVariation(jdouble a0, jdouble a1, jdouble a2, const JArray< JArray< jdouble > > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2b694b5e2fbd217b, a0, a1, a2, a3.this$)) {}

        jdouble TwoDVariation::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_99e3200dafc19573], a0, a1);
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
      namespace antenna {
        static PyObject *t_TwoDVariation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TwoDVariation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TwoDVariation_init_(t_TwoDVariation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TwoDVariation_value(t_TwoDVariation *self, PyObject *args);

        static PyMethodDef t_TwoDVariation__methods_[] = {
          DECLARE_METHOD(t_TwoDVariation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TwoDVariation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TwoDVariation, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TwoDVariation)[] = {
          { Py_tp_methods, t_TwoDVariation__methods_ },
          { Py_tp_init, (void *) t_TwoDVariation_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TwoDVariation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TwoDVariation, t_TwoDVariation, TwoDVariation);

        void t_TwoDVariation::install(PyObject *module)
        {
          installType(&PY_TYPE(TwoDVariation), &PY_TYPE_DEF(TwoDVariation), module, "TwoDVariation", 0);
        }

        void t_TwoDVariation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "class_", make_descriptor(TwoDVariation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "wrapfn_", make_descriptor(t_TwoDVariation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TwoDVariation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TwoDVariation::initializeClass, 1)))
            return NULL;
          return t_TwoDVariation::wrap_Object(TwoDVariation(((t_TwoDVariation *) arg)->object.this$));
        }
        static PyObject *t_TwoDVariation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TwoDVariation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TwoDVariation_init_(t_TwoDVariation *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          JArray< JArray< jdouble > > a3((jobject) NULL);
          TwoDVariation object((jobject) NULL);

          if (!parseArgs(args, "DDD[[D", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = TwoDVariation(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TwoDVariation_value(t_TwoDVariation *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
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
#include "java/io/PrintWriter.h"
#include "java/util/Locale.h"
#include "java/lang/CharSequence.h"
#include "java/io/OutputStream.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/PrintWriter.h"
#include "java/io/File.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *PrintWriter::class$ = NULL;
    jmethodID *PrintWriter::mids$ = NULL;
    bool PrintWriter::live$ = false;

    jclass PrintWriter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/PrintWriter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7e1d51614d5d6a43] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_9601da1efb310931] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_init$_bfd715bc0a817931] = env->getMethodID(cls, "<init>", "(Ljava/io/Writer;)V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_6e63b60ae073cb68] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_a627ad9c5959309d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_41d3e7c3eb1b0829] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;Z)V");
        mids$[mid_init$_ff2dc942d12762c0] = env->getMethodID(cls, "<init>", "(Ljava/io/Writer;Z)V");
        mids$[mid_append_0b46a52ebe27c7b2] = env->getMethodID(cls, "append", "(C)Ljava/io/PrintWriter;");
        mids$[mid_append_f1d6dad2f74f8d10] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;");
        mids$[mid_append_ddc6d90b9be8e5d3] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;");
        mids$[mid_checkError_9ab94ac1dc23b105] = env->getMethodID(cls, "checkError", "()Z");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_a1fa5dae97ea5ed2] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_6256abe5f68071a9] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_format_10e678c88f06f955] = env->getMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_print_dd3f254991df5d48] = env->getMethodID(cls, "print", "([C)V");
        mids$[mid_print_734b91ac30d5f9b4] = env->getMethodID(cls, "print", "(Ljava/lang/String;)V");
        mids$[mid_print_fcb96c98de6fad04] = env->getMethodID(cls, "print", "(Z)V");
        mids$[mid_print_df95ad02f5b4acd9] = env->getMethodID(cls, "print", "(C)V");
        mids$[mid_print_8ba9fe7a847cecad] = env->getMethodID(cls, "print", "(D)V");
        mids$[mid_print_bb7181dc3b1dc22b] = env->getMethodID(cls, "print", "(F)V");
        mids$[mid_print_44ed599e93e8a30c] = env->getMethodID(cls, "print", "(I)V");
        mids$[mid_print_55f3c894852c27a3] = env->getMethodID(cls, "print", "(Ljava/lang/Object;)V");
        mids$[mid_print_3d7dd2314a0dd456] = env->getMethodID(cls, "print", "(J)V");
        mids$[mid_printf_6256abe5f68071a9] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_printf_10e678c88f06f955] = env->getMethodID(cls, "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_println_a1fa5dae97ea5ed2] = env->getMethodID(cls, "println", "()V");
        mids$[mid_println_dd3f254991df5d48] = env->getMethodID(cls, "println", "([C)V");
        mids$[mid_println_734b91ac30d5f9b4] = env->getMethodID(cls, "println", "(Ljava/lang/String;)V");
        mids$[mid_println_fcb96c98de6fad04] = env->getMethodID(cls, "println", "(Z)V");
        mids$[mid_println_df95ad02f5b4acd9] = env->getMethodID(cls, "println", "(C)V");
        mids$[mid_println_8ba9fe7a847cecad] = env->getMethodID(cls, "println", "(D)V");
        mids$[mid_println_bb7181dc3b1dc22b] = env->getMethodID(cls, "println", "(F)V");
        mids$[mid_println_44ed599e93e8a30c] = env->getMethodID(cls, "println", "(I)V");
        mids$[mid_println_55f3c894852c27a3] = env->getMethodID(cls, "println", "(Ljava/lang/Object;)V");
        mids$[mid_println_3d7dd2314a0dd456] = env->getMethodID(cls, "println", "(J)V");
        mids$[mid_write_dd3f254991df5d48] = env->getMethodID(cls, "write", "([C)V");
        mids$[mid_write_734b91ac30d5f9b4] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_44ed599e93e8a30c] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_d23ba6c655e17478] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_eb74d6dc93e0751e] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");
        mids$[mid_setError_a1fa5dae97ea5ed2] = env->getMethodID(cls, "setError", "()V");
        mids$[mid_clearError_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearError", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    PrintWriter::PrintWriter(const ::java::io::File & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_7e1d51614d5d6a43, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::OutputStream & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_9601da1efb310931, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::Writer & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_bfd715bc0a817931, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::lang::String & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::File & a0, const ::java::lang::String & a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_6e63b60ae073cb68, a0.this$, a1.this$)) {}

    PrintWriter::PrintWriter(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_a627ad9c5959309d, a0.this$, a1.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::OutputStream & a0, jboolean a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_41d3e7c3eb1b0829, a0.this$, a1)) {}

    PrintWriter::PrintWriter(const ::java::io::Writer & a0, jboolean a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_ff2dc942d12762c0, a0.this$, a1)) {}

    PrintWriter PrintWriter::append(jchar a0) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_0b46a52ebe27c7b2], a0));
    }

    PrintWriter PrintWriter::append(const ::java::lang::CharSequence & a0) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_f1d6dad2f74f8d10], a0.this$));
    }

    PrintWriter PrintWriter::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_ddc6d90b9be8e5d3], a0.this$, a1, a2));
    }

    jboolean PrintWriter::checkError() const
    {
      return env->callBooleanMethod(this$, mids$[mid_checkError_9ab94ac1dc23b105]);
    }

    void PrintWriter::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    void PrintWriter::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_a1fa5dae97ea5ed2]);
    }

    PrintWriter PrintWriter::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_format_6256abe5f68071a9], a0.this$, a1.this$));
    }

    PrintWriter PrintWriter::format(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_format_10e678c88f06f955], a0.this$, a1.this$, a2.this$));
    }

    void PrintWriter::print(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_dd3f254991df5d48], a0.this$);
    }

    void PrintWriter::print(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_734b91ac30d5f9b4], a0.this$);
    }

    void PrintWriter::print(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_fcb96c98de6fad04], a0);
    }

    void PrintWriter::print(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_df95ad02f5b4acd9], a0);
    }

    void PrintWriter::print(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_8ba9fe7a847cecad], a0);
    }

    void PrintWriter::print(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_bb7181dc3b1dc22b], a0);
    }

    void PrintWriter::print(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_44ed599e93e8a30c], a0);
    }

    void PrintWriter::print(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_55f3c894852c27a3], a0.this$);
    }

    void PrintWriter::print(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_3d7dd2314a0dd456], a0);
    }

    PrintWriter PrintWriter::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_printf_6256abe5f68071a9], a0.this$, a1.this$));
    }

    PrintWriter PrintWriter::printf(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_printf_10e678c88f06f955], a0.this$, a1.this$, a2.this$));
    }

    void PrintWriter::println() const
    {
      env->callVoidMethod(this$, mids$[mid_println_a1fa5dae97ea5ed2]);
    }

    void PrintWriter::println(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_dd3f254991df5d48], a0.this$);
    }

    void PrintWriter::println(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_734b91ac30d5f9b4], a0.this$);
    }

    void PrintWriter::println(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_fcb96c98de6fad04], a0);
    }

    void PrintWriter::println(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_df95ad02f5b4acd9], a0);
    }

    void PrintWriter::println(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_8ba9fe7a847cecad], a0);
    }

    void PrintWriter::println(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_bb7181dc3b1dc22b], a0);
    }

    void PrintWriter::println(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_44ed599e93e8a30c], a0);
    }

    void PrintWriter::println(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_55f3c894852c27a3], a0.this$);
    }

    void PrintWriter::println(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_3d7dd2314a0dd456], a0);
    }

    void PrintWriter::write(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_dd3f254991df5d48], a0.this$);
    }

    void PrintWriter::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_734b91ac30d5f9b4], a0.this$);
    }

    void PrintWriter::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_44ed599e93e8a30c], a0);
    }

    void PrintWriter::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d23ba6c655e17478], a0.this$, a1, a2);
    }

    void PrintWriter::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_eb74d6dc93e0751e], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_PrintWriter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrintWriter_instance_(PyTypeObject *type, PyObject *arg);
    static int t_PrintWriter_init_(t_PrintWriter *self, PyObject *args, PyObject *kwds);
    static PyObject *t_PrintWriter_append(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_checkError(t_PrintWriter *self);
    static PyObject *t_PrintWriter_close(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_flush(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_format(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_print(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_printf(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_println(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_write(t_PrintWriter *self, PyObject *args);

    static PyMethodDef t_PrintWriter__methods_[] = {
      DECLARE_METHOD(t_PrintWriter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintWriter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintWriter, append, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, checkError, METH_NOARGS),
      DECLARE_METHOD(t_PrintWriter, close, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, flush, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, format, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, print, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, printf, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, println, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(PrintWriter)[] = {
      { Py_tp_methods, t_PrintWriter__methods_ },
      { Py_tp_init, (void *) t_PrintWriter_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(PrintWriter)[] = {
      &PY_TYPE_DEF(::java::io::Writer),
      NULL
    };

    DEFINE_TYPE(PrintWriter, t_PrintWriter, PrintWriter);

    void t_PrintWriter::install(PyObject *module)
    {
      installType(&PY_TYPE(PrintWriter), &PY_TYPE_DEF(PrintWriter), module, "PrintWriter", 0);
    }

    void t_PrintWriter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "class_", make_descriptor(PrintWriter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "wrapfn_", make_descriptor(t_PrintWriter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_PrintWriter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, PrintWriter::initializeClass, 1)))
        return NULL;
      return t_PrintWriter::wrap_Object(PrintWriter(((t_PrintWriter *) arg)->object.this$));
    }
    static PyObject *t_PrintWriter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, PrintWriter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_PrintWriter_init_(t_PrintWriter *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::Writer a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::Writer::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::File a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          jboolean a1;
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::Writer a0((jobject) NULL);
          jboolean a1;
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::Writer::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
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

    static PyObject *t_PrintWriter_append(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "append", args, 2);
    }

    static PyObject *t_PrintWriter_checkError(t_PrintWriter *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.checkError());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_PrintWriter_close(t_PrintWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_PrintWriter_flush(t_PrintWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_PrintWriter_format(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.format(a0, a1));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "format", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_print(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "print", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_printf(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.printf(a0, a1));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.printf(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "printf", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_println(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.println());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "println", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_write(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "write", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/MultistepIntegrator.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *MultistepIntegrator::class$ = NULL;
      jmethodID *MultistepIntegrator::mids$ = NULL;
      bool MultistepIntegrator::live$ = false;

      jclass MultistepIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/MultistepIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxGrowth_b74f83833fdad017] = env->getMethodID(cls, "getMaxGrowth", "()D");
          mids$[mid_getMinReduction_b74f83833fdad017] = env->getMethodID(cls, "getMinReduction", "()D");
          mids$[mid_getNSteps_55546ef6a647f39b] = env->getMethodID(cls, "getNSteps", "()I");
          mids$[mid_getSafety_b74f83833fdad017] = env->getMethodID(cls, "getSafety", "()D");
          mids$[mid_getStarterIntegrator_6e08fde180cf79f8] = env->getMethodID(cls, "getStarterIntegrator", "()Lorg/hipparchus/ode/ODEIntegrator;");
          mids$[mid_setMaxGrowth_8ba9fe7a847cecad] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
          mids$[mid_setMinReduction_8ba9fe7a847cecad] = env->getMethodID(cls, "setMinReduction", "(D)V");
          mids$[mid_setSafety_8ba9fe7a847cecad] = env->getMethodID(cls, "setSafety", "(D)V");
          mids$[mid_setStarterIntegrator_9bd4ec1fb1f57fec] = env->getMethodID(cls, "setStarterIntegrator", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
          mids$[mid_initializeHighOrderDerivatives_0830b1db869546c8] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_computeStepGrowShrinkFactor_04fd0666b613d2ab] = env->getMethodID(cls, "computeStepGrowShrinkFactor", "(D)D");
          mids$[mid_rescale_8ba9fe7a847cecad] = env->getMethodID(cls, "rescale", "(D)V");
          mids$[mid_start_2a4f0e2910e1004f] = env->getMethodID(cls, "start", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultistepIntegrator::getMaxGrowth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_b74f83833fdad017]);
      }

      jdouble MultistepIntegrator::getMinReduction() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinReduction_b74f83833fdad017]);
      }

      jint MultistepIntegrator::getNSteps() const
      {
        return env->callIntMethod(this$, mids$[mid_getNSteps_55546ef6a647f39b]);
      }

      jdouble MultistepIntegrator::getSafety() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSafety_b74f83833fdad017]);
      }

      ::org::hipparchus::ode::ODEIntegrator MultistepIntegrator::getStarterIntegrator() const
      {
        return ::org::hipparchus::ode::ODEIntegrator(env->callObjectMethod(this$, mids$[mid_getStarterIntegrator_6e08fde180cf79f8]));
      }

      void MultistepIntegrator::setMaxGrowth(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxGrowth_8ba9fe7a847cecad], a0);
      }

      void MultistepIntegrator::setMinReduction(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinReduction_8ba9fe7a847cecad], a0);
      }

      void MultistepIntegrator::setSafety(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSafety_8ba9fe7a847cecad], a0);
      }

      void MultistepIntegrator::setStarterIntegrator(const ::org::hipparchus::ode::ODEIntegrator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStarterIntegrator_9bd4ec1fb1f57fec], a0.this$);
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
      static PyObject *t_MultistepIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepIntegrator_getMaxGrowth(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getMinReduction(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getNSteps(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getSafety(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getStarterIntegrator(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_setMaxGrowth(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_setMinReduction(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_setSafety(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_setStarterIntegrator(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_get__maxGrowth(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__maxGrowth(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepIntegrator_get__minReduction(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__minReduction(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepIntegrator_get__nSteps(t_MultistepIntegrator *self, void *data);
      static PyObject *t_MultistepIntegrator_get__safety(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__safety(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepIntegrator_get__starterIntegrator(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__starterIntegrator(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyGetSetDef t_MultistepIntegrator__fields_[] = {
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, maxGrowth),
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, minReduction),
        DECLARE_GET_FIELD(t_MultistepIntegrator, nSteps),
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, safety),
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, starterIntegrator),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultistepIntegrator__methods_[] = {
        DECLARE_METHOD(t_MultistepIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepIntegrator, getMaxGrowth, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getMinReduction, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getNSteps, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getSafety, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getStarterIntegrator, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, setMaxGrowth, METH_O),
        DECLARE_METHOD(t_MultistepIntegrator, setMinReduction, METH_O),
        DECLARE_METHOD(t_MultistepIntegrator, setSafety, METH_O),
        DECLARE_METHOD(t_MultistepIntegrator, setStarterIntegrator, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultistepIntegrator)[] = {
        { Py_tp_methods, t_MultistepIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultistepIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultistepIntegrator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator),
        NULL
      };

      DEFINE_TYPE(MultistepIntegrator, t_MultistepIntegrator, MultistepIntegrator);

      void t_MultistepIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(MultistepIntegrator), &PY_TYPE_DEF(MultistepIntegrator), module, "MultistepIntegrator", 0);
      }

      void t_MultistepIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepIntegrator), "class_", make_descriptor(MultistepIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepIntegrator), "wrapfn_", make_descriptor(t_MultistepIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultistepIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultistepIntegrator::initializeClass, 1)))
          return NULL;
        return t_MultistepIntegrator::wrap_Object(MultistepIntegrator(((t_MultistepIntegrator *) arg)->object.this$));
      }
      static PyObject *t_MultistepIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultistepIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultistepIntegrator_getMaxGrowth(t_MultistepIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepIntegrator_getMinReduction(t_MultistepIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinReduction());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepIntegrator_getNSteps(t_MultistepIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNSteps());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultistepIntegrator_getSafety(t_MultistepIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSafety());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepIntegrator_getStarterIntegrator(t_MultistepIntegrator *self)
      {
        ::org::hipparchus::ode::ODEIntegrator result((jobject) NULL);
        OBJ_CALL(result = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_ODEIntegrator::wrap_Object(result);
      }

      static PyObject *t_MultistepIntegrator_setMaxGrowth(t_MultistepIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMaxGrowth(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
        return NULL;
      }

      static PyObject *t_MultistepIntegrator_setMinReduction(t_MultistepIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMinReduction(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
        return NULL;
      }

      static PyObject *t_MultistepIntegrator_setSafety(t_MultistepIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setSafety(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
        return NULL;
      }

      static PyObject *t_MultistepIntegrator_setStarterIntegrator(t_MultistepIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setStarterIntegrator(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setStarterIntegrator", arg);
        return NULL;
      }

      static PyObject *t_MultistepIntegrator_get__maxGrowth(t_MultistepIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepIntegrator_set__maxGrowth(t_MultistepIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMaxGrowth(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
        return -1;
      }

      static PyObject *t_MultistepIntegrator_get__minReduction(t_MultistepIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinReduction());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepIntegrator_set__minReduction(t_MultistepIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMinReduction(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
        return -1;
      }

      static PyObject *t_MultistepIntegrator_get__nSteps(t_MultistepIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNSteps());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultistepIntegrator_get__safety(t_MultistepIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSafety());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepIntegrator_set__safety(t_MultistepIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setSafety(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "safety", arg);
        return -1;
      }

      static PyObject *t_MultistepIntegrator_get__starterIntegrator(t_MultistepIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::ODEIntegrator value((jobject) NULL);
        OBJ_CALL(value = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_ODEIntegrator::wrap_Object(value);
      }
      static int t_MultistepIntegrator_set__starterIntegrator(t_MultistepIntegrator *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::ode::ODEIntegrator value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &value))
          {
            INT_CALL(self->object.setStarterIntegrator(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "starterIntegrator", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/XmlGenerator.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *XmlGenerator::class$ = NULL;
            jmethodID *XmlGenerator::mids$ = NULL;
            bool XmlGenerator::live$ = false;
            jint XmlGenerator::DEFAULT_INDENT = (jint) 0;
            ::java::lang::String *XmlGenerator::NDM_XML_V3_SCHEMA_LOCATION = NULL;
            ::java::lang::String *XmlGenerator::UNITS = NULL;

            jclass XmlGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/XmlGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_455a739b3cdb51af] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;ILjava/lang/String;DZLjava/lang/String;)V");
                mids$[mid_endMessage_734b91ac30d5f9b4] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_734b91ac30d5f9b4] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_1c1fa1e935d6cdcf] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_e4c64bde02ca34c3] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_startMessage_03ff9b80a9f63d81] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_0e7c3032c7c93ed3] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_bae21004607fffc6] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeOneAttributeElement_09d55289065fbca9] = env->getMethodID(cls, "writeOneAttributeElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_writeTwoAttributesElement_e39b9463875d2aea] = env->getMethodID(cls, "writeTwoAttributesElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_INDENT = env->getStaticIntField(cls, "DEFAULT_INDENT");
                NDM_XML_V3_SCHEMA_LOCATION = new ::java::lang::String(env->getStaticObjectField(cls, "NDM_XML_V3_SCHEMA_LOCATION", "Ljava/lang/String;"));
                UNITS = new ::java::lang::String(env->getStaticObjectField(cls, "UNITS", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XmlGenerator::XmlGenerator(const ::java::lang::Appendable & a0, jint a1, const ::java::lang::String & a2, jdouble a3, jboolean a4, const ::java::lang::String & a5) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_455a739b3cdb51af, a0.this$, a1, a2.this$, a3, a4, a5.this$)) {}

            void XmlGenerator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_734b91ac30d5f9b4], a0.this$);
            }

            void XmlGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_734b91ac30d5f9b4], a0.this$);
            }

            ::java::lang::String XmlGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat XmlGenerator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_e4c64bde02ca34c3]));
            }

            void XmlGenerator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_03ff9b80a9f63d81], a0.this$, a1.this$, a2);
            }

            void XmlGenerator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_0e7c3032c7c93ed3], a0.this$);
            }

            void XmlGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_bae21004607fffc6], a0.this$, a1.this$, a2.this$, a3);
            }

            void XmlGenerator::writeOneAttributeElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeOneAttributeElement_09d55289065fbca9], a0.this$, a1.this$, a2.this$, a3.this$);
            }

            void XmlGenerator::writeTwoAttributesElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
            {
              env->callVoidMethod(this$, mids$[mid_writeTwoAttributesElement_e39b9463875d2aea], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
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
          namespace generation {
            static PyObject *t_XmlGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_XmlGenerator_init_(t_XmlGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_XmlGenerator_endMessage(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_enterSection(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_exitSection(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_getFormat(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_startMessage(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeComments(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeEntry(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeOneAttributeElement(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeTwoAttributesElement(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_get__format(t_XmlGenerator *self, void *data);
            static PyGetSetDef t_XmlGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_XmlGenerator, format),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XmlGenerator__methods_[] = {
              DECLARE_METHOD(t_XmlGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlGenerator, endMessage, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, enterSection, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, exitSection, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, getFormat, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, startMessage, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeComments, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeEntry, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeOneAttributeElement, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeTwoAttributesElement, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlGenerator)[] = {
              { Py_tp_methods, t_XmlGenerator__methods_ },
              { Py_tp_init, (void *) t_XmlGenerator_init_ },
              { Py_tp_getset, t_XmlGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlGenerator)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractGenerator),
              NULL
            };

            DEFINE_TYPE(XmlGenerator, t_XmlGenerator, XmlGenerator);

            void t_XmlGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlGenerator), &PY_TYPE_DEF(XmlGenerator), module, "XmlGenerator", 0);
            }

            void t_XmlGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "class_", make_descriptor(XmlGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "wrapfn_", make_descriptor(t_XmlGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "boxfn_", make_descriptor(boxObject));
              env->getClass(XmlGenerator::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "DEFAULT_INDENT", make_descriptor(XmlGenerator::DEFAULT_INDENT));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "NDM_XML_V3_SCHEMA_LOCATION", make_descriptor(j2p(*XmlGenerator::NDM_XML_V3_SCHEMA_LOCATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "UNITS", make_descriptor(j2p(*XmlGenerator::UNITS)));
            }

            static PyObject *t_XmlGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlGenerator::initializeClass, 1)))
                return NULL;
              return t_XmlGenerator::wrap_Object(XmlGenerator(((t_XmlGenerator *) arg)->object.this$));
            }
            static PyObject *t_XmlGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_XmlGenerator_init_(t_XmlGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              jint a1;
              ::java::lang::String a2((jobject) NULL);
              jdouble a3;
              jboolean a4;
              ::java::lang::String a5((jobject) NULL);
              XmlGenerator object((jobject) NULL);

              if (!parseArgs(args, "kIsDZs", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = XmlGenerator(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_XmlGenerator_endMessage(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.endMessage(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "endMessage", args, 2);
            }

            static PyObject *t_XmlGenerator_enterSection(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "enterSection", args, 2);
            }

            static PyObject *t_XmlGenerator_exitSection(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.exitSection());
                return j2p(result);
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "exitSection", args, 2);
            }

            static PyObject *t_XmlGenerator_getFormat(t_XmlGenerator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getFormat());
                return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "getFormat", args, 2);
            }

            static PyObject *t_XmlGenerator_startMessage(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;

              if (!parseArgs(args, "ssD", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.startMessage(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "startMessage", args, 2);
            }

            static PyObject *t_XmlGenerator_writeComments(t_XmlGenerator *self, PyObject *args)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.writeComments(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "writeComments", args, 2);
            }

            static PyObject *t_XmlGenerator_writeEntry(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::utils::units::Unit a2((jobject) NULL);
              jboolean a3;

              if (!parseArgs(args, "sskZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "writeEntry", args, 2);
            }

            static PyObject *t_XmlGenerator_writeOneAttributeElement(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);

              if (!parseArgs(args, "ssss", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.writeOneAttributeElement(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeOneAttributeElement", args);
              return NULL;
            }

            static PyObject *t_XmlGenerator_writeTwoAttributesElement(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::lang::String a4((jobject) NULL);
              ::java::lang::String a5((jobject) NULL);

              if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.writeTwoAttributesElement(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeTwoAttributesElement", args);
              return NULL;
            }

            static PyObject *t_XmlGenerator_get__format(t_XmlGenerator *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/PythonNdmConstituent.h"
#include "java/util/List.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *PythonNdmConstituent::class$ = NULL;
          jmethodID *PythonNdmConstituent::mids$ = NULL;
          bool PythonNdmConstituent::live$ = false;

          jclass PythonNdmConstituent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/PythonNdmConstituent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a303aa47932e1eeb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/Header;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getConventions_53aaf70620a914af] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_687c2d3d1010744e] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getHeader_e6dd83960ea2d5d6] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
              mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_validate_a1fa5dae97ea5ed2] = env->getMethodID(cls, "validate", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonNdmConstituent::PythonNdmConstituent(const ::org::orekit::files::ccsds::section::Header & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_a303aa47932e1eeb, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          void PythonNdmConstituent::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          ::org::orekit::utils::IERSConventions PythonNdmConstituent::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getConventions_53aaf70620a914af]));
          }

          ::org::orekit::data::DataContext PythonNdmConstituent::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getDataContext_687c2d3d1010744e]));
          }

          ::org::orekit::files::ccsds::section::Header PythonNdmConstituent::getHeader() const
          {
            return ::org::orekit::files::ccsds::section::Header(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getHeader_e6dd83960ea2d5d6]));
          }

          ::java::util::List PythonNdmConstituent::getSegments() const
          {
            return ::java::util::List(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getSegments_e62d3bb06d56d7e3]));
          }

          jlong PythonNdmConstituent::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonNdmConstituent::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
          }

          void PythonNdmConstituent::validate() const
          {
            env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_validate_a1fa5dae97ea5ed2]);
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
          static PyObject *t_PythonNdmConstituent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNdmConstituent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNdmConstituent_of_(t_PythonNdmConstituent *self, PyObject *args);
          static int t_PythonNdmConstituent_init_(t_PythonNdmConstituent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonNdmConstituent_finalize(t_PythonNdmConstituent *self);
          static PyObject *t_PythonNdmConstituent_getConventions(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_getDataContext(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_getHeader(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_getSegments(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_pythonExtension(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_validate(t_PythonNdmConstituent *self, PyObject *args);
          static jobject JNICALL t_PythonNdmConstituent_getConventions0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNdmConstituent_getDataContext1(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNdmConstituent_getHeader2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNdmConstituent_getSegments3(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonNdmConstituent_pythonDecRef4(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonNdmConstituent_validate5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonNdmConstituent_get__self(t_PythonNdmConstituent *self, void *data);
          static PyObject *t_PythonNdmConstituent_get__parameters_(t_PythonNdmConstituent *self, void *data);
          static PyGetSetDef t_PythonNdmConstituent__fields_[] = {
            DECLARE_GET_FIELD(t_PythonNdmConstituent, self),
            DECLARE_GET_FIELD(t_PythonNdmConstituent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonNdmConstituent__methods_[] = {
            DECLARE_METHOD(t_PythonNdmConstituent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNdmConstituent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNdmConstituent, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getConventions, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getDataContext, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getHeader, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getSegments, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, pythonExtension, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonNdmConstituent)[] = {
            { Py_tp_methods, t_PythonNdmConstituent__methods_ },
            { Py_tp_init, (void *) t_PythonNdmConstituent_init_ },
            { Py_tp_getset, t_PythonNdmConstituent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonNdmConstituent)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
            NULL
          };

          DEFINE_TYPE(PythonNdmConstituent, t_PythonNdmConstituent, PythonNdmConstituent);
          PyObject *t_PythonNdmConstituent::wrap_Object(const PythonNdmConstituent& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonNdmConstituent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonNdmConstituent *self = (t_PythonNdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PythonNdmConstituent::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonNdmConstituent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonNdmConstituent *self = (t_PythonNdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PythonNdmConstituent::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonNdmConstituent), &PY_TYPE_DEF(PythonNdmConstituent), module, "PythonNdmConstituent", 1);
          }

          void t_PythonNdmConstituent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNdmConstituent), "class_", make_descriptor(PythonNdmConstituent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNdmConstituent), "wrapfn_", make_descriptor(t_PythonNdmConstituent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNdmConstituent), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonNdmConstituent::initializeClass);
            JNINativeMethod methods[] = {
              { "getConventions", "()Lorg/orekit/utils/IERSConventions;", (void *) t_PythonNdmConstituent_getConventions0 },
              { "getDataContext", "()Lorg/orekit/data/DataContext;", (void *) t_PythonNdmConstituent_getDataContext1 },
              { "getHeader", "()Lorg/orekit/files/ccsds/section/Header;", (void *) t_PythonNdmConstituent_getHeader2 },
              { "getSegments", "()Ljava/util/List;", (void *) t_PythonNdmConstituent_getSegments3 },
              { "pythonDecRef", "()V", (void *) t_PythonNdmConstituent_pythonDecRef4 },
              { "validate", "()V", (void *) t_PythonNdmConstituent_validate5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonNdmConstituent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonNdmConstituent::initializeClass, 1)))
              return NULL;
            return t_PythonNdmConstituent::wrap_Object(PythonNdmConstituent(((t_PythonNdmConstituent *) arg)->object.this$));
          }
          static PyObject *t_PythonNdmConstituent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonNdmConstituent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonNdmConstituent_of_(t_PythonNdmConstituent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonNdmConstituent_init_(t_PythonNdmConstituent *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::section::Header a0((jobject) NULL);
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::IERSConventions a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::data::DataContext a3((jobject) NULL);
            PythonNdmConstituent object((jobject) NULL);

            if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::section::Header::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
            {
              INT_CALL(object = PythonNdmConstituent(a0, a1, a2, a3));
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

          static PyObject *t_PythonNdmConstituent_finalize(t_PythonNdmConstituent *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonNdmConstituent_getConventions(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getConventions());
              return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getConventions", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_getDataContext(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getDataContext());
              return ::org::orekit::data::t_DataContext::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getDataContext", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_getHeader(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::section::Header result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getHeader());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Header::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getHeader", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_getSegments(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSegments());
              return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getSegments", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_pythonExtension(t_PythonNdmConstituent *self, PyObject *args)
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

          static PyObject *t_PythonNdmConstituent_validate(t_PythonNdmConstituent *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.validate());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "validate", args, 2);
          }

          static jobject JNICALL t_PythonNdmConstituent_getConventions0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getConventions", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::utils::IERSConventions::initializeClass, &value))
            {
              throwTypeError("getConventions", result);
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

          static jobject JNICALL t_PythonNdmConstituent_getDataContext1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::data::DataContext value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getDataContext", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::data::DataContext::initializeClass, &value))
            {
              throwTypeError("getDataContext", result);
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

          static jobject JNICALL t_PythonNdmConstituent_getHeader2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &value))
            {
              throwTypeError("getHeader", result);
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

          static jobject JNICALL t_PythonNdmConstituent_getSegments3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getSegments", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getSegments", result);
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

          static void JNICALL t_PythonNdmConstituent_pythonDecRef4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonNdmConstituent_validate5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "validate", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonNdmConstituent_get__self(t_PythonNdmConstituent *self, void *data)
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
          static PyObject *t_PythonNdmConstituent_get__parameters_(t_PythonNdmConstituent *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative2Field::class$ = NULL;
        jmethodID *UnivariateDerivative2Field::mids$ = NULL;
        bool UnivariateDerivative2Field::live$ = false;

        jclass UnivariateDerivative2Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative2Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getInstance_7dee767fa0ace56c] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2Field;");
            mids$[mid_getOne_61c90b0e9e75ab08] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_61c90b0e9e75ab08] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean UnivariateDerivative2Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        UnivariateDerivative2Field UnivariateDerivative2Field::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative2Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_7dee767fa0ace56c]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 UnivariateDerivative2Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getOne_61c90b0e9e75ab08]));
        }

        ::java::lang::Class UnivariateDerivative2Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 UnivariateDerivative2Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getZero_61c90b0e9e75ab08]));
        }

        jint UnivariateDerivative2Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
        static PyObject *t_UnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative2Field_equals(t_UnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2Field_getInstance(PyTypeObject *type);
        static PyObject *t_UnivariateDerivative2Field_getOne(t_UnivariateDerivative2Field *self);
        static PyObject *t_UnivariateDerivative2Field_getRuntimeClass(t_UnivariateDerivative2Field *self);
        static PyObject *t_UnivariateDerivative2Field_getZero(t_UnivariateDerivative2Field *self);
        static PyObject *t_UnivariateDerivative2Field_hashCode(t_UnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2Field_get__instance(t_UnivariateDerivative2Field *self, void *data);
        static PyObject *t_UnivariateDerivative2Field_get__one(t_UnivariateDerivative2Field *self, void *data);
        static PyObject *t_UnivariateDerivative2Field_get__runtimeClass(t_UnivariateDerivative2Field *self, void *data);
        static PyObject *t_UnivariateDerivative2Field_get__zero(t_UnivariateDerivative2Field *self, void *data);
        static PyGetSetDef t_UnivariateDerivative2Field__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, instance),
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, one),
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, runtimeClass),
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative2Field__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative2Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative2Field)[] = {
          { Py_tp_methods, t_UnivariateDerivative2Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateDerivative2Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative2Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative2Field, t_UnivariateDerivative2Field, UnivariateDerivative2Field);

        void t_UnivariateDerivative2Field::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative2Field), &PY_TYPE_DEF(UnivariateDerivative2Field), module, "UnivariateDerivative2Field", 0);
        }

        void t_UnivariateDerivative2Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2Field), "class_", make_descriptor(UnivariateDerivative2Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2Field), "wrapfn_", make_descriptor(t_UnivariateDerivative2Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative2Field::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative2Field::wrap_Object(UnivariateDerivative2Field(((t_UnivariateDerivative2Field *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative2Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative2Field_equals(t_UnivariateDerivative2Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative2Field_getInstance(PyTypeObject *type)
        {
          UnivariateDerivative2Field result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field::getInstance());
          return t_UnivariateDerivative2Field::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative2Field_getOne(t_UnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative2Field_getRuntimeClass(t_UnivariateDerivative2Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
        }

        static PyObject *t_UnivariateDerivative2Field_getZero(t_UnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative2Field_hashCode(t_UnivariateDerivative2Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2Field), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative2Field_get__instance(t_UnivariateDerivative2Field *self, void *data)
        {
          UnivariateDerivative2Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_UnivariateDerivative2Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2Field_get__one(t_UnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2Field_get__runtimeClass(t_UnivariateDerivative2Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2Field_get__zero(t_UnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/DSGenerator.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *DSGenerator::class$ = NULL;
        jmethodID *DSGenerator::mids$ = NULL;
        bool DSGenerator::live$ = false;

        jclass DSGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/DSGenerator");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
        static PyObject *t_DSGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSGenerator_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_DSGenerator__methods_[] = {
          DECLARE_METHOD(t_DSGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSGenerator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSGenerator)[] = {
          { Py_tp_methods, t_DSGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSGenerator)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::DerivativeGenerator),
          NULL
        };

        DEFINE_TYPE(DSGenerator, t_DSGenerator, DSGenerator);

        void t_DSGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(DSGenerator), &PY_TYPE_DEF(DSGenerator), module, "DSGenerator", 0);
        }

        void t_DSGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "class_", make_descriptor(DSGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "wrapfn_", make_descriptor(t_DSGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSGenerator::initializeClass, 1)))
            return NULL;
          return t_DSGenerator::wrap_Object(DSGenerator(((t_DSGenerator *) arg)->object.this$));
        }
        static PyObject *t_DSGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/BatchLSModel.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSModel::class$ = NULL;
        jmethodID *BatchLSModel::mids$ = NULL;
        bool BatchLSModel::live$ = false;

        jclass BatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_244486d6f58d6cbc] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_configureHarvester_dafc362fdc9e50eb] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_3575848f266bfbed] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BatchLSModel::BatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_244486d6f58d6cbc, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
      namespace leastsquares {
        static PyObject *t_BatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BatchLSModel_init_(t_BatchLSModel *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BatchLSModel__methods_[] = {
          DECLARE_METHOD(t_BatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSModel, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSModel)[] = {
          { Py_tp_methods, t_BatchLSModel__methods_ },
          { Py_tp_init, (void *) t_BatchLSModel_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSModel)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::AbstractBatchLSModel),
          NULL
        };

        DEFINE_TYPE(BatchLSModel, t_BatchLSModel, BatchLSModel);

        void t_BatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSModel), &PY_TYPE_DEF(BatchLSModel), module, "BatchLSModel", 0);
        }

        void t_BatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "class_", make_descriptor(BatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "wrapfn_", make_descriptor(t_BatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSModel::initializeClass, 1)))
            return NULL;
          return t_BatchLSModel::wrap_Object(BatchLSModel(((t_BatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_BatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BatchLSModel_init_(t_BatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          BatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = BatchLSModel(a0, a1, a2, a3));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
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
            mids$[mid_init$_0d07e79c01a9eae8] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/frames/Frame;DI)V");
            mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile$OrekitEphemerisSegment::OrekitEphemerisFile$OrekitEphemerisSegment(const ::java::util::List & a0, const ::org::orekit::frames::Frame & a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d07e79c01a9eae8, a0.this$, a1.this$, a2, a3)) {}

        ::org::orekit::utils::CartesianDerivativesFilter OrekitEphemerisFile$OrekitEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c]));
        }

        ::java::util::List OrekitEphemerisFile$OrekitEphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_e62d3bb06d56d7e3]));
        }

        ::org::orekit::frames::Frame OrekitEphemerisFile$OrekitEphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
        }

        ::org::orekit::frames::Frame OrekitEphemerisFile$OrekitEphemerisSegment::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_2c51111cc6894ba1]));
        }

        jint OrekitEphemerisFile$OrekitEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_55546ef6a647f39b]);
        }

        jdouble OrekitEphemerisFile$OrekitEphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
#include "org/orekit/models/earth/troposphere/FixedTroposphericDelay.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/troposphere/FixedTroposphericDelay.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *FixedTroposphericDelay::class$ = NULL;
          jmethodID *FixedTroposphericDelay::mids$ = NULL;
          bool FixedTroposphericDelay::live$ = false;

          jclass FixedTroposphericDelay::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/FixedTroposphericDelay");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_0343d25c5af74eca] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_init$_3f7c4bf9d0d94a6c] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
              mids$[mid_getDefaultModel_7073151b6b851b50] = env->getStaticMethodID(cls, "getDefaultModel", "()Lorg/orekit/models/earth/troposphere/FixedTroposphericDelay;");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_6f66c6b7094d6f08] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_2edbfa177156ee09] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FixedTroposphericDelay::FixedTroposphericDelay(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

          FixedTroposphericDelay::FixedTroposphericDelay(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0343d25c5af74eca, a0.this$, a1.this$)) {}

          FixedTroposphericDelay::FixedTroposphericDelay(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3f7c4bf9d0d94a6c, a0.this$, a1.this$, a2.this$)) {}

          FixedTroposphericDelay FixedTroposphericDelay::getDefaultModel()
          {
            jclass cls = env->getClass(initializeClass);
            return FixedTroposphericDelay(env->callStaticObjectMethod(cls, mids$[mid_getDefaultModel_7073151b6b851b50]));
          }

          ::java::util::List FixedTroposphericDelay::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          ::org::hipparchus::CalculusFieldElement FixedTroposphericDelay::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_6f66c6b7094d6f08], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble FixedTroposphericDelay::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_2edbfa177156ee09], a0, a1.this$, a2.this$, a3.this$);
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
        namespace troposphere {
          static PyObject *t_FixedTroposphericDelay_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FixedTroposphericDelay_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FixedTroposphericDelay_init_(t_FixedTroposphericDelay *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FixedTroposphericDelay_getDefaultModel(PyTypeObject *type);
          static PyObject *t_FixedTroposphericDelay_getParametersDrivers(t_FixedTroposphericDelay *self);
          static PyObject *t_FixedTroposphericDelay_pathDelay(t_FixedTroposphericDelay *self, PyObject *args);
          static PyObject *t_FixedTroposphericDelay_get__defaultModel(t_FixedTroposphericDelay *self, void *data);
          static PyObject *t_FixedTroposphericDelay_get__parametersDrivers(t_FixedTroposphericDelay *self, void *data);
          static PyGetSetDef t_FixedTroposphericDelay__fields_[] = {
            DECLARE_GET_FIELD(t_FixedTroposphericDelay, defaultModel),
            DECLARE_GET_FIELD(t_FixedTroposphericDelay, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FixedTroposphericDelay__methods_[] = {
            DECLARE_METHOD(t_FixedTroposphericDelay, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, getDefaultModel, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_FixedTroposphericDelay, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FixedTroposphericDelay)[] = {
            { Py_tp_methods, t_FixedTroposphericDelay__methods_ },
            { Py_tp_init, (void *) t_FixedTroposphericDelay_init_ },
            { Py_tp_getset, t_FixedTroposphericDelay__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FixedTroposphericDelay)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FixedTroposphericDelay, t_FixedTroposphericDelay, FixedTroposphericDelay);

          void t_FixedTroposphericDelay::install(PyObject *module)
          {
            installType(&PY_TYPE(FixedTroposphericDelay), &PY_TYPE_DEF(FixedTroposphericDelay), module, "FixedTroposphericDelay", 0);
          }

          void t_FixedTroposphericDelay::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "class_", make_descriptor(FixedTroposphericDelay::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "wrapfn_", make_descriptor(t_FixedTroposphericDelay::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FixedTroposphericDelay_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FixedTroposphericDelay::initializeClass, 1)))
              return NULL;
            return t_FixedTroposphericDelay::wrap_Object(FixedTroposphericDelay(((t_FixedTroposphericDelay *) arg)->object.this$));
          }
          static PyObject *t_FixedTroposphericDelay_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FixedTroposphericDelay::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FixedTroposphericDelay_init_(t_FixedTroposphericDelay *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0, a1, a2));
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

          static PyObject *t_FixedTroposphericDelay_getDefaultModel(PyTypeObject *type)
          {
            FixedTroposphericDelay result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::models::earth::troposphere::FixedTroposphericDelay::getDefaultModel());
            return t_FixedTroposphericDelay::wrap_Object(result);
          }

          static PyObject *t_FixedTroposphericDelay_getParametersDrivers(t_FixedTroposphericDelay *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_FixedTroposphericDelay_pathDelay(t_FixedTroposphericDelay *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_FixedTroposphericDelay_get__defaultModel(t_FixedTroposphericDelay *self, void *data)
          {
            FixedTroposphericDelay value((jobject) NULL);
            OBJ_CALL(value = self->object.getDefaultModel());
            return t_FixedTroposphericDelay::wrap_Object(value);
          }

          static PyObject *t_FixedTroposphericDelay_get__parametersDrivers(t_FixedTroposphericDelay *self, void *data)
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
