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
            mids$[mid_estimateRegressandVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "estimateRegressandVariance", "()D");
            mids$[mid_estimateRegressionParameters_7cdc325af0834901] = env->getMethodID(cls, "estimateRegressionParameters", "()[D");
            mids$[mid_estimateRegressionParametersStandardErrors_7cdc325af0834901] = env->getMethodID(cls, "estimateRegressionParametersStandardErrors", "()[D");
            mids$[mid_estimateRegressionParametersVariance_43de1192439efa92] = env->getMethodID(cls, "estimateRegressionParametersVariance", "()[[D");
            mids$[mid_estimateResiduals_7cdc325af0834901] = env->getMethodID(cls, "estimateResiduals", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble MultipleLinearRegression::estimateRegressandVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressandVariance_456d9a2f64d6b28d]);
        }

        JArray< jdouble > MultipleLinearRegression::estimateRegressionParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParameters_7cdc325af0834901]));
        }

        JArray< jdouble > MultipleLinearRegression::estimateRegressionParametersStandardErrors() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersStandardErrors_7cdc325af0834901]));
        }

        JArray< JArray< jdouble > > MultipleLinearRegression::estimateRegressionParametersVariance() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersVariance_43de1192439efa92]));
        }

        JArray< jdouble > MultipleLinearRegression::estimateResiduals() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateResiduals_7cdc325af0834901]));
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
#include "org/orekit/forces/empirical/TimeSpanParametricAcceleration.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *TimeSpanParametricAcceleration::class$ = NULL;
        jmethodID *TimeSpanParametricAcceleration::mids$ = NULL;
        bool TimeSpanParametricAcceleration::live$ = false;
        ::java::lang::String *TimeSpanParametricAcceleration::DATE_AFTER = NULL;
        ::java::lang::String *TimeSpanParametricAcceleration::DATE_BEFORE = NULL;

        jclass TimeSpanParametricAcceleration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/TimeSpanParametricAcceleration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fe8be0364ca74ee2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZLorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_init$_0de0371c7296ad8d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_addAccelerationModelValidAfter_91f97c45321ef11b] = env->getMethodID(cls, "addAccelerationModelValidAfter", "(Lorg/orekit/forces/empirical/AccelerationModel;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addAccelerationModelValidBefore_91f97c45321ef11b] = env->getMethodID(cls, "addAccelerationModelValidBefore", "(Lorg/orekit/forces/empirical/AccelerationModel;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_extractAccelerationModelRange_df7496d2771de2ea] = env->getMethodID(cls, "extractAccelerationModelRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_extractParameters_d7d552e275320f67] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_extractParameters_8b177eb25e4eb468] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAccelerationModel_3c4e1c0fbc8f4df5] = env->getMethodID(cls, "getAccelerationModel", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/empirical/AccelerationModel;");
            mids$[mid_getAccelerationModelSpan_e815c41e031d3908] = env->getMethodID(cls, "getAccelerationModelSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFirstSpan_39a1e35b17737f60] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
            DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TimeSpanParametricAcceleration::TimeSpanParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jboolean a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fe8be0364ca74ee2, a0.this$, a1, a2.this$)) {}

        TimeSpanParametricAcceleration::TimeSpanParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0de0371c7296ad8d, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeSpanParametricAcceleration::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeSpanParametricAcceleration::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        void TimeSpanParametricAcceleration::addAccelerationModelValidAfter(const ::org::orekit::forces::empirical::AccelerationModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAccelerationModelValidAfter_91f97c45321ef11b], a0.this$, a1.this$);
        }

        void TimeSpanParametricAcceleration::addAccelerationModelValidBefore(const ::org::orekit::forces::empirical::AccelerationModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAccelerationModelValidBefore_91f97c45321ef11b], a0.this$, a1.this$);
        }

        jboolean TimeSpanParametricAcceleration::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        ::org::orekit::utils::TimeSpanMap TimeSpanParametricAcceleration::extractAccelerationModelRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractAccelerationModelRange_df7496d2771de2ea], a0.this$, a1.this$));
        }

        JArray< jdouble > TimeSpanParametricAcceleration::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_d7d552e275320f67], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanParametricAcceleration::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_8b177eb25e4eb468], a0.this$, a1.this$));
        }

        ::org::orekit::forces::empirical::AccelerationModel TimeSpanParametricAcceleration::getAccelerationModel(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::forces::empirical::AccelerationModel(env->callObjectMethod(this$, mids$[mid_getAccelerationModel_3c4e1c0fbc8f4df5], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanParametricAcceleration::getAccelerationModelSpan(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getAccelerationModelSpan_e815c41e031d3908], a0.this$));
        }

        ::java::util::stream::Stream TimeSpanParametricAcceleration::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
        }

        ::java::util::stream::Stream TimeSpanParametricAcceleration::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanParametricAcceleration::getFirstSpan() const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_39a1e35b17737f60]));
        }

        ::java::util::List TimeSpanParametricAcceleration::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        void TimeSpanParametricAcceleration::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
      namespace empirical {
        static PyObject *t_TimeSpanParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TimeSpanParametricAcceleration_init_(t_TimeSpanParametricAcceleration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TimeSpanParametricAcceleration_acceleration(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidAfter(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidBefore(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_dependsOnPositionOnly(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_extractAccelerationModelRange(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_extractParameters(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModel(t_TimeSpanParametricAcceleration *self, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModelSpan(t_TimeSpanParametricAcceleration *self, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_getEventDetectors(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_getFieldEventDetectors(t_TimeSpanParametricAcceleration *self, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_getFirstSpan(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_getParametersDrivers(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_init(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_get__eventDetectors(t_TimeSpanParametricAcceleration *self, void *data);
        static PyObject *t_TimeSpanParametricAcceleration_get__firstSpan(t_TimeSpanParametricAcceleration *self, void *data);
        static PyObject *t_TimeSpanParametricAcceleration_get__parametersDrivers(t_TimeSpanParametricAcceleration *self, void *data);
        static PyGetSetDef t_TimeSpanParametricAcceleration__fields_[] = {
          DECLARE_GET_FIELD(t_TimeSpanParametricAcceleration, eventDetectors),
          DECLARE_GET_FIELD(t_TimeSpanParametricAcceleration, firstSpan),
          DECLARE_GET_FIELD(t_TimeSpanParametricAcceleration, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeSpanParametricAcceleration__methods_[] = {
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, addAccelerationModelValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, addAccelerationModelValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, extractAccelerationModelRange, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, extractParameters, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getAccelerationModel, METH_O),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getAccelerationModelSpan, METH_O),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getFirstSpan, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeSpanParametricAcceleration)[] = {
          { Py_tp_methods, t_TimeSpanParametricAcceleration__methods_ },
          { Py_tp_init, (void *) t_TimeSpanParametricAcceleration_init_ },
          { Py_tp_getset, t_TimeSpanParametricAcceleration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeSpanParametricAcceleration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeSpanParametricAcceleration, t_TimeSpanParametricAcceleration, TimeSpanParametricAcceleration);

        void t_TimeSpanParametricAcceleration::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeSpanParametricAcceleration), &PY_TYPE_DEF(TimeSpanParametricAcceleration), module, "TimeSpanParametricAcceleration", 0);
        }

        void t_TimeSpanParametricAcceleration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "class_", make_descriptor(TimeSpanParametricAcceleration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "wrapfn_", make_descriptor(t_TimeSpanParametricAcceleration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "boxfn_", make_descriptor(boxObject));
          env->getClass(TimeSpanParametricAcceleration::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "DATE_AFTER", make_descriptor(j2p(*TimeSpanParametricAcceleration::DATE_AFTER)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "DATE_BEFORE", make_descriptor(j2p(*TimeSpanParametricAcceleration::DATE_BEFORE)));
        }

        static PyObject *t_TimeSpanParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeSpanParametricAcceleration::initializeClass, 1)))
            return NULL;
          return t_TimeSpanParametricAcceleration::wrap_Object(TimeSpanParametricAcceleration(((t_TimeSpanParametricAcceleration *) arg)->object.this$));
        }
        static PyObject *t_TimeSpanParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeSpanParametricAcceleration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TimeSpanParametricAcceleration_init_(t_TimeSpanParametricAcceleration *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              jboolean a1;
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              TimeSpanParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kZk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = TimeSpanParametricAcceleration(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              TimeSpanParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = TimeSpanParametricAcceleration(a0, a1, a2));
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

        static PyObject *t_TimeSpanParametricAcceleration_acceleration(t_TimeSpanParametricAcceleration *self, PyObject *args)
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

        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidAfter(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          ::org::orekit::forces::empirical::AccelerationModel a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::empirical::AccelerationModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAccelerationModelValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAccelerationModelValidAfter", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidBefore(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          ::org::orekit::forces::empirical::AccelerationModel a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::empirical::AccelerationModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAccelerationModelValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAccelerationModelValidBefore", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_dependsOnPositionOnly(t_TimeSpanParametricAcceleration *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_TimeSpanParametricAcceleration_extractAccelerationModelRange(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.extractAccelerationModelRange(a0, a1));
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::orekit::forces::empirical::PY_TYPE(AccelerationModel));
          }

          PyErr_SetArgsError((PyObject *) self, "extractAccelerationModelRange", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_extractParameters(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return result.wrap();
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModel(t_TimeSpanParametricAcceleration *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::forces::empirical::AccelerationModel result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAccelerationModel(a0));
            return ::org::orekit::forces::empirical::t_AccelerationModel::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getAccelerationModel", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModelSpan(t_TimeSpanParametricAcceleration *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAccelerationModelSpan(a0));
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::empirical::PY_TYPE(AccelerationModel));
          }

          PyErr_SetArgsError((PyObject *) self, "getAccelerationModelSpan", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_getEventDetectors(t_TimeSpanParametricAcceleration *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_TimeSpanParametricAcceleration_getFieldEventDetectors(t_TimeSpanParametricAcceleration *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_getFirstSpan(t_TimeSpanParametricAcceleration *self)
        {
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::empirical::PY_TYPE(AccelerationModel));
        }

        static PyObject *t_TimeSpanParametricAcceleration_getParametersDrivers(t_TimeSpanParametricAcceleration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_TimeSpanParametricAcceleration_init(t_TimeSpanParametricAcceleration *self, PyObject *args)
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

        static PyObject *t_TimeSpanParametricAcceleration_get__eventDetectors(t_TimeSpanParametricAcceleration *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_TimeSpanParametricAcceleration_get__firstSpan(t_TimeSpanParametricAcceleration *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
        }

        static PyObject *t_TimeSpanParametricAcceleration_get__parametersDrivers(t_TimeSpanParametricAcceleration *self, void *data)
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
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanModel.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
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
            mids$[mid_finalizeEstimation_7cf22bbe05cd26dc] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_7ae3461a92a43152] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getCorrectedMeasurement_164e77faf6b1d416] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_aaa854c403487cf3] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_f2f64475e4580546] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_3d891496bfc9091e] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagator_c187e5fb5beb7558] = env->getMethodID(cls, "getEstimatedPropagator", "()Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_getEvolution_b091ae59b81dced9] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
            mids$[mid_getInnovation_98db7a9514783d86] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getObserver_c42c64cc17e34100] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_6d9adf1d5b463928] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_164e77faf6b1d416] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_a4eb258dd7a1e164] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_initializeShortPeriodicTerms_2b88003f931f70a7] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_processMeasurements_8eb2d866e9c3f5f1] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;Lorg/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_fe6775fb802fa129] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_updateNominalSpacecraftState_2b88003f931f70a7] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateReferenceTrajectory_6435d4be7f4238c5] = env->getMethodID(cls, "updateReferenceTrajectory", "(Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;)V");
            mids$[mid_updateShortPeriods_2b88003f931f70a7] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_7cf22bbe05cd26dc], a0.this$, a1.this$);
        }

        void SemiAnalyticalKalmanModel::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_7ae3461a92a43152]);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_164e77faf6b1d416]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164]));
        }

        ::org::orekit::time::AbsoluteDate SemiAnalyticalKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_aaa854c403487cf3]));
        }

        jint SemiAnalyticalKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_f2f64475e4580546]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate SemiAnalyticalKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_3d891496bfc9091e]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_eb9e6df280c6daa0]));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanModel::getEstimatedPropagator() const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagator_c187e5fb5beb7558]));
        }

        ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution SemiAnalyticalKalmanModel::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_b091ae59b81dced9], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_98db7a9514783d86], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalKalmanModel::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_c42c64cc17e34100]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_6d9adf1d5b463928]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_164e77faf6b1d416]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_a4eb258dd7a1e164]));
        }

        void SemiAnalyticalKalmanModel::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_2b88003f931f70a7], a0.this$);
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanModel::processMeasurements(const ::java::util::List & a0, const ::org::hipparchus::filtering::kalman::extended::ExtendedKalmanFilter & a1) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_8eb2d866e9c3f5f1], a0.this$, a1.this$));
        }

        void SemiAnalyticalKalmanModel::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_fe6775fb802fa129], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_2b88003f931f70a7], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateReferenceTrajectory(const ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateReferenceTrajectory_6435d4be7f4238c5], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_2b88003f931f70a7], a0.this$);
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
#include "org/orekit/time/TAIUTCDatFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TAIUTCDatFilesLoader::class$ = NULL;
      jmethodID *TAIUTCDatFilesLoader::mids$ = NULL;
      bool TAIUTCDatFilesLoader::live$ = false;
      ::java::lang::String *TAIUTCDatFilesLoader::DEFAULT_SUPPORTED_NAMES = NULL;

      jclass TAIUTCDatFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TAIUTCDatFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_2a9119a84e92f14a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_a6156df500549a58] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TAIUTCDatFilesLoader::TAIUTCDatFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

      TAIUTCDatFilesLoader::TAIUTCDatFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_2a9119a84e92f14a, a0.this$, a1.this$)) {}

      ::java::util::List TAIUTCDatFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_a6156df500549a58]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/TAIUTCDatFilesLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TAIUTCDatFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIUTCDatFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TAIUTCDatFilesLoader_init_(t_TAIUTCDatFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TAIUTCDatFilesLoader_loadOffsets(t_TAIUTCDatFilesLoader *self);

      static PyMethodDef t_TAIUTCDatFilesLoader__methods_[] = {
        DECLARE_METHOD(t_TAIUTCDatFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TAIUTCDatFilesLoader)[] = {
        { Py_tp_methods, t_TAIUTCDatFilesLoader__methods_ },
        { Py_tp_init, (void *) t_TAIUTCDatFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TAIUTCDatFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(TAIUTCDatFilesLoader, t_TAIUTCDatFilesLoader, TAIUTCDatFilesLoader);

      void t_TAIUTCDatFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(TAIUTCDatFilesLoader), &PY_TYPE_DEF(TAIUTCDatFilesLoader), module, "TAIUTCDatFilesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "Parser", make_descriptor(&PY_TYPE_DEF(TAIUTCDatFilesLoader$Parser)));
      }

      void t_TAIUTCDatFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "class_", make_descriptor(TAIUTCDatFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "wrapfn_", make_descriptor(t_TAIUTCDatFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(TAIUTCDatFilesLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*TAIUTCDatFilesLoader::DEFAULT_SUPPORTED_NAMES)));
      }

      static PyObject *t_TAIUTCDatFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TAIUTCDatFilesLoader::initializeClass, 1)))
          return NULL;
        return t_TAIUTCDatFilesLoader::wrap_Object(TAIUTCDatFilesLoader(((t_TAIUTCDatFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_TAIUTCDatFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TAIUTCDatFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TAIUTCDatFilesLoader_init_(t_TAIUTCDatFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            TAIUTCDatFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = TAIUTCDatFilesLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            TAIUTCDatFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TAIUTCDatFilesLoader(a0, a1));
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

      static PyObject *t_TAIUTCDatFilesLoader_loadOffsets(t_TAIUTCDatFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitEphemerisFile.h"
#include "java/util/Map.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatellite_0391d32f99b611cb] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris;");
            mids$[mid_getSatellites_d6753b7055940a54] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile::OrekitEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris OrekitEphemerisFile::addSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris(env->callObjectMethod(this$, mids$[mid_addSatellite_0391d32f99b611cb], a0.this$));
        }

        ::java::util::Map OrekitEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_d6753b7055940a54]));
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
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SatelliteSystem::class$ = NULL;
      jmethodID *SatelliteSystem::mids$ = NULL;
      bool SatelliteSystem::live$ = false;
      SatelliteSystem *SatelliteSystem::BEIDOU = NULL;
      SatelliteSystem *SatelliteSystem::GALILEO = NULL;
      SatelliteSystem *SatelliteSystem::GLONASS = NULL;
      SatelliteSystem *SatelliteSystem::GPS = NULL;
      SatelliteSystem *SatelliteSystem::IRNSS = NULL;
      SatelliteSystem *SatelliteSystem::MIXED = NULL;
      SatelliteSystem *SatelliteSystem::QZSS = NULL;
      SatelliteSystem *SatelliteSystem::SBAS = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_A = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_B = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_D = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_F = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_H = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_K = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_L = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_N = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_O = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_P = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Q = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_T = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_U = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_V = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_W = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_X = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Y = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Z = NULL;

      jclass SatelliteSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SatelliteSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_29e026b9d068f1c7] = env->getMethodID(cls, "getKey", "()C");
          mids$[mid_getObservationTimeScale_5051e3e5556e8f25] = env->getMethodID(cls, "getObservationTimeScale", "()Lorg/orekit/gnss/ObservationTimeScale;");
          mids$[mid_parseSatelliteSystem_171af76646888668] = env->getStaticMethodID(cls, "parseSatelliteSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_parseSatelliteSystemWithGPSDefault_171af76646888668] = env->getStaticMethodID(cls, "parseSatelliteSystemWithGPSDefault", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_valueOf_171af76646888668] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_values_18b739276c82f9bd] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/SatelliteSystem;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU = new SatelliteSystem(env->getStaticObjectField(cls, "BEIDOU", "Lorg/orekit/gnss/SatelliteSystem;"));
          GALILEO = new SatelliteSystem(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/gnss/SatelliteSystem;"));
          GLONASS = new SatelliteSystem(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/SatelliteSystem;"));
          GPS = new SatelliteSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/SatelliteSystem;"));
          IRNSS = new SatelliteSystem(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/gnss/SatelliteSystem;"));
          MIXED = new SatelliteSystem(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/gnss/SatelliteSystem;"));
          QZSS = new SatelliteSystem(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/SatelliteSystem;"));
          SBAS = new SatelliteSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_A = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_A", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_B = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_B", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_D = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_D", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_F = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_F", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_H = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_H", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_K = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_K", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_L = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_L", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_N = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_N", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_O = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_O", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_P = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_P", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Q = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Q", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_T = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_T", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_U = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_U", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_V = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_V", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_W = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_W", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_X = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_X", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Y = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Y", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Z = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Z", "Lorg/orekit/gnss/SatelliteSystem;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jchar SatelliteSystem::getKey() const
      {
        return env->callCharMethod(this$, mids$[mid_getKey_29e026b9d068f1c7]);
      }

      ::org::orekit::gnss::ObservationTimeScale SatelliteSystem::getObservationTimeScale() const
      {
        return ::org::orekit::gnss::ObservationTimeScale(env->callObjectMethod(this$, mids$[mid_getObservationTimeScale_5051e3e5556e8f25]));
      }

      SatelliteSystem SatelliteSystem::parseSatelliteSystem(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteSystem_171af76646888668], a0.this$));
      }

      SatelliteSystem SatelliteSystem::parseSatelliteSystemWithGPSDefault(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteSystemWithGPSDefault_171af76646888668], a0.this$));
      }

      SatelliteSystem SatelliteSystem::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_171af76646888668], a0.this$));
      }

      JArray< SatelliteSystem > SatelliteSystem::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< SatelliteSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_18b739276c82f9bd]));
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
      static PyObject *t_SatelliteSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_of_(t_SatelliteSystem *self, PyObject *args);
      static PyObject *t_SatelliteSystem_getKey(t_SatelliteSystem *self);
      static PyObject *t_SatelliteSystem_getObservationTimeScale(t_SatelliteSystem *self);
      static PyObject *t_SatelliteSystem_parseSatelliteSystem(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_parseSatelliteSystemWithGPSDefault(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_SatelliteSystem_values(PyTypeObject *type);
      static PyObject *t_SatelliteSystem_get__key(t_SatelliteSystem *self, void *data);
      static PyObject *t_SatelliteSystem_get__observationTimeScale(t_SatelliteSystem *self, void *data);
      static PyObject *t_SatelliteSystem_get__parameters_(t_SatelliteSystem *self, void *data);
      static PyGetSetDef t_SatelliteSystem__fields_[] = {
        DECLARE_GET_FIELD(t_SatelliteSystem, key),
        DECLARE_GET_FIELD(t_SatelliteSystem, observationTimeScale),
        DECLARE_GET_FIELD(t_SatelliteSystem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SatelliteSystem__methods_[] = {
        DECLARE_METHOD(t_SatelliteSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, of_, METH_VARARGS),
        DECLARE_METHOD(t_SatelliteSystem, getKey, METH_NOARGS),
        DECLARE_METHOD(t_SatelliteSystem, getObservationTimeScale, METH_NOARGS),
        DECLARE_METHOD(t_SatelliteSystem, parseSatelliteSystem, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, parseSatelliteSystemWithGPSDefault, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SatelliteSystem)[] = {
        { Py_tp_methods, t_SatelliteSystem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SatelliteSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SatelliteSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(SatelliteSystem, t_SatelliteSystem, SatelliteSystem);
      PyObject *t_SatelliteSystem::wrap_Object(const SatelliteSystem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SatelliteSystem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SatelliteSystem *self = (t_SatelliteSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SatelliteSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SatelliteSystem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SatelliteSystem *self = (t_SatelliteSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SatelliteSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(SatelliteSystem), &PY_TYPE_DEF(SatelliteSystem), module, "SatelliteSystem", 0);
      }

      void t_SatelliteSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "class_", make_descriptor(SatelliteSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "wrapfn_", make_descriptor(t_SatelliteSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "boxfn_", make_descriptor(boxObject));
        env->getClass(SatelliteSystem::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "BEIDOU", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::BEIDOU)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GALILEO", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GALILEO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GLONASS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GLONASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GPS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "IRNSS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::IRNSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "MIXED", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::MIXED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "QZSS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::QZSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "SBAS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::SBAS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_A", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_B", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_D", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_F", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_F)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_H", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_H)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_K", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_K)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_L", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_N", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_O", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_O)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_P", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Q", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_T", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_T)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_U", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_U)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_V", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_V)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_W", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_X", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Y", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Z", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Z)));
      }

      static PyObject *t_SatelliteSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SatelliteSystem::initializeClass, 1)))
          return NULL;
        return t_SatelliteSystem::wrap_Object(SatelliteSystem(((t_SatelliteSystem *) arg)->object.this$));
      }
      static PyObject *t_SatelliteSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SatelliteSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SatelliteSystem_of_(t_SatelliteSystem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SatelliteSystem_getKey(t_SatelliteSystem *self)
      {
        jchar result;
        OBJ_CALL(result = self->object.getKey());
        return c2p(result);
      }

      static PyObject *t_SatelliteSystem_getObservationTimeScale(t_SatelliteSystem *self)
      {
        ::org::orekit::gnss::ObservationTimeScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getObservationTimeScale());
        return ::org::orekit::gnss::t_ObservationTimeScale::wrap_Object(result);
      }

      static PyObject *t_SatelliteSystem_parseSatelliteSystem(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::parseSatelliteSystem(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseSatelliteSystem", arg);
        return NULL;
      }

      static PyObject *t_SatelliteSystem_parseSatelliteSystemWithGPSDefault(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::parseSatelliteSystemWithGPSDefault(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseSatelliteSystemWithGPSDefault", arg);
        return NULL;
      }

      static PyObject *t_SatelliteSystem_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::valueOf(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_SatelliteSystem_values(PyTypeObject *type)
      {
        JArray< SatelliteSystem > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::values());
        return JArray<jobject>(result.this$).wrap(t_SatelliteSystem::wrap_jobject);
      }
      static PyObject *t_SatelliteSystem_get__parameters_(t_SatelliteSystem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SatelliteSystem_get__key(t_SatelliteSystem *self, void *data)
      {
        jchar value;
        OBJ_CALL(value = self->object.getKey());
        return c2p(value);
      }

      static PyObject *t_SatelliteSystem_get__observationTimeScale(t_SatelliteSystem *self, void *data)
      {
        ::org::orekit::gnss::ObservationTimeScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getObservationTimeScale());
        return ::org::orekit::gnss::t_ObservationTimeScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/time/Month.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *DateTimeComponents::class$ = NULL;
      jmethodID *DateTimeComponents::mids$ = NULL;
      bool DateTimeComponents::live$ = false;
      DateTimeComponents *DateTimeComponents::JULIAN_EPOCH = NULL;

      jclass DateTimeComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/DateTimeComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c59017c2d3bb8717] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)V");
          mids$[mid_init$_fc6bc8202122a8f1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateTimeComponents;D)V");
          mids$[mid_init$_2bb2179709f1d894] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;I)V");
          mids$[mid_init$_c80ec2f7d8b5fe87] = env->getMethodID(cls, "<init>", "(III)V");
          mids$[mid_init$_cf0f9df8b51490d3] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;IIID)V");
          mids$[mid_init$_433efde14d0a0a90] = env->getMethodID(cls, "<init>", "(IIIIID)V");
          mids$[mid_compareTo_19d4f1c80ae0a237] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/DateTimeComponents;)I");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDate_d592c1a2c355eb35] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/DateComponents;");
          mids$[mid_getTime_273de7e53b98ff3a] = env->getMethodID(cls, "getTime", "()Lorg/orekit/time/TimeComponents;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_offsetFrom_12de8ce32bd22524] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/DateTimeComponents;)D");
          mids$[mid_parseDateTime_d6be31dda1bc187a] = env->getStaticMethodID(cls, "parseDateTime", "(Ljava/lang/String;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_roundIfNeeded_5cb2789988ff697c] = env->getMethodID(cls, "roundIfNeeded", "(II)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_90cbcc0b7a5ddae9] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_a1a389fa4c946a7a] = env->getMethodID(cls, "toString", "(II)Ljava/lang/String;");
          mids$[mid_toStringRfc3339_0090f7797e403f43] = env->getMethodID(cls, "toStringRfc3339", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_0090f7797e403f43] = env->getMethodID(cls, "toStringWithoutUtcOffset", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_a1a389fa4c946a7a] = env->getMethodID(cls, "toStringWithoutUtcOffset", "(II)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          JULIAN_EPOCH = new DateTimeComponents(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/DateTimeComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateTimeComponents::DateTimeComponents(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c59017c2d3bb8717, a0.this$, a1.this$)) {}

      DateTimeComponents::DateTimeComponents(const DateTimeComponents & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fc6bc8202122a8f1, a0.this$, a1)) {}

      DateTimeComponents::DateTimeComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2bb2179709f1d894, a0, a1.this$, a2)) {}

      DateTimeComponents::DateTimeComponents(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c80ec2f7d8b5fe87, a0, a1, a2)) {}

      DateTimeComponents::DateTimeComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2, jint a3, jint a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cf0f9df8b51490d3, a0, a1.this$, a2, a3, a4, a5)) {}

      DateTimeComponents::DateTimeComponents(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_433efde14d0a0a90, a0, a1, a2, a3, a4, a5)) {}

      jint DateTimeComponents::compareTo(const DateTimeComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_19d4f1c80ae0a237], a0.this$);
      }

      jboolean DateTimeComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      ::org::orekit::time::DateComponents DateTimeComponents::getDate() const
      {
        return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getDate_d592c1a2c355eb35]));
      }

      ::org::orekit::time::TimeComponents DateTimeComponents::getTime() const
      {
        return ::org::orekit::time::TimeComponents(env->callObjectMethod(this$, mids$[mid_getTime_273de7e53b98ff3a]));
      }

      jint DateTimeComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      jdouble DateTimeComponents::offsetFrom(const DateTimeComponents & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFrom_12de8ce32bd22524], a0.this$);
      }

      DateTimeComponents DateTimeComponents::parseDateTime(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DateTimeComponents(env->callStaticObjectMethod(cls, mids$[mid_parseDateTime_d6be31dda1bc187a], a0.this$));
      }

      DateTimeComponents DateTimeComponents::roundIfNeeded(jint a0, jint a1) const
      {
        return DateTimeComponents(env->callObjectMethod(this$, mids$[mid_roundIfNeeded_5cb2789988ff697c], a0, a1));
      }

      ::java::lang::String DateTimeComponents::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::java::lang::String DateTimeComponents::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_90cbcc0b7a5ddae9], a0));
      }

      ::java::lang::String DateTimeComponents::toString(jint a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_a1a389fa4c946a7a], a0, a1));
      }

      ::java::lang::String DateTimeComponents::toStringRfc3339() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringRfc3339_0090f7797e403f43]));
      }

      ::java::lang::String DateTimeComponents::toStringWithoutUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_0090f7797e403f43]));
      }

      ::java::lang::String DateTimeComponents::toStringWithoutUtcOffset(jint a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_a1a389fa4c946a7a], a0, a1));
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
      static PyObject *t_DateTimeComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateTimeComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateTimeComponents_init_(t_DateTimeComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateTimeComponents_compareTo(t_DateTimeComponents *self, PyObject *arg);
      static PyObject *t_DateTimeComponents_equals(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_getDate(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_getTime(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_hashCode(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_offsetFrom(t_DateTimeComponents *self, PyObject *arg);
      static PyObject *t_DateTimeComponents_parseDateTime(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateTimeComponents_roundIfNeeded(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_toString(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_toStringRfc3339(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_toStringWithoutUtcOffset(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_get__date(t_DateTimeComponents *self, void *data);
      static PyObject *t_DateTimeComponents_get__time(t_DateTimeComponents *self, void *data);
      static PyGetSetDef t_DateTimeComponents__fields_[] = {
        DECLARE_GET_FIELD(t_DateTimeComponents, date),
        DECLARE_GET_FIELD(t_DateTimeComponents, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateTimeComponents__methods_[] = {
        DECLARE_METHOD(t_DateTimeComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, compareTo, METH_O),
        DECLARE_METHOD(t_DateTimeComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, getTime, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, offsetFrom, METH_O),
        DECLARE_METHOD(t_DateTimeComponents, parseDateTime, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, roundIfNeeded, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, toString, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, toStringRfc3339, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, toStringWithoutUtcOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateTimeComponents)[] = {
        { Py_tp_methods, t_DateTimeComponents__methods_ },
        { Py_tp_init, (void *) t_DateTimeComponents_init_ },
        { Py_tp_getset, t_DateTimeComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateTimeComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DateTimeComponents, t_DateTimeComponents, DateTimeComponents);

      void t_DateTimeComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(DateTimeComponents), &PY_TYPE_DEF(DateTimeComponents), module, "DateTimeComponents", 0);
      }

      void t_DateTimeComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "class_", make_descriptor(DateTimeComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "wrapfn_", make_descriptor(t_DateTimeComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(DateTimeComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "JULIAN_EPOCH", make_descriptor(t_DateTimeComponents::wrap_Object(*DateTimeComponents::JULIAN_EPOCH)));
      }

      static PyObject *t_DateTimeComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateTimeComponents::initializeClass, 1)))
          return NULL;
        return t_DateTimeComponents::wrap_Object(DateTimeComponents(((t_DateTimeComponents *) arg)->object.this$));
      }
      static PyObject *t_DateTimeComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateTimeComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateTimeComponents_init_(t_DateTimeComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateTimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            DateTimeComponents a0((jobject) NULL);
            jdouble a1;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "kD", DateTimeComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateTimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IKI", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IKIIID", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2, a3, a4, a5));
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
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_DateTimeComponents_compareTo(t_DateTimeComponents *self, PyObject *arg)
      {
        DateTimeComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", DateTimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_equals(t_DateTimeComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DateTimeComponents_getDate(t_DateTimeComponents *self)
      {
        ::org::orekit::time::DateComponents result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_DateComponents::wrap_Object(result);
      }

      static PyObject *t_DateTimeComponents_getTime(t_DateTimeComponents *self)
      {
        ::org::orekit::time::TimeComponents result((jobject) NULL);
        OBJ_CALL(result = self->object.getTime());
        return ::org::orekit::time::t_TimeComponents::wrap_Object(result);
      }

      static PyObject *t_DateTimeComponents_hashCode(t_DateTimeComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DateTimeComponents_offsetFrom(t_DateTimeComponents *self, PyObject *arg)
      {
        DateTimeComponents a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", DateTimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_parseDateTime(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        DateTimeComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::DateTimeComponents::parseDateTime(a0));
          return t_DateTimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseDateTime", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_roundIfNeeded(t_DateTimeComponents *self, PyObject *args)
      {
        jint a0;
        jint a1;
        DateTimeComponents result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.roundIfNeeded(a0, a1));
          return t_DateTimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "roundIfNeeded", args);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_toString(t_DateTimeComponents *self, PyObject *args)
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
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DateTimeComponents_toStringRfc3339(t_DateTimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.toStringRfc3339());
        return j2p(result);
      }

      static PyObject *t_DateTimeComponents_toStringWithoutUtcOffset(t_DateTimeComponents *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toStringWithoutUtcOffset());
            return j2p(result);
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.toStringWithoutUtcOffset(a0, a1));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "toStringWithoutUtcOffset", args);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_get__date(t_DateTimeComponents *self, void *data)
      {
        ::org::orekit::time::DateComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_DateComponents::wrap_Object(value);
      }

      static PyObject *t_DateTimeComponents_get__time(t_DateTimeComponents *self, void *data)
      {
        ::org::orekit::time::TimeComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getTime());
        return ::org::orekit::time::t_TimeComponents::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CjSjCoefficient.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *CjSjCoefficient::class$ = NULL;
            jmethodID *CjSjCoefficient::mids$ = NULL;
            bool CjSjCoefficient::live$ = false;

            jclass CjSjCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/CjSjCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_getCj_b772323fc98b7293] = env->getMethodID(cls, "getCj", "(I)D");
                mids$[mid_getDcjDh_b772323fc98b7293] = env->getMethodID(cls, "getDcjDh", "(I)D");
                mids$[mid_getDcjDk_b772323fc98b7293] = env->getMethodID(cls, "getDcjDk", "(I)D");
                mids$[mid_getDsjDh_b772323fc98b7293] = env->getMethodID(cls, "getDsjDh", "(I)D");
                mids$[mid_getDsjDk_b772323fc98b7293] = env->getMethodID(cls, "getDsjDk", "(I)D");
                mids$[mid_getSj_b772323fc98b7293] = env->getMethodID(cls, "getSj", "(I)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CjSjCoefficient::CjSjCoefficient(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

            jdouble CjSjCoefficient::getCj(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCj_b772323fc98b7293], a0);
            }

            jdouble CjSjCoefficient::getDcjDh(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDcjDh_b772323fc98b7293], a0);
            }

            jdouble CjSjCoefficient::getDcjDk(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDcjDk_b772323fc98b7293], a0);
            }

            jdouble CjSjCoefficient::getDsjDh(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDsjDh_b772323fc98b7293], a0);
            }

            jdouble CjSjCoefficient::getDsjDk(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDsjDk_b772323fc98b7293], a0);
            }

            jdouble CjSjCoefficient::getSj(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSj_b772323fc98b7293], a0);
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
            static PyObject *t_CjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CjSjCoefficient_init_(t_CjSjCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CjSjCoefficient_getCj(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDcjDh(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDcjDk(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDsjDh(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getDsjDk(t_CjSjCoefficient *self, PyObject *arg);
            static PyObject *t_CjSjCoefficient_getSj(t_CjSjCoefficient *self, PyObject *arg);

            static PyMethodDef t_CjSjCoefficient__methods_[] = {
              DECLARE_METHOD(t_CjSjCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CjSjCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CjSjCoefficient, getCj, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDcjDh, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDcjDk, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDsjDh, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getDsjDk, METH_O),
              DECLARE_METHOD(t_CjSjCoefficient, getSj, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CjSjCoefficient)[] = {
              { Py_tp_methods, t_CjSjCoefficient__methods_ },
              { Py_tp_init, (void *) t_CjSjCoefficient_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CjSjCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CjSjCoefficient, t_CjSjCoefficient, CjSjCoefficient);

            void t_CjSjCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(CjSjCoefficient), &PY_TYPE_DEF(CjSjCoefficient), module, "CjSjCoefficient", 0);
            }

            void t_CjSjCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CjSjCoefficient), "class_", make_descriptor(CjSjCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CjSjCoefficient), "wrapfn_", make_descriptor(t_CjSjCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CjSjCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CjSjCoefficient::initializeClass, 1)))
                return NULL;
              return t_CjSjCoefficient::wrap_Object(CjSjCoefficient(((t_CjSjCoefficient *) arg)->object.this$));
            }
            static PyObject *t_CjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CjSjCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CjSjCoefficient_init_(t_CjSjCoefficient *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              CjSjCoefficient object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = CjSjCoefficient(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CjSjCoefficient_getCj(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getCj(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCj", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDcjDh(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDh(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDh", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDcjDk(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDk(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDk", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDsjDh(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDh(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDh", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getDsjDk(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDk(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDk", arg);
              return NULL;
            }

            static PyObject *t_CjSjCoefficient_getSj(t_CjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getSj(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSj", arg);
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
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldPVCoordinates::class$ = NULL;
      jmethodID *TimeStampedFieldPVCoordinates::mids$ = NULL;
      bool TimeStampedFieldPVCoordinates::live$ = false;

      jclass TimeStampedFieldPVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldPVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b1c8d3cf31a209c8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
          mids$[mid_init$_9d73fcce6fcf904f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_ee45717687c334a1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_29687ccd72f81db7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_bc0c5d85c500b363] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_b3e0cf3f2bef484f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_a7c3f2b802f2db19] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_6260e7f6da29fe75] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_d0c1b0d49789b04e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_2d474ab088998677] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_ab467c578aeb0695] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_9e18b273511ec44d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_41aed52df58da4c8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_c04c30a2fab87285] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_d08eb949e98d2dc4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_84c0e286a125f2e2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_4be426556130efe9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_67ea9f8ae6111d1a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_a7f2bbdda4dc1b16] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_048bd8b32a48640f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_cabf2962353e1085] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_6a27dde5ab963807] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_7e283ae1c4bc5ea8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_6bb89ff51f7530c3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_4dd6274a018a92b8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_7902f1a23e6aac2c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_60fadd4075574780] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_f27684a4091d505a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_f4fc8f4b85ea4711] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_8231b6d93a7177ae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_5768bd432ddf045c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_4ef6f716d4feba44] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_2a8ded55216f7b91] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_shiftedBy_ebe9b9ae8b056235] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_44577b71ebe5fefb] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toTimeStampedPVCoordinates_6890805957bea2cd] = env->getMethodID(cls, "toTimeStampedPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::TimeStampedPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_b1c8d3cf31a209c8, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_9d73fcce6fcf904f, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ee45717687c334a1, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_29687ccd72f81db7, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_bc0c5d85c500b363, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_b3e0cf3f2bef484f, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a7c3f2b802f2db19, a0.this$, a1, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_6260e7f6da29fe75, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d0c1b0d49789b04e, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_2d474ab088998677, a0.this$, a1, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ab467c578aeb0695, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_9e18b273511ec44d, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_41aed52df58da4c8, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_c04c30a2fab87285, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d08eb949e98d2dc4, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_84c0e286a125f2e2, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_4be426556130efe9, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_67ea9f8ae6111d1a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a7f2bbdda4dc1b16, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_048bd8b32a48640f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_cabf2962353e1085, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_6a27dde5ab963807, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_7e283ae1c4bc5ea8, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_6bb89ff51f7530c3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_4dd6274a018a92b8, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_7902f1a23e6aac2c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6, jdouble a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_60fadd4075574780, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_f27684a4091d505a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_f4fc8f4b85ea4711, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8231b6d93a7177ae, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6, jdouble a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_5768bd432ddf045c, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_4ef6f716d4feba44, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate TimeStampedFieldPVCoordinates::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_09b0a926600dfc14]));
      }

      TimeStampedFieldPVCoordinates TimeStampedFieldPVCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_2a8ded55216f7b91], a0));
      }

      TimeStampedFieldPVCoordinates TimeStampedFieldPVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_ebe9b9ae8b056235], a0.this$));
      }

      ::java::lang::String TimeStampedFieldPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::java::lang::String TimeStampedFieldPVCoordinates::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_44577b71ebe5fefb], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates TimeStampedFieldPVCoordinates::toTimeStampedPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toTimeStampedPVCoordinates_6890805957bea2cd]));
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
      static PyObject *t_TimeStampedFieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinates_of_(t_TimeStampedFieldPVCoordinates *self, PyObject *args);
      static int t_TimeStampedFieldPVCoordinates_init_(t_TimeStampedFieldPVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldPVCoordinates_getDate(t_TimeStampedFieldPVCoordinates *self);
      static PyObject *t_TimeStampedFieldPVCoordinates_shiftedBy(t_TimeStampedFieldPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldPVCoordinates_toString(t_TimeStampedFieldPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldPVCoordinates_toTimeStampedPVCoordinates(t_TimeStampedFieldPVCoordinates *self);
      static PyObject *t_TimeStampedFieldPVCoordinates_get__date(t_TimeStampedFieldPVCoordinates *self, void *data);
      static PyObject *t_TimeStampedFieldPVCoordinates_get__parameters_(t_TimeStampedFieldPVCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedFieldPVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinates, date),
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldPVCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, toTimeStampedPVCoordinates, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldPVCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedFieldPVCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldPVCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedFieldPVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldPVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::FieldPVCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldPVCoordinates, t_TimeStampedFieldPVCoordinates, TimeStampedFieldPVCoordinates);
      PyObject *t_TimeStampedFieldPVCoordinates::wrap_Object(const TimeStampedFieldPVCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinates *self = (t_TimeStampedFieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldPVCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinates *self = (t_TimeStampedFieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldPVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldPVCoordinates), &PY_TYPE_DEF(TimeStampedFieldPVCoordinates), module, "TimeStampedFieldPVCoordinates", 0);
      }

      void t_TimeStampedFieldPVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinates), "class_", make_descriptor(TimeStampedFieldPVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinates), "wrapfn_", make_descriptor(t_TimeStampedFieldPVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldPVCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldPVCoordinates::wrap_Object(TimeStampedFieldPVCoordinates(((t_TimeStampedFieldPVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldPVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_of_(t_TimeStampedFieldPVCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldPVCoordinates_init_(t_TimeStampedFieldPVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedPVCoordinates a1((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
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
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDKDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDKDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKkKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKkKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDKDKDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDKDKDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKkKkKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKkKkKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            jdouble a7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDKDKDKDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKKKKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::PVCoordinates a8((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKkKkKkKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            jdouble a7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDKDKDKDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::PVCoordinates a8((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKkKkKkKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_TimeStampedFieldPVCoordinates_getDate(t_TimeStampedFieldPVCoordinates *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_shiftedBy(t_TimeStampedFieldPVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedFieldPVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_toString(t_TimeStampedFieldPVCoordinates *self, PyObject *args)
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
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedFieldPVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_toTimeStampedPVCoordinates(t_TimeStampedFieldPVCoordinates *self)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toTimeStampedPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
      }
      static PyObject *t_TimeStampedFieldPVCoordinates_get__parameters_(t_TimeStampedFieldPVCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_get__date(t_TimeStampedFieldPVCoordinates *self, void *data)
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
#include "java/io/File.h"
#include "java/io/IOException.h"
#include "java/io/FilenameFilter.h"
#include "java/io/FileFilter.h"
#include "java/io/Serializable.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *File::class$ = NULL;
    jmethodID *File::mids$ = NULL;
    bool File::live$ = false;
    ::java::lang::String *File::pathSeparator = NULL;
    jchar File::pathSeparatorChar = (jchar) 0;
    ::java::lang::String *File::separator = NULL;
    jchar File::separatorChar = (jchar) 0;

    jclass File::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/File");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_94be9c6310e15013] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_96073c87872b7a97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_canExecute_e470b6d9e0d979db] = env->getMethodID(cls, "canExecute", "()Z");
        mids$[mid_canRead_e470b6d9e0d979db] = env->getMethodID(cls, "canRead", "()Z");
        mids$[mid_canWrite_e470b6d9e0d979db] = env->getMethodID(cls, "canWrite", "()Z");
        mids$[mid_compareTo_b10a114664b0e687] = env->getMethodID(cls, "compareTo", "(Ljava/io/File;)I");
        mids$[mid_createNewFile_e470b6d9e0d979db] = env->getMethodID(cls, "createNewFile", "()Z");
        mids$[mid_createTempFile_984ce354c1ffcd33] = env->getStaticMethodID(cls, "createTempFile", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;");
        mids$[mid_createTempFile_3568852b5e9a7a90] = env->getStaticMethodID(cls, "createTempFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;");
        mids$[mid_delete_e470b6d9e0d979db] = env->getMethodID(cls, "delete", "()Z");
        mids$[mid_deleteOnExit_7ae3461a92a43152] = env->getMethodID(cls, "deleteOnExit", "()V");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_exists_e470b6d9e0d979db] = env->getMethodID(cls, "exists", "()Z");
        mids$[mid_getAbsoluteFile_f284405e82682cf7] = env->getMethodID(cls, "getAbsoluteFile", "()Ljava/io/File;");
        mids$[mid_getAbsolutePath_0090f7797e403f43] = env->getMethodID(cls, "getAbsolutePath", "()Ljava/lang/String;");
        mids$[mid_getCanonicalFile_f284405e82682cf7] = env->getMethodID(cls, "getCanonicalFile", "()Ljava/io/File;");
        mids$[mid_getCanonicalPath_0090f7797e403f43] = env->getMethodID(cls, "getCanonicalPath", "()Ljava/lang/String;");
        mids$[mid_getFreeSpace_a27fc9afd27e559d] = env->getMethodID(cls, "getFreeSpace", "()J");
        mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getParent_0090f7797e403f43] = env->getMethodID(cls, "getParent", "()Ljava/lang/String;");
        mids$[mid_getParentFile_f284405e82682cf7] = env->getMethodID(cls, "getParentFile", "()Ljava/io/File;");
        mids$[mid_getPath_0090f7797e403f43] = env->getMethodID(cls, "getPath", "()Ljava/lang/String;");
        mids$[mid_getTotalSpace_a27fc9afd27e559d] = env->getMethodID(cls, "getTotalSpace", "()J");
        mids$[mid_getUsableSpace_a27fc9afd27e559d] = env->getMethodID(cls, "getUsableSpace", "()J");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isAbsolute_e470b6d9e0d979db] = env->getMethodID(cls, "isAbsolute", "()Z");
        mids$[mid_isDirectory_e470b6d9e0d979db] = env->getMethodID(cls, "isDirectory", "()Z");
        mids$[mid_isFile_e470b6d9e0d979db] = env->getMethodID(cls, "isFile", "()Z");
        mids$[mid_isHidden_e470b6d9e0d979db] = env->getMethodID(cls, "isHidden", "()Z");
        mids$[mid_lastModified_a27fc9afd27e559d] = env->getMethodID(cls, "lastModified", "()J");
        mids$[mid_length_a27fc9afd27e559d] = env->getMethodID(cls, "length", "()J");
        mids$[mid_list_0f62ccf08eef5924] = env->getMethodID(cls, "list", "()[Ljava/lang/String;");
        mids$[mid_list_e0ae6ed6826da5ac] = env->getMethodID(cls, "list", "(Ljava/io/FilenameFilter;)[Ljava/lang/String;");
        mids$[mid_listFiles_01e3b63ff5700cff] = env->getMethodID(cls, "listFiles", "()[Ljava/io/File;");
        mids$[mid_listFiles_6487ff6365c5c0d5] = env->getMethodID(cls, "listFiles", "(Ljava/io/FileFilter;)[Ljava/io/File;");
        mids$[mid_listFiles_022e0c648fe0eee2] = env->getMethodID(cls, "listFiles", "(Ljava/io/FilenameFilter;)[Ljava/io/File;");
        mids$[mid_listRoots_01e3b63ff5700cff] = env->getStaticMethodID(cls, "listRoots", "()[Ljava/io/File;");
        mids$[mid_mkdir_e470b6d9e0d979db] = env->getMethodID(cls, "mkdir", "()Z");
        mids$[mid_mkdirs_e470b6d9e0d979db] = env->getMethodID(cls, "mkdirs", "()Z");
        mids$[mid_renameTo_667e23095e41ed38] = env->getMethodID(cls, "renameTo", "(Ljava/io/File;)Z");
        mids$[mid_setExecutable_677f083a4e44dce2] = env->getMethodID(cls, "setExecutable", "(Z)Z");
        mids$[mid_setExecutable_100b9381d288c094] = env->getMethodID(cls, "setExecutable", "(ZZ)Z");
        mids$[mid_setLastModified_9560f1672fe5dd29] = env->getMethodID(cls, "setLastModified", "(J)Z");
        mids$[mid_setReadOnly_e470b6d9e0d979db] = env->getMethodID(cls, "setReadOnly", "()Z");
        mids$[mid_setReadable_677f083a4e44dce2] = env->getMethodID(cls, "setReadable", "(Z)Z");
        mids$[mid_setReadable_100b9381d288c094] = env->getMethodID(cls, "setReadable", "(ZZ)Z");
        mids$[mid_setWritable_677f083a4e44dce2] = env->getMethodID(cls, "setWritable", "(Z)Z");
        mids$[mid_setWritable_100b9381d288c094] = env->getMethodID(cls, "setWritable", "(ZZ)Z");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toURL_c1cbbd2390395b8b] = env->getMethodID(cls, "toURL", "()Ljava/net/URL;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        pathSeparator = new ::java::lang::String(env->getStaticObjectField(cls, "pathSeparator", "Ljava/lang/String;"));
        pathSeparatorChar = env->getStaticCharField(cls, "pathSeparatorChar");
        separator = new ::java::lang::String(env->getStaticObjectField(cls, "separator", "Ljava/lang/String;"));
        separatorChar = env->getStaticCharField(cls, "separatorChar");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    File::File(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    File::File(const File & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_94be9c6310e15013, a0.this$, a1.this$)) {}

    File::File(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96073c87872b7a97, a0.this$, a1.this$)) {}

    jboolean File::canExecute() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canExecute_e470b6d9e0d979db]);
    }

    jboolean File::canRead() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canRead_e470b6d9e0d979db]);
    }

    jboolean File::canWrite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canWrite_e470b6d9e0d979db]);
    }

    jint File::compareTo(const File & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_b10a114664b0e687], a0.this$);
    }

    jboolean File::createNewFile() const
    {
      return env->callBooleanMethod(this$, mids$[mid_createNewFile_e470b6d9e0d979db]);
    }

    File File::createTempFile(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return File(env->callStaticObjectMethod(cls, mids$[mid_createTempFile_984ce354c1ffcd33], a0.this$, a1.this$));
    }

    File File::createTempFile(const ::java::lang::String & a0, const ::java::lang::String & a1, const File & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return File(env->callStaticObjectMethod(cls, mids$[mid_createTempFile_3568852b5e9a7a90], a0.this$, a1.this$, a2.this$));
    }

    jboolean File::delete$() const
    {
      return env->callBooleanMethod(this$, mids$[mid_delete_e470b6d9e0d979db]);
    }

    void File::deleteOnExit() const
    {
      env->callVoidMethod(this$, mids$[mid_deleteOnExit_7ae3461a92a43152]);
    }

    jboolean File::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jboolean File::exists() const
    {
      return env->callBooleanMethod(this$, mids$[mid_exists_e470b6d9e0d979db]);
    }

    File File::getAbsoluteFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getAbsoluteFile_f284405e82682cf7]));
    }

    ::java::lang::String File::getAbsolutePath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAbsolutePath_0090f7797e403f43]));
    }

    File File::getCanonicalFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getCanonicalFile_f284405e82682cf7]));
    }

    ::java::lang::String File::getCanonicalPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCanonicalPath_0090f7797e403f43]));
    }

    jlong File::getFreeSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getFreeSpace_a27fc9afd27e559d]);
    }

    ::java::lang::String File::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
    }

    ::java::lang::String File::getParent() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getParent_0090f7797e403f43]));
    }

    File File::getParentFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getParentFile_f284405e82682cf7]));
    }

    ::java::lang::String File::getPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPath_0090f7797e403f43]));
    }

    jlong File::getTotalSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getTotalSpace_a27fc9afd27e559d]);
    }

    jlong File::getUsableSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getUsableSpace_a27fc9afd27e559d]);
    }

    jint File::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean File::isAbsolute() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAbsolute_e470b6d9e0d979db]);
    }

    jboolean File::isDirectory() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDirectory_e470b6d9e0d979db]);
    }

    jboolean File::isFile() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isFile_e470b6d9e0d979db]);
    }

    jboolean File::isHidden() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isHidden_e470b6d9e0d979db]);
    }

    jlong File::lastModified() const
    {
      return env->callLongMethod(this$, mids$[mid_lastModified_a27fc9afd27e559d]);
    }

    jlong File::length() const
    {
      return env->callLongMethod(this$, mids$[mid_length_a27fc9afd27e559d]);
    }

    JArray< ::java::lang::String > File::list() const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_list_0f62ccf08eef5924]));
    }

    JArray< ::java::lang::String > File::list(const ::java::io::FilenameFilter & a0) const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_list_e0ae6ed6826da5ac], a0.this$));
    }

    JArray< File > File::listFiles() const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_01e3b63ff5700cff]));
    }

    JArray< File > File::listFiles(const ::java::io::FileFilter & a0) const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_6487ff6365c5c0d5], a0.this$));
    }

    JArray< File > File::listFiles(const ::java::io::FilenameFilter & a0) const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_022e0c648fe0eee2], a0.this$));
    }

    JArray< File > File::listRoots()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< File >(env->callStaticObjectMethod(cls, mids$[mid_listRoots_01e3b63ff5700cff]));
    }

    jboolean File::mkdir() const
    {
      return env->callBooleanMethod(this$, mids$[mid_mkdir_e470b6d9e0d979db]);
    }

    jboolean File::mkdirs() const
    {
      return env->callBooleanMethod(this$, mids$[mid_mkdirs_e470b6d9e0d979db]);
    }

    jboolean File::renameTo(const File & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_renameTo_667e23095e41ed38], a0.this$);
    }

    jboolean File::setExecutable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setExecutable_677f083a4e44dce2], a0);
    }

    jboolean File::setExecutable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setExecutable_100b9381d288c094], a0, a1);
    }

    jboolean File::setLastModified(jlong a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setLastModified_9560f1672fe5dd29], a0);
    }

    jboolean File::setReadOnly() const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadOnly_e470b6d9e0d979db]);
    }

    jboolean File::setReadable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadable_677f083a4e44dce2], a0);
    }

    jboolean File::setReadable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadable_100b9381d288c094], a0, a1);
    }

    jboolean File::setWritable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setWritable_677f083a4e44dce2], a0);
    }

    jboolean File::setWritable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setWritable_100b9381d288c094], a0, a1);
    }

    ::java::lang::String File::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    ::java::net::URL File::toURL() const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_toURL_c1cbbd2390395b8b]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_File_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_File_instance_(PyTypeObject *type, PyObject *arg);
    static int t_File_init_(t_File *self, PyObject *args, PyObject *kwds);
    static PyObject *t_File_canExecute(t_File *self);
    static PyObject *t_File_canRead(t_File *self);
    static PyObject *t_File_canWrite(t_File *self);
    static PyObject *t_File_compareTo(t_File *self, PyObject *arg);
    static PyObject *t_File_createNewFile(t_File *self);
    static PyObject *t_File_createTempFile(PyTypeObject *type, PyObject *args);
    static PyObject *t_File_delete(t_File *self);
    static PyObject *t_File_deleteOnExit(t_File *self);
    static PyObject *t_File_equals(t_File *self, PyObject *args);
    static PyObject *t_File_exists(t_File *self);
    static PyObject *t_File_getAbsoluteFile(t_File *self);
    static PyObject *t_File_getAbsolutePath(t_File *self);
    static PyObject *t_File_getCanonicalFile(t_File *self);
    static PyObject *t_File_getCanonicalPath(t_File *self);
    static PyObject *t_File_getFreeSpace(t_File *self);
    static PyObject *t_File_getName(t_File *self);
    static PyObject *t_File_getParent(t_File *self);
    static PyObject *t_File_getParentFile(t_File *self);
    static PyObject *t_File_getPath(t_File *self);
    static PyObject *t_File_getTotalSpace(t_File *self);
    static PyObject *t_File_getUsableSpace(t_File *self);
    static PyObject *t_File_hashCode(t_File *self, PyObject *args);
    static PyObject *t_File_isAbsolute(t_File *self);
    static PyObject *t_File_isDirectory(t_File *self);
    static PyObject *t_File_isFile(t_File *self);
    static PyObject *t_File_isHidden(t_File *self);
    static PyObject *t_File_lastModified(t_File *self);
    static PyObject *t_File_length(t_File *self);
    static PyObject *t_File_list(t_File *self, PyObject *args);
    static PyObject *t_File_listFiles(t_File *self, PyObject *args);
    static PyObject *t_File_listRoots(PyTypeObject *type);
    static PyObject *t_File_mkdir(t_File *self);
    static PyObject *t_File_mkdirs(t_File *self);
    static PyObject *t_File_renameTo(t_File *self, PyObject *arg);
    static PyObject *t_File_setExecutable(t_File *self, PyObject *args);
    static PyObject *t_File_setLastModified(t_File *self, PyObject *arg);
    static PyObject *t_File_setReadOnly(t_File *self);
    static PyObject *t_File_setReadable(t_File *self, PyObject *args);
    static PyObject *t_File_setWritable(t_File *self, PyObject *args);
    static PyObject *t_File_toString(t_File *self, PyObject *args);
    static PyObject *t_File_toURL(t_File *self);
    static PyObject *t_File_get__absolute(t_File *self, void *data);
    static PyObject *t_File_get__absoluteFile(t_File *self, void *data);
    static PyObject *t_File_get__absolutePath(t_File *self, void *data);
    static PyObject *t_File_get__canonicalFile(t_File *self, void *data);
    static PyObject *t_File_get__canonicalPath(t_File *self, void *data);
    static PyObject *t_File_get__directory(t_File *self, void *data);
    static int t_File_set__executable(t_File *self, PyObject *arg, void *data);
    static PyObject *t_File_get__file(t_File *self, void *data);
    static PyObject *t_File_get__freeSpace(t_File *self, void *data);
    static PyObject *t_File_get__hidden(t_File *self, void *data);
    static PyObject *t_File_get__name(t_File *self, void *data);
    static PyObject *t_File_get__parent(t_File *self, void *data);
    static PyObject *t_File_get__parentFile(t_File *self, void *data);
    static PyObject *t_File_get__path(t_File *self, void *data);
    static int t_File_set__readable(t_File *self, PyObject *arg, void *data);
    static PyObject *t_File_get__totalSpace(t_File *self, void *data);
    static PyObject *t_File_get__usableSpace(t_File *self, void *data);
    static int t_File_set__writable(t_File *self, PyObject *arg, void *data);
    static PyGetSetDef t_File__fields_[] = {
      DECLARE_GET_FIELD(t_File, absolute),
      DECLARE_GET_FIELD(t_File, absoluteFile),
      DECLARE_GET_FIELD(t_File, absolutePath),
      DECLARE_GET_FIELD(t_File, canonicalFile),
      DECLARE_GET_FIELD(t_File, canonicalPath),
      DECLARE_GET_FIELD(t_File, directory),
      DECLARE_SET_FIELD(t_File, executable),
      DECLARE_GET_FIELD(t_File, file),
      DECLARE_GET_FIELD(t_File, freeSpace),
      DECLARE_GET_FIELD(t_File, hidden),
      DECLARE_GET_FIELD(t_File, name),
      DECLARE_GET_FIELD(t_File, parent),
      DECLARE_GET_FIELD(t_File, parentFile),
      DECLARE_GET_FIELD(t_File, path),
      DECLARE_SET_FIELD(t_File, readable),
      DECLARE_GET_FIELD(t_File, totalSpace),
      DECLARE_GET_FIELD(t_File, usableSpace),
      DECLARE_SET_FIELD(t_File, writable),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_File__methods_[] = {
      DECLARE_METHOD(t_File, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_File, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_File, canExecute, METH_NOARGS),
      DECLARE_METHOD(t_File, canRead, METH_NOARGS),
      DECLARE_METHOD(t_File, canWrite, METH_NOARGS),
      DECLARE_METHOD(t_File, compareTo, METH_O),
      DECLARE_METHOD(t_File, createNewFile, METH_NOARGS),
      DECLARE_METHOD(t_File, createTempFile, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_File, delete, METH_NOARGS),
      DECLARE_METHOD(t_File, deleteOnExit, METH_NOARGS),
      DECLARE_METHOD(t_File, equals, METH_VARARGS),
      DECLARE_METHOD(t_File, exists, METH_NOARGS),
      DECLARE_METHOD(t_File, getAbsoluteFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getAbsolutePath, METH_NOARGS),
      DECLARE_METHOD(t_File, getCanonicalFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getCanonicalPath, METH_NOARGS),
      DECLARE_METHOD(t_File, getFreeSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, getName, METH_NOARGS),
      DECLARE_METHOD(t_File, getParent, METH_NOARGS),
      DECLARE_METHOD(t_File, getParentFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getPath, METH_NOARGS),
      DECLARE_METHOD(t_File, getTotalSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, getUsableSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_File, isAbsolute, METH_NOARGS),
      DECLARE_METHOD(t_File, isDirectory, METH_NOARGS),
      DECLARE_METHOD(t_File, isFile, METH_NOARGS),
      DECLARE_METHOD(t_File, isHidden, METH_NOARGS),
      DECLARE_METHOD(t_File, lastModified, METH_NOARGS),
      DECLARE_METHOD(t_File, length, METH_NOARGS),
      DECLARE_METHOD(t_File, list, METH_VARARGS),
      DECLARE_METHOD(t_File, listFiles, METH_VARARGS),
      DECLARE_METHOD(t_File, listRoots, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_File, mkdir, METH_NOARGS),
      DECLARE_METHOD(t_File, mkdirs, METH_NOARGS),
      DECLARE_METHOD(t_File, renameTo, METH_O),
      DECLARE_METHOD(t_File, setExecutable, METH_VARARGS),
      DECLARE_METHOD(t_File, setLastModified, METH_O),
      DECLARE_METHOD(t_File, setReadOnly, METH_NOARGS),
      DECLARE_METHOD(t_File, setReadable, METH_VARARGS),
      DECLARE_METHOD(t_File, setWritable, METH_VARARGS),
      DECLARE_METHOD(t_File, toString, METH_VARARGS),
      DECLARE_METHOD(t_File, toURL, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(File)[] = {
      { Py_tp_methods, t_File__methods_ },
      { Py_tp_init, (void *) t_File_init_ },
      { Py_tp_getset, t_File__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(File)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(File, t_File, File);

    void t_File::install(PyObject *module)
    {
      installType(&PY_TYPE(File), &PY_TYPE_DEF(File), module, "File", 0);
    }

    void t_File::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "class_", make_descriptor(File::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "wrapfn_", make_descriptor(t_File::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "boxfn_", make_descriptor(boxObject));
      env->getClass(File::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "pathSeparator", make_descriptor(j2p(*File::pathSeparator)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "pathSeparatorChar", make_descriptor(File::pathSeparatorChar));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "separator", make_descriptor(j2p(*File::separator)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "separatorChar", make_descriptor(File::separatorChar));
    }

    static PyObject *t_File_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, File::initializeClass, 1)))
        return NULL;
      return t_File::wrap_Object(File(((t_File *) arg)->object.this$));
    }
    static PyObject *t_File_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, File::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_File_init_(t_File *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = File(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          File a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "ks", File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = File(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = File(a0, a1));
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

    static PyObject *t_File_canExecute(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canExecute());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_canRead(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canRead());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_canWrite(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canWrite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_compareTo(t_File *self, PyObject *arg)
    {
      File a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "k", File::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_File_createNewFile(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.createNewFile());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_createTempFile(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File result((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            OBJ_CALL(result = ::java::io::File::createTempFile(a0, a1));
            return t_File::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File a2((jobject) NULL);
          File result((jobject) NULL);

          if (!parseArgs(args, "ssk", File::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::io::File::createTempFile(a0, a1, a2));
            return t_File::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "createTempFile", args);
      return NULL;
    }

    static PyObject *t_File_delete(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.delete$());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_deleteOnExit(t_File *self)
    {
      OBJ_CALL(self->object.deleteOnExit());
      Py_RETURN_NONE;
    }

    static PyObject *t_File_equals(t_File *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_File_exists(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.exists());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_getAbsoluteFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getAbsoluteFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getAbsolutePath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getAbsolutePath());
      return j2p(result);
    }

    static PyObject *t_File_getCanonicalFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getCanonicalPath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalPath());
      return j2p(result);
    }

    static PyObject *t_File_getFreeSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getFreeSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_getName(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_File_getParent(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getParent());
      return j2p(result);
    }

    static PyObject *t_File_getParentFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getParentFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getPath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPath());
      return j2p(result);
    }

    static PyObject *t_File_getTotalSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getTotalSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_getUsableSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getUsableSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_hashCode(t_File *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_File_isAbsolute(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAbsolute());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isDirectory(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isDirectory());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isFile(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isFile());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isHidden(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isHidden());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_lastModified(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.lastModified());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_length(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.length());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_list(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.list());
          return JArray<jstring>(result.this$).wrap();
        }
        break;
       case 1:
        {
          ::java::io::FilenameFilter a0((jobject) NULL);
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FilenameFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.list(a0));
            return JArray<jstring>(result.this$).wrap();
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "list", args);
      return NULL;
    }

    static PyObject *t_File_listFiles(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< File > result((jobject) NULL);
          OBJ_CALL(result = self->object.listFiles());
          return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
        }
        break;
       case 1:
        {
          ::java::io::FileFilter a0((jobject) NULL);
          JArray< File > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.listFiles(a0));
            return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
          }
        }
        {
          ::java::io::FilenameFilter a0((jobject) NULL);
          JArray< File > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FilenameFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.listFiles(a0));
            return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "listFiles", args);
      return NULL;
    }

    static PyObject *t_File_listRoots(PyTypeObject *type)
    {
      JArray< File > result((jobject) NULL);
      OBJ_CALL(result = ::java::io::File::listRoots());
      return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
    }

    static PyObject *t_File_mkdir(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.mkdir());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_mkdirs(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.mkdirs());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_renameTo(t_File *self, PyObject *arg)
    {
      File a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", File::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.renameTo(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "renameTo", arg);
      return NULL;
    }

    static PyObject *t_File_setExecutable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setExecutable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setExecutable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setExecutable", args);
      return NULL;
    }

    static PyObject *t_File_setLastModified(t_File *self, PyObject *arg)
    {
      jlong a0;
      jboolean result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.setLastModified(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "setLastModified", arg);
      return NULL;
    }

    static PyObject *t_File_setReadOnly(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.setReadOnly());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_setReadable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setReadable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setReadable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setReadable", args);
      return NULL;
    }

    static PyObject *t_File_setWritable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setWritable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setWritable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setWritable", args);
      return NULL;
    }

    static PyObject *t_File_toString(t_File *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_File_toURL(t_File *self)
    {
      ::java::net::URL result((jobject) NULL);
      OBJ_CALL(result = self->object.toURL());
      return ::java::net::t_URL::wrap_Object(result);
    }

    static PyObject *t_File_get__absolute(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAbsolute());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__absoluteFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getAbsoluteFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__absolutePath(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getAbsolutePath());
      return j2p(value);
    }

    static PyObject *t_File_get__canonicalFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__canonicalPath(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalPath());
      return j2p(value);
    }

    static PyObject *t_File_get__directory(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isDirectory());
      Py_RETURN_BOOL(value);
    }

    static int t_File_set__executable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setExecutable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "executable", arg);
      return -1;
    }

    static PyObject *t_File_get__file(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isFile());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__freeSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getFreeSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_File_get__hidden(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isHidden());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__name(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_File_get__parent(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getParent());
      return j2p(value);
    }

    static PyObject *t_File_get__parentFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getParentFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__path(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPath());
      return j2p(value);
    }

    static int t_File_set__readable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setReadable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "readable", arg);
      return -1;
    }

    static PyObject *t_File_get__totalSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getTotalSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_File_get__usableSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getUsableSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static int t_File_set__writable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setWritable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "writable", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/GroundPointing.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *GroundPointing::class$ = NULL;
      jmethodID *GroundPointing::mids$ = NULL;
      bool GroundPointing::live$ = false;

      jclass GroundPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/GroundPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitudeRotation_969253bc78d7a272] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_01363f58d35f60d4] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getBodyFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getTargetPV_99b96e260ceb5fe3] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getTargetPV_ab0341569f219f18] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPosition_e8315239cb836c8f] = env->getMethodID(cls, "getTargetPosition", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getTargetPosition_00b397d023000862] = env->getMethodID(cls, "getTargetPosition", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::Attitude GroundPointing::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude GroundPointing::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation GroundPointing::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_969253bc78d7a272], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation GroundPointing::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_01363f58d35f60d4], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Frame GroundPointing::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_c8fe21bcdac65bf6]));
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
      static PyObject *t_GroundPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GroundPointing_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GroundPointing_getAttitude(t_GroundPointing *self, PyObject *args);
      static PyObject *t_GroundPointing_getAttitudeRotation(t_GroundPointing *self, PyObject *args);
      static PyObject *t_GroundPointing_getBodyFrame(t_GroundPointing *self);
      static PyObject *t_GroundPointing_get__bodyFrame(t_GroundPointing *self, void *data);
      static PyGetSetDef t_GroundPointing__fields_[] = {
        DECLARE_GET_FIELD(t_GroundPointing, bodyFrame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GroundPointing__methods_[] = {
        DECLARE_METHOD(t_GroundPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GroundPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GroundPointing, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_GroundPointing, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_GroundPointing, getBodyFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GroundPointing)[] = {
        { Py_tp_methods, t_GroundPointing__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GroundPointing__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GroundPointing)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GroundPointing, t_GroundPointing, GroundPointing);

      void t_GroundPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(GroundPointing), &PY_TYPE_DEF(GroundPointing), module, "GroundPointing", 0);
      }

      void t_GroundPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "class_", make_descriptor(GroundPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "wrapfn_", make_descriptor(t_GroundPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GroundPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GroundPointing::initializeClass, 1)))
          return NULL;
        return t_GroundPointing::wrap_Object(GroundPointing(((t_GroundPointing *) arg)->object.this$));
      }
      static PyObject *t_GroundPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GroundPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GroundPointing_getAttitude(t_GroundPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_GroundPointing_getAttitudeRotation(t_GroundPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_GroundPointing_getBodyFrame(t_GroundPointing *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_GroundPointing_get__bodyFrame(t_GroundPointing *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/util/List.h"
#include "org/hipparchus/distribution/multivariate/MultivariateNormalDistribution.h"
#include "java/lang/Double.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MixtureMultivariateNormalDistribution::class$ = NULL;
        jmethodID *MixtureMultivariateNormalDistribution::mids$ = NULL;
        bool MixtureMultivariateNormalDistribution::live$ = false;

        jclass MixtureMultivariateNormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_init$_feee9201706f7cee] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;Ljava/util/List;)V");
            mids$[mid_init$_dde7489d9653e5fb] = env->getMethodID(cls, "<init>", "([D[[D[[[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const ::java::util::List & a0) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const ::java::util::List & a1) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_feee9201706f7cee, a0.this$, a1.this$)) {}

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< JArray< jdouble > > > & a2) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_dde7489d9653e5fb, a0.this$, a1.this$, a2.this$)) {}
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
      namespace multivariate {
        static PyObject *t_MixtureMultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateNormalDistribution_of_(t_MixtureMultivariateNormalDistribution *self, PyObject *args);
        static int t_MixtureMultivariateNormalDistribution_init_(t_MixtureMultivariateNormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MixtureMultivariateNormalDistribution_get__parameters_(t_MixtureMultivariateNormalDistribution *self, void *data);
        static PyGetSetDef t_MixtureMultivariateNormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MixtureMultivariateNormalDistribution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MixtureMultivariateNormalDistribution__methods_[] = {
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MixtureMultivariateNormalDistribution)[] = {
          { Py_tp_methods, t_MixtureMultivariateNormalDistribution__methods_ },
          { Py_tp_init, (void *) t_MixtureMultivariateNormalDistribution_init_ },
          { Py_tp_getset, t_MixtureMultivariateNormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MixtureMultivariateNormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MixtureMultivariateNormalDistribution, t_MixtureMultivariateNormalDistribution, MixtureMultivariateNormalDistribution);
        PyObject *t_MixtureMultivariateNormalDistribution::wrap_Object(const MixtureMultivariateNormalDistribution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateNormalDistribution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateNormalDistribution *self = (t_MixtureMultivariateNormalDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MixtureMultivariateNormalDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateNormalDistribution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateNormalDistribution *self = (t_MixtureMultivariateNormalDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MixtureMultivariateNormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MixtureMultivariateNormalDistribution), &PY_TYPE_DEF(MixtureMultivariateNormalDistribution), module, "MixtureMultivariateNormalDistribution", 0);
        }

        void t_MixtureMultivariateNormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "class_", make_descriptor(MixtureMultivariateNormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "wrapfn_", make_descriptor(t_MixtureMultivariateNormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MixtureMultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MixtureMultivariateNormalDistribution::initializeClass, 1)))
            return NULL;
          return t_MixtureMultivariateNormalDistribution::wrap_Object(MixtureMultivariateNormalDistribution(((t_MixtureMultivariateNormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_MixtureMultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MixtureMultivariateNormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MixtureMultivariateNormalDistribution_of_(t_MixtureMultivariateNormalDistribution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MixtureMultivariateNormalDistribution_init_(t_MixtureMultivariateNormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::hipparchus::random::RandomGenerator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
                break;
              }
            }
            goto err;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< JArray< jdouble > > > a2((jobject) NULL);
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[D[[[D", &a0, &a1, &a2))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
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
        static PyObject *t_MixtureMultivariateNormalDistribution_get__parameters_(t_MixtureMultivariateNormalDistribution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/Parser.h"
#include "org/orekit/utils/units/PowerTerm.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *Parser::class$ = NULL;
        jmethodID *Parser::mids$ = NULL;
        bool Parser::live$ = false;

        jclass Parser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/Parser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildTermsList_720e76ad3b86a46a] = env->getStaticMethodID(cls, "buildTermsList", "(Ljava/lang/String;)Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List Parser::buildTermsList(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildTermsList_720e76ad3b86a46a], a0.this$));
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
    namespace utils {
      namespace units {
        static PyObject *t_Parser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Parser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Parser_buildTermsList(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_Parser__methods_[] = {
          DECLARE_METHOD(t_Parser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Parser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Parser, buildTermsList, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Parser)[] = {
          { Py_tp_methods, t_Parser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Parser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Parser, t_Parser, Parser);

        void t_Parser::install(PyObject *module)
        {
          installType(&PY_TYPE(Parser), &PY_TYPE_DEF(Parser), module, "Parser", 0);
        }

        void t_Parser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "class_", make_descriptor(Parser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "wrapfn_", make_descriptor(t_Parser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Parser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Parser::initializeClass, 1)))
            return NULL;
          return t_Parser::wrap_Object(Parser(((t_Parser *) arg)->object.this$));
        }
        static PyObject *t_Parser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Parser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Parser_buildTermsList(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::utils::units::Parser::buildTermsList(a0));
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(PowerTerm));
          }

          PyErr_SetArgsError(type, "buildTermsList", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *FieldButcherArrayProvider::class$ = NULL;
        jmethodID *FieldButcherArrayProvider::mids$ = NULL;
        bool FieldButcherArrayProvider::live$ = false;

        jclass FieldButcherArrayProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/FieldButcherArrayProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getA_dd8485a0eb2e2903] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_01c7d10e96d5cf94] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_01c7d10e96d5cf94] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldButcherArrayProvider::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_dd8485a0eb2e2903]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldButcherArrayProvider::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_01c7d10e96d5cf94]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldButcherArrayProvider::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_01c7d10e96d5cf94]));
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
        static PyObject *t_FieldButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldButcherArrayProvider_of_(t_FieldButcherArrayProvider *self, PyObject *args);
        static PyObject *t_FieldButcherArrayProvider_getA(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_getB(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_getC(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_get__a(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__b(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__c(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__parameters_(t_FieldButcherArrayProvider *self, void *data);
        static PyGetSetDef t_FieldButcherArrayProvider__fields_[] = {
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, a),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, b),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, c),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldButcherArrayProvider__methods_[] = {
          DECLARE_METHOD(t_FieldButcherArrayProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getA, METH_NOARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getB, METH_NOARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getC, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldButcherArrayProvider)[] = {
          { Py_tp_methods, t_FieldButcherArrayProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldButcherArrayProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldButcherArrayProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldButcherArrayProvider, t_FieldButcherArrayProvider, FieldButcherArrayProvider);
        PyObject *t_FieldButcherArrayProvider::wrap_Object(const FieldButcherArrayProvider& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldButcherArrayProvider::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldButcherArrayProvider *self = (t_FieldButcherArrayProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldButcherArrayProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldButcherArrayProvider::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldButcherArrayProvider *self = (t_FieldButcherArrayProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldButcherArrayProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldButcherArrayProvider), &PY_TYPE_DEF(FieldButcherArrayProvider), module, "FieldButcherArrayProvider", 0);
        }

        void t_FieldButcherArrayProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "class_", make_descriptor(FieldButcherArrayProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "wrapfn_", make_descriptor(t_FieldButcherArrayProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldButcherArrayProvider::initializeClass, 1)))
            return NULL;
          return t_FieldButcherArrayProvider::wrap_Object(FieldButcherArrayProvider(((t_FieldButcherArrayProvider *) arg)->object.this$));
        }
        static PyObject *t_FieldButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldButcherArrayProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldButcherArrayProvider_of_(t_FieldButcherArrayProvider *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldButcherArrayProvider_getA(t_FieldButcherArrayProvider *self)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getA());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_FieldButcherArrayProvider_getB(t_FieldButcherArrayProvider *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getB());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldButcherArrayProvider_getC(t_FieldButcherArrayProvider *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getC());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
        static PyObject *t_FieldButcherArrayProvider_get__parameters_(t_FieldButcherArrayProvider *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldButcherArrayProvider_get__a(t_FieldButcherArrayProvider *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_FieldButcherArrayProvider_get__b(t_FieldButcherArrayProvider *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldButcherArrayProvider_get__c(t_FieldButcherArrayProvider *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/FixedRotation.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *FixedRotation::class$ = NULL;
        jmethodID *FixedRotation::mids$ = NULL;
        bool FixedRotation::live$ = false;

        jclass FixedRotation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/FixedRotation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_78d52e05e47a4474] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_getParametersDrivers_a68a17dd093f796d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_5b56f31df08e1557] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_e434856d6b086dd4] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FixedRotation::FixedRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78d52e05e47a4474, a0.this$, a1.this$, a2)) {}

        ::java::util::stream::Stream FixedRotation::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a68a17dd093f796d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_5b56f31df08e1557], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
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
        static PyObject *t_FixedRotation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FixedRotation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FixedRotation_init_(t_FixedRotation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FixedRotation_getParametersDrivers(t_FixedRotation *self);
        static PyObject *t_FixedRotation_transformLOS(t_FixedRotation *self, PyObject *args);
        static PyObject *t_FixedRotation_get__parametersDrivers(t_FixedRotation *self, void *data);
        static PyGetSetDef t_FixedRotation__fields_[] = {
          DECLARE_GET_FIELD(t_FixedRotation, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FixedRotation__methods_[] = {
          DECLARE_METHOD(t_FixedRotation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedRotation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedRotation, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_FixedRotation, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FixedRotation)[] = {
          { Py_tp_methods, t_FixedRotation__methods_ },
          { Py_tp_init, (void *) t_FixedRotation_init_ },
          { Py_tp_getset, t_FixedRotation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FixedRotation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FixedRotation, t_FixedRotation, FixedRotation);

        void t_FixedRotation::install(PyObject *module)
        {
          installType(&PY_TYPE(FixedRotation), &PY_TYPE_DEF(FixedRotation), module, "FixedRotation", 0);
        }

        void t_FixedRotation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "class_", make_descriptor(FixedRotation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "wrapfn_", make_descriptor(t_FixedRotation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FixedRotation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FixedRotation::initializeClass, 1)))
            return NULL;
          return t_FixedRotation::wrap_Object(FixedRotation(((t_FixedRotation *) arg)->object.this$));
        }
        static PyObject *t_FixedRotation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FixedRotation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FixedRotation_init_(t_FixedRotation *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          FixedRotation object((jobject) NULL);

          if (!parseArgs(args, "skD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = FixedRotation(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FixedRotation_getParametersDrivers(t_FixedRotation *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_FixedRotation_transformLOS(t_FixedRotation *self, PyObject *args)
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

        static PyObject *t_FixedRotation_get__parametersDrivers(t_FixedRotation *self, void *data)
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
#include "org/hipparchus/optim/univariate/UnivariateOptimizer.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *UnivariateOptimizer::class$ = NULL;
        jmethodID *UnivariateOptimizer::mids$ = NULL;
        bool UnivariateOptimizer::live$ = false;

        jclass UnivariateOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/UnivariateOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getGoalType_2e76f357c1c85ac8] = env->getMethodID(cls, "getGoalType", "()Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
            mids$[mid_getMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getStartValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getStartValue", "()D");
            mids$[mid_optimize_dfd82b5526071a92] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_parseOptimizationData_a5cd04a701a45f77] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
            mids$[mid_computeObjectiveValue_0ba5fed9597b693e] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::nonlinear::scalar::GoalType UnivariateOptimizer::getGoalType() const
        {
          return ::org::hipparchus::optim::nonlinear::scalar::GoalType(env->callObjectMethod(this$, mids$[mid_getGoalType_2e76f357c1c85ac8]));
        }

        jdouble UnivariateOptimizer::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_456d9a2f64d6b28d]);
        }

        jdouble UnivariateOptimizer::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_456d9a2f64d6b28d]);
        }

        jdouble UnivariateOptimizer::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::optim::univariate::UnivariatePointValuePair UnivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_dfd82b5526071a92], a0.this$));
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
        static PyObject *t_UnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateOptimizer_of_(t_UnivariateOptimizer *self, PyObject *args);
        static PyObject *t_UnivariateOptimizer_getGoalType(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getMax(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getMin(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getStartValue(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_optimize(t_UnivariateOptimizer *self, PyObject *args);
        static PyObject *t_UnivariateOptimizer_get__goalType(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__max(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__min(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__startValue(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__parameters_(t_UnivariateOptimizer *self, void *data);
        static PyGetSetDef t_UnivariateOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateOptimizer, goalType),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, max),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, min),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, startValue),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateOptimizer__methods_[] = {
          DECLARE_METHOD(t_UnivariateOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateOptimizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getGoalType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getMax, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getMin, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getStartValue, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, optimize, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateOptimizer)[] = {
          { Py_tp_methods, t_UnivariateOptimizer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::BaseOptimizer),
          NULL
        };

        DEFINE_TYPE(UnivariateOptimizer, t_UnivariateOptimizer, UnivariateOptimizer);
        PyObject *t_UnivariateOptimizer::wrap_Object(const UnivariateOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateOptimizer *self = (t_UnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateOptimizer *self = (t_UnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateOptimizer), &PY_TYPE_DEF(UnivariateOptimizer), module, "UnivariateOptimizer", 0);
        }

        void t_UnivariateOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "class_", make_descriptor(UnivariateOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "wrapfn_", make_descriptor(t_UnivariateOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateOptimizer::initializeClass, 1)))
            return NULL;
          return t_UnivariateOptimizer::wrap_Object(UnivariateOptimizer(((t_UnivariateOptimizer *) arg)->object.this$));
        }
        static PyObject *t_UnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateOptimizer_of_(t_UnivariateOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_UnivariateOptimizer_getGoalType(t_UnivariateOptimizer *self)
        {
          ::org::hipparchus::optim::nonlinear::scalar::GoalType result((jobject) NULL);
          OBJ_CALL(result = self->object.getGoalType());
          return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(result);
        }

        static PyObject *t_UnivariateOptimizer_getMax(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_getMin(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_getStartValue(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_optimize(t_UnivariateOptimizer *self, PyObject *args)
        {
          JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateOptimizer), (PyObject *) self, "optimize", args, 2);
        }
        static PyObject *t_UnivariateOptimizer_get__parameters_(t_UnivariateOptimizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateOptimizer_get__goalType(t_UnivariateOptimizer *self, void *data)
        {
          ::org::hipparchus::optim::nonlinear::scalar::GoalType value((jobject) NULL);
          OBJ_CALL(value = self->object.getGoalType());
          return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(value);
        }

        static PyObject *t_UnivariateOptimizer_get__max(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateOptimizer_get__min(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateOptimizer_get__startValue(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *TileAiming::class$ = NULL;
          jmethodID *TileAiming::mids$ = NULL;
          bool TileAiming::live$ = false;

          jclass TileAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/TileAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_alongTileDirection_c57b22dac91cacbc] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_a6156df500549a58] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TileAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_c57b22dac91cacbc], a0.this$, a1.this$));
          }

          ::java::util::List TileAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_a6156df500549a58]));
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
        namespace tessellation {
          static PyObject *t_TileAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TileAiming_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TileAiming_alongTileDirection(t_TileAiming *self, PyObject *args);
          static PyObject *t_TileAiming_getSingularPoints(t_TileAiming *self);
          static PyObject *t_TileAiming_get__singularPoints(t_TileAiming *self, void *data);
          static PyGetSetDef t_TileAiming__fields_[] = {
            DECLARE_GET_FIELD(t_TileAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TileAiming__methods_[] = {
            DECLARE_METHOD(t_TileAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TileAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TileAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_TileAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TileAiming)[] = {
            { Py_tp_methods, t_TileAiming__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TileAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TileAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TileAiming, t_TileAiming, TileAiming);

          void t_TileAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(TileAiming), &PY_TYPE_DEF(TileAiming), module, "TileAiming", 0);
          }

          void t_TileAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "class_", make_descriptor(TileAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "wrapfn_", make_descriptor(t_TileAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TileAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TileAiming::initializeClass, 1)))
              return NULL;
            return t_TileAiming::wrap_Object(TileAiming(((t_TileAiming *) arg)->object.this$));
          }
          static PyObject *t_TileAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TileAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TileAiming_alongTileDirection(t_TileAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_TileAiming_getSingularPoints(t_TileAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_TileAiming_get__singularPoints(t_TileAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/HighamHall54FieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *HighamHall54FieldIntegrator::class$ = NULL;
        jmethodID *HighamHall54FieldIntegrator::mids$ = NULL;
        bool HighamHall54FieldIntegrator::live$ = false;

        jclass HighamHall54FieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/HighamHall54FieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f7a36558ff3a2d8e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_348f4c168cbaf312] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_dd8485a0eb2e2903] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_01c7d10e96d5cf94] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_01c7d10e96d5cf94] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_f2668ef5485fd663] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/HighamHall54FieldStateInterpolator;");
            mids$[mid_estimateError_681c74af7b6fa1aa] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54FieldIntegrator::HighamHall54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_f7a36558ff3a2d8e, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        HighamHall54FieldIntegrator::HighamHall54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_348f4c168cbaf312, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > HighamHall54FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_dd8485a0eb2e2903]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HighamHall54FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_01c7d10e96d5cf94]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HighamHall54FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_01c7d10e96d5cf94]));
        }

        jint HighamHall54FieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
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
        static PyObject *t_HighamHall54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegrator_of_(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static int t_HighamHall54FieldIntegrator_init_(t_HighamHall54FieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54FieldIntegrator_getA(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getB(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getC(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getOrder(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_get__a(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__b(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__c(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__order(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__parameters_(t_HighamHall54FieldIntegrator *self, void *data);
        static PyGetSetDef t_HighamHall54FieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, a),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, b),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, c),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, order),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54FieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54FieldIntegrator)[] = {
          { Py_tp_methods, t_HighamHall54FieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_HighamHall54FieldIntegrator_init_ },
          { Py_tp_getset, t_HighamHall54FieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54FieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(HighamHall54FieldIntegrator, t_HighamHall54FieldIntegrator, HighamHall54FieldIntegrator);
        PyObject *t_HighamHall54FieldIntegrator::wrap_Object(const HighamHall54FieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegrator *self = (t_HighamHall54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HighamHall54FieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegrator *self = (t_HighamHall54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HighamHall54FieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54FieldIntegrator), &PY_TYPE_DEF(HighamHall54FieldIntegrator), module, "HighamHall54FieldIntegrator", 0);
        }

        void t_HighamHall54FieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "class_", make_descriptor(HighamHall54FieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "wrapfn_", make_descriptor(t_HighamHall54FieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54FieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_HighamHall54FieldIntegrator::wrap_Object(HighamHall54FieldIntegrator(((t_HighamHall54FieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54FieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HighamHall54FieldIntegrator_of_(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HighamHall54FieldIntegrator_init_(t_HighamHall54FieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              HighamHall54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = HighamHall54FieldIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              HighamHall54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = HighamHall54FieldIntegrator(a0, a1, a2, a3, a4));
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

        static PyObject *t_HighamHall54FieldIntegrator_getA(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getB(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getC(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getOrder(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getOrder", args, 2);
        }
        static PyObject *t_HighamHall54FieldIntegrator_get__parameters_(t_HighamHall54FieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__a(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__b(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__c(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__order(t_HighamHall54FieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer$IdentityPreconditioner::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer$IdentityPreconditioner::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer$IdentityPreconditioner::live$ = false;

            jclass NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_precondition_0f29b7d9f77b462e] = env->getMethodID(cls, "precondition", "([D[D)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer$IdentityPreconditioner::NonLinearConjugateGradientOptimizer$IdentityPreconditioner() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            JArray< jdouble > NonLinearConjugateGradientOptimizer$IdentityPreconditioner::precondition(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_precondition_0f29b7d9f77b462e], a0.this$, a1.this$));
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
          namespace gradient {
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_of_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args);
            static int t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_precondition(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_get__parameters_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, precondition, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__methods_ },
              { Py_tp_init, (void *) t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_ },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, NonLinearConjugateGradientOptimizer$IdentityPreconditioner);
            PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(const NonLinearConjugateGradientOptimizer$IdentityPreconditioner& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self = (t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self = (t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), module, "NonLinearConjugateGradientOptimizer$IdentityPreconditioner", 0);
            }

            void t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "class_", make_descriptor(NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(NonLinearConjugateGradientOptimizer$IdentityPreconditioner(((t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_of_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args, PyObject *kwds)
            {
              NonLinearConjugateGradientOptimizer$IdentityPreconditioner object((jobject) NULL);

              INT_CALL(object = NonLinearConjugateGradientOptimizer$IdentityPreconditioner());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);

              return 0;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_precondition(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args)
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.precondition(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "precondition", args);
              return NULL;
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_get__parameters_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, void *data)
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
#include "org/hipparchus/optim/univariate/BracketFinder.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *BracketFinder::class$ = NULL;
        jmethodID *BracketFinder::mids$ = NULL;
        bool BracketFinder::live$ = false;

        jclass BracketFinder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/BracketFinder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_18b1ce6f78e2ded3] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFHi_456d9a2f64d6b28d] = env->getMethodID(cls, "getFHi", "()D");
            mids$[mid_getFLo_456d9a2f64d6b28d] = env->getMethodID(cls, "getFLo", "()D");
            mids$[mid_getFMid_456d9a2f64d6b28d] = env->getMethodID(cls, "getFMid", "()D");
            mids$[mid_getHi_456d9a2f64d6b28d] = env->getMethodID(cls, "getHi", "()D");
            mids$[mid_getLo_456d9a2f64d6b28d] = env->getMethodID(cls, "getLo", "()D");
            mids$[mid_getMaxEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getMid_456d9a2f64d6b28d] = env->getMethodID(cls, "getMid", "()D");
            mids$[mid_search_5a3ad5111e4a82d1] = env->getMethodID(cls, "search", "(Lorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/optim/nonlinear/scalar/GoalType;DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketFinder::BracketFinder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        BracketFinder::BracketFinder(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_18b1ce6f78e2ded3, a0, a1)) {}

        jint BracketFinder::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
        }

        jdouble BracketFinder::getFHi() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFHi_456d9a2f64d6b28d]);
        }

        jdouble BracketFinder::getFLo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFLo_456d9a2f64d6b28d]);
        }

        jdouble BracketFinder::getFMid() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFMid_456d9a2f64d6b28d]);
        }

        jdouble BracketFinder::getHi() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHi_456d9a2f64d6b28d]);
        }

        jdouble BracketFinder::getLo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLo_456d9a2f64d6b28d]);
        }

        jint BracketFinder::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_f2f64475e4580546]);
        }

        jdouble BracketFinder::getMid() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMid_456d9a2f64d6b28d]);
        }

        void BracketFinder::search(const ::org::hipparchus::analysis::UnivariateFunction & a0, const ::org::hipparchus::optim::nonlinear::scalar::GoalType & a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_search_5a3ad5111e4a82d1], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_BracketFinder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketFinder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BracketFinder_init_(t_BracketFinder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketFinder_getEvaluations(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getFHi(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getFLo(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getFMid(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getHi(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getLo(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getMaxEvaluations(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getMid(t_BracketFinder *self);
        static PyObject *t_BracketFinder_search(t_BracketFinder *self, PyObject *args);
        static PyObject *t_BracketFinder_get__evaluations(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__fHi(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__fLo(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__fMid(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__hi(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__lo(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__maxEvaluations(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__mid(t_BracketFinder *self, void *data);
        static PyGetSetDef t_BracketFinder__fields_[] = {
          DECLARE_GET_FIELD(t_BracketFinder, evaluations),
          DECLARE_GET_FIELD(t_BracketFinder, fHi),
          DECLARE_GET_FIELD(t_BracketFinder, fLo),
          DECLARE_GET_FIELD(t_BracketFinder, fMid),
          DECLARE_GET_FIELD(t_BracketFinder, hi),
          DECLARE_GET_FIELD(t_BracketFinder, lo),
          DECLARE_GET_FIELD(t_BracketFinder, maxEvaluations),
          DECLARE_GET_FIELD(t_BracketFinder, mid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketFinder__methods_[] = {
          DECLARE_METHOD(t_BracketFinder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketFinder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketFinder, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getFHi, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getFLo, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getFMid, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getHi, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getLo, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getMaxEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getMid, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, search, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketFinder)[] = {
          { Py_tp_methods, t_BracketFinder__methods_ },
          { Py_tp_init, (void *) t_BracketFinder_init_ },
          { Py_tp_getset, t_BracketFinder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketFinder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketFinder, t_BracketFinder, BracketFinder);

        void t_BracketFinder::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketFinder), &PY_TYPE_DEF(BracketFinder), module, "BracketFinder", 0);
        }

        void t_BracketFinder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketFinder), "class_", make_descriptor(BracketFinder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketFinder), "wrapfn_", make_descriptor(t_BracketFinder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketFinder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketFinder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketFinder::initializeClass, 1)))
            return NULL;
          return t_BracketFinder::wrap_Object(BracketFinder(((t_BracketFinder *) arg)->object.this$));
        }
        static PyObject *t_BracketFinder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketFinder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BracketFinder_init_(t_BracketFinder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BracketFinder object((jobject) NULL);

              INT_CALL(object = BracketFinder());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jint a1;
              BracketFinder object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = BracketFinder(a0, a1));
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

        static PyObject *t_BracketFinder_getEvaluations(t_BracketFinder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketFinder_getFHi(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFHi());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getFLo(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFLo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getFMid(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFMid());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getHi(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHi());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getLo(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getMaxEvaluations(t_BracketFinder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketFinder_getMid(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMid());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_search(t_BracketFinder *self, PyObject *args)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          ::org::hipparchus::optim::nonlinear::scalar::GoalType a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          jdouble a3;

          if (!parseArgs(args, "kKDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::optim::nonlinear::scalar::GoalType::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::parameters_, &a2, &a3))
          {
            OBJ_CALL(self->object.search(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "search", args);
          return NULL;
        }

        static PyObject *t_BracketFinder_get__evaluations(t_BracketFinder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketFinder_get__fHi(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFHi());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__fLo(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFLo());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__fMid(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFMid());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__hi(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHi());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__lo(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLo());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__maxEvaluations(t_BracketFinder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketFinder_get__mid(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMid());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonAbstractGenerator.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
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

            ::java::lang::Class *PythonAbstractGenerator::class$ = NULL;
            jmethodID *PythonAbstractGenerator::mids$ = NULL;
            bool PythonAbstractGenerator::live$ = false;

            jclass PythonAbstractGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonAbstractGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a89f5039559ee5f9] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;DZ)V");
                mids$[mid_endMessage_e939c6558ae8d313] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormat_b51f613f857a5e84] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_startMessage_f7e4436e61826cb4] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_65de9727799c5641] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_110375161a97bc67] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractGenerator::PythonAbstractGenerator(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, jdouble a2, jboolean a3) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_a89f5039559ee5f9, a0.this$, a1.this$, a2, a3)) {}

            void PythonAbstractGenerator::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonAbstractGenerator::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonAbstractGenerator::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
            static PyObject *t_PythonAbstractGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonAbstractGenerator_init_(t_PythonAbstractGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractGenerator_finalize(t_PythonAbstractGenerator *self);
            static PyObject *t_PythonAbstractGenerator_pythonExtension(t_PythonAbstractGenerator *self, PyObject *args);
            static void JNICALL t_PythonAbstractGenerator_endMessage0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonAbstractGenerator_getFormat1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGenerator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGenerator_startMessage3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static void JNICALL t_PythonAbstractGenerator_writeComments4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonAbstractGenerator_writeEntry5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static PyObject *t_PythonAbstractGenerator_get__self(t_PythonAbstractGenerator *self, void *data);
            static PyGetSetDef t_PythonAbstractGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractGenerator, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractGenerator__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGenerator, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractGenerator, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGenerator)[] = {
              { Py_tp_methods, t_PythonAbstractGenerator__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractGenerator_init_ },
              { Py_tp_getset, t_PythonAbstractGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractGenerator)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractGenerator),
              NULL
            };

            DEFINE_TYPE(PythonAbstractGenerator, t_PythonAbstractGenerator, PythonAbstractGenerator);

            void t_PythonAbstractGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractGenerator), &PY_TYPE_DEF(PythonAbstractGenerator), module, "PythonAbstractGenerator", 1);
            }

            void t_PythonAbstractGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "class_", make_descriptor(PythonAbstractGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "wrapfn_", make_descriptor(t_PythonAbstractGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractGenerator::initializeClass);
              JNINativeMethod methods[] = {
                { "endMessage", "(Ljava/lang/String;)V", (void *) t_PythonAbstractGenerator_endMessage0 },
                { "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonAbstractGenerator_getFormat1 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractGenerator_pythonDecRef2 },
                { "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V", (void *) t_PythonAbstractGenerator_startMessage3 },
                { "writeComments", "(Ljava/util/List;)V", (void *) t_PythonAbstractGenerator_writeComments4 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonAbstractGenerator_writeEntry5 },
              };
              env->registerNatives(cls, methods, 6);
            }

            static PyObject *t_PythonAbstractGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractGenerator::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractGenerator::wrap_Object(PythonAbstractGenerator(((t_PythonAbstractGenerator *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonAbstractGenerator_init_(t_PythonAbstractGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jboolean a3;
              PythonAbstractGenerator object((jobject) NULL);

              if (!parseArgs(args, "ksDZ", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractGenerator(a0, a1, a2, a3));
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

            static PyObject *t_PythonAbstractGenerator_finalize(t_PythonAbstractGenerator *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractGenerator_pythonExtension(t_PythonAbstractGenerator *self, PyObject *args)
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

            static void JNICALL t_PythonAbstractGenerator_endMessage0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "endMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonAbstractGenerator_getFormat1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFormat", result);
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

            static void JNICALL t_PythonAbstractGenerator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractGenerator_startMessage3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *result = PyObject_CallMethod(obj, "startMessage", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonAbstractGenerator_writeComments4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeComments", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonAbstractGenerator_writeEntry5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractGenerator_get__self(t_PythonAbstractGenerator *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "java/io/IOException.h"
#include "org/orekit/time/TimeScales.h"
#include "java/io/InputStream.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
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
          mids$[mid_newBulletinBParser_88a7591545b9a74d] = env->getStaticMethodID(cls, "newBulletinBParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newEopC04Parser_88a7591545b9a74d] = env->getStaticMethodID(cls, "newEopC04Parser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newFinalsColumnsParser_da5ab8db63097002] = env->getStaticMethodID(cls, "newFinalsColumnsParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;Z)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newFinalsXmlParser_88a7591545b9a74d] = env->getStaticMethodID(cls, "newFinalsXmlParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_parse_c09602b54bab1317] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newBulletinBParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newBulletinBParser_88a7591545b9a74d], a0.this$, a1.this$, a2.this$));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newEopC04Parser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newEopC04Parser_88a7591545b9a74d], a0.this$, a1.this$, a2.this$));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newFinalsColumnsParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newFinalsColumnsParser_da5ab8db63097002], a0.this$, a1.this$, a2.this$, a3));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newFinalsXmlParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newFinalsXmlParser_88a7591545b9a74d], a0.this$, a1.this$, a2.this$));
      }

      ::java::util::Collection EopHistoryLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_parse_c09602b54bab1317], a0.this$, a1.this$));
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
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *TimeDependentLOS::class$ = NULL;
        jmethodID *TimeDependentLOS::mids$ = NULL;
        bool TimeDependentLOS::live$ = false;

        jclass TimeDependentLOS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/TimeDependentLOS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getLOS_dadcccbf4b51b382] = env->getMethodID(cls, "getLOS", "(ILorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOSDerivatives_a8f6a7b49980e1fd] = env->getMethodID(cls, "getLOSDerivatives", "(ILorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getNbPixels_f2f64475e4580546] = env->getMethodID(cls, "getNbPixels", "()I");
            mids$[mid_getParametersDrivers_a68a17dd093f796d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeDependentLOS::getLOS(jint a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_dadcccbf4b51b382], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeDependentLOS::getLOSDerivatives(jint a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_a8f6a7b49980e1fd], a0, a1.this$, a2.this$));
        }

        jint TimeDependentLOS::getNbPixels() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixels_f2f64475e4580546]);
        }

        ::java::util::stream::Stream TimeDependentLOS::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a68a17dd093f796d]));
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
        static PyObject *t_TimeDependentLOS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDependentLOS_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDependentLOS_getLOS(t_TimeDependentLOS *self, PyObject *args);
        static PyObject *t_TimeDependentLOS_getLOSDerivatives(t_TimeDependentLOS *self, PyObject *args);
        static PyObject *t_TimeDependentLOS_getNbPixels(t_TimeDependentLOS *self);
        static PyObject *t_TimeDependentLOS_getParametersDrivers(t_TimeDependentLOS *self);
        static PyObject *t_TimeDependentLOS_get__nbPixels(t_TimeDependentLOS *self, void *data);
        static PyObject *t_TimeDependentLOS_get__parametersDrivers(t_TimeDependentLOS *self, void *data);
        static PyGetSetDef t_TimeDependentLOS__fields_[] = {
          DECLARE_GET_FIELD(t_TimeDependentLOS, nbPixels),
          DECLARE_GET_FIELD(t_TimeDependentLOS, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeDependentLOS__methods_[] = {
          DECLARE_METHOD(t_TimeDependentLOS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDependentLOS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDependentLOS, getLOS, METH_VARARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getLOSDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getNbPixels, METH_NOARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeDependentLOS)[] = {
          { Py_tp_methods, t_TimeDependentLOS__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TimeDependentLOS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeDependentLOS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeDependentLOS, t_TimeDependentLOS, TimeDependentLOS);

        void t_TimeDependentLOS::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeDependentLOS), &PY_TYPE_DEF(TimeDependentLOS), module, "TimeDependentLOS", 0);
        }

        void t_TimeDependentLOS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "class_", make_descriptor(TimeDependentLOS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "wrapfn_", make_descriptor(t_TimeDependentLOS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TimeDependentLOS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeDependentLOS::initializeClass, 1)))
            return NULL;
          return t_TimeDependentLOS::wrap_Object(TimeDependentLOS(((t_TimeDependentLOS *) arg)->object.this$));
        }
        static PyObject *t_TimeDependentLOS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeDependentLOS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TimeDependentLOS_getLOS(t_TimeDependentLOS *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "Ik", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getLOS(a0, a1));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLOS", args);
          return NULL;
        }

        static PyObject *t_TimeDependentLOS_getLOSDerivatives(t_TimeDependentLOS *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

          if (!parseArgs(args, "IkK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLOSDerivatives", args);
          return NULL;
        }

        static PyObject *t_TimeDependentLOS_getNbPixels(t_TimeDependentLOS *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPixels());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TimeDependentLOS_getParametersDrivers(t_TimeDependentLOS *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_TimeDependentLOS_get__nbPixels(t_TimeDependentLOS *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPixels());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TimeDependentLOS_get__parametersDrivers(t_TimeDependentLOS *self, void *data)
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
#include "org/hipparchus/distribution/continuous/TriangularDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *TriangularDistribution::class$ = NULL;
        jmethodID *TriangularDistribution::mids$ = NULL;
        bool TriangularDistribution::live$ = false;

        jclass TriangularDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/TriangularDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMode_456d9a2f64d6b28d] = env->getMethodID(cls, "getMode", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TriangularDistribution::TriangularDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        jdouble TriangularDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble TriangularDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble TriangularDistribution::getMode() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMode_456d9a2f64d6b28d]);
        }

        jdouble TriangularDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble TriangularDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble TriangularDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble TriangularDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jdouble TriangularDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
        }

        jboolean TriangularDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
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
        static PyObject *t_TriangularDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TriangularDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TriangularDistribution_init_(t_TriangularDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TriangularDistribution_cumulativeProbability(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_density(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getMode(t_TriangularDistribution *self);
        static PyObject *t_TriangularDistribution_getNumericalMean(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getNumericalVariance(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getSupportLowerBound(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getSupportUpperBound(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_inverseCumulativeProbability(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_isSupportConnected(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_get__mode(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__numericalMean(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__numericalVariance(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportConnected(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportLowerBound(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportUpperBound(t_TriangularDistribution *self, void *data);
        static PyGetSetDef t_TriangularDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_TriangularDistribution, mode),
          DECLARE_GET_FIELD(t_TriangularDistribution, numericalMean),
          DECLARE_GET_FIELD(t_TriangularDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportConnected),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TriangularDistribution__methods_[] = {
          DECLARE_METHOD(t_TriangularDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TriangularDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TriangularDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getMode, METH_NOARGS),
          DECLARE_METHOD(t_TriangularDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TriangularDistribution)[] = {
          { Py_tp_methods, t_TriangularDistribution__methods_ },
          { Py_tp_init, (void *) t_TriangularDistribution_init_ },
          { Py_tp_getset, t_TriangularDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TriangularDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(TriangularDistribution, t_TriangularDistribution, TriangularDistribution);

        void t_TriangularDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(TriangularDistribution), &PY_TYPE_DEF(TriangularDistribution), module, "TriangularDistribution", 0);
        }

        void t_TriangularDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "class_", make_descriptor(TriangularDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "wrapfn_", make_descriptor(t_TriangularDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TriangularDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TriangularDistribution::initializeClass, 1)))
            return NULL;
          return t_TriangularDistribution::wrap_Object(TriangularDistribution(((t_TriangularDistribution *) arg)->object.this$));
        }
        static PyObject *t_TriangularDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TriangularDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TriangularDistribution_init_(t_TriangularDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          TriangularDistribution object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = TriangularDistribution(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TriangularDistribution_cumulativeProbability(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_TriangularDistribution_density(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_TriangularDistribution_getMode(t_TriangularDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMode());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_TriangularDistribution_getNumericalMean(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_TriangularDistribution_getNumericalVariance(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_TriangularDistribution_getSupportLowerBound(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_TriangularDistribution_getSupportUpperBound(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_TriangularDistribution_inverseCumulativeProbability(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_TriangularDistribution_isSupportConnected(t_TriangularDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_TriangularDistribution_get__mode(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMode());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__numericalMean(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__numericalVariance(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__supportConnected(t_TriangularDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_TriangularDistribution_get__supportLowerBound(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__supportUpperBound(t_TriangularDistribution *self, void *data)
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
#include "org/orekit/rugged/raster/TilesCache.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TilesCache::class$ = NULL;
        jmethodID *TilesCache::mids$ = NULL;
        bool TilesCache::live$ = false;

        jclass TilesCache::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TilesCache");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_979cd6d000a98ed6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileFactory;Lorg/orekit/rugged/raster/TileUpdater;I)V");
            mids$[mid_getTile_b80e7ddb61f279c2] = env->getMethodID(cls, "getTile", "(DD)Lorg/orekit/rugged/raster/Tile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TilesCache::TilesCache(const ::org::orekit::rugged::raster::TileFactory & a0, const ::org::orekit::rugged::raster::TileUpdater & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_979cd6d000a98ed6, a0.this$, a1.this$, a2)) {}

        ::org::orekit::rugged::raster::Tile TilesCache::getTile(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile(env->callObjectMethod(this$, mids$[mid_getTile_b80e7ddb61f279c2], a0, a1));
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
        static PyObject *t_TilesCache_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TilesCache_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TilesCache_of_(t_TilesCache *self, PyObject *args);
        static int t_TilesCache_init_(t_TilesCache *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TilesCache_getTile(t_TilesCache *self, PyObject *args);
        static PyObject *t_TilesCache_get__parameters_(t_TilesCache *self, void *data);
        static PyGetSetDef t_TilesCache__fields_[] = {
          DECLARE_GET_FIELD(t_TilesCache, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TilesCache__methods_[] = {
          DECLARE_METHOD(t_TilesCache, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TilesCache, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TilesCache, of_, METH_VARARGS),
          DECLARE_METHOD(t_TilesCache, getTile, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TilesCache)[] = {
          { Py_tp_methods, t_TilesCache__methods_ },
          { Py_tp_init, (void *) t_TilesCache_init_ },
          { Py_tp_getset, t_TilesCache__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TilesCache)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TilesCache, t_TilesCache, TilesCache);
        PyObject *t_TilesCache::wrap_Object(const TilesCache& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TilesCache::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TilesCache *self = (t_TilesCache *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TilesCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TilesCache::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TilesCache *self = (t_TilesCache *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TilesCache::install(PyObject *module)
        {
          installType(&PY_TYPE(TilesCache), &PY_TYPE_DEF(TilesCache), module, "TilesCache", 0);
        }

        void t_TilesCache::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "class_", make_descriptor(TilesCache::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "wrapfn_", make_descriptor(t_TilesCache::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TilesCache_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TilesCache::initializeClass, 1)))
            return NULL;
          return t_TilesCache::wrap_Object(TilesCache(((t_TilesCache *) arg)->object.this$));
        }
        static PyObject *t_TilesCache_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TilesCache::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TilesCache_of_(t_TilesCache *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_TilesCache_init_(t_TilesCache *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::raster::TileFactory a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::raster::TileUpdater a1((jobject) NULL);
          jint a2;
          TilesCache object((jobject) NULL);

          if (!parseArgs(args, "KkI", ::org::orekit::rugged::raster::TileFactory::initializeClass, ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &p0, ::org::orekit::rugged::raster::t_TileFactory::parameters_, &a1, &a2))
          {
            INT_CALL(object = TilesCache(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TilesCache_getTile(t_TilesCache *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::Tile result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getTile(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::rugged::raster::t_Tile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getTile", args);
          return NULL;
        }
        static PyObject *t_TilesCache_get__parameters_(t_TilesCache *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/IterativeLegendreGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *IterativeLegendreGaussIntegrator::class$ = NULL;
        jmethodID *IterativeLegendreGaussIntegrator::mids$ = NULL;
        bool IterativeLegendreGaussIntegrator::live$ = false;

        jclass IterativeLegendreGaussIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/IterativeLegendreGaussIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13f7a72902bf1e20] = env->getMethodID(cls, "<init>", "(IDD)V");
            mids$[mid_init$_c80ec2f7d8b5fe87] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_init$_dd805762d3d9c8b4] = env->getMethodID(cls, "<init>", "(IDDII)V");
            mids$[mid_doIntegrate_456d9a2f64d6b28d] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_13f7a72902bf1e20, a0, a1, a2)) {}

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_c80ec2f7d8b5fe87, a0, a1, a2)) {}

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_dd805762d3d9c8b4, a0, a1, a2, a3, a4)) {}
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
        static PyObject *t_IterativeLegendreGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IterativeLegendreGaussIntegrator_init_(t_IterativeLegendreGaussIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_IterativeLegendreGaussIntegrator__methods_[] = {
          DECLARE_METHOD(t_IterativeLegendreGaussIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreGaussIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IterativeLegendreGaussIntegrator)[] = {
          { Py_tp_methods, t_IterativeLegendreGaussIntegrator__methods_ },
          { Py_tp_init, (void *) t_IterativeLegendreGaussIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IterativeLegendreGaussIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(IterativeLegendreGaussIntegrator, t_IterativeLegendreGaussIntegrator, IterativeLegendreGaussIntegrator);

        void t_IterativeLegendreGaussIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(IterativeLegendreGaussIntegrator), &PY_TYPE_DEF(IterativeLegendreGaussIntegrator), module, "IterativeLegendreGaussIntegrator", 0);
        }

        void t_IterativeLegendreGaussIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "class_", make_descriptor(IterativeLegendreGaussIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "wrapfn_", make_descriptor(t_IterativeLegendreGaussIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IterativeLegendreGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IterativeLegendreGaussIntegrator::initializeClass, 1)))
            return NULL;
          return t_IterativeLegendreGaussIntegrator::wrap_Object(IterativeLegendreGaussIntegrator(((t_IterativeLegendreGaussIntegrator *) arg)->object.this$));
        }
        static PyObject *t_IterativeLegendreGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IterativeLegendreGaussIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IterativeLegendreGaussIntegrator_init_(t_IterativeLegendreGaussIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD", &a0, &a1, &a2))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              jint a1;
              jint a2;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDII", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2, a3, a4));
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldEventDetector.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldEventDetector::class$ = NULL;
        jmethodID *PythonFieldEventDetector::mids$ = NULL;
        bool PythonFieldEventDetector::live$ = false;

        jclass PythonFieldEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_fa8b0a49dc8c921f] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_a33ee6d38a1d69f9] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_e6d4d3215c30992a] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldEventDetector::PythonFieldEventDetector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonFieldEventDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonFieldEventDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonFieldEventDetector::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace events {
        static PyObject *t_PythonFieldEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEventDetector_of_(t_PythonFieldEventDetector *self, PyObject *args);
        static int t_PythonFieldEventDetector_init_(t_PythonFieldEventDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldEventDetector_finalize(t_PythonFieldEventDetector *self);
        static PyObject *t_PythonFieldEventDetector_pythonExtension(t_PythonFieldEventDetector *self, PyObject *args);
        static jobject JNICALL t_PythonFieldEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldEventDetector_getHandler1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonFieldEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldEventDetector_get__self(t_PythonFieldEventDetector *self, void *data);
        static PyObject *t_PythonFieldEventDetector_get__parameters_(t_PythonFieldEventDetector *self, void *data);
        static PyGetSetDef t_PythonFieldEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldEventDetector, self),
          DECLARE_GET_FIELD(t_PythonFieldEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldEventDetector__methods_[] = {
          DECLARE_METHOD(t_PythonFieldEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldEventDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldEventDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldEventDetector)[] = {
          { Py_tp_methods, t_PythonFieldEventDetector__methods_ },
          { Py_tp_init, (void *) t_PythonFieldEventDetector_init_ },
          { Py_tp_getset, t_PythonFieldEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldEventDetector, t_PythonFieldEventDetector, PythonFieldEventDetector);
        PyObject *t_PythonFieldEventDetector::wrap_Object(const PythonFieldEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEventDetector *self = (t_PythonFieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEventDetector *self = (t_PythonFieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldEventDetector), &PY_TYPE_DEF(PythonFieldEventDetector), module, "PythonFieldEventDetector", 1);
        }

        void t_PythonFieldEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "class_", make_descriptor(PythonFieldEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "wrapfn_", make_descriptor(t_PythonFieldEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldEventDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldEventDetector_g0 },
            { "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;", (void *) t_PythonFieldEventDetector_getHandler1 },
            { "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;", (void *) t_PythonFieldEventDetector_getMaxCheckInterval2 },
            { "getMaxIterationCount", "()I", (void *) t_PythonFieldEventDetector_getMaxIterationCount3 },
            { "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldEventDetector_getThreshold4 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldEventDetector_init5 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldEventDetector_pythonDecRef6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonFieldEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldEventDetector::initializeClass, 1)))
            return NULL;
          return t_PythonFieldEventDetector::wrap_Object(PythonFieldEventDetector(((t_PythonFieldEventDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldEventDetector_of_(t_PythonFieldEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldEventDetector_init_(t_PythonFieldEventDetector *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldEventDetector object((jobject) NULL);

          INT_CALL(object = PythonFieldEventDetector());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldEventDetector_finalize(t_PythonFieldEventDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldEventDetector_pythonExtension(t_PythonFieldEventDetector *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("g", result);
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

        static jobject JNICALL t_PythonFieldEventDetector_getHandler1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getHandler", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &value))
          {
            throwTypeError("getHandler", result);
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

        static jobject JNICALL t_PythonFieldEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMaxCheckInterval", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, &value))
          {
            throwTypeError("getMaxCheckInterval", result);
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

        static jint JNICALL t_PythonFieldEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getMaxIterationCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getMaxIterationCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonFieldEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getThreshold", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("getThreshold", result);
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

        static void JNICALL t_PythonFieldEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldEventDetector_get__self(t_PythonFieldEventDetector *self, void *data)
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
        static PyObject *t_PythonFieldEventDetector_get__parameters_(t_PythonFieldEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Log10.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Log10::class$ = NULL;
        jmethodID *Log10::mids$ = NULL;
        bool Log10::live$ = false;

        jclass Log10::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Log10");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log10::Log10() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Log10::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log10::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_Log10_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Log10_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Log10_init_(t_Log10 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Log10_value(t_Log10 *self, PyObject *args);

        static PyMethodDef t_Log10__methods_[] = {
          DECLARE_METHOD(t_Log10, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log10, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log10, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Log10)[] = {
          { Py_tp_methods, t_Log10__methods_ },
          { Py_tp_init, (void *) t_Log10_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Log10)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Log10, t_Log10, Log10);

        void t_Log10::install(PyObject *module)
        {
          installType(&PY_TYPE(Log10), &PY_TYPE_DEF(Log10), module, "Log10", 0);
        }

        void t_Log10::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "class_", make_descriptor(Log10::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "wrapfn_", make_descriptor(t_Log10::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Log10_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Log10::initializeClass, 1)))
            return NULL;
          return t_Log10::wrap_Object(Log10(((t_Log10 *) arg)->object.this$));
        }
        static PyObject *t_Log10_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Log10::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Log10_init_(t_Log10 *self, PyObject *args, PyObject *kwds)
        {
          Log10 object((jobject) NULL);

          INT_CALL(object = Log10());
          self->object = object;

          return 0;
        }

        static PyObject *t_Log10_value(t_Log10 *self, PyObject *args)
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
#include "org/hipparchus/analysis/CalculusFieldMultivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldMultivariateFunction::class$ = NULL;
      jmethodID *CalculusFieldMultivariateFunction::mids$ = NULL;
      bool CalculusFieldMultivariateFunction::live$ = false;

      jclass CalculusFieldMultivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldMultivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_05c598bf3375e090] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldMultivariateFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_05c598bf3375e090], a0.this$));
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
      static PyObject *t_CalculusFieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_of_(t_CalculusFieldMultivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldMultivariateFunction_value(t_CalculusFieldMultivariateFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_get__parameters_(t_CalculusFieldMultivariateFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldMultivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldMultivariateFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldMultivariateFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldMultivariateFunction)[] = {
        { Py_tp_methods, t_CalculusFieldMultivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldMultivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldMultivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldMultivariateFunction, t_CalculusFieldMultivariateFunction, CalculusFieldMultivariateFunction);
      PyObject *t_CalculusFieldMultivariateFunction::wrap_Object(const CalculusFieldMultivariateFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateFunction *self = (t_CalculusFieldMultivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldMultivariateFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateFunction *self = (t_CalculusFieldMultivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldMultivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldMultivariateFunction), &PY_TYPE_DEF(CalculusFieldMultivariateFunction), module, "CalculusFieldMultivariateFunction", 0);
      }

      void t_CalculusFieldMultivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "class_", make_descriptor(CalculusFieldMultivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "wrapfn_", make_descriptor(t_CalculusFieldMultivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldMultivariateFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldMultivariateFunction::wrap_Object(CalculusFieldMultivariateFunction(((t_CalculusFieldMultivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldMultivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldMultivariateFunction_of_(t_CalculusFieldMultivariateFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldMultivariateFunction_value(t_CalculusFieldMultivariateFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldMultivariateFunction_get__parameters_(t_CalculusFieldMultivariateFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
