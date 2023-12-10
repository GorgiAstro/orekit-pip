#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/SeriesTerm.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/data/SeriesTerm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *SeriesTerm::class$ = NULL;
      jmethodID *SeriesTerm::mids$ = NULL;
      bool SeriesTerm::live$ = false;

      jclass SeriesTerm::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/SeriesTerm");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_864f173bba930896] = env->getMethodID(cls, "add", "(IIDD)V");
          mids$[mid_buildTerm_ed99c00c6dd7f56d] = env->getStaticMethodID(cls, "buildTerm", "(IIIIIIIIIIIIIII)Lorg/orekit/data/SeriesTerm;");
          mids$[mid_derivative_012501d58cd2c4a9] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_derivative_7ef60273b11c242d] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCosCoeff_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getCosCoeff", "(II)D");
          mids$[mid_getDegree_38565d58479aa24a] = env->getMethodID(cls, "getDegree", "(I)I");
          mids$[mid_getSinCoeff_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getSinCoeff", "(II)D");
          mids$[mid_value_012501d58cd2c4a9] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_value_7ef60273b11c242d] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argumentDerivative_68f0627d4a947675] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argumentDerivative_8988cf596cc2decd] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argument_8988cf596cc2decd] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argument_68f0627d4a947675] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/BodiesElements;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void SeriesTerm::add(jint a0, jint a1, jdouble a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_add_864f173bba930896], a0, a1, a2, a3);
      }

      SeriesTerm SeriesTerm::buildTerm(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5, jint a6, jint a7, jint a8, jint a9, jint a10, jint a11, jint a12, jint a13, jint a14)
      {
        jclass cls = env->getClass(initializeClass);
        return SeriesTerm(env->callStaticObjectMethod(cls, mids$[mid_buildTerm_ed99c00c6dd7f56d], a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
      }

      JArray< jdouble > SeriesTerm::derivative(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_derivative_012501d58cd2c4a9], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > SeriesTerm::derivative(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_derivative_7ef60273b11c242d], a0.this$));
      }

      jdouble SeriesTerm::getCosCoeff(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCosCoeff_a84e4ee1da3f1ab8], a0, a1);
      }

      jint SeriesTerm::getDegree(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getDegree_38565d58479aa24a], a0);
      }

      jdouble SeriesTerm::getSinCoeff(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSinCoeff_a84e4ee1da3f1ab8], a0, a1);
      }

      JArray< jdouble > SeriesTerm::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_012501d58cd2c4a9], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > SeriesTerm::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_7ef60273b11c242d], a0.this$));
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
      static PyObject *t_SeriesTerm_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SeriesTerm_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SeriesTerm_add(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_buildTerm(PyTypeObject *type, PyObject *args);
      static PyObject *t_SeriesTerm_derivative(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_getCosCoeff(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_getDegree(t_SeriesTerm *self, PyObject *arg);
      static PyObject *t_SeriesTerm_getSinCoeff(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_value(t_SeriesTerm *self, PyObject *args);

      static PyMethodDef t_SeriesTerm__methods_[] = {
        DECLARE_METHOD(t_SeriesTerm, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, add, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, buildTerm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, derivative, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, getCosCoeff, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, getDegree, METH_O),
        DECLARE_METHOD(t_SeriesTerm, getSinCoeff, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SeriesTerm)[] = {
        { Py_tp_methods, t_SeriesTerm__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SeriesTerm)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SeriesTerm, t_SeriesTerm, SeriesTerm);

      void t_SeriesTerm::install(PyObject *module)
      {
        installType(&PY_TYPE(SeriesTerm), &PY_TYPE_DEF(SeriesTerm), module, "SeriesTerm", 0);
      }

      void t_SeriesTerm::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "class_", make_descriptor(SeriesTerm::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "wrapfn_", make_descriptor(t_SeriesTerm::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SeriesTerm_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SeriesTerm::initializeClass, 1)))
          return NULL;
        return t_SeriesTerm::wrap_Object(SeriesTerm(((t_SeriesTerm *) arg)->object.this$));
      }
      static PyObject *t_SeriesTerm_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SeriesTerm::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SeriesTerm_add(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jdouble a3;

        if (!parseArgs(args, "IIDD", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.add(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_buildTerm(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;
        jint a6;
        jint a7;
        jint a8;
        jint a9;
        jint a10;
        jint a11;
        jint a12;
        jint a13;
        jint a14;
        SeriesTerm result((jobject) NULL);

        if (!parseArgs(args, "IIIIIIIIIIIIIII", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
        {
          OBJ_CALL(result = ::org::orekit::data::SeriesTerm::buildTerm(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
          return t_SeriesTerm::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "buildTerm", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_derivative(t_SeriesTerm *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "derivative", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getCosCoeff(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getCosCoeff(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCosCoeff", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getDegree(t_SeriesTerm *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getDegree(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDegree", arg);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getSinCoeff(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSinCoeff(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSinCoeff", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_value(t_SeriesTerm *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/IntervalEventTrigger.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *IntervalEventTrigger::class$ = NULL;
          jmethodID *IntervalEventTrigger::mids$ = NULL;
          bool IntervalEventTrigger::live$ = false;

          jclass IntervalEventTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/IntervalEventTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0c14729fef158d0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getFiringIntervalDetector_5f2d0fd4426cfe5c] = env->getMethodID(cls, "getFiringIntervalDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_isFiringOnInitialState_795d7e54d4c58d83] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");
              mids$[mid_convertIntervalDetector_695049796b8b09bd] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntervalEventTrigger::IntervalEventTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0) : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(env->newObject(initializeClass, &mids$, mid_init$_d0c14729fef158d0, a0.this$)) {}

          ::java::util::stream::Stream IntervalEventTrigger::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
          }

          ::java::util::stream::Stream IntervalEventTrigger::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
          }

          ::org::orekit::propagation::events::AbstractDetector IntervalEventTrigger::getFiringIntervalDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getFiringIntervalDetector_5f2d0fd4426cfe5c]));
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
          static PyObject *t_IntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalEventTrigger_of_(t_IntervalEventTrigger *self, PyObject *args);
          static int t_IntervalEventTrigger_init_(t_IntervalEventTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntervalEventTrigger_getEventDetectors(t_IntervalEventTrigger *self, PyObject *args);
          static PyObject *t_IntervalEventTrigger_getFieldEventDetectors(t_IntervalEventTrigger *self, PyObject *args);
          static PyObject *t_IntervalEventTrigger_getFiringIntervalDetector(t_IntervalEventTrigger *self);
          static PyObject *t_IntervalEventTrigger_get__eventDetectors(t_IntervalEventTrigger *self, void *data);
          static PyObject *t_IntervalEventTrigger_get__firingIntervalDetector(t_IntervalEventTrigger *self, void *data);
          static PyObject *t_IntervalEventTrigger_get__parameters_(t_IntervalEventTrigger *self, void *data);
          static PyGetSetDef t_IntervalEventTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_IntervalEventTrigger, eventDetectors),
            DECLARE_GET_FIELD(t_IntervalEventTrigger, firingIntervalDetector),
            DECLARE_GET_FIELD(t_IntervalEventTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntervalEventTrigger__methods_[] = {
            DECLARE_METHOD(t_IntervalEventTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalEventTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalEventTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getFieldEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getFiringIntervalDetector, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntervalEventTrigger)[] = {
            { Py_tp_methods, t_IntervalEventTrigger__methods_ },
            { Py_tp_init, (void *) t_IntervalEventTrigger_init_ },
            { Py_tp_getset, t_IntervalEventTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntervalEventTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(IntervalEventTrigger, t_IntervalEventTrigger, IntervalEventTrigger);
          PyObject *t_IntervalEventTrigger::wrap_Object(const IntervalEventTrigger& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IntervalEventTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalEventTrigger *self = (t_IntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IntervalEventTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IntervalEventTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalEventTrigger *self = (t_IntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IntervalEventTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(IntervalEventTrigger), &PY_TYPE_DEF(IntervalEventTrigger), module, "IntervalEventTrigger", 0);
          }

          void t_IntervalEventTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "class_", make_descriptor(IntervalEventTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "wrapfn_", make_descriptor(t_IntervalEventTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntervalEventTrigger::initializeClass, 1)))
              return NULL;
            return t_IntervalEventTrigger::wrap_Object(IntervalEventTrigger(((t_IntervalEventTrigger *) arg)->object.this$));
          }
          static PyObject *t_IntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntervalEventTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntervalEventTrigger_of_(t_IntervalEventTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_IntervalEventTrigger_init_(t_IntervalEventTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            IntervalEventTrigger object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = IntervalEventTrigger(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IntervalEventTrigger_getEventDetectors(t_IntervalEventTrigger *self, PyObject *args)
          {
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            return callSuper(PY_TYPE(IntervalEventTrigger), (PyObject *) self, "getEventDetectors", args, 2);
          }

          static PyObject *t_IntervalEventTrigger_getFieldEventDetectors(t_IntervalEventTrigger *self, PyObject *args)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            return callSuper(PY_TYPE(IntervalEventTrigger), (PyObject *) self, "getFieldEventDetectors", args, 2);
          }

          static PyObject *t_IntervalEventTrigger_getFiringIntervalDetector(t_IntervalEventTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getFiringIntervalDetector());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }
          static PyObject *t_IntervalEventTrigger_get__parameters_(t_IntervalEventTrigger *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_IntervalEventTrigger_get__eventDetectors(t_IntervalEventTrigger *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_IntervalEventTrigger_get__firingIntervalDetector(t_IntervalEventTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getFiringIntervalDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/lang/Class.h"
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
                mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
                mids$[mid_compareTo_6f65cf61e1ec1253] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey;)I");
                mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getN_f2f64475e4580546] = env->getMethodID(cls, "getN", "()I");
                mids$[mid_getS_f2f64475e4580546] = env->getMethodID(cls, "getS", "()I");
                mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CoefficientsFactory$NSKey::CoefficientsFactory$NSKey(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

            jint CoefficientsFactory$NSKey::compareTo(const CoefficientsFactory$NSKey & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_6f65cf61e1ec1253], a0.this$);
            }

            jboolean CoefficientsFactory$NSKey::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
            }

            jint CoefficientsFactory$NSKey::getN() const
            {
              return env->callIntMethod(this$, mids$[mid_getN_f2f64475e4580546]);
            }

            jint CoefficientsFactory$NSKey::getS() const
            {
              return env->callIntMethod(this$, mids$[mid_getS_f2f64475e4580546]);
            }

            jint CoefficientsFactory$NSKey::hashCode() const
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
#include "org/orekit/files/ccsds/utils/parsing/AbstractMessageParser.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *AbstractMessageParser::class$ = NULL;
            jmethodID *AbstractMessageParser::mids$ = NULL;
            bool AbstractMessageParser::live$ = false;

            jclass AbstractMessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/AbstractMessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_anticipateNext_fcf5bfd61f1ca2c0] = env->getMethodID(cls, "anticipateNext", "(Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");
                mids$[mid_getCurrent_50840dac38b5c0f6] = env->getMethodID(cls, "getCurrent", "()Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;");
                mids$[mid_getFileFormat_b51f613f857a5e84] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_0090f7797e403f43] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_691778b38b11996d] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_9b91a684064d0956] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_setEndTagSeen_50a2e0b139e80a58] = env->getMethodID(cls, "setEndTagSeen", "(Z)V");
                mids$[mid_setFallback_fcf5bfd61f1ca2c0] = env->getMethodID(cls, "setFallback", "(Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");
                mids$[mid_wasEndTagSeen_e470b6d9e0d979db] = env->getMethodID(cls, "wasEndTagSeen", "()Z");
                mids$[mid_reset_5d01efeee494ec15] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void AbstractMessageParser::anticipateNext(const ::org::orekit::files::ccsds::utils::parsing::ProcessingState & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_anticipateNext_fcf5bfd61f1ca2c0], a0.this$);
            }

            ::org::orekit::files::ccsds::utils::parsing::ProcessingState AbstractMessageParser::getCurrent() const
            {
              return ::org::orekit::files::ccsds::utils::parsing::ProcessingState(env->callObjectMethod(this$, mids$[mid_getCurrent_50840dac38b5c0f6]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat AbstractMessageParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_b51f613f857a5e84]));
            }

            ::java::lang::String AbstractMessageParser::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_0090f7797e403f43]));
            }

            ::java::util::Map AbstractMessageParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54]));
            }

            ::java::lang::Object AbstractMessageParser::parseMessage(const ::org::orekit::data::DataSource & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseMessage_691778b38b11996d], a0.this$));
            }

            void AbstractMessageParser::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_process_9b91a684064d0956], a0.this$);
            }

            void AbstractMessageParser::setEndTagSeen(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEndTagSeen_50a2e0b139e80a58], a0);
            }

            void AbstractMessageParser::setFallback(const ::org::orekit::files::ccsds::utils::parsing::ProcessingState & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFallback_fcf5bfd61f1ca2c0], a0.this$);
            }

            jboolean AbstractMessageParser::wasEndTagSeen() const
            {
              return env->callBooleanMethod(this$, mids$[mid_wasEndTagSeen_e470b6d9e0d979db]);
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
          namespace parsing {
            static PyObject *t_AbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageParser_of_(t_AbstractMessageParser *self, PyObject *args);
            static PyObject *t_AbstractMessageParser_anticipateNext(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_getCurrent(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getFileFormat(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getFormatVersionKey(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getSpecialXmlElementsBuilders(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_parseMessage(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_process(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_setEndTagSeen(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_setFallback(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_wasEndTagSeen(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_get__current(t_AbstractMessageParser *self, void *data);
            static int t_AbstractMessageParser_set__endTagSeen(t_AbstractMessageParser *self, PyObject *arg, void *data);
            static int t_AbstractMessageParser_set__fallback(t_AbstractMessageParser *self, PyObject *arg, void *data);
            static PyObject *t_AbstractMessageParser_get__fileFormat(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__formatVersionKey(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__specialXmlElementsBuilders(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__parameters_(t_AbstractMessageParser *self, void *data);
            static PyGetSetDef t_AbstractMessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractMessageParser, current),
              DECLARE_SET_FIELD(t_AbstractMessageParser, endTagSeen),
              DECLARE_SET_FIELD(t_AbstractMessageParser, fallback),
              DECLARE_GET_FIELD(t_AbstractMessageParser, fileFormat),
              DECLARE_GET_FIELD(t_AbstractMessageParser, formatVersionKey),
              DECLARE_GET_FIELD(t_AbstractMessageParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_AbstractMessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractMessageParser__methods_[] = {
              DECLARE_METHOD(t_AbstractMessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractMessageParser, anticipateNext, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, getCurrent, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getFileFormat, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getSpecialXmlElementsBuilders, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, parseMessage, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, process, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, setEndTagSeen, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, setFallback, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, wasEndTagSeen, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractMessageParser)[] = {
              { Py_tp_methods, t_AbstractMessageParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractMessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractMessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractMessageParser, t_AbstractMessageParser, AbstractMessageParser);
            PyObject *t_AbstractMessageParser::wrap_Object(const AbstractMessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractMessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageParser *self = (t_AbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractMessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractMessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageParser *self = (t_AbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractMessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractMessageParser), &PY_TYPE_DEF(AbstractMessageParser), module, "AbstractMessageParser", 0);
            }

            void t_AbstractMessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "class_", make_descriptor(AbstractMessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "wrapfn_", make_descriptor(t_AbstractMessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractMessageParser::initializeClass, 1)))
                return NULL;
              return t_AbstractMessageParser::wrap_Object(AbstractMessageParser(((t_AbstractMessageParser *) arg)->object.this$));
            }
            static PyObject *t_AbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractMessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractMessageParser_of_(t_AbstractMessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractMessageParser_anticipateNext(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.anticipateNext(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "anticipateNext", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_getCurrent(t_AbstractMessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState result((jobject) NULL);
              OBJ_CALL(result = self->object.getCurrent());
              return ::org::orekit::files::ccsds::utils::parsing::t_ProcessingState::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageParser_getFileFormat(t_AbstractMessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageParser_getFormatVersionKey(t_AbstractMessageParser *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_AbstractMessageParser_getSpecialXmlElementsBuilders(t_AbstractMessageParser *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            static PyObject *t_AbstractMessageParser_parseMessage(t_AbstractMessageParser *self, PyObject *arg)
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

            static PyObject *t_AbstractMessageParser_process(t_AbstractMessageParser *self, PyObject *arg)
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

            static PyObject *t_AbstractMessageParser_setEndTagSeen(t_AbstractMessageParser *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setEndTagSeen(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEndTagSeen", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_setFallback(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFallback(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFallback", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_wasEndTagSeen(t_AbstractMessageParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.wasEndTagSeen());
              Py_RETURN_BOOL(result);
            }
            static PyObject *t_AbstractMessageParser_get__parameters_(t_AbstractMessageParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractMessageParser_get__current(t_AbstractMessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState value((jobject) NULL);
              OBJ_CALL(value = self->object.getCurrent());
              return ::org::orekit::files::ccsds::utils::parsing::t_ProcessingState::wrap_Object(value);
            }

            static int t_AbstractMessageParser_set__endTagSeen(t_AbstractMessageParser *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setEndTagSeen(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "endTagSeen", arg);
              return -1;
            }

            static int t_AbstractMessageParser_set__fallback(t_AbstractMessageParser *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::utils::parsing::ProcessingState value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &value))
                {
                  INT_CALL(self->object.setFallback(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "fallback", arg);
              return -1;
            }

            static PyObject *t_AbstractMessageParser_get__fileFormat(t_AbstractMessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_AbstractMessageParser_get__formatVersionKey(t_AbstractMessageParser *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_AbstractMessageParser_get__specialXmlElementsBuilders(t_AbstractMessageParser *self, void *data)
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
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldCircularOrbit::class$ = NULL;
      jmethodID *FieldCircularOrbit::mids$ = NULL;
      bool FieldCircularOrbit::live$ = false;

      jclass FieldCircularOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldCircularOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b6fb4d19a77f9888] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_9268f5f464abc700] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/CircularOrbit;)V");
          mids$[mid_init$_3630ab60f65fc257] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_c46027b2f093f684] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_cca8d8314ace10b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_c5c88eb1c5b50a4d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_de4891ed91bd58e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_72af0bc419feab2f] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_eccentricToMean_f56548599899c286] = env->getStaticMethodID(cls, "eccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_eccentricToTrue_f56548599899c286] = env->getStaticMethodID(cls, "eccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_e6d4d3215c30992a] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_e6d4d3215c30992a] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlpha_d275813d7aa8ed95] = env->getMethodID(cls, "getAlpha", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaDot_d275813d7aa8ed95] = env->getMethodID(cls, "getAlphaDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaE_e6d4d3215c30992a] = env->getMethodID(cls, "getAlphaE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaEDot_e6d4d3215c30992a] = env->getMethodID(cls, "getAlphaEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaM_e6d4d3215c30992a] = env->getMethodID(cls, "getAlphaM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaMDot_e6d4d3215c30992a] = env->getMethodID(cls, "getAlphaMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaV_e6d4d3215c30992a] = env->getMethodID(cls, "getAlphaV", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaVDot_e6d4d3215c30992a] = env->getMethodID(cls, "getAlphaVDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getCircularEx_e6d4d3215c30992a] = env->getMethodID(cls, "getCircularEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularExDot_e6d4d3215c30992a] = env->getMethodID(cls, "getCircularExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularEy_e6d4d3215c30992a] = env->getMethodID(cls, "getCircularEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularEyDot_e6d4d3215c30992a] = env->getMethodID(cls, "getCircularEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getE_e6d4d3215c30992a] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_e6d4d3215c30992a] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_e6d4d3215c30992a] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_e6d4d3215c30992a] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_e6d4d3215c30992a] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_e6d4d3215c30992a] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_e6d4d3215c30992a] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_e6d4d3215c30992a] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_e6d4d3215c30992a] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_e6d4d3215c30992a] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNode_e6d4d3215c30992a] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNodeDot_e6d4d3215c30992a] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_e470b6d9e0d979db] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_e470b6d9e0d979db] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_f56548599899c286] = env->getStaticMethodID(cls, "meanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_removeRates_5d976fb6f89be4a9] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_shiftedBy_d194d65ce751068f] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_shiftedBy_1241a270fe4aa8c5] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_toOrbit_d80e0a544ab2a464] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_f56548599899c286] = env->getStaticMethodID(cls, "trueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_initPosition_5791f80683b5227e] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_26447a781aafdb9e] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b6fb4d19a77f9888, a0.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::CircularOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_9268f5f464abc700, a0.this$, a1.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_3630ab60f65fc257, a0.this$, a1.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_c46027b2f093f684, a0.this$, a1.this$, a2.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_cca8d8314ace10b6, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_c5c88eb1c5b50a4d, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_de4891ed91bd58e7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldCircularOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_72af0bc419feab2f], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::eccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToMean_f56548599899c286], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::eccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToTrue_f56548599899c286], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlpha(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_d275813d7aa8ed95], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaDot_d275813d7aa8ed95], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaE_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaEDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaM_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaMDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaV() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaV_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaVDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaVDot_e6d4d3215c30992a]));
      }

      ::org::orekit::orbits::PositionAngleType FieldCircularOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_2571e8fe1cede425]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEx_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularExDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEy_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEyDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getRightAscensionOfAscendingNode() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_e6d4d3215c30992a]));
      }

      ::org::orekit::orbits::OrbitType FieldCircularOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_63ea5cd020bf7bf1]));
      }

      jboolean FieldCircularOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_e470b6d9e0d979db]);
      }

      jboolean FieldCircularOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_e470b6d9e0d979db]);
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::meanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_meanToEccentric_f56548599899c286], a0.this$, a1.this$, a2.this$));
      }

      FieldCircularOrbit FieldCircularOrbit::removeRates() const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_5d976fb6f89be4a9]));
      }

      FieldCircularOrbit FieldCircularOrbit::shiftedBy(jdouble a0) const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_d194d65ce751068f], a0));
      }

      FieldCircularOrbit FieldCircularOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_1241a270fe4aa8c5], a0.this$));
      }

      ::org::orekit::orbits::CircularOrbit FieldCircularOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::CircularOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_d80e0a544ab2a464]));
      }

      ::java::lang::String FieldCircularOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::trueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trueToEccentric_f56548599899c286], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FieldCircularOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_of_(t_FieldCircularOrbit *self, PyObject *args);
      static int t_FieldCircularOrbit_init_(t_FieldCircularOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldCircularOrbit_addKeplerContribution(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getA(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getADot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getAlpha(t_FieldCircularOrbit *self, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_getAlphaDot(t_FieldCircularOrbit *self, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_getAlphaE(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaEDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaM(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaMDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaV(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaVDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCachedPositionAngleType(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEx(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularExDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEy(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEyDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getE(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEx(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialExDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEyDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHx(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHxDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHyDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getI(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getIDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLE(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLEDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLM(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLMDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLv(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLvDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNode(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getType(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_hasDerivatives(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_hasRates(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_removeRates(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_shiftedBy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_toOrbit(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_toString(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_get__a(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__aDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaE(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaEDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaM(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaMDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaV(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaVDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__cachedPositionAngleType(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularExDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__e(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__eDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialExDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hxDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__i(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__iDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lE(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lEDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lM(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lMDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lv(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lvDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNode(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__type(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__parameters_(t_FieldCircularOrbit *self, void *data);
      static PyGetSetDef t_FieldCircularOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldCircularOrbit, a),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaE),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaEDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaM),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaMDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaV),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaVDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularExDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, e),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, i),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lE),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lM),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lv),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, type),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldCircularOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldCircularOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlpha, METH_O),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaDot, METH_O),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaE, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaM, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaMDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaV, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaVDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularExDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldCircularOrbit)[] = {
        { Py_tp_methods, t_FieldCircularOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldCircularOrbit_init_ },
        { Py_tp_getset, t_FieldCircularOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldCircularOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldCircularOrbit, t_FieldCircularOrbit, FieldCircularOrbit);
      PyObject *t_FieldCircularOrbit::wrap_Object(const FieldCircularOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCircularOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCircularOrbit *self = (t_FieldCircularOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldCircularOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCircularOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCircularOrbit *self = (t_FieldCircularOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldCircularOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldCircularOrbit), &PY_TYPE_DEF(FieldCircularOrbit), module, "FieldCircularOrbit", 0);
      }

      void t_FieldCircularOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "class_", make_descriptor(FieldCircularOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "wrapfn_", make_descriptor(t_FieldCircularOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldCircularOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldCircularOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldCircularOrbit::wrap_Object(FieldCircularOrbit(((t_FieldCircularOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldCircularOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldCircularOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldCircularOrbit_of_(t_FieldCircularOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldCircularOrbit_init_(t_FieldCircularOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::CircularOrbit a1((jobject) NULL);
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::CircularOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &p8, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
            PyTypeObject **p10;
            ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
            PyTypeObject **p11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a14((jobject) NULL);
            PyTypeObject **p14;
            ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
            PyTypeObject **p15;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &p14, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_FieldCircularOrbit_addKeplerContribution(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::eccentricToMean(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::eccentricToTrue(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getA(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getADot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getAlpha(t_FieldCircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlpha(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlpha", arg);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getAlphaDot(t_FieldCircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlphaDot(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlphaDot", arg);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getAlphaE(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaEDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaM(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaMDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaMDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaV(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaV());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaVDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaVDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCachedPositionAngleType(t_FieldCircularOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEx(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularExDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularExDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEy(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEyDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getE(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEx(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialExDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEy(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEyDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHx(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHxDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHy(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHyDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getI(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getIDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLE(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLEDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLM(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLMDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLv(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLvDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNode(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getType(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_hasDerivatives(t_FieldCircularOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_hasRates(t_FieldCircularOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldCircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::meanToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_removeRates(t_FieldCircularOrbit *self)
      {
        FieldCircularOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldCircularOrbit_shiftedBy(t_FieldCircularOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldCircularOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCircularOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_toOrbit(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_toString(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::trueToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }
      static PyObject *t_FieldCircularOrbit_get__parameters_(t_FieldCircularOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldCircularOrbit_get__a(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__aDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaE(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaEDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaM(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaMDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaV(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaV());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaVDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaVDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__cachedPositionAngleType(t_FieldCircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularExDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__e(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__eDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialExDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hxDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__i(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__iDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lE(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lEDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lM(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lMDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lv(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lvDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNode(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__type(t_FieldCircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory.h"
#include "java/util/SortedMap.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *CoefficientsFactory::class$ = NULL;
            jmethodID *CoefficientsFactory::mids$ = NULL;
            bool CoefficientsFactory::live$ = false;

            jclass CoefficientsFactory::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeGsHs_ca85116d91dbe702] = env->getStaticMethodID(cls, "computeGsHs", "(DDDDI)[[D");
                mids$[mid_computeGsHs_ba1322c2727ab9fa] = env->getStaticMethodID(cls, "computeGsHs", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)[[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeQns_8d380d5f7340c318] = env->getStaticMethodID(cls, "computeQns", "(DII)[[D");
                mids$[mid_computeQns_cffc7dde335d18ed] = env->getStaticMethodID(cls, "computeQns", "(Lorg/hipparchus/CalculusFieldElement;II)[[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeVns_79773ce046ddf9cb] = env->getStaticMethodID(cls, "computeVns", "(I)Ljava/util/SortedMap;");
                mids$[mid_getVmns_17d75a1004cd0f67] = env->getStaticMethodID(cls, "getVmns", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< JArray< jdouble > > CoefficientsFactory::computeGsHs(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_computeGsHs_ca85116d91dbe702], a0, a1, a2, a3, a4));
            }

            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CoefficientsFactory::computeGsHs(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4, const ::org::hipparchus::Field & a5)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_computeGsHs_ba1322c2727ab9fa], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
            }

            JArray< JArray< jdouble > > CoefficientsFactory::computeQns(jdouble a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_computeQns_8d380d5f7340c318], a0, a1, a2));
            }

            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CoefficientsFactory::computeQns(const ::org::hipparchus::CalculusFieldElement & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_computeQns_cffc7dde335d18ed], a0.this$, a1, a2));
            }

            ::java::util::SortedMap CoefficientsFactory::computeVns(jint a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_computeVns_79773ce046ddf9cb], a0));
            }

            jdouble CoefficientsFactory::getVmns(jint a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getVmns_17d75a1004cd0f67], a0, a1, a2);
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
            static PyObject *t_CoefficientsFactory_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_computeGsHs(PyTypeObject *type, PyObject *args);
            static PyObject *t_CoefficientsFactory_computeQns(PyTypeObject *type, PyObject *args);
            static PyObject *t_CoefficientsFactory_computeVns(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_getVmns(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_CoefficientsFactory__methods_[] = {
              DECLARE_METHOD(t_CoefficientsFactory, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeGsHs, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeQns, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeVns, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, getVmns, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CoefficientsFactory)[] = {
              { Py_tp_methods, t_CoefficientsFactory__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CoefficientsFactory)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CoefficientsFactory, t_CoefficientsFactory, CoefficientsFactory);

            void t_CoefficientsFactory::install(PyObject *module)
            {
              installType(&PY_TYPE(CoefficientsFactory), &PY_TYPE_DEF(CoefficientsFactory), module, "CoefficientsFactory", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "NSKey", make_descriptor(&PY_TYPE_DEF(CoefficientsFactory$NSKey)));
            }

            void t_CoefficientsFactory::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "class_", make_descriptor(CoefficientsFactory::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "wrapfn_", make_descriptor(t_CoefficientsFactory::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CoefficientsFactory_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CoefficientsFactory::initializeClass, 1)))
                return NULL;
              return t_CoefficientsFactory::wrap_Object(CoefficientsFactory(((t_CoefficientsFactory *) arg)->object.this$));
            }
            static PyObject *t_CoefficientsFactory_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CoefficientsFactory::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CoefficientsFactory_computeGsHs(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jint a4;
                  JArray< JArray< jdouble > > result((jobject) NULL);

                  if (!parseArgs(args, "DDDDI", &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeGsHs(a0, a1, a2, a3, a4));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
                break;
               case 6:
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                  PyTypeObject **p3;
                  jint a4;
                  ::org::hipparchus::Field a5((jobject) NULL);
                  PyTypeObject **p5;
                  JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

                  if (!parseArgs(args, "KKKKIK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeGsHs(a0, a1, a2, a3, a4, a5));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
              }

              PyErr_SetArgsError(type, "computeGsHs", args);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_computeQns(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  jdouble a0;
                  jint a1;
                  jint a2;
                  JArray< JArray< jdouble > > result((jobject) NULL);

                  if (!parseArgs(args, "DII", &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeQns(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  jint a1;
                  jint a2;
                  JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

                  if (!parseArgs(args, "KII", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeQns(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
              }

              PyErr_SetArgsError(type, "computeQns", args);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_computeVns(PyTypeObject *type, PyObject *arg)
            {
              jint a0;
              ::java::util::SortedMap result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeVns(a0));
                return ::java::util::t_SortedMap::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::utilities::PY_TYPE(CoefficientsFactory$NSKey), ::java::lang::PY_TYPE(Double));
              }

              PyErr_SetArgsError(type, "computeVns", arg);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_getVmns(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::getVmns(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError(type, "getVmns", args);
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
#include "org/orekit/propagation/PythonPropagator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
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
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_7dfba37c14ed8f7a] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_8ef30a2ad40caceb] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_a6156df500549a58] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_dd0e78d2be8aaf34] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_cfcfd130f9013e3e] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_a44bf32d2051f26b] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_6b161f495ea569b8] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_889031abe87f3b14] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_afc18c81ed763a96] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setEphemerisModeHandler_dbe30cb4a191086d] = env->getMethodID(cls, "setEphemerisModeHandler", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
          mids$[mid_setupMatricesComputation_01864381ad74adf6] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonPropagator::PythonPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonPropagator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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
#include "org/hipparchus/util/OpenIntToFieldHashMap.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/OpenIntToFieldHashMap$Iterator.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToFieldHashMap::class$ = NULL;
      jmethodID *OpenIntToFieldHashMap::mids$ = NULL;
      bool OpenIntToFieldHashMap::live$ = false;

      jclass OpenIntToFieldHashMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToFieldHashMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_a69d58691b2f6a42] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_517fb93f7f6e6810] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_033ffb0d487f5fee] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/hipparchus/FieldElement;)V");
          mids$[mid_containsKey_e95e4c7cd3dd17ff] = env->getMethodID(cls, "containsKey", "(I)Z");
          mids$[mid_get_5e30662bac3edb02] = env->getMethodID(cls, "get", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_iterator_5bdce533ecf08445] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/OpenIntToFieldHashMap$Iterator;");
          mids$[mid_put_344984fcd6be0043] = env->getMethodID(cls, "put", "(ILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
          mids$[mid_remove_5e30662bac3edb02] = env->getMethodID(cls, "remove", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a69d58691b2f6a42, a0.this$, a1)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, const ::org::hipparchus::FieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_517fb93f7f6e6810, a0.this$, a1.this$)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, jint a1, const ::org::hipparchus::FieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_033ffb0d487f5fee, a0.this$, a1, a2.this$)) {}

      jboolean OpenIntToFieldHashMap::containsKey(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_containsKey_e95e4c7cd3dd17ff], a0);
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::get$(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_get_5e30662bac3edb02], a0));
      }

      ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator OpenIntToFieldHashMap::iterator() const
      {
        return ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_5bdce533ecf08445]));
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::put(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_put_344984fcd6be0043], a0, a1.this$));
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::remove(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remove_5e30662bac3edb02], a0));
      }

      jint OpenIntToFieldHashMap::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
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
      static PyObject *t_OpenIntToFieldHashMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_of_(t_OpenIntToFieldHashMap *self, PyObject *args);
      static int t_OpenIntToFieldHashMap_init_(t_OpenIntToFieldHashMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenIntToFieldHashMap_containsKey(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_get(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_iterator(t_OpenIntToFieldHashMap *self);
      static PyObject *t_OpenIntToFieldHashMap_put(t_OpenIntToFieldHashMap *self, PyObject *args);
      static PyObject *t_OpenIntToFieldHashMap_remove(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_size(t_OpenIntToFieldHashMap *self);
      static PyObject *t_OpenIntToFieldHashMap_get__parameters_(t_OpenIntToFieldHashMap *self, void *data);
      static PyGetSetDef t_OpenIntToFieldHashMap__fields_[] = {
        DECLARE_GET_FIELD(t_OpenIntToFieldHashMap, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenIntToFieldHashMap__methods_[] = {
        DECLARE_METHOD(t_OpenIntToFieldHashMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, of_, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, containsKey, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, get, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, iterator, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, put, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, remove, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, size, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToFieldHashMap)[] = {
        { Py_tp_methods, t_OpenIntToFieldHashMap__methods_ },
        { Py_tp_init, (void *) t_OpenIntToFieldHashMap_init_ },
        { Py_tp_getset, t_OpenIntToFieldHashMap__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToFieldHashMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToFieldHashMap, t_OpenIntToFieldHashMap, OpenIntToFieldHashMap);
      PyObject *t_OpenIntToFieldHashMap::wrap_Object(const OpenIntToFieldHashMap& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap *self = (t_OpenIntToFieldHashMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OpenIntToFieldHashMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap *self = (t_OpenIntToFieldHashMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OpenIntToFieldHashMap::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToFieldHashMap), &PY_TYPE_DEF(OpenIntToFieldHashMap), module, "OpenIntToFieldHashMap", 0);
      }

      void t_OpenIntToFieldHashMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "class_", make_descriptor(OpenIntToFieldHashMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "wrapfn_", make_descriptor(t_OpenIntToFieldHashMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToFieldHashMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToFieldHashMap::initializeClass, 1)))
          return NULL;
        return t_OpenIntToFieldHashMap::wrap_Object(OpenIntToFieldHashMap(((t_OpenIntToFieldHashMap *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToFieldHashMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToFieldHashMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToFieldHashMap_of_(t_OpenIntToFieldHashMap *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OpenIntToFieldHashMap_init_(t_OpenIntToFieldHashMap *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0));
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
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1));
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
            ::org::hipparchus::FieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KIK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1, a2));
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

      static PyObject *t_OpenIntToFieldHashMap_containsKey(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        jboolean result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.containsKey(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_get(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_iterator(t_OpenIntToFieldHashMap *self)
      {
        ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_OpenIntToFieldHashMap$Iterator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_OpenIntToFieldHashMap_put(t_OpenIntToFieldHashMap *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.put(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_remove(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_size(t_OpenIntToFieldHashMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_OpenIntToFieldHashMap_get__parameters_(t_OpenIntToFieldHashMap *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/EventBasedScheduler.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/time/DatesSelector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *EventBasedScheduler::class$ = NULL;
          jmethodID *EventBasedScheduler::mids$ = NULL;
          bool EventBasedScheduler::live$ = false;

          jclass EventBasedScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/EventBasedScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d08f52552693531c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;Lorg/orekit/propagation/Propagator;Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/estimation/measurements/generation/SignSemantic;)V");
              mids$[mid_measurementIsFeasible_ee2067c5768b6768] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EventBasedScheduler::EventBasedScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1, const ::org::orekit::propagation::Propagator & a2, const ::org::orekit::propagation::events::EventDetector & a3, const ::org::orekit::estimation::measurements::generation::SignSemantic & a4) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_d08f52552693531c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          jboolean EventBasedScheduler::measurementIsFeasible(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_measurementIsFeasible_ee2067c5768b6768], a0.this$);
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
          static PyObject *t_EventBasedScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventBasedScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventBasedScheduler_of_(t_EventBasedScheduler *self, PyObject *args);
          static int t_EventBasedScheduler_init_(t_EventBasedScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EventBasedScheduler_measurementIsFeasible(t_EventBasedScheduler *self, PyObject *arg);
          static PyObject *t_EventBasedScheduler_get__parameters_(t_EventBasedScheduler *self, void *data);
          static PyGetSetDef t_EventBasedScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_EventBasedScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EventBasedScheduler__methods_[] = {
            DECLARE_METHOD(t_EventBasedScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventBasedScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventBasedScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_EventBasedScheduler, measurementIsFeasible, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EventBasedScheduler)[] = {
            { Py_tp_methods, t_EventBasedScheduler__methods_ },
            { Py_tp_init, (void *) t_EventBasedScheduler_init_ },
            { Py_tp_getset, t_EventBasedScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EventBasedScheduler)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractScheduler),
            NULL
          };

          DEFINE_TYPE(EventBasedScheduler, t_EventBasedScheduler, EventBasedScheduler);
          PyObject *t_EventBasedScheduler::wrap_Object(const EventBasedScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_EventBasedScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_EventBasedScheduler *self = (t_EventBasedScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_EventBasedScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_EventBasedScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_EventBasedScheduler *self = (t_EventBasedScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_EventBasedScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(EventBasedScheduler), &PY_TYPE_DEF(EventBasedScheduler), module, "EventBasedScheduler", 0);
          }

          void t_EventBasedScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventBasedScheduler), "class_", make_descriptor(EventBasedScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventBasedScheduler), "wrapfn_", make_descriptor(t_EventBasedScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventBasedScheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EventBasedScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EventBasedScheduler::initializeClass, 1)))
              return NULL;
            return t_EventBasedScheduler::wrap_Object(EventBasedScheduler(((t_EventBasedScheduler *) arg)->object.this$));
          }
          static PyObject *t_EventBasedScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EventBasedScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_EventBasedScheduler_of_(t_EventBasedScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_EventBasedScheduler_init_(t_EventBasedScheduler *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DatesSelector a1((jobject) NULL);
            ::org::orekit::propagation::Propagator a2((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a3((jobject) NULL);
            ::org::orekit::estimation::measurements::generation::SignSemantic a4((jobject) NULL);
            PyTypeObject **p4;
            EventBasedScheduler object((jobject) NULL);

            if (!parseArgs(args, "KkkkK", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, ::org::orekit::time::DatesSelector::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::estimation::measurements::generation::SignSemantic::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::parameters_, &a1, &a2, &a3, &a4, &p4, ::org::orekit::estimation::measurements::generation::t_SignSemantic::parameters_))
            {
              INT_CALL(object = EventBasedScheduler(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EventBasedScheduler_measurementIsFeasible(t_EventBasedScheduler *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.measurementIsFeasible(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "measurementIsFeasible", arg);
            return NULL;
          }
          static PyObject *t_EventBasedScheduler_get__parameters_(t_EventBasedScheduler *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmData.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmData::class$ = NULL;
              jmethodID *OcmData::mids$ = NULL;
              bool OcmData::live$ = false;

              jclass OcmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d7a7e1344ab1a1eb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;Ljava/util/List;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                  mids$[mid_getCovarianceBlocks_a6156df500549a58] = env->getMethodID(cls, "getCovarianceBlocks", "()Ljava/util/List;");
                  mids$[mid_getManeuverBlocks_a6156df500549a58] = env->getMethodID(cls, "getManeuverBlocks", "()Ljava/util/List;");
                  mids$[mid_getOrbitDeterminationBlock_481eac8267dff431] = env->getMethodID(cls, "getOrbitDeterminationBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;");
                  mids$[mid_getPerturbationsBlock_2dafecc2409c2731] = env->getMethodID(cls, "getPerturbationsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;");
                  mids$[mid_getPhysicBlock_84885507afc9d2f0] = env->getMethodID(cls, "getPhysicBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;");
                  mids$[mid_getTrajectoryBlocks_a6156df500549a58] = env->getMethodID(cls, "getTrajectoryBlocks", "()Ljava/util/List;");
                  mids$[mid_getUserDefinedBlock_dc0ba09fd1c52b52] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmData::OcmData(const ::java::util::List & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties & a1, const ::java::util::List & a2, const ::java::util::List & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations & a4, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination & a5, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d7a7e1344ab1a1eb, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

              ::java::util::List OcmData::getCovarianceBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceBlocks_a6156df500549a58]));
              }

              ::java::util::List OcmData::getManeuverBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuverBlocks_a6156df500549a58]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination OcmData::getOrbitDeterminationBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination(env->callObjectMethod(this$, mids$[mid_getOrbitDeterminationBlock_481eac8267dff431]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations OcmData::getPerturbationsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations(env->callObjectMethod(this$, mids$[mid_getPerturbationsBlock_2dafecc2409c2731]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties OcmData::getPhysicBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties(env->callObjectMethod(this$, mids$[mid_getPhysicBlock_84885507afc9d2f0]));
              }

              ::java::util::List OcmData::getTrajectoryBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajectoryBlocks_a6156df500549a58]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OcmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_dc0ba09fd1c52b52]));
              }

              void OcmData::validate(jdouble a0) const
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
          namespace odm {
            namespace ocm {
              static PyObject *t_OcmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OcmData_init_(t_OcmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmData_getCovarianceBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getManeuverBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getOrbitDeterminationBlock(t_OcmData *self);
              static PyObject *t_OcmData_getPerturbationsBlock(t_OcmData *self);
              static PyObject *t_OcmData_getPhysicBlock(t_OcmData *self);
              static PyObject *t_OcmData_getTrajectoryBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getUserDefinedBlock(t_OcmData *self);
              static PyObject *t_OcmData_validate(t_OcmData *self, PyObject *arg);
              static PyObject *t_OcmData_get__covarianceBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__maneuverBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__orbitDeterminationBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__perturbationsBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__physicBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__trajectoryBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__userDefinedBlock(t_OcmData *self, void *data);
              static PyGetSetDef t_OcmData__fields_[] = {
                DECLARE_GET_FIELD(t_OcmData, covarianceBlocks),
                DECLARE_GET_FIELD(t_OcmData, maneuverBlocks),
                DECLARE_GET_FIELD(t_OcmData, orbitDeterminationBlock),
                DECLARE_GET_FIELD(t_OcmData, perturbationsBlock),
                DECLARE_GET_FIELD(t_OcmData, physicBlock),
                DECLARE_GET_FIELD(t_OcmData, trajectoryBlocks),
                DECLARE_GET_FIELD(t_OcmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmData__methods_[] = {
                DECLARE_METHOD(t_OcmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmData, getCovarianceBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getManeuverBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getOrbitDeterminationBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getPerturbationsBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getPhysicBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getTrajectoryBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmData)[] = {
                { Py_tp_methods, t_OcmData__methods_ },
                { Py_tp_init, (void *) t_OcmData_init_ },
                { Py_tp_getset, t_OcmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OcmData, t_OcmData, OcmData);

              void t_OcmData::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmData), &PY_TYPE_DEF(OcmData), module, "OcmData", 0);
              }

              void t_OcmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "class_", make_descriptor(OcmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "wrapfn_", make_descriptor(t_OcmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OcmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmData::initializeClass, 1)))
                  return NULL;
                return t_OcmData::wrap_Object(OcmData(((t_OcmData *) arg)->object.this$));
              }
              static PyObject *t_OcmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OcmData_init_(t_OcmData *self, PyObject *args, PyObject *kwds)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination a5((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a6((jobject) NULL);
                OcmData object((jobject) NULL);

                if (!parseArgs(args, "KkKKkkk", ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::java::util::t_List::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = OcmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmData_getCovarianceBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitCovarianceHistory));
              }

              static PyObject *t_OcmData_getManeuverBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitManeuverHistory));
              }

              static PyObject *t_OcmData_getOrbitDeterminationBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitDetermination::wrap_Object(result);
              }

              static PyObject *t_OcmData_getPerturbationsBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations result((jobject) NULL);
                OBJ_CALL(result = self->object.getPerturbationsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Perturbations::wrap_Object(result);
              }

              static PyObject *t_OcmData_getPhysicBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitPhysicalProperties::wrap_Object(result);
              }

              static PyObject *t_OcmData_getTrajectoryBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajectoryBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryStateHistory));
              }

              static PyObject *t_OcmData_getUserDefinedBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_OcmData_validate(t_OcmData *self, PyObject *arg)
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

              static PyObject *t_OcmData_get__covarianceBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__maneuverBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__orbitDeterminationBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitDetermination::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__perturbationsBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations value((jobject) NULL);
                OBJ_CALL(value = self->object.getPerturbationsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Perturbations::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__physicBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitPhysicalProperties::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__trajectoryBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajectoryBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__userDefinedBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                OBJ_CALL(value = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
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
#include "org/orekit/models/earth/ionosphere/KlobucharIonoCoefficientsLoader.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "org/orekit/time/DateComponents.h"
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
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_2a9119a84e92f14a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getAlpha_7cdc325af0834901] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_getBeta_7cdc325af0834901] = env->getMethodID(cls, "getBeta", "()[D");
              mids$[mid_getSupportedNames_0090f7797e403f43] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_loadKlobucharIonosphericCoefficients_7ae3461a92a43152] = env->getMethodID(cls, "loadKlobucharIonosphericCoefficients", "()V");
              mids$[mid_loadKlobucharIonosphericCoefficients_cd567be04bee4d03] = env->getMethodID(cls, "loadKlobucharIonosphericCoefficients", "(Lorg/orekit/time/DateComponents;)V");
              mids$[mid_stillAcceptsData_e470b6d9e0d979db] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader() : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_2a9119a84e92f14a, a0.this$, a1.this$)) {}

          JArray< jdouble > KlobucharIonoCoefficientsLoader::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_7cdc325af0834901]));
          }

          JArray< jdouble > KlobucharIonoCoefficientsLoader::getBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBeta_7cdc325af0834901]));
          }

          ::java::lang::String KlobucharIonoCoefficientsLoader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_0090f7797e403f43]));
          }

          void KlobucharIonoCoefficientsLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
          }

          void KlobucharIonoCoefficientsLoader::loadKlobucharIonosphericCoefficients() const
          {
            env->callVoidMethod(this$, mids$[mid_loadKlobucharIonosphericCoefficients_7ae3461a92a43152]);
          }

          void KlobucharIonoCoefficientsLoader::loadKlobucharIonosphericCoefficients(const ::org::orekit::time::DateComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_loadKlobucharIonosphericCoefficients_cd567be04bee4d03], a0.this$);
          }

          jboolean KlobucharIonoCoefficientsLoader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_e470b6d9e0d979db]);
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
#include "org/orekit/propagation/conversion/EulerFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EulerFieldIntegratorBuilder::class$ = NULL;
        jmethodID *EulerFieldIntegratorBuilder::mids$ = NULL;
        bool EulerFieldIntegratorBuilder::live$ = false;

        jclass EulerFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EulerFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_03a16642f77779e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerFieldIntegratorBuilder::EulerFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        EulerFieldIntegratorBuilder::EulerFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_03a16642f77779e7, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator EulerFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_79616f78bb6df44f], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_EulerFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegratorBuilder_of_(t_EulerFieldIntegratorBuilder *self, PyObject *args);
        static int t_EulerFieldIntegratorBuilder_init_(t_EulerFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerFieldIntegratorBuilder_buildIntegrator(t_EulerFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_EulerFieldIntegratorBuilder_get__parameters_(t_EulerFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_EulerFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_EulerFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_EulerFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_EulerFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_EulerFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(EulerFieldIntegratorBuilder, t_EulerFieldIntegratorBuilder, EulerFieldIntegratorBuilder);
        PyObject *t_EulerFieldIntegratorBuilder::wrap_Object(const EulerFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegratorBuilder *self = (t_EulerFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EulerFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegratorBuilder *self = (t_EulerFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EulerFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerFieldIntegratorBuilder), &PY_TYPE_DEF(EulerFieldIntegratorBuilder), module, "EulerFieldIntegratorBuilder", 0);
        }

        void t_EulerFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "class_", make_descriptor(EulerFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_EulerFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_EulerFieldIntegratorBuilder::wrap_Object(EulerFieldIntegratorBuilder(((t_EulerFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EulerFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EulerFieldIntegratorBuilder_of_(t_EulerFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EulerFieldIntegratorBuilder_init_(t_EulerFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              EulerFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = EulerFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              EulerFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = EulerFieldIntegratorBuilder(a0));
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

        static PyObject *t_EulerFieldIntegratorBuilder_buildIntegrator(t_EulerFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(EulerFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_EulerFieldIntegratorBuilder_get__parameters_(t_EulerFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Set.h"
#include "java/util/Iterator.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator.h"
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
        mids$[mid_add_229c87223f486349] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_d88dbdb69255b770] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_229c87223f486349] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_d88dbdb69255b770] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_copyOf_14ed8684ec2be5b6] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Collection;)Ljava/util/Set;");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_of_e9e1a6780fe94297] = env->getStaticMethodID(cls, "of", "()Ljava/util/Set;");
        mids$[mid_of_a448a5640f4dae04] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_161cf4838fdab35b] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_b80a3b2c26ae5036] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_9814c12f9c3c3e02] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_6ce84add5c98d9e4] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_634e7fd3a30c4709] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_f7a0cbc7ff4dca4b] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_81bd569de7e9f0be] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_cad2004cb84dd193] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_a42288531466f86b] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_7c523e7b0bbcfc68] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_remove_229c87223f486349] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_d88dbdb69255b770] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_d88dbdb69255b770] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_df0341cda53d4d48] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_toArray_e81d7907eea7e008] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_66041b51ef6ee21d] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Set::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_229c87223f486349], a0.this$);
    }

    jboolean Set::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_d88dbdb69255b770], a0.this$);
    }

    void Set::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
    }

    jboolean Set::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_229c87223f486349], a0.this$);
    }

    jboolean Set::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_d88dbdb69255b770], a0.this$);
    }

    Set Set::copyOf(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_copyOf_14ed8684ec2be5b6], a0.this$));
    }

    jboolean Set::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jint Set::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean Set::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    ::java::util::Iterator Set::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
    }

    Set Set::of()
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_e9e1a6780fe94297]));
    }

    Set Set::of(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_a448a5640f4dae04], a0.this$));
    }

    Set Set::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_161cf4838fdab35b], a0.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_b80a3b2c26ae5036], a0.this$, a1.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_9814c12f9c3c3e02], a0.this$, a1.this$, a2.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_6ce84add5c98d9e4], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_634e7fd3a30c4709], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_f7a0cbc7ff4dca4b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_81bd569de7e9f0be], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_cad2004cb84dd193], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_a42288531466f86b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_7c523e7b0bbcfc68], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    jboolean Set::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_229c87223f486349], a0.this$);
    }

    jboolean Set::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_d88dbdb69255b770], a0.this$);
    }

    jboolean Set::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_d88dbdb69255b770], a0.this$);
    }

    jint Set::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
    }

    ::java::util::Spliterator Set::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_df0341cda53d4d48]));
    }

    JArray< ::java::lang::Object > Set::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_e81d7907eea7e008]));
    }

    JArray< ::java::lang::Object > Set::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_66041b51ef6ee21d], a0.this$));
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$ManeuvrableConsumer::class$ = NULL;
            jmethodID *ParseToken$ManeuvrableConsumer::mids$ = NULL;
            bool ParseToken$ManeuvrableConsumer::live$ = false;

            jclass ParseToken$ManeuvrableConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_c7a507e75d4e7ebb] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$ManeuvrableConsumer::accept(const ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_c7a507e75d4e7ebb], a0.this$);
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
            static PyObject *t_ParseToken$ManeuvrableConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$ManeuvrableConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$ManeuvrableConsumer_accept(t_ParseToken$ManeuvrableConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$ManeuvrableConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$ManeuvrableConsumer)[] = {
              { Py_tp_methods, t_ParseToken$ManeuvrableConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$ManeuvrableConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$ManeuvrableConsumer, t_ParseToken$ManeuvrableConsumer, ParseToken$ManeuvrableConsumer);

            void t_ParseToken$ManeuvrableConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$ManeuvrableConsumer), &PY_TYPE_DEF(ParseToken$ManeuvrableConsumer), module, "ParseToken$ManeuvrableConsumer", 0);
            }

            void t_ParseToken$ManeuvrableConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "class_", make_descriptor(ParseToken$ManeuvrableConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "wrapfn_", make_descriptor(t_ParseToken$ManeuvrableConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$ManeuvrableConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$ManeuvrableConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$ManeuvrableConsumer::wrap_Object(ParseToken$ManeuvrableConsumer(((t_ParseToken$ManeuvrableConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$ManeuvrableConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$ManeuvrableConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$ManeuvrableConsumer_accept(t_ParseToken$ManeuvrableConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/io/Reader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$ReaderOpener::class$ = NULL;
      jmethodID *DataSource$ReaderOpener::mids$ = NULL;
      bool DataSource$ReaderOpener::live$ = false;

      jclass DataSource$ReaderOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$ReaderOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openOnce_8476c88b3f0eb61c] = env->getMethodID(cls, "openOnce", "()Ljava/io/Reader;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::Reader DataSource$ReaderOpener::openOnce() const
      {
        return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_openOnce_8476c88b3f0eb61c]));
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
      static PyObject *t_DataSource$ReaderOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$ReaderOpener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$ReaderOpener_openOnce(t_DataSource$ReaderOpener *self);

      static PyMethodDef t_DataSource$ReaderOpener__methods_[] = {
        DECLARE_METHOD(t_DataSource$ReaderOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$ReaderOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$ReaderOpener, openOnce, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$ReaderOpener)[] = {
        { Py_tp_methods, t_DataSource$ReaderOpener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$ReaderOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$ReaderOpener, t_DataSource$ReaderOpener, DataSource$ReaderOpener);

      void t_DataSource$ReaderOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$ReaderOpener), &PY_TYPE_DEF(DataSource$ReaderOpener), module, "DataSource$ReaderOpener", 0);
      }

      void t_DataSource$ReaderOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "class_", make_descriptor(DataSource$ReaderOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "wrapfn_", make_descriptor(t_DataSource$ReaderOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$ReaderOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$ReaderOpener::initializeClass, 1)))
          return NULL;
        return t_DataSource$ReaderOpener::wrap_Object(DataSource$ReaderOpener(((t_DataSource$ReaderOpener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$ReaderOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$ReaderOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$ReaderOpener_openOnce(t_DataSource$ReaderOpener *self)
      {
        ::java::io::Reader result((jobject) NULL);
        OBJ_CALL(result = self->object.openOnce());
        return ::java::io::t_Reader::wrap_Object(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmDataSubStructureKey::class$ = NULL;
              jmethodID *AcmDataSubStructureKey::mids$ = NULL;
              bool AcmDataSubStructureKey::live$ = false;
              AcmDataSubStructureKey *AcmDataSubStructureKey::AD = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::ATT = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::COV = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::MAN = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::PHYS = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::USER = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::ad = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::att = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::cov = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::man = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::phys = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::user = NULL;

              jclass AcmDataSubStructureKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_fbaf0d209c4ad042] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;)Z");
                  mids$[mid_valueOf_8768fcaf767e62f1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;");
                  mids$[mid_values_17552994656f8b79] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AD = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "AD", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  ATT = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "ATT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  COV = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  MAN = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  PHYS = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  USER = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  ad = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "ad", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  att = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "att", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  cov = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "cov", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  man = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "man", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  phys = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "phys", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  user = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "user", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AcmDataSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser & a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_fbaf0d209c4ad042], a0.this$, a1.this$);
              }

              AcmDataSubStructureKey AcmDataSubStructureKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AcmDataSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8768fcaf767e62f1], a0.this$));
              }

              JArray< AcmDataSubStructureKey > AcmDataSubStructureKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmDataSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_17552994656f8b79]));
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
              static PyObject *t_AcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmDataSubStructureKey_of_(t_AcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_process(t_AcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_values(PyTypeObject *type);
              static PyObject *t_AcmDataSubStructureKey_get__parameters_(t_AcmDataSubStructureKey *self, void *data);
              static PyGetSetDef t_AcmDataSubStructureKey__fields_[] = {
                DECLARE_GET_FIELD(t_AcmDataSubStructureKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmDataSubStructureKey__methods_[] = {
                DECLARE_METHOD(t_AcmDataSubStructureKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmDataSubStructureKey)[] = {
                { Py_tp_methods, t_AcmDataSubStructureKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmDataSubStructureKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmDataSubStructureKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AcmDataSubStructureKey, t_AcmDataSubStructureKey, AcmDataSubStructureKey);
              PyObject *t_AcmDataSubStructureKey::wrap_Object(const AcmDataSubStructureKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmDataSubStructureKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmDataSubStructureKey *self = (t_AcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AcmDataSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmDataSubStructureKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmDataSubStructureKey *self = (t_AcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AcmDataSubStructureKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmDataSubStructureKey), &PY_TYPE_DEF(AcmDataSubStructureKey), module, "AcmDataSubStructureKey", 0);
              }

              void t_AcmDataSubStructureKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "class_", make_descriptor(AcmDataSubStructureKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "wrapfn_", make_descriptor(t_AcmDataSubStructureKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmDataSubStructureKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "AD", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::AD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "ATT", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::ATT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "COV", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "MAN", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "PHYS", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "USER", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::USER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "ad", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::ad)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "att", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::att)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "cov", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::cov)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "man", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::man)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "phys", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::phys)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "user", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::user)));
              }

              static PyObject *t_AcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmDataSubStructureKey::initializeClass, 1)))
                  return NULL;
                return t_AcmDataSubStructureKey::wrap_Object(AcmDataSubStructureKey(((t_AcmDataSubStructureKey *) arg)->object.this$));
              }
              static PyObject *t_AcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmDataSubStructureKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmDataSubStructureKey_of_(t_AcmDataSubStructureKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmDataSubStructureKey_process(t_AcmDataSubStructureKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::parameters_))
                {
                  OBJ_CALL(result = self->object.process(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AcmDataSubStructureKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmDataSubStructureKey::valueOf(a0));
                  return t_AcmDataSubStructureKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AcmDataSubStructureKey_values(PyTypeObject *type)
              {
                JArray< AcmDataSubStructureKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmDataSubStructureKey::values());
                return JArray<jobject>(result.this$).wrap(t_AcmDataSubStructureKey::wrap_jobject);
              }
              static PyObject *t_AcmDataSubStructureKey_get__parameters_(t_AcmDataSubStructureKey *self, void *data)
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
#include "org/orekit/propagation/events/FieldEventState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldEventState$EventOccurrence.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventState::class$ = NULL;
        jmethodID *FieldEventState::mids$ = NULL;
        bool FieldEventState::live$ = false;

        jclass FieldEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1843b26af41f9c8e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_doEvent_712613581bbc2369] = env->getMethodID(cls, "doEvent", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/events/FieldEventState$EventOccurrence;");
            mids$[mid_evaluateStep_9bee9e614071a5f1] = env->getMethodID(cls, "evaluateStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)Z");
            mids$[mid_getEventDate_09b0a926600dfc14] = env->getMethodID(cls, "getEventDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getEventDetector_9afb3f6694da2222] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getPendingEvent_e470b6d9e0d979db] = env->getMethodID(cls, "getPendingEvent", "()Z");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_reinitializeBegin_9eedcf3b856fcc75] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_tryAdvance_d8b60a0d4cf666c7] = env->getMethodID(cls, "tryAdvance", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventState::FieldEventState(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1843b26af41f9c8e, a0.this$)) {}

        ::org::orekit::propagation::events::FieldEventState$EventOccurrence FieldEventState::doEvent(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::orekit::propagation::events::FieldEventState$EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_712613581bbc2369], a0.this$));
        }

        jboolean FieldEventState::evaluateStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_9bee9e614071a5f1], a0.this$);
        }

        ::org::orekit::time::FieldAbsoluteDate FieldEventState::getEventDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEventDate_09b0a926600dfc14]));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventState::getEventDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_9afb3f6694da2222]));
        }

        jboolean FieldEventState::getPendingEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getPendingEvent_e470b6d9e0d979db]);
        }

        void FieldEventState::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
        }

        void FieldEventState::reinitializeBegin(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_9eedcf3b856fcc75], a0.this$);
        }

        jboolean FieldEventState::tryAdvance(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_d8b60a0d4cf666c7], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args);
        static int t_FieldEventState_init_(t_FieldEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_getEventDate(t_FieldEventState *self);
        static PyObject *t_FieldEventState_getEventDetector(t_FieldEventState *self);
        static PyObject *t_FieldEventState_getPendingEvent(t_FieldEventState *self);
        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_reinitializeBegin(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_tryAdvance(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_get__eventDate(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__eventDetector(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__pendingEvent(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data);
        static PyGetSetDef t_FieldEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState, eventDate),
          DECLARE_GET_FIELD(t_FieldEventState, eventDetector),
          DECLARE_GET_FIELD(t_FieldEventState, pendingEvent),
          DECLARE_GET_FIELD(t_FieldEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState__methods_[] = {
          DECLARE_METHOD(t_FieldEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldEventState, getEventDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, getPendingEvent, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_FieldEventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState)[] = {
          { Py_tp_methods, t_FieldEventState__methods_ },
          { Py_tp_init, (void *) t_FieldEventState_init_ },
          { Py_tp_getset, t_FieldEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState, t_FieldEventState, FieldEventState);
        PyObject *t_FieldEventState::wrap_Object(const FieldEventState& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldEventState::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState), &PY_TYPE_DEF(FieldEventState), module, "FieldEventState", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "EventOccurrence", make_descriptor(&PY_TYPE_DEF(FieldEventState$EventOccurrence)));
        }

        void t_FieldEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "class_", make_descriptor(FieldEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "wrapfn_", make_descriptor(t_FieldEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventState::initializeClass, 1)))
            return NULL;
          return t_FieldEventState::wrap_Object(FieldEventState(((t_FieldEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventState_init_(t_FieldEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldEventState object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEventState$EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::orekit::propagation::events::t_FieldEventState$EventOccurrence::wrap_Object(result, self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_getEventDate(t_FieldEventState *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldEventState_getEventDetector(t_FieldEventState *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventState_getPendingEvent(t_FieldEventState *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getPendingEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args)
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

        static PyObject *t_FieldEventState_reinitializeBegin(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_tryAdvance(t_FieldEventState *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState_get__eventDate(t_FieldEventState *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldEventState_get__eventDetector(t_FieldEventState *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldEventState_get__pendingEvent(t_FieldEventState *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getPendingEvent());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedAngularCoordinates::class$ = NULL;
      jmethodID *TimeStampedAngularCoordinates::mids$ = NULL;
      bool TimeStampedAngularCoordinates::live$ = false;

      jclass TimeStampedAngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedAngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4dd695ef7f847f99] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_35ede516ab2a5b7c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_8b0e1234e87551c9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_80d87769fddea175] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_addOffset_40af0b84b03b166a] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_revert_8b3d104eb3a71bfc] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_shiftedBy_161d918b0259e11d] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_subtractOffset_40af0b84b03b166a] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_4dd695ef7f847f99, a0.this$, a1.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_35ede516ab2a5b7c, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8b0e1234e87551c9, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_80d87769fddea175, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::addOffset(const ::org::orekit::utils::AngularCoordinates & a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_40af0b84b03b166a], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate TimeStampedAngularCoordinates::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::revert() const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_8b3d104eb3a71bfc]));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_161d918b0259e11d], a0));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::subtractOffset(const ::org::orekit::utils::AngularCoordinates & a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_40af0b84b03b166a], a0.this$));
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
      static PyObject *t_TimeStampedAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedAngularCoordinates_init_(t_TimeStampedAngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedAngularCoordinates_addOffset(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_getDate(t_TimeStampedAngularCoordinates *self);
      static PyObject *t_TimeStampedAngularCoordinates_revert(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_shiftedBy(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_subtractOffset(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_get__date(t_TimeStampedAngularCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedAngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedAngularCoordinates, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedAngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, addOffset, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, revert, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, subtractOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedAngularCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedAngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedAngularCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedAngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedAngularCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::AngularCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedAngularCoordinates, t_TimeStampedAngularCoordinates, TimeStampedAngularCoordinates);

      void t_TimeStampedAngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedAngularCoordinates), &PY_TYPE_DEF(TimeStampedAngularCoordinates), module, "TimeStampedAngularCoordinates", 0);
      }

      void t_TimeStampedAngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinates), "class_", make_descriptor(TimeStampedAngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinates), "wrapfn_", make_descriptor(t_TimeStampedAngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedAngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedAngularCoordinates::wrap_Object(TimeStampedAngularCoordinates(((t_TimeStampedAngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedAngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedAngularCoordinates_init_(t_TimeStampedAngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            jdouble a5;
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkkkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_TimeStampedAngularCoordinates_addOffset(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::AngularCoordinates a0((jobject) NULL);
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::utils::AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "addOffset", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_getDate(t_TimeStampedAngularCoordinates *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedAngularCoordinates_revert(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.revert());
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "revert", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_shiftedBy(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        jdouble a0;
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_subtractOffset(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::AngularCoordinates a0((jobject) NULL);
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::utils::AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "subtractOffset", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_get__date(t_TimeStampedAngularCoordinates *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmWriter::class$ = NULL;
            jmethodID *TdmWriter::mids$ = NULL;
            bool TdmWriter::live$ = false;
            jdouble TdmWriter::CCSDS_TDM_VERS = (jdouble) 0;
            jint TdmWriter::KVN_PADDING_WIDTH = (jint) 0;

            jclass TdmWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_18b75d37ca0e62ff] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)V");
                mids$[mid_writeSegmentContent_17bd99da1e106002] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CCSDS_TDM_VERS = env->getStaticDoubleField(cls, "CCSDS_TDM_VERS");
                KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmWriter::TdmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_18b75d37ca0e62ff, a0.this$, a1.this$, a2.this$)) {}
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
            static PyObject *t_TdmWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmWriter_of_(t_TdmWriter *self, PyObject *args);
            static int t_TdmWriter_init_(t_TdmWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_TdmWriter_get__parameters_(t_TdmWriter *self, void *data);
            static PyGetSetDef t_TdmWriter__fields_[] = {
              DECLARE_GET_FIELD(t_TdmWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmWriter__methods_[] = {
              DECLARE_METHOD(t_TdmWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmWriter, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmWriter)[] = {
              { Py_tp_methods, t_TdmWriter__methods_ },
              { Py_tp_init, (void *) t_TdmWriter_init_ },
              { Py_tp_getset, t_TdmWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
              NULL
            };

            DEFINE_TYPE(TdmWriter, t_TdmWriter, TdmWriter);
            PyObject *t_TdmWriter::wrap_Object(const TdmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmWriter *self = (t_TdmWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_TdmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmWriter *self = (t_TdmWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_TdmWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmWriter), &PY_TYPE_DEF(TdmWriter), module, "TdmWriter", 0);
            }

            void t_TdmWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "class_", make_descriptor(TdmWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "wrapfn_", make_descriptor(t_TdmWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "CCSDS_TDM_VERS", make_descriptor(TdmWriter::CCSDS_TDM_VERS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "KVN_PADDING_WIDTH", make_descriptor(TdmWriter::KVN_PADDING_WIDTH));
            }

            static PyObject *t_TdmWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmWriter::initializeClass, 1)))
                return NULL;
              return t_TdmWriter::wrap_Object(TdmWriter(((t_TdmWriter *) arg)->object.this$));
            }
            static PyObject *t_TdmWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmWriter_of_(t_TdmWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_TdmWriter_init_(t_TdmWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::utils::IERSConventions a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::data::DataContext a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a2((jobject) NULL);
              TdmWriter object((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
              {
                INT_CALL(object = TdmWriter(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(TdmHeader);
                self->parameters[2] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(Tdm);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_TdmWriter_get__parameters_(t_TdmWriter *self, void *data)
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
#include "java/lang/Float.h"
#include "java/lang/Float.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
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
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
        mids$[mid_init$_ca234f4580d28ea3] = env->getMethodID(cls, "<init>", "(F)V");
        mids$[mid_byteValue_1d06dd1980a98d13] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_643e38b841cbf17e] = env->getStaticMethodID(cls, "compare", "(FF)I");
        mids$[mid_compareTo_75a46186f4f693e1] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Float;)I");
        mids$[mid_doubleValue_456d9a2f64d6b28d] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatToIntBits_255f1fc90438be86] = env->getStaticMethodID(cls, "floatToIntBits", "(F)I");
        mids$[mid_floatToRawIntBits_255f1fc90438be86] = env->getStaticMethodID(cls, "floatToRawIntBits", "(F)I");
        mids$[mid_floatValue_966c782d3223854d] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_255f1fc90438be86] = env->getStaticMethodID(cls, "hashCode", "(F)I");
        mids$[mid_intBitsToFloat_25b6ee18af4e3c01] = env->getStaticMethodID(cls, "intBitsToFloat", "(I)F");
        mids$[mid_intValue_f2f64475e4580546] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_isFinite_17deb5e1968726fd] = env->getStaticMethodID(cls, "isFinite", "(F)Z");
        mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isInfinite_17deb5e1968726fd] = env->getStaticMethodID(cls, "isInfinite", "(F)Z");
        mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_isNaN_17deb5e1968726fd] = env->getStaticMethodID(cls, "isNaN", "(F)Z");
        mids$[mid_longValue_a27fc9afd27e559d] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_max_c50b565e19875e8e] = env->getStaticMethodID(cls, "max", "(FF)F");
        mids$[mid_min_c50b565e19875e8e] = env->getStaticMethodID(cls, "min", "(FF)F");
        mids$[mid_parseFloat_bf9c992a58fb3c9b] = env->getStaticMethodID(cls, "parseFloat", "(Ljava/lang/String;)F");
        mids$[mid_shortValue_f89720844d790ad7] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_sum_c50b565e19875e8e] = env->getStaticMethodID(cls, "sum", "(FF)F");
        mids$[mid_toHexString_9173130ae370f7b2] = env->getStaticMethodID(cls, "toHexString", "(F)Ljava/lang/String;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_9173130ae370f7b2] = env->getStaticMethodID(cls, "toString", "(F)Ljava/lang/String;");
        mids$[mid_valueOf_d222c39c2be0b7e6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Float;");
        mids$[mid_valueOf_453bc60b40136aed] = env->getStaticMethodID(cls, "valueOf", "(F)Ljava/lang/Float;");

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

    Float::Float(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    Float::Float(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

    Float::Float(jfloat a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_ca234f4580d28ea3, a0)) {}

    jbyte Float::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_1d06dd1980a98d13]);
    }

    jint Float::compare(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_643e38b841cbf17e], a0, a1);
    }

    jint Float::compareTo(const Float & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_75a46186f4f693e1], a0.this$);
    }

    jdouble Float::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_456d9a2f64d6b28d]);
    }

    jboolean Float::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jint Float::floatToIntBits(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_floatToIntBits_255f1fc90438be86], a0);
    }

    jint Float::floatToRawIntBits(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_floatToRawIntBits_255f1fc90438be86], a0);
    }

    jfloat Float::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_966c782d3223854d]);
    }

    jint Float::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jint Float::hashCode(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_255f1fc90438be86], a0);
    }

    jfloat Float::intBitsToFloat(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_intBitsToFloat_25b6ee18af4e3c01], a0);
    }

    jint Float::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_f2f64475e4580546]);
    }

    jboolean Float::isFinite(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isFinite_17deb5e1968726fd], a0);
    }

    jboolean Float::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
    }

    jboolean Float::isInfinite(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isInfinite_17deb5e1968726fd], a0);
    }

    jboolean Float::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
    }

    jboolean Float::isNaN(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isNaN_17deb5e1968726fd], a0);
    }

    jlong Float::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_a27fc9afd27e559d]);
    }

    jfloat Float::max$(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_max_c50b565e19875e8e], a0, a1);
    }

    jfloat Float::min$(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_min_c50b565e19875e8e], a0, a1);
    }

    jfloat Float::parseFloat(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_parseFloat_bf9c992a58fb3c9b], a0.this$);
    }

    jshort Float::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_f89720844d790ad7]);
    }

    jfloat Float::sum(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_sum_c50b565e19875e8e], a0, a1);
    }

    ::java::lang::String Float::toHexString(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_9173130ae370f7b2], a0));
    }

    ::java::lang::String Float::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    ::java::lang::String Float::toString(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_9173130ae370f7b2], a0));
    }

    Float Float::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Float(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d222c39c2be0b7e6], a0.this$));
    }

    Float Float::valueOf(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Float(env->callStaticObjectMethod(cls, mids$[mid_valueOf_453bc60b40136aed], a0));
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
#include "org/hipparchus/analysis/function/StepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *StepFunction::class$ = NULL;
        jmethodID *StepFunction::mids$ = NULL;
        bool StepFunction::live$ = false;

        jclass StepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/StepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0d03c8a1d7f56f02] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepFunction::StepFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d03c8a1d7f56f02, a0.this$, a1.this$)) {}

        jdouble StepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
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
        static PyObject *t_StepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepFunction_init_(t_StepFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepFunction_value(t_StepFunction *self, PyObject *arg);

        static PyMethodDef t_StepFunction__methods_[] = {
          DECLARE_METHOD(t_StepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepFunction, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepFunction)[] = {
          { Py_tp_methods, t_StepFunction__methods_ },
          { Py_tp_init, (void *) t_StepFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepFunction, t_StepFunction, StepFunction);

        void t_StepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(StepFunction), &PY_TYPE_DEF(StepFunction), module, "StepFunction", 0);
        }

        void t_StepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "class_", make_descriptor(StepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "wrapfn_", make_descriptor(t_StepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepFunction::initializeClass, 1)))
            return NULL;
          return t_StepFunction::wrap_Object(StepFunction(((t_StepFunction *) arg)->object.this$));
        }
        static PyObject *t_StepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepFunction_init_(t_StepFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          StepFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = StepFunction(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StepFunction_value(t_StepFunction *self, PyObject *arg)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractTimeScales.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/GMSTScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractTimeScales::class$ = NULL;
      jmethodID *AbstractTimeScales::mids$ = NULL;
      bool AbstractTimeScales::live$ = false;

      jclass AbstractTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_createBesselianEpoch_a76f1ca2cc1b76e5] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_a76f1ca2cc1b76e5] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getBeidouEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_aaa854c403487cf3] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGMST_9d529a30e942a554] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGalileoEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIrnssEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_aaa854c403487cf3] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_aaa854c403487cf3] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQzssEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getUT1_603d1058a5002a04] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_7b22e00b4ab08eba] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getEopHistory_7544a283da003d74] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractTimeScales::AbstractTimeScales() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::createBesselianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createBesselianEpoch_a76f1ca2cc1b76e5], a0));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::createJulianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createJulianEpoch_a76f1ca2cc1b76e5], a0));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getBeidouEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeidouEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getCcsdsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCcsdsEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getFiftiesEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFiftiesEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getFutureInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFutureInfinity_aaa854c403487cf3]));
      }

      ::org::orekit::time::GMSTScale AbstractTimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_9d529a30e942a554], a0.this$, a1));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGalileoEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGalileoEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGlonassEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGlonassEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGpsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGpsEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getIrnssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getIrnssEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJ2000Epoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJ2000Epoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJavaEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJavaEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJulianEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getModifiedJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getModifiedJulianEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getPastInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPastInfinity_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getQzssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getQzssEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::UT1Scale AbstractTimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_603d1058a5002a04], a0.this$, a1));
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
      static PyObject *t_AbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractTimeScales_init_(t_AbstractTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractTimeScales_createBesselianEpoch(t_AbstractTimeScales *self, PyObject *arg);
      static PyObject *t_AbstractTimeScales_createJulianEpoch(t_AbstractTimeScales *self, PyObject *arg);
      static PyObject *t_AbstractTimeScales_getBeidouEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getCcsdsEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getFiftiesEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getFutureInfinity(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGMST(t_AbstractTimeScales *self, PyObject *args);
      static PyObject *t_AbstractTimeScales_getGalileoEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGlonassEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGpsEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getIrnssEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJ2000Epoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJavaEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJulianEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getModifiedJulianEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getPastInfinity(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getQzssEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getUT1(t_AbstractTimeScales *self, PyObject *args);
      static PyObject *t_AbstractTimeScales_get__beidouEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__ccsdsEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__fiftiesEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__futureInfinity(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__galileoEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__glonassEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__gpsEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__irnssEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__j2000Epoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__javaEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__julianEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__modifiedJulianEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__pastInfinity(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__qzssEpoch(t_AbstractTimeScales *self, void *data);
      static PyGetSetDef t_AbstractTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractTimeScales, beidouEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, ccsdsEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, fiftiesEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, futureInfinity),
        DECLARE_GET_FIELD(t_AbstractTimeScales, galileoEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, glonassEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, gpsEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, irnssEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, j2000Epoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, javaEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, julianEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, modifiedJulianEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, pastInfinity),
        DECLARE_GET_FIELD(t_AbstractTimeScales, qzssEpoch),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractTimeScales__methods_[] = {
        DECLARE_METHOD(t_AbstractTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeScales, createBesselianEpoch, METH_O),
        DECLARE_METHOD(t_AbstractTimeScales, createJulianEpoch, METH_O),
        DECLARE_METHOD(t_AbstractTimeScales, getBeidouEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getCcsdsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getFiftiesEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getFutureInfinity, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGalileoEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGlonassEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGpsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getIrnssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJ2000Epoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJavaEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getModifiedJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getPastInfinity, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getQzssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getUT1, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractTimeScales)[] = {
        { Py_tp_methods, t_AbstractTimeScales__methods_ },
        { Py_tp_init, (void *) t_AbstractTimeScales_init_ },
        { Py_tp_getset, t_AbstractTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractTimeScales)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractTimeScales, t_AbstractTimeScales, AbstractTimeScales);

      void t_AbstractTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractTimeScales), &PY_TYPE_DEF(AbstractTimeScales), module, "AbstractTimeScales", 0);
      }

      void t_AbstractTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "class_", make_descriptor(AbstractTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "wrapfn_", make_descriptor(t_AbstractTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractTimeScales::initializeClass, 1)))
          return NULL;
        return t_AbstractTimeScales::wrap_Object(AbstractTimeScales(((t_AbstractTimeScales *) arg)->object.this$));
      }
      static PyObject *t_AbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractTimeScales_init_(t_AbstractTimeScales *self, PyObject *args, PyObject *kwds)
      {
        AbstractTimeScales object((jobject) NULL);

        INT_CALL(object = AbstractTimeScales());
        self->object = object;

        return 0;
      }

      static PyObject *t_AbstractTimeScales_createBesselianEpoch(t_AbstractTimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createBesselianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createBesselianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_createJulianEpoch(t_AbstractTimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createJulianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_getBeidouEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getCcsdsEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getFiftiesEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getFutureInfinity(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGMST(t_AbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getGMST", args);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_getGalileoEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGlonassEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGpsEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getIrnssEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJ2000Epoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJavaEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJulianEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getModifiedJulianEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getPastInfinity(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getQzssEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getUT1(t_AbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::UT1Scale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getUT1(a0, a1));
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getUT1", args);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_get__beidouEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__ccsdsEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__fiftiesEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__futureInfinity(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__galileoEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__glonassEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__gpsEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__irnssEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__j2000Epoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__javaEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__julianEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__modifiedJulianEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__pastInfinity(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__qzssEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::mids$ = NULL;
          bool NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::live$ = false;

          jclass NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNormalizedCnm_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getNormalizedCnm", "(II)D");
              mids$[mid_getNormalizedSnm_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getNormalizedSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::getNormalizedCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormalizedCnm_a84e4ee1da3f1ab8], a0, a1);
          }

          jdouble NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::getNormalizedSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormalizedSnm_a84e4ee1da3f1ab8], a0, a1);
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
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedCnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedSnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, getNormalizedCnm, METH_VARARGS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, getNormalizedSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics);

          void t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), &PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), module, "NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics", 0);
          }

          void t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "class_", make_descriptor(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_Object(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(((t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedCnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedCnm", args);
            return NULL;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedSnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedSnm", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *EquinoctialOrbit::class$ = NULL;
      jmethodID *EquinoctialOrbit::mids$ = NULL;
      bool EquinoctialOrbit::live$ = false;

      jclass EquinoctialOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/EquinoctialOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e5b8a6a44355183e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_c42dca2c1e36096d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_e115ec145d0ee229] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_4eabb869f3e95925] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_8a0c29e70f4666fb] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_c8fa6ba58ef7126b] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_eccentricToMean_c564d6ace53a5934] = env->getStaticMethodID(cls, "eccentricToMean", "(DDD)D");
          mids$[mid_eccentricToTrue_c564d6ace53a5934] = env->getStaticMethodID(cls, "eccentricToTrue", "(DDD)D");
          mids$[mid_getA_456d9a2f64d6b28d] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_456d9a2f64d6b28d] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getCachedPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_456d9a2f64d6b28d] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_456d9a2f64d6b28d] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_456d9a2f64d6b28d] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getL_9803e84c1105942b] = env->getMethodID(cls, "getL", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getLDot_9803e84c1105942b] = env->getMethodID(cls, "getLDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getLE_456d9a2f64d6b28d] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_456d9a2f64d6b28d] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_456d9a2f64d6b28d] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_e470b6d9e0d979db] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_c564d6ace53a5934] = env->getStaticMethodID(cls, "meanToEccentric", "(DDD)D");
          mids$[mid_removeRates_fad2038b7b755f73] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_shiftedBy_784f874c26ce56bc] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_c564d6ace53a5934] = env->getStaticMethodID(cls, "trueToEccentric", "(DDD)D");
          mids$[mid_initPosition_17a952530a808943] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_6890805957bea2cd] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_e5b8a6a44355183e, a0.this$)) {}

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_c42dca2c1e36096d, a0.this$, a1.this$, a2)) {}

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_e115ec145d0ee229, a0.this$, a1.this$, a2.this$, a3)) {}

      EquinoctialOrbit::EquinoctialOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_4eabb869f3e95925, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      EquinoctialOrbit::EquinoctialOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_8a0c29e70f4666fb, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void EquinoctialOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_c8fa6ba58ef7126b], a0.this$, a1, a2.this$);
      }

      jdouble EquinoctialOrbit::eccentricToMean(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToMean_c564d6ace53a5934], a0, a1, a2);
      }

      jdouble EquinoctialOrbit::eccentricToTrue(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToTrue_c564d6ace53a5934], a0, a1, a2);
      }

      jdouble EquinoctialOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_456d9a2f64d6b28d]);
      }

      ::org::orekit::orbits::PositionAngleType EquinoctialOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_2571e8fe1cede425]));
      }

      jdouble EquinoctialOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getL(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL_9803e84c1105942b], a0.this$);
      }

      jdouble EquinoctialOrbit::getLDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLDot_9803e84c1105942b], a0.this$);
      }

      jdouble EquinoctialOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_456d9a2f64d6b28d]);
      }

      jdouble EquinoctialOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_456d9a2f64d6b28d]);
      }

      ::org::orekit::orbits::OrbitType EquinoctialOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_63ea5cd020bf7bf1]));
      }

      jboolean EquinoctialOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_e470b6d9e0d979db]);
      }

      jdouble EquinoctialOrbit::meanToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanToEccentric_c564d6ace53a5934], a0, a1, a2);
      }

      EquinoctialOrbit EquinoctialOrbit::removeRates() const
      {
        return EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_fad2038b7b755f73]));
      }

      EquinoctialOrbit EquinoctialOrbit::shiftedBy(jdouble a0) const
      {
        return EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_784f874c26ce56bc], a0));
      }

      ::java::lang::String EquinoctialOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      jdouble EquinoctialOrbit::trueToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trueToEccentric_c564d6ace53a5934], a0, a1, a2);
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
      static PyObject *t_EquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EquinoctialOrbit_init_(t_EquinoctialOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EquinoctialOrbit_addKeplerContribution(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getA(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getADot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getCachedPositionAngleType(t_EquinoctialOrbit *self);
      static PyObject *t_EquinoctialOrbit_getE(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialEx(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialExDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialEy(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialEyDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHx(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHxDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHy(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHyDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getI(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getIDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getL(t_EquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_EquinoctialOrbit_getLDot(t_EquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_EquinoctialOrbit_getLE(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLEDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLM(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLMDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLv(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLvDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getType(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_hasRates(t_EquinoctialOrbit *self);
      static PyObject *t_EquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_removeRates(t_EquinoctialOrbit *self);
      static PyObject *t_EquinoctialOrbit_shiftedBy(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_toString(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_get__a(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__aDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__cachedPositionAngleType(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__e(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__eDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialEx(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialExDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialEy(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialEyDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hx(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hxDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hy(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hyDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__i(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__iDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lE(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lEDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lM(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lMDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lv(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lvDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__type(t_EquinoctialOrbit *self, void *data);
      static PyGetSetDef t_EquinoctialOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_EquinoctialOrbit, a),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, aDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, e),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, eDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hx),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hxDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hy),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hyDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, i),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, iDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lE),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lEDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lM),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lMDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lv),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lvDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EquinoctialOrbit__methods_[] = {
        DECLARE_METHOD(t_EquinoctialOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getL, METH_O),
        DECLARE_METHOD(t_EquinoctialOrbit, getLDot, METH_O),
        DECLARE_METHOD(t_EquinoctialOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EquinoctialOrbit)[] = {
        { Py_tp_methods, t_EquinoctialOrbit__methods_ },
        { Py_tp_init, (void *) t_EquinoctialOrbit_init_ },
        { Py_tp_getset, t_EquinoctialOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EquinoctialOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(EquinoctialOrbit, t_EquinoctialOrbit, EquinoctialOrbit);

      void t_EquinoctialOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(EquinoctialOrbit), &PY_TYPE_DEF(EquinoctialOrbit), module, "EquinoctialOrbit", 0);
      }

      void t_EquinoctialOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquinoctialOrbit), "class_", make_descriptor(EquinoctialOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquinoctialOrbit), "wrapfn_", make_descriptor(t_EquinoctialOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquinoctialOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EquinoctialOrbit::initializeClass, 1)))
          return NULL;
        return t_EquinoctialOrbit::wrap_Object(EquinoctialOrbit(((t_EquinoctialOrbit *) arg)->object.this$));
      }
      static PyObject *t_EquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EquinoctialOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EquinoctialOrbit_init_(t_EquinoctialOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = EquinoctialOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
            jdouble a9;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &a9))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a14((jobject) NULL);
            jdouble a15;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDDDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &a15))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_EquinoctialOrbit_addKeplerContribution(t_EquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::eccentricToMean(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::eccentricToTrue(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_getA(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getADot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getCachedPositionAngleType(t_EquinoctialOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_EquinoctialOrbit_getE(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialEx(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialExDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialEy(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialEyDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHx(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHxDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHy(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHyDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getI(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getIDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getL(t_EquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getL(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getL", arg);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_getLDot(t_EquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getLDot(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLDot", arg);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_getLE(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLEDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLM(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLMDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLv(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLvDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getType(t_EquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_hasRates(t_EquinoctialOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_EquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::meanToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_removeRates(t_EquinoctialOrbit *self)
      {
        EquinoctialOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_EquinoctialOrbit::wrap_Object(result);
      }

      static PyObject *t_EquinoctialOrbit_shiftedBy(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble a0;
        EquinoctialOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_EquinoctialOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_toString(t_EquinoctialOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::trueToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_get__a(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__aDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__cachedPositionAngleType(t_EquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_EquinoctialOrbit_get__e(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__eDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialEx(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialExDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialEy(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialEyDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hx(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hxDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hy(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hyDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__i(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__iDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lE(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lEDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lM(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lMDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lv(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lvDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__type(t_EquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonCovarianceMatrixProvider.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonCovarianceMatrixProvider::class$ = NULL;
        jmethodID *PythonCovarianceMatrixProvider::mids$ = NULL;
        bool PythonCovarianceMatrixProvider::live$ = false;

        jclass PythonCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getInitialCovarianceMatrix_63aee3ce1e412e46] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getProcessNoiseMatrix_dc7483997a2e9c4d] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonCovarianceMatrixProvider::PythonCovarianceMatrixProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonCovarianceMatrixProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonCovarianceMatrixProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonCovarianceMatrixProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonCovarianceMatrixProvider_init_(t_PythonCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonCovarianceMatrixProvider_finalize(t_PythonCovarianceMatrixProvider *self);
        static PyObject *t_PythonCovarianceMatrixProvider_pythonExtension(t_PythonCovarianceMatrixProvider *self, PyObject *args);
        static jobject JNICALL t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonCovarianceMatrixProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonCovarianceMatrixProvider_get__self(t_PythonCovarianceMatrixProvider *self, void *data);
        static PyGetSetDef t_PythonCovarianceMatrixProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonCovarianceMatrixProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_PythonCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) t_PythonCovarianceMatrixProvider_init_ },
          { Py_tp_getset, t_PythonCovarianceMatrixProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonCovarianceMatrixProvider, t_PythonCovarianceMatrixProvider, PythonCovarianceMatrixProvider);

        void t_PythonCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonCovarianceMatrixProvider), &PY_TYPE_DEF(PythonCovarianceMatrixProvider), module, "PythonCovarianceMatrixProvider", 1);
        }

        void t_PythonCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "class_", make_descriptor(PythonCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_PythonCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonCovarianceMatrixProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0 },
            { "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1 },
            { "pythonDecRef", "()V", (void *) t_PythonCovarianceMatrixProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_PythonCovarianceMatrixProvider::wrap_Object(PythonCovarianceMatrixProvider(((t_PythonCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonCovarianceMatrixProvider_init_(t_PythonCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonCovarianceMatrixProvider object((jobject) NULL);

          INT_CALL(object = PythonCovarianceMatrixProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonCovarianceMatrixProvider_finalize(t_PythonCovarianceMatrixProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonCovarianceMatrixProvider_pythonExtension(t_PythonCovarianceMatrixProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "getInitialCovarianceMatrix", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getInitialCovarianceMatrix", result);
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

        static jobject JNICALL t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "getProcessNoiseMatrix", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getProcessNoiseMatrix", result);
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

        static void JNICALL t_PythonCovarianceMatrixProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonCovarianceMatrixProvider_get__self(t_PythonCovarianceMatrixProvider *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *RotationOrder::class$ = NULL;
          jmethodID *RotationOrder::mids$ = NULL;
          bool RotationOrder::live$ = false;
          RotationOrder *RotationOrder::XYX = NULL;
          RotationOrder *RotationOrder::XYZ = NULL;
          RotationOrder *RotationOrder::XZX = NULL;
          RotationOrder *RotationOrder::XZY = NULL;
          RotationOrder *RotationOrder::YXY = NULL;
          RotationOrder *RotationOrder::YXZ = NULL;
          RotationOrder *RotationOrder::YZX = NULL;
          RotationOrder *RotationOrder::YZY = NULL;
          RotationOrder *RotationOrder::ZXY = NULL;
          RotationOrder *RotationOrder::ZXZ = NULL;
          RotationOrder *RotationOrder::ZYX = NULL;
          RotationOrder *RotationOrder::ZYZ = NULL;

          jclass RotationOrder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/RotationOrder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getA1_17a952530a808943] = env->getMethodID(cls, "getA1", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getA2_17a952530a808943] = env->getMethodID(cls, "getA2", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getA3_17a952530a808943] = env->getMethodID(cls, "getA3", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getRotationOrder_b19970ea875427f5] = env->getStaticMethodID(cls, "getRotationOrder", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_valueOf_b19970ea875427f5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
              mids$[mid_values_da1671c21b9900e6] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              XYX = new RotationOrder(env->getStaticObjectField(cls, "XYX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XYZ = new RotationOrder(env->getStaticObjectField(cls, "XYZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XZX = new RotationOrder(env->getStaticObjectField(cls, "XZX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XZY = new RotationOrder(env->getStaticObjectField(cls, "XZY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YXY = new RotationOrder(env->getStaticObjectField(cls, "YXY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YXZ = new RotationOrder(env->getStaticObjectField(cls, "YXZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YZX = new RotationOrder(env->getStaticObjectField(cls, "YZX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YZY = new RotationOrder(env->getStaticObjectField(cls, "YZY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZXY = new RotationOrder(env->getStaticObjectField(cls, "ZXY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZXZ = new RotationOrder(env->getStaticObjectField(cls, "ZXZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZYX = new RotationOrder(env->getStaticObjectField(cls, "ZYX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZYZ = new RotationOrder(env->getStaticObjectField(cls, "ZYZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA1() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA1_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA2() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA2_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA3() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA3_17a952530a808943]));
          }

          RotationOrder RotationOrder::getRotationOrder(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationOrder(env->callStaticObjectMethod(cls, mids$[mid_getRotationOrder_b19970ea875427f5], a0.this$));
          }

          ::java::lang::String RotationOrder::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
          }

          RotationOrder RotationOrder::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationOrder(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b19970ea875427f5], a0.this$));
          }

          JArray< RotationOrder > RotationOrder::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RotationOrder >(env->callStaticObjectMethod(cls, mids$[mid_values_da1671c21b9900e6]));
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
        namespace threed {
          static PyObject *t_RotationOrder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_of_(t_RotationOrder *self, PyObject *args);
          static PyObject *t_RotationOrder_getA1(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getA2(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getA3(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getRotationOrder(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_toString(t_RotationOrder *self, PyObject *args);
          static PyObject *t_RotationOrder_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RotationOrder_values(PyTypeObject *type);
          static PyObject *t_RotationOrder_get__a1(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__a2(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__a3(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__parameters_(t_RotationOrder *self, void *data);
          static PyGetSetDef t_RotationOrder__fields_[] = {
            DECLARE_GET_FIELD(t_RotationOrder, a1),
            DECLARE_GET_FIELD(t_RotationOrder, a2),
            DECLARE_GET_FIELD(t_RotationOrder, a3),
            DECLARE_GET_FIELD(t_RotationOrder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RotationOrder__methods_[] = {
            DECLARE_METHOD(t_RotationOrder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RotationOrder, getA1, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getA2, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getA3, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getRotationOrder, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, toString, METH_VARARGS),
            DECLARE_METHOD(t_RotationOrder, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RotationOrder)[] = {
            { Py_tp_methods, t_RotationOrder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RotationOrder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RotationOrder)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RotationOrder, t_RotationOrder, RotationOrder);
          PyObject *t_RotationOrder::wrap_Object(const RotationOrder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationOrder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationOrder *self = (t_RotationOrder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RotationOrder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationOrder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationOrder *self = (t_RotationOrder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RotationOrder::install(PyObject *module)
          {
            installType(&PY_TYPE(RotationOrder), &PY_TYPE_DEF(RotationOrder), module, "RotationOrder", 0);
          }

          void t_RotationOrder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "class_", make_descriptor(RotationOrder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "wrapfn_", make_descriptor(t_RotationOrder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "boxfn_", make_descriptor(boxObject));
            env->getClass(RotationOrder::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XYX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XYX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XYZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XZX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XZX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XZY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XZY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YXY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YXY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YXZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YXZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YZX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YZX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YZY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YZY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZXY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZXY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZXZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZXZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZYX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZYX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZYZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZYZ)));
          }

          static PyObject *t_RotationOrder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RotationOrder::initializeClass, 1)))
              return NULL;
            return t_RotationOrder::wrap_Object(RotationOrder(((t_RotationOrder *) arg)->object.this$));
          }
          static PyObject *t_RotationOrder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RotationOrder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RotationOrder_of_(t_RotationOrder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RotationOrder_getA1(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA1());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getA2(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA2());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getA3(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA3());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getRotationOrder(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationOrder result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::getRotationOrder(a0));
              return t_RotationOrder::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getRotationOrder", arg);
            return NULL;
          }

          static PyObject *t_RotationOrder_toString(t_RotationOrder *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(RotationOrder), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_RotationOrder_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationOrder result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::valueOf(a0));
              return t_RotationOrder::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RotationOrder_values(PyTypeObject *type)
          {
            JArray< RotationOrder > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::values());
            return JArray<jobject>(result.this$).wrap(t_RotationOrder::wrap_jobject);
          }
          static PyObject *t_RotationOrder_get__parameters_(t_RotationOrder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RotationOrder_get__a1(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA1());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_RotationOrder_get__a2(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA2());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_RotationOrder_get__a3(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA3());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AdditionalDerivativesProvider::class$ = NULL;
        jmethodID *AdditionalDerivativesProvider::mids$ = NULL;
        bool AdditionalDerivativesProvider::live$ = false;

        jclass AdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_combinedDerivatives_32bde69742c0babb] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_yields_97634138963fb58a] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::integration::CombinedDerivatives AdditionalDerivativesProvider::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_32bde69742c0babb], a0.this$));
        }

        jint AdditionalDerivativesProvider::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
        }

        ::java::lang::String AdditionalDerivativesProvider::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
        }

        void AdditionalDerivativesProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
        }

        jboolean AdditionalDerivativesProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_yields_97634138963fb58a], a0.this$);
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
        static PyObject *t_AdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_combinedDerivatives(t_AdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_getDimension(t_AdditionalDerivativesProvider *self);
        static PyObject *t_AdditionalDerivativesProvider_getName(t_AdditionalDerivativesProvider *self);
        static PyObject *t_AdditionalDerivativesProvider_init(t_AdditionalDerivativesProvider *self, PyObject *args);
        static PyObject *t_AdditionalDerivativesProvider_yields(t_AdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_get__dimension(t_AdditionalDerivativesProvider *self, void *data);
        static PyObject *t_AdditionalDerivativesProvider_get__name(t_AdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_AdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_AdditionalDerivativesProvider, dimension),
          DECLARE_GET_FIELD(t_AdditionalDerivativesProvider, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_AdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, combinedDerivatives, METH_O),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, getName, METH_NOARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, init, METH_VARARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, yields, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_AdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdditionalDerivativesProvider, t_AdditionalDerivativesProvider, AdditionalDerivativesProvider);

        void t_AdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AdditionalDerivativesProvider), &PY_TYPE_DEF(AdditionalDerivativesProvider), module, "AdditionalDerivativesProvider", 0);
        }

        void t_AdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "class_", make_descriptor(AdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_AdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_AdditionalDerivativesProvider::wrap_Object(AdditionalDerivativesProvider(((t_AdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_AdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdditionalDerivativesProvider_combinedDerivatives(t_AdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.combinedDerivatives(a0));
            return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
          return NULL;
        }

        static PyObject *t_AdditionalDerivativesProvider_getDimension(t_AdditionalDerivativesProvider *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AdditionalDerivativesProvider_getName(t_AdditionalDerivativesProvider *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_AdditionalDerivativesProvider_init(t_AdditionalDerivativesProvider *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AdditionalDerivativesProvider_yields(t_AdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.yields(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "yields", arg);
          return NULL;
        }

        static PyObject *t_AdditionalDerivativesProvider_get__dimension(t_AdditionalDerivativesProvider *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AdditionalDerivativesProvider_get__name(t_AdditionalDerivativesProvider *self, void *data)
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
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *TimeIndependentLOSTransform::class$ = NULL;
        jmethodID *TimeIndependentLOSTransform::mids$ = NULL;
        bool TimeIndependentLOSTransform::live$ = false;

        jclass TimeIndependentLOSTransform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/TimeIndependentLOSTransform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getParametersDrivers_a68a17dd093f796d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_5b56f31df08e1557] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_e434856d6b086dd4] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream TimeIndependentLOSTransform::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a68a17dd093f796d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeIndependentLOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_5b56f31df08e1557], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeIndependentLOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_e434856d6b086dd4], a0, a1.this$, a2.this$));
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
      namespace los {
        static PyObject *t_TimeIndependentLOSTransform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeIndependentLOSTransform_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeIndependentLOSTransform_getParametersDrivers(t_TimeIndependentLOSTransform *self);
        static PyObject *t_TimeIndependentLOSTransform_transformLOS(t_TimeIndependentLOSTransform *self, PyObject *args);
        static PyObject *t_TimeIndependentLOSTransform_get__parametersDrivers(t_TimeIndependentLOSTransform *self, void *data);
        static PyGetSetDef t_TimeIndependentLOSTransform__fields_[] = {
          DECLARE_GET_FIELD(t_TimeIndependentLOSTransform, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeIndependentLOSTransform__methods_[] = {
          DECLARE_METHOD(t_TimeIndependentLOSTransform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeIndependentLOSTransform)[] = {
          { Py_tp_methods, t_TimeIndependentLOSTransform__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TimeIndependentLOSTransform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeIndependentLOSTransform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeIndependentLOSTransform, t_TimeIndependentLOSTransform, TimeIndependentLOSTransform);

        void t_TimeIndependentLOSTransform::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeIndependentLOSTransform), &PY_TYPE_DEF(TimeIndependentLOSTransform), module, "TimeIndependentLOSTransform", 0);
        }

        void t_TimeIndependentLOSTransform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "class_", make_descriptor(TimeIndependentLOSTransform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "wrapfn_", make_descriptor(t_TimeIndependentLOSTransform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TimeIndependentLOSTransform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeIndependentLOSTransform::initializeClass, 1)))
            return NULL;
          return t_TimeIndependentLOSTransform::wrap_Object(TimeIndependentLOSTransform(((t_TimeIndependentLOSTransform *) arg)->object.this$));
        }
        static PyObject *t_TimeIndependentLOSTransform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeIndependentLOSTransform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TimeIndependentLOSTransform_getParametersDrivers(t_TimeIndependentLOSTransform *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_TimeIndependentLOSTransform_transformLOS(t_TimeIndependentLOSTransform *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_TimeIndependentLOSTransform_get__parametersDrivers(t_TimeIndependentLOSTransform *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldODEState::class$ = NULL;
      jmethodID *FieldODEState::mids$ = NULL;
      bool FieldODEState::live$ = false;

      jclass FieldODEState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldODEState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ef0bb554ba052051] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_fb8a6e7e41ba410e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getCompleteState_01c7d10e96d5cf94] = env->getMethodID(cls, "getCompleteState", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCompleteStateDimension_f2f64475e4580546] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_01c7d10e96d5cf94] = env->getMethodID(cls, "getPrimaryState", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPrimaryStateDimension_f2f64475e4580546] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_5b8578526a4f7e83] = env->getMethodID(cls, "getSecondaryState", "(I)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSecondaryStateDimension_38565d58479aa24a] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_e6d4d3215c30992a] = env->getMethodID(cls, "getTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_copy_739207d3fe95b2fa] = env->getMethodID(cls, "copy", "([[Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldODEState::FieldODEState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ef0bb554ba052051, a0.this$, a1.this$)) {}

      FieldODEState::FieldODEState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb8a6e7e41ba410e, a0.this$, a1.this$, a2.this$)) {}

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getCompleteState() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCompleteState_01c7d10e96d5cf94]));
      }

      jint FieldODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_f2f64475e4580546]);
      }

      jint FieldODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_f2f64475e4580546]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getPrimaryState() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_01c7d10e96d5cf94]));
      }

      jint FieldODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_f2f64475e4580546]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getSecondaryState(jint a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_5b8578526a4f7e83], a0));
      }

      jint FieldODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_38565d58479aa24a], a0);
      }

      ::org::hipparchus::CalculusFieldElement FieldODEState::getTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTime_e6d4d3215c30992a]));
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
      static PyObject *t_FieldODEState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEState_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEState_of_(t_FieldODEState *self, PyObject *args);
      static int t_FieldODEState_init_(t_FieldODEState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldODEState_getCompleteState(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getCompleteStateDimension(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getNumberOfSecondaryStates(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getPrimaryState(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getPrimaryStateDimension(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getSecondaryState(t_FieldODEState *self, PyObject *arg);
      static PyObject *t_FieldODEState_getSecondaryStateDimension(t_FieldODEState *self, PyObject *arg);
      static PyObject *t_FieldODEState_getTime(t_FieldODEState *self);
      static PyObject *t_FieldODEState_get__completeState(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__completeStateDimension(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__numberOfSecondaryStates(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__primaryState(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__primaryStateDimension(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__time(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__parameters_(t_FieldODEState *self, void *data);
      static PyGetSetDef t_FieldODEState__fields_[] = {
        DECLARE_GET_FIELD(t_FieldODEState, completeState),
        DECLARE_GET_FIELD(t_FieldODEState, completeStateDimension),
        DECLARE_GET_FIELD(t_FieldODEState, numberOfSecondaryStates),
        DECLARE_GET_FIELD(t_FieldODEState, primaryState),
        DECLARE_GET_FIELD(t_FieldODEState, primaryStateDimension),
        DECLARE_GET_FIELD(t_FieldODEState, time),
        DECLARE_GET_FIELD(t_FieldODEState, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldODEState__methods_[] = {
        DECLARE_METHOD(t_FieldODEState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEState, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEState, getCompleteState, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getCompleteStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getNumberOfSecondaryStates, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getPrimaryState, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getPrimaryStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getSecondaryState, METH_O),
        DECLARE_METHOD(t_FieldODEState, getSecondaryStateDimension, METH_O),
        DECLARE_METHOD(t_FieldODEState, getTime, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldODEState)[] = {
        { Py_tp_methods, t_FieldODEState__methods_ },
        { Py_tp_init, (void *) t_FieldODEState_init_ },
        { Py_tp_getset, t_FieldODEState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldODEState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldODEState, t_FieldODEState, FieldODEState);
      PyObject *t_FieldODEState::wrap_Object(const FieldODEState& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEState::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEState *self = (t_FieldODEState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldODEState::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEState::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEState *self = (t_FieldODEState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldODEState::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldODEState), &PY_TYPE_DEF(FieldODEState), module, "FieldODEState", 0);
      }

      void t_FieldODEState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEState), "class_", make_descriptor(FieldODEState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEState), "wrapfn_", make_descriptor(t_FieldODEState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldODEState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldODEState::initializeClass, 1)))
          return NULL;
        return t_FieldODEState::wrap_Object(FieldODEState(((t_FieldODEState *) arg)->object.this$));
      }
      static PyObject *t_FieldODEState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldODEState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldODEState_of_(t_FieldODEState *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldODEState_init_(t_FieldODEState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldODEState object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;
            FieldODEState object((jobject) NULL);

            if (!parseArgs(args, "K[K[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEState(a0, a1, a2));
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

      static PyObject *t_FieldODEState_getCompleteState(t_FieldODEState *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_getCompleteStateDimension(t_FieldODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEState_getNumberOfSecondaryStates(t_FieldODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEState_getPrimaryState(t_FieldODEState *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_getPrimaryStateDimension(t_FieldODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEState_getSecondaryState(t_FieldODEState *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryState", arg);
        return NULL;
      }

      static PyObject *t_FieldODEState_getSecondaryStateDimension(t_FieldODEState *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryStateDimension(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryStateDimension", arg);
        return NULL;
      }

      static PyObject *t_FieldODEState_getTime(t_FieldODEState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldODEState_get__parameters_(t_FieldODEState *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldODEState_get__completeState(t_FieldODEState *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_get__completeStateDimension(t_FieldODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEState_get__numberOfSecondaryStates(t_FieldODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEState_get__primaryState(t_FieldODEState *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_get__primaryStateDimension(t_FieldODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEState_get__time(t_FieldODEState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
