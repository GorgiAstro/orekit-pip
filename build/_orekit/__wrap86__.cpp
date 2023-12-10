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
          mids$[mid_init$_bee5c8ff86f4e777] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_1aa689b999c11532] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getCompleteState_226a0b2040b1d2e1] = env->getMethodID(cls, "getCompleteState", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCompleteStateDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_226a0b2040b1d2e1] = env->getMethodID(cls, "getPrimaryState", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPrimaryStateDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_f2aa3eb7e0b5647f] = env->getMethodID(cls, "getSecondaryState", "(I)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSecondaryStateDimension_2235cd056f5a882b] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_eba8e72a22c984ac] = env->getMethodID(cls, "getTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_copy_d1031b0c6b4f03ae] = env->getMethodID(cls, "copy", "([[Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldODEState::FieldODEState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bee5c8ff86f4e777, a0.this$, a1.this$)) {}

      FieldODEState::FieldODEState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1aa689b999c11532, a0.this$, a1.this$, a2.this$)) {}

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getCompleteState() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCompleteState_226a0b2040b1d2e1]));
      }

      jint FieldODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_570ce0828f81a2c1]);
      }

      jint FieldODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_570ce0828f81a2c1]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getPrimaryState() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_226a0b2040b1d2e1]));
      }

      jint FieldODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_570ce0828f81a2c1]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getSecondaryState(jint a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_f2aa3eb7e0b5647f], a0));
      }

      jint FieldODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_2235cd056f5a882b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FieldODEState::getTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTime_eba8e72a22c984ac]));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanEstimatorBuilder::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanEstimatorBuilder::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanEstimatorBuilder::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_86329c5f4a01e02e] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_build_2ad50f34092a6263] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator;");
            mids$[mid_decomposer_2672ee664c9ea093] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_5f8d73a0acd88fd1] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_unscentedTransformProvider_05ab9b440dd924ef] = env->getMethodID(cls, "unscentedTransformProvider", "(Lorg/hipparchus/util/UnscentedTransformProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder::SemiAnalyticalUnscentedKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_86329c5f4a01e02e], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator SemiAnalyticalUnscentedKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_2ad50f34092a6263]));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_2672ee664c9ea093], a0.this$));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_5f8d73a0acd88fd1], a0.this$, a1.this$));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::unscentedTransformProvider(const ::org::hipparchus::util::UnscentedTransformProvider & a0) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_unscentedTransformProvider_05ab9b440dd924ef], a0.this$));
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
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_build(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg);

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, unscentedTransformProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder, t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, SemiAnalyticalUnscentedKalmanEstimatorBuilder);

        void t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanEstimatorBuilder), module, "SemiAnalyticalUnscentedKalmanEstimatorBuilder", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(SemiAnalyticalUnscentedKalmanEstimatorBuilder(((t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          SemiAnalyticalUnscentedKalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = SemiAnalyticalUnscentedKalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::DSSTPropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::DSSTPropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_build(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_SemiAnalyticalUnscentedKalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::util::UnscentedTransformProvider a0((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.unscentedTransformProvider(a0));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "unscentedTransformProvider", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *MeasurementType::class$ = NULL;
      jmethodID *MeasurementType::mids$ = NULL;
      bool MeasurementType::live$ = false;
      MeasurementType *MeasurementType::CARRIER_PHASE = NULL;
      MeasurementType *MeasurementType::COMBINED_RANGE_PHASE = NULL;
      MeasurementType *MeasurementType::DOPPLER = NULL;
      MeasurementType *MeasurementType::PSEUDO_RANGE = NULL;
      MeasurementType *MeasurementType::SIGNAL_STRENGTH = NULL;

      jclass MeasurementType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/MeasurementType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_058c92e2fb537a5e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/MeasurementType;");
          mids$[mid_values_7b73cd10cc5686d6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/MeasurementType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CARRIER_PHASE = new MeasurementType(env->getStaticObjectField(cls, "CARRIER_PHASE", "Lorg/orekit/gnss/MeasurementType;"));
          COMBINED_RANGE_PHASE = new MeasurementType(env->getStaticObjectField(cls, "COMBINED_RANGE_PHASE", "Lorg/orekit/gnss/MeasurementType;"));
          DOPPLER = new MeasurementType(env->getStaticObjectField(cls, "DOPPLER", "Lorg/orekit/gnss/MeasurementType;"));
          PSEUDO_RANGE = new MeasurementType(env->getStaticObjectField(cls, "PSEUDO_RANGE", "Lorg/orekit/gnss/MeasurementType;"));
          SIGNAL_STRENGTH = new MeasurementType(env->getStaticObjectField(cls, "SIGNAL_STRENGTH", "Lorg/orekit/gnss/MeasurementType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MeasurementType MeasurementType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MeasurementType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_058c92e2fb537a5e], a0.this$));
      }

      JArray< MeasurementType > MeasurementType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MeasurementType >(env->callStaticObjectMethod(cls, mids$[mid_values_7b73cd10cc5686d6]));
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
      static PyObject *t_MeasurementType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MeasurementType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MeasurementType_of_(t_MeasurementType *self, PyObject *args);
      static PyObject *t_MeasurementType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MeasurementType_values(PyTypeObject *type);
      static PyObject *t_MeasurementType_get__parameters_(t_MeasurementType *self, void *data);
      static PyGetSetDef t_MeasurementType__fields_[] = {
        DECLARE_GET_FIELD(t_MeasurementType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MeasurementType__methods_[] = {
        DECLARE_METHOD(t_MeasurementType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, of_, METH_VARARGS),
        DECLARE_METHOD(t_MeasurementType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MeasurementType)[] = {
        { Py_tp_methods, t_MeasurementType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MeasurementType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MeasurementType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(MeasurementType, t_MeasurementType, MeasurementType);
      PyObject *t_MeasurementType::wrap_Object(const MeasurementType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MeasurementType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MeasurementType *self = (t_MeasurementType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MeasurementType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MeasurementType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MeasurementType *self = (t_MeasurementType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MeasurementType::install(PyObject *module)
      {
        installType(&PY_TYPE(MeasurementType), &PY_TYPE_DEF(MeasurementType), module, "MeasurementType", 0);
      }

      void t_MeasurementType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "class_", make_descriptor(MeasurementType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "wrapfn_", make_descriptor(t_MeasurementType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "boxfn_", make_descriptor(boxObject));
        env->getClass(MeasurementType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "CARRIER_PHASE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::CARRIER_PHASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "COMBINED_RANGE_PHASE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::COMBINED_RANGE_PHASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "DOPPLER", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::DOPPLER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "PSEUDO_RANGE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::PSEUDO_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "SIGNAL_STRENGTH", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::SIGNAL_STRENGTH)));
      }

      static PyObject *t_MeasurementType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MeasurementType::initializeClass, 1)))
          return NULL;
        return t_MeasurementType::wrap_Object(MeasurementType(((t_MeasurementType *) arg)->object.this$));
      }
      static PyObject *t_MeasurementType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MeasurementType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MeasurementType_of_(t_MeasurementType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MeasurementType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        MeasurementType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::MeasurementType::valueOf(a0));
          return t_MeasurementType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_MeasurementType_values(PyTypeObject *type)
      {
        JArray< MeasurementType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::MeasurementType::values());
        return JArray<jobject>(result.this$).wrap(t_MeasurementType::wrap_jobject);
      }
      static PyObject *t_MeasurementType_get__parameters_(t_MeasurementType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfSquares.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfSquares.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *SumOfSquares::class$ = NULL;
          jmethodID *SumOfSquares::mids$ = NULL;
          bool SumOfSquares::live$ = false;

          jclass SumOfSquares::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/SumOfSquares");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_4ae573e50f135b2f] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/SumOfSquares;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_9f0db2ec4a0fcc45] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/SumOfSquares;");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SumOfSquares::SumOfSquares() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void SumOfSquares::aggregate(const SumOfSquares & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_4ae573e50f135b2f], a0.this$);
          }

          void SumOfSquares::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          SumOfSquares SumOfSquares::copy() const
          {
            return SumOfSquares(env->callObjectMethod(this$, mids$[mid_copy_9f0db2ec4a0fcc45]));
          }

          jdouble SumOfSquares::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jlong SumOfSquares::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble SumOfSquares::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          void SumOfSquares::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
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
        namespace summary {
          static PyObject *t_SumOfSquares_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SumOfSquares_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SumOfSquares_init_(t_SumOfSquares *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SumOfSquares_aggregate(t_SumOfSquares *self, PyObject *arg);
          static PyObject *t_SumOfSquares_clear(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_copy(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_evaluate(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_getN(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_getResult(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_increment(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_get__n(t_SumOfSquares *self, void *data);
          static PyObject *t_SumOfSquares_get__result(t_SumOfSquares *self, void *data);
          static PyGetSetDef t_SumOfSquares__fields_[] = {
            DECLARE_GET_FIELD(t_SumOfSquares, n),
            DECLARE_GET_FIELD(t_SumOfSquares, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SumOfSquares__methods_[] = {
            DECLARE_METHOD(t_SumOfSquares, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfSquares, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfSquares, aggregate, METH_O),
            DECLARE_METHOD(t_SumOfSquares, clear, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, copy, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, getN, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, getResult, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SumOfSquares)[] = {
            { Py_tp_methods, t_SumOfSquares__methods_ },
            { Py_tp_init, (void *) t_SumOfSquares_init_ },
            { Py_tp_getset, t_SumOfSquares__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SumOfSquares)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(SumOfSquares, t_SumOfSquares, SumOfSquares);

          void t_SumOfSquares::install(PyObject *module)
          {
            installType(&PY_TYPE(SumOfSquares), &PY_TYPE_DEF(SumOfSquares), module, "SumOfSquares", 0);
          }

          void t_SumOfSquares::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfSquares), "class_", make_descriptor(SumOfSquares::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfSquares), "wrapfn_", make_descriptor(t_SumOfSquares::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfSquares), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SumOfSquares_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SumOfSquares::initializeClass, 1)))
              return NULL;
            return t_SumOfSquares::wrap_Object(SumOfSquares(((t_SumOfSquares *) arg)->object.this$));
          }
          static PyObject *t_SumOfSquares_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SumOfSquares::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SumOfSquares_init_(t_SumOfSquares *self, PyObject *args, PyObject *kwds)
          {
            SumOfSquares object((jobject) NULL);

            INT_CALL(object = SumOfSquares());
            self->object = object;

            return 0;
          }

          static PyObject *t_SumOfSquares_aggregate(t_SumOfSquares *self, PyObject *arg)
          {
            SumOfSquares a0((jobject) NULL);

            if (!parseArg(arg, "k", SumOfSquares::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_SumOfSquares_clear(t_SumOfSquares *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_SumOfSquares_copy(t_SumOfSquares *self, PyObject *args)
          {
            SumOfSquares result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SumOfSquares::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SumOfSquares_evaluate(t_SumOfSquares *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_SumOfSquares_getN(t_SumOfSquares *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_SumOfSquares_getResult(t_SumOfSquares *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_SumOfSquares_increment(t_SumOfSquares *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_SumOfSquares_get__n(t_SumOfSquares *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_SumOfSquares_get__result(t_SumOfSquares *self, void *data)
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
#include "org/orekit/files/ccsds/utils/generation/KvnGenerator.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *KvnGenerator::class$ = NULL;
            jmethodID *KvnGenerator::mids$ = NULL;
            bool KvnGenerator::live$ = false;

            jclass KvnGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/KvnGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d958ff91ad9fbf2e] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;ILjava/lang/String;DI)V");
                mids$[mid_endMessage_d0bc48d5b00dc40c] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_d0bc48d5b00dc40c] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_11b109bd155ca898] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_66298c6188053be6] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_startMessage_d68f2e10a4896937] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_de3e021e7266b71e] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_ddc5f91684d983c2] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KvnGenerator::KvnGenerator(const ::java::lang::Appendable & a0, jint a1, const ::java::lang::String & a2, jdouble a3, jint a4) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_d958ff91ad9fbf2e, a0.this$, a1, a2.this$, a3, a4)) {}

            void KvnGenerator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_d0bc48d5b00dc40c], a0.this$);
            }

            void KvnGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_d0bc48d5b00dc40c], a0.this$);
            }

            ::java::lang::String KvnGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_11b109bd155ca898]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat KvnGenerator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_66298c6188053be6]));
            }

            void KvnGenerator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_d68f2e10a4896937], a0.this$, a1.this$, a2);
            }

            void KvnGenerator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_de3e021e7266b71e], a0.this$);
            }

            void KvnGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_ddc5f91684d983c2], a0.this$, a1.this$, a2.this$, a3);
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
            static PyObject *t_KvnGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KvnGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_KvnGenerator_init_(t_KvnGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_KvnGenerator_endMessage(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_enterSection(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_exitSection(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_getFormat(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_startMessage(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_writeComments(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_writeEntry(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_get__format(t_KvnGenerator *self, void *data);
            static PyGetSetDef t_KvnGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_KvnGenerator, format),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_KvnGenerator__methods_[] = {
              DECLARE_METHOD(t_KvnGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnGenerator, endMessage, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, enterSection, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, exitSection, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, getFormat, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, startMessage, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, writeComments, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, writeEntry, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KvnGenerator)[] = {
              { Py_tp_methods, t_KvnGenerator__methods_ },
              { Py_tp_init, (void *) t_KvnGenerator_init_ },
              { Py_tp_getset, t_KvnGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KvnGenerator)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractGenerator),
              NULL
            };

            DEFINE_TYPE(KvnGenerator, t_KvnGenerator, KvnGenerator);

            void t_KvnGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(KvnGenerator), &PY_TYPE_DEF(KvnGenerator), module, "KvnGenerator", 0);
            }

            void t_KvnGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "class_", make_descriptor(KvnGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "wrapfn_", make_descriptor(t_KvnGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_KvnGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KvnGenerator::initializeClass, 1)))
                return NULL;
              return t_KvnGenerator::wrap_Object(KvnGenerator(((t_KvnGenerator *) arg)->object.this$));
            }
            static PyObject *t_KvnGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KvnGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_KvnGenerator_init_(t_KvnGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              jint a1;
              ::java::lang::String a2((jobject) NULL);
              jdouble a3;
              jint a4;
              KvnGenerator object((jobject) NULL);

              if (!parseArgs(args, "kIsDI", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = KvnGenerator(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_KvnGenerator_endMessage(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.endMessage(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "endMessage", args, 2);
            }

            static PyObject *t_KvnGenerator_enterSection(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "enterSection", args, 2);
            }

            static PyObject *t_KvnGenerator_exitSection(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.exitSection());
                return j2p(result);
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "exitSection", args, 2);
            }

            static PyObject *t_KvnGenerator_getFormat(t_KvnGenerator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getFormat());
                return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "getFormat", args, 2);
            }

            static PyObject *t_KvnGenerator_startMessage(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;

              if (!parseArgs(args, "ssD", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.startMessage(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "startMessage", args, 2);
            }

            static PyObject *t_KvnGenerator_writeComments(t_KvnGenerator *self, PyObject *args)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.writeComments(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "writeComments", args, 2);
            }

            static PyObject *t_KvnGenerator_writeEntry(t_KvnGenerator *self, PyObject *args)
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

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "writeEntry", args, 2);
            }

            static PyObject *t_KvnGenerator_get__format(t_KvnGenerator *self, void *data)
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
#include "org/orekit/forces/gravity/potential/FESCHatEpsilonReader.h"
#include "java/util/Map.h"
#include "java/io/IOException.h"
#include "java/lang/Integer.h"
#include "java/io/InputStream.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *FESCHatEpsilonReader::class$ = NULL;
          jmethodID *FESCHatEpsilonReader::mids$ = NULL;
          bool FESCHatEpsilonReader::live$ = false;

          jclass FESCHatEpsilonReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/FESCHatEpsilonReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3bacaeedc9858b49] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;Ljava/util/Map;)V");
              mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FESCHatEpsilonReader::FESCHatEpsilonReader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a3, const ::java::util::Map & a4) : ::org::orekit::forces::gravity::potential::OceanTidesReader(env->newObject(initializeClass, &mids$, mid_init$_3bacaeedc9858b49, a0.this$, a1, a2, a3.this$, a4.this$)) {}

          void FESCHatEpsilonReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
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
          static PyObject *t_FESCHatEpsilonReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FESCHatEpsilonReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FESCHatEpsilonReader_init_(t_FESCHatEpsilonReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FESCHatEpsilonReader_loadData(t_FESCHatEpsilonReader *self, PyObject *args);

          static PyMethodDef t_FESCHatEpsilonReader__methods_[] = {
            DECLARE_METHOD(t_FESCHatEpsilonReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCHatEpsilonReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCHatEpsilonReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FESCHatEpsilonReader)[] = {
            { Py_tp_methods, t_FESCHatEpsilonReader__methods_ },
            { Py_tp_init, (void *) t_FESCHatEpsilonReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FESCHatEpsilonReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::OceanTidesReader),
            NULL
          };

          DEFINE_TYPE(FESCHatEpsilonReader, t_FESCHatEpsilonReader, FESCHatEpsilonReader);

          void t_FESCHatEpsilonReader::install(PyObject *module)
          {
            installType(&PY_TYPE(FESCHatEpsilonReader), &PY_TYPE_DEF(FESCHatEpsilonReader), module, "FESCHatEpsilonReader", 0);
          }

          void t_FESCHatEpsilonReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "class_", make_descriptor(FESCHatEpsilonReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "wrapfn_", make_descriptor(t_FESCHatEpsilonReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FESCHatEpsilonReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FESCHatEpsilonReader::initializeClass, 1)))
              return NULL;
            return t_FESCHatEpsilonReader::wrap_Object(FESCHatEpsilonReader(((t_FESCHatEpsilonReader *) arg)->object.this$));
          }
          static PyObject *t_FESCHatEpsilonReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FESCHatEpsilonReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FESCHatEpsilonReader_init_(t_FESCHatEpsilonReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients a3((jobject) NULL);
            PyTypeObject **p3;
            ::java::util::Map a4((jobject) NULL);
            PyTypeObject **p4;
            FESCHatEpsilonReader object((jobject) NULL);

            if (!parseArgs(args, "sDDKK", ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::parameters_, &a4, &p4, ::java::util::t_Map::parameters_))
            {
              INT_CALL(object = FESCHatEpsilonReader(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FESCHatEpsilonReader_loadData(t_FESCHatEpsilonReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FESCHatEpsilonReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmParser::class$ = NULL;
              jmethodID *OcmParser::mids$ = NULL;
              bool OcmParser::live$ = false;

              jclass OcmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_bc04ab0415e87bf0] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Ocm;");
                  mids$[mid_finalizeData_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_3423aca890fca0cd] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_b108b35ef48e27bd] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_b108b35ef48e27bd] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_27e6cf460659cd7c] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/odm/ocm/Ocm;");
                  mids$[mid_prepareData_b108b35ef48e27bd] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_b108b35ef48e27bd] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm OcmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm(env->callObjectMethod(this$, mids$[mid_build_bc04ab0415e87bf0]));
              }

              jboolean OcmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_b108b35ef48e27bd]);
              }

              jboolean OcmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_b108b35ef48e27bd]);
              }

              jboolean OcmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_b108b35ef48e27bd]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OcmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_3423aca890fca0cd]));
              }

              ::java::util::Map OcmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465]));
              }

              jboolean OcmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_b108b35ef48e27bd]);
              }

              jboolean OcmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_b108b35ef48e27bd]);
              }

              jboolean OcmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_b108b35ef48e27bd]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm OcmParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm(env->callObjectMethod(this$, mids$[mid_parse_27e6cf460659cd7c], a0.this$));
              }

              jboolean OcmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_b108b35ef48e27bd]);
              }

              jboolean OcmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_b108b35ef48e27bd]);
              }

              jboolean OcmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_b108b35ef48e27bd]);
              }

              void OcmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_e250621f009e45db], a0.this$);
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
              static PyObject *t_OcmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmParser_of_(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_build(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_finalizeData(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_finalizeHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_finalizeMetadata(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_getHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_getSpecialXmlElementsBuilders(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_inData(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_inHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_inMetadata(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_parse(t_OcmParser *self, PyObject *arg);
              static PyObject *t_OcmParser_prepareData(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_prepareHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_prepareMetadata(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_reset(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_get__header(t_OcmParser *self, void *data);
              static PyObject *t_OcmParser_get__specialXmlElementsBuilders(t_OcmParser *self, void *data);
              static PyObject *t_OcmParser_get__parameters_(t_OcmParser *self, void *data);
              static PyGetSetDef t_OcmParser__fields_[] = {
                DECLARE_GET_FIELD(t_OcmParser, header),
                DECLARE_GET_FIELD(t_OcmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_OcmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmParser__methods_[] = {
                DECLARE_METHOD(t_OcmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, parse, METH_O),
                DECLARE_METHOD(t_OcmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmParser)[] = {
                { Py_tp_methods, t_OcmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OcmParser, t_OcmParser, OcmParser);
              PyObject *t_OcmParser::wrap_Object(const OcmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OcmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmParser *self = (t_OcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OcmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OcmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmParser *self = (t_OcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OcmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmParser), &PY_TYPE_DEF(OcmParser), module, "OcmParser", 0);
              }

              void t_OcmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmParser), "class_", make_descriptor(OcmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmParser), "wrapfn_", make_descriptor(t_OcmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OcmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmParser::initializeClass, 1)))
                  return NULL;
                return t_OcmParser::wrap_Object(OcmParser(((t_OcmParser *) arg)->object.this$));
              }
              static PyObject *t_OcmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmParser_of_(t_OcmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmParser_build(t_OcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ocm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OcmParser_finalizeData(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OcmParser_finalizeHeader(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OcmParser_finalizeMetadata(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OcmParser_getHeader(t_OcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OcmParser_getSpecialXmlElementsBuilders(t_OcmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_OcmParser_inData(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OcmParser_inHeader(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OcmParser_inMetadata(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OcmParser_parse(t_OcmParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ocm::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_OcmParser_prepareData(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OcmParser_prepareHeader(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OcmParser_prepareMetadata(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OcmParser_reset(t_OcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OcmParser_get__parameters_(t_OcmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OcmParser_get__header(t_OcmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }

              static PyObject *t_OcmParser_get__specialXmlElementsBuilders(t_OcmParser *self, void *data)
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
            mids$[mid_init$_b0a935b68e41d65a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getLongitude_dff5885c2c873297] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NormalizedGeodeticPoint::NormalizedGeodeticPoint(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::bodies::GeodeticPoint(env->newObject(initializeClass, &mids$, mid_init$_b0a935b68e41d65a, a0, a1, a2, a3)) {}

        jboolean NormalizedGeodeticPoint::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        jdouble NormalizedGeodeticPoint::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_dff5885c2c873297]);
        }

        jint NormalizedGeodeticPoint::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
#include "org/hipparchus/distribution/discrete/GeometricDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *GeometricDistribution::class$ = NULL;
        jmethodID *GeometricDistribution::mids$ = NULL;
        bool GeometricDistribution::live$ = false;

        jclass GeometricDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/GeometricDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_46f85b53d9aedd96] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_dff5885c2c873297] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_inverseCumulativeProbability_4508852644846c83] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_46f85b53d9aedd96] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_46f85b53d9aedd96] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeometricDistribution::GeometricDistribution(jdouble a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        jdouble GeometricDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_46f85b53d9aedd96], a0);
        }

        jdouble GeometricDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble GeometricDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble GeometricDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_dff5885c2c873297]);
        }

        jint GeometricDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_570ce0828f81a2c1]);
        }

        jint GeometricDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_570ce0828f81a2c1]);
        }

        jint GeometricDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_4508852644846c83], a0);
        }

        jboolean GeometricDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble GeometricDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_46f85b53d9aedd96], a0);
        }

        jdouble GeometricDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_46f85b53d9aedd96], a0);
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
        static PyObject *t_GeometricDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeometricDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeometricDistribution_init_(t_GeometricDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeometricDistribution_cumulativeProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getNumericalMean(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getNumericalVariance(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getProbabilityOfSuccess(t_GeometricDistribution *self);
        static PyObject *t_GeometricDistribution_getSupportLowerBound(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getSupportUpperBound(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_inverseCumulativeProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_isSupportConnected(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_logProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_probability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_get__numericalMean(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__numericalVariance(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__probabilityOfSuccess(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportConnected(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportLowerBound(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportUpperBound(t_GeometricDistribution *self, void *data);
        static PyGetSetDef t_GeometricDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GeometricDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GeometricDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GeometricDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeometricDistribution__methods_[] = {
          DECLARE_METHOD(t_GeometricDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeometricDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeometricDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_GeometricDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeometricDistribution)[] = {
          { Py_tp_methods, t_GeometricDistribution__methods_ },
          { Py_tp_init, (void *) t_GeometricDistribution_init_ },
          { Py_tp_getset, t_GeometricDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeometricDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(GeometricDistribution, t_GeometricDistribution, GeometricDistribution);

        void t_GeometricDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GeometricDistribution), &PY_TYPE_DEF(GeometricDistribution), module, "GeometricDistribution", 0);
        }

        void t_GeometricDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "class_", make_descriptor(GeometricDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "wrapfn_", make_descriptor(t_GeometricDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeometricDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeometricDistribution::initializeClass, 1)))
            return NULL;
          return t_GeometricDistribution::wrap_Object(GeometricDistribution(((t_GeometricDistribution *) arg)->object.this$));
        }
        static PyObject *t_GeometricDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeometricDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeometricDistribution_init_(t_GeometricDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GeometricDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GeometricDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GeometricDistribution_cumulativeProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_getNumericalMean(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GeometricDistribution_getNumericalVariance(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GeometricDistribution_getProbabilityOfSuccess(t_GeometricDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeometricDistribution_getSupportLowerBound(t_GeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GeometricDistribution_getSupportUpperBound(t_GeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GeometricDistribution_inverseCumulativeProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble a0;
          jint result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_isSupportConnected(t_GeometricDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GeometricDistribution_logProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_probability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_GeometricDistribution_get__numericalMean(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__numericalVariance(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__probabilityOfSuccess(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__supportConnected(t_GeometricDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GeometricDistribution_get__supportLowerBound(t_GeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_GeometricDistribution_get__supportUpperBound(t_GeometricDistribution *self, void *data)
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
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Authentication::class$ = NULL;
          jmethodID *Authentication::mids$ = NULL;
          bool Authentication::live$ = false;
          Authentication *Authentication::BASIC = NULL;
          Authentication *Authentication::DIGEST = NULL;
          Authentication *Authentication::NONE = NULL;

          jclass Authentication::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Authentication");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAuthentication_a141c35b1deb0d55] = env->getStaticMethodID(cls, "getAuthentication", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_valueOf_a141c35b1deb0d55] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_values_203573b41dee09ca] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/Authentication;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BASIC = new Authentication(env->getStaticObjectField(cls, "BASIC", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              DIGEST = new Authentication(env->getStaticObjectField(cls, "DIGEST", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              NONE = new Authentication(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Authentication Authentication::getAuthentication(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Authentication(env->callStaticObjectMethod(cls, mids$[mid_getAuthentication_a141c35b1deb0d55], a0.this$));
          }

          Authentication Authentication::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Authentication(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a141c35b1deb0d55], a0.this$));
          }

          JArray< Authentication > Authentication::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Authentication >(env->callStaticObjectMethod(cls, mids$[mid_values_203573b41dee09ca]));
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
          static PyObject *t_Authentication_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_of_(t_Authentication *self, PyObject *args);
          static PyObject *t_Authentication_getAuthentication(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Authentication_values(PyTypeObject *type);
          static PyObject *t_Authentication_get__parameters_(t_Authentication *self, void *data);
          static PyGetSetDef t_Authentication__fields_[] = {
            DECLARE_GET_FIELD(t_Authentication, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Authentication__methods_[] = {
            DECLARE_METHOD(t_Authentication, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, of_, METH_VARARGS),
            DECLARE_METHOD(t_Authentication, getAuthentication, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Authentication, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Authentication)[] = {
            { Py_tp_methods, t_Authentication__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Authentication__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Authentication)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Authentication, t_Authentication, Authentication);
          PyObject *t_Authentication::wrap_Object(const Authentication& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Authentication::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Authentication *self = (t_Authentication *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Authentication::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Authentication::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Authentication *self = (t_Authentication *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Authentication::install(PyObject *module)
          {
            installType(&PY_TYPE(Authentication), &PY_TYPE_DEF(Authentication), module, "Authentication", 0);
          }

          void t_Authentication::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "class_", make_descriptor(Authentication::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "wrapfn_", make_descriptor(t_Authentication::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "boxfn_", make_descriptor(boxObject));
            env->getClass(Authentication::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "BASIC", make_descriptor(t_Authentication::wrap_Object(*Authentication::BASIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "DIGEST", make_descriptor(t_Authentication::wrap_Object(*Authentication::DIGEST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "NONE", make_descriptor(t_Authentication::wrap_Object(*Authentication::NONE)));
          }

          static PyObject *t_Authentication_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Authentication::initializeClass, 1)))
              return NULL;
            return t_Authentication::wrap_Object(Authentication(((t_Authentication *) arg)->object.this$));
          }
          static PyObject *t_Authentication_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Authentication::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Authentication_of_(t_Authentication *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Authentication_getAuthentication(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            Authentication result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::getAuthentication(a0));
              return t_Authentication::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getAuthentication", arg);
            return NULL;
          }

          static PyObject *t_Authentication_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Authentication result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::valueOf(a0));
              return t_Authentication::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Authentication_values(PyTypeObject *type)
          {
            JArray< Authentication > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::values());
            return JArray<jobject>(result.this$).wrap(t_Authentication::wrap_jobject);
          }
          static PyObject *t_Authentication_get__parameters_(t_Authentication *self, void *data)
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
#include "org/hipparchus/stat/regression/SimpleRegression.h"
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/regression/SimpleRegression.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *SimpleRegression::class$ = NULL;
        jmethodID *SimpleRegression::mids$ = NULL;
        bool SimpleRegression::live$ = false;

        jclass SimpleRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/SimpleRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_bd04c9335fb9e4cf] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_addData_a0befc7f3dc19e41] = env->getMethodID(cls, "addData", "([[D)V");
            mids$[mid_addData_8f2e782d5278b131] = env->getMethodID(cls, "addData", "(DD)V");
            mids$[mid_addObservation_bc1ff02eb3693128] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_38e689b845a7e4f9] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_append_612d078f264bef5d] = env->getMethodID(cls, "append", "(Lorg/hipparchus/stat/regression/SimpleRegression;)V");
            mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getIntercept_dff5885c2c873297] = env->getMethodID(cls, "getIntercept", "()D");
            mids$[mid_getInterceptStdErr_dff5885c2c873297] = env->getMethodID(cls, "getInterceptStdErr", "()D");
            mids$[mid_getMeanSquareError_dff5885c2c873297] = env->getMethodID(cls, "getMeanSquareError", "()D");
            mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getR_dff5885c2c873297] = env->getMethodID(cls, "getR", "()D");
            mids$[mid_getRSquare_dff5885c2c873297] = env->getMethodID(cls, "getRSquare", "()D");
            mids$[mid_getRegressionSumSquares_dff5885c2c873297] = env->getMethodID(cls, "getRegressionSumSquares", "()D");
            mids$[mid_getSignificance_dff5885c2c873297] = env->getMethodID(cls, "getSignificance", "()D");
            mids$[mid_getSlope_dff5885c2c873297] = env->getMethodID(cls, "getSlope", "()D");
            mids$[mid_getSlopeConfidenceInterval_dff5885c2c873297] = env->getMethodID(cls, "getSlopeConfidenceInterval", "()D");
            mids$[mid_getSlopeConfidenceInterval_dcbc7ce2902fa136] = env->getMethodID(cls, "getSlopeConfidenceInterval", "(D)D");
            mids$[mid_getSlopeStdErr_dff5885c2c873297] = env->getMethodID(cls, "getSlopeStdErr", "()D");
            mids$[mid_getSumOfCrossProducts_dff5885c2c873297] = env->getMethodID(cls, "getSumOfCrossProducts", "()D");
            mids$[mid_getSumSquaredErrors_dff5885c2c873297] = env->getMethodID(cls, "getSumSquaredErrors", "()D");
            mids$[mid_getTotalSumSquares_dff5885c2c873297] = env->getMethodID(cls, "getTotalSumSquares", "()D");
            mids$[mid_getXSumSquares_dff5885c2c873297] = env->getMethodID(cls, "getXSumSquares", "()D");
            mids$[mid_hasIntercept_b108b35ef48e27bd] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_predict_dcbc7ce2902fa136] = env->getMethodID(cls, "predict", "(D)D");
            mids$[mid_regress_0142096ec696b4f7] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_7a5a137e3f3bf403] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_removeData_a0befc7f3dc19e41] = env->getMethodID(cls, "removeData", "([[D)V");
            mids$[mid_removeData_8f2e782d5278b131] = env->getMethodID(cls, "removeData", "(DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleRegression::SimpleRegression() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        SimpleRegression::SimpleRegression(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd04c9335fb9e4cf, a0)) {}

        void SimpleRegression::addData(const JArray< JArray< jdouble > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addData_a0befc7f3dc19e41], a0.this$);
        }

        void SimpleRegression::addData(jdouble a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addData_8f2e782d5278b131], a0, a1);
        }

        void SimpleRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_bc1ff02eb3693128], a0.this$, a1);
        }

        void SimpleRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_38e689b845a7e4f9], a0.this$, a1.this$);
        }

        void SimpleRegression::append(const SimpleRegression & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_append_612d078f264bef5d], a0.this$);
        }

        void SimpleRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
        }

        jdouble SimpleRegression::getIntercept() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIntercept_dff5885c2c873297]);
        }

        jdouble SimpleRegression::getInterceptStdErr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInterceptStdErr_dff5885c2c873297]);
        }

        jdouble SimpleRegression::getMeanSquareError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMeanSquareError_dff5885c2c873297]);
        }

        jlong SimpleRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
        }

        jdouble SimpleRegression::getR() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getR_dff5885c2c873297]);
        }

        jdouble SimpleRegression::getRSquare() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRSquare_dff5885c2c873297]);
        }

        jdouble SimpleRegression::getRegressionSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRegressionSumSquares_dff5885c2c873297]);
        }

        jdouble SimpleRegression::getSignificance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSignificance_dff5885c2c873297]);
        }

        jdouble SimpleRegression::getSlope() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlope_dff5885c2c873297]);
        }

        jdouble SimpleRegression::getSlopeConfidenceInterval() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeConfidenceInterval_dff5885c2c873297]);
        }

        jdouble SimpleRegression::getSlopeConfidenceInterval(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeConfidenceInterval_dcbc7ce2902fa136], a0);
        }

        jdouble SimpleRegression::getSlopeStdErr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeStdErr_dff5885c2c873297]);
        }

        jdouble SimpleRegression::getSumOfCrossProducts() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfCrossProducts_dff5885c2c873297]);
        }

        jdouble SimpleRegression::getSumSquaredErrors() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumSquaredErrors_dff5885c2c873297]);
        }

        jdouble SimpleRegression::getTotalSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalSumSquares_dff5885c2c873297]);
        }

        jdouble SimpleRegression::getXSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXSumSquares_dff5885c2c873297]);
        }

        jboolean SimpleRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_b108b35ef48e27bd]);
        }

        jdouble SimpleRegression::predict(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_predict_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::stat::regression::RegressionResults SimpleRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_0142096ec696b4f7]));
        }

        ::org::hipparchus::stat::regression::RegressionResults SimpleRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_7a5a137e3f3bf403], a0.this$));
        }

        void SimpleRegression::removeData(const JArray< JArray< jdouble > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_removeData_a0befc7f3dc19e41], a0.this$);
        }

        void SimpleRegression::removeData(jdouble a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_removeData_8f2e782d5278b131], a0, a1);
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
        static PyObject *t_SimpleRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpleRegression_init_(t_SimpleRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleRegression_addData(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_addObservation(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_addObservations(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_append(t_SimpleRegression *self, PyObject *arg);
        static PyObject *t_SimpleRegression_clear(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getIntercept(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getInterceptStdErr(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getMeanSquareError(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getN(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getR(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getRSquare(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getRegressionSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSignificance(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSlope(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSlopeConfidenceInterval(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_getSlopeStdErr(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSumOfCrossProducts(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSumSquaredErrors(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getTotalSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getXSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_hasIntercept(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_predict(t_SimpleRegression *self, PyObject *arg);
        static PyObject *t_SimpleRegression_regress(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_removeData(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_get__intercept(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__interceptStdErr(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__meanSquareError(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__n(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__r(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__rSquare(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__regressionSumSquares(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__significance(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slope(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slopeConfidenceInterval(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slopeStdErr(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__sumOfCrossProducts(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__sumSquaredErrors(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__totalSumSquares(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__xSumSquares(t_SimpleRegression *self, void *data);
        static PyGetSetDef t_SimpleRegression__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleRegression, intercept),
          DECLARE_GET_FIELD(t_SimpleRegression, interceptStdErr),
          DECLARE_GET_FIELD(t_SimpleRegression, meanSquareError),
          DECLARE_GET_FIELD(t_SimpleRegression, n),
          DECLARE_GET_FIELD(t_SimpleRegression, r),
          DECLARE_GET_FIELD(t_SimpleRegression, rSquare),
          DECLARE_GET_FIELD(t_SimpleRegression, regressionSumSquares),
          DECLARE_GET_FIELD(t_SimpleRegression, significance),
          DECLARE_GET_FIELD(t_SimpleRegression, slope),
          DECLARE_GET_FIELD(t_SimpleRegression, slopeConfidenceInterval),
          DECLARE_GET_FIELD(t_SimpleRegression, slopeStdErr),
          DECLARE_GET_FIELD(t_SimpleRegression, sumOfCrossProducts),
          DECLARE_GET_FIELD(t_SimpleRegression, sumSquaredErrors),
          DECLARE_GET_FIELD(t_SimpleRegression, totalSumSquares),
          DECLARE_GET_FIELD(t_SimpleRegression, xSumSquares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleRegression__methods_[] = {
          DECLARE_METHOD(t_SimpleRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleRegression, addData, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, append, METH_O),
          DECLARE_METHOD(t_SimpleRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getIntercept, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getInterceptStdErr, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getMeanSquareError, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getR, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getRSquare, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getRegressionSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSignificance, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlope, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlopeConfidenceInterval, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlopeStdErr, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSumOfCrossProducts, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSumSquaredErrors, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getTotalSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getXSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, predict, METH_O),
          DECLARE_METHOD(t_SimpleRegression, regress, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, removeData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleRegression)[] = {
          { Py_tp_methods, t_SimpleRegression__methods_ },
          { Py_tp_init, (void *) t_SimpleRegression_init_ },
          { Py_tp_getset, t_SimpleRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleRegression, t_SimpleRegression, SimpleRegression);

        void t_SimpleRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleRegression), &PY_TYPE_DEF(SimpleRegression), module, "SimpleRegression", 0);
        }

        void t_SimpleRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "class_", make_descriptor(SimpleRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "wrapfn_", make_descriptor(t_SimpleRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleRegression::initializeClass, 1)))
            return NULL;
          return t_SimpleRegression::wrap_Object(SimpleRegression(((t_SimpleRegression *) arg)->object.this$));
        }
        static PyObject *t_SimpleRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpleRegression_init_(t_SimpleRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SimpleRegression object((jobject) NULL);

              INT_CALL(object = SimpleRegression());
              self->object = object;
              break;
            }
           case 1:
            {
              jboolean a0;
              SimpleRegression object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = SimpleRegression(a0));
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

        static PyObject *t_SimpleRegression_addData(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(self->object.addData(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.addData(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addData", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_addObservation(t_SimpleRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservation", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_addObservations(t_SimpleRegression *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservations(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservations", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_append(t_SimpleRegression *self, PyObject *arg)
        {
          SimpleRegression a0((jobject) NULL);

          if (!parseArg(arg, "k", SimpleRegression::initializeClass, &a0))
          {
            OBJ_CALL(self->object.append(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "append", arg);
          return NULL;
        }

        static PyObject *t_SimpleRegression_clear(t_SimpleRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_SimpleRegression_getIntercept(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getIntercept());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getInterceptStdErr(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInterceptStdErr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getMeanSquareError(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getN(t_SimpleRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_SimpleRegression_getR(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getR());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getRSquare(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRSquare());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getRegressionSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSignificance(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSignificance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSlope(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSlope());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSlopeConfidenceInterval(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSlopeConfidenceInterval());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.getSlopeConfidenceInterval(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSlopeConfidenceInterval", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_getSlopeStdErr(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSlopeStdErr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSumOfCrossProducts(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfCrossProducts());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSumSquaredErrors(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumSquaredErrors());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getTotalSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getXSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_hasIntercept(t_SimpleRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SimpleRegression_predict(t_SimpleRegression *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.predict(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "predict", arg);
          return NULL;
        }

        static PyObject *t_SimpleRegression_regress(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);
              OBJ_CALL(result = self->object.regress());
              return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
            }
            break;
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "regress", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_removeData(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(self->object.removeData(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.removeData(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "removeData", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_get__intercept(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIntercept());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__interceptStdErr(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInterceptStdErr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__meanSquareError(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__n(t_SimpleRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_SimpleRegression_get__r(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getR());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__rSquare(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRSquare());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__regressionSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__significance(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSignificance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slope(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlope());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slopeConfidenceInterval(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlopeConfidenceInterval());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slopeStdErr(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlopeStdErr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__sumOfCrossProducts(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfCrossProducts());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__sumSquaredErrors(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumSquaredErrors());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__totalSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__xSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXSumSquares());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistory::class$ = NULL;
              jmethodID *AttitudeStateHistory::mids$ = NULL;
              bool AttitudeStateHistory::live$ = false;

              jclass AttitudeStateHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_2e00775434693e55] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getAngularCoordinates_2afa36052df4765d] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
                  mids$[mid_getAttitudeProvider_f95b60a986adb964] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
                  mids$[mid_getAttitudeStates_2afa36052df4765d] = env->getMethodID(cls, "getAttitudeStates", "()Ljava/util/List;");
                  mids$[mid_getAvailableDerivatives_3d53ef1ca7ad5f8c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getInterpolationMethod_11b109bd155ca898] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMetadata_003106faaf77d27d] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;");
                  mids$[mid_getReferenceFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeStateHistory::AttitudeStateHistory(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2e00775434693e55, a0.this$, a1.this$)) {}

              ::java::util::List AttitudeStateHistory::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_2afa36052df4765d]));
              }

              ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeStateHistory::getAttitudeProvider() const
              {
                return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_f95b60a986adb964]));
              }

              ::java::util::List AttitudeStateHistory::getAttitudeStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAttitudeStates_2afa36052df4765d]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AttitudeStateHistory::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_3d53ef1ca7ad5f8c]));
              }

              ::java::lang::String AttitudeStateHistory::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_11b109bd155ca898]));
              }

              jint AttitudeStateHistory::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_570ce0828f81a2c1]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata AttitudeStateHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_003106faaf77d27d]));
              }

              ::org::orekit::frames::Frame AttitudeStateHistory::getReferenceFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_b86f9f61d97a7244]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeStateHistory::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeStateHistory::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
              static PyObject *t_AttitudeStateHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeStateHistory_init_(t_AttitudeStateHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeStateHistory_getAngularCoordinates(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAttitudeProvider(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAttitudeStates(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAvailableDerivatives(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getInterpolationMethod(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getInterpolationSamples(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getMetadata(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getReferenceFrame(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getStart(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getStop(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_get__angularCoordinates(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__attitudeProvider(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__attitudeStates(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__availableDerivatives(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__interpolationMethod(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__interpolationSamples(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__metadata(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__referenceFrame(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__start(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__stop(t_AttitudeStateHistory *self, void *data);
              static PyGetSetDef t_AttitudeStateHistory__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeStateHistory, angularCoordinates),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, attitudeProvider),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, attitudeStates),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, availableDerivatives),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, interpolationMethod),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, interpolationSamples),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, metadata),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, referenceFrame),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, start),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistory__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAngularCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAttitudeProvider, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAttitudeStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistory)[] = {
                { Py_tp_methods, t_AttitudeStateHistory__methods_ },
                { Py_tp_init, (void *) t_AttitudeStateHistory_init_ },
                { Py_tp_getset, t_AttitudeStateHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistory, t_AttitudeStateHistory, AttitudeStateHistory);

              void t_AttitudeStateHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistory), &PY_TYPE_DEF(AttitudeStateHistory), module, "AttitudeStateHistory", 0);
              }

              void t_AttitudeStateHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "class_", make_descriptor(AttitudeStateHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "wrapfn_", make_descriptor(t_AttitudeStateHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeStateHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistory::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistory::wrap_Object(AttitudeStateHistory(((t_AttitudeStateHistory *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeStateHistory_init_(t_AttitudeStateHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AttitudeStateHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AttitudeStateHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeStateHistory_getAngularCoordinates(t_AttitudeStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AttitudeStateHistory_getAttitudeProvider(t_AttitudeStateHistory *self)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getAttitudeStates(t_AttitudeStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeStates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeState));
              }

              static PyObject *t_AttitudeStateHistory_getAvailableDerivatives(t_AttitudeStateHistory *self)
              {
                ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getInterpolationMethod(t_AttitudeStateHistory *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistory_getInterpolationSamples(t_AttitudeStateHistory *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeStateHistory_getMetadata(t_AttitudeStateHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeStateHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getReferenceFrame(t_AttitudeStateHistory *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getStart(t_AttitudeStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getStop(t_AttitudeStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_get__angularCoordinates(t_AttitudeStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__attitudeProvider(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__attitudeStates(t_AttitudeStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeStates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__availableDerivatives(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__interpolationMethod(t_AttitudeStateHistory *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return j2p(value);
              }

              static PyObject *t_AttitudeStateHistory_get__interpolationSamples(t_AttitudeStateHistory *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_AttitudeStateHistory_get__metadata(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeStateHistoryMetadata::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__referenceFrame(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__start(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__stop(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/orekit/gnss/antenna/PythonPhaseCenterVariationFunction.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *PythonPhaseCenterVariationFunction::class$ = NULL;
        jmethodID *PythonPhaseCenterVariationFunction::mids$ = NULL;
        bool PythonPhaseCenterVariationFunction::live$ = false;

        jclass PythonPhaseCenterVariationFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/PythonPhaseCenterVariationFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPhaseCenterVariationFunction::PythonPhaseCenterVariationFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonPhaseCenterVariationFunction::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonPhaseCenterVariationFunction::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonPhaseCenterVariationFunction::pythonExtension(jlong a0) const
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
      namespace antenna {
        static PyObject *t_PythonPhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPhaseCenterVariationFunction_init_(t_PythonPhaseCenterVariationFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPhaseCenterVariationFunction_finalize(t_PythonPhaseCenterVariationFunction *self);
        static PyObject *t_PythonPhaseCenterVariationFunction_pythonExtension(t_PythonPhaseCenterVariationFunction *self, PyObject *args);
        static void JNICALL t_PythonPhaseCenterVariationFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonPhaseCenterVariationFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
        static PyObject *t_PythonPhaseCenterVariationFunction_get__self(t_PythonPhaseCenterVariationFunction *self, void *data);
        static PyGetSetDef t_PythonPhaseCenterVariationFunction__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPhaseCenterVariationFunction, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPhaseCenterVariationFunction__methods_[] = {
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPhaseCenterVariationFunction)[] = {
          { Py_tp_methods, t_PythonPhaseCenterVariationFunction__methods_ },
          { Py_tp_init, (void *) t_PythonPhaseCenterVariationFunction_init_ },
          { Py_tp_getset, t_PythonPhaseCenterVariationFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPhaseCenterVariationFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPhaseCenterVariationFunction, t_PythonPhaseCenterVariationFunction, PythonPhaseCenterVariationFunction);

        void t_PythonPhaseCenterVariationFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPhaseCenterVariationFunction), &PY_TYPE_DEF(PythonPhaseCenterVariationFunction), module, "PythonPhaseCenterVariationFunction", 1);
        }

        void t_PythonPhaseCenterVariationFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "class_", make_descriptor(PythonPhaseCenterVariationFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "wrapfn_", make_descriptor(t_PythonPhaseCenterVariationFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPhaseCenterVariationFunction::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonPhaseCenterVariationFunction_pythonDecRef0 },
            { "value", "(DD)D", (void *) t_PythonPhaseCenterVariationFunction_value1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPhaseCenterVariationFunction::initializeClass, 1)))
            return NULL;
          return t_PythonPhaseCenterVariationFunction::wrap_Object(PythonPhaseCenterVariationFunction(((t_PythonPhaseCenterVariationFunction *) arg)->object.this$));
        }
        static PyObject *t_PythonPhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPhaseCenterVariationFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPhaseCenterVariationFunction_init_(t_PythonPhaseCenterVariationFunction *self, PyObject *args, PyObject *kwds)
        {
          PythonPhaseCenterVariationFunction object((jobject) NULL);

          INT_CALL(object = PythonPhaseCenterVariationFunction());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_finalize(t_PythonPhaseCenterVariationFunction *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_pythonExtension(t_PythonPhaseCenterVariationFunction *self, PyObject *args)
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

        static void JNICALL t_PythonPhaseCenterVariationFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jdouble JNICALL t_PythonPhaseCenterVariationFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "value", "dd", (double) a0, (double) a1);
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

        static PyObject *t_PythonPhaseCenterVariationFunction_get__self(t_PythonPhaseCenterVariationFunction *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmOrbitCorrectionData::class$ = NULL;
              jmethodID *RtcmOrbitCorrectionData::mids$ = NULL;
              bool RtcmOrbitCorrectionData::live$ = false;

              jclass RtcmOrbitCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGnssIod_570ce0828f81a2c1] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_ed0d27aa2377afa2] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setGnssIod_99803b0791f320ff] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_4d608774f859b10b] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmOrbitCorrectionData::RtcmOrbitCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jint RtcmOrbitCorrectionData::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_570ce0828f81a2c1]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection RtcmOrbitCorrectionData::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_ed0d27aa2377afa2]));
              }

              void RtcmOrbitCorrectionData::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_99803b0791f320ff], a0);
              }

              void RtcmOrbitCorrectionData::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_4d608774f859b10b], a0.this$);
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
              static PyObject *t_RtcmOrbitCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmOrbitCorrectionData_init_(t_RtcmOrbitCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmOrbitCorrectionData_getGnssIod(t_RtcmOrbitCorrectionData *self);
              static PyObject *t_RtcmOrbitCorrectionData_getOrbitCorrection(t_RtcmOrbitCorrectionData *self);
              static PyObject *t_RtcmOrbitCorrectionData_setGnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionData_setOrbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionData_get__gnssIod(t_RtcmOrbitCorrectionData *self, void *data);
              static int t_RtcmOrbitCorrectionData_set__gnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmOrbitCorrectionData_get__orbitCorrection(t_RtcmOrbitCorrectionData *self, void *data);
              static int t_RtcmOrbitCorrectionData_set__orbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmOrbitCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmOrbitCorrectionData, gnssIod),
                DECLARE_GETSET_FIELD(t_RtcmOrbitCorrectionData, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmOrbitCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, setGnssIod, METH_O),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmOrbitCorrectionData)[] = {
                { Py_tp_methods, t_RtcmOrbitCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmOrbitCorrectionData_init_ },
                { Py_tp_getset, t_RtcmOrbitCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmOrbitCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData),
                NULL
              };

              DEFINE_TYPE(RtcmOrbitCorrectionData, t_RtcmOrbitCorrectionData, RtcmOrbitCorrectionData);

              void t_RtcmOrbitCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmOrbitCorrectionData), &PY_TYPE_DEF(RtcmOrbitCorrectionData), module, "RtcmOrbitCorrectionData", 0);
              }

              void t_RtcmOrbitCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionData), "class_", make_descriptor(RtcmOrbitCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionData), "wrapfn_", make_descriptor(t_RtcmOrbitCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmOrbitCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmOrbitCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmOrbitCorrectionData::wrap_Object(RtcmOrbitCorrectionData(((t_RtcmOrbitCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmOrbitCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmOrbitCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmOrbitCorrectionData_init_(t_RtcmOrbitCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmOrbitCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmOrbitCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmOrbitCorrectionData_getGnssIod(t_RtcmOrbitCorrectionData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmOrbitCorrectionData_getOrbitCorrection(t_RtcmOrbitCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmOrbitCorrectionData_setGnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGnssIod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGnssIod", arg);
                return NULL;
              }

              static PyObject *t_RtcmOrbitCorrectionData_setOrbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setOrbitCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmOrbitCorrectionData_get__gnssIod(t_RtcmOrbitCorrectionData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmOrbitCorrectionData_set__gnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGnssIod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gnssIod", arg);
                return -1;
              }

              static PyObject *t_RtcmOrbitCorrectionData_get__orbitCorrection(t_RtcmOrbitCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_RtcmOrbitCorrectionData_set__orbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCorrection", arg);
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
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldRotation::class$ = NULL;
          jmethodID *FieldRotation::mids$ = NULL;
          bool FieldRotation::live$ = false;

          jclass FieldRotation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldRotation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_67d015490dd313e3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_4477d1375dd1908a] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/CalculusFieldElement;D)V");
              mids$[mid_init$_841fd60741dbfb48] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
              mids$[mid_init$_f918795bdbac97ac] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)V");
              mids$[mid_init$_49bf7a3fc95b685e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_816d59820332b1b5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_fbe39ca3cfe4582d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Z)V");
              mids$[mid_applyInverseTo_81292042324b6fb2] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_a173408e2b1f78b2] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyInverseTo_dd12e5f7a585a156] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_7a9aa2e8b906f1a5] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyInverseTo_1fafd88f5c1b8f0f] = env->getMethodID(cls, "applyInverseTo", "([D[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyInverseTo_cbc98e7d0c0477db] = env->getMethodID(cls, "applyInverseTo", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyInverseTo_36d4d2841b95f44f] = env->getStaticMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_431eb85cb1b43ad7] = env->getStaticMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_81292042324b6fb2] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_a173408e2b1f78b2] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_dd12e5f7a585a156] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_7a9aa2e8b906f1a5] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_1fafd88f5c1b8f0f] = env->getMethodID(cls, "applyTo", "([D[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyTo_cbc98e7d0c0477db] = env->getMethodID(cls, "applyTo", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyTo_36d4d2841b95f44f] = env->getStaticMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_431eb85cb1b43ad7] = env->getStaticMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_compose_78c23ea2b2ceca49] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_compose_b2a1d7ead97c63bd] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_composeInverse_78c23ea2b2ceca49] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_composeInverse_b2a1d7ead97c63bd] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_distance_f00f0d7b4350b7f6] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAngle_eba8e72a22c984ac] = env->getMethodID(cls, "getAngle", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAngles_83468b668f3dd1eb] = env->getMethodID(cls, "getAngles", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAxis_470de3cbd3b402cf] = env->getMethodID(cls, "getAxis", "(Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getIdentity_68ed739186cbd17c] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_getMatrix_1b3ae884bec31e6d] = env->getMethodID(cls, "getMatrix", "()[[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ0_eba8e72a22c984ac] = env->getMethodID(cls, "getQ0", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ1_eba8e72a22c984ac] = env->getMethodID(cls, "getQ1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ2_eba8e72a22c984ac] = env->getMethodID(cls, "getQ2", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ3_eba8e72a22c984ac] = env->getMethodID(cls, "getQ3", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_revert_1d339a2ee3a3323a] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_toRotation_de86c7efc42eac14] = env->getMethodID(cls, "toRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_67d015490dd313e3, a0.this$, a1.this$)) {}

          FieldRotation::FieldRotation(const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4477d1375dd1908a, a0.this$, a1)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_841fd60741dbfb48, a0.this$, a1.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f918795bdbac97ac, a0.this$, a1.this$, a2.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49bf7a3fc95b685e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_816d59820332b1b5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fbe39ca3cfe4582d, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

          FieldRotation FieldRotation::applyInverseTo(const FieldRotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_81292042324b6fb2], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_a173408e2b1f78b2], a0.this$));
          }

          FieldRotation FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_dd12e5f7a585a156], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_7a9aa2e8b906f1a5], a0.this$));
          }

          void FieldRotation::applyInverseTo(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_1fafd88f5c1b8f0f], a0.this$, a1.this$);
          }

          void FieldRotation::applyInverseTo(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_cbc98e7d0c0477db], a0.this$, a1.this$);
          }

          FieldRotation FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_applyInverseTo_36d4d2841b95f44f], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_applyInverseTo_431eb85cb1b43ad7], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::applyTo(const FieldRotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyTo_81292042324b6fb2], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyTo_a173408e2b1f78b2], a0.this$));
          }

          FieldRotation FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyTo_dd12e5f7a585a156], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyTo_7a9aa2e8b906f1a5], a0.this$));
          }

          void FieldRotation::applyTo(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_1fafd88f5c1b8f0f], a0.this$, a1.this$);
          }

          void FieldRotation::applyTo(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_cbc98e7d0c0477db], a0.this$, a1.this$);
          }

          FieldRotation FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_applyTo_36d4d2841b95f44f], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_applyTo_431eb85cb1b43ad7], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::compose(const FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_compose_78c23ea2b2ceca49], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::compose(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_compose_b2a1d7ead97c63bd], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::composeInverse(const FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_composeInverse_78c23ea2b2ceca49], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::composeInverse(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_composeInverse_b2a1d7ead97c63bd], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::distance(const FieldRotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_f00f0d7b4350b7f6], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getAngle() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAngle_eba8e72a22c984ac]));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldRotation::getAngles(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAngles_83468b668f3dd1eb], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::getAxis(const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxis_470de3cbd3b402cf], a0.this$));
          }

          FieldRotation FieldRotation::getIdentity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_68ed739186cbd17c], a0.this$));
          }

          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldRotation::getMatrix() const
          {
            return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getMatrix_1b3ae884bec31e6d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ0() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ0_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ1_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ2() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ2_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ3() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ3_eba8e72a22c984ac]));
          }

          FieldRotation FieldRotation::revert() const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_revert_1d339a2ee3a3323a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Rotation FieldRotation::toRotation() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_toRotation_de86c7efc42eac14]));
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
          static PyObject *t_FieldRotation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_of_(t_FieldRotation *self, PyObject *args);
          static int t_FieldRotation_init_(t_FieldRotation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldRotation_applyInverseTo(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_applyInverseTo_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_applyTo(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_applyTo_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_compose(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_composeInverse(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_distance(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_getAngle(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getAngles(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_getAxis(t_FieldRotation *self, PyObject *arg);
          static PyObject *t_FieldRotation_getIdentity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_getMatrix(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ0(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ1(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ2(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ3(t_FieldRotation *self);
          static PyObject *t_FieldRotation_revert(t_FieldRotation *self);
          static PyObject *t_FieldRotation_toRotation(t_FieldRotation *self);
          static PyObject *t_FieldRotation_get__angle(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__matrix(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q0(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q1(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q2(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q3(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__parameters_(t_FieldRotation *self, void *data);
          static PyGetSetDef t_FieldRotation__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRotation, angle),
            DECLARE_GET_FIELD(t_FieldRotation, matrix),
            DECLARE_GET_FIELD(t_FieldRotation, q0),
            DECLARE_GET_FIELD(t_FieldRotation, q1),
            DECLARE_GET_FIELD(t_FieldRotation, q2),
            DECLARE_GET_FIELD(t_FieldRotation, q3),
            DECLARE_GET_FIELD(t_FieldRotation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRotation__methods_[] = {
            DECLARE_METHOD(t_FieldRotation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyInverseTo, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyInverseTo_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, applyTo, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyTo_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, compose, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, composeInverse, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, distance, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getAngles, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, getAxis, METH_O),
            DECLARE_METHOD(t_FieldRotation, getIdentity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, getMatrix, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ0, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ1, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ2, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ3, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, revert, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, toRotation, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRotation)[] = {
            { Py_tp_methods, t_FieldRotation__methods_ },
            { Py_tp_init, (void *) t_FieldRotation_init_ },
            { Py_tp_getset, t_FieldRotation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRotation)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRotation, t_FieldRotation, FieldRotation);
          PyObject *t_FieldRotation::wrap_Object(const FieldRotation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRotation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRotation *self = (t_FieldRotation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRotation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRotation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRotation *self = (t_FieldRotation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRotation::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRotation), &PY_TYPE_DEF(FieldRotation), module, "FieldRotation", 0);
          }

          void t_FieldRotation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "class_", make_descriptor(FieldRotation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "wrapfn_", make_descriptor(t_FieldRotation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRotation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRotation::initializeClass, 1)))
              return NULL;
            return t_FieldRotation::wrap_Object(FieldRotation(((t_FieldRotation *) arg)->object.this$));
          }
          static PyObject *t_FieldRotation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRotation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRotation_of_(t_FieldRotation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldRotation_init_(t_FieldRotation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "[[KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a2((jobject) NULL);
                PyTypeObject **p2;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                jboolean a4;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKKZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3, a4));
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

          static PyObject *t_FieldRotation_applyInverseTo(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "K", FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[D[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyInverseTo", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyInverseTo_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, FieldRotation::initializeClass, &a0, &a1, &p1, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyInverseTo(a0, a1));
                  return t_FieldRotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyInverseTo(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "applyInverseTo_", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyTo(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "K", FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[D[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyTo", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyTo_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, FieldRotation::initializeClass, &a0, &a1, &p1, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyTo(a0, a1));
                  return t_FieldRotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyTo(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "applyTo_", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_compose(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.compose(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.compose(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "compose", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_composeInverse(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.composeInverse(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.composeInverse(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "composeInverse", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_distance(PyTypeObject *type, PyObject *args)
          {
            FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", FieldRotation::initializeClass, FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, t_FieldRotation::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::distance(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_getAngle(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getAngle());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getAngles(t_FieldRotation *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAngles(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "getAngles", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_getAxis(t_FieldRotation *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAxis(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "getAxis", arg);
            return NULL;
          }

          static PyObject *t_FieldRotation_getIdentity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldRotation result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::getIdentity(a0));
              return t_FieldRotation::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getIdentity", arg);
            return NULL;
          }

          static PyObject *t_FieldRotation_getMatrix(t_FieldRotation *self)
          {
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getMatrix());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_FieldRotation_getQ0(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ0());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ1(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ2(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ2());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ3(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ3());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_revert(t_FieldRotation *self)
          {
            FieldRotation result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_FieldRotation::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRotation_toRotation(t_FieldRotation *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
            OBJ_CALL(result = self->object.toRotation());
            return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
          }
          static PyObject *t_FieldRotation_get__parameters_(t_FieldRotation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRotation_get__angle(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getAngle());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__matrix(t_FieldRotation *self, void *data)
          {
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getMatrix());
            return JArray<jobject>(value.this$).wrap(NULL);
          }

          static PyObject *t_FieldRotation_get__q0(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ0());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q1(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q2(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ2());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q3(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ3());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/GRGSFormatReader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/io/InputStream.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *GRGSFormatReader::class$ = NULL;
          jmethodID *GRGSFormatReader::mids$ = NULL;
          bool GRGSFormatReader::live$ = false;

          jclass GRGSFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/GRGSFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d6df10f4e35ef1e8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_b0bdaadf6311e767] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_getProvider_fc0a96c558346426] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GRGSFormatReader::GRGSFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_d6df10f4e35ef1e8, a0.this$, a1)) {}

          GRGSFormatReader::GRGSFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_b0bdaadf6311e767, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider GRGSFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_fc0a96c558346426], a0, a1, a2));
          }

          void GRGSFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
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
          static PyObject *t_GRGSFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GRGSFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GRGSFormatReader_init_(t_GRGSFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GRGSFormatReader_getProvider(t_GRGSFormatReader *self, PyObject *args);
          static PyObject *t_GRGSFormatReader_loadData(t_GRGSFormatReader *self, PyObject *args);

          static PyMethodDef t_GRGSFormatReader__methods_[] = {
            DECLARE_METHOD(t_GRGSFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GRGSFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GRGSFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_GRGSFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GRGSFormatReader)[] = {
            { Py_tp_methods, t_GRGSFormatReader__methods_ },
            { Py_tp_init, (void *) t_GRGSFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GRGSFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(GRGSFormatReader, t_GRGSFormatReader, GRGSFormatReader);

          void t_GRGSFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(GRGSFormatReader), &PY_TYPE_DEF(GRGSFormatReader), module, "GRGSFormatReader", 0);
          }

          void t_GRGSFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRGSFormatReader), "class_", make_descriptor(GRGSFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRGSFormatReader), "wrapfn_", make_descriptor(t_GRGSFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRGSFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GRGSFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GRGSFormatReader::initializeClass, 1)))
              return NULL;
            return t_GRGSFormatReader::wrap_Object(GRGSFormatReader(((t_GRGSFormatReader *) arg)->object.this$));
          }
          static PyObject *t_GRGSFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GRGSFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GRGSFormatReader_init_(t_GRGSFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                GRGSFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = GRGSFormatReader(a0, a1));
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
                GRGSFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GRGSFormatReader(a0, a1, a2));
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

          static PyObject *t_GRGSFormatReader_getProvider(t_GRGSFormatReader *self, PyObject *args)
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

            return callSuper(PY_TYPE(GRGSFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_GRGSFormatReader_loadData(t_GRGSFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GRGSFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Date.h"
#include "java/util/TimeZone.h"
#include "java/io/Serializable.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/Month.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbsoluteDate::class$ = NULL;
      jmethodID *AbsoluteDate::mids$ = NULL;
      bool AbsoluteDate::live$ = false;
      AbsoluteDate *AbsoluteDate::ARBITRARY_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::BEIDOU_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::CCSDS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::FIFTIES_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::FUTURE_INFINITY = NULL;
      AbsoluteDate *AbsoluteDate::GALILEO_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::GLONASS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::GPS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::IRNSS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::J2000_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::JAVA_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::JULIAN_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::MODIFIED_JULIAN_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::PAST_INFINITY = NULL;
      AbsoluteDate *AbsoluteDate::QZSS_EPOCH = NULL;

      jclass AbsoluteDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbsoluteDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_fdc72bfdba154d74] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_217e31dbcd6363d1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_d111fa84265c2749] = env->getMethodID(cls, "<init>", "(Ljava/util/Date;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_d6d5cef8441f1f00] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_6941b33964069881] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateTimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_69730a518a1a7125] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_c114b429817309ad] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_c9cc7c1b4497e63c] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;ILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_269134779d52d6f6] = env->getMethodID(cls, "<init>", "(IIILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_6b167e52959fccc5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;IIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_3bcf290ea7bfd98c] = env->getMethodID(cls, "<init>", "(IIIIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_compareTo_17efd3c2ea0eaff7] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_createBesselianEpoch_149a9211a037d799] = env->getStaticMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJDDate_d403671c94e69120] = env->getStaticMethodID(cls, "createJDDate", "(IDLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_149a9211a037d799] = env->getStaticMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createMJDDate_d403671c94e69120] = env->getStaticMethodID(cls, "createMJDDate", "(IDLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_durationFrom_bf1d7732f1acb697] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getComponents_d6544458f233293b] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_f3a5c409801be8e9] = env->getMethodID(cls, "getComponents", "(I)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_b889282ad7e843b0] = env->getMethodID(cls, "getComponents", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_279a1fb73805d842] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_b4e48014e875ddbb] = env->getMethodID(cls, "getComponents", "(ILorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isAfter_fc6addcd2c525286] = env->getMethodID(cls, "isAfter", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isAfterOrEqualTo_fc6addcd2c525286] = env->getMethodID(cls, "isAfterOrEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBefore_fc6addcd2c525286] = env->getMethodID(cls, "isBefore", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBeforeOrEqualTo_fc6addcd2c525286] = env->getMethodID(cls, "isBeforeOrEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBetween_cd0279715c09e3dd] = env->getMethodID(cls, "isBetween", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBetweenOrEqualTo_cd0279715c09e3dd] = env->getMethodID(cls, "isBetweenOrEqualTo", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isCloseTo_c36652ecf6f0e919] = env->getMethodID(cls, "isCloseTo", "(Lorg/orekit/time/TimeStamped;D)Z");
          mids$[mid_isEqualTo_fc6addcd2c525286] = env->getMethodID(cls, "isEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_offsetFrom_3ee179c6abb41546] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_2b855e8dba6e6968] = env->getStaticMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[B)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_4cb1c9d3290946bc] = env->getStaticMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[BLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_5a3cd68164459bb3] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(B[BLorg/orekit/time/DateComponents;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_c54996f02cc81be6] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(B[BLorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_0c71200b8a824263] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(BB[BLorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_53d0c1b28083adc6] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(BB[BLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_shiftedBy_149a9211a037d799] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_timeScalesOffset_b035f84edb8c0da4] = env->getMethodID(cls, "timeScalesOffset", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)D");
          mids$[mid_toDate_dc536aab1e2c5013] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/TimeScale;)Ljava/util/Date;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_54668190d292adde] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;)Ljava/lang/String;");
          mids$[mid_toString_8cc8a10236476f23] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_e3ec59f6a2ed4d7c] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_b931e891aeceaf16] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_ed4d62dceac38f41] = env->getMethodID(cls, "toString", "(ILorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toStringRfc3339_e3ec59f6a2ed4d7c] = env->getMethodID(cls, "toStringRfc3339", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_79c6636f9f7e94fe] = env->getMethodID(cls, "toStringWithoutUtcOffset", "(Lorg/orekit/time/TimeScale;I)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARBITRARY_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "ARBITRARY_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          BEIDOU_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "BEIDOU_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          CCSDS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "CCSDS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          FIFTIES_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "FIFTIES_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          FUTURE_INFINITY = new AbsoluteDate(env->getStaticObjectField(cls, "FUTURE_INFINITY", "Lorg/orekit/time/AbsoluteDate;"));
          GALILEO_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GALILEO_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          GLONASS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GLONASS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          GPS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GPS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          IRNSS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "IRNSS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          J2000_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "J2000_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          JAVA_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "JAVA_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          JULIAN_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          MODIFIED_JULIAN_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "MODIFIED_JULIAN_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          PAST_INFINITY = new AbsoluteDate(env->getStaticObjectField(cls, "PAST_INFINITY", "Lorg/orekit/time/AbsoluteDate;"));
          QZSS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "QZSS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsoluteDate::AbsoluteDate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      AbsoluteDate::AbsoluteDate(const AbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fdc72bfdba154d74, a0.this$, a1)) {}

      AbsoluteDate::AbsoluteDate(const ::java::lang::String & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_217e31dbcd6363d1, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::java::util::Date & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d111fa84265c2749, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d6d5cef8441f1f00, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateTimeComponents & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6941b33964069881, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_69730a518a1a7125, a0.this$, a1.this$, a2.this$)) {}

      AbsoluteDate::AbsoluteDate(const AbsoluteDate & a0, jdouble a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c114b429817309ad, a0.this$, a1, a2.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, const ::org::orekit::time::Month & a1, jint a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9cc7c1b4497e63c, a0, a1.this$, a2, a3.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, jint a1, jint a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_269134779d52d6f6, a0, a1, a2, a3.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, const ::org::orekit::time::Month & a1, jint a2, jint a3, jint a4, jdouble a5, const ::org::orekit::time::TimeScale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6b167e52959fccc5, a0, a1.this$, a2, a3, a4, a5, a6.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, const ::org::orekit::time::TimeScale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3bcf290ea7bfd98c, a0, a1, a2, a3, a4, a5, a6.this$)) {}

      jint AbsoluteDate::compareTo(const AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_17efd3c2ea0eaff7], a0.this$);
      }

      AbsoluteDate AbsoluteDate::createBesselianEpoch(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_149a9211a037d799], a0));
      }

      AbsoluteDate AbsoluteDate::createJDDate(jint a0, jdouble a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJDDate_d403671c94e69120], a0, a1, a2.this$));
      }

      AbsoluteDate AbsoluteDate::createJulianEpoch(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_149a9211a037d799], a0));
      }

      AbsoluteDate AbsoluteDate::createMJDDate(jint a0, jdouble a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createMJDDate_d403671c94e69120], a0, a1, a2.this$));
      }

      jdouble AbsoluteDate::durationFrom(const AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_durationFrom_bf1d7732f1acb697], a0.this$);
      }

      jboolean AbsoluteDate::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::java::util::TimeZone & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_d6544458f233293b], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(jint a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_f3a5c409801be8e9], a0));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_b889282ad7e843b0], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_279a1fb73805d842], a0.this$, a1.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_b4e48014e875ddbb], a0, a1.this$));
      }

      AbsoluteDate AbsoluteDate::getDate() const
      {
        return AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      jint AbsoluteDate::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      jboolean AbsoluteDate::isAfter(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfter_fc6addcd2c525286], a0.this$);
      }

      jboolean AbsoluteDate::isAfterOrEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfterOrEqualTo_fc6addcd2c525286], a0.this$);
      }

      jboolean AbsoluteDate::isBefore(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBefore_fc6addcd2c525286], a0.this$);
      }

      jboolean AbsoluteDate::isBeforeOrEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBeforeOrEqualTo_fc6addcd2c525286], a0.this$);
      }

      jboolean AbsoluteDate::isBetween(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetween_cd0279715c09e3dd], a0.this$, a1.this$);
      }

      jboolean AbsoluteDate::isBetweenOrEqualTo(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetweenOrEqualTo_cd0279715c09e3dd], a0.this$, a1.this$);
      }

      jboolean AbsoluteDate::isCloseTo(const ::org::orekit::time::TimeStamped & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCloseTo_c36652ecf6f0e919], a0.this$, a1);
      }

      jboolean AbsoluteDate::isEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isEqualTo_fc6addcd2c525286], a0.this$);
      }

      jdouble AbsoluteDate::offsetFrom(const AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFrom_3ee179c6abb41546], a0.this$, a1.this$);
      }

      AbsoluteDate AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_2b855e8dba6e6968], a0, a1.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_4cb1c9d3290946bc], a0, a1.this$, a2.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSDaySegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::DateComponents & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_5a3cd68164459bb3], a0, a1.this$, a2.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSDaySegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::DateComponents & a2, const ::org::orekit::time::TimeScale & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_c54996f02cc81be6], a0, a1.this$, a2.this$, a3.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSUnsegmentedTimeCode(jbyte a0, jbyte a1, const JArray< jbyte > & a2, const AbsoluteDate & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_0c71200b8a824263], a0, a1, a2.this$, a3.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSUnsegmentedTimeCode(jbyte a0, jbyte a1, const JArray< jbyte > & a2, const AbsoluteDate & a3, const AbsoluteDate & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_53d0c1b28083adc6], a0, a1, a2.this$, a3.this$, a4.this$));
      }

      AbsoluteDate AbsoluteDate::shiftedBy(jdouble a0) const
      {
        return AbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_149a9211a037d799], a0));
      }

      jdouble AbsoluteDate::timeScalesOffset(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_timeScalesOffset_b035f84edb8c0da4], a0.this$, a1.this$);
      }

      ::java::util::Date AbsoluteDate::toDate(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::util::Date(env->callObjectMethod(this$, mids$[mid_toDate_dc536aab1e2c5013], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::java::lang::String AbsoluteDate::toString(const ::java::util::TimeZone & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_54668190d292adde], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_8cc8a10236476f23], a0));
      }

      ::java::lang::String AbsoluteDate::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_e3ec59f6a2ed4d7c], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_b931e891aeceaf16], a0.this$, a1.this$));
      }

      ::java::lang::String AbsoluteDate::toString(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_ed4d62dceac38f41], a0, a1.this$));
      }

      ::java::lang::String AbsoluteDate::toStringRfc3339(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringRfc3339_e3ec59f6a2ed4d7c], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toStringWithoutUtcOffset(const ::org::orekit::time::TimeScale & a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_79c6636f9f7e94fe], a0.this$, a1));
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
      static PyObject *t_AbsoluteDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbsoluteDate_init_(t_AbsoluteDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsoluteDate_compareTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_durationFrom(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_equals(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_getComponents(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_getDate(t_AbsoluteDate *self);
      static PyObject *t_AbsoluteDate_hashCode(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isAfter(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isAfterOrEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBefore(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBeforeOrEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBetween(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isBetweenOrEqualTo(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isCloseTo(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_offsetFrom(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_shiftedBy(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_timeScalesOffset(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_toDate(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_toString(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_toStringRfc3339(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_toStringWithoutUtcOffset(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_get__date(t_AbsoluteDate *self, void *data);
      static PyGetSetDef t_AbsoluteDate__fields_[] = {
        DECLARE_GET_FIELD(t_AbsoluteDate, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsoluteDate__methods_[] = {
        DECLARE_METHOD(t_AbsoluteDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, compareTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, createBesselianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createMJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, durationFrom, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, equals, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, getComponents, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_AbsoluteDate, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isAfter, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isAfterOrEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBefore, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBeforeOrEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBetween, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isBetweenOrEqualTo, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isCloseTo, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, offsetFrom, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSCalendarSegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSDaySegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSUnsegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, shiftedBy, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, timeScalesOffset, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, toDate, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, toString, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, toStringRfc3339, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, toStringWithoutUtcOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsoluteDate)[] = {
        { Py_tp_methods, t_AbsoluteDate__methods_ },
        { Py_tp_init, (void *) t_AbsoluteDate_init_ },
        { Py_tp_getset, t_AbsoluteDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsoluteDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbsoluteDate, t_AbsoluteDate, AbsoluteDate);

      void t_AbsoluteDate::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsoluteDate), &PY_TYPE_DEF(AbsoluteDate), module, "AbsoluteDate", 0);
      }

      void t_AbsoluteDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "class_", make_descriptor(AbsoluteDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "wrapfn_", make_descriptor(t_AbsoluteDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbsoluteDate::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "ARBITRARY_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::ARBITRARY_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "BEIDOU_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::BEIDOU_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "CCSDS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::CCSDS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "FIFTIES_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::FIFTIES_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "FUTURE_INFINITY", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::FUTURE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GALILEO_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GALILEO_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GLONASS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GLONASS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GPS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GPS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "IRNSS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::IRNSS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "J2000_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::J2000_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "JAVA_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::JAVA_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "JULIAN_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "MODIFIED_JULIAN_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::MODIFIED_JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "PAST_INFINITY", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::PAST_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "QZSS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::QZSS_EPOCH)));
      }

      static PyObject *t_AbsoluteDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsoluteDate::initializeClass, 1)))
          return NULL;
        return t_AbsoluteDate::wrap_Object(AbsoluteDate(((t_AbsoluteDate *) arg)->object.this$));
      }
      static PyObject *t_AbsoluteDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsoluteDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbsoluteDate_init_(t_AbsoluteDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            AbsoluteDate object((jobject) NULL);

            INT_CALL(object = AbsoluteDate());
            self->object = object;
            break;
          }
         case 2:
          {
            AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kD", AbsoluteDate::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::util::Date a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::Date::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::DateTimeComponents a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateTimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kDk", AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IKIk", ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IIIk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            ::org::orekit::time::TimeScale a6((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IKIIIDk", ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            ::org::orekit::time::TimeScale a6((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IIIIIDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_AbsoluteDate_compareTo(t_AbsoluteDate *self, PyObject *arg)
      {
        AbsoluteDate a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createBesselianEpoch(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createBesselianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        AbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createJDDate(a0, a1, a2));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJDDate", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createJulianEpoch(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        AbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createMJDDate(a0, a1, a2));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createMJDDate", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_durationFrom(t_AbsoluteDate *self, PyObject *arg)
      {
        AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_equals(t_AbsoluteDate *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_AbsoluteDate_getComponents(t_AbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getComponents", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_getDate(t_AbsoluteDate *self)
      {
        AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbsoluteDate_hashCode(t_AbsoluteDate *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_AbsoluteDate_isAfter(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isAfter(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfter", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isAfterOrEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isAfterOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfterOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBefore(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isBefore(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBefore", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBeforeOrEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isBeforeOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBeforeOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBetween(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isBetween(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetween", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBetweenOrEqualTo(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isBetweenOrEqualTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetweenOrEqualTo", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isCloseTo(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "kD", ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isCloseTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isCloseTo", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_offsetFrom(t_AbsoluteDate *self, PyObject *args)
      {
        AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[B", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(a0, a1));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(a0, a1, a2));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSCalendarSegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::DateComponents a2((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::DateComponents::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::DateComponents a2((jobject) NULL);
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bkk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSDaySegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jbyte a0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            AbsoluteDate a3((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "BB[Bk", AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            jbyte a0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            AbsoluteDate a3((jobject) NULL);
            AbsoluteDate a4((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "BB[Bkk", AbsoluteDate::initializeClass, AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSUnsegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_shiftedBy(t_AbsoluteDate *self, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_timeScalesOffset(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.timeScalesOffset(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "timeScalesOffset", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toDate(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::util::Date result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toDate(a0));
          return ::java::util::t_Date::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDate", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toString(t_AbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_AbsoluteDate_toStringRfc3339(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toStringRfc3339(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toStringRfc3339", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toStringWithoutUtcOffset(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        jint a1;
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.toStringWithoutUtcOffset(a0, a1));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toStringWithoutUtcOffset", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_get__date(t_AbsoluteDate *self, void *data)
      {
        AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/VariationalEquation.h"
#include "org/hipparchus/ode/VariationalEquation$MismatchedEquations.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ParameterConfiguration.h"
#include "org/hipparchus/ode/ODEJacobiansProvider.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ParametersController.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *VariationalEquation::class$ = NULL;
      jmethodID *VariationalEquation::mids$ = NULL;
      bool VariationalEquation::live$ = false;

      jclass VariationalEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/VariationalEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_00706f73184eaf6c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEJacobiansProvider;)V");
          mids$[mid_init$_ffe1ad9fe310d59c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/OrdinaryDifferentialEquation;[DLorg/hipparchus/ode/ParametersController;[Lorg/hipparchus/ode/ParameterConfiguration;)V");
          mids$[mid_extractMainSetJacobian_01f1be3cf55ee85b] = env->getMethodID(cls, "extractMainSetJacobian", "(Lorg/hipparchus/ode/ODEState;)[[D");
          mids$[mid_extractParameterJacobian_41a0e16ccaa8c872] = env->getMethodID(cls, "extractParameterJacobian", "(Lorg/hipparchus/ode/ODEState;Ljava/lang/String;)[D");
          mids$[mid_setInitialMainStateJacobian_a0befc7f3dc19e41] = env->getMethodID(cls, "setInitialMainStateJacobian", "([[D)V");
          mids$[mid_setInitialParameterJacobian_3468fcb7793f51a9] = env->getMethodID(cls, "setInitialParameterJacobian", "(Ljava/lang/String;[D)V");
          mids$[mid_setUpInitialState_d2199fa9bd17650b] = env->getMethodID(cls, "setUpInitialState", "(Lorg/hipparchus/ode/ODEState;)Lorg/hipparchus/ode/ODEState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      VariationalEquation::VariationalEquation(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEJacobiansProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_00706f73184eaf6c, a0.this$, a1.this$)) {}

      VariationalEquation::VariationalEquation(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a1, const JArray< jdouble > & a2, const ::org::hipparchus::ode::ParametersController & a3, const JArray< ::org::hipparchus::ode::ParameterConfiguration > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ffe1ad9fe310d59c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< JArray< jdouble > > VariationalEquation::extractMainSetJacobian(const ::org::hipparchus::ode::ODEState & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_extractMainSetJacobian_01f1be3cf55ee85b], a0.this$));
      }

      JArray< jdouble > VariationalEquation::extractParameterJacobian(const ::org::hipparchus::ode::ODEState & a0, const ::java::lang::String & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameterJacobian_41a0e16ccaa8c872], a0.this$, a1.this$));
      }

      void VariationalEquation::setInitialMainStateJacobian(const JArray< JArray< jdouble > > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setInitialMainStateJacobian_a0befc7f3dc19e41], a0.this$);
      }

      void VariationalEquation::setInitialParameterJacobian(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setInitialParameterJacobian_3468fcb7793f51a9], a0.this$, a1.this$);
      }

      ::org::hipparchus::ode::ODEState VariationalEquation::setUpInitialState(const ::org::hipparchus::ode::ODEState & a0) const
      {
        return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_setUpInitialState_d2199fa9bd17650b], a0.this$));
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
      static PyObject *t_VariationalEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VariationalEquation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_VariationalEquation_init_(t_VariationalEquation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_VariationalEquation_extractMainSetJacobian(t_VariationalEquation *self, PyObject *arg);
      static PyObject *t_VariationalEquation_extractParameterJacobian(t_VariationalEquation *self, PyObject *args);
      static PyObject *t_VariationalEquation_setInitialMainStateJacobian(t_VariationalEquation *self, PyObject *arg);
      static PyObject *t_VariationalEquation_setInitialParameterJacobian(t_VariationalEquation *self, PyObject *args);
      static PyObject *t_VariationalEquation_setUpInitialState(t_VariationalEquation *self, PyObject *arg);
      static int t_VariationalEquation_set__initialMainStateJacobian(t_VariationalEquation *self, PyObject *arg, void *data);
      static int t_VariationalEquation_set__upInitialState(t_VariationalEquation *self, PyObject *arg, void *data);
      static PyGetSetDef t_VariationalEquation__fields_[] = {
        DECLARE_SET_FIELD(t_VariationalEquation, initialMainStateJacobian),
        DECLARE_SET_FIELD(t_VariationalEquation, upInitialState),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_VariationalEquation__methods_[] = {
        DECLARE_METHOD(t_VariationalEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VariationalEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VariationalEquation, extractMainSetJacobian, METH_O),
        DECLARE_METHOD(t_VariationalEquation, extractParameterJacobian, METH_VARARGS),
        DECLARE_METHOD(t_VariationalEquation, setInitialMainStateJacobian, METH_O),
        DECLARE_METHOD(t_VariationalEquation, setInitialParameterJacobian, METH_VARARGS),
        DECLARE_METHOD(t_VariationalEquation, setUpInitialState, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VariationalEquation)[] = {
        { Py_tp_methods, t_VariationalEquation__methods_ },
        { Py_tp_init, (void *) t_VariationalEquation_init_ },
        { Py_tp_getset, t_VariationalEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VariationalEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(VariationalEquation, t_VariationalEquation, VariationalEquation);

      void t_VariationalEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(VariationalEquation), &PY_TYPE_DEF(VariationalEquation), module, "VariationalEquation", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "MismatchedEquations", make_descriptor(&PY_TYPE_DEF(VariationalEquation$MismatchedEquations)));
      }

      void t_VariationalEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "class_", make_descriptor(VariationalEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "wrapfn_", make_descriptor(t_VariationalEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_VariationalEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VariationalEquation::initializeClass, 1)))
          return NULL;
        return t_VariationalEquation::wrap_Object(VariationalEquation(((t_VariationalEquation *) arg)->object.this$));
      }
      static PyObject *t_VariationalEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VariationalEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_VariationalEquation_init_(t_VariationalEquation *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
            ::org::hipparchus::ode::ODEJacobiansProvider a1((jobject) NULL);
            VariationalEquation object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEJacobiansProvider::initializeClass, &a0, &a1))
            {
              INT_CALL(object = VariationalEquation(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
            ::org::hipparchus::ode::OrdinaryDifferentialEquation a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            ::org::hipparchus::ode::ParametersController a3((jobject) NULL);
            JArray< ::org::hipparchus::ode::ParameterConfiguration > a4((jobject) NULL);
            VariationalEquation object((jobject) NULL);

            if (!parseArgs(args, "kk[Dk[k", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, ::org::hipparchus::ode::ParametersController::initializeClass, ::org::hipparchus::ode::ParameterConfiguration::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = VariationalEquation(a0, a1, a2, a3, a4));
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

      static PyObject *t_VariationalEquation_extractMainSetJacobian(t_VariationalEquation *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.extractMainSetJacobian(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "extractMainSetJacobian", arg);
        return NULL;
      }

      static PyObject *t_VariationalEquation_extractParameterJacobian(t_VariationalEquation *self, PyObject *args)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "ks", ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.extractParameterJacobian(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "extractParameterJacobian", args);
        return NULL;
      }

      static PyObject *t_VariationalEquation_setInitialMainStateJacobian(t_VariationalEquation *self, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(self->object.setInitialMainStateJacobian(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setInitialMainStateJacobian", arg);
        return NULL;
      }

      static PyObject *t_VariationalEquation_setInitialParameterJacobian(t_VariationalEquation *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setInitialParameterJacobian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setInitialParameterJacobian", args);
        return NULL;
      }

      static PyObject *t_VariationalEquation_setUpInitialState(t_VariationalEquation *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        ::org::hipparchus::ode::ODEState result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.setUpInitialState(a0));
          return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "setUpInitialState", arg);
        return NULL;
      }

      static int t_VariationalEquation_set__initialMainStateJacobian(t_VariationalEquation *self, PyObject *arg, void *data)
      {
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          if (!parseArg(arg, "[[D", &value))
          {
            INT_CALL(self->object.setInitialMainStateJacobian(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "initialMainStateJacobian", arg);
        return -1;
      }

      static int t_VariationalEquation_set__upInitialState(t_VariationalEquation *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::ode::ODEState value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEState::initializeClass, &value))
          {
            INT_CALL(self->object.setUpInitialState(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "upInitialState", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldEphemerisGenerator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldEphemerisGenerator::class$ = NULL;
      jmethodID *PythonFieldEphemerisGenerator::mids$ = NULL;
      bool PythonFieldEphemerisGenerator::live$ = false;

      jclass PythonFieldEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getGeneratedEphemeris_a5b4612f864868f8] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldEphemerisGenerator::PythonFieldEphemerisGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonFieldEphemerisGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonFieldEphemerisGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonFieldEphemerisGenerator::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonFieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldEphemerisGenerator_of_(t_PythonFieldEphemerisGenerator *self, PyObject *args);
      static int t_PythonFieldEphemerisGenerator_init_(t_PythonFieldEphemerisGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldEphemerisGenerator_finalize(t_PythonFieldEphemerisGenerator *self);
      static PyObject *t_PythonFieldEphemerisGenerator_pythonExtension(t_PythonFieldEphemerisGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldEphemerisGenerator_get__self(t_PythonFieldEphemerisGenerator *self, void *data);
      static PyObject *t_PythonFieldEphemerisGenerator_get__parameters_(t_PythonFieldEphemerisGenerator *self, void *data);
      static PyGetSetDef t_PythonFieldEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldEphemerisGenerator, self),
        DECLARE_GET_FIELD(t_PythonFieldEphemerisGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldEphemerisGenerator)[] = {
        { Py_tp_methods, t_PythonFieldEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldEphemerisGenerator_init_ },
        { Py_tp_getset, t_PythonFieldEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldEphemerisGenerator, t_PythonFieldEphemerisGenerator, PythonFieldEphemerisGenerator);
      PyObject *t_PythonFieldEphemerisGenerator::wrap_Object(const PythonFieldEphemerisGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldEphemerisGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldEphemerisGenerator *self = (t_PythonFieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldEphemerisGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldEphemerisGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldEphemerisGenerator *self = (t_PythonFieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldEphemerisGenerator), &PY_TYPE_DEF(PythonFieldEphemerisGenerator), module, "PythonFieldEphemerisGenerator", 1);
      }

      void t_PythonFieldEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "class_", make_descriptor(PythonFieldEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "wrapfn_", make_descriptor(t_PythonFieldEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldEphemerisGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;", (void *) t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldEphemerisGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldEphemerisGenerator::wrap_Object(PythonFieldEphemerisGenerator(((t_PythonFieldEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_of_(t_PythonFieldEphemerisGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldEphemerisGenerator_init_(t_PythonFieldEphemerisGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldEphemerisGenerator object((jobject) NULL);

        INT_CALL(object = PythonFieldEphemerisGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_finalize(t_PythonFieldEphemerisGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_pythonExtension(t_PythonFieldEphemerisGenerator *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldBoundedPropagator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeneratedEphemeris", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldBoundedPropagator::initializeClass, &value))
        {
          throwTypeError("getGeneratedEphemeris", result);
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

      static void JNICALL t_PythonFieldEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldEphemerisGenerator_get__self(t_PythonFieldEphemerisGenerator *self, void *data)
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
      static PyObject *t_PythonFieldEphemerisGenerator_get__parameters_(t_PythonFieldEphemerisGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/estimation/leastsquares/DSSTBatchLSModel.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DSSTPropagatorBuilder::class$ = NULL;
        jmethodID *DSSTPropagatorBuilder::mids$ = NULL;
        bool DSSTPropagatorBuilder::live$ = false;

        jclass DSSTPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DSSTPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b17cc766bb3e3ee2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;DLorg/orekit/propagation/PropagationType;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_1db0b5ff88efb90c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;DLorg/orekit/propagation/PropagationType;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_8788ca485d7d47e4] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
            mids$[mid_buildLeastSquaresModel_28349e2e3cb4a78d] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/DSSTBatchLSModel;");
            mids$[mid_buildPropagator_046b5d73cd1b922e] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_copy_2b55c3a3e2597738] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;");
            mids$[mid_getAllForceModels_2afa36052df4765d] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getIntegratorBuilder_3a8c061b6472f9df] = env->getMethodID(cls, "getIntegratorBuilder", "()Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;");
            mids$[mid_getMass_dff5885c2c873297] = env->getMethodID(cls, "getMass", "()D");
            mids$[mid_getPropagationType_b2e499d9c793fc25] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getStateType_b2e499d9c793fc25] = env->getMethodID(cls, "getStateType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_resetOrbit_e1aab2b52626053e] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_setMass_17db3a65980d3441] = env->getMethodID(cls, "setMass", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSSTPropagatorBuilder::DSSTPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, jdouble a2, const ::org::orekit::propagation::PropagationType & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_b17cc766bb3e3ee2, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        DSSTPropagatorBuilder::DSSTPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, jdouble a2, const ::org::orekit::propagation::PropagationType & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::orekit::attitudes::AttitudeProvider & a5) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1db0b5ff88efb90c, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$)) {}

        void DSSTPropagatorBuilder::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_8788ca485d7d47e4], a0.this$);
        }

        ::org::orekit::estimation::leastsquares::DSSTBatchLSModel DSSTPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::DSSTBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_28349e2e3cb4a78d], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator DSSTPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_046b5d73cd1b922e], a0.this$));
        }

        DSSTPropagatorBuilder DSSTPropagatorBuilder::copy() const
        {
          return DSSTPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_2b55c3a3e2597738]));
        }

        ::java::util::List DSSTPropagatorBuilder::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_2afa36052df4765d]));
        }

        ::org::orekit::propagation::conversion::ODEIntegratorBuilder DSSTPropagatorBuilder::getIntegratorBuilder() const
        {
          return ::org::orekit::propagation::conversion::ODEIntegratorBuilder(env->callObjectMethod(this$, mids$[mid_getIntegratorBuilder_3a8c061b6472f9df]));
        }

        jdouble DSSTPropagatorBuilder::getMass() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMass_dff5885c2c873297]);
        }

        ::org::orekit::propagation::PropagationType DSSTPropagatorBuilder::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_b2e499d9c793fc25]));
        }

        ::org::orekit::propagation::PropagationType DSSTPropagatorBuilder::getStateType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getStateType_b2e499d9c793fc25]));
        }

        void DSSTPropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_e1aab2b52626053e], a0.this$, a1.this$);
        }

        void DSSTPropagatorBuilder::setMass(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMass_17db3a65980d3441], a0);
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
        static PyObject *t_DSSTPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DSSTPropagatorBuilder_init_(t_DSSTPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DSSTPropagatorBuilder_addForceModel(t_DSSTPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_buildLeastSquaresModel(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_buildPropagator(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_copy(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_getAllForceModels(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getIntegratorBuilder(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getMass(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getPropagationType(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getStateType(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_resetOrbit(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_setMass(t_DSSTPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_get__allForceModels(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__integratorBuilder(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__mass(t_DSSTPropagatorBuilder *self, void *data);
        static int t_DSSTPropagatorBuilder_set__mass(t_DSSTPropagatorBuilder *self, PyObject *arg, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__propagationType(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__stateType(t_DSSTPropagatorBuilder *self, void *data);
        static PyGetSetDef t_DSSTPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, allForceModels),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, integratorBuilder),
          DECLARE_GETSET_FIELD(t_DSSTPropagatorBuilder, mass),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, propagationType),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, stateType),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSSTPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_DSSTPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, addForceModel, METH_O),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, copy, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getIntegratorBuilder, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getMass, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getStateType, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, resetOrbit, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, setMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSSTPropagatorBuilder)[] = {
          { Py_tp_methods, t_DSSTPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_DSSTPropagatorBuilder_init_ },
          { Py_tp_getset, t_DSSTPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSSTPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(DSSTPropagatorBuilder, t_DSSTPropagatorBuilder, DSSTPropagatorBuilder);

        void t_DSSTPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DSSTPropagatorBuilder), &PY_TYPE_DEF(DSSTPropagatorBuilder), module, "DSSTPropagatorBuilder", 0);
        }

        void t_DSSTPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "class_", make_descriptor(DSSTPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "wrapfn_", make_descriptor(t_DSSTPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSSTPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSSTPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_DSSTPropagatorBuilder::wrap_Object(DSSTPropagatorBuilder(((t_DSSTPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DSSTPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSSTPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DSSTPropagatorBuilder_init_(t_DSSTPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              DSSTPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkDKK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = DSSTPropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::attitudes::AttitudeProvider a5((jobject) NULL);
              DSSTPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkDKKk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5))
              {
                INT_CALL(object = DSSTPropagatorBuilder(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_DSSTPropagatorBuilder_addForceModel(t_DSSTPropagatorBuilder *self, PyObject *arg)
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

        static PyObject *t_DSSTPropagatorBuilder_buildLeastSquaresModel(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::DSSTBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_DSSTBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_buildPropagator(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_copy(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          DSSTPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_DSSTPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_getAllForceModels(t_DSSTPropagatorBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(DSSTForceModel));
        }

        static PyObject *t_DSSTPropagatorBuilder_getIntegratorBuilder(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getMass(t_DSSTPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMass());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getPropagationType(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getStateType(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_resetOrbit(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::propagation::PropagationType a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            OBJ_CALL(self->object.resetOrbit(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "resetOrbit", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_setMass(t_DSSTPropagatorBuilder *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMass(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMass", arg);
          return NULL;
        }

        static PyObject *t_DSSTPropagatorBuilder_get__allForceModels(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__integratorBuilder(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__mass(t_DSSTPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMass());
          return PyFloat_FromDouble((double) value);
        }
        static int t_DSSTPropagatorBuilder_set__mass(t_DSSTPropagatorBuilder *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMass(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mass", arg);
          return -1;
        }

        static PyObject *t_DSSTPropagatorBuilder_get__propagationType(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__stateType(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadataKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmMetadataKey::class$ = NULL;
            jmethodID *OdmMetadataKey::mids$ = NULL;
            bool OdmMetadataKey::live$ = false;
            OdmMetadataKey *OdmMetadataKey::OBJECT_NAME = NULL;

            jclass OdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_a79ab223731b873c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/OdmMetadata;)Z");
                mids$[mid_valueOf_e3a6e9178c160fa7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;");
                mids$[mid_values_d906dd105bb59ba2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                OBJECT_NAME = new OdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean OdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_a79ab223731b873c], a0.this$, a1.this$, a2.this$);
            }

            OdmMetadataKey OdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return OdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e3a6e9178c160fa7], a0.this$));
            }

            JArray< OdmMetadataKey > OdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< OdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_d906dd105bb59ba2]));
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
            static PyObject *t_OdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadataKey_of_(t_OdmMetadataKey *self, PyObject *args);
            static PyObject *t_OdmMetadataKey_process(t_OdmMetadataKey *self, PyObject *args);
            static PyObject *t_OdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_OdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_OdmMetadataKey_get__parameters_(t_OdmMetadataKey *self, void *data);
            static PyGetSetDef t_OdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_OdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_OdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_OdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_OdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmMetadataKey)[] = {
              { Py_tp_methods, t_OdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(OdmMetadataKey, t_OdmMetadataKey, OdmMetadataKey);
            PyObject *t_OdmMetadataKey::wrap_Object(const OdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_OdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmMetadataKey *self = (t_OdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_OdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_OdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmMetadataKey *self = (t_OdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_OdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmMetadataKey), &PY_TYPE_DEF(OdmMetadataKey), module, "OdmMetadataKey", 0);
            }

            void t_OdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "class_", make_descriptor(OdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "wrapfn_", make_descriptor(t_OdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(OdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "OBJECT_NAME", make_descriptor(t_OdmMetadataKey::wrap_Object(*OdmMetadataKey::OBJECT_NAME)));
            }

            static PyObject *t_OdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_OdmMetadataKey::wrap_Object(OdmMetadataKey(((t_OdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_OdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmMetadataKey_of_(t_OdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_OdmMetadataKey_process(t_OdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::OdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_OdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              OdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::OdmMetadataKey::valueOf(a0));
                return t_OdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_OdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< OdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::OdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_OdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_OdmMetadataKey_get__parameters_(t_OdmMetadataKey *self, void *data)
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
#include "org/orekit/attitudes/TabulatedLofOffset.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TabulatedLofOffset::class$ = NULL;
      jmethodID *TabulatedLofOffset::mids$ = NULL;
      bool TabulatedLofOffset::live$ = false;

      jclass TabulatedLofOffset::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TabulatedLofOffset");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_24c7aef3047138c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_b38f64f0bbbd8f11] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTable_2afa36052df4765d] = env->getMethodID(cls, "getTable", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TabulatedLofOffset::TabulatedLofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::java::util::List & a2, jint a3, const ::org::orekit::utils::AngularDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_24c7aef3047138c4, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

      TabulatedLofOffset::TabulatedLofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::java::util::List & a2, jint a3, const ::org::orekit::utils::AngularDerivativesFilter & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::orekit::time::AbsoluteDate & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b38f64f0bbbd8f11, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5.this$, a6.this$)) {}

      ::org::orekit::attitudes::FieldAttitude TabulatedLofOffset::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude TabulatedLofOffset::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate TabulatedLofOffset::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate TabulatedLofOffset::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
      }

      ::java::util::List TabulatedLofOffset::getTable() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTable_2afa36052df4765d]));
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
      static PyObject *t_TabulatedLofOffset_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TabulatedLofOffset_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TabulatedLofOffset_init_(t_TabulatedLofOffset *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TabulatedLofOffset_getAttitude(t_TabulatedLofOffset *self, PyObject *args);
      static PyObject *t_TabulatedLofOffset_getMaxDate(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_getMinDate(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_getTable(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_get__maxDate(t_TabulatedLofOffset *self, void *data);
      static PyObject *t_TabulatedLofOffset_get__minDate(t_TabulatedLofOffset *self, void *data);
      static PyObject *t_TabulatedLofOffset_get__table(t_TabulatedLofOffset *self, void *data);
      static PyGetSetDef t_TabulatedLofOffset__fields_[] = {
        DECLARE_GET_FIELD(t_TabulatedLofOffset, maxDate),
        DECLARE_GET_FIELD(t_TabulatedLofOffset, minDate),
        DECLARE_GET_FIELD(t_TabulatedLofOffset, table),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TabulatedLofOffset__methods_[] = {
        DECLARE_METHOD(t_TabulatedLofOffset, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedLofOffset, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedLofOffset, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getMinDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getTable, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TabulatedLofOffset)[] = {
        { Py_tp_methods, t_TabulatedLofOffset__methods_ },
        { Py_tp_init, (void *) t_TabulatedLofOffset_init_ },
        { Py_tp_getset, t_TabulatedLofOffset__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TabulatedLofOffset)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TabulatedLofOffset, t_TabulatedLofOffset, TabulatedLofOffset);

      void t_TabulatedLofOffset::install(PyObject *module)
      {
        installType(&PY_TYPE(TabulatedLofOffset), &PY_TYPE_DEF(TabulatedLofOffset), module, "TabulatedLofOffset", 0);
      }

      void t_TabulatedLofOffset::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "class_", make_descriptor(TabulatedLofOffset::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "wrapfn_", make_descriptor(t_TabulatedLofOffset::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TabulatedLofOffset_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TabulatedLofOffset::initializeClass, 1)))
          return NULL;
        return t_TabulatedLofOffset::wrap_Object(TabulatedLofOffset(((t_TabulatedLofOffset *) arg)->object.this$));
      }
      static PyObject *t_TabulatedLofOffset_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TabulatedLofOffset::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TabulatedLofOffset_init_(t_TabulatedLofOffset *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::utils::AngularDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            TabulatedLofOffset object((jobject) NULL);

            if (!parseArgs(args, "kkKIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TabulatedLofOffset(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::utils::AngularDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
            TabulatedLofOffset object((jobject) NULL);

            if (!parseArgs(args, "kkKIKkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a5, &a6))
            {
              INT_CALL(object = TabulatedLofOffset(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_TabulatedLofOffset_getAttitude(t_TabulatedLofOffset *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_TabulatedLofOffset_getMaxDate(t_TabulatedLofOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_getMinDate(t_TabulatedLofOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_getTable(t_TabulatedLofOffset *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getTable());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_get__maxDate(t_TabulatedLofOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedLofOffset_get__minDate(t_TabulatedLofOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedLofOffset_get__table(t_TabulatedLofOffset *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getTable());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunction$Parametric::class$ = NULL;
        jmethodID *PolynomialFunction$Parametric::mids$ = NULL;
        bool PolynomialFunction$Parametric::live$ = false;

        jclass PolynomialFunction$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_125ce48de7dbfde5] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_19285de97bbc7eea] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunction$Parametric::PolynomialFunction$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        JArray< jdouble > PolynomialFunction$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_125ce48de7dbfde5], a0, a1.this$));
        }

        jdouble PolynomialFunction$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
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
      namespace polynomials {
        static PyObject *t_PolynomialFunction$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunction$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunction$Parametric_init_(t_PolynomialFunction$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunction$Parametric_gradient(t_PolynomialFunction$Parametric *self, PyObject *args);
        static PyObject *t_PolynomialFunction$Parametric_value(t_PolynomialFunction$Parametric *self, PyObject *args);

        static PyMethodDef t_PolynomialFunction$Parametric__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunction$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunction$Parametric)[] = {
          { Py_tp_methods, t_PolynomialFunction$Parametric__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunction$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunction$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunction$Parametric, t_PolynomialFunction$Parametric, PolynomialFunction$Parametric);

        void t_PolynomialFunction$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunction$Parametric), &PY_TYPE_DEF(PolynomialFunction$Parametric), module, "PolynomialFunction$Parametric", 0);
        }

        void t_PolynomialFunction$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "class_", make_descriptor(PolynomialFunction$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "wrapfn_", make_descriptor(t_PolynomialFunction$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunction$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunction$Parametric::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunction$Parametric::wrap_Object(PolynomialFunction$Parametric(((t_PolynomialFunction$Parametric *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunction$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunction$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunction$Parametric_init_(t_PolynomialFunction$Parametric *self, PyObject *args, PyObject *kwds)
        {
          PolynomialFunction$Parametric object((jobject) NULL);

          INT_CALL(object = PolynomialFunction$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_PolynomialFunction$Parametric_gradient(t_PolynomialFunction$Parametric *self, PyObject *args)
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

        static PyObject *t_PolynomialFunction$Parametric_value(t_PolynomialFunction$Parametric *self, PyObject *args)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "org/orekit/gnss/metric/messages/common/PhaseBias.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06Data::class$ = NULL;
              jmethodID *SsrIgm06Data::mids$ = NULL;
              bool SsrIgm06Data::live$ = false;

              jclass SsrIgm06Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addPhaseBias_037e847c25c69ec3] = env->getMethodID(cls, "addPhaseBias", "(Lorg/orekit/gnss/metric/messages/common/PhaseBias;)V");
                  mids$[mid_getNumberOfBiasesProcessed_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfBiasesProcessed", "()I");
                  mids$[mid_getPhaseBias_b55c654d358d1991] = env->getMethodID(cls, "getPhaseBias", "(I)Lorg/orekit/gnss/metric/messages/common/PhaseBias;");
                  mids$[mid_getPhaseBiases_6f5a75ccd8c04465] = env->getMethodID(cls, "getPhaseBiases", "()Ljava/util/Map;");
                  mids$[mid_getYawAngle_dff5885c2c873297] = env->getMethodID(cls, "getYawAngle", "()D");
                  mids$[mid_getYawRate_dff5885c2c873297] = env->getMethodID(cls, "getYawRate", "()D");
                  mids$[mid_setNumberOfBiasesProcessed_99803b0791f320ff] = env->getMethodID(cls, "setNumberOfBiasesProcessed", "(I)V");
                  mids$[mid_setYawAngle_17db3a65980d3441] = env->getMethodID(cls, "setYawAngle", "(D)V");
                  mids$[mid_setYawRate_17db3a65980d3441] = env->getMethodID(cls, "setYawRate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06Data::SsrIgm06Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              void SsrIgm06Data::addPhaseBias(const ::org::orekit::gnss::metric::messages::common::PhaseBias & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addPhaseBias_037e847c25c69ec3], a0.this$);
              }

              jint SsrIgm06Data::getNumberOfBiasesProcessed() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfBiasesProcessed_570ce0828f81a2c1]);
              }

              ::org::orekit::gnss::metric::messages::common::PhaseBias SsrIgm06Data::getPhaseBias(jint a0) const
              {
                return ::org::orekit::gnss::metric::messages::common::PhaseBias(env->callObjectMethod(this$, mids$[mid_getPhaseBias_b55c654d358d1991], a0));
              }

              ::java::util::Map SsrIgm06Data::getPhaseBiases() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getPhaseBiases_6f5a75ccd8c04465]));
              }

              jdouble SsrIgm06Data::getYawAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getYawAngle_dff5885c2c873297]);
              }

              jdouble SsrIgm06Data::getYawRate() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getYawRate_dff5885c2c873297]);
              }

              void SsrIgm06Data::setNumberOfBiasesProcessed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfBiasesProcessed_99803b0791f320ff], a0);
              }

              void SsrIgm06Data::setYawAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setYawAngle_17db3a65980d3441], a0);
              }

              void SsrIgm06Data::setYawRate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setYawRate_17db3a65980d3441], a0);
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
              static PyObject *t_SsrIgm06Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm06Data_init_(t_SsrIgm06Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06Data_addPhaseBias(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_getNumberOfBiasesProcessed(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getPhaseBias(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_getPhaseBiases(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getYawAngle(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getYawRate(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_setNumberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_setYawAngle(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_setYawRate(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_get__numberOfBiasesProcessed(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__numberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm06Data_get__phaseBiases(t_SsrIgm06Data *self, void *data);
              static PyObject *t_SsrIgm06Data_get__yawAngle(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__yawAngle(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm06Data_get__yawRate(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__yawRate(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm06Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, numberOfBiasesProcessed),
                DECLARE_GET_FIELD(t_SsrIgm06Data, phaseBiases),
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, yawAngle),
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, yawRate),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Data, addPhaseBias, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, getNumberOfBiasesProcessed, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getPhaseBias, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, getPhaseBiases, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getYawAngle, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getYawRate, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, setNumberOfBiasesProcessed, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, setYawAngle, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, setYawRate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06Data)[] = {
                { Py_tp_methods, t_SsrIgm06Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06Data_init_ },
                { Py_tp_getset, t_SsrIgm06Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm06Data, t_SsrIgm06Data, SsrIgm06Data);

              void t_SsrIgm06Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06Data), &PY_TYPE_DEF(SsrIgm06Data), module, "SsrIgm06Data", 0);
              }

              void t_SsrIgm06Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "class_", make_descriptor(SsrIgm06Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "wrapfn_", make_descriptor(t_SsrIgm06Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06Data::wrap_Object(SsrIgm06Data(((t_SsrIgm06Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm06Data_init_(t_SsrIgm06Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm06Data object((jobject) NULL);

                INT_CALL(object = SsrIgm06Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm06Data_addPhaseBias(t_SsrIgm06Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::PhaseBias a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::PhaseBias::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addPhaseBias(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addPhaseBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_getNumberOfBiasesProcessed(t_SsrIgm06Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm06Data_getPhaseBias(t_SsrIgm06Data *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::common::PhaseBias result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getPhaseBias(a0));
                  return ::org::orekit::gnss::metric::messages::common::t_PhaseBias::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getPhaseBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_getPhaseBiases(t_SsrIgm06Data *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhaseBiases());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::org::orekit::gnss::metric::messages::common::PY_TYPE(PhaseBias));
              }

              static PyObject *t_SsrIgm06Data_getYawAngle(t_SsrIgm06Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getYawAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm06Data_getYawRate(t_SsrIgm06Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getYawRate());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm06Data_setNumberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfBiasesProcessed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfBiasesProcessed", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_setYawAngle(t_SsrIgm06Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setYawAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setYawAngle", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_setYawRate(t_SsrIgm06Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setYawRate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setYawRate", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_get__numberOfBiasesProcessed(t_SsrIgm06Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm06Data_set__numberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfBiasesProcessed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfBiasesProcessed", arg);
                return -1;
              }

              static PyObject *t_SsrIgm06Data_get__phaseBiases(t_SsrIgm06Data *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhaseBiases());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_SsrIgm06Data_get__yawAngle(t_SsrIgm06Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getYawAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm06Data_set__yawAngle(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setYawAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "yawAngle", arg);
                return -1;
              }

              static PyObject *t_SsrIgm06Data_get__yawRate(t_SsrIgm06Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getYawRate());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm06Data_set__yawRate(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setYawRate(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "yawRate", arg);
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
#include "org/hipparchus/random/HaltonSequenceGenerator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
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
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_fa9f4aaeaae33a98] = env->getMethodID(cls, "<init>", "(I[I[I)V");
          mids$[mid_getNextIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getNextIndex", "()I");
          mids$[mid_nextVector_60c7040667a7dc5c] = env->getMethodID(cls, "nextVector", "()[D");
          mids$[mid_skipTo_abe82da4f5c7c981] = env->getMethodID(cls, "skipTo", "(I)[D");
          mids$[mid_scramble_0e188a513e3e1b15] = env->getMethodID(cls, "scramble", "(IIII)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HaltonSequenceGenerator::HaltonSequenceGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      HaltonSequenceGenerator::HaltonSequenceGenerator(jint a0, const JArray< jint > & a1, const JArray< jint > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa9f4aaeaae33a98, a0, a1.this$, a2.this$)) {}

      jint HaltonSequenceGenerator::getNextIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getNextIndex_570ce0828f81a2c1]);
      }

      JArray< jdouble > HaltonSequenceGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_60c7040667a7dc5c]));
      }

      JArray< jdouble > HaltonSequenceGenerator::skipTo(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_skipTo_abe82da4f5c7c981], a0));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/InterSatDirectViewDetector.h"
#include "org/orekit/propagation/events/InterSatDirectViewDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *InterSatDirectViewDetector::class$ = NULL;
        jmethodID *InterSatDirectViewDetector::mids$ = NULL;
        bool InterSatDirectViewDetector::live$ = false;

        jclass InterSatDirectViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/InterSatDirectViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9bc1ae8a0ce1e629] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/utils/PVCoordinatesProvider;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getCentralBody_000d48aad6c74b0a] = env->getMethodID(cls, "getCentralBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getSecondary_903aca6bb4523e29] = env->getMethodID(cls, "getSecondary", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getSkimmingAltitude_dff5885c2c873297] = env->getMethodID(cls, "getSkimmingAltitude", "()D");
            mids$[mid_withSkimmingAltitude_19622359ac8c23f3] = env->getMethodID(cls, "withSkimmingAltitude", "(D)Lorg/orekit/propagation/events/InterSatDirectViewDetector;");
            mids$[mid_create_17a48175344ae6ef] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/InterSatDirectViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSatDirectViewDetector::InterSatDirectViewDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_9bc1ae8a0ce1e629, a0.this$, a1.this$)) {}

        jdouble InterSatDirectViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid InterSatDirectViewDetector::getCentralBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getCentralBody_000d48aad6c74b0a]));
        }

        ::org::orekit::utils::PVCoordinatesProvider InterSatDirectViewDetector::getSecondary() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondary_903aca6bb4523e29]));
        }

        jdouble InterSatDirectViewDetector::getSkimmingAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkimmingAltitude_dff5885c2c873297]);
        }

        InterSatDirectViewDetector InterSatDirectViewDetector::withSkimmingAltitude(jdouble a0) const
        {
          return InterSatDirectViewDetector(env->callObjectMethod(this$, mids$[mid_withSkimmingAltitude_19622359ac8c23f3], a0));
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
        static PyObject *t_InterSatDirectViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_of_(t_InterSatDirectViewDetector *self, PyObject *args);
        static int t_InterSatDirectViewDetector_init_(t_InterSatDirectViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSatDirectViewDetector_g(t_InterSatDirectViewDetector *self, PyObject *args);
        static PyObject *t_InterSatDirectViewDetector_getCentralBody(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_getSecondary(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_getSkimmingAltitude(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_withSkimmingAltitude(t_InterSatDirectViewDetector *self, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_get__centralBody(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__secondary(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__skimmingAltitude(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__parameters_(t_InterSatDirectViewDetector *self, void *data);
        static PyGetSetDef t_InterSatDirectViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, centralBody),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, secondary),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, skimmingAltitude),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InterSatDirectViewDetector__methods_[] = {
          DECLARE_METHOD(t_InterSatDirectViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getCentralBody, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getSecondary, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getSkimmingAltitude, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, withSkimmingAltitude, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSatDirectViewDetector)[] = {
          { Py_tp_methods, t_InterSatDirectViewDetector__methods_ },
          { Py_tp_init, (void *) t_InterSatDirectViewDetector_init_ },
          { Py_tp_getset, t_InterSatDirectViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSatDirectViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(InterSatDirectViewDetector, t_InterSatDirectViewDetector, InterSatDirectViewDetector);
        PyObject *t_InterSatDirectViewDetector::wrap_Object(const InterSatDirectViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatDirectViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatDirectViewDetector *self = (t_InterSatDirectViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InterSatDirectViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatDirectViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatDirectViewDetector *self = (t_InterSatDirectViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InterSatDirectViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSatDirectViewDetector), &PY_TYPE_DEF(InterSatDirectViewDetector), module, "InterSatDirectViewDetector", 0);
        }

        void t_InterSatDirectViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "class_", make_descriptor(InterSatDirectViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "wrapfn_", make_descriptor(t_InterSatDirectViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterSatDirectViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSatDirectViewDetector::initializeClass, 1)))
            return NULL;
          return t_InterSatDirectViewDetector::wrap_Object(InterSatDirectViewDetector(((t_InterSatDirectViewDetector *) arg)->object.this$));
        }
        static PyObject *t_InterSatDirectViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSatDirectViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InterSatDirectViewDetector_of_(t_InterSatDirectViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_InterSatDirectViewDetector_init_(t_InterSatDirectViewDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          InterSatDirectViewDetector object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1))
          {
            INT_CALL(object = InterSatDirectViewDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(InterSatDirectViewDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSatDirectViewDetector_g(t_InterSatDirectViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(InterSatDirectViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_InterSatDirectViewDetector_getCentralBody(t_InterSatDirectViewDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getCentralBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_InterSatDirectViewDetector_getSecondary(t_InterSatDirectViewDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondary());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_InterSatDirectViewDetector_getSkimmingAltitude(t_InterSatDirectViewDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkimmingAltitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_InterSatDirectViewDetector_withSkimmingAltitude(t_InterSatDirectViewDetector *self, PyObject *arg)
        {
          jdouble a0;
          InterSatDirectViewDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withSkimmingAltitude(a0));
            return t_InterSatDirectViewDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSkimmingAltitude", arg);
          return NULL;
        }
        static PyObject *t_InterSatDirectViewDetector_get__parameters_(t_InterSatDirectViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_InterSatDirectViewDetector_get__centralBody(t_InterSatDirectViewDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getCentralBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_InterSatDirectViewDetector_get__secondary(t_InterSatDirectViewDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondary());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_InterSatDirectViewDetector_get__skimmingAltitude(t_InterSatDirectViewDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkimmingAltitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/cr3bp/CR3BPForceModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPForceModel::class$ = NULL;
          jmethodID *CR3BPForceModel::mids$ = NULL;
          bool CR3BPForceModel::live$ = false;
          ::java::lang::String *CR3BPForceModel::MASS_RATIO_SUFFIX = NULL;

          jclass CR3BPForceModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPForceModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ec35a1651f7b6401] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;)V");
              mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPotential_643a8e19bdae2e10] = env->getMethodID(cls, "getPotential", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
              mids$[mid_getPotential_1dc99629b4b23597] = env->getMethodID(cls, "getPotential", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MASS_RATIO_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "MASS_RATIO_SUFFIX", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CR3BPForceModel::CR3BPForceModel(const ::org::orekit::bodies::CR3BPSystem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ec35a1651f7b6401, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D CR3BPForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D CR3BPForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
          }

          jboolean CR3BPForceModel::dependsOnPositionOnly() const
          {
            return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
          }

          ::java::util::List CR3BPForceModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure CR3BPForceModel::getPotential(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPotential_643a8e19bdae2e10], a0.this$));
          }

          ::org::hipparchus::analysis::differentiation::DerivativeStructure CR3BPForceModel::getPotential(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPotential_1dc99629b4b23597], a0.this$));
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
      namespace numerical {
        namespace cr3bp {
          static PyObject *t_CR3BPForceModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPForceModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CR3BPForceModel_init_(t_CR3BPForceModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CR3BPForceModel_acceleration(t_CR3BPForceModel *self, PyObject *args);
          static PyObject *t_CR3BPForceModel_dependsOnPositionOnly(t_CR3BPForceModel *self);
          static PyObject *t_CR3BPForceModel_getParametersDrivers(t_CR3BPForceModel *self);
          static PyObject *t_CR3BPForceModel_getPotential(t_CR3BPForceModel *self, PyObject *args);
          static PyObject *t_CR3BPForceModel_get__parametersDrivers(t_CR3BPForceModel *self, void *data);
          static PyGetSetDef t_CR3BPForceModel__fields_[] = {
            DECLARE_GET_FIELD(t_CR3BPForceModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPForceModel__methods_[] = {
            DECLARE_METHOD(t_CR3BPForceModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPForceModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPForceModel, acceleration, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPForceModel, dependsOnPositionOnly, METH_NOARGS),
            DECLARE_METHOD(t_CR3BPForceModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_CR3BPForceModel, getPotential, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPForceModel)[] = {
            { Py_tp_methods, t_CR3BPForceModel__methods_ },
            { Py_tp_init, (void *) t_CR3BPForceModel_init_ },
            { Py_tp_getset, t_CR3BPForceModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPForceModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CR3BPForceModel, t_CR3BPForceModel, CR3BPForceModel);

          void t_CR3BPForceModel::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPForceModel), &PY_TYPE_DEF(CR3BPForceModel), module, "CR3BPForceModel", 0);
          }

          void t_CR3BPForceModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "class_", make_descriptor(CR3BPForceModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "wrapfn_", make_descriptor(t_CR3BPForceModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(CR3BPForceModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "MASS_RATIO_SUFFIX", make_descriptor(j2p(*CR3BPForceModel::MASS_RATIO_SUFFIX)));
          }

          static PyObject *t_CR3BPForceModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPForceModel::initializeClass, 1)))
              return NULL;
            return t_CR3BPForceModel::wrap_Object(CR3BPForceModel(((t_CR3BPForceModel *) arg)->object.this$));
          }
          static PyObject *t_CR3BPForceModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPForceModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CR3BPForceModel_init_(t_CR3BPForceModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            CR3BPForceModel object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::CR3BPSystem::initializeClass, &a0))
            {
              INT_CALL(object = CR3BPForceModel(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CR3BPForceModel_acceleration(t_CR3BPForceModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
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
            }

            PyErr_SetArgsError((PyObject *) self, "acceleration", args);
            return NULL;
          }

          static PyObject *t_CR3BPForceModel_dependsOnPositionOnly(t_CR3BPForceModel *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.dependsOnPositionOnly());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_CR3BPForceModel_getParametersDrivers(t_CR3BPForceModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_CR3BPForceModel_getPotential(t_CR3BPForceModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                {
                  OBJ_CALL(result = self->object.getPotential(a0));
                  return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getPotential(a0));
                  return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getPotential", args);
            return NULL;
          }

          static PyObject *t_CR3BPForceModel_get__parametersDrivers(t_CR3BPForceModel *self, void *data)
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
#include "org/orekit/propagation/conversion/GillFieldIntegratorBuilder.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *GillFieldIntegratorBuilder::class$ = NULL;
        jmethodID *GillFieldIntegratorBuilder::mids$ = NULL;
        bool GillFieldIntegratorBuilder::live$ = false;

        jclass GillFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/GillFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_072c8635f2164db9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillFieldIntegratorBuilder::GillFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        GillFieldIntegratorBuilder::GillFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_072c8635f2164db9, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator GillFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_GillFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegratorBuilder_of_(t_GillFieldIntegratorBuilder *self, PyObject *args);
        static int t_GillFieldIntegratorBuilder_init_(t_GillFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillFieldIntegratorBuilder_buildIntegrator(t_GillFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_GillFieldIntegratorBuilder_get__parameters_(t_GillFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_GillFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_GillFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GillFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_GillFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_GillFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_GillFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(GillFieldIntegratorBuilder, t_GillFieldIntegratorBuilder, GillFieldIntegratorBuilder);
        PyObject *t_GillFieldIntegratorBuilder::wrap_Object(const GillFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegratorBuilder *self = (t_GillFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GillFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegratorBuilder *self = (t_GillFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GillFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GillFieldIntegratorBuilder), &PY_TYPE_DEF(GillFieldIntegratorBuilder), module, "GillFieldIntegratorBuilder", 0);
        }

        void t_GillFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "class_", make_descriptor(GillFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_GillFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_GillFieldIntegratorBuilder::wrap_Object(GillFieldIntegratorBuilder(((t_GillFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GillFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GillFieldIntegratorBuilder_of_(t_GillFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GillFieldIntegratorBuilder_init_(t_GillFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              GillFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = GillFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              GillFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = GillFieldIntegratorBuilder(a0));
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

        static PyObject *t_GillFieldIntegratorBuilder_buildIntegrator(t_GillFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(GillFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_GillFieldIntegratorBuilder_get__parameters_(t_GillFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/StableRandomGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *StableRandomGenerator::class$ = NULL;
      jmethodID *StableRandomGenerator::mids$ = NULL;
      bool StableRandomGenerator::live$ = false;

      jclass StableRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/StableRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0bf56ca058dcc616] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;DD)V");
          mids$[mid_nextNormalizedDouble_dff5885c2c873297] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StableRandomGenerator::StableRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0bf56ca058dcc616, a0.this$, a1, a2)) {}

      jdouble StableRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_dff5885c2c873297]);
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
      static PyObject *t_StableRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StableRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_StableRandomGenerator_init_(t_StableRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StableRandomGenerator_nextNormalizedDouble(t_StableRandomGenerator *self);

      static PyMethodDef t_StableRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_StableRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StableRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StableRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StableRandomGenerator)[] = {
        { Py_tp_methods, t_StableRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_StableRandomGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StableRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StableRandomGenerator, t_StableRandomGenerator, StableRandomGenerator);

      void t_StableRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(StableRandomGenerator), &PY_TYPE_DEF(StableRandomGenerator), module, "StableRandomGenerator", 0);
      }

      void t_StableRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StableRandomGenerator), "class_", make_descriptor(StableRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StableRandomGenerator), "wrapfn_", make_descriptor(t_StableRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StableRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StableRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StableRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_StableRandomGenerator::wrap_Object(StableRandomGenerator(((t_StableRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_StableRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StableRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_StableRandomGenerator_init_(t_StableRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        StableRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "kDD", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = StableRandomGenerator(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_StableRandomGenerator_nextNormalizedDouble(t_StableRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextNormalizedDouble());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
