#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *SignSemantic::class$ = NULL;
          jmethodID *SignSemantic::mids$ = NULL;
          bool SignSemantic::live$ = false;
          SignSemantic *SignSemantic::FEASIBLE_MEASUREMENT_WHEN_NEGATIVE = NULL;
          SignSemantic *SignSemantic::FEASIBLE_MEASUREMENT_WHEN_POSITIVE = NULL;

          jclass SignSemantic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/SignSemantic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_measurementIsFeasible_e18fb1101b70dcca] = env->getMethodID(cls, "measurementIsFeasible", "(D)Z");
              mids$[mid_valueOf_c42f88611e7c54b9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/generation/SignSemantic;");
              mids$[mid_values_fcc2e800e0a523b2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/generation/SignSemantic;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FEASIBLE_MEASUREMENT_WHEN_NEGATIVE = new SignSemantic(env->getStaticObjectField(cls, "FEASIBLE_MEASUREMENT_WHEN_NEGATIVE", "Lorg/orekit/estimation/measurements/generation/SignSemantic;"));
              FEASIBLE_MEASUREMENT_WHEN_POSITIVE = new SignSemantic(env->getStaticObjectField(cls, "FEASIBLE_MEASUREMENT_WHEN_POSITIVE", "Lorg/orekit/estimation/measurements/generation/SignSemantic;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean SignSemantic::measurementIsFeasible(jdouble a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_measurementIsFeasible_e18fb1101b70dcca], a0);
          }

          SignSemantic SignSemantic::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SignSemantic(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c42f88611e7c54b9], a0.this$));
          }

          JArray< SignSemantic > SignSemantic::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SignSemantic >(env->callStaticObjectMethod(cls, mids$[mid_values_fcc2e800e0a523b2]));
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
          static PyObject *t_SignSemantic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SignSemantic_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SignSemantic_of_(t_SignSemantic *self, PyObject *args);
          static PyObject *t_SignSemantic_measurementIsFeasible(t_SignSemantic *self, PyObject *arg);
          static PyObject *t_SignSemantic_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SignSemantic_values(PyTypeObject *type);
          static PyObject *t_SignSemantic_get__parameters_(t_SignSemantic *self, void *data);
          static PyGetSetDef t_SignSemantic__fields_[] = {
            DECLARE_GET_FIELD(t_SignSemantic, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SignSemantic__methods_[] = {
            DECLARE_METHOD(t_SignSemantic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, of_, METH_VARARGS),
            DECLARE_METHOD(t_SignSemantic, measurementIsFeasible, METH_O),
            DECLARE_METHOD(t_SignSemantic, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SignSemantic)[] = {
            { Py_tp_methods, t_SignSemantic__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SignSemantic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SignSemantic)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SignSemantic, t_SignSemantic, SignSemantic);
          PyObject *t_SignSemantic::wrap_Object(const SignSemantic& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SignSemantic::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SignSemantic *self = (t_SignSemantic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SignSemantic::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SignSemantic::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SignSemantic *self = (t_SignSemantic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SignSemantic::install(PyObject *module)
          {
            installType(&PY_TYPE(SignSemantic), &PY_TYPE_DEF(SignSemantic), module, "SignSemantic", 0);
          }

          void t_SignSemantic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "class_", make_descriptor(SignSemantic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "wrapfn_", make_descriptor(t_SignSemantic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "boxfn_", make_descriptor(boxObject));
            env->getClass(SignSemantic::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "FEASIBLE_MEASUREMENT_WHEN_NEGATIVE", make_descriptor(t_SignSemantic::wrap_Object(*SignSemantic::FEASIBLE_MEASUREMENT_WHEN_NEGATIVE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "FEASIBLE_MEASUREMENT_WHEN_POSITIVE", make_descriptor(t_SignSemantic::wrap_Object(*SignSemantic::FEASIBLE_MEASUREMENT_WHEN_POSITIVE)));
          }

          static PyObject *t_SignSemantic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SignSemantic::initializeClass, 1)))
              return NULL;
            return t_SignSemantic::wrap_Object(SignSemantic(((t_SignSemantic *) arg)->object.this$));
          }
          static PyObject *t_SignSemantic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SignSemantic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SignSemantic_of_(t_SignSemantic *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SignSemantic_measurementIsFeasible(t_SignSemantic *self, PyObject *arg)
          {
            jdouble a0;
            jboolean result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.measurementIsFeasible(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "measurementIsFeasible", arg);
            return NULL;
          }

          static PyObject *t_SignSemantic_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SignSemantic result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::generation::SignSemantic::valueOf(a0));
              return t_SignSemantic::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SignSemantic_values(PyTypeObject *type)
          {
            JArray< SignSemantic > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::estimation::measurements::generation::SignSemantic::values());
            return JArray<jobject>(result.this$).wrap(t_SignSemantic::wrap_jobject);
          }
          static PyObject *t_SignSemantic_get__parameters_(t_SignSemantic *self, void *data)
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
#include "org/orekit/propagation/events/FieldLongitudeCrossingDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldLongitudeCrossingDetector::class$ = NULL;
        jmethodID *FieldLongitudeCrossingDetector::mids$ = NULL;
        bool FieldLongitudeCrossingDetector::live$ = false;

        jclass FieldLongitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldLongitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_78b88d9ac962dac0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_5173509e6f716b64] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBody_940814a1dcab100a] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLongitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_9b4728e423e80b8f] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldLongitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldLongitudeCrossingDetector::FieldLongitudeCrossingDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_78b88d9ac962dac0, a0.this$, a1.this$, a2)) {}

        FieldLongitudeCrossingDetector::FieldLongitudeCrossingDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5173509e6f716b64, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldLongitudeCrossingDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::orekit::bodies::OneAxisEllipsoid FieldLongitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_940814a1dcab100a]));
        }

        jdouble FieldLongitudeCrossingDetector::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_456d9a2f64d6b28d]);
        }

        void FieldLongitudeCrossingDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
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
    namespace propagation {
      namespace events {
        static PyObject *t_FieldLongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldLongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldLongitudeCrossingDetector_of_(t_FieldLongitudeCrossingDetector *self, PyObject *args);
        static int t_FieldLongitudeCrossingDetector_init_(t_FieldLongitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldLongitudeCrossingDetector_g(t_FieldLongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_FieldLongitudeCrossingDetector_getBody(t_FieldLongitudeCrossingDetector *self);
        static PyObject *t_FieldLongitudeCrossingDetector_getLongitude(t_FieldLongitudeCrossingDetector *self);
        static PyObject *t_FieldLongitudeCrossingDetector_init(t_FieldLongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_FieldLongitudeCrossingDetector_get__body(t_FieldLongitudeCrossingDetector *self, void *data);
        static PyObject *t_FieldLongitudeCrossingDetector_get__longitude(t_FieldLongitudeCrossingDetector *self, void *data);
        static PyObject *t_FieldLongitudeCrossingDetector_get__parameters_(t_FieldLongitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_FieldLongitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldLongitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_FieldLongitudeCrossingDetector, longitude),
          DECLARE_GET_FIELD(t_FieldLongitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldLongitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, getLongitude, METH_NOARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldLongitudeCrossingDetector)[] = {
          { Py_tp_methods, t_FieldLongitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_FieldLongitudeCrossingDetector_init_ },
          { Py_tp_getset, t_FieldLongitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldLongitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldLongitudeCrossingDetector, t_FieldLongitudeCrossingDetector, FieldLongitudeCrossingDetector);
        PyObject *t_FieldLongitudeCrossingDetector::wrap_Object(const FieldLongitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldLongitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldLongitudeCrossingDetector *self = (t_FieldLongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldLongitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldLongitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldLongitudeCrossingDetector *self = (t_FieldLongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldLongitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldLongitudeCrossingDetector), &PY_TYPE_DEF(FieldLongitudeCrossingDetector), module, "FieldLongitudeCrossingDetector", 0);
        }

        void t_FieldLongitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLongitudeCrossingDetector), "class_", make_descriptor(FieldLongitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLongitudeCrossingDetector), "wrapfn_", make_descriptor(t_FieldLongitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLongitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldLongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldLongitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_FieldLongitudeCrossingDetector::wrap_Object(FieldLongitudeCrossingDetector(((t_FieldLongitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldLongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldLongitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldLongitudeCrossingDetector_of_(t_FieldLongitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldLongitudeCrossingDetector_init_(t_FieldLongitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
              jdouble a2;
              FieldLongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::hipparchus::Field::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldLongitudeCrossingDetector(a0, a1, a2));
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
              FieldLongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "KKkD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
              {
                INT_CALL(object = FieldLongitudeCrossingDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldLongitudeCrossingDetector_g(t_FieldLongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldLongitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_getBody(t_FieldLongitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_getLongitude(t_FieldLongitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_init(t_FieldLongitudeCrossingDetector *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldLongitudeCrossingDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldLongitudeCrossingDetector_get__parameters_(t_FieldLongitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldLongitudeCrossingDetector_get__body(t_FieldLongitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_get__longitude(t_FieldLongitudeCrossingDetector *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/ConstantThrustDirectionProvider.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ConstantThrustDirectionProvider::class$ = NULL;
          jmethodID *ConstantThrustDirectionProvider::mids$ = NULL;
          bool ConstantThrustDirectionProvider::live$ = false;

          jclass ConstantThrustDirectionProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ConstantThrustDirectionProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a94622407b723689] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_computeThrustDirection_00b397d023000862] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConstantThrustDirectionProvider::ConstantThrustDirectionProvider(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a94622407b723689, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustDirectionProvider::computeThrustDirection(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_computeThrustDirection_00b397d023000862], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_ConstantThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConstantThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ConstantThrustDirectionProvider_init_(t_ConstantThrustDirectionProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConstantThrustDirectionProvider_computeThrustDirection(t_ConstantThrustDirectionProvider *self, PyObject *args);

          static PyMethodDef t_ConstantThrustDirectionProvider__methods_[] = {
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, computeThrustDirection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConstantThrustDirectionProvider)[] = {
            { Py_tp_methods, t_ConstantThrustDirectionProvider__methods_ },
            { Py_tp_init, (void *) t_ConstantThrustDirectionProvider_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConstantThrustDirectionProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ConstantThrustDirectionProvider, t_ConstantThrustDirectionProvider, ConstantThrustDirectionProvider);

          void t_ConstantThrustDirectionProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ConstantThrustDirectionProvider), &PY_TYPE_DEF(ConstantThrustDirectionProvider), module, "ConstantThrustDirectionProvider", 0);
          }

          void t_ConstantThrustDirectionProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "class_", make_descriptor(ConstantThrustDirectionProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "wrapfn_", make_descriptor(t_ConstantThrustDirectionProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConstantThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConstantThrustDirectionProvider::initializeClass, 1)))
              return NULL;
            return t_ConstantThrustDirectionProvider::wrap_Object(ConstantThrustDirectionProvider(((t_ConstantThrustDirectionProvider *) arg)->object.this$));
          }
          static PyObject *t_ConstantThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConstantThrustDirectionProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ConstantThrustDirectionProvider_init_(t_ConstantThrustDirectionProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ConstantThrustDirectionProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = ConstantThrustDirectionProvider(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ConstantThrustDirectionProvider_computeThrustDirection(t_ConstantThrustDirectionProvider *self, PyObject *args)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.computeThrustDirection(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeThrustDirection", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ParameterConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ParameterConfiguration::class$ = NULL;
      jmethodID *ParameterConfiguration::mids$ = NULL;
      bool ParameterConfiguration::live$ = false;

      jclass ParameterConfiguration::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ParameterConfiguration");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getHP_456d9a2f64d6b28d] = env->getMethodID(cls, "getHP", "()D");
          mids$[mid_getParameterName_0090f7797e403f43] = env->getMethodID(cls, "getParameterName", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParameterConfiguration::getHP() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHP_456d9a2f64d6b28d]);
      }

      ::java::lang::String ParameterConfiguration::getParameterName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getParameterName_0090f7797e403f43]));
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
      static PyObject *t_ParameterConfiguration_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterConfiguration_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterConfiguration_getHP(t_ParameterConfiguration *self);
      static PyObject *t_ParameterConfiguration_getParameterName(t_ParameterConfiguration *self);
      static PyObject *t_ParameterConfiguration_get__hP(t_ParameterConfiguration *self, void *data);
      static PyObject *t_ParameterConfiguration_get__parameterName(t_ParameterConfiguration *self, void *data);
      static PyGetSetDef t_ParameterConfiguration__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterConfiguration, hP),
        DECLARE_GET_FIELD(t_ParameterConfiguration, parameterName),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterConfiguration__methods_[] = {
        DECLARE_METHOD(t_ParameterConfiguration, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterConfiguration, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterConfiguration, getHP, METH_NOARGS),
        DECLARE_METHOD(t_ParameterConfiguration, getParameterName, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterConfiguration)[] = {
        { Py_tp_methods, t_ParameterConfiguration__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ParameterConfiguration__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterConfiguration)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterConfiguration, t_ParameterConfiguration, ParameterConfiguration);

      void t_ParameterConfiguration::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterConfiguration), &PY_TYPE_DEF(ParameterConfiguration), module, "ParameterConfiguration", 0);
      }

      void t_ParameterConfiguration::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "class_", make_descriptor(ParameterConfiguration::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "wrapfn_", make_descriptor(t_ParameterConfiguration::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterConfiguration_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterConfiguration::initializeClass, 1)))
          return NULL;
        return t_ParameterConfiguration::wrap_Object(ParameterConfiguration(((t_ParameterConfiguration *) arg)->object.this$));
      }
      static PyObject *t_ParameterConfiguration_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterConfiguration::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterConfiguration_getHP(t_ParameterConfiguration *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHP());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterConfiguration_getParameterName(t_ParameterConfiguration *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getParameterName());
        return j2p(result);
      }

      static PyObject *t_ParameterConfiguration_get__hP(t_ParameterConfiguration *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHP());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ParameterConfiguration_get__parameterName(t_ParameterConfiguration *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getParameterName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *RTNCovarianceWriter::class$ = NULL;
            jmethodID *RTNCovarianceWriter::mids$ = NULL;
            bool RTNCovarianceWriter::live$ = false;

            jclass RTNCovarianceWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/RTNCovarianceWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
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
            static PyObject *t_RTNCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_RTNCovarianceWriter__methods_[] = {
              DECLARE_METHOD(t_RTNCovarianceWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RTNCovarianceWriter)[] = {
              { Py_tp_methods, t_RTNCovarianceWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RTNCovarianceWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(RTNCovarianceWriter, t_RTNCovarianceWriter, RTNCovarianceWriter);

            void t_RTNCovarianceWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(RTNCovarianceWriter), &PY_TYPE_DEF(RTNCovarianceWriter), module, "RTNCovarianceWriter", 0);
            }

            void t_RTNCovarianceWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "class_", make_descriptor(RTNCovarianceWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "wrapfn_", make_descriptor(t_RTNCovarianceWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RTNCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RTNCovarianceWriter::initializeClass, 1)))
                return NULL;
              return t_RTNCovarianceWriter::wrap_Object(RTNCovarianceWriter(((t_RTNCovarianceWriter *) arg)->object.this$));
            }
            static PyObject *t_RTNCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RTNCovarianceWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *AbstractSubHyperplane::class$ = NULL;
        jmethodID *AbstractSubHyperplane::mids$ = NULL;
        bool AbstractSubHyperplane::live$ = false;

        jclass AbstractSubHyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/AbstractSubHyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_applyTransform_d2eaffdc1cfb6e14] = env->getMethodID(cls, "applyTransform", "(Lorg/hipparchus/geometry/partitioning/Transform;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_copySelf_3351e843c28e5f5f] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_getHyperplane_e829aeefe0096202] = env->getMethodID(cls, "getHyperplane", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_getRemainingRegion_9552c312bc09a7e5] = env->getMethodID(cls, "getRemainingRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getSize_456d9a2f64d6b28d] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_reunite_58a0854ec6d46960] = env->getMethodID(cls, "reunite", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_split_3b0163aa85fdaa47] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
            mids$[mid_buildNew_3227314555d80cc9] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractSubHyperplane AbstractSubHyperplane::applyTransform(const ::org::hipparchus::geometry::partitioning::Transform & a0) const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_applyTransform_d2eaffdc1cfb6e14], a0.this$));
        }

        AbstractSubHyperplane AbstractSubHyperplane::copySelf() const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_3351e843c28e5f5f]));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane AbstractSubHyperplane::getHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_getHyperplane_e829aeefe0096202]));
        }

        ::org::hipparchus::geometry::partitioning::Region AbstractSubHyperplane::getRemainingRegion() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_getRemainingRegion_9552c312bc09a7e5]));
        }

        jdouble AbstractSubHyperplane::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_456d9a2f64d6b28d]);
        }

        jboolean AbstractSubHyperplane::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
        }

        AbstractSubHyperplane AbstractSubHyperplane::reunite(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_reunite_58a0854ec6d46960], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane AbstractSubHyperplane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_3b0163aa85fdaa47], a0.this$));
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
        static PyObject *t_AbstractSubHyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_of_(t_AbstractSubHyperplane *self, PyObject *args);
        static PyObject *t_AbstractSubHyperplane_applyTransform(t_AbstractSubHyperplane *self, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_copySelf(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_getHyperplane(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_getRemainingRegion(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_getSize(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_isEmpty(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_reunite(t_AbstractSubHyperplane *self, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_split(t_AbstractSubHyperplane *self, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_get__empty(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__hyperplane(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__remainingRegion(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__size(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__parameters_(t_AbstractSubHyperplane *self, void *data);
        static PyGetSetDef t_AbstractSubHyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, empty),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, hyperplane),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, remainingRegion),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, size),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractSubHyperplane__methods_[] = {
          DECLARE_METHOD(t_AbstractSubHyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractSubHyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractSubHyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, applyTransform, METH_O),
          DECLARE_METHOD(t_AbstractSubHyperplane, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, getHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, getRemainingRegion, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, getSize, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, isEmpty, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, reunite, METH_O),
          DECLARE_METHOD(t_AbstractSubHyperplane, split, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractSubHyperplane)[] = {
          { Py_tp_methods, t_AbstractSubHyperplane__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractSubHyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractSubHyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractSubHyperplane, t_AbstractSubHyperplane, AbstractSubHyperplane);
        PyObject *t_AbstractSubHyperplane::wrap_Object(const AbstractSubHyperplane& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractSubHyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractSubHyperplane *self = (t_AbstractSubHyperplane *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AbstractSubHyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractSubHyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractSubHyperplane *self = (t_AbstractSubHyperplane *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AbstractSubHyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractSubHyperplane), &PY_TYPE_DEF(AbstractSubHyperplane), module, "AbstractSubHyperplane", 0);
        }

        void t_AbstractSubHyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSubHyperplane), "class_", make_descriptor(AbstractSubHyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSubHyperplane), "wrapfn_", make_descriptor(t_AbstractSubHyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSubHyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractSubHyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractSubHyperplane::initializeClass, 1)))
            return NULL;
          return t_AbstractSubHyperplane::wrap_Object(AbstractSubHyperplane(((t_AbstractSubHyperplane *) arg)->object.this$));
        }
        static PyObject *t_AbstractSubHyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractSubHyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractSubHyperplane_of_(t_AbstractSubHyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractSubHyperplane_applyTransform(t_AbstractSubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Transform a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Transform::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Transform::parameters_))
          {
            OBJ_CALL(result = self->object.applyTransform(a0));
            return t_AbstractSubHyperplane::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "applyTransform", arg);
          return NULL;
        }

        static PyObject *t_AbstractSubHyperplane_copySelf(t_AbstractSubHyperplane *self)
        {
          AbstractSubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_AbstractSubHyperplane::wrap_Object(result, self->parameters[0], self->parameters[1]);
        }

        static PyObject *t_AbstractSubHyperplane_getHyperplane(t_AbstractSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractSubHyperplane_getRemainingRegion(t_AbstractSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
          OBJ_CALL(result = self->object.getRemainingRegion());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractSubHyperplane_getSize(t_AbstractSubHyperplane *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractSubHyperplane_isEmpty(t_AbstractSubHyperplane *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEmpty());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractSubHyperplane_reunite(t_AbstractSubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.reunite(a0));
            return t_AbstractSubHyperplane::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "reunite", arg);
          return NULL;
        }

        static PyObject *t_AbstractSubHyperplane_split(t_AbstractSubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.split(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "split", arg);
          return NULL;
        }
        static PyObject *t_AbstractSubHyperplane_get__parameters_(t_AbstractSubHyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractSubHyperplane_get__empty(t_AbstractSubHyperplane *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractSubHyperplane_get__hyperplane(t_AbstractSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(value);
        }

        static PyObject *t_AbstractSubHyperplane_get__remainingRegion(t_AbstractSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Region value((jobject) NULL);
          OBJ_CALL(value = self->object.getRemainingRegion());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(value);
        }

        static PyObject *t_AbstractSubHyperplane_get__size(t_AbstractSubHyperplane *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/ContinuedFraction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ContinuedFraction::class$ = NULL;
      jmethodID *ContinuedFraction::mids$ = NULL;
      bool ContinuedFraction::live$ = false;

      jclass ContinuedFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ContinuedFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_0ba5fed9597b693e] = env->getMethodID(cls, "evaluate", "(D)D");
          mids$[mid_evaluate_824133ce4aec3505] = env->getMethodID(cls, "evaluate", "(DD)D");
          mids$[mid_evaluate_bcad94b64f1e2dd8] = env->getMethodID(cls, "evaluate", "(DI)D");
          mids$[mid_evaluate_76e9328ecbbb348d] = env->getMethodID(cls, "evaluate", "(DDI)D");
          mids$[mid_getA_31332242d1624d2c] = env->getMethodID(cls, "getA", "(ID)D");
          mids$[mid_getB_31332242d1624d2c] = env->getMethodID(cls, "getB", "(ID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ContinuedFraction::evaluate(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_0ba5fed9597b693e], a0);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_824133ce4aec3505], a0, a1);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_bcad94b64f1e2dd8], a0, a1);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jdouble a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_76e9328ecbbb348d], a0, a1, a2);
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
      static PyObject *t_ContinuedFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ContinuedFraction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ContinuedFraction_evaluate(t_ContinuedFraction *self, PyObject *args);

      static PyMethodDef t_ContinuedFraction__methods_[] = {
        DECLARE_METHOD(t_ContinuedFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ContinuedFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ContinuedFraction, evaluate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ContinuedFraction)[] = {
        { Py_tp_methods, t_ContinuedFraction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ContinuedFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ContinuedFraction, t_ContinuedFraction, ContinuedFraction);

      void t_ContinuedFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(ContinuedFraction), &PY_TYPE_DEF(ContinuedFraction), module, "ContinuedFraction", 0);
      }

      void t_ContinuedFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "class_", make_descriptor(ContinuedFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "wrapfn_", make_descriptor(t_ContinuedFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ContinuedFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ContinuedFraction::initializeClass, 1)))
          return NULL;
        return t_ContinuedFraction::wrap_Object(ContinuedFraction(((t_ContinuedFraction *) arg)->object.this$));
      }
      static PyObject *t_ContinuedFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ContinuedFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ContinuedFraction_evaluate(t_ContinuedFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.evaluate(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldArrayDictionary::class$ = NULL;
      jmethodID *FieldArrayDictionary::mids$ = NULL;
      bool FieldArrayDictionary::live$ = false;

      jclass FieldArrayDictionary::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldArrayDictionary");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_a69d58691b2f6a42] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_6967bdadd6bbd212] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/util/Map;)V");
          mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_get_7ff62b68d24a340b] = env->getMethodID(cls, "get", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getData_a6156df500549a58] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
          mids$[mid_getEntry_9a6d30d927000ad0] = env->getMethodID(cls, "getEntry", "(Ljava/lang/String;)Lorg/orekit/utils/FieldArrayDictionary$Entry;");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_put_f158fe1c5def0235] = env->getMethodID(cls, "put", "(Ljava/lang/String;[D)V");
          mids$[mid_put_3bfcb5213d619b28] = env->getMethodID(cls, "put", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_putAll_bf3d4719370f451d] = env->getMethodID(cls, "putAll", "(Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_putAll_8b4e3987d7532731] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
          mids$[mid_remove_6b161f495ea569b8] = env->getMethodID(cls, "remove", "(Ljava/lang/String;)Z");
          mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
          mids$[mid_toMap_d6753b7055940a54] = env->getMethodID(cls, "toMap", "()Ljava/util/Map;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_unmodifiableView_a517063e6ce1cd85] = env->getMethodID(cls, "unmodifiableView", "()Lorg/orekit/utils/FieldArrayDictionary;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a69d58691b2f6a42, a0.this$, a1)) {}

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0, const ::java::util::Map & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6967bdadd6bbd212, a0.this$, a1.this$)) {}

      void FieldArrayDictionary::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldArrayDictionary::get$(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_get_7ff62b68d24a340b], a0.this$));
      }

      ::java::util::List FieldArrayDictionary::getData() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_a6156df500549a58]));
      }

      ::org::orekit::utils::FieldArrayDictionary$Entry FieldArrayDictionary::getEntry(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::FieldArrayDictionary$Entry(env->callObjectMethod(this$, mids$[mid_getEntry_9a6d30d927000ad0], a0.this$));
      }

      ::org::hipparchus::Field FieldArrayDictionary::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
      }

      void FieldArrayDictionary::put(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_f158fe1c5def0235], a0.this$, a1.this$);
      }

      void FieldArrayDictionary::put(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_3bfcb5213d619b28], a0.this$, a1.this$);
      }

      void FieldArrayDictionary::putAll(const FieldArrayDictionary & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_bf3d4719370f451d], a0.this$);
      }

      void FieldArrayDictionary::putAll(const ::java::util::Map & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_8b4e3987d7532731], a0.this$);
      }

      jboolean FieldArrayDictionary::remove(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_remove_6b161f495ea569b8], a0.this$);
      }

      jint FieldArrayDictionary::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
      }

      ::java::util::Map FieldArrayDictionary::toMap() const
      {
        return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_toMap_d6753b7055940a54]));
      }

      ::java::lang::String FieldArrayDictionary::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      FieldArrayDictionary FieldArrayDictionary::unmodifiableView() const
      {
        return FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_unmodifiableView_a517063e6ce1cd85]));
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
      static PyObject *t_FieldArrayDictionary_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_of_(t_FieldArrayDictionary *self, PyObject *args);
      static int t_FieldArrayDictionary_init_(t_FieldArrayDictionary *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldArrayDictionary_clear(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_get(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_getData(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_getEntry(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_getField(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_put(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_putAll(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_remove(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_size(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_toMap(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_toString(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_unmodifiableView(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_get__data(t_FieldArrayDictionary *self, void *data);
      static PyObject *t_FieldArrayDictionary_get__field(t_FieldArrayDictionary *self, void *data);
      static PyObject *t_FieldArrayDictionary_get__parameters_(t_FieldArrayDictionary *self, void *data);
      static PyGetSetDef t_FieldArrayDictionary__fields_[] = {
        DECLARE_GET_FIELD(t_FieldArrayDictionary, data),
        DECLARE_GET_FIELD(t_FieldArrayDictionary, field),
        DECLARE_GET_FIELD(t_FieldArrayDictionary, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldArrayDictionary__methods_[] = {
        DECLARE_METHOD(t_FieldArrayDictionary, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, clear, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, get, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, getData, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, getEntry, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, put, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, putAll, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, remove, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, size, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, toMap, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, unmodifiableView, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldArrayDictionary)[] = {
        { Py_tp_methods, t_FieldArrayDictionary__methods_ },
        { Py_tp_init, (void *) t_FieldArrayDictionary_init_ },
        { Py_tp_getset, t_FieldArrayDictionary__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldArrayDictionary)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldArrayDictionary, t_FieldArrayDictionary, FieldArrayDictionary);
      PyObject *t_FieldArrayDictionary::wrap_Object(const FieldArrayDictionary& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary *self = (t_FieldArrayDictionary *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldArrayDictionary::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary *self = (t_FieldArrayDictionary *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldArrayDictionary::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldArrayDictionary), &PY_TYPE_DEF(FieldArrayDictionary), module, "FieldArrayDictionary", 0);
      }

      void t_FieldArrayDictionary::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "class_", make_descriptor(FieldArrayDictionary::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "wrapfn_", make_descriptor(t_FieldArrayDictionary::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldArrayDictionary_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldArrayDictionary::initializeClass, 1)))
          return NULL;
        return t_FieldArrayDictionary::wrap_Object(FieldArrayDictionary(((t_FieldArrayDictionary *) arg)->object.this$));
      }
      static PyObject *t_FieldArrayDictionary_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldArrayDictionary::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldArrayDictionary_of_(t_FieldArrayDictionary *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldArrayDictionary_init_(t_FieldArrayDictionary *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldArrayDictionary(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldArrayDictionary(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::java::util::Map::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              INT_CALL(object = FieldArrayDictionary(a0, a1));
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

      static PyObject *t_FieldArrayDictionary_clear(t_FieldArrayDictionary *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldArrayDictionary_get(t_FieldArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_getData(t_FieldArrayDictionary *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldArrayDictionary_getEntry(t_FieldArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::FieldArrayDictionary$Entry result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return ::org::orekit::utils::t_FieldArrayDictionary$Entry::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_getField(t_FieldArrayDictionary *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldArrayDictionary_put(t_FieldArrayDictionary *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);

            if (!parseArgs(args, "s[D", &a0, &a1))
            {
              OBJ_CALL(self->object.put(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.put(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_putAll(t_FieldArrayDictionary *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldArrayDictionary a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", FieldArrayDictionary::initializeClass, &a0, &p0, t_FieldArrayDictionary::parameters_))
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

      static PyObject *t_FieldArrayDictionary_remove(t_FieldArrayDictionary *self, PyObject *arg)
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

      static PyObject *t_FieldArrayDictionary_size(t_FieldArrayDictionary *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldArrayDictionary_toMap(t_FieldArrayDictionary *self)
      {
        ::java::util::Map result((jobject) NULL);
        OBJ_CALL(result = self->object.toMap());
        return ::java::util::t_Map::wrap_Object(result);
      }

      static PyObject *t_FieldArrayDictionary_toString(t_FieldArrayDictionary *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldArrayDictionary), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldArrayDictionary_unmodifiableView(t_FieldArrayDictionary *self)
      {
        FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.unmodifiableView());
        return t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldArrayDictionary_get__parameters_(t_FieldArrayDictionary *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldArrayDictionary_get__data(t_FieldArrayDictionary *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldArrayDictionary_get__field(t_FieldArrayDictionary *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
              mids$[mid_valueOf_26b724eb84f822a9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OdMethodType;");
              mids$[mid_values_12bd32325645429e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OdMethodType;");

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
            return OdMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_26b724eb84f822a9], a0.this$));
          }

          JArray< OdMethodType > OdMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OdMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_12bd32325645429e]));
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
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *OpmParser::class$ = NULL;
              jmethodID *OpmParser::mids$ = NULL;
              bool OpmParser::live$ = false;

              jclass OpmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/OpmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_ff2433ba9a36d686] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/opm/Opm;");
                  mids$[mid_finalizeData_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_720b26b998d380f3] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_e470b6d9e0d979db] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_e470b6d9e0d979db] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_e470b6d9e0d979db] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_e470b6d9e0d979db] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Opm OpmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Opm(env->callObjectMethod(this$, mids$[mid_build_ff2433ba9a36d686]));
              }

              jboolean OpmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_e470b6d9e0d979db]);
              }

              jboolean OpmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_e470b6d9e0d979db]);
              }

              jboolean OpmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_e470b6d9e0d979db]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OpmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_720b26b998d380f3]));
              }

              ::java::util::Map OpmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54]));
              }

              jboolean OpmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_e470b6d9e0d979db]);
              }

              jboolean OpmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_e470b6d9e0d979db]);
              }

              jboolean OpmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_e470b6d9e0d979db]);
              }

              jboolean OpmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_e470b6d9e0d979db]);
              }

              jboolean OpmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_e470b6d9e0d979db]);
              }

              jboolean OpmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_e470b6d9e0d979db]);
              }

              void OpmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_052c3a3464b50355], a0.this$);
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
            namespace opm {
              static PyObject *t_OpmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmParser_of_(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_build(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_getHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_getSpecialXmlElementsBuilders(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_reset(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_get__header(t_OpmParser *self, void *data);
              static PyObject *t_OpmParser_get__specialXmlElementsBuilders(t_OpmParser *self, void *data);
              static PyObject *t_OpmParser_get__parameters_(t_OpmParser *self, void *data);
              static PyGetSetDef t_OpmParser__fields_[] = {
                DECLARE_GET_FIELD(t_OpmParser, header),
                DECLARE_GET_FIELD(t_OpmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_OpmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpmParser__methods_[] = {
                DECLARE_METHOD(t_OpmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpmParser)[] = {
                { Py_tp_methods, t_OpmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OpmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OpmParser, t_OpmParser, OpmParser);
              PyObject *t_OpmParser::wrap_Object(const OpmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OpmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmParser *self = (t_OpmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OpmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OpmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmParser *self = (t_OpmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OpmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OpmParser), &PY_TYPE_DEF(OpmParser), module, "OpmParser", 0);
              }

              void t_OpmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "class_", make_descriptor(OpmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "wrapfn_", make_descriptor(t_OpmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OpmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpmParser::initializeClass, 1)))
                  return NULL;
                return t_OpmParser::wrap_Object(OpmParser(((t_OpmParser *) arg)->object.this$));
              }
              static PyObject *t_OpmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OpmParser_of_(t_OpmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OpmParser_build(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::opm::Opm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::opm::t_Opm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OpmParser_finalizeData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OpmParser_finalizeHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OpmParser_finalizeMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OpmParser_getHeader(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OpmParser_getSpecialXmlElementsBuilders(t_OpmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_OpmParser_inData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OpmParser_inHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OpmParser_inMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OpmParser_prepareData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OpmParser_prepareHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OpmParser_prepareMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OpmParser_reset(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OpmParser_get__parameters_(t_OpmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OpmParser_get__header(t_OpmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }

              static PyObject *t_OpmParser_get__specialXmlElementsBuilders(t_OpmParser *self, void *data)
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
#include "org/hipparchus/fraction/ProperFractionFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *ProperFractionFormat::class$ = NULL;
      jmethodID *ProperFractionFormat::mids$ = NULL;
      bool ProperFractionFormat::live$ = false;

      jclass ProperFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/ProperFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_695a782f9c7823f6] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_0d88283ed770bf4b] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_c19c8e97de8c2158] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/Fraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getWholeFormat_d34e2e8dd35583a0] = env->getMethodID(cls, "getWholeFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_7b370dc16c7b13a9] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/Fraction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ProperFractionFormat::ProperFractionFormat() : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ProperFractionFormat::ProperFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_695a782f9c7823f6, a0.this$)) {}

      ProperFractionFormat::ProperFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_0d88283ed770bf4b, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::StringBuffer ProperFractionFormat::format(const ::org::hipparchus::fraction::Fraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_c19c8e97de8c2158], a0.this$, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat ProperFractionFormat::getWholeFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getWholeFormat_d34e2e8dd35583a0]));
      }

      ::org::hipparchus::fraction::Fraction ProperFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_7b370dc16c7b13a9], a0.this$, a1.this$));
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
      static PyObject *t_ProperFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ProperFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ProperFractionFormat_init_(t_ProperFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ProperFractionFormat_format(t_ProperFractionFormat *self, PyObject *args);
      static PyObject *t_ProperFractionFormat_getWholeFormat(t_ProperFractionFormat *self);
      static PyObject *t_ProperFractionFormat_parse(t_ProperFractionFormat *self, PyObject *args);
      static PyObject *t_ProperFractionFormat_get__wholeFormat(t_ProperFractionFormat *self, void *data);
      static PyGetSetDef t_ProperFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_ProperFractionFormat, wholeFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ProperFractionFormat__methods_[] = {
        DECLARE_METHOD(t_ProperFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_ProperFractionFormat, getWholeFormat, METH_NOARGS),
        DECLARE_METHOD(t_ProperFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ProperFractionFormat)[] = {
        { Py_tp_methods, t_ProperFractionFormat__methods_ },
        { Py_tp_init, (void *) t_ProperFractionFormat_init_ },
        { Py_tp_getset, t_ProperFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ProperFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::FractionFormat),
        NULL
      };

      DEFINE_TYPE(ProperFractionFormat, t_ProperFractionFormat, ProperFractionFormat);

      void t_ProperFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(ProperFractionFormat), &PY_TYPE_DEF(ProperFractionFormat), module, "ProperFractionFormat", 0);
      }

      void t_ProperFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "class_", make_descriptor(ProperFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "wrapfn_", make_descriptor(t_ProperFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ProperFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ProperFractionFormat::initializeClass, 1)))
          return NULL;
        return t_ProperFractionFormat::wrap_Object(ProperFractionFormat(((t_ProperFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_ProperFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ProperFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ProperFractionFormat_init_(t_ProperFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ProperFractionFormat object((jobject) NULL);

            INT_CALL(object = ProperFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ProperFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = ProperFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ::java::text::NumberFormat a2((jobject) NULL);
            ProperFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ProperFractionFormat(a0, a1, a2));
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

      static PyObject *t_ProperFractionFormat_format(t_ProperFractionFormat *self, PyObject *args)
      {
        ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
        ::java::lang::StringBuffer a1((jobject) NULL);
        ::java::text::FieldPosition a2((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.format(a0, a1, a2));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_ProperFractionFormat_getWholeFormat(t_ProperFractionFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ProperFractionFormat_parse(t_ProperFractionFormat *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_ProperFractionFormat_get__wholeFormat(t_ProperFractionFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
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

          ::java::lang::Class *RelativisticJ2ClockPhaseModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockPhaseModifier::mids$ = NULL;
          bool RelativisticJ2ClockPhaseModifier::live$ = false;

          jclass RelativisticJ2ClockPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockPhaseModifier::RelativisticJ2ClockPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void RelativisticJ2ClockPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticJ2ClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockPhaseModifier_init_(t_RelativisticJ2ClockPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockPhaseModifier *self);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockPhaseModifier, t_RelativisticJ2ClockPhaseModifier, RelativisticJ2ClockPhaseModifier);

          void t_RelativisticJ2ClockPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockPhaseModifier), &PY_TYPE_DEF(RelativisticJ2ClockPhaseModifier), module, "RelativisticJ2ClockPhaseModifier", 0);
          }

          void t_RelativisticJ2ClockPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "class_", make_descriptor(RelativisticJ2ClockPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockPhaseModifier::wrap_Object(RelativisticJ2ClockPhaseModifier(((t_RelativisticJ2ClockPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockPhaseModifier_init_(t_RelativisticJ2ClockPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockPhaseModifier *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockRangeRateModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockRangeRateModifier::class$ = NULL;
          jmethodID *RelativisticClockRangeRateModifier::mids$ = NULL;
          bool RelativisticClockRangeRateModifier::live$ = false;

          jclass RelativisticClockRangeRateModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockRangeRateModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockRangeRateModifier::RelativisticClockRangeRateModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          ::java::util::List RelativisticClockRangeRateModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void RelativisticClockRangeRateModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticClockRangeRateModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockRangeRateModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockRangeRateModifier_init_(t_RelativisticClockRangeRateModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockRangeRateModifier_getParametersDrivers(t_RelativisticClockRangeRateModifier *self);
          static PyObject *t_RelativisticClockRangeRateModifier_modifyWithoutDerivatives(t_RelativisticClockRangeRateModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockRangeRateModifier_get__parametersDrivers(t_RelativisticClockRangeRateModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockRangeRateModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockRangeRateModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockRangeRateModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockRangeRateModifier)[] = {
            { Py_tp_methods, t_RelativisticClockRangeRateModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockRangeRateModifier_init_ },
            { Py_tp_getset, t_RelativisticClockRangeRateModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockRangeRateModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockRangeRateModifier, t_RelativisticClockRangeRateModifier, RelativisticClockRangeRateModifier);

          void t_RelativisticClockRangeRateModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockRangeRateModifier), &PY_TYPE_DEF(RelativisticClockRangeRateModifier), module, "RelativisticClockRangeRateModifier", 0);
          }

          void t_RelativisticClockRangeRateModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeRateModifier), "class_", make_descriptor(RelativisticClockRangeRateModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeRateModifier), "wrapfn_", make_descriptor(t_RelativisticClockRangeRateModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeRateModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockRangeRateModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockRangeRateModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockRangeRateModifier::wrap_Object(RelativisticClockRangeRateModifier(((t_RelativisticClockRangeRateModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockRangeRateModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockRangeRateModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockRangeRateModifier_init_(t_RelativisticClockRangeRateModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            RelativisticClockRangeRateModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = RelativisticClockRangeRateModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticClockRangeRateModifier_getParametersDrivers(t_RelativisticClockRangeRateModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockRangeRateModifier_modifyWithoutDerivatives(t_RelativisticClockRangeRateModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockRangeRateModifier_get__parametersDrivers(t_RelativisticClockRangeRateModifier *self, void *data)
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
#include "org/hipparchus/fitting/AbstractCurveFitter.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *AbstractCurveFitter::class$ = NULL;
      jmethodID *AbstractCurveFitter::mids$ = NULL;
      bool AbstractCurveFitter::live$ = false;

      jclass AbstractCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/AbstractCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_fit_3c96355eddc4d382] = env->getMethodID(cls, "fit", "(Ljava/util/Collection;)[D");
          mids$[mid_getProblem_23a9c25631fa37c2] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
          mids$[mid_getOptimizer_6bab6569502c5629] = env->getMethodID(cls, "getOptimizer", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractCurveFitter::AbstractCurveFitter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      JArray< jdouble > AbstractCurveFitter::fit(const ::java::util::Collection & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_fit_3c96355eddc4d382], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_AbstractCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractCurveFitter_init_(t_AbstractCurveFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractCurveFitter_fit(t_AbstractCurveFitter *self, PyObject *arg);

      static PyMethodDef t_AbstractCurveFitter__methods_[] = {
        DECLARE_METHOD(t_AbstractCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractCurveFitter, fit, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractCurveFitter)[] = {
        { Py_tp_methods, t_AbstractCurveFitter__methods_ },
        { Py_tp_init, (void *) t_AbstractCurveFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractCurveFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractCurveFitter, t_AbstractCurveFitter, AbstractCurveFitter);

      void t_AbstractCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractCurveFitter), &PY_TYPE_DEF(AbstractCurveFitter), module, "AbstractCurveFitter", 0);
      }

      void t_AbstractCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "class_", make_descriptor(AbstractCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "wrapfn_", make_descriptor(t_AbstractCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractCurveFitter::initializeClass, 1)))
          return NULL;
        return t_AbstractCurveFitter::wrap_Object(AbstractCurveFitter(((t_AbstractCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_AbstractCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractCurveFitter_init_(t_AbstractCurveFitter *self, PyObject *args, PyObject *kwds)
      {
        AbstractCurveFitter object((jobject) NULL);

        INT_CALL(object = AbstractCurveFitter());
        self->object = object;

        return 0;
      }

      static PyObject *t_AbstractCurveFitter_fit(t_AbstractCurveFitter *self, PyObject *arg)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.fit(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "fit", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Reader.h"
#include "java/io/IOException.h"
#include "java/lang/Readable.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "java/io/Writer.h"
#include "java/io/Reader.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Reader::class$ = NULL;
    jmethodID *Reader::mids$ = NULL;
    bool Reader::live$ = false;

    jclass Reader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Reader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_0a2a1ac2721c0336] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_e470b6d9e0d979db] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_nullReader_8476c88b3f0eb61c] = env->getStaticMethodID(cls, "nullReader", "()Ljava/io/Reader;");
        mids$[mid_read_f2f64475e4580546] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_eeb6c7fd19987667] = env->getMethodID(cls, "read", "([C)I");
        mids$[mid_read_a7dcb595f3e6fbfc] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_e470b6d9e0d979db] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_7ae3461a92a43152] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_955f7541fca701ab] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_transferTo_8a463814dc358597] = env->getMethodID(cls, "transferTo", "(Ljava/io/Writer;)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Reader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    void Reader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_0a2a1ac2721c0336], a0);
    }

    jboolean Reader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_e470b6d9e0d979db]);
    }

    Reader Reader::nullReader()
    {
      jclass cls = env->getClass(initializeClass);
      return Reader(env->callStaticObjectMethod(cls, mids$[mid_nullReader_8476c88b3f0eb61c]));
    }

    jint Reader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_f2f64475e4580546]);
    }

    jint Reader::read(const JArray< jchar > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_eeb6c7fd19987667], a0.this$);
    }

    jint Reader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_a7dcb595f3e6fbfc], a0.this$, a1, a2);
    }

    jboolean Reader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_e470b6d9e0d979db]);
    }

    void Reader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_7ae3461a92a43152]);
    }

    jlong Reader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_955f7541fca701ab], a0);
    }

    jlong Reader::transferTo(const ::java::io::Writer & a0) const
    {
      return env->callLongMethod(this$, mids$[mid_transferTo_8a463814dc358597], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Reader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Reader_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Reader_close(t_Reader *self);
    static PyObject *t_Reader_mark(t_Reader *self, PyObject *arg);
    static PyObject *t_Reader_markSupported(t_Reader *self);
    static PyObject *t_Reader_nullReader(PyTypeObject *type);
    static PyObject *t_Reader_read(t_Reader *self, PyObject *args);
    static PyObject *t_Reader_ready(t_Reader *self);
    static PyObject *t_Reader_reset(t_Reader *self);
    static PyObject *t_Reader_skip(t_Reader *self, PyObject *arg);
    static PyObject *t_Reader_transferTo(t_Reader *self, PyObject *arg);

    static PyMethodDef t_Reader__methods_[] = {
      DECLARE_METHOD(t_Reader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Reader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Reader, close, METH_NOARGS),
      DECLARE_METHOD(t_Reader, mark, METH_O),
      DECLARE_METHOD(t_Reader, markSupported, METH_NOARGS),
      DECLARE_METHOD(t_Reader, nullReader, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Reader, read, METH_VARARGS),
      DECLARE_METHOD(t_Reader, ready, METH_NOARGS),
      DECLARE_METHOD(t_Reader, reset, METH_NOARGS),
      DECLARE_METHOD(t_Reader, skip, METH_O),
      DECLARE_METHOD(t_Reader, transferTo, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Reader)[] = {
      { Py_tp_methods, t_Reader__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Reader)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Reader, t_Reader, Reader);

    void t_Reader::install(PyObject *module)
    {
      installType(&PY_TYPE(Reader), &PY_TYPE_DEF(Reader), module, "Reader", 0);
    }

    void t_Reader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Reader), "class_", make_descriptor(Reader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Reader), "wrapfn_", make_descriptor(t_Reader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Reader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Reader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Reader::initializeClass, 1)))
        return NULL;
      return t_Reader::wrap_Object(Reader(((t_Reader *) arg)->object.this$));
    }
    static PyObject *t_Reader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Reader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Reader_close(t_Reader *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_Reader_mark(t_Reader *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "mark", arg);
      return NULL;
    }

    static PyObject *t_Reader_markSupported(t_Reader *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.markSupported());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Reader_nullReader(PyTypeObject *type)
    {
      Reader result((jobject) NULL);
      OBJ_CALL(result = ::java::io::Reader::nullReader());
      return t_Reader::wrap_Object(result);
    }

    static PyObject *t_Reader_read(t_Reader *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "read", args);
      return NULL;
    }

    static PyObject *t_Reader_ready(t_Reader *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.ready());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Reader_reset(t_Reader *self)
    {
      OBJ_CALL(self->object.reset());
      Py_RETURN_NONE;
    }

    static PyObject *t_Reader_skip(t_Reader *self, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "skip", arg);
      return NULL;
    }

    static PyObject *t_Reader_transferTo(t_Reader *self, PyObject *arg)
    {
      ::java::io::Writer a0((jobject) NULL);
      jlong result;

      if (!parseArg(arg, "k", ::java::io::Writer::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.transferTo(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "transferTo", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateTroposphericDelayModifier.h"
#include "java/util/List.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeRateTroposphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeRateTroposphericDelayModifier::mids$ = NULL;
          bool BaseRangeRateTroposphericDelayModifier::live$ = false;

          jclass BaseRangeRateTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeRateTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_rangeRateErrorTroposphericModel_79833a4daf329f8b] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeRateErrorTroposphericModel_452a588415b00924] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getTropoModel_6ee08425733fb734] = env->getMethodID(cls, "getTropoModel", "()Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeRateTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          jdouble BaseRangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_79833a4daf329f8b], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement BaseRangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_452a588415b00924], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_getParametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_BaseRangeRateTroposphericDelayModifier *self, PyObject *args);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeRateTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeRateTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeRateTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, rangeRateErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeRateTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeRateTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeRateTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeRateTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeRateTroposphericDelayModifier, t_BaseRangeRateTroposphericDelayModifier, BaseRangeRateTroposphericDelayModifier);

          void t_BaseRangeRateTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeRateTroposphericDelayModifier), &PY_TYPE_DEF(BaseRangeRateTroposphericDelayModifier), module, "BaseRangeRateTroposphericDelayModifier", 0);
          }

          void t_BaseRangeRateTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "class_", make_descriptor(BaseRangeRateTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeRateTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeRateTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeRateTroposphericDelayModifier::wrap_Object(BaseRangeRateTroposphericDelayModifier(((t_BaseRangeRateTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeRateTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_getParametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_BaseRangeRateTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK[K", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "rangeRateErrorTroposphericModel", args);
            return NULL;
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *UnnormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *UnnormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool UnnormalizedSphericalHarmonicsProvider::live$ = false;

          jclass UnnormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_onDate_d776fe8e473ad4bf] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics UnnormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_d776fe8e473ad4bf], a0.this$));
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
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_onDate(t_UnnormalizedSphericalHarmonicsProvider *self, PyObject *arg);

          static PyMethodDef t_UnnormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnnormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_UnnormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnnormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider),
            NULL
          };

          DEFINE_TYPE(UnnormalizedSphericalHarmonicsProvider, t_UnnormalizedSphericalHarmonicsProvider, UnnormalizedSphericalHarmonicsProvider);

          void t_UnnormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(UnnormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider), module, "UnnormalizedSphericalHarmonicsProvider", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "UnnormalizedSphericalHarmonics", make_descriptor(&PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics)));
          }

          void t_UnnormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "class_", make_descriptor(UnnormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_UnnormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnnormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(UnnormalizedSphericalHarmonicsProvider(((t_UnnormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnnormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_onDate(t_UnnormalizedSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/JacobianFunction.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *JacobianFunction::class$ = NULL;
        jmethodID *JacobianFunction::mids$ = NULL;
        bool JacobianFunction::live$ = false;

        jclass JacobianFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/JacobianFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3b8a45b2303a80ba] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction;)V");
            mids$[mid_value_ac05399a8b81d1af] = env->getMethodID(cls, "value", "([D)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JacobianFunction::JacobianFunction(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableVectorFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b8a45b2303a80ba, a0.this$)) {}

        JArray< JArray< jdouble > > JacobianFunction::value(const JArray< jdouble > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_ac05399a8b81d1af], a0.this$));
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
        static PyObject *t_JacobianFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_JacobianFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_JacobianFunction_init_(t_JacobianFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_JacobianFunction_value(t_JacobianFunction *self, PyObject *arg);

        static PyMethodDef t_JacobianFunction__methods_[] = {
          DECLARE_METHOD(t_JacobianFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_JacobianFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_JacobianFunction, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(JacobianFunction)[] = {
          { Py_tp_methods, t_JacobianFunction__methods_ },
          { Py_tp_init, (void *) t_JacobianFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(JacobianFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(JacobianFunction, t_JacobianFunction, JacobianFunction);

        void t_JacobianFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(JacobianFunction), &PY_TYPE_DEF(JacobianFunction), module, "JacobianFunction", 0);
        }

        void t_JacobianFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianFunction), "class_", make_descriptor(JacobianFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianFunction), "wrapfn_", make_descriptor(t_JacobianFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_JacobianFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, JacobianFunction::initializeClass, 1)))
            return NULL;
          return t_JacobianFunction::wrap_Object(JacobianFunction(((t_JacobianFunction *) arg)->object.this$));
        }
        static PyObject *t_JacobianFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, JacobianFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_JacobianFunction_init_(t_JacobianFunction *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableVectorFunction a0((jobject) NULL);
          JacobianFunction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableVectorFunction::initializeClass, &a0))
          {
            INT_CALL(object = JacobianFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_JacobianFunction_value(t_JacobianFunction *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *CssiSpaceWeatherDataLoader$LineParameters::class$ = NULL;
            jmethodID *CssiSpaceWeatherDataLoader$LineParameters::mids$ = NULL;
            bool CssiSpaceWeatherDataLoader$LineParameters::live$ = false;

            jclass CssiSpaceWeatherDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_307d0c8ed06cc17f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;[DD[DDDIDDDDD)V");
                mids$[mid_compareTo_533614488ddee224] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getApAvg_456d9a2f64d6b28d] = env->getMethodID(cls, "getApAvg", "()D");
                mids$[mid_getCtr81Adj_456d9a2f64d6b28d] = env->getMethodID(cls, "getCtr81Adj", "()D");
                mids$[mid_getCtr81Obs_456d9a2f64d6b28d] = env->getMethodID(cls, "getCtr81Obs", "()D");
                mids$[mid_getF107Adj_456d9a2f64d6b28d] = env->getMethodID(cls, "getF107Adj", "()D");
                mids$[mid_getF107Obs_456d9a2f64d6b28d] = env->getMethodID(cls, "getF107Obs", "()D");
                mids$[mid_getFluxQualifier_f2f64475e4580546] = env->getMethodID(cls, "getFluxQualifier", "()I");
                mids$[mid_getKpSum_456d9a2f64d6b28d] = env->getMethodID(cls, "getKpSum", "()D");
                mids$[mid_getLst81Adj_456d9a2f64d6b28d] = env->getMethodID(cls, "getLst81Adj", "()D");
                mids$[mid_getLst81Obs_456d9a2f64d6b28d] = env->getMethodID(cls, "getLst81Obs", "()D");
                mids$[mid_getThreeHourlyAp_7cdc325af0834901] = env->getMethodID(cls, "getThreeHourlyAp", "()[D");
                mids$[mid_getThreeHourlyAp_b772323fc98b7293] = env->getMethodID(cls, "getThreeHourlyAp", "(I)D");
                mids$[mid_getThreeHourlyKp_7cdc325af0834901] = env->getMethodID(cls, "getThreeHourlyKp", "()[D");
                mids$[mid_getThreeHourlyKp_b772323fc98b7293] = env->getMethodID(cls, "getThreeHourlyKp", "(I)D");
                mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherDataLoader$LineParameters::CssiSpaceWeatherDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, jdouble a2, const JArray< jdouble > & a3, jdouble a4, jdouble a5, jint a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters(env->newObject(initializeClass, &mids$, mid_init$_307d0c8ed06cc17f, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8, a9, a10, a11)) {}

            jint CssiSpaceWeatherDataLoader$LineParameters::compareTo(const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_533614488ddee224], a0.this$);
            }

            jboolean CssiSpaceWeatherDataLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getApAvg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApAvg_456d9a2f64d6b28d]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getCtr81Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr81Adj_456d9a2f64d6b28d]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getCtr81Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr81Obs_456d9a2f64d6b28d]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getF107Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107Adj_456d9a2f64d6b28d]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getF107Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107Obs_456d9a2f64d6b28d]);
            }

            jint CssiSpaceWeatherDataLoader$LineParameters::getFluxQualifier() const
            {
              return env->callIntMethod(this$, mids$[mid_getFluxQualifier_f2f64475e4580546]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getKpSum() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKpSum_456d9a2f64d6b28d]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getLst81Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLst81Adj_456d9a2f64d6b28d]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getLst81Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLst81Obs_456d9a2f64d6b28d]);
            }

            JArray< jdouble > CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyAp() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getThreeHourlyAp_7cdc325af0834901]));
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyAp(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyAp_b772323fc98b7293], a0);
            }

            JArray< jdouble > CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyKp() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getThreeHourlyKp_7cdc325af0834901]));
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyKp(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKp_b772323fc98b7293], a0);
            }

            jint CssiSpaceWeatherDataLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_of_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static int t_CssiSpaceWeatherDataLoader$LineParameters_init_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_compareTo(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_equals(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getApAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getFluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getKpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_hashCode(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__apAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__fluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__kpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__parameters_(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_CssiSpaceWeatherDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, apAvg),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, ctr81Adj),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, ctr81Obs),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, f107Adj),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, f107Obs),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, fluxQualifier),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, kpSum),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, lst81Adj),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, lst81Obs),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, threeHourlyAp),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, threeHourlyKp),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CssiSpaceWeatherDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, of_, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, compareTo, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, equals, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getApAvg, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getCtr81Adj, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getCtr81Obs, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getF107Adj, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getF107Obs, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getFluxQualifier, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getKpSum, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getLst81Adj, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getLst81Obs, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getThreeHourlyAp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getThreeHourlyKp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CssiSpaceWeatherDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_CssiSpaceWeatherDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) t_CssiSpaceWeatherDataLoader$LineParameters_init_ },
              { Py_tp_getset, t_CssiSpaceWeatherDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CssiSpaceWeatherDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters),
              NULL
            };

            DEFINE_TYPE(CssiSpaceWeatherDataLoader$LineParameters, t_CssiSpaceWeatherDataLoader$LineParameters, CssiSpaceWeatherDataLoader$LineParameters);
            PyObject *t_CssiSpaceWeatherDataLoader$LineParameters::wrap_Object(const CssiSpaceWeatherDataLoader$LineParameters& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader$LineParameters::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader$LineParameters *self = (t_CssiSpaceWeatherDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CssiSpaceWeatherDataLoader$LineParameters::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader$LineParameters::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader$LineParameters *self = (t_CssiSpaceWeatherDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CssiSpaceWeatherDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), &PY_TYPE_DEF(CssiSpaceWeatherDataLoader$LineParameters), module, "CssiSpaceWeatherDataLoader$LineParameters", 0);
            }

            void t_CssiSpaceWeatherDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), "class_", make_descriptor(CssiSpaceWeatherDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), "wrapfn_", make_descriptor(t_CssiSpaceWeatherDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CssiSpaceWeatherDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_CssiSpaceWeatherDataLoader$LineParameters::wrap_Object(CssiSpaceWeatherDataLoader$LineParameters(((t_CssiSpaceWeatherDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CssiSpaceWeatherDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_of_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CssiSpaceWeatherDataLoader$LineParameters_init_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              jdouble a4;
              jdouble a5;
              jint a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              jdouble a10;
              jdouble a11;
              CssiSpaceWeatherDataLoader$LineParameters object((jobject) NULL);

              if (!parseArgs(args, "k[DD[DDDIDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
              {
                INT_CALL(object = CssiSpaceWeatherDataLoader$LineParameters(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_compareTo(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters a0((jobject) NULL);
              PyTypeObject **p0;
              jint result;

              if (!parseArgs(args, "K", ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader$LineParameters::parameters_))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), (PyObject *) self, "compareTo", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_equals(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getApAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getApAvg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtr81Adj());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtr81Obs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF107Adj());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF107Obs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getFluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFluxQualifier());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getKpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getKpSum());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLst81Adj());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLst81Obs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  JArray< jdouble > result((jobject) NULL);
                  OBJ_CALL(result = self->object.getThreeHourlyAp());
                  return result.wrap();
                }
                break;
               case 1:
                {
                  jint a0;
                  jdouble result;

                  if (!parseArgs(args, "I", &a0))
                  {
                    OBJ_CALL(result = self->object.getThreeHourlyAp(a0));
                    return PyFloat_FromDouble((double) result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getThreeHourlyAp", args);
              return NULL;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  JArray< jdouble > result((jobject) NULL);
                  OBJ_CALL(result = self->object.getThreeHourlyKp());
                  return result.wrap();
                }
                break;
               case 1:
                {
                  jint a0;
                  jdouble result;

                  if (!parseArgs(args, "I", &a0))
                  {
                    OBJ_CALL(result = self->object.getThreeHourlyKp(a0));
                    return PyFloat_FromDouble((double) result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getThreeHourlyKp", args);
              return NULL;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_hashCode(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), (PyObject *) self, "hashCode", args, 2);
            }
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__parameters_(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__apAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getApAvg());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtr81Adj());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtr81Obs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF107Adj());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF107Obs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__fluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFluxQualifier());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__kpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getKpSum());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLst81Adj());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLst81Obs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getThreeHourlyAp());
              return value.wrap();
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getThreeHourlyKp());
              return value.wrap();
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileOutputStream.h"
#include "java/io/IOException.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/File.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileOutputStream::class$ = NULL;
    jmethodID *FileOutputStream::mids$ = NULL;
    bool FileOutputStream::live$ = false;

    jclass FileOutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileOutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_46e66c77c82c9a6b] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_451cf111c3bab36d] = env->getMethodID(cls, "<init>", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_cd7bcee0834329b0] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Z)V");
        mids$[mid_init$_d1dd1bdcf55f8f80] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getFD_0498b7250232ff82] = env->getMethodID(cls, "getFD", "()Ljava/io/FileDescriptor;");
        mids$[mid_write_9c4b35f0a6dc87f3] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_0a2a1ac2721c0336] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_125b1e9f043b29f8] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileOutputStream::FileOutputStream(const ::java::io::File & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_46e66c77c82c9a6b, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::io::FileDescriptor & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_451cf111c3bab36d, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::lang::String & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::io::File & a0, jboolean a1) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_cd7bcee0834329b0, a0.this$, a1)) {}

    FileOutputStream::FileOutputStream(const ::java::lang::String & a0, jboolean a1) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_d1dd1bdcf55f8f80, a0.this$, a1)) {}

    void FileOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    ::java::io::FileDescriptor FileOutputStream::getFD() const
    {
      return ::java::io::FileDescriptor(env->callObjectMethod(this$, mids$[mid_getFD_0498b7250232ff82]));
    }

    void FileOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_9c4b35f0a6dc87f3], a0.this$);
    }

    void FileOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_0a2a1ac2721c0336], a0);
    }

    void FileOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_125b1e9f043b29f8], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileOutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileOutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FileOutputStream_init_(t_FileOutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FileOutputStream_close(t_FileOutputStream *self, PyObject *args);
    static PyObject *t_FileOutputStream_getFD(t_FileOutputStream *self);
    static PyObject *t_FileOutputStream_write(t_FileOutputStream *self, PyObject *args);
    static PyObject *t_FileOutputStream_get__fD(t_FileOutputStream *self, void *data);
    static PyGetSetDef t_FileOutputStream__fields_[] = {
      DECLARE_GET_FIELD(t_FileOutputStream, fD),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FileOutputStream__methods_[] = {
      DECLARE_METHOD(t_FileOutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileOutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileOutputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_FileOutputStream, getFD, METH_NOARGS),
      DECLARE_METHOD(t_FileOutputStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileOutputStream)[] = {
      { Py_tp_methods, t_FileOutputStream__methods_ },
      { Py_tp_init, (void *) t_FileOutputStream_init_ },
      { Py_tp_getset, t_FileOutputStream__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileOutputStream)[] = {
      &PY_TYPE_DEF(::java::io::OutputStream),
      NULL
    };

    DEFINE_TYPE(FileOutputStream, t_FileOutputStream, FileOutputStream);

    void t_FileOutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(FileOutputStream), &PY_TYPE_DEF(FileOutputStream), module, "FileOutputStream", 0);
    }

    void t_FileOutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileOutputStream), "class_", make_descriptor(FileOutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileOutputStream), "wrapfn_", make_descriptor(t_FileOutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileOutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileOutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileOutputStream::initializeClass, 1)))
        return NULL;
      return t_FileOutputStream::wrap_Object(FileOutputStream(((t_FileOutputStream *) arg)->object.this$));
    }
    static PyObject *t_FileOutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileOutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FileOutputStream_init_(t_FileOutputStream *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = FileOutputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::FileDescriptor a0((jobject) NULL);
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            INT_CALL(object = FileOutputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = FileOutputStream(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::File a0((jobject) NULL);
          jboolean a1;
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = FileOutputStream(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean a1;
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "sZ", &a0, &a1))
          {
            INT_CALL(object = FileOutputStream(a0, a1));
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

    static PyObject *t_FileOutputStream_close(t_FileOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FileOutputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_FileOutputStream_getFD(t_FileOutputStream *self)
    {
      ::java::io::FileDescriptor result((jobject) NULL);
      OBJ_CALL(result = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(result);
    }

    static PyObject *t_FileOutputStream_write(t_FileOutputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
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
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(FileOutputStream), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_FileOutputStream_get__fD(t_FileOutputStream *self, void *data)
    {
      ::java::io::FileDescriptor value((jobject) NULL);
      OBJ_CALL(value = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FunctionUtils.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FunctionUtils::class$ = NULL;
      jmethodID *FunctionUtils::mids$ = NULL;
      bool FunctionUtils::live$ = false;

      jclass FunctionUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FunctionUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_3bcb41276db4e729] = env->getStaticMethodID(cls, "add", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_add_83e158309df32f6e] = env->getStaticMethodID(cls, "add", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_collector_ccfa2a1e3dda76a7] = env->getStaticMethodID(cls, "collector", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_collector_9ba5c4593e3c2af1] = env->getStaticMethodID(cls, "collector", "(Lorg/hipparchus/analysis/BivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;D)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_combine_4d9c173230ae0e4e] = env->getStaticMethodID(cls, "combine", "(Lorg/hipparchus/analysis/BivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_compose_3bcb41276db4e729] = env->getStaticMethodID(cls, "compose", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_compose_83e158309df32f6e] = env->getStaticMethodID(cls, "compose", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_derivative_d995b8d0b97f5538] = env->getStaticMethodID(cls, "derivative", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;[I)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_derivative_bbc32c89f9c311a5] = env->getStaticMethodID(cls, "derivative", "(Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;I)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_fix1stArgument_950629fba33af181] = env->getStaticMethodID(cls, "fix1stArgument", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_fix2ndArgument_950629fba33af181] = env->getStaticMethodID(cls, "fix2ndArgument", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_multiply_3bcb41276db4e729] = env->getStaticMethodID(cls, "multiply", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_multiply_83e158309df32f6e] = env->getStaticMethodID(cls, "multiply", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_sample_7b9dea3228efcc90] = env->getStaticMethodID(cls, "sample", "(Lorg/hipparchus/analysis/UnivariateFunction;DDI)[D");
          mids$[mid_toDifferentiable_5f386df000b7e6e3] = env->getStaticMethodID(cls, "toDifferentiable", "(Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_toDifferentiable_8339f4f7ed8eef9a] = env->getStaticMethodID(cls, "toDifferentiable", "(Lorg/hipparchus/analysis/MultivariateFunction;Lorg/hipparchus/analysis/MultivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::add(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_add_3bcb41276db4e729], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::add(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_add_83e158309df32f6e], a0.this$));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::collector(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_collector_ccfa2a1e3dda76a7], a0.this$, a1));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::collector(const ::org::hipparchus::analysis::BivariateFunction & a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_collector_9ba5c4593e3c2af1], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::combine(const ::org::hipparchus::analysis::BivariateFunction & a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, const ::org::hipparchus::analysis::UnivariateFunction & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_combine_4d9c173230ae0e4e], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::compose(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_compose_3bcb41276db4e729], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::compose(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_compose_83e158309df32f6e], a0.this$));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::derivative(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_derivative_d995b8d0b97f5538], a0.this$, a1.this$));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::derivative(const ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_derivative_bbc32c89f9c311a5], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::fix1stArgument(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_fix1stArgument_950629fba33af181], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::fix2ndArgument(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_fix2ndArgument_950629fba33af181], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::multiply(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_multiply_3bcb41276db4e729], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::multiply(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_multiply_83e158309df32f6e], a0.this$));
      }

      JArray< jdouble > FunctionUtils::sample(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_sample_7b9dea3228efcc90], a0.this$, a1, a2, a3));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::toDifferentiable(const ::org::hipparchus::analysis::UnivariateFunction & a0, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_toDifferentiable_5f386df000b7e6e3], a0.this$, a1.this$));
      }

      ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction FunctionUtils::toDifferentiable(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::org::hipparchus::analysis::MultivariateVectorFunction & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_toDifferentiable_8339f4f7ed8eef9a], a0.this$, a1.this$));
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
      static PyObject *t_FunctionUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FunctionUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FunctionUtils_add(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_collector(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_combine(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_compose(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_derivative(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_fix1stArgument(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_fix2ndArgument(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_multiply(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_sample(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_toDifferentiable(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_FunctionUtils__methods_[] = {
        DECLARE_METHOD(t_FunctionUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, add, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, collector, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, combine, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, compose, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, derivative, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, fix1stArgument, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, fix2ndArgument, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, multiply, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, sample, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, toDifferentiable, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FunctionUtils)[] = {
        { Py_tp_methods, t_FunctionUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FunctionUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FunctionUtils, t_FunctionUtils, FunctionUtils);

      void t_FunctionUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(FunctionUtils), &PY_TYPE_DEF(FunctionUtils), module, "FunctionUtils", 0);
      }

      void t_FunctionUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionUtils), "class_", make_descriptor(FunctionUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionUtils), "wrapfn_", make_descriptor(t_FunctionUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FunctionUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FunctionUtils::initializeClass, 1)))
          return NULL;
        return t_FunctionUtils::wrap_Object(FunctionUtils(((t_FunctionUtils *) arg)->object.this$));
      }
      static PyObject *t_FunctionUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FunctionUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FunctionUtils_add(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::add(a0));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::add(a0));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "add", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_collector(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::collector(a0, a1));
              return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::collector(a0, a1, a2));
              return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "collector", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_combine(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
        ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
        ::org::hipparchus::analysis::UnivariateFunction a2((jobject) NULL);
        ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::analysis::BivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::combine(a0, a1, a2));
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "combine", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_compose(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::compose(a0));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::compose(a0));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "compose", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_derivative(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "k[I", ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::derivative(a0, a1));
              return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::derivative(a0, a1));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "derivative", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_fix1stArgument(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
        jdouble a1;
        ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::fix1stArgument(a0, a1));
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fix1stArgument", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_fix2ndArgument(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
        jdouble a1;
        ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::fix2ndArgument(a0, a1));
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fix2ndArgument", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_multiply(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::multiply(a0));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::multiply(a0));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "multiply", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_sample(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jint a3;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "kDDI", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::sample(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "sample", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_toDifferentiable(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a1((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "k[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::toDifferentiable(a0, a1));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            ::org::hipparchus::analysis::MultivariateVectorFunction a1((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::toDifferentiable(a0, a1));
              return ::org::hipparchus::analysis::differentiation::t_MultivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "toDifferentiable", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/CarrierPhase.h"
#include "org/orekit/gnss/metric/ntrip/CarrierPhase.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *CarrierPhase::class$ = NULL;
          jmethodID *CarrierPhase::mids$ = NULL;
          bool CarrierPhase::live$ = false;
          CarrierPhase *CarrierPhase::L1 = NULL;
          CarrierPhase *CarrierPhase::L1_L2 = NULL;
          CarrierPhase *CarrierPhase::NO = NULL;

          jclass CarrierPhase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/CarrierPhase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCarrierPhase_26ed4a0a0da925b9] = env->getStaticMethodID(cls, "getCarrierPhase", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_valueOf_26ed4a0a0da925b9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_values_8e19ff084f4d0649] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              L1 = new CarrierPhase(env->getStaticObjectField(cls, "L1", "Lorg/orekit/gnss/metric/ntrip/CarrierPhase;"));
              L1_L2 = new CarrierPhase(env->getStaticObjectField(cls, "L1_L2", "Lorg/orekit/gnss/metric/ntrip/CarrierPhase;"));
              NO = new CarrierPhase(env->getStaticObjectField(cls, "NO", "Lorg/orekit/gnss/metric/ntrip/CarrierPhase;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CarrierPhase CarrierPhase::getCarrierPhase(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CarrierPhase(env->callStaticObjectMethod(cls, mids$[mid_getCarrierPhase_26ed4a0a0da925b9], a0.this$));
          }

          CarrierPhase CarrierPhase::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CarrierPhase(env->callStaticObjectMethod(cls, mids$[mid_valueOf_26ed4a0a0da925b9], a0.this$));
          }

          JArray< CarrierPhase > CarrierPhase::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CarrierPhase >(env->callStaticObjectMethod(cls, mids$[mid_values_8e19ff084f4d0649]));
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
        namespace ntrip {
          static PyObject *t_CarrierPhase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarrierPhase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarrierPhase_of_(t_CarrierPhase *self, PyObject *args);
          static PyObject *t_CarrierPhase_getCarrierPhase(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarrierPhase_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarrierPhase_values(PyTypeObject *type);
          static PyObject *t_CarrierPhase_get__parameters_(t_CarrierPhase *self, void *data);
          static PyGetSetDef t_CarrierPhase__fields_[] = {
            DECLARE_GET_FIELD(t_CarrierPhase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CarrierPhase__methods_[] = {
            DECLARE_METHOD(t_CarrierPhase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, of_, METH_VARARGS),
            DECLARE_METHOD(t_CarrierPhase, getCarrierPhase, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CarrierPhase)[] = {
            { Py_tp_methods, t_CarrierPhase__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CarrierPhase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CarrierPhase)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CarrierPhase, t_CarrierPhase, CarrierPhase);
          PyObject *t_CarrierPhase::wrap_Object(const CarrierPhase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CarrierPhase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CarrierPhase *self = (t_CarrierPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CarrierPhase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CarrierPhase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CarrierPhase *self = (t_CarrierPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CarrierPhase::install(PyObject *module)
          {
            installType(&PY_TYPE(CarrierPhase), &PY_TYPE_DEF(CarrierPhase), module, "CarrierPhase", 0);
          }

          void t_CarrierPhase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "class_", make_descriptor(CarrierPhase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "wrapfn_", make_descriptor(t_CarrierPhase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "boxfn_", make_descriptor(boxObject));
            env->getClass(CarrierPhase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "L1", make_descriptor(t_CarrierPhase::wrap_Object(*CarrierPhase::L1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "L1_L2", make_descriptor(t_CarrierPhase::wrap_Object(*CarrierPhase::L1_L2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "NO", make_descriptor(t_CarrierPhase::wrap_Object(*CarrierPhase::NO)));
          }

          static PyObject *t_CarrierPhase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CarrierPhase::initializeClass, 1)))
              return NULL;
            return t_CarrierPhase::wrap_Object(CarrierPhase(((t_CarrierPhase *) arg)->object.this$));
          }
          static PyObject *t_CarrierPhase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CarrierPhase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CarrierPhase_of_(t_CarrierPhase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CarrierPhase_getCarrierPhase(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            CarrierPhase result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::CarrierPhase::getCarrierPhase(a0));
              return t_CarrierPhase::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getCarrierPhase", arg);
            return NULL;
          }

          static PyObject *t_CarrierPhase_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CarrierPhase result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::CarrierPhase::valueOf(a0));
              return t_CarrierPhase::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CarrierPhase_values(PyTypeObject *type)
          {
            JArray< CarrierPhase > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::CarrierPhase::values());
            return JArray<jobject>(result.this$).wrap(t_CarrierPhase::wrap_jobject);
          }
          static PyObject *t_CarrierPhase_get__parameters_(t_CarrierPhase *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
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
                mids$[mid_init$_9dc2a3e0d8e9fa60] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;I)V");
                mids$[mid_getAlpha_e6d4d3215c30992a] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getB_e6d4d3215c30992a] = env->getMethodID(cls, "getB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBeta_e6d4d3215c30992a] = env->getMethodID(cls, "getBeta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getC_e6d4d3215c30992a] = env->getMethodID(cls, "getC", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
                mids$[mid_getEcc_e6d4d3215c30992a] = env->getMethodID(cls, "getEcc", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGamma_e6d4d3215c30992a] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getH_e6d4d3215c30992a] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK_e6d4d3215c30992a] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getKeplerianPeriod_e6d4d3215c30992a] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLM_e6d4d3215c30992a] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLe_e6d4d3215c30992a] = env->getMethodID(cls, "getLe", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLv_e6d4d3215c30992a] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_e6d4d3215c30992a] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOrbit_2f26cad5f478f007] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/FieldOrbit;");
                mids$[mid_getP_e6d4d3215c30992a] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getQ_e6d4d3215c30992a] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRetrogradeFactor_f2f64475e4580546] = env->getMethodID(cls, "getRetrogradeFactor", "()I");
                mids$[mid_getSma_e6d4d3215c30992a] = env->getMethodID(cls, "getSma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getVectorF_5791f80683b5227e] = env->getMethodID(cls, "getVectorF", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_getVectorG_5791f80683b5227e] = env->getMethodID(cls, "getVectorG", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_getVectorW_5791f80683b5227e] = env->getMethodID(cls, "getVectorW", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_toAuxiliaryElements_24ab54193b574fe5] = env->getMethodID(cls, "toAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldAuxiliaryElements::FieldAuxiliaryElements(const ::org::orekit::orbits::FieldOrbit & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9dc2a3e0d8e9fa60, a0.this$, a1)) {}

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getAlpha() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getBeta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBeta_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getC() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getC_e6d4d3215c30992a]));
            }

            ::org::orekit::time::FieldAbsoluteDate FieldAuxiliaryElements::getDate() const
            {
              return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_09b0a926600dfc14]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getEcc() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEcc_e6d4d3215c30992a]));
            }

            ::org::orekit::frames::Frame FieldAuxiliaryElements::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getGamma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getH() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getH_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getK() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getKeplerianPeriod() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLM() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLe() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLe_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLv() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_e6d4d3215c30992a]));
            }

            ::org::orekit::orbits::FieldOrbit FieldAuxiliaryElements::getOrbit() const
            {
              return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOrbit_2f26cad5f478f007]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getP() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getP_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getQ() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ_e6d4d3215c30992a]));
            }

            jint FieldAuxiliaryElements::getRetrogradeFactor() const
            {
              return env->callIntMethod(this$, mids$[mid_getRetrogradeFactor_f2f64475e4580546]);
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getSma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSma_e6d4d3215c30992a]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorF() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorF_5791f80683b5227e]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorG() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorG_5791f80683b5227e]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorW() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorW_5791f80683b5227e]));
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements FieldAuxiliaryElements::toAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(env->callObjectMethod(this$, mids$[mid_toAuxiliaryElements_24ab54193b574fe5]));
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
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AbstractGradientConverter::class$ = NULL;
        jmethodID *AbstractGradientConverter::mids$ = NULL;
        bool AbstractGradientConverter::live$ = false;

        jclass AbstractGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AbstractGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFreeStateParameters_f2f64475e4580546] = env->getMethodID(cls, "getFreeStateParameters", "()I");
            mids$[mid_getParameters_830639c0a621d218] = env->getMethodID(cls, "getParameters", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/utils/ParameterDriversProvider;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getParametersAtStateDate_830639c0a621d218] = env->getMethodID(cls, "getParametersAtStateDate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/utils/ParameterDriversProvider;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getState_a422d975eec2f4fb] = env->getMethodID(cls, "getState", "(Lorg/orekit/utils/ParameterDriversProvider;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_initStates_52154b94d63e10ed] = env->getMethodID(cls, "initStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_extend_209b6960e4c6fdfa] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_extend_a1fdce8979c90dfc] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_extend_dfa45db96c83f3d1] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_buildBasicGradientSpacecraftState_ae21fccff31b795f] = env->getStaticMethodID(cls, "buildBasicGradientSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/FieldSpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint AbstractGradientConverter::getFreeStateParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeStateParameters_f2f64475e4580546]);
        }

        JArray< ::org::hipparchus::analysis::differentiation::Gradient > AbstractGradientConverter::getParameters(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::utils::ParameterDriversProvider & a1) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callObjectMethod(this$, mids$[mid_getParameters_830639c0a621d218], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Gradient > AbstractGradientConverter::getParametersAtStateDate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::utils::ParameterDriversProvider & a1) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callObjectMethod(this$, mids$[mid_getParametersAtStateDate_830639c0a621d218], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState AbstractGradientConverter::getState(const ::org::orekit::utils::ParameterDriversProvider & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_a422d975eec2f4fb], a0.this$));
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
        static PyObject *t_AbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGradientConverter_getFreeStateParameters(t_AbstractGradientConverter *self);
        static PyObject *t_AbstractGradientConverter_getParameters(t_AbstractGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractGradientConverter_getParametersAtStateDate(t_AbstractGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractGradientConverter_getState(t_AbstractGradientConverter *self, PyObject *arg);
        static PyObject *t_AbstractGradientConverter_get__freeStateParameters(t_AbstractGradientConverter *self, void *data);
        static PyGetSetDef t_AbstractGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractGradientConverter, freeStateParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractGradientConverter__methods_[] = {
          DECLARE_METHOD(t_AbstractGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGradientConverter, getFreeStateParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractGradientConverter, getParameters, METH_VARARGS),
          DECLARE_METHOD(t_AbstractGradientConverter, getParametersAtStateDate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractGradientConverter, getState, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractGradientConverter)[] = {
          { Py_tp_methods, t_AbstractGradientConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractGradientConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractGradientConverter, t_AbstractGradientConverter, AbstractGradientConverter);

        void t_AbstractGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractGradientConverter), &PY_TYPE_DEF(AbstractGradientConverter), module, "AbstractGradientConverter", 0);
        }

        void t_AbstractGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGradientConverter), "class_", make_descriptor(AbstractGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGradientConverter), "wrapfn_", make_descriptor(t_AbstractGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGradientConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractGradientConverter::initializeClass, 1)))
            return NULL;
          return t_AbstractGradientConverter::wrap_Object(AbstractGradientConverter(((t_AbstractGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_AbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractGradientConverter_getFreeStateParameters(t_AbstractGradientConverter *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeStateParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractGradientConverter_getParameters(t_AbstractGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::ParameterDriversProvider a1((jobject) NULL);
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::utils::ParameterDriversProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getParameters(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getParameters", args);
          return NULL;
        }

        static PyObject *t_AbstractGradientConverter_getParametersAtStateDate(t_AbstractGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::ParameterDriversProvider a1((jobject) NULL);
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::utils::ParameterDriversProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getParametersAtStateDate(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getParametersAtStateDate", args);
          return NULL;
        }

        static PyObject *t_AbstractGradientConverter_getState(t_AbstractGradientConverter *self, PyObject *arg)
        {
          ::org::orekit::utils::ParameterDriversProvider a0((jobject) NULL);
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriversProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getState(a0));
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          PyErr_SetArgsError((PyObject *) self, "getState", arg);
          return NULL;
        }

        static PyObject *t_AbstractGradientConverter_get__freeStateParameters(t_AbstractGradientConverter *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeStateParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenType::class$ = NULL;
            jmethodID *ScreenType::mids$ = NULL;
            bool ScreenType::live$ = false;
            ScreenType *ScreenType::PC = NULL;
            ScreenType *ScreenType::PC_MAX = NULL;
            ScreenType *ScreenType::SHAPE = NULL;

            jclass ScreenType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_6a312d562e906a26] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");
                mids$[mid_values_1fc005c47b12121f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                PC = new ScreenType(env->getStaticObjectField(cls, "PC", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                PC_MAX = new ScreenType(env->getStaticObjectField(cls, "PC_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                SHAPE = new ScreenType(env->getStaticObjectField(cls, "SHAPE", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenType ScreenType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6a312d562e906a26], a0.this$));
            }

            JArray< ScreenType > ScreenType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenType >(env->callStaticObjectMethod(cls, mids$[mid_values_1fc005c47b12121f]));
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
            static PyObject *t_ScreenType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenType_of_(t_ScreenType *self, PyObject *args);
            static PyObject *t_ScreenType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenType_values(PyTypeObject *type);
            static PyObject *t_ScreenType_get__parameters_(t_ScreenType *self, void *data);
            static PyGetSetDef t_ScreenType__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenType__methods_[] = {
              DECLARE_METHOD(t_ScreenType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenType)[] = {
              { Py_tp_methods, t_ScreenType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenType, t_ScreenType, ScreenType);
            PyObject *t_ScreenType::wrap_Object(const ScreenType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenType *self = (t_ScreenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenType *self = (t_ScreenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenType::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenType), &PY_TYPE_DEF(ScreenType), module, "ScreenType", 0);
            }

            void t_ScreenType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "class_", make_descriptor(ScreenType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "wrapfn_", make_descriptor(t_ScreenType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "PC", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::PC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "PC_MAX", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::PC_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "SHAPE", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::SHAPE)));
            }

            static PyObject *t_ScreenType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenType::initializeClass, 1)))
                return NULL;
              return t_ScreenType::wrap_Object(ScreenType(((t_ScreenType *) arg)->object.this$));
            }
            static PyObject *t_ScreenType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenType_of_(t_ScreenType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenType::valueOf(a0));
                return t_ScreenType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenType_values(PyTypeObject *type)
            {
              JArray< ScreenType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenType::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenType::wrap_jobject);
            }
            static PyObject *t_ScreenType_get__parameters_(t_ScreenType *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *ObservationType::class$ = NULL;
            jmethodID *ObservationType::mids$ = NULL;
            bool ObservationType::live$ = false;
            ObservationType *ObservationType::ANGLE_1 = NULL;
            ObservationType *ObservationType::ANGLE_2 = NULL;
            ObservationType *ObservationType::CARRIER_POWER = NULL;
            ObservationType *ObservationType::CLOCK_BIAS = NULL;
            ObservationType *ObservationType::CLOCK_DRIFT = NULL;
            ObservationType *ObservationType::DOPPLER_COUNT = NULL;
            ObservationType *ObservationType::DOPPLER_INSTANTANEOUS = NULL;
            ObservationType *ObservationType::DOPPLER_INTEGRATED = NULL;
            ObservationType *ObservationType::DOR = NULL;
            ObservationType *ObservationType::MAG = NULL;
            ObservationType *ObservationType::PC_N0 = NULL;
            ObservationType *ObservationType::PRESSURE = NULL;
            ObservationType *ObservationType::PR_N0 = NULL;
            ObservationType *ObservationType::RANGE = NULL;
            ObservationType *ObservationType::RCS = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_1 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_2 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_3 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_4 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_5 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_1 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_2 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_3 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_4 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_5 = NULL;
            ObservationType *ObservationType::RHUMIDITY = NULL;
            ObservationType *ObservationType::STEC = NULL;
            ObservationType *ObservationType::TEMPERATURE = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_5 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_5 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_5 = NULL;
            ObservationType *ObservationType::TROPO_DRY = NULL;
            ObservationType *ObservationType::TROPO_WET = NULL;
            ObservationType *ObservationType::VLBI_DELAY = NULL;

            jclass ObservationType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/ObservationType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_7f7266c15496b3e0] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/files/ccsds/ndm/tdm/ObservationsBlock;)Z");
                mids$[mid_rawToSI_de325662d5ff329b] = env->getMethodID(cls, "rawToSI", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_siToRaw_de325662d5ff329b] = env->getMethodID(cls, "siToRaw", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_valueOf_719ea848154846af] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");
                mids$[mid_values_6739edc400929e81] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ANGLE_1 = new ObservationType(env->getStaticObjectField(cls, "ANGLE_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                ANGLE_2 = new ObservationType(env->getStaticObjectField(cls, "ANGLE_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CARRIER_POWER = new ObservationType(env->getStaticObjectField(cls, "CARRIER_POWER", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CLOCK_BIAS = new ObservationType(env->getStaticObjectField(cls, "CLOCK_BIAS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CLOCK_DRIFT = new ObservationType(env->getStaticObjectField(cls, "CLOCK_DRIFT", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_COUNT = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_COUNT", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_INSTANTANEOUS = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_INSTANTANEOUS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_INTEGRATED = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_INTEGRATED", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOR = new ObservationType(env->getStaticObjectField(cls, "DOR", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                MAG = new ObservationType(env->getStaticObjectField(cls, "MAG", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PC_N0 = new ObservationType(env->getStaticObjectField(cls, "PC_N0", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PRESSURE = new ObservationType(env->getStaticObjectField(cls, "PRESSURE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PR_N0 = new ObservationType(env->getStaticObjectField(cls, "PR_N0", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RANGE = new ObservationType(env->getStaticObjectField(cls, "RANGE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RCS = new ObservationType(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_1 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_2 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_3 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_4 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_5 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_1 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_2 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_3 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_4 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_5 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RHUMIDITY = new ObservationType(env->getStaticObjectField(cls, "RHUMIDITY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                STEC = new ObservationType(env->getStaticObjectField(cls, "STEC", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TEMPERATURE = new ObservationType(env->getStaticObjectField(cls, "TEMPERATURE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TROPO_DRY = new ObservationType(env->getStaticObjectField(cls, "TROPO_DRY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TROPO_WET = new ObservationType(env->getStaticObjectField(cls, "TROPO_WET", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                VLBI_DELAY = new ObservationType(env->getStaticObjectField(cls, "VLBI_DELAY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean ObservationType::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a2, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a3, const ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock & a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_7f7266c15496b3e0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$);
            }

            jdouble ObservationType::rawToSI(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
            {
              return env->callDoubleMethod(this$, mids$[mid_rawToSI_de325662d5ff329b], a0.this$, a1.this$, a2.this$, a3);
            }

            jdouble ObservationType::siToRaw(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
            {
              return env->callDoubleMethod(this$, mids$[mid_siToRaw_de325662d5ff329b], a0.this$, a1.this$, a2.this$, a3);
            }

            ObservationType ObservationType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ObservationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_719ea848154846af], a0.this$));
            }

            JArray< ObservationType > ObservationType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ObservationType >(env->callStaticObjectMethod(cls, mids$[mid_values_6739edc400929e81]));
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
            static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_process(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_rawToSI(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_siToRaw(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ObservationType_values(PyTypeObject *type);
            static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data);
            static PyGetSetDef t_ObservationType__fields_[] = {
              DECLARE_GET_FIELD(t_ObservationType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ObservationType__methods_[] = {
              DECLARE_METHOD(t_ObservationType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, of_, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, process, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, rawToSI, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, siToRaw, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ObservationType)[] = {
              { Py_tp_methods, t_ObservationType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ObservationType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ObservationType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ObservationType, t_ObservationType, ObservationType);
            PyObject *t_ObservationType::wrap_Object(const ObservationType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ObservationType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ObservationType *self = (t_ObservationType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ObservationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ObservationType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ObservationType *self = (t_ObservationType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ObservationType::install(PyObject *module)
            {
              installType(&PY_TYPE(ObservationType), &PY_TYPE_DEF(ObservationType), module, "ObservationType", 0);
            }

            void t_ObservationType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "class_", make_descriptor(ObservationType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "wrapfn_", make_descriptor(t_ObservationType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "boxfn_", make_descriptor(boxObject));
              env->getClass(ObservationType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "ANGLE_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::ANGLE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "ANGLE_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::ANGLE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CARRIER_POWER", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CARRIER_POWER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CLOCK_BIAS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CLOCK_BIAS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CLOCK_DRIFT", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CLOCK_DRIFT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_COUNT", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_COUNT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_INSTANTANEOUS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_INSTANTANEOUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_INTEGRATED", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_INTEGRATED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOR", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "MAG", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::MAG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PC_N0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PC_N0)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PRESSURE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PRESSURE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PR_N0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PR_N0)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RANGE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RANGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RCS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RHUMIDITY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RHUMIDITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "STEC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::STEC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TEMPERATURE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TEMPERATURE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TROPO_DRY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TROPO_DRY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TROPO_WET", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TROPO_WET)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "VLBI_DELAY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::VLBI_DELAY)));
            }

            static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ObservationType::initializeClass, 1)))
                return NULL;
              return t_ObservationType::wrap_Object(ObservationType(((t_ObservationType *) arg)->object.this$));
            }
            static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ObservationType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ObservationType_process(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a2((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a3((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock a4((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkkkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_ObservationType_rawToSI(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kkkD", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.rawToSI(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "rawToSI", args);
              return NULL;
            }

            static PyObject *t_ObservationType_siToRaw(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kkkD", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.siToRaw(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToRaw", args);
              return NULL;
            }

            static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ObservationType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::ObservationType::valueOf(a0));
                return t_ObservationType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ObservationType_values(PyTypeObject *type)
            {
              JArray< ObservationType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::ObservationType::values());
              return JArray<jobject>(result.this$).wrap(t_ObservationType::wrap_jobject);
            }
            static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data)
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
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *Frequency::class$ = NULL;
      jmethodID *Frequency::mids$ = NULL;
      bool Frequency::live$ = false;
      Frequency *Frequency::B01 = NULL;
      Frequency *Frequency::B02 = NULL;
      Frequency *Frequency::B03 = NULL;
      Frequency *Frequency::B08 = NULL;
      Frequency *Frequency::B1A = NULL;
      Frequency *Frequency::B1C = NULL;
      Frequency *Frequency::B2A = NULL;
      Frequency *Frequency::B2B = NULL;
      Frequency *Frequency::B3A = NULL;
      Frequency *Frequency::C01 = NULL;
      Frequency *Frequency::C02 = NULL;
      Frequency *Frequency::C05 = NULL;
      Frequency *Frequency::C06 = NULL;
      Frequency *Frequency::C07 = NULL;
      Frequency *Frequency::C08 = NULL;
      Frequency *Frequency::E01 = NULL;
      Frequency *Frequency::E05 = NULL;
      Frequency *Frequency::E06 = NULL;
      Frequency *Frequency::E07 = NULL;
      Frequency *Frequency::E08 = NULL;
      jdouble Frequency::F0 = (jdouble) 0;
      Frequency *Frequency::G01 = NULL;
      Frequency *Frequency::G02 = NULL;
      Frequency *Frequency::G05 = NULL;
      Frequency *Frequency::I05 = NULL;
      Frequency *Frequency::I09 = NULL;
      Frequency *Frequency::J01 = NULL;
      Frequency *Frequency::J02 = NULL;
      Frequency *Frequency::J05 = NULL;
      Frequency *Frequency::J06 = NULL;
      Frequency *Frequency::R01 = NULL;
      Frequency *Frequency::R02 = NULL;
      Frequency *Frequency::R03 = NULL;
      Frequency *Frequency::R04 = NULL;
      Frequency *Frequency::R06 = NULL;
      Frequency *Frequency::S01 = NULL;
      Frequency *Frequency::S05 = NULL;

      jclass Frequency::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/Frequency");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMHzFrequency_456d9a2f64d6b28d] = env->getMethodID(cls, "getMHzFrequency", "()D");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getRatio_456d9a2f64d6b28d] = env->getMethodID(cls, "getRatio", "()D");
          mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_getWavelength_456d9a2f64d6b28d] = env->getMethodID(cls, "getWavelength", "()D");
          mids$[mid_valueOf_59da85d6220c7837] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/Frequency;");
          mids$[mid_values_5156f52fac3e4acd] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/Frequency;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          B01 = new Frequency(env->getStaticObjectField(cls, "B01", "Lorg/orekit/gnss/Frequency;"));
          B02 = new Frequency(env->getStaticObjectField(cls, "B02", "Lorg/orekit/gnss/Frequency;"));
          B03 = new Frequency(env->getStaticObjectField(cls, "B03", "Lorg/orekit/gnss/Frequency;"));
          B08 = new Frequency(env->getStaticObjectField(cls, "B08", "Lorg/orekit/gnss/Frequency;"));
          B1A = new Frequency(env->getStaticObjectField(cls, "B1A", "Lorg/orekit/gnss/Frequency;"));
          B1C = new Frequency(env->getStaticObjectField(cls, "B1C", "Lorg/orekit/gnss/Frequency;"));
          B2A = new Frequency(env->getStaticObjectField(cls, "B2A", "Lorg/orekit/gnss/Frequency;"));
          B2B = new Frequency(env->getStaticObjectField(cls, "B2B", "Lorg/orekit/gnss/Frequency;"));
          B3A = new Frequency(env->getStaticObjectField(cls, "B3A", "Lorg/orekit/gnss/Frequency;"));
          C01 = new Frequency(env->getStaticObjectField(cls, "C01", "Lorg/orekit/gnss/Frequency;"));
          C02 = new Frequency(env->getStaticObjectField(cls, "C02", "Lorg/orekit/gnss/Frequency;"));
          C05 = new Frequency(env->getStaticObjectField(cls, "C05", "Lorg/orekit/gnss/Frequency;"));
          C06 = new Frequency(env->getStaticObjectField(cls, "C06", "Lorg/orekit/gnss/Frequency;"));
          C07 = new Frequency(env->getStaticObjectField(cls, "C07", "Lorg/orekit/gnss/Frequency;"));
          C08 = new Frequency(env->getStaticObjectField(cls, "C08", "Lorg/orekit/gnss/Frequency;"));
          E01 = new Frequency(env->getStaticObjectField(cls, "E01", "Lorg/orekit/gnss/Frequency;"));
          E05 = new Frequency(env->getStaticObjectField(cls, "E05", "Lorg/orekit/gnss/Frequency;"));
          E06 = new Frequency(env->getStaticObjectField(cls, "E06", "Lorg/orekit/gnss/Frequency;"));
          E07 = new Frequency(env->getStaticObjectField(cls, "E07", "Lorg/orekit/gnss/Frequency;"));
          E08 = new Frequency(env->getStaticObjectField(cls, "E08", "Lorg/orekit/gnss/Frequency;"));
          F0 = env->getStaticDoubleField(cls, "F0");
          G01 = new Frequency(env->getStaticObjectField(cls, "G01", "Lorg/orekit/gnss/Frequency;"));
          G02 = new Frequency(env->getStaticObjectField(cls, "G02", "Lorg/orekit/gnss/Frequency;"));
          G05 = new Frequency(env->getStaticObjectField(cls, "G05", "Lorg/orekit/gnss/Frequency;"));
          I05 = new Frequency(env->getStaticObjectField(cls, "I05", "Lorg/orekit/gnss/Frequency;"));
          I09 = new Frequency(env->getStaticObjectField(cls, "I09", "Lorg/orekit/gnss/Frequency;"));
          J01 = new Frequency(env->getStaticObjectField(cls, "J01", "Lorg/orekit/gnss/Frequency;"));
          J02 = new Frequency(env->getStaticObjectField(cls, "J02", "Lorg/orekit/gnss/Frequency;"));
          J05 = new Frequency(env->getStaticObjectField(cls, "J05", "Lorg/orekit/gnss/Frequency;"));
          J06 = new Frequency(env->getStaticObjectField(cls, "J06", "Lorg/orekit/gnss/Frequency;"));
          R01 = new Frequency(env->getStaticObjectField(cls, "R01", "Lorg/orekit/gnss/Frequency;"));
          R02 = new Frequency(env->getStaticObjectField(cls, "R02", "Lorg/orekit/gnss/Frequency;"));
          R03 = new Frequency(env->getStaticObjectField(cls, "R03", "Lorg/orekit/gnss/Frequency;"));
          R04 = new Frequency(env->getStaticObjectField(cls, "R04", "Lorg/orekit/gnss/Frequency;"));
          R06 = new Frequency(env->getStaticObjectField(cls, "R06", "Lorg/orekit/gnss/Frequency;"));
          S01 = new Frequency(env->getStaticObjectField(cls, "S01", "Lorg/orekit/gnss/Frequency;"));
          S05 = new Frequency(env->getStaticObjectField(cls, "S05", "Lorg/orekit/gnss/Frequency;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Frequency::getMHzFrequency() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMHzFrequency_456d9a2f64d6b28d]);
      }

      ::java::lang::String Frequency::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jdouble Frequency::getRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRatio_456d9a2f64d6b28d]);
      }

      ::org::orekit::gnss::SatelliteSystem Frequency::getSatelliteSystem() const
      {
        return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7]));
      }

      jdouble Frequency::getWavelength() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getWavelength_456d9a2f64d6b28d]);
      }

      Frequency Frequency::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Frequency(env->callStaticObjectMethod(cls, mids$[mid_valueOf_59da85d6220c7837], a0.this$));
      }

      JArray< Frequency > Frequency::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Frequency >(env->callStaticObjectMethod(cls, mids$[mid_values_5156f52fac3e4acd]));
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
      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_getMHzFrequency(t_Frequency *self);
      static PyObject *t_Frequency_getName(t_Frequency *self);
      static PyObject *t_Frequency_getRatio(t_Frequency *self);
      static PyObject *t_Frequency_getSatelliteSystem(t_Frequency *self);
      static PyObject *t_Frequency_getWavelength(t_Frequency *self);
      static PyObject *t_Frequency_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Frequency_values(PyTypeObject *type);
      static PyObject *t_Frequency_get__mHzFrequency(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__name(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__ratio(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__satelliteSystem(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__wavelength(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data);
      static PyGetSetDef t_Frequency__fields_[] = {
        DECLARE_GET_FIELD(t_Frequency, mHzFrequency),
        DECLARE_GET_FIELD(t_Frequency, name),
        DECLARE_GET_FIELD(t_Frequency, ratio),
        DECLARE_GET_FIELD(t_Frequency, satelliteSystem),
        DECLARE_GET_FIELD(t_Frequency, wavelength),
        DECLARE_GET_FIELD(t_Frequency, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frequency__methods_[] = {
        DECLARE_METHOD(t_Frequency, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, of_, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, getMHzFrequency, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getName, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getRatio, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getSatelliteSystem, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getWavelength, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Frequency, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frequency)[] = {
        { Py_tp_methods, t_Frequency__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Frequency__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frequency)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(Frequency, t_Frequency, Frequency);
      PyObject *t_Frequency::wrap_Object(const Frequency& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Frequency::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Frequency::install(PyObject *module)
      {
        installType(&PY_TYPE(Frequency), &PY_TYPE_DEF(Frequency), module, "Frequency", 0);
      }

      void t_Frequency::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "class_", make_descriptor(Frequency::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "wrapfn_", make_descriptor(t_Frequency::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "boxfn_", make_descriptor(boxObject));
        env->getClass(Frequency::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B01", make_descriptor(t_Frequency::wrap_Object(*Frequency::B01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B02", make_descriptor(t_Frequency::wrap_Object(*Frequency::B02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B03", make_descriptor(t_Frequency::wrap_Object(*Frequency::B03)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B08", make_descriptor(t_Frequency::wrap_Object(*Frequency::B08)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B1A", make_descriptor(t_Frequency::wrap_Object(*Frequency::B1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B1C", make_descriptor(t_Frequency::wrap_Object(*Frequency::B1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B2A", make_descriptor(t_Frequency::wrap_Object(*Frequency::B2A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B2B", make_descriptor(t_Frequency::wrap_Object(*Frequency::B2B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B3A", make_descriptor(t_Frequency::wrap_Object(*Frequency::B3A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C01", make_descriptor(t_Frequency::wrap_Object(*Frequency::C01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C02", make_descriptor(t_Frequency::wrap_Object(*Frequency::C02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C05", make_descriptor(t_Frequency::wrap_Object(*Frequency::C05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C06", make_descriptor(t_Frequency::wrap_Object(*Frequency::C06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C07", make_descriptor(t_Frequency::wrap_Object(*Frequency::C07)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C08", make_descriptor(t_Frequency::wrap_Object(*Frequency::C08)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E01", make_descriptor(t_Frequency::wrap_Object(*Frequency::E01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E05", make_descriptor(t_Frequency::wrap_Object(*Frequency::E05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E06", make_descriptor(t_Frequency::wrap_Object(*Frequency::E06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E07", make_descriptor(t_Frequency::wrap_Object(*Frequency::E07)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E08", make_descriptor(t_Frequency::wrap_Object(*Frequency::E08)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "F0", make_descriptor(Frequency::F0));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "G01", make_descriptor(t_Frequency::wrap_Object(*Frequency::G01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "G02", make_descriptor(t_Frequency::wrap_Object(*Frequency::G02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "G05", make_descriptor(t_Frequency::wrap_Object(*Frequency::G05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "I05", make_descriptor(t_Frequency::wrap_Object(*Frequency::I05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "I09", make_descriptor(t_Frequency::wrap_Object(*Frequency::I09)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J01", make_descriptor(t_Frequency::wrap_Object(*Frequency::J01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J02", make_descriptor(t_Frequency::wrap_Object(*Frequency::J02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J05", make_descriptor(t_Frequency::wrap_Object(*Frequency::J05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J06", make_descriptor(t_Frequency::wrap_Object(*Frequency::J06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R01", make_descriptor(t_Frequency::wrap_Object(*Frequency::R01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R02", make_descriptor(t_Frequency::wrap_Object(*Frequency::R02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R03", make_descriptor(t_Frequency::wrap_Object(*Frequency::R03)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R04", make_descriptor(t_Frequency::wrap_Object(*Frequency::R04)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R06", make_descriptor(t_Frequency::wrap_Object(*Frequency::R06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "S01", make_descriptor(t_Frequency::wrap_Object(*Frequency::S01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "S05", make_descriptor(t_Frequency::wrap_Object(*Frequency::S05)));
      }

      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frequency::initializeClass, 1)))
          return NULL;
        return t_Frequency::wrap_Object(Frequency(((t_Frequency *) arg)->object.this$));
      }
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frequency::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Frequency_getMHzFrequency(t_Frequency *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMHzFrequency());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Frequency_getName(t_Frequency *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_Frequency_getRatio(t_Frequency *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Frequency_getSatelliteSystem(t_Frequency *self)
      {
        ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
        OBJ_CALL(result = self->object.getSatelliteSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
      }

      static PyObject *t_Frequency_getWavelength(t_Frequency *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getWavelength());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Frequency_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        Frequency result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::Frequency::valueOf(a0));
          return t_Frequency::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_Frequency_values(PyTypeObject *type)
      {
        JArray< Frequency > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::Frequency::values());
        return JArray<jobject>(result.this$).wrap(t_Frequency::wrap_jobject);
      }
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Frequency_get__mHzFrequency(t_Frequency *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMHzFrequency());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Frequency_get__name(t_Frequency *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_Frequency_get__ratio(t_Frequency *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Frequency_get__satelliteSystem(t_Frequency *self, void *data)
      {
        ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getSatelliteSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
      }

      static PyObject *t_Frequency_get__wavelength(t_Frequency *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getWavelength());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/MultiDirectionalSimplex.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *MultiDirectionalSimplex::class$ = NULL;
            jmethodID *MultiDirectionalSimplex::mids$ = NULL;
            bool MultiDirectionalSimplex::live$ = false;

            jclass MultiDirectionalSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/MultiDirectionalSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_init$_d660c7a97bf55272] = env->getMethodID(cls, "<init>", "([[D)V");
                mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_init$_34fab415168f529a] = env->getMethodID(cls, "<init>", "([DDD)V");
                mids$[mid_init$_92a262a7ed4e53ce] = env->getMethodID(cls, "<init>", "([[DDD)V");
                mids$[mid_init$_13f7a72902bf1e20] = env->getMethodID(cls, "<init>", "(IDD)V");
                mids$[mid_init$_d3d0b69fc0b5db95] = env->getMethodID(cls, "<init>", "(IDDD)V");
                mids$[mid_iterate_cd2534a55381d07e] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< jdouble > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_d660c7a97bf55272, a0.this$)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< jdouble > & a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_34fab415168f529a, a0.this$, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< JArray< jdouble > > & a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_92a262a7ed4e53ce, a0.this$, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_13f7a72902bf1e20, a0, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_d3d0b69fc0b5db95, a0, a1, a2, a3)) {}

            void MultiDirectionalSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_cd2534a55381d07e], a0.this$, a1.this$);
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
        namespace scalar {
          namespace noderiv {
            static PyObject *t_MultiDirectionalSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultiDirectionalSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MultiDirectionalSimplex_init_(t_MultiDirectionalSimplex *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MultiDirectionalSimplex_iterate(t_MultiDirectionalSimplex *self, PyObject *args);

            static PyMethodDef t_MultiDirectionalSimplex__methods_[] = {
              DECLARE_METHOD(t_MultiDirectionalSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultiDirectionalSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultiDirectionalSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MultiDirectionalSimplex)[] = {
              { Py_tp_methods, t_MultiDirectionalSimplex__methods_ },
              { Py_tp_init, (void *) t_MultiDirectionalSimplex_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MultiDirectionalSimplex)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex),
              NULL
            };

            DEFINE_TYPE(MultiDirectionalSimplex, t_MultiDirectionalSimplex, MultiDirectionalSimplex);

            void t_MultiDirectionalSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(MultiDirectionalSimplex), &PY_TYPE_DEF(MultiDirectionalSimplex), module, "MultiDirectionalSimplex", 0);
            }

            void t_MultiDirectionalSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "class_", make_descriptor(MultiDirectionalSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "wrapfn_", make_descriptor(t_MultiDirectionalSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MultiDirectionalSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MultiDirectionalSimplex::initializeClass, 1)))
                return NULL;
              return t_MultiDirectionalSimplex::wrap_Object(MultiDirectionalSimplex(((t_MultiDirectionalSimplex *) arg)->object.this$));
            }
            static PyObject *t_MultiDirectionalSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MultiDirectionalSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MultiDirectionalSimplex_init_(t_MultiDirectionalSimplex *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[D", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jint a0;
                  jdouble a1;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "ID", &a0, &a1))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[DDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[DDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
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
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2, a3));
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

            static PyObject *t_MultiDirectionalSimplex_iterate(t_MultiDirectionalSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(MultiDirectionalSimplex), (PyObject *) self, "iterate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/HaltonSequenceGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *HaltonSequenceGenerator::class$ = NULL;
      jmethodID *HaltonSequenceGenerator::mids$ = NULL;
      bool HaltonSequenceGenerator::live$ = false;

      jclass HaltonSequenceGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/HaltonSequenceGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_ac16192eaa70c1a5] = env->getMethodID(cls, "<init>", "(I[I[I)V");
          mids$[mid_getNextIndex_f2f64475e4580546] = env->getMethodID(cls, "getNextIndex", "()I");
          mids$[mid_nextVector_7cdc325af0834901] = env->getMethodID(cls, "nextVector", "()[D");
          mids$[mid_skipTo_eb9cceadce1b2217] = env->getMethodID(cls, "skipTo", "(I)[D");
          mids$[mid_scramble_0877eb3f50bacbc0] = env->getMethodID(cls, "scramble", "(IIII)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HaltonSequenceGenerator::HaltonSequenceGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      HaltonSequenceGenerator::HaltonSequenceGenerator(jint a0, const JArray< jint > & a1, const JArray< jint > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ac16192eaa70c1a5, a0, a1.this$, a2.this$)) {}

      jint HaltonSequenceGenerator::getNextIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getNextIndex_f2f64475e4580546]);
      }

      JArray< jdouble > HaltonSequenceGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_7cdc325af0834901]));
      }

      JArray< jdouble > HaltonSequenceGenerator::skipTo(jint a0) const
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
      static PyObject *t_HaltonSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HaltonSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HaltonSequenceGenerator_init_(t_HaltonSequenceGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HaltonSequenceGenerator_getNextIndex(t_HaltonSequenceGenerator *self);
      static PyObject *t_HaltonSequenceGenerator_nextVector(t_HaltonSequenceGenerator *self);
      static PyObject *t_HaltonSequenceGenerator_skipTo(t_HaltonSequenceGenerator *self, PyObject *arg);
      static PyObject *t_HaltonSequenceGenerator_get__nextIndex(t_HaltonSequenceGenerator *self, void *data);
      static PyGetSetDef t_HaltonSequenceGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_HaltonSequenceGenerator, nextIndex),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HaltonSequenceGenerator__methods_[] = {
        DECLARE_METHOD(t_HaltonSequenceGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, getNextIndex, METH_NOARGS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, nextVector, METH_NOARGS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, skipTo, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HaltonSequenceGenerator)[] = {
        { Py_tp_methods, t_HaltonSequenceGenerator__methods_ },
        { Py_tp_init, (void *) t_HaltonSequenceGenerator_init_ },
        { Py_tp_getset, t_HaltonSequenceGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HaltonSequenceGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HaltonSequenceGenerator, t_HaltonSequenceGenerator, HaltonSequenceGenerator);

      void t_HaltonSequenceGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(HaltonSequenceGenerator), &PY_TYPE_DEF(HaltonSequenceGenerator), module, "HaltonSequenceGenerator", 0);
      }

      void t_HaltonSequenceGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaltonSequenceGenerator), "class_", make_descriptor(HaltonSequenceGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaltonSequenceGenerator), "wrapfn_", make_descriptor(t_HaltonSequenceGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaltonSequenceGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HaltonSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HaltonSequenceGenerator::initializeClass, 1)))
          return NULL;
        return t_HaltonSequenceGenerator::wrap_Object(HaltonSequenceGenerator(((t_HaltonSequenceGenerator *) arg)->object.this$));
      }
      static PyObject *t_HaltonSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HaltonSequenceGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HaltonSequenceGenerator_init_(t_HaltonSequenceGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            HaltonSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = HaltonSequenceGenerator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            JArray< jint > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);
            HaltonSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "I[I[I", &a0, &a1, &a2))
            {
              INT_CALL(object = HaltonSequenceGenerator(a0, a1, a2));
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

      static PyObject *t_HaltonSequenceGenerator_getNextIndex(t_HaltonSequenceGenerator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNextIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_HaltonSequenceGenerator_nextVector(t_HaltonSequenceGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }

      static PyObject *t_HaltonSequenceGenerator_skipTo(t_HaltonSequenceGenerator *self, PyObject *arg)
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

      static PyObject *t_HaltonSequenceGenerator_get__nextIndex(t_HaltonSequenceGenerator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNextIndex());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
