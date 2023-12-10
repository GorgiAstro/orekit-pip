#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldTimeSpanMap$Transition.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTimeSpanMap$Transition::class$ = NULL;
      jmethodID *FieldTimeSpanMap$Transition::mids$ = NULL;
      bool FieldTimeSpanMap$Transition::live$ = false;

      jclass FieldTimeSpanMap$Transition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTimeSpanMap$Transition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAbsoluteDate_09b0a926600dfc14] = env->getMethodID(cls, "getAbsoluteDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getAfter_dfd7647d9110ac9f] = env->getMethodID(cls, "getAfter", "()Ljava/lang/Object;");
          mids$[mid_getBefore_dfd7647d9110ac9f] = env->getMethodID(cls, "getBefore", "()Ljava/lang/Object;");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTimeSpanMap$Transition::getAbsoluteDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getAbsoluteDate_09b0a926600dfc14]));
      }

      ::java::lang::Object FieldTimeSpanMap$Transition::getAfter() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAfter_dfd7647d9110ac9f]));
      }

      ::java::lang::Object FieldTimeSpanMap$Transition::getBefore() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getBefore_dfd7647d9110ac9f]));
      }

      ::org::orekit::time::AbsoluteDate FieldTimeSpanMap$Transition::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
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
      static PyObject *t_FieldTimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap$Transition_of_(t_FieldTimeSpanMap$Transition *self, PyObject *args);
      static PyObject *t_FieldTimeSpanMap$Transition_getAbsoluteDate(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_getAfter(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_getBefore(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_getDate(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_get__absoluteDate(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__after(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__before(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__date(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__parameters_(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyGetSetDef t_FieldTimeSpanMap$Transition__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, absoluteDate),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, after),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, before),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, date),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeSpanMap$Transition__methods_[] = {
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getAbsoluteDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getAfter, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getBefore, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeSpanMap$Transition)[] = {
        { Py_tp_methods, t_FieldTimeSpanMap$Transition__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeSpanMap$Transition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeSpanMap$Transition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeSpanMap$Transition, t_FieldTimeSpanMap$Transition, FieldTimeSpanMap$Transition);
      PyObject *t_FieldTimeSpanMap$Transition::wrap_Object(const FieldTimeSpanMap$Transition& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap$Transition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap$Transition *self = (t_FieldTimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeSpanMap$Transition::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap$Transition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap$Transition *self = (t_FieldTimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeSpanMap$Transition::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeSpanMap$Transition), &PY_TYPE_DEF(FieldTimeSpanMap$Transition), module, "FieldTimeSpanMap$Transition", 0);
      }

      void t_FieldTimeSpanMap$Transition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap$Transition), "class_", make_descriptor(FieldTimeSpanMap$Transition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap$Transition), "wrapfn_", make_descriptor(t_FieldTimeSpanMap$Transition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap$Transition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeSpanMap$Transition::initializeClass, 1)))
          return NULL;
        return t_FieldTimeSpanMap$Transition::wrap_Object(FieldTimeSpanMap$Transition(((t_FieldTimeSpanMap$Transition *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeSpanMap$Transition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeSpanMap$Transition_of_(t_FieldTimeSpanMap$Transition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getAbsoluteDate(t_FieldTimeSpanMap$Transition *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsoluteDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[1]);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getAfter(t_FieldTimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getAfter());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getBefore(t_FieldTimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getBefore());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getDate(t_FieldTimeSpanMap$Transition *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }
      static PyObject *t_FieldTimeSpanMap$Transition_get__parameters_(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__absoluteDate(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsoluteDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__after(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getAfter());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__before(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getBefore());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__date(t_FieldTimeSpanMap$Transition *self, void *data)
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
#include "org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldUnivariateVectorFunction::class$ = NULL;
      jmethodID *CalculusFieldUnivariateVectorFunction::mids$ = NULL;
      bool CalculusFieldUnivariateVectorFunction::live$ = false;

      jclass CalculusFieldUnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_52822c1f74eb5aa5] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > CalculusFieldUnivariateVectorFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_52822c1f74eb5aa5], a0.this$));
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
      static PyObject *t_CalculusFieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_of_(t_CalculusFieldUnivariateVectorFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_value(t_CalculusFieldUnivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_get__parameters_(t_CalculusFieldUnivariateVectorFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldUnivariateVectorFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldUnivariateVectorFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldUnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldUnivariateVectorFunction)[] = {
        { Py_tp_methods, t_CalculusFieldUnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldUnivariateVectorFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldUnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldUnivariateVectorFunction, t_CalculusFieldUnivariateVectorFunction, CalculusFieldUnivariateVectorFunction);
      PyObject *t_CalculusFieldUnivariateVectorFunction::wrap_Object(const CalculusFieldUnivariateVectorFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateVectorFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateVectorFunction *self = (t_CalculusFieldUnivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldUnivariateVectorFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateVectorFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateVectorFunction *self = (t_CalculusFieldUnivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldUnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldUnivariateVectorFunction), &PY_TYPE_DEF(CalculusFieldUnivariateVectorFunction), module, "CalculusFieldUnivariateVectorFunction", 0);
      }

      void t_CalculusFieldUnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "class_", make_descriptor(CalculusFieldUnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "wrapfn_", make_descriptor(t_CalculusFieldUnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldUnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldUnivariateVectorFunction::wrap_Object(CalculusFieldUnivariateVectorFunction(((t_CalculusFieldUnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldUnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_of_(t_CalculusFieldUnivariateVectorFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_value(t_CalculusFieldUnivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldUnivariateVectorFunction_get__parameters_(t_CalculusFieldUnivariateVectorFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {

          ::java::lang::Class *NonLinearEvolution::class$ = NULL;
          jmethodID *NonLinearEvolution::mids$ = NULL;
          bool NonLinearEvolution::live$ = false;

          jclass NonLinearEvolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/extended/NonLinearEvolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2232551f282ddbec] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCurrentState_6d9adf1d5b463928] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getCurrentTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getCurrentTime", "()D");
              mids$[mid_getMeasurementJacobian_7116bbecdd8ceb21] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getProcessNoiseMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getStateTransitionMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NonLinearEvolution::NonLinearEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2232551f282ddbec, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::hipparchus::linear::RealVector NonLinearEvolution::getCurrentState() const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCurrentState_6d9adf1d5b463928]));
          }

          jdouble NonLinearEvolution::getCurrentTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCurrentTime_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getMeasurementJacobian() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_7116bbecdd8ceb21]));
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_7116bbecdd8ceb21]));
          }

          ::org::hipparchus::linear::RealMatrix NonLinearEvolution::getStateTransitionMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_7116bbecdd8ceb21]));
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
    namespace filtering {
      namespace kalman {
        namespace extended {
          static PyObject *t_NonLinearEvolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NonLinearEvolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NonLinearEvolution_init_(t_NonLinearEvolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NonLinearEvolution_getCurrentState(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getCurrentTime(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getMeasurementJacobian(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getProcessNoiseMatrix(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_getStateTransitionMatrix(t_NonLinearEvolution *self);
          static PyObject *t_NonLinearEvolution_get__currentState(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__currentTime(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__measurementJacobian(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__processNoiseMatrix(t_NonLinearEvolution *self, void *data);
          static PyObject *t_NonLinearEvolution_get__stateTransitionMatrix(t_NonLinearEvolution *self, void *data);
          static PyGetSetDef t_NonLinearEvolution__fields_[] = {
            DECLARE_GET_FIELD(t_NonLinearEvolution, currentState),
            DECLARE_GET_FIELD(t_NonLinearEvolution, currentTime),
            DECLARE_GET_FIELD(t_NonLinearEvolution, measurementJacobian),
            DECLARE_GET_FIELD(t_NonLinearEvolution, processNoiseMatrix),
            DECLARE_GET_FIELD(t_NonLinearEvolution, stateTransitionMatrix),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NonLinearEvolution__methods_[] = {
            DECLARE_METHOD(t_NonLinearEvolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearEvolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearEvolution, getCurrentState, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getCurrentTime, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getMeasurementJacobian, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getProcessNoiseMatrix, METH_NOARGS),
            DECLARE_METHOD(t_NonLinearEvolution, getStateTransitionMatrix, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NonLinearEvolution)[] = {
            { Py_tp_methods, t_NonLinearEvolution__methods_ },
            { Py_tp_init, (void *) t_NonLinearEvolution_init_ },
            { Py_tp_getset, t_NonLinearEvolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NonLinearEvolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NonLinearEvolution, t_NonLinearEvolution, NonLinearEvolution);

          void t_NonLinearEvolution::install(PyObject *module)
          {
            installType(&PY_TYPE(NonLinearEvolution), &PY_TYPE_DEF(NonLinearEvolution), module, "NonLinearEvolution", 0);
          }

          void t_NonLinearEvolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearEvolution), "class_", make_descriptor(NonLinearEvolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearEvolution), "wrapfn_", make_descriptor(t_NonLinearEvolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearEvolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NonLinearEvolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NonLinearEvolution::initializeClass, 1)))
              return NULL;
            return t_NonLinearEvolution::wrap_Object(NonLinearEvolution(((t_NonLinearEvolution *) arg)->object.this$));
          }
          static PyObject *t_NonLinearEvolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NonLinearEvolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NonLinearEvolution_init_(t_NonLinearEvolution *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
            NonLinearEvolution object((jobject) NULL);

            if (!parseArgs(args, "Dkkkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = NonLinearEvolution(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NonLinearEvolution_getCurrentState(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealVector result((jobject) NULL);
            OBJ_CALL(result = self->object.getCurrentState());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_getCurrentTime(t_NonLinearEvolution *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_NonLinearEvolution_getMeasurementJacobian(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_getProcessNoiseMatrix(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_getStateTransitionMatrix(t_NonLinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_NonLinearEvolution_get__currentState(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealVector value((jobject) NULL);
            OBJ_CALL(value = self->object.getCurrentState());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
          }

          static PyObject *t_NonLinearEvolution_get__currentTime(t_NonLinearEvolution *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_NonLinearEvolution_get__measurementJacobian(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_NonLinearEvolution_get__processNoiseMatrix(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_NonLinearEvolution_get__stateTransitionMatrix(t_NonLinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/ChronologicalComparator.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *ChronologicalComparator::class$ = NULL;
      jmethodID *ChronologicalComparator::mids$ = NULL;
      bool ChronologicalComparator::live$ = false;

      jclass ChronologicalComparator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/ChronologicalComparator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_29ff1c020b619bb1] = env->getMethodID(cls, "compare", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ChronologicalComparator::ChronologicalComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      jint ChronologicalComparator::compare(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_29ff1c020b619bb1], a0.this$, a1.this$);
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
      static PyObject *t_ChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ChronologicalComparator_init_(t_ChronologicalComparator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ChronologicalComparator_compare(t_ChronologicalComparator *self, PyObject *args);

      static PyMethodDef t_ChronologicalComparator__methods_[] = {
        DECLARE_METHOD(t_ChronologicalComparator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ChronologicalComparator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ChronologicalComparator, compare, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ChronologicalComparator)[] = {
        { Py_tp_methods, t_ChronologicalComparator__methods_ },
        { Py_tp_init, (void *) t_ChronologicalComparator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ChronologicalComparator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ChronologicalComparator, t_ChronologicalComparator, ChronologicalComparator);

      void t_ChronologicalComparator::install(PyObject *module)
      {
        installType(&PY_TYPE(ChronologicalComparator), &PY_TYPE_DEF(ChronologicalComparator), module, "ChronologicalComparator", 0);
      }

      void t_ChronologicalComparator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "class_", make_descriptor(ChronologicalComparator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "wrapfn_", make_descriptor(t_ChronologicalComparator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ChronologicalComparator::initializeClass, 1)))
          return NULL;
        return t_ChronologicalComparator::wrap_Object(ChronologicalComparator(((t_ChronologicalComparator *) arg)->object.this$));
      }
      static PyObject *t_ChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ChronologicalComparator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ChronologicalComparator_init_(t_ChronologicalComparator *self, PyObject *args, PyObject *kwds)
      {
        ChronologicalComparator object((jobject) NULL);

        INT_CALL(object = ChronologicalComparator());
        self->object = object;

        return 0;
      }

      static PyObject *t_ChronologicalComparator_compare(t_ChronologicalComparator *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jint result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
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
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldInertiaAxis::class$ = NULL;
      jmethodID *FieldInertiaAxis::mids$ = NULL;
      bool FieldInertiaAxis::live$ = false;

      jclass FieldInertiaAxis::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldInertiaAxis");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_28d2e63284f478a9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_getA_5791f80683b5227e] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getI_e6d4d3215c30992a] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_negate_ae6ac15c00e0e7cc] = env->getMethodID(cls, "negate", "()Lorg/orekit/attitudes/FieldInertiaAxis;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldInertiaAxis::FieldInertiaAxis(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_28d2e63284f478a9, a0.this$, a1.this$)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldInertiaAxis::getA() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getA_5791f80683b5227e]));
      }

      ::org::hipparchus::CalculusFieldElement FieldInertiaAxis::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_e6d4d3215c30992a]));
      }

      FieldInertiaAxis FieldInertiaAxis::negate() const
      {
        return FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_negate_ae6ac15c00e0e7cc]));
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
      static PyObject *t_FieldInertiaAxis_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertiaAxis_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertiaAxis_of_(t_FieldInertiaAxis *self, PyObject *args);
      static int t_FieldInertiaAxis_init_(t_FieldInertiaAxis *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldInertiaAxis_getA(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_getI(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_negate(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_get__a(t_FieldInertiaAxis *self, void *data);
      static PyObject *t_FieldInertiaAxis_get__i(t_FieldInertiaAxis *self, void *data);
      static PyObject *t_FieldInertiaAxis_get__parameters_(t_FieldInertiaAxis *self, void *data);
      static PyGetSetDef t_FieldInertiaAxis__fields_[] = {
        DECLARE_GET_FIELD(t_FieldInertiaAxis, a),
        DECLARE_GET_FIELD(t_FieldInertiaAxis, i),
        DECLARE_GET_FIELD(t_FieldInertiaAxis, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldInertiaAxis__methods_[] = {
        DECLARE_METHOD(t_FieldInertiaAxis, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertiaAxis, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertiaAxis, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, negate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldInertiaAxis)[] = {
        { Py_tp_methods, t_FieldInertiaAxis__methods_ },
        { Py_tp_init, (void *) t_FieldInertiaAxis_init_ },
        { Py_tp_getset, t_FieldInertiaAxis__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldInertiaAxis)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldInertiaAxis, t_FieldInertiaAxis, FieldInertiaAxis);
      PyObject *t_FieldInertiaAxis::wrap_Object(const FieldInertiaAxis& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertiaAxis::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertiaAxis *self = (t_FieldInertiaAxis *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldInertiaAxis::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertiaAxis::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertiaAxis *self = (t_FieldInertiaAxis *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldInertiaAxis::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldInertiaAxis), &PY_TYPE_DEF(FieldInertiaAxis), module, "FieldInertiaAxis", 0);
      }

      void t_FieldInertiaAxis::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "class_", make_descriptor(FieldInertiaAxis::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "wrapfn_", make_descriptor(t_FieldInertiaAxis::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldInertiaAxis_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldInertiaAxis::initializeClass, 1)))
          return NULL;
        return t_FieldInertiaAxis::wrap_Object(FieldInertiaAxis(((t_FieldInertiaAxis *) arg)->object.this$));
      }
      static PyObject *t_FieldInertiaAxis_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldInertiaAxis::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldInertiaAxis_of_(t_FieldInertiaAxis *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldInertiaAxis_init_(t_FieldInertiaAxis *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
        PyTypeObject **p1;
        FieldInertiaAxis object((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
        {
          INT_CALL(object = FieldInertiaAxis(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldInertiaAxis_getA(t_FieldInertiaAxis *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertiaAxis_getI(t_FieldInertiaAxis *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldInertiaAxis_negate(t_FieldInertiaAxis *self)
      {
        FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldInertiaAxis_get__parameters_(t_FieldInertiaAxis *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldInertiaAxis_get__a(t_FieldInertiaAxis *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldInertiaAxis_get__i(t_FieldInertiaAxis *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/KvnStructureKey.h"
#include "org/orekit/files/ccsds/section/KvnStructureKey.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *KvnStructureKey::class$ = NULL;
          jmethodID *KvnStructureKey::mids$ = NULL;
          bool KvnStructureKey::live$ = false;
          KvnStructureKey *KvnStructureKey::DATA = NULL;
          KvnStructureKey *KvnStructureKey::META = NULL;

          jclass KvnStructureKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/KvnStructureKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_6f09ff368ed52756] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)Z");
              mids$[mid_valueOf_e66b49010704c2ff] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/KvnStructureKey;");
              mids$[mid_values_e650fa9e948e1781] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/KvnStructureKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DATA = new KvnStructureKey(env->getStaticObjectField(cls, "DATA", "Lorg/orekit/files/ccsds/section/KvnStructureKey;"));
              META = new KvnStructureKey(env->getStaticObjectField(cls, "META", "Lorg/orekit/files/ccsds/section/KvnStructureKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean KvnStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_6f09ff368ed52756], a0.this$, a1.this$);
          }

          KvnStructureKey KvnStructureKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return KvnStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e66b49010704c2ff], a0.this$));
          }

          JArray< KvnStructureKey > KvnStructureKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< KvnStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_e650fa9e948e1781]));
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
          static PyObject *t_KvnStructureKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureKey_of_(t_KvnStructureKey *self, PyObject *args);
          static PyObject *t_KvnStructureKey_process(t_KvnStructureKey *self, PyObject *args);
          static PyObject *t_KvnStructureKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_KvnStructureKey_values(PyTypeObject *type);
          static PyObject *t_KvnStructureKey_get__parameters_(t_KvnStructureKey *self, void *data);
          static PyGetSetDef t_KvnStructureKey__fields_[] = {
            DECLARE_GET_FIELD(t_KvnStructureKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_KvnStructureKey__methods_[] = {
            DECLARE_METHOD(t_KvnStructureKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_KvnStructureKey, process, METH_VARARGS),
            DECLARE_METHOD(t_KvnStructureKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KvnStructureKey)[] = {
            { Py_tp_methods, t_KvnStructureKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_KvnStructureKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KvnStructureKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(KvnStructureKey, t_KvnStructureKey, KvnStructureKey);
          PyObject *t_KvnStructureKey::wrap_Object(const KvnStructureKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_KvnStructureKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_KvnStructureKey *self = (t_KvnStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_KvnStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_KvnStructureKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_KvnStructureKey *self = (t_KvnStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_KvnStructureKey::install(PyObject *module)
          {
            installType(&PY_TYPE(KvnStructureKey), &PY_TYPE_DEF(KvnStructureKey), module, "KvnStructureKey", 0);
          }

          void t_KvnStructureKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "class_", make_descriptor(KvnStructureKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "wrapfn_", make_descriptor(t_KvnStructureKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(KvnStructureKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "DATA", make_descriptor(t_KvnStructureKey::wrap_Object(*KvnStructureKey::DATA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "META", make_descriptor(t_KvnStructureKey::wrap_Object(*KvnStructureKey::META)));
          }

          static PyObject *t_KvnStructureKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KvnStructureKey::initializeClass, 1)))
              return NULL;
            return t_KvnStructureKey::wrap_Object(KvnStructureKey(((t_KvnStructureKey *) arg)->object.this$));
          }
          static PyObject *t_KvnStructureKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KvnStructureKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_KvnStructureKey_of_(t_KvnStructureKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_KvnStructureKey_process(t_KvnStructureKey *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean result;

            if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              OBJ_CALL(result = self->object.process(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "process", args);
            return NULL;
          }

          static PyObject *t_KvnStructureKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            KvnStructureKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::KvnStructureKey::valueOf(a0));
              return t_KvnStructureKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_KvnStructureKey_values(PyTypeObject *type)
          {
            JArray< KvnStructureKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::KvnStructureKey::values());
            return JArray<jobject>(result.this$).wrap(t_KvnStructureKey::wrap_jobject);
          }
          static PyObject *t_KvnStructureKey_get__parameters_(t_KvnStructureKey *self, void *data)
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
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$RangeMeasurement::class$ = NULL;
        jmethodID *CRD$RangeMeasurement::mids$ = NULL;
        bool CRD$RangeMeasurement::live$ = false;

        jclass CRD$RangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$RangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_54d5095bd6b0c726] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DI)V");
            mids$[mid_init$_ccc2406a0e104c30] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DID)V");
            mids$[mid_init$_ba58bdeca658222c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;)V");
            mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEpochEvent_f2f64475e4580546] = env->getMethodID(cls, "getEpochEvent", "()I");
            mids$[mid_getSnr_456d9a2f64d6b28d] = env->getMethodID(cls, "getSnr", "()D");
            mids$[mid_getSystemConfigurationId_0090f7797e403f43] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getTimeOfFlight_456d9a2f64d6b28d] = env->getMethodID(cls, "getTimeOfFlight", "()D");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_54d5095bd6b0c726, a0.this$, a1, a2)) {}

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ccc2406a0e104c30, a0.this$, a1, a2, a3)) {}

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ba58bdeca658222c, a0.this$, a1, a2, a3, a4.this$)) {}

        ::org::orekit::time::AbsoluteDate CRD$RangeMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
        }

        jint CRD$RangeMeasurement::getEpochEvent() const
        {
          return env->callIntMethod(this$, mids$[mid_getEpochEvent_f2f64475e4580546]);
        }

        jdouble CRD$RangeMeasurement::getSnr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSnr_456d9a2f64d6b28d]);
        }

        ::java::lang::String CRD$RangeMeasurement::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_0090f7797e403f43]));
        }

        jdouble CRD$RangeMeasurement::getTimeOfFlight() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeOfFlight_456d9a2f64d6b28d]);
        }

        ::java::lang::String CRD$RangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
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
        static PyObject *t_CRD$RangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$RangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$RangeMeasurement_init_(t_CRD$RangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$RangeMeasurement_getDate(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getEpochEvent(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getSnr(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getSystemConfigurationId(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getTimeOfFlight(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_toCrdString(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_get__date(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__epochEvent(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__snr(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__systemConfigurationId(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__timeOfFlight(t_CRD$RangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$RangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, date),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, epochEvent),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, snr),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, timeOfFlight),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$RangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$RangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getEpochEvent, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getSnr, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getTimeOfFlight, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, toCrdString, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$RangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$RangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$RangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$RangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$RangeMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$RangeMeasurement, t_CRD$RangeMeasurement, CRD$RangeMeasurement);

        void t_CRD$RangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$RangeMeasurement), &PY_TYPE_DEF(CRD$RangeMeasurement), module, "CRD$RangeMeasurement", 0);
        }

        void t_CRD$RangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "class_", make_descriptor(CRD$RangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "wrapfn_", make_descriptor(t_CRD$RangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$RangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$RangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$RangeMeasurement::wrap_Object(CRD$RangeMeasurement(((t_CRD$RangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$RangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$RangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$RangeMeasurement_init_(t_CRD$RangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDs", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2, a3, a4));
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

        static PyObject *t_CRD$RangeMeasurement_getDate(t_CRD$RangeMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$RangeMeasurement_getEpochEvent(t_CRD$RangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEpochEvent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$RangeMeasurement_getSnr(t_CRD$RangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSnr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeMeasurement_getSystemConfigurationId(t_CRD$RangeMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeMeasurement_getTimeOfFlight(t_CRD$RangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeOfFlight());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeMeasurement_toCrdString(t_CRD$RangeMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeMeasurement_get__date(t_CRD$RangeMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__epochEvent(t_CRD$RangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEpochEvent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__snr(t_CRD$RangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSnr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__systemConfigurationId(t_CRD$RangeMeasurement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__timeOfFlight(t_CRD$RangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeOfFlight());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/SimpleRatioAmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *SimpleRatioAmbiguityAcceptance::class$ = NULL;
          jmethodID *SimpleRatioAmbiguityAcceptance::mids$ = NULL;
          bool SimpleRatioAmbiguityAcceptance::live$ = false;

          jclass SimpleRatioAmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/SimpleRatioAmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_accept_20e068095c0bf963] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_numberOfCandidates_f2f64475e4580546] = env->getMethodID(cls, "numberOfCandidates", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SimpleRatioAmbiguityAcceptance::SimpleRatioAmbiguityAcceptance(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution SimpleRatioAmbiguityAcceptance::accept(const JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution(env->callObjectMethod(this$, mids$[mid_accept_20e068095c0bf963], a0.this$));
          }

          jint SimpleRatioAmbiguityAcceptance::numberOfCandidates() const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfCandidates_f2f64475e4580546]);
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
          static PyObject *t_SimpleRatioAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SimpleRatioAmbiguityAcceptance_init_(t_SimpleRatioAmbiguityAcceptance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_accept(t_SimpleRatioAmbiguityAcceptance *self, PyObject *arg);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_numberOfCandidates(t_SimpleRatioAmbiguityAcceptance *self);

          static PyMethodDef t_SimpleRatioAmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, accept, METH_O),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, numberOfCandidates, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SimpleRatioAmbiguityAcceptance)[] = {
            { Py_tp_methods, t_SimpleRatioAmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) t_SimpleRatioAmbiguityAcceptance_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SimpleRatioAmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SimpleRatioAmbiguityAcceptance, t_SimpleRatioAmbiguityAcceptance, SimpleRatioAmbiguityAcceptance);

          void t_SimpleRatioAmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(SimpleRatioAmbiguityAcceptance), &PY_TYPE_DEF(SimpleRatioAmbiguityAcceptance), module, "SimpleRatioAmbiguityAcceptance", 0);
          }

          void t_SimpleRatioAmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "class_", make_descriptor(SimpleRatioAmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "wrapfn_", make_descriptor(t_SimpleRatioAmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SimpleRatioAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SimpleRatioAmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_SimpleRatioAmbiguityAcceptance::wrap_Object(SimpleRatioAmbiguityAcceptance(((t_SimpleRatioAmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_SimpleRatioAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SimpleRatioAmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SimpleRatioAmbiguityAcceptance_init_(t_SimpleRatioAmbiguityAcceptance *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            SimpleRatioAmbiguityAcceptance object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = SimpleRatioAmbiguityAcceptance(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SimpleRatioAmbiguityAcceptance_accept(t_SimpleRatioAmbiguityAcceptance *self, PyObject *arg)
          {
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution result((jobject) NULL);

            if (!parseArg(arg, "[k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.accept(a0));
              return ::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "accept", arg);
            return NULL;
          }

          static PyObject *t_SimpleRatioAmbiguityAcceptance_numberOfCandidates(t_SimpleRatioAmbiguityAcceptance *self)
          {
            jint result;
            OBJ_CALL(result = self->object.numberOfCandidates());
            return PyLong_FromLong((long) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventState.h"
#include "org/orekit/propagation/events/EventState$EventOccurrence.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventState::class$ = NULL;
        jmethodID *EventState::mids$ = NULL;
        bool EventState::live$ = false;

        jclass EventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ef30a2ad40caceb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_doEvent_8b8356d12501b9c3] = env->getMethodID(cls, "doEvent", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/events/EventState$EventOccurrence;");
            mids$[mid_evaluateStep_7eb896d60bc53f90] = env->getMethodID(cls, "evaluateStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)Z");
            mids$[mid_getEventDate_aaa854c403487cf3] = env->getMethodID(cls, "getEventDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEventDetector_27b528e7858202ed] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_reinitializeBegin_eb797cf50ec4b2c4] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_tryAdvance_47b195ba4e6bbd7a] = env->getMethodID(cls, "tryAdvance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventState::EventState(const ::org::orekit::propagation::events::EventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ef30a2ad40caceb, a0.this$)) {}

        ::org::orekit::propagation::events::EventState$EventOccurrence EventState::doEvent(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::events::EventState$EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_8b8356d12501b9c3], a0.this$));
        }

        jboolean EventState::evaluateStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_7eb896d60bc53f90], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate EventState::getEventDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEventDate_aaa854c403487cf3]));
        }

        ::org::orekit::propagation::events::EventDetector EventState::getEventDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_27b528e7858202ed]));
        }

        void EventState::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
        }

        void EventState::reinitializeBegin(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_eb797cf50ec4b2c4], a0.this$);
        }

        jboolean EventState::tryAdvance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_47b195ba4e6bbd7a], a0.this$, a1.this$);
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
        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_of_(t_EventState *self, PyObject *args);
        static int t_EventState_init_(t_EventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_getEventDate(t_EventState *self);
        static PyObject *t_EventState_getEventDetector(t_EventState *self);
        static PyObject *t_EventState_init(t_EventState *self, PyObject *args);
        static PyObject *t_EventState_reinitializeBegin(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_tryAdvance(t_EventState *self, PyObject *args);
        static PyObject *t_EventState_get__eventDate(t_EventState *self, void *data);
        static PyObject *t_EventState_get__eventDetector(t_EventState *self, void *data);
        static PyObject *t_EventState_get__parameters_(t_EventState *self, void *data);
        static PyGetSetDef t_EventState__fields_[] = {
          DECLARE_GET_FIELD(t_EventState, eventDate),
          DECLARE_GET_FIELD(t_EventState, eventDetector),
          DECLARE_GET_FIELD(t_EventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventState__methods_[] = {
          DECLARE_METHOD(t_EventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventState, doEvent, METH_O),
          DECLARE_METHOD(t_EventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_EventState, getEventDate, METH_NOARGS),
          DECLARE_METHOD(t_EventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventState, init, METH_VARARGS),
          DECLARE_METHOD(t_EventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_EventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventState)[] = {
          { Py_tp_methods, t_EventState__methods_ },
          { Py_tp_init, (void *) t_EventState_init_ },
          { Py_tp_getset, t_EventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventState, t_EventState, EventState);
        PyObject *t_EventState::wrap_Object(const EventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState *self = (t_EventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState *self = (t_EventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventState::install(PyObject *module)
        {
          installType(&PY_TYPE(EventState), &PY_TYPE_DEF(EventState), module, "EventState", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "EventOccurrence", make_descriptor(&PY_TYPE_DEF(EventState$EventOccurrence)));
        }

        void t_EventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "class_", make_descriptor(EventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "wrapfn_", make_descriptor(t_EventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventState::initializeClass, 1)))
            return NULL;
          return t_EventState::wrap_Object(EventState(((t_EventState *) arg)->object.this$));
        }
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventState_of_(t_EventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventState_init_(t_EventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          EventState object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            INT_CALL(object = EventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::events::EventState$EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::orekit::propagation::events::t_EventState$EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_EventState_getEventDate(t_EventState *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EventState_getEventDetector(t_EventState *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventState_init(t_EventState *self, PyObject *args)
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

        static PyObject *t_EventState_reinitializeBegin(t_EventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_EventState_tryAdvance(t_EventState *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }
        static PyObject *t_EventState_get__parameters_(t_EventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventState_get__eventDate(t_EventState *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EventState_get__eventDetector(t_EventState *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldAdditionalStateProvider::class$ = NULL;
      jmethodID *FieldAdditionalStateProvider::mids$ = NULL;
      bool FieldAdditionalStateProvider::live$ = false;

      jclass FieldAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAdditionalState_360c953f14ed07de] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_yields_91c945ca7903e8ac] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldAdditionalStateProvider::getAdditionalState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_360c953f14ed07de], a0.this$));
      }

      ::java::lang::String FieldAdditionalStateProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      void FieldAdditionalStateProvider::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
      }

      jboolean FieldAdditionalStateProvider::yields(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_91c945ca7903e8ac], a0.this$);
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
      static PyObject *t_FieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_of_(t_FieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_FieldAdditionalStateProvider_getAdditionalState(t_FieldAdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_getName(t_FieldAdditionalStateProvider *self);
      static PyObject *t_FieldAdditionalStateProvider_init(t_FieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_FieldAdditionalStateProvider_yields(t_FieldAdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_get__name(t_FieldAdditionalStateProvider *self, void *data);
      static PyObject *t_FieldAdditionalStateProvider_get__parameters_(t_FieldAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_FieldAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAdditionalStateProvider, name),
        DECLARE_GET_FIELD(t_FieldAdditionalStateProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_FieldAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, getAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, getName, METH_NOARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, init, METH_VARARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, yields, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAdditionalStateProvider)[] = {
        { Py_tp_methods, t_FieldAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAdditionalStateProvider, t_FieldAdditionalStateProvider, FieldAdditionalStateProvider);
      PyObject *t_FieldAdditionalStateProvider::wrap_Object(const FieldAdditionalStateProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAdditionalStateProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAdditionalStateProvider *self = (t_FieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAdditionalStateProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAdditionalStateProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAdditionalStateProvider *self = (t_FieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAdditionalStateProvider), &PY_TYPE_DEF(FieldAdditionalStateProvider), module, "FieldAdditionalStateProvider", 0);
      }

      void t_FieldAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "class_", make_descriptor(FieldAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "wrapfn_", make_descriptor(t_FieldAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_FieldAdditionalStateProvider::wrap_Object(FieldAdditionalStateProvider(((t_FieldAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_FieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAdditionalStateProvider_of_(t_FieldAdditionalStateProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldAdditionalStateProvider_getAdditionalState(t_FieldAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_FieldAdditionalStateProvider_getName(t_FieldAdditionalStateProvider *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_FieldAdditionalStateProvider_init(t_FieldAdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_FieldAdditionalStateProvider_yields(t_FieldAdditionalStateProvider *self, PyObject *arg)
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
      static PyObject *t_FieldAdditionalStateProvider_get__parameters_(t_FieldAdditionalStateProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAdditionalStateProvider_get__name(t_FieldAdditionalStateProvider *self, void *data)
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
#include "org/orekit/propagation/sampling/EmptyMultiSatStepHandler.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *EmptyMultiSatStepHandler::class$ = NULL;
        jmethodID *EmptyMultiSatStepHandler::mids$ = NULL;
        bool EmptyMultiSatStepHandler::live$ = false;

        jclass EmptyMultiSatStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/EmptyMultiSatStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finish_65de9727799c5641] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_65de9727799c5641] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_9864bb25319e03a0] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EmptyMultiSatStepHandler::EmptyMultiSatStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void EmptyMultiSatStepHandler::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_65de9727799c5641], a0.this$);
        }

        void EmptyMultiSatStepHandler::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_65de9727799c5641], a0.this$);
        }

        void EmptyMultiSatStepHandler::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_9864bb25319e03a0], a0.this$, a1.this$);
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
        static PyObject *t_EmptyMultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmptyMultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EmptyMultiSatStepHandler_init_(t_EmptyMultiSatStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EmptyMultiSatStepHandler_finish(t_EmptyMultiSatStepHandler *self, PyObject *arg);
        static PyObject *t_EmptyMultiSatStepHandler_handleStep(t_EmptyMultiSatStepHandler *self, PyObject *arg);
        static PyObject *t_EmptyMultiSatStepHandler_init(t_EmptyMultiSatStepHandler *self, PyObject *args);

        static PyMethodDef t_EmptyMultiSatStepHandler__methods_[] = {
          DECLARE_METHOD(t_EmptyMultiSatStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmptyMultiSatStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmptyMultiSatStepHandler, finish, METH_O),
          DECLARE_METHOD(t_EmptyMultiSatStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_EmptyMultiSatStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmptyMultiSatStepHandler)[] = {
          { Py_tp_methods, t_EmptyMultiSatStepHandler__methods_ },
          { Py_tp_init, (void *) t_EmptyMultiSatStepHandler_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmptyMultiSatStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EmptyMultiSatStepHandler, t_EmptyMultiSatStepHandler, EmptyMultiSatStepHandler);

        void t_EmptyMultiSatStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(EmptyMultiSatStepHandler), &PY_TYPE_DEF(EmptyMultiSatStepHandler), module, "EmptyMultiSatStepHandler", 0);
        }

        void t_EmptyMultiSatStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmptyMultiSatStepHandler), "class_", make_descriptor(EmptyMultiSatStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmptyMultiSatStepHandler), "wrapfn_", make_descriptor(t_EmptyMultiSatStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmptyMultiSatStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EmptyMultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmptyMultiSatStepHandler::initializeClass, 1)))
            return NULL;
          return t_EmptyMultiSatStepHandler::wrap_Object(EmptyMultiSatStepHandler(((t_EmptyMultiSatStepHandler *) arg)->object.this$));
        }
        static PyObject *t_EmptyMultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmptyMultiSatStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EmptyMultiSatStepHandler_init_(t_EmptyMultiSatStepHandler *self, PyObject *args, PyObject *kwds)
        {
          EmptyMultiSatStepHandler object((jobject) NULL);

          INT_CALL(object = EmptyMultiSatStepHandler());
          self->object = object;

          return 0;
        }

        static PyObject *t_EmptyMultiSatStepHandler_finish(t_EmptyMultiSatStepHandler *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_EmptyMultiSatStepHandler_handleStep(t_EmptyMultiSatStepHandler *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_EmptyMultiSatStepHandler_init(t_EmptyMultiSatStepHandler *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
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
                mids$[mid_accept_78e41e7b5124a628] = env->getMethodID(cls, "accept", "(IID)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoublyIndexedDoubleConsumer::accept(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_78e41e7b5124a628], a0, a1, a2);
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
#include "org/hipparchus/analysis/FieldUnivariateMatrixFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateMatrixFunction::class$ = NULL;
      jmethodID *FieldUnivariateMatrixFunction::mids$ = NULL;
      bool FieldUnivariateMatrixFunction::live$ = false;

      jclass FieldUnivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateMatrixFunction_84ef8f3f06cba71f] = env->getMethodID(cls, "toCalculusFieldUnivariateMatrixFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction;");
          mids$[mid_value_452b3a4b4c579cdb] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction FieldUnivariateMatrixFunction::toCalculusFieldUnivariateMatrixFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateMatrixFunction_84ef8f3f06cba71f], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldUnivariateMatrixFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_452b3a4b4c579cdb], a0.this$));
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
      static PyObject *t_FieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_toCalculusFieldUnivariateMatrixFunction(t_FieldUnivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_value(t_FieldUnivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, toCalculusFieldUnivariateMatrixFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateMatrixFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateMatrixFunction, t_FieldUnivariateMatrixFunction, FieldUnivariateMatrixFunction);

      void t_FieldUnivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateMatrixFunction), &PY_TYPE_DEF(FieldUnivariateMatrixFunction), module, "FieldUnivariateMatrixFunction", 0);
      }

      void t_FieldUnivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "class_", make_descriptor(FieldUnivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "wrapfn_", make_descriptor(t_FieldUnivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateMatrixFunction::wrap_Object(FieldUnivariateMatrixFunction(((t_FieldUnivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateMatrixFunction_toCalculusFieldUnivariateMatrixFunction(t_FieldUnivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateMatrixFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateMatrixFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateMatrixFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateMatrixFunction_value(t_FieldUnivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
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
#include "org/orekit/rugged/adjustment/GroundOptimizationProblemBuilder.h"
#include "java/util/List.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *GroundOptimizationProblemBuilder::class$ = NULL;
        jmethodID *GroundOptimizationProblemBuilder::mids$ = NULL;
        bool GroundOptimizationProblemBuilder::live$ = false;

        jclass GroundOptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/GroundOptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_62a022dead187dcc] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/rugged/adjustment/measurements/Observables;Lorg/orekit/rugged/api/Rugged;)V");
            mids$[mid_build_2e2baa3c6f1b9087] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_initMapping_7ae3461a92a43152] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_createTargetAndWeight_7ae3461a92a43152] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_createFunction_b196da25fd980476] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundOptimizationProblemBuilder::GroundOptimizationProblemBuilder(const ::java::util::List & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1, const ::org::orekit::rugged::api::Rugged & a2) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(env->newObject(initializeClass, &mids$, mid_init$_62a022dead187dcc, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem GroundOptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_2e2baa3c6f1b9087], a0, a1));
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
        static PyObject *t_GroundOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundOptimizationProblemBuilder_init_(t_GroundOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundOptimizationProblemBuilder_build(t_GroundOptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_GroundOptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundOptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_GroundOptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) t_GroundOptimizationProblemBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundOptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::adjustment::OptimizationProblemBuilder),
          NULL
        };

        DEFINE_TYPE(GroundOptimizationProblemBuilder, t_GroundOptimizationProblemBuilder, GroundOptimizationProblemBuilder);

        void t_GroundOptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundOptimizationProblemBuilder), &PY_TYPE_DEF(GroundOptimizationProblemBuilder), module, "GroundOptimizationProblemBuilder", 0);
        }

        void t_GroundOptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "class_", make_descriptor(GroundOptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "wrapfn_", make_descriptor(t_GroundOptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundOptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_GroundOptimizationProblemBuilder::wrap_Object(GroundOptimizationProblemBuilder(((t_GroundOptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_GroundOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundOptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundOptimizationProblemBuilder_init_(t_GroundOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          ::org::orekit::rugged::api::Rugged a2((jobject) NULL);
          GroundOptimizationProblemBuilder object((jobject) NULL);

          if (!parseArgs(args, "Kkk", ::java::util::List::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, ::org::orekit::rugged::api::Rugged::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
          {
            INT_CALL(object = GroundOptimizationProblemBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundOptimizationProblemBuilder_build(t_GroundOptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          return callSuper(PY_TYPE(GroundOptimizationProblemBuilder), (PyObject *) self, "build", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/FESCnmSnmReader.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *FESCnmSnmReader::class$ = NULL;
          jmethodID *FESCnmSnmReader::mids$ = NULL;
          bool FESCnmSnmReader::live$ = false;

          jclass FESCnmSnmReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/FESCnmSnmReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_dc256bfc3daae929] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
              mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FESCnmSnmReader::FESCnmSnmReader(const ::java::lang::String & a0, jdouble a1) : ::org::orekit::forces::gravity::potential::OceanTidesReader(env->newObject(initializeClass, &mids$, mid_init$_dc256bfc3daae929, a0.this$, a1)) {}

          void FESCnmSnmReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
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
          static PyObject *t_FESCnmSnmReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FESCnmSnmReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FESCnmSnmReader_init_(t_FESCnmSnmReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FESCnmSnmReader_loadData(t_FESCnmSnmReader *self, PyObject *args);

          static PyMethodDef t_FESCnmSnmReader__methods_[] = {
            DECLARE_METHOD(t_FESCnmSnmReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCnmSnmReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCnmSnmReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FESCnmSnmReader)[] = {
            { Py_tp_methods, t_FESCnmSnmReader__methods_ },
            { Py_tp_init, (void *) t_FESCnmSnmReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FESCnmSnmReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::OceanTidesReader),
            NULL
          };

          DEFINE_TYPE(FESCnmSnmReader, t_FESCnmSnmReader, FESCnmSnmReader);

          void t_FESCnmSnmReader::install(PyObject *module)
          {
            installType(&PY_TYPE(FESCnmSnmReader), &PY_TYPE_DEF(FESCnmSnmReader), module, "FESCnmSnmReader", 0);
          }

          void t_FESCnmSnmReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "class_", make_descriptor(FESCnmSnmReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "wrapfn_", make_descriptor(t_FESCnmSnmReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FESCnmSnmReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FESCnmSnmReader::initializeClass, 1)))
              return NULL;
            return t_FESCnmSnmReader::wrap_Object(FESCnmSnmReader(((t_FESCnmSnmReader *) arg)->object.this$));
          }
          static PyObject *t_FESCnmSnmReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FESCnmSnmReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FESCnmSnmReader_init_(t_FESCnmSnmReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            FESCnmSnmReader object((jobject) NULL);

            if (!parseArgs(args, "sD", &a0, &a1))
            {
              INT_CALL(object = FESCnmSnmReader(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FESCnmSnmReader_loadData(t_FESCnmSnmReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FESCnmSnmReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/StepsizeHelper.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *StepsizeHelper::class$ = NULL;
        jmethodID *StepsizeHelper::mids$ = NULL;
        bool StepsizeHelper::live$ = false;

        jclass StepsizeHelper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/StepsizeHelper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e5787c5177784e12] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_667a7965403ed91a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_filterStep_73d783f530b6a963] = env->getMethodID(cls, "filterStep", "(DZZ)D");
            mids$[mid_filterStep_15e00e789d917dd7] = env->getMethodID(cls, "filterStep", "(Lorg/hipparchus/CalculusFieldElement;ZZ)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDummyStepsize_456d9a2f64d6b28d] = env->getMethodID(cls, "getDummyStepsize", "()D");
            mids$[mid_getInitialStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getInitialStep", "()D");
            mids$[mid_getMainSetDimension_f2f64475e4580546] = env->getMethodID(cls, "getMainSetDimension", "()I");
            mids$[mid_getMaxStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_getRelativeTolerance_b772323fc98b7293] = env->getMethodID(cls, "getRelativeTolerance", "(I)D");
            mids$[mid_getTolerance_31332242d1624d2c] = env->getMethodID(cls, "getTolerance", "(ID)D");
            mids$[mid_getTolerance_ee7db4b2ec7048ce] = env->getMethodID(cls, "getTolerance", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_setInitialStepSize_77e0f9a1f260e2e5] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setMainSetDimension_0a2a1ac2721c0336] = env->getMethodID(cls, "setMainSetDimension", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepsizeHelper::StepsizeHelper(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e5787c5177784e12, a0, a1, a2.this$, a3.this$)) {}

        StepsizeHelper::StepsizeHelper(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_667a7965403ed91a, a0, a1, a2, a3)) {}

        jdouble StepsizeHelper::filterStep(jdouble a0, jboolean a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_filterStep_73d783f530b6a963], a0, a1, a2);
        }

        ::org::hipparchus::CalculusFieldElement StepsizeHelper::filterStep(const ::org::hipparchus::CalculusFieldElement & a0, jboolean a1, jboolean a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_filterStep_15e00e789d917dd7], a0.this$, a1, a2));
        }

        jdouble StepsizeHelper::getDummyStepsize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDummyStepsize_456d9a2f64d6b28d]);
        }

        jdouble StepsizeHelper::getInitialStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInitialStep_456d9a2f64d6b28d]);
        }

        jint StepsizeHelper::getMainSetDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getMainSetDimension_f2f64475e4580546]);
        }

        jdouble StepsizeHelper::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_456d9a2f64d6b28d]);
        }

        jdouble StepsizeHelper::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_456d9a2f64d6b28d]);
        }

        jdouble StepsizeHelper::getRelativeTolerance(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeTolerance_b772323fc98b7293], a0);
        }

        jdouble StepsizeHelper::getTolerance(jint a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_31332242d1624d2c], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement StepsizeHelper::getTolerance(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTolerance_ee7db4b2ec7048ce], a0, a1.this$));
        }

        void StepsizeHelper::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_77e0f9a1f260e2e5], a0);
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
        static PyObject *t_StepsizeHelper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepsizeHelper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepsizeHelper_init_(t_StepsizeHelper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepsizeHelper_filterStep(t_StepsizeHelper *self, PyObject *args);
        static PyObject *t_StepsizeHelper_getDummyStepsize(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getInitialStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMainSetDimension(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMaxStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMinStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getRelativeTolerance(t_StepsizeHelper *self, PyObject *arg);
        static PyObject *t_StepsizeHelper_getTolerance(t_StepsizeHelper *self, PyObject *args);
        static PyObject *t_StepsizeHelper_setInitialStepSize(t_StepsizeHelper *self, PyObject *arg);
        static PyObject *t_StepsizeHelper_get__dummyStepsize(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__initialStep(t_StepsizeHelper *self, void *data);
        static int t_StepsizeHelper_set__initialStepSize(t_StepsizeHelper *self, PyObject *arg, void *data);
        static PyObject *t_StepsizeHelper_get__mainSetDimension(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__maxStep(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__minStep(t_StepsizeHelper *self, void *data);
        static PyGetSetDef t_StepsizeHelper__fields_[] = {
          DECLARE_GET_FIELD(t_StepsizeHelper, dummyStepsize),
          DECLARE_GET_FIELD(t_StepsizeHelper, initialStep),
          DECLARE_SET_FIELD(t_StepsizeHelper, initialStepSize),
          DECLARE_GET_FIELD(t_StepsizeHelper, mainSetDimension),
          DECLARE_GET_FIELD(t_StepsizeHelper, maxStep),
          DECLARE_GET_FIELD(t_StepsizeHelper, minStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepsizeHelper__methods_[] = {
          DECLARE_METHOD(t_StepsizeHelper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepsizeHelper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepsizeHelper, filterStep, METH_VARARGS),
          DECLARE_METHOD(t_StepsizeHelper, getDummyStepsize, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getInitialStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMainSetDimension, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getRelativeTolerance, METH_O),
          DECLARE_METHOD(t_StepsizeHelper, getTolerance, METH_VARARGS),
          DECLARE_METHOD(t_StepsizeHelper, setInitialStepSize, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepsizeHelper)[] = {
          { Py_tp_methods, t_StepsizeHelper__methods_ },
          { Py_tp_init, (void *) t_StepsizeHelper_init_ },
          { Py_tp_getset, t_StepsizeHelper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepsizeHelper)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepsizeHelper, t_StepsizeHelper, StepsizeHelper);

        void t_StepsizeHelper::install(PyObject *module)
        {
          installType(&PY_TYPE(StepsizeHelper), &PY_TYPE_DEF(StepsizeHelper), module, "StepsizeHelper", 0);
        }

        void t_StepsizeHelper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "class_", make_descriptor(StepsizeHelper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "wrapfn_", make_descriptor(t_StepsizeHelper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepsizeHelper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepsizeHelper::initializeClass, 1)))
            return NULL;
          return t_StepsizeHelper::wrap_Object(StepsizeHelper(((t_StepsizeHelper *) arg)->object.this$));
        }
        static PyObject *t_StepsizeHelper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepsizeHelper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepsizeHelper_init_(t_StepsizeHelper *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              StepsizeHelper object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StepsizeHelper(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              StepsizeHelper object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StepsizeHelper(a0, a1, a2, a3));
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

        static PyObject *t_StepsizeHelper_filterStep(t_StepsizeHelper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jdouble a0;
              jboolean a1;
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "DZZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.filterStep(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              jboolean a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KZZ", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.filterStep(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "filterStep", args);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_getDummyStepsize(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDummyStepsize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getInitialStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInitialStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getMainSetDimension(t_StepsizeHelper *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMainSetDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StepsizeHelper_getMaxStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getMinStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getRelativeTolerance(t_StepsizeHelper *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getRelativeTolerance(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRelativeTolerance", arg);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_getTolerance(t_StepsizeHelper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              jdouble result;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getTolerance(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getTolerance(a0, a1));
                return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTolerance", args);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_setInitialStepSize(t_StepsizeHelper *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInitialStepSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialStepSize", arg);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_get__dummyStepsize(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDummyStepsize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StepsizeHelper_get__initialStep(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInitialStep());
          return PyFloat_FromDouble((double) value);
        }

        static int t_StepsizeHelper_set__initialStepSize(t_StepsizeHelper *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInitialStepSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialStepSize", arg);
          return -1;
        }

        static PyObject *t_StepsizeHelper_get__mainSetDimension(t_StepsizeHelper *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMainSetDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StepsizeHelper_get__maxStep(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StepsizeHelper_get__minStep(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroRangeModifier::class$ = NULL;
          jmethodID *ShapiroRangeModifier::mids$ = NULL;
          bool ShapiroRangeModifier::live$ = false;

          jclass ShapiroRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroRangeModifier::ShapiroRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          ::java::util::List ShapiroRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void ShapiroRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_ShapiroRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroRangeModifier_init_(t_ShapiroRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroRangeModifier_getParametersDrivers(t_ShapiroRangeModifier *self);
          static PyObject *t_ShapiroRangeModifier_modifyWithoutDerivatives(t_ShapiroRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroRangeModifier_get__parametersDrivers(t_ShapiroRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroRangeModifier, t_ShapiroRangeModifier, ShapiroRangeModifier);

          void t_ShapiroRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroRangeModifier), &PY_TYPE_DEF(ShapiroRangeModifier), module, "ShapiroRangeModifier", 0);
          }

          void t_ShapiroRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "class_", make_descriptor(ShapiroRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "wrapfn_", make_descriptor(t_ShapiroRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroRangeModifier::wrap_Object(ShapiroRangeModifier(((t_ShapiroRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroRangeModifier_init_(t_ShapiroRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroRangeModifier_getParametersDrivers(t_ShapiroRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroRangeModifier_modifyWithoutDerivatives(t_ShapiroRangeModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroRangeModifier_get__parametersDrivers(t_ShapiroRangeModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *StreamingAemWriter::class$ = NULL;
              jmethodID *StreamingAemWriter::mids$ = NULL;
              bool StreamingAemWriter::live$ = false;

              jclass StreamingAemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ca63d1fd5f26e03e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;)V");
                  mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newSegment_f004ed96bd0c75ab] = env->getMethodID(cls, "newSegment", "()Lorg/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingAemWriter::StreamingAemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a2, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ca63d1fd5f26e03e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              void StreamingAemWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter StreamingAemWriter::newSegment() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter(env->callObjectMethod(this$, mids$[mid_newSegment_f004ed96bd0c75ab]));
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
              static PyObject *t_StreamingAemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingAemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingAemWriter_init_(t_StreamingAemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingAemWriter_close(t_StreamingAemWriter *self);
              static PyObject *t_StreamingAemWriter_newSegment(t_StreamingAemWriter *self);

              static PyMethodDef t_StreamingAemWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingAemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingAemWriter, newSegment, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingAemWriter)[] = {
                { Py_tp_methods, t_StreamingAemWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingAemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingAemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingAemWriter, t_StreamingAemWriter, StreamingAemWriter);

              void t_StreamingAemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingAemWriter), &PY_TYPE_DEF(StreamingAemWriter), module, "StreamingAemWriter", 0);
              }

              void t_StreamingAemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "class_", make_descriptor(StreamingAemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "wrapfn_", make_descriptor(t_StreamingAemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingAemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingAemWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingAemWriter::wrap_Object(StreamingAemWriter(((t_StreamingAemWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingAemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingAemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingAemWriter_init_(t_StreamingAemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a3((jobject) NULL);
                StreamingAemWriter object((jobject) NULL);

                if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::parameters_, &a2, &a3))
                {
                  INT_CALL(object = StreamingAemWriter(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingAemWriter_close(t_StreamingAemWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingAemWriter_newSegment(t_StreamingAemWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newSegment());
                return ::org::orekit::files::ccsds::ndm::adm::aem::t_StreamingAemWriter$SegmentWriter::wrap_Object(result);
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
#include "org/hipparchus/analysis/function/Add.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Add::class$ = NULL;
        jmethodID *Add::mids$ = NULL;
        bool Add::live$ = false;

        jclass Add::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Add");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Add::Add() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Add::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_824133ce4aec3505], a0, a1);
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
        static PyObject *t_Add_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Add_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Add_init_(t_Add *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Add_value(t_Add *self, PyObject *args);

        static PyMethodDef t_Add__methods_[] = {
          DECLARE_METHOD(t_Add, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Add, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Add, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Add)[] = {
          { Py_tp_methods, t_Add__methods_ },
          { Py_tp_init, (void *) t_Add_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Add)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Add, t_Add, Add);

        void t_Add::install(PyObject *module)
        {
          installType(&PY_TYPE(Add), &PY_TYPE_DEF(Add), module, "Add", 0);
        }

        void t_Add::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "class_", make_descriptor(Add::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "wrapfn_", make_descriptor(t_Add::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Add_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Add::initializeClass, 1)))
            return NULL;
          return t_Add::wrap_Object(Add(((t_Add *) arg)->object.this$));
        }
        static PyObject *t_Add_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Add::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Add_init_(t_Add *self, PyObject *args, PyObject *kwds)
        {
          Add object((jobject) NULL);

          INT_CALL(object = Add());
          self->object = object;

          return 0;
        }

        static PyObject *t_Add_value(t_Add *self, PyObject *args)
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
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BilinearInterpolatingFunction::class$ = NULL;
        jmethodID *BilinearInterpolatingFunction::mids$ = NULL;
        bool BilinearInterpolatingFunction::live$ = false;

        jclass BilinearInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_748b42918a92f2d4] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
            mids$[mid_getXInf_456d9a2f64d6b28d] = env->getMethodID(cls, "getXInf", "()D");
            mids$[mid_getXSup_456d9a2f64d6b28d] = env->getMethodID(cls, "getXSup", "()D");
            mids$[mid_getYInf_456d9a2f64d6b28d] = env->getMethodID(cls, "getYInf", "()D");
            mids$[mid_getYSup_456d9a2f64d6b28d] = env->getMethodID(cls, "getYSup", "()D");
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");
            mids$[mid_value_75c7ce7d33e7324b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BilinearInterpolatingFunction::BilinearInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_748b42918a92f2d4, a0.this$, a1.this$, a2.this$)) {}

        jdouble BilinearInterpolatingFunction::getXInf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXInf_456d9a2f64d6b28d]);
        }

        jdouble BilinearInterpolatingFunction::getXSup() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXSup_456d9a2f64d6b28d]);
        }

        jdouble BilinearInterpolatingFunction::getYInf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYInf_456d9a2f64d6b28d]);
        }

        jdouble BilinearInterpolatingFunction::getYSup() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYSup_456d9a2f64d6b28d]);
        }

        jdouble BilinearInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_824133ce4aec3505], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement BilinearInterpolatingFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_75c7ce7d33e7324b], a0.this$, a1.this$));
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
        static PyObject *t_BilinearInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BilinearInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BilinearInterpolatingFunction_init_(t_BilinearInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BilinearInterpolatingFunction_getXInf(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getXSup(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getYInf(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getYSup(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_value(t_BilinearInterpolatingFunction *self, PyObject *args);
        static PyObject *t_BilinearInterpolatingFunction_get__xInf(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__xSup(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__yInf(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__ySup(t_BilinearInterpolatingFunction *self, void *data);
        static PyGetSetDef t_BilinearInterpolatingFunction__fields_[] = {
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, xInf),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, xSup),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, yInf),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, ySup),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BilinearInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_BilinearInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getXInf, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getXSup, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getYInf, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getYSup, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BilinearInterpolatingFunction)[] = {
          { Py_tp_methods, t_BilinearInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_BilinearInterpolatingFunction_init_ },
          { Py_tp_getset, t_BilinearInterpolatingFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BilinearInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BilinearInterpolatingFunction, t_BilinearInterpolatingFunction, BilinearInterpolatingFunction);

        void t_BilinearInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(BilinearInterpolatingFunction), &PY_TYPE_DEF(BilinearInterpolatingFunction), module, "BilinearInterpolatingFunction", 0);
        }

        void t_BilinearInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "class_", make_descriptor(BilinearInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "wrapfn_", make_descriptor(t_BilinearInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BilinearInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BilinearInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_BilinearInterpolatingFunction::wrap_Object(BilinearInterpolatingFunction(((t_BilinearInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_BilinearInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BilinearInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BilinearInterpolatingFunction_init_(t_BilinearInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          BilinearInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            INT_CALL(object = BilinearInterpolatingFunction(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BilinearInterpolatingFunction_getXInf(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXInf());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getXSup(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXSup());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getYInf(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYInf());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getYSup(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYSup());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_value(t_BilinearInterpolatingFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              jdouble result;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.value(a0, a1));
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
                OBJ_CALL(result = self->object.value(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_BilinearInterpolatingFunction_get__xInf(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXInf());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__xSup(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXSup());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__yInf(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYInf());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__ySup(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYSup());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitInternalError.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitInternalError::class$ = NULL;
      jmethodID *OrekitInternalError::mids$ = NULL;
      bool OrekitInternalError::live$ = false;

      jclass OrekitInternalError::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitInternalError");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ea7f4d04e27238a7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
          mids$[mid_getLocalizedMessage_0090f7797e403f43] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_0090f7797e403f43] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_bab3be9b232acc5a] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_e81d7907eea7e008] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_2e589a53386da289] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitInternalError::OrekitInternalError(const ::java::lang::Throwable & a0) : ::java::lang::IllegalStateException(env->newObject(initializeClass, &mids$, mid_init$_ea7f4d04e27238a7, a0.this$)) {}

      ::java::lang::String OrekitInternalError::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_0090f7797e403f43]));
      }

      ::java::lang::String OrekitInternalError::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_0090f7797e403f43]));
      }

      ::java::lang::String OrekitInternalError::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_bab3be9b232acc5a], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitInternalError::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_e81d7907eea7e008]));
      }

      ::org::hipparchus::exception::Localizable OrekitInternalError::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_2e589a53386da289]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitInternalError_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitInternalError_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitInternalError_init_(t_OrekitInternalError *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitInternalError_getLocalizedMessage(t_OrekitInternalError *self, PyObject *args);
      static PyObject *t_OrekitInternalError_getMessage(t_OrekitInternalError *self, PyObject *args);
      static PyObject *t_OrekitInternalError_getParts(t_OrekitInternalError *self);
      static PyObject *t_OrekitInternalError_getSpecifier(t_OrekitInternalError *self);
      static PyObject *t_OrekitInternalError_get__localizedMessage(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__message(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__parts(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__specifier(t_OrekitInternalError *self, void *data);
      static PyGetSetDef t_OrekitInternalError__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitInternalError, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitInternalError, message),
        DECLARE_GET_FIELD(t_OrekitInternalError, parts),
        DECLARE_GET_FIELD(t_OrekitInternalError, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitInternalError__methods_[] = {
        DECLARE_METHOD(t_OrekitInternalError, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitInternalError, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitInternalError, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitInternalError, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitInternalError, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitInternalError, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitInternalError)[] = {
        { Py_tp_methods, t_OrekitInternalError__methods_ },
        { Py_tp_init, (void *) t_OrekitInternalError_init_ },
        { Py_tp_getset, t_OrekitInternalError__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitInternalError)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalStateException),
        NULL
      };

      DEFINE_TYPE(OrekitInternalError, t_OrekitInternalError, OrekitInternalError);

      void t_OrekitInternalError::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitInternalError), &PY_TYPE_DEF(OrekitInternalError), module, "OrekitInternalError", 0);
      }

      void t_OrekitInternalError::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "class_", make_descriptor(OrekitInternalError::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "wrapfn_", make_descriptor(t_OrekitInternalError::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitInternalError_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitInternalError::initializeClass, 1)))
          return NULL;
        return t_OrekitInternalError::wrap_Object(OrekitInternalError(((t_OrekitInternalError *) arg)->object.this$));
      }
      static PyObject *t_OrekitInternalError_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitInternalError::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitInternalError_init_(t_OrekitInternalError *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Throwable a0((jobject) NULL);
        OrekitInternalError object((jobject) NULL);

        if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
        {
          INT_CALL(object = OrekitInternalError(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitInternalError_getLocalizedMessage(t_OrekitInternalError *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitInternalError), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitInternalError_getMessage(t_OrekitInternalError *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitInternalError), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitInternalError_getParts(t_OrekitInternalError *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitInternalError_getSpecifier(t_OrekitInternalError *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitInternalError_get__localizedMessage(t_OrekitInternalError *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitInternalError_get__message(t_OrekitInternalError *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitInternalError_get__parts(t_OrekitInternalError *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitInternalError_get__specifier(t_OrekitInternalError *self, void *data)
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
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *WeightedEvaluation::class$ = NULL;
        jmethodID *WeightedEvaluation::mids$ = NULL;
        bool WeightedEvaluation::live$ = false;

        jclass WeightedEvaluation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/WeightedEvaluation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluate_1ce76fb6ff382da9] = env->getMethodID(cls, "evaluate", "([D[D)D");
            mids$[mid_evaluate_5d62632feda90f27] = env->getMethodID(cls, "evaluate", "([D[DII)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble WeightedEvaluation::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble WeightedEvaluation::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_5d62632feda90f27], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_WeightedEvaluation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeightedEvaluation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeightedEvaluation_evaluate(t_WeightedEvaluation *self, PyObject *args);

        static PyMethodDef t_WeightedEvaluation__methods_[] = {
          DECLARE_METHOD(t_WeightedEvaluation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeightedEvaluation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeightedEvaluation, evaluate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WeightedEvaluation)[] = {
          { Py_tp_methods, t_WeightedEvaluation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WeightedEvaluation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(WeightedEvaluation, t_WeightedEvaluation, WeightedEvaluation);

        void t_WeightedEvaluation::install(PyObject *module)
        {
          installType(&PY_TYPE(WeightedEvaluation), &PY_TYPE_DEF(WeightedEvaluation), module, "WeightedEvaluation", 0);
        }

        void t_WeightedEvaluation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "class_", make_descriptor(WeightedEvaluation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "wrapfn_", make_descriptor(t_WeightedEvaluation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WeightedEvaluation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WeightedEvaluation::initializeClass, 1)))
            return NULL;
          return t_WeightedEvaluation::wrap_Object(WeightedEvaluation(((t_WeightedEvaluation *) arg)->object.this$));
        }
        static PyObject *t_WeightedEvaluation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WeightedEvaluation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_WeightedEvaluation_evaluate(t_WeightedEvaluation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.evaluate(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jint a3;
              jdouble result;

              if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/XmlGenerator.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
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
                mids$[mid_init$_bb91812180ef6dda] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;ILjava/lang/String;DZLjava/lang/String;)V");
                mids$[mid_endMessage_e939c6558ae8d313] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_e939c6558ae8d313] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_0090f7797e403f43] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_b51f613f857a5e84] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_startMessage_f7e4436e61826cb4] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_65de9727799c5641] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_110375161a97bc67] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeOneAttributeElement_dc789c6b17416ede] = env->getMethodID(cls, "writeOneAttributeElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_writeTwoAttributesElement_0ed06339391372ae] = env->getMethodID(cls, "writeTwoAttributesElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_INDENT = env->getStaticIntField(cls, "DEFAULT_INDENT");
                NDM_XML_V3_SCHEMA_LOCATION = new ::java::lang::String(env->getStaticObjectField(cls, "NDM_XML_V3_SCHEMA_LOCATION", "Ljava/lang/String;"));
                UNITS = new ::java::lang::String(env->getStaticObjectField(cls, "UNITS", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XmlGenerator::XmlGenerator(const ::java::lang::Appendable & a0, jint a1, const ::java::lang::String & a2, jdouble a3, jboolean a4, const ::java::lang::String & a5) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_bb91812180ef6dda, a0.this$, a1, a2.this$, a3, a4, a5.this$)) {}

            void XmlGenerator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_e939c6558ae8d313], a0.this$);
            }

            void XmlGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_e939c6558ae8d313], a0.this$);
            }

            ::java::lang::String XmlGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_0090f7797e403f43]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat XmlGenerator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_b51f613f857a5e84]));
            }

            void XmlGenerator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_f7e4436e61826cb4], a0.this$, a1.this$, a2);
            }

            void XmlGenerator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_65de9727799c5641], a0.this$);
            }

            void XmlGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_110375161a97bc67], a0.this$, a1.this$, a2.this$, a3);
            }

            void XmlGenerator::writeOneAttributeElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeOneAttributeElement_dc789c6b17416ede], a0.this$, a1.this$, a2.this$, a3.this$);
            }

            void XmlGenerator::writeTwoAttributesElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
            {
              env->callVoidMethod(this$, mids$[mid_writeTwoAttributesElement_0ed06339391372ae], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
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
#include "org/orekit/frames/EOPFitter.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/EOPFittedModel.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPFitter::class$ = NULL;
      jmethodID *EOPFitter::mids$ = NULL;
      bool EOPFitter::live$ = false;

      jclass EOPFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e1d68203223e692f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;)V");
          mids$[mid_fit_33e783273de11a73] = env->getMethodID(cls, "fit", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/frames/EOPFittedModel;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPFitter::EOPFitter(const ::org::orekit::frames::SingleParameterFitter & a0, const ::org::orekit::frames::SingleParameterFitter & a1, const ::org::orekit::frames::SingleParameterFitter & a2, const ::org::orekit::frames::SingleParameterFitter & a3, const ::org::orekit::frames::SingleParameterFitter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1d68203223e692f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::frames::EOPFittedModel EOPFitter::fit(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::frames::EOPFittedModel(env->callObjectMethod(this$, mids$[mid_fit_33e783273de11a73], a0.this$));
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
      static PyObject *t_EOPFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPFitter_init_(t_EOPFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPFitter_fit(t_EOPFitter *self, PyObject *arg);

      static PyMethodDef t_EOPFitter__methods_[] = {
        DECLARE_METHOD(t_EOPFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFitter, fit, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPFitter)[] = {
        { Py_tp_methods, t_EOPFitter__methods_ },
        { Py_tp_init, (void *) t_EOPFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPFitter, t_EOPFitter, EOPFitter);

      void t_EOPFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPFitter), &PY_TYPE_DEF(EOPFitter), module, "EOPFitter", 0);
      }

      void t_EOPFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "class_", make_descriptor(EOPFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "wrapfn_", make_descriptor(t_EOPFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPFitter::initializeClass, 1)))
          return NULL;
        return t_EOPFitter::wrap_Object(EOPFitter(((t_EOPFitter *) arg)->object.this$));
      }
      static PyObject *t_EOPFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPFitter_init_(t_EOPFitter *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::SingleParameterFitter a0((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a1((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a2((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a3((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a4((jobject) NULL);
        EOPFitter object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = EOPFitter(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPFitter_fit(t_EOPFitter *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::frames::EOPFittedModel result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.fit(a0));
          return ::org::orekit::frames::t_EOPFittedModel::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "fit", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorKey.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorKey.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
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
                mids$[mid_process_b442327a1fe0a964] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/StateVector;)Z");
                mids$[mid_valueOf_36c496337d3a1a5a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;");
                mids$[mid_values_8a78dbfd685d704e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;");

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
              return env->callBooleanMethod(this$, mids$[mid_process_b442327a1fe0a964], a0.this$, a1.this$, a2.this$);
            }

            StateVectorKey StateVectorKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return StateVectorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_36c496337d3a1a5a], a0.this$));
            }

            JArray< StateVectorKey > StateVectorKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< StateVectorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_8a78dbfd685d704e]));
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
#include "org/orekit/data/DataProvidersManager.h"
#include "java/util/List.h"
#include "org/orekit/data/FiltersManager.h"
#include "org/orekit/data/DataProvider.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataProvidersManager::class$ = NULL;
      jmethodID *DataProvidersManager::mids$ = NULL;
      bool DataProvidersManager::live$ = false;
      ::java::lang::String *DataProvidersManager::OREKIT_DATA_PATH = NULL;

      jclass DataProvidersManager::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataProvidersManager");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addDefaultProviders_7ae3461a92a43152] = env->getMethodID(cls, "addDefaultProviders", "()V");
          mids$[mid_addProvider_308c4bc60337625a] = env->getMethodID(cls, "addProvider", "(Lorg/orekit/data/DataProvider;)V");
          mids$[mid_clearLoadedDataNames_7ae3461a92a43152] = env->getMethodID(cls, "clearLoadedDataNames", "()V");
          mids$[mid_clearProviders_7ae3461a92a43152] = env->getMethodID(cls, "clearProviders", "()V");
          mids$[mid_feed_bcc626f294fafcf6] = env->getMethodID(cls, "feed", "(Ljava/lang/String;Lorg/orekit/data/DataLoader;)Z");
          mids$[mid_getFiltersManager_9bc87012852bc9c1] = env->getMethodID(cls, "getFiltersManager", "()Lorg/orekit/data/FiltersManager;");
          mids$[mid_getLoadedDataNames_e9e1a6780fe94297] = env->getMethodID(cls, "getLoadedDataNames", "()Ljava/util/Set;");
          mids$[mid_getProviders_a6156df500549a58] = env->getMethodID(cls, "getProviders", "()Ljava/util/List;");
          mids$[mid_isSupported_ab23dfcf677c048c] = env->getMethodID(cls, "isSupported", "(Lorg/orekit/data/DataProvider;)Z");
          mids$[mid_removeProvider_29821a711ab49f7c] = env->getMethodID(cls, "removeProvider", "(Lorg/orekit/data/DataProvider;)Lorg/orekit/data/DataProvider;");
          mids$[mid_resetFiltersToDefault_7ae3461a92a43152] = env->getMethodID(cls, "resetFiltersToDefault", "()V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          OREKIT_DATA_PATH = new ::java::lang::String(env->getStaticObjectField(cls, "OREKIT_DATA_PATH", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DataProvidersManager::DataProvidersManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void DataProvidersManager::addDefaultProviders() const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultProviders_7ae3461a92a43152]);
      }

      void DataProvidersManager::addProvider(const ::org::orekit::data::DataProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addProvider_308c4bc60337625a], a0.this$);
      }

      void DataProvidersManager::clearLoadedDataNames() const
      {
        env->callVoidMethod(this$, mids$[mid_clearLoadedDataNames_7ae3461a92a43152]);
      }

      void DataProvidersManager::clearProviders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearProviders_7ae3461a92a43152]);
      }

      jboolean DataProvidersManager::feed(const ::java::lang::String & a0, const ::org::orekit::data::DataLoader & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_feed_bcc626f294fafcf6], a0.this$, a1.this$);
      }

      ::org::orekit::data::FiltersManager DataProvidersManager::getFiltersManager() const
      {
        return ::org::orekit::data::FiltersManager(env->callObjectMethod(this$, mids$[mid_getFiltersManager_9bc87012852bc9c1]));
      }

      ::java::util::Set DataProvidersManager::getLoadedDataNames() const
      {
        return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getLoadedDataNames_e9e1a6780fe94297]));
      }

      ::java::util::List DataProvidersManager::getProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getProviders_a6156df500549a58]));
      }

      jboolean DataProvidersManager::isSupported(const ::org::orekit::data::DataProvider & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_ab23dfcf677c048c], a0.this$);
      }

      ::org::orekit::data::DataProvider DataProvidersManager::removeProvider(const ::org::orekit::data::DataProvider & a0) const
      {
        return ::org::orekit::data::DataProvider(env->callObjectMethod(this$, mids$[mid_removeProvider_29821a711ab49f7c], a0.this$));
      }

      void DataProvidersManager::resetFiltersToDefault() const
      {
        env->callVoidMethod(this$, mids$[mid_resetFiltersToDefault_7ae3461a92a43152]);
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
      static PyObject *t_DataProvidersManager_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataProvidersManager_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DataProvidersManager_init_(t_DataProvidersManager *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DataProvidersManager_addDefaultProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_addProvider(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_clearLoadedDataNames(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_clearProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_feed(t_DataProvidersManager *self, PyObject *args);
      static PyObject *t_DataProvidersManager_getFiltersManager(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_getLoadedDataNames(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_getProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_isSupported(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_removeProvider(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_resetFiltersToDefault(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_get__filtersManager(t_DataProvidersManager *self, void *data);
      static PyObject *t_DataProvidersManager_get__loadedDataNames(t_DataProvidersManager *self, void *data);
      static PyObject *t_DataProvidersManager_get__providers(t_DataProvidersManager *self, void *data);
      static PyGetSetDef t_DataProvidersManager__fields_[] = {
        DECLARE_GET_FIELD(t_DataProvidersManager, filtersManager),
        DECLARE_GET_FIELD(t_DataProvidersManager, loadedDataNames),
        DECLARE_GET_FIELD(t_DataProvidersManager, providers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataProvidersManager__methods_[] = {
        DECLARE_METHOD(t_DataProvidersManager, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvidersManager, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvidersManager, addDefaultProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, addProvider, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, clearLoadedDataNames, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, clearProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, feed, METH_VARARGS),
        DECLARE_METHOD(t_DataProvidersManager, getFiltersManager, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, getLoadedDataNames, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, getProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, isSupported, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, removeProvider, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, resetFiltersToDefault, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataProvidersManager)[] = {
        { Py_tp_methods, t_DataProvidersManager__methods_ },
        { Py_tp_init, (void *) t_DataProvidersManager_init_ },
        { Py_tp_getset, t_DataProvidersManager__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataProvidersManager)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataProvidersManager, t_DataProvidersManager, DataProvidersManager);

      void t_DataProvidersManager::install(PyObject *module)
      {
        installType(&PY_TYPE(DataProvidersManager), &PY_TYPE_DEF(DataProvidersManager), module, "DataProvidersManager", 0);
      }

      void t_DataProvidersManager::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "class_", make_descriptor(DataProvidersManager::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "wrapfn_", make_descriptor(t_DataProvidersManager::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "boxfn_", make_descriptor(boxObject));
        env->getClass(DataProvidersManager::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "OREKIT_DATA_PATH", make_descriptor(j2p(*DataProvidersManager::OREKIT_DATA_PATH)));
      }

      static PyObject *t_DataProvidersManager_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataProvidersManager::initializeClass, 1)))
          return NULL;
        return t_DataProvidersManager::wrap_Object(DataProvidersManager(((t_DataProvidersManager *) arg)->object.this$));
      }
      static PyObject *t_DataProvidersManager_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataProvidersManager::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DataProvidersManager_init_(t_DataProvidersManager *self, PyObject *args, PyObject *kwds)
      {
        DataProvidersManager object((jobject) NULL);

        INT_CALL(object = DataProvidersManager());
        self->object = object;

        return 0;
      }

      static PyObject *t_DataProvidersManager_addDefaultProviders(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.addDefaultProviders());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_addProvider(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addProvider", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_clearLoadedDataNames(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.clearLoadedDataNames());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_clearProviders(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.clearProviders());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_feed(t_DataProvidersManager *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataLoader a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "sk", ::org::orekit::data::DataLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.feed(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "feed", args);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_getFiltersManager(t_DataProvidersManager *self)
      {
        ::org::orekit::data::FiltersManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiltersManager());
        return ::org::orekit::data::t_FiltersManager::wrap_Object(result);
      }

      static PyObject *t_DataProvidersManager_getLoadedDataNames(t_DataProvidersManager *self)
      {
        ::java::util::Set result((jobject) NULL);
        OBJ_CALL(result = self->object.getLoadedDataNames());
        return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_DataProvidersManager_getProviders(t_DataProvidersManager *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::data::PY_TYPE(DataProvider));
      }

      static PyObject *t_DataProvidersManager_isSupported(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_removeProvider(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);
        ::org::orekit::data::DataProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.removeProvider(a0));
          return ::org::orekit::data::t_DataProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "removeProvider", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_resetFiltersToDefault(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.resetFiltersToDefault());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_get__filtersManager(t_DataProvidersManager *self, void *data)
      {
        ::org::orekit::data::FiltersManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiltersManager());
        return ::org::orekit::data::t_FiltersManager::wrap_Object(value);
      }

      static PyObject *t_DataProvidersManager_get__loadedDataNames(t_DataProvidersManager *self, void *data)
      {
        ::java::util::Set value((jobject) NULL);
        OBJ_CALL(value = self->object.getLoadedDataNames());
        return ::java::util::t_Set::wrap_Object(value);
      }

      static PyObject *t_DataProvidersManager_get__providers(t_DataProvidersManager *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getProviders());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/GillIntegratorBuilder.h"
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

        ::java::lang::Class *GillIntegratorBuilder::class$ = NULL;
        jmethodID *GillIntegratorBuilder::mids$ = NULL;
        bool GillIntegratorBuilder::live$ = false;

        jclass GillIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/GillIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_501b0015ccc7d54e] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillIntegratorBuilder::GillIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator GillIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
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
        static PyObject *t_GillIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GillIntegratorBuilder_init_(t_GillIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillIntegratorBuilder_buildIntegrator(t_GillIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_GillIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_GillIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillIntegratorBuilder)[] = {
          { Py_tp_methods, t_GillIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_GillIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GillIntegratorBuilder, t_GillIntegratorBuilder, GillIntegratorBuilder);

        void t_GillIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GillIntegratorBuilder), &PY_TYPE_DEF(GillIntegratorBuilder), module, "GillIntegratorBuilder", 0);
        }

        void t_GillIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "class_", make_descriptor(GillIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "wrapfn_", make_descriptor(t_GillIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_GillIntegratorBuilder::wrap_Object(GillIntegratorBuilder(((t_GillIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GillIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GillIntegratorBuilder_init_(t_GillIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GillIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GillIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GillIntegratorBuilder_buildIntegrator(t_GillIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/utils/LoveNumbers.h"
#include "org/orekit/data/FundamentalNutationArguments.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *IERSConventions::class$ = NULL;
      jmethodID *IERSConventions::mids$ = NULL;
      bool IERSConventions::live$ = false;
      IERSConventions *IERSConventions::IERS_1996 = NULL;
      IERSConventions *IERSConventions::IERS_2003 = NULL;
      IERSConventions *IERSConventions::IERS_2010 = NULL;

      jclass IERSConventions::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/IERSConventions");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluateTC_e912d21057defe63] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_evaluateTC_7bc0fd76ee915b72] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluateTC_17bf48af24dfef09] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScales;)D");
          mids$[mid_evaluateTC_bc063b16b915a564] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/TimeScales;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEOPTidalCorrection_517fcc39f9cc5470] = env->getMethodID(cls, "getEOPTidalCorrection", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getEOPTidalCorrection_48fddb0445ecc692] = env->getMethodID(cls, "getEOPTidalCorrection", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getEarthOrientationAngleFunction_dc8f95e72a3d91ea] = env->getMethodID(cls, "getEarthOrientationAngleFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getEarthOrientationAngleFunction_89d14378b2e28177] = env->getMethodID(cls, "getEarthOrientationAngleFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGASTFunction_a0b56ad5e5ca7148] = env->getMethodID(cls, "getGASTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGASTFunction_d4e3fb2734ed2bda] = env->getMethodID(cls, "getGASTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/EOPHistory;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTFunction_dc8f95e72a3d91ea] = env->getMethodID(cls, "getGMSTFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTFunction_0059b7a8a529e189] = env->getMethodID(cls, "getGMSTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTRateFunction_dc8f95e72a3d91ea] = env->getMethodID(cls, "getGMSTRateFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTRateFunction_0059b7a8a529e189] = env->getMethodID(cls, "getGMSTRateFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getLoveNumbers_8236eb0356aea921] = env->getMethodID(cls, "getLoveNumbers", "()Lorg/orekit/utils/LoveNumbers;");
          mids$[mid_getMeanObliquityFunction_d512c53f0a914e4f] = env->getMethodID(cls, "getMeanObliquityFunction", "()Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getMeanObliquityFunction_62a961e76cf2f17a] = env->getMethodID(cls, "getMeanObliquityFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getNominalTidalDisplacement_7cdc325af0834901] = env->getMethodID(cls, "getNominalTidalDisplacement", "()[D");
          mids$[mid_getNutationArguments_61f4c415c3db8105] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/data/FundamentalNutationArguments;");
          mids$[mid_getNutationArguments_fd263cc728d6fb92] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/data/FundamentalNutationArguments;");
          mids$[mid_getNutationCorrectionConverter_4c6face5636e3d4a] = env->getMethodID(cls, "getNutationCorrectionConverter", "()Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getNutationCorrectionConverter_2480988cc7996db7] = env->getMethodID(cls, "getNutationCorrectionConverter", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getNutationFunction_517fcc39f9cc5470] = env->getMethodID(cls, "getNutationFunction", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getNutationFunction_48fddb0445ecc692] = env->getMethodID(cls, "getNutationFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getNutationReferenceEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getNutationReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getNutationReferenceEpoch_414ef8773aff1bd2] = env->getMethodID(cls, "getNutationReferenceEpoch", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getOceanPoleTide_476d63253d6fd69c] = env->getMethodID(cls, "getOceanPoleTide", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getPermanentTide_456d9a2f64d6b28d] = env->getMethodID(cls, "getPermanentTide", "()D");
          mids$[mid_getPrecessionFunction_517fcc39f9cc5470] = env->getMethodID(cls, "getPrecessionFunction", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getPrecessionFunction_48fddb0445ecc692] = env->getMethodID(cls, "getPrecessionFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getSolidPoleTide_476d63253d6fd69c] = env->getMethodID(cls, "getSolidPoleTide", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_a3f1c3aca67dc2a0] = env->getMethodID(cls, "getTidalDisplacementFrequencyCorrectionDiurnal", "()Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_a3f1c3aca67dc2a0] = env->getMethodID(cls, "getTidalDisplacementFrequencyCorrectionZonal", "()Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTideFrequencyDependenceFunction_cd10273d71e8ce50] = env->getMethodID(cls, "getTideFrequencyDependenceFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getTideFrequencyDependenceFunction_719fa2ce27a0e006] = env->getMethodID(cls, "getTideFrequencyDependenceFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getXYSpXY2Function_517fcc39f9cc5470] = env->getMethodID(cls, "getXYSpXY2Function", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getXYSpXY2Function_48fddb0445ecc692] = env->getMethodID(cls, "getXYSpXY2Function", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_valueOf_a16f7dd2af41e577] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/IERSConventions;");
          mids$[mid_values_6e6c41cbe00dc887] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/IERSConventions;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_2408b0911c403501] = env->getStaticMethodID(cls, "getTidalDisplacementFrequencyCorrectionDiurnal", "(Ljava/lang/String;IIIII)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_2408b0911c403501] = env->getStaticMethodID(cls, "getTidalDisplacementFrequencyCorrectionZonal", "(Ljava/lang/String;IIIII)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_loadLoveNumbers_ad4c10e285e8b403] = env->getMethodID(cls, "loadLoveNumbers", "(Ljava/lang/String;)Lorg/orekit/utils/LoveNumbers;");
          mids$[mid_getNutationArguments_6249450fdd4b5eca] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/data/FundamentalNutationArguments;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IERS_1996 = new IERSConventions(env->getStaticObjectField(cls, "IERS_1996", "Lorg/orekit/utils/IERSConventions;"));
          IERS_2003 = new IERSConventions(env->getStaticObjectField(cls, "IERS_2003", "Lorg/orekit/utils/IERSConventions;"));
          IERS_2010 = new IERSConventions(env->getStaticObjectField(cls, "IERS_2010", "Lorg/orekit/utils/IERSConventions;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble IERSConventions::evaluateTC(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluateTC_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IERSConventions::evaluateTC(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluateTC_7bc0fd76ee915b72], a0.this$));
      }

      jdouble IERSConventions::evaluateTC(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluateTC_17bf48af24dfef09], a0.this$, a1.this$);
      }

      ::org::hipparchus::CalculusFieldElement IERSConventions::evaluateTC(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluateTC_bc063b16b915a564], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getEOPTidalCorrection() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getEOPTidalCorrection_517fcc39f9cc5470]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getEOPTidalCorrection(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getEOPTidalCorrection_48fddb0445ecc692], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getEarthOrientationAngleFunction_dc8f95e72a3d91ea], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getEarthOrientationAngleFunction_89d14378b2e28177], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGASTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::EOPHistory & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGASTFunction_a0b56ad5e5ca7148], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGASTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::EOPHistory & a1, const ::org::orekit::time::TimeScales & a2) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGASTFunction_d4e3fb2734ed2bda], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTFunction_dc8f95e72a3d91ea], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTFunction_0059b7a8a529e189], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTRateFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTRateFunction_dc8f95e72a3d91ea], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTRateFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTRateFunction_0059b7a8a529e189], a0.this$, a1.this$));
      }

      ::org::orekit::utils::LoveNumbers IERSConventions::getLoveNumbers() const
      {
        return ::org::orekit::utils::LoveNumbers(env->callObjectMethod(this$, mids$[mid_getLoveNumbers_8236eb0356aea921]));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getMeanObliquityFunction() const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getMeanObliquityFunction_d512c53f0a914e4f]));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getMeanObliquityFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getMeanObliquityFunction_62a961e76cf2f17a], a0.this$));
      }

      JArray< jdouble > IERSConventions::getNominalTidalDisplacement() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNominalTidalDisplacement_7cdc325af0834901]));
      }

      ::org::orekit::data::FundamentalNutationArguments IERSConventions::getNutationArguments(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::data::FundamentalNutationArguments(env->callObjectMethod(this$, mids$[mid_getNutationArguments_61f4c415c3db8105], a0.this$));
      }

      ::org::orekit::data::FundamentalNutationArguments IERSConventions::getNutationArguments(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::data::FundamentalNutationArguments(env->callObjectMethod(this$, mids$[mid_getNutationArguments_fd263cc728d6fb92], a0.this$, a1.this$));
      }

      ::org::orekit::utils::IERSConventions$NutationCorrectionConverter IERSConventions::getNutationCorrectionConverter() const
      {
        return ::org::orekit::utils::IERSConventions$NutationCorrectionConverter(env->callObjectMethod(this$, mids$[mid_getNutationCorrectionConverter_4c6face5636e3d4a]));
      }

      ::org::orekit::utils::IERSConventions$NutationCorrectionConverter IERSConventions::getNutationCorrectionConverter(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::utils::IERSConventions$NutationCorrectionConverter(env->callObjectMethod(this$, mids$[mid_getNutationCorrectionConverter_2480988cc7996db7], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getNutationFunction() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getNutationFunction_517fcc39f9cc5470]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getNutationFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getNutationFunction_48fddb0445ecc692], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate IERSConventions::getNutationReferenceEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNutationReferenceEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate IERSConventions::getNutationReferenceEpoch(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNutationReferenceEpoch_414ef8773aff1bd2], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getOceanPoleTide(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getOceanPoleTide_476d63253d6fd69c], a0.this$));
      }

      jdouble IERSConventions::getPermanentTide() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPermanentTide_456d9a2f64d6b28d]);
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getPrecessionFunction() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getPrecessionFunction_517fcc39f9cc5470]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getPrecessionFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getPrecessionFunction_48fddb0445ecc692], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getSolidPoleTide(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getSolidPoleTide_476d63253d6fd69c], a0.this$));
      }

      ::org::orekit::data::PoissonSeries$CompiledSeries IERSConventions::getTidalDisplacementFrequencyCorrectionDiurnal() const
      {
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callObjectMethod(this$, mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_a3f1c3aca67dc2a0]));
      }

      ::org::orekit::data::PoissonSeries$CompiledSeries IERSConventions::getTidalDisplacementFrequencyCorrectionZonal() const
      {
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callObjectMethod(this$, mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_a3f1c3aca67dc2a0]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getTideFrequencyDependenceFunction_cd10273d71e8ce50], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getTideFrequencyDependenceFunction_719fa2ce27a0e006], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getXYSpXY2Function() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getXYSpXY2Function_517fcc39f9cc5470]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getXYSpXY2Function(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getXYSpXY2Function_48fddb0445ecc692], a0.this$));
      }

      IERSConventions IERSConventions::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return IERSConventions(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a16f7dd2af41e577], a0.this$));
      }

      JArray< IERSConventions > IERSConventions::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< IERSConventions >(env->callStaticObjectMethod(cls, mids$[mid_values_6e6c41cbe00dc887]));
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
      static PyObject *t_IERSConventions_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions_of_(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_evaluateTC(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getEOPTidalCorrection(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getEarthOrientationAngleFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGASTFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGMSTFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGMSTRateFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getLoveNumbers(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getMeanObliquityFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNominalTidalDisplacement(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getNutationArguments(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationCorrectionConverter(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationReferenceEpoch(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getOceanPoleTide(t_IERSConventions *self, PyObject *arg);
      static PyObject *t_IERSConventions_getPermanentTide(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getPrecessionFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getSolidPoleTide(t_IERSConventions *self, PyObject *arg);
      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getTideFrequencyDependenceFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getXYSpXY2Function(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_IERSConventions_values(PyTypeObject *type);
      static PyObject *t_IERSConventions_get__eOPTidalCorrection(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__loveNumbers(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__meanObliquityFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nominalTidalDisplacement(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationCorrectionConverter(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationReferenceEpoch(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__permanentTide(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__precessionFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__xYSpXY2Function(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__parameters_(t_IERSConventions *self, void *data);
      static PyGetSetDef t_IERSConventions__fields_[] = {
        DECLARE_GET_FIELD(t_IERSConventions, eOPTidalCorrection),
        DECLARE_GET_FIELD(t_IERSConventions, loveNumbers),
        DECLARE_GET_FIELD(t_IERSConventions, meanObliquityFunction),
        DECLARE_GET_FIELD(t_IERSConventions, nominalTidalDisplacement),
        DECLARE_GET_FIELD(t_IERSConventions, nutationCorrectionConverter),
        DECLARE_GET_FIELD(t_IERSConventions, nutationFunction),
        DECLARE_GET_FIELD(t_IERSConventions, nutationReferenceEpoch),
        DECLARE_GET_FIELD(t_IERSConventions, permanentTide),
        DECLARE_GET_FIELD(t_IERSConventions, precessionFunction),
        DECLARE_GET_FIELD(t_IERSConventions, tidalDisplacementFrequencyCorrectionDiurnal),
        DECLARE_GET_FIELD(t_IERSConventions, tidalDisplacementFrequencyCorrectionZonal),
        DECLARE_GET_FIELD(t_IERSConventions, xYSpXY2Function),
        DECLARE_GET_FIELD(t_IERSConventions, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IERSConventions__methods_[] = {
        DECLARE_METHOD(t_IERSConventions, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, of_, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, evaluateTC, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getEOPTidalCorrection, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getEarthOrientationAngleFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGASTFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGMSTFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGMSTRateFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getLoveNumbers, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getMeanObliquityFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNominalTidalDisplacement, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationArguments, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationCorrectionConverter, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationReferenceEpoch, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getOceanPoleTide, METH_O),
        DECLARE_METHOD(t_IERSConventions, getPermanentTide, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getPrecessionFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getSolidPoleTide, METH_O),
        DECLARE_METHOD(t_IERSConventions, getTidalDisplacementFrequencyCorrectionDiurnal, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getTidalDisplacementFrequencyCorrectionZonal, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getTideFrequencyDependenceFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getXYSpXY2Function, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IERSConventions)[] = {
        { Py_tp_methods, t_IERSConventions__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IERSConventions__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IERSConventions)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(IERSConventions, t_IERSConventions, IERSConventions);
      PyObject *t_IERSConventions::wrap_Object(const IERSConventions& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions *self = (t_IERSConventions *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_IERSConventions::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions *self = (t_IERSConventions *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_IERSConventions::install(PyObject *module)
      {
        installType(&PY_TYPE(IERSConventions), &PY_TYPE_DEF(IERSConventions), module, "IERSConventions", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "NutationCorrectionConverter", make_descriptor(&PY_TYPE_DEF(IERSConventions$NutationCorrectionConverter)));
      }

      void t_IERSConventions::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "class_", make_descriptor(IERSConventions::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "wrapfn_", make_descriptor(t_IERSConventions::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "boxfn_", make_descriptor(boxObject));
        env->getClass(IERSConventions::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_1996", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_2003", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_2003)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_2010", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_2010)));
      }

      static PyObject *t_IERSConventions_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IERSConventions::initializeClass, 1)))
          return NULL;
        return t_IERSConventions::wrap_Object(IERSConventions(((t_IERSConventions *) arg)->object.this$));
      }
      static PyObject *t_IERSConventions_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IERSConventions::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IERSConventions_of_(t_IERSConventions *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_IERSConventions_evaluateTC(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluateTC", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getEOPTidalCorrection(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getEOPTidalCorrection());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEOPTidalCorrection(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getEOPTidalCorrection", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getEarthOrientationAngleFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEarthOrientationAngleFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getEarthOrientationAngleFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getEarthOrientationAngleFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGASTFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::EOPHistory a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGASTFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::EOPHistory a1((jobject) NULL);
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getGASTFunction(a0, a1, a2));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGASTFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGMSTFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getGMSTFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGMSTFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGMSTFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGMSTRateFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getGMSTRateFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGMSTRateFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGMSTRateFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getLoveNumbers(t_IERSConventions *self)
      {
        ::org::orekit::utils::LoveNumbers result((jobject) NULL);
        OBJ_CALL(result = self->object.getLoveNumbers());
        return ::org::orekit::utils::t_LoveNumbers::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getMeanObliquityFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanObliquityFunction());
            return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMeanObliquityFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getMeanObliquityFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNominalTidalDisplacement(t_IERSConventions *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getNominalTidalDisplacement());
        return result.wrap();
      }

      static PyObject *t_IERSConventions_getNutationArguments(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::data::FundamentalNutationArguments result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationArguments(a0));
              return ::org::orekit::data::t_FundamentalNutationArguments::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::data::FundamentalNutationArguments result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNutationArguments(a0, a1));
              return ::org::orekit::data::t_FundamentalNutationArguments::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationArguments", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationCorrectionConverter(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::IERSConventions$NutationCorrectionConverter result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationCorrectionConverter());
            return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::utils::IERSConventions$NutationCorrectionConverter result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationCorrectionConverter(a0));
              return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationCorrectionConverter", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationFunction());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationReferenceEpoch(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationReferenceEpoch(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationReferenceEpoch", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getOceanPoleTide(t_IERSConventions *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getOceanPoleTide(a0));
          return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getOceanPoleTide", arg);
        return NULL;
      }

      static PyObject *t_IERSConventions_getPermanentTide(t_IERSConventions *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPermanentTide());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IERSConventions_getPrecessionFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getPrecessionFunction());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPrecessionFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPrecessionFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getSolidPoleTide(t_IERSConventions *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getSolidPoleTide(a0));
          return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSolidPoleTide", arg);
        return NULL;
      }

      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries result((jobject) NULL);
        OBJ_CALL(result = self->object.getTidalDisplacementFrequencyCorrectionDiurnal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries result((jobject) NULL);
        OBJ_CALL(result = self->object.getTidalDisplacementFrequencyCorrectionZonal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getTideFrequencyDependenceFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTideFrequencyDependenceFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTideFrequencyDependenceFunction(a0, a1));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTideFrequencyDependenceFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getXYSpXY2Function(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getXYSpXY2Function());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXYSpXY2Function(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getXYSpXY2Function", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        IERSConventions result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::IERSConventions::valueOf(a0));
          return t_IERSConventions::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_IERSConventions_values(PyTypeObject *type)
      {
        JArray< IERSConventions > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::IERSConventions::values());
        return JArray<jobject>(result.this$).wrap(t_IERSConventions::wrap_jobject);
      }
      static PyObject *t_IERSConventions_get__parameters_(t_IERSConventions *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_IERSConventions_get__eOPTidalCorrection(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPTidalCorrection());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__loveNumbers(t_IERSConventions *self, void *data)
      {
        ::org::orekit::utils::LoveNumbers value((jobject) NULL);
        OBJ_CALL(value = self->object.getLoveNumbers());
        return ::org::orekit::utils::t_LoveNumbers::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__meanObliquityFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeScalarFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanObliquityFunction());
        return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nominalTidalDisplacement(t_IERSConventions *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getNominalTidalDisplacement());
        return value.wrap();
      }

      static PyObject *t_IERSConventions_get__nutationCorrectionConverter(t_IERSConventions *self, void *data)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationCorrectionConverter());
        return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nutationFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationFunction());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nutationReferenceEpoch(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationReferenceEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__permanentTide(t_IERSConventions *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPermanentTide());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IERSConventions_get__precessionFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrecessionFunction());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self, void *data)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries value((jobject) NULL);
        OBJ_CALL(value = self->object.getTidalDisplacementFrequencyCorrectionDiurnal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self, void *data)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries value((jobject) NULL);
        OBJ_CALL(value = self->object.getTidalDisplacementFrequencyCorrectionZonal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__xYSpXY2Function(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getXYSpXY2Function());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
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
                  mids$[mid_getUnits_a6156df500549a58] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toCartesian_781fc76aa33e540d] = env->getMethodID(cls, "toCartesian", "(Lorg/orekit/time/AbsoluteDate;[DLorg/orekit/bodies/OneAxisEllipsoid;D)Lorg/orekit/utils/TimeStampedPVCoordinates;");
                  mids$[mid_toRawElements_e9dc92a44502f1bd] = env->getMethodID(cls, "toRawElements", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/bodies/OneAxisEllipsoid;D)[D");
                  mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_b3f28ee9a0b59461] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_values_de46ed1799e12590] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");

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
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_a6156df500549a58]));
              }

              ::org::orekit::utils::TimeStampedPVCoordinates OrbitElementsType::toCartesian(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toCartesian_781fc76aa33e540d], a0.this$, a1.this$, a2.this$, a3));
              }

              JArray< jdouble > OrbitElementsType::toRawElements(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toRawElements_e9dc92a44502f1bd], a0.this$, a1.this$, a2.this$, a3));
              }

              ::java::lang::String OrbitElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
              }

              OrbitElementsType OrbitElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b3f28ee9a0b59461], a0.this$));
              }

              JArray< OrbitElementsType > OrbitElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_de46ed1799e12590]));
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
