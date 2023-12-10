#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/TimeSpanParametricAcceleration.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
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
            mids$[mid_init$_043e9efe19e3b3cd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZLorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_init$_292f4a8302d10a85] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_addAccelerationModelValidAfter_03b4f7d8bf49d4bf] = env->getMethodID(cls, "addAccelerationModelValidAfter", "(Lorg/orekit/forces/empirical/AccelerationModel;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addAccelerationModelValidBefore_03b4f7d8bf49d4bf] = env->getMethodID(cls, "addAccelerationModelValidBefore", "(Lorg/orekit/forces/empirical/AccelerationModel;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_extractAccelerationModelRange_56889532bb31616d] = env->getMethodID(cls, "extractAccelerationModelRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_extractParameters_020d17bb8c285475] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_extractParameters_547c908eaeea187e] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAccelerationModel_7cbe637ff309e336] = env->getMethodID(cls, "getAccelerationModel", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/empirical/AccelerationModel;");
            mids$[mid_getAccelerationModelSpan_561a18a65c5f000d] = env->getMethodID(cls, "getAccelerationModelSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFirstSpan_971209c2bf2033e7] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
            DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TimeSpanParametricAcceleration::TimeSpanParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jboolean a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_043e9efe19e3b3cd, a0.this$, a1, a2.this$)) {}

        TimeSpanParametricAcceleration::TimeSpanParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_292f4a8302d10a85, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeSpanParametricAcceleration::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeSpanParametricAcceleration::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        void TimeSpanParametricAcceleration::addAccelerationModelValidAfter(const ::org::orekit::forces::empirical::AccelerationModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAccelerationModelValidAfter_03b4f7d8bf49d4bf], a0.this$, a1.this$);
        }

        void TimeSpanParametricAcceleration::addAccelerationModelValidBefore(const ::org::orekit::forces::empirical::AccelerationModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAccelerationModelValidBefore_03b4f7d8bf49d4bf], a0.this$, a1.this$);
        }

        jboolean TimeSpanParametricAcceleration::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        ::org::orekit::utils::TimeSpanMap TimeSpanParametricAcceleration::extractAccelerationModelRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractAccelerationModelRange_56889532bb31616d], a0.this$, a1.this$));
        }

        JArray< jdouble > TimeSpanParametricAcceleration::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_020d17bb8c285475], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanParametricAcceleration::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_547c908eaeea187e], a0.this$, a1.this$));
        }

        ::org::orekit::forces::empirical::AccelerationModel TimeSpanParametricAcceleration::getAccelerationModel(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::forces::empirical::AccelerationModel(env->callObjectMethod(this$, mids$[mid_getAccelerationModel_7cbe637ff309e336], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanParametricAcceleration::getAccelerationModelSpan(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getAccelerationModelSpan_561a18a65c5f000d], a0.this$));
        }

        ::java::util::stream::Stream TimeSpanParametricAcceleration::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
        }

        ::java::util::stream::Stream TimeSpanParametricAcceleration::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanParametricAcceleration::getFirstSpan() const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_971209c2bf2033e7]));
        }

        ::java::util::List TimeSpanParametricAcceleration::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        void TimeSpanParametricAcceleration::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative1::class$ = NULL;
        jmethodID *FieldUnivariateDerivative1::mids$ = NULL;
        bool FieldUnivariateDerivative1::live$ = false;

        jclass FieldUnivariateDerivative1::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0d5bbe5a55e94255] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_eee0c82b0b9e16e9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_faf9f622bb313f1d] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_acos_faf9f622bb313f1d] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_acosh_faf9f622bb313f1d] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_3756abfe99784434] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_4f53b1a78d86e4a9] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_776b315772318bf4] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_asin_faf9f622bb313f1d] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_asinh_faf9f622bb313f1d] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atan_faf9f622bb313f1d] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atan2_3756abfe99784434] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atanh_faf9f622bb313f1d] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cbrt_faf9f622bb313f1d] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_ceil_faf9f622bb313f1d] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_compose_99107b7eea028191] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_3756abfe99784434] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_4f53b1a78d86e4a9] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_776b315772318bf4] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cos_faf9f622bb313f1d] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cosh_faf9f622bb313f1d] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_3756abfe99784434] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_4f53b1a78d86e4a9] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_776b315772318bf4] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_faf9f622bb313f1d] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_expm1_faf9f622bb313f1d] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_floor_faf9f622bb313f1d] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getDerivative_93058f0552012043] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_570ce0828f81a2c1] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_13960e8902011cba] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field;");
            mids$[mid_getFirstDerivative_eba8e72a22c984ac] = env->getMethodID(cls, "getFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_faf9f622bb313f1d] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_eba8e72a22c984ac] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_5b28be2d3632a5dc] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_3756abfe99784434] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_7477e67148fade45] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_f6fc72e58ad0b372] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_927e2863ff8bbd5a] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_84833ffab2444c53] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_ad7ec14ddbebbf95] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_dae2d10ca222861f] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_aec49115ed7fc040] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_2ca8724db9d3e462] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_9c6292277d9263a0] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_de5081573c870979] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log_faf9f622bb313f1d] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log10_faf9f622bb313f1d] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log1p_faf9f622bb313f1d] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_3756abfe99784434] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_4f53b1a78d86e4a9] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_641724b83819b153] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_776b315772318bf4] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_negate_faf9f622bb313f1d] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_newInstance_4f53b1a78d86e4a9] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_3756abfe99784434] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_4f53b1a78d86e4a9] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_641724b83819b153] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_2a31a7d43797956f] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_reciprocal_faf9f622bb313f1d] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_3756abfe99784434] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_4f53b1a78d86e4a9] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_776b315772318bf4] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_rint_faf9f622bb313f1d] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_rootN_641724b83819b153] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_scalb_641724b83819b153] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sign_faf9f622bb313f1d] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sin_faf9f622bb313f1d] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_faf9f622bb313f1d] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_faf9f622bb313f1d] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_3756abfe99784434] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_4f53b1a78d86e4a9] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_776b315772318bf4] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_tan_faf9f622bb313f1d] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_tanh_faf9f622bb313f1d] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_taylor_616c74807d7607b4] = env->getMethodID(cls, "taylor", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_a4b1871f4d29e58b] = env->getMethodID(cls, "taylor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_faf9f622bb313f1d] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_toDerivativeStructure_aa5c3ca19ecbe240] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_faf9f622bb313f1d] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_ulp_faf9f622bb313f1d] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative1::FieldUnivariateDerivative1(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_0d5bbe5a55e94255, a0.this$)) {}

        FieldUnivariateDerivative1::FieldUnivariateDerivative1(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_eee0c82b0b9e16e9, a0.this$, a1.this$)) {}

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::abs() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_abs_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::acos() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acos_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::acosh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acosh_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_3756abfe99784434], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_4f53b1a78d86e4a9], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_776b315772318bf4], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::asin() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asin_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::asinh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asinh_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atan() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atan2(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan2_3756abfe99784434], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atanh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atanh_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cbrt() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cbrt_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::ceil() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ceil_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_compose_99107b7eea028191], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_3756abfe99784434], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_4f53b1a78d86e4a9], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_776b315772318bf4], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cos() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cos_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cosh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cosh_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_3756abfe99784434], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_4f53b1a78d86e4a9], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_776b315772318bf4], a0.this$));
        }

        jboolean FieldUnivariateDerivative1::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::exp() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_exp_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::expm1() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_expm1_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::floor() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_floor_faf9f622bb313f1d]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_93058f0552012043], a0));
        }

        jint FieldUnivariateDerivative1::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_570ce0828f81a2c1]);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field FieldUnivariateDerivative1::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field(env->callObjectMethod(this$, mids$[mid_getField_13960e8902011cba]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getFirstDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFirstDerivative_eba8e72a22c984ac]));
        }

        jint FieldUnivariateDerivative1::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::getPi() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getPi_faf9f622bb313f1d]));
        }

        jdouble FieldUnivariateDerivative1::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_eba8e72a22c984ac]));
        }

        ::org::hipparchus::Field FieldUnivariateDerivative1::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_5b28be2d3632a5dc]));
        }

        jint FieldUnivariateDerivative1::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::hypot(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_hypot_3756abfe99784434], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< jdouble > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_7477e67148fade45], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_f6fc72e58ad0b372], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< FieldUnivariateDerivative1 > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_927e2863ff8bbd5a], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_84833ffab2444c53], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_ad7ec14ddbebbf95], a0, a1.this$, a2, a3.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3, const FieldUnivariateDerivative1 & a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_dae2d10ca222861f], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3, jdouble a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_aec49115ed7fc040], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldUnivariateDerivative1 & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldUnivariateDerivative1 & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_2ca8724db9d3e462], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3, const FieldUnivariateDerivative1 & a4, const FieldUnivariateDerivative1 & a5, const FieldUnivariateDerivative1 & a6, const FieldUnivariateDerivative1 & a7) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_9c6292277d9263a0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3, jdouble a4, const FieldUnivariateDerivative1 & a5, jdouble a6, const FieldUnivariateDerivative1 & a7) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_de5081573c870979], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log10() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log10_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log1p() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log1p_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_3756abfe99784434], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_4f53b1a78d86e4a9], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_641724b83819b153], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_776b315772318bf4], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::negate() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_negate_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::newInstance(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_newInstance_4f53b1a78d86e4a9], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_3756abfe99784434], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_4f53b1a78d86e4a9], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_641724b83819b153], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jdouble a0, const FieldUnivariateDerivative1 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative1(env->callStaticObjectMethod(cls, mids$[mid_pow_2a31a7d43797956f], a0, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::reciprocal() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_reciprocal_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_3756abfe99784434], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_4f53b1a78d86e4a9], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_776b315772318bf4], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::rint() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rint_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::rootN(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rootN_641724b83819b153], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::scalb(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_scalb_641724b83819b153], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sign() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sign_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sin() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sin_faf9f622bb313f1d]));
        }

        ::org::hipparchus::util::FieldSinCos FieldUnivariateDerivative1::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sinh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sinh_faf9f622bb313f1d]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldUnivariateDerivative1::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sqrt() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sqrt_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_3756abfe99784434], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_4f53b1a78d86e4a9], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_776b315772318bf4], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::tan() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tan_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::tanh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tanh_faf9f622bb313f1d]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::taylor(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_616c74807d7607b4], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::taylor(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_a4b1871f4d29e58b], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::toDegrees() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toDegrees_faf9f622bb313f1d]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative1::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_aa5c3ca19ecbe240]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::toRadians() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toRadians_faf9f622bb313f1d]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::ulp() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ulp_faf9f622bb313f1d]));
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
        static PyObject *t_FieldUnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1_of_(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static int t_FieldUnivariateDerivative1_init_(t_FieldUnivariateDerivative1 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldUnivariateDerivative1_abs(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_acos(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_acosh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_add(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_asin(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_asinh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_atan(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_atan2(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_atanh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_cbrt(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_ceil(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_compose(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_copySign(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_cos(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_cosh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_divide(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_equals(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_exp(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_expm1(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_floor(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getDerivative(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getExponent(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getField(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getFirstDerivative(t_FieldUnivariateDerivative1 *self);
        static PyObject *t_FieldUnivariateDerivative1_getOrder(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getPi(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getReal(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getValue(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getValueField(t_FieldUnivariateDerivative1 *self);
        static PyObject *t_FieldUnivariateDerivative1_hashCode(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_hypot(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_linearCombination(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_log(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_log10(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_log1p(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_multiply(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_negate(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_newInstance(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_pow(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_reciprocal(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_remainder(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_rint(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_rootN(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_scalb(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sign(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sin(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sinCos(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sinh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sinhCosh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sqrt(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_subtract(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_tan(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_tanh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_taylor(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_toDegrees(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_toDerivativeStructure(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_toRadians(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_ulp(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_get__exponent(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__field(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__firstDerivative(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__order(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__pi(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__real(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__value(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__valueField(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__parameters_(t_FieldUnivariateDerivative1 *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative1__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, exponent),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, field),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, firstDerivative),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, order),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, pi),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, real),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, value),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, valueField),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative1__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, abs, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, acos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, acosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, asin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, asinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, atan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, atan2, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, atanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, ceil, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, exp, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, expm1, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, floor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getField, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getPi, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getReal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getValue, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, hypot, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, log, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, log10, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, log1p, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, negate, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, rint, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, rootN, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, scalb, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, tan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, tanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative1)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative1__methods_ },
          { Py_tp_init, (void *) t_FieldUnivariateDerivative1_init_ },
          { Py_tp_getset, t_FieldUnivariateDerivative1__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative1)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative1, t_FieldUnivariateDerivative1, FieldUnivariateDerivative1);
        PyObject *t_FieldUnivariateDerivative1::wrap_Object(const FieldUnivariateDerivative1& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1 *self = (t_FieldUnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative1::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1 *self = (t_FieldUnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative1::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative1), &PY_TYPE_DEF(FieldUnivariateDerivative1), module, "FieldUnivariateDerivative1", 0);
        }

        void t_FieldUnivariateDerivative1::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1), "class_", make_descriptor(FieldUnivariateDerivative1::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative1::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative1::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative1::wrap_Object(FieldUnivariateDerivative1(((t_FieldUnivariateDerivative1 *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative1::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative1_of_(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldUnivariateDerivative1_init_(t_FieldUnivariateDerivative1 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative1(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative1(a0, a1));
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

        static PyObject *t_FieldUnivariateDerivative1_abs(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_acos(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_acosh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_add(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_asin(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_asinh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_atan(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_atan2(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_atanh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_cbrt(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_ceil(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_compose(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0, a1));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1_copySign(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_cos(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_cosh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_divide(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_equals(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_exp(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_expm1(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_floor(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getDerivative(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getExponent(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getField(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1Field::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getFirstDerivative(t_FieldUnivariateDerivative1 *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstDerivative());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative1_getOrder(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getPi(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getReal(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getValue(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getValueField(t_FieldUnivariateDerivative1 *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative1_hashCode(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_hypot(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_linearCombination(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldUnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldUnivariateDerivative1 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, t_FieldUnivariateDerivative1::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, t_FieldUnivariateDerivative1::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &p4, t_FieldUnivariateDerivative1::parameters_, &a5, &p5, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 a6((jobject) NULL);
              PyTypeObject **p6;
              FieldUnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, t_FieldUnivariateDerivative1::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &p4, t_FieldUnivariateDerivative1::parameters_, &a5, &p5, t_FieldUnivariateDerivative1::parameters_, &a6, &p6, t_FieldUnivariateDerivative1::parameters_, &a7, &p7, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldUnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative1::parameters_, &a6, &a7, &p7, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_log(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_log10(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_log1p(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_multiply(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_negate(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_newInstance(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_pow(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative1 a1((jobject) NULL);
          PyTypeObject **p1;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1::pow(a0, a1));
            return t_FieldUnivariateDerivative1::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1_reciprocal(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_remainder(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_rint(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_rootN(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_scalb(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sign(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sin(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sinCos(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sinh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sinhCosh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sqrt(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_subtract(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_tan(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_tanh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_taylor(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1_toDegrees(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_toDerivativeStructure(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_toRadians(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_ulp(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative1_get__parameters_(t_FieldUnivariateDerivative1 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative1_get__exponent(t_FieldUnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__field(t_FieldUnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1Field::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__firstDerivative(t_FieldUnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstDerivative());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__order(t_FieldUnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__pi(t_FieldUnivariateDerivative1 *self, void *data)
        {
          FieldUnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldUnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__real(t_FieldUnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__value(t_FieldUnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__valueField(t_FieldUnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/RandomDataGenerator.h"
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/random/RandomDataGenerator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomDataGenerator::class$ = NULL;
      jmethodID *RandomDataGenerator::mids$ = NULL;
      bool RandomDataGenerator::live$ = false;

      jclass RandomDataGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomDataGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextBeta_86ffecc08a63eff0] = env->getMethodID(cls, "nextBeta", "(DD)D");
          mids$[mid_nextDeviate_920595bf12cadb2a] = env->getMethodID(cls, "nextDeviate", "(Lorg/hipparchus/distribution/IntegerDistribution;)I");
          mids$[mid_nextDeviate_a601ec4de303a373] = env->getMethodID(cls, "nextDeviate", "(Lorg/hipparchus/distribution/RealDistribution;)D");
          mids$[mid_nextDeviates_0ffb852e66a0db85] = env->getMethodID(cls, "nextDeviates", "(Lorg/hipparchus/distribution/IntegerDistribution;I)[I");
          mids$[mid_nextDeviates_14efafc24c1489a9] = env->getMethodID(cls, "nextDeviates", "(Lorg/hipparchus/distribution/RealDistribution;I)[D");
          mids$[mid_nextExponential_dcbc7ce2902fa136] = env->getMethodID(cls, "nextExponential", "(D)D");
          mids$[mid_nextGamma_86ffecc08a63eff0] = env->getMethodID(cls, "nextGamma", "(DD)D");
          mids$[mid_nextHexString_8cc8a10236476f23] = env->getMethodID(cls, "nextHexString", "(I)Ljava/lang/String;");
          mids$[mid_nextInt_819f91eddf220c5b] = env->getMethodID(cls, "nextInt", "(II)I");
          mids$[mid_nextLogNormal_86ffecc08a63eff0] = env->getMethodID(cls, "nextLogNormal", "(DD)D");
          mids$[mid_nextLong_fe4804b67425641b] = env->getMethodID(cls, "nextLong", "(JJ)J");
          mids$[mid_nextNormal_86ffecc08a63eff0] = env->getMethodID(cls, "nextNormal", "(DD)D");
          mids$[mid_nextPermutation_f2bc73ddcd6acde6] = env->getMethodID(cls, "nextPermutation", "(II)[I");
          mids$[mid_nextPoisson_4508852644846c83] = env->getMethodID(cls, "nextPoisson", "(D)I");
          mids$[mid_nextSample_118f9c80345bfb12] = env->getMethodID(cls, "nextSample", "([DI)[D");
          mids$[mid_nextSample_c53357cdb1932b75] = env->getMethodID(cls, "nextSample", "(Ljava/util/Collection;I)[Ljava/lang/Object;");
          mids$[mid_nextSampleWithReplacement_0e70f0fa1a405a85] = env->getMethodID(cls, "nextSampleWithReplacement", "(I[D)[I");
          mids$[mid_nextUniform_86ffecc08a63eff0] = env->getMethodID(cls, "nextUniform", "(DD)D");
          mids$[mid_nextZipf_687d91bbad5d613d] = env->getMethodID(cls, "nextZipf", "(ID)I");
          mids$[mid_of_f9e719b4bf1a1b8c] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/random/RandomGenerator;)Lorg/hipparchus/random/RandomDataGenerator;");
          mids$[mid_delegate_cf774856d74e158c] = env->getMethodID(cls, "delegate", "()Lorg/hipparchus/random/RandomGenerator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RandomDataGenerator::RandomDataGenerator() : ::org::hipparchus::random::ForwardingRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      RandomDataGenerator::RandomDataGenerator(jlong a0) : ::org::hipparchus::random::ForwardingRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

      jdouble RandomDataGenerator::nextBeta(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextBeta_86ffecc08a63eff0], a0, a1);
      }

      jint RandomDataGenerator::nextDeviate(const ::org::hipparchus::distribution::IntegerDistribution & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextDeviate_920595bf12cadb2a], a0.this$);
      }

      jdouble RandomDataGenerator::nextDeviate(const ::org::hipparchus::distribution::RealDistribution & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDeviate_a601ec4de303a373], a0.this$);
      }

      JArray< jint > RandomDataGenerator::nextDeviates(const ::org::hipparchus::distribution::IntegerDistribution & a0, jint a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextDeviates_0ffb852e66a0db85], a0.this$, a1));
      }

      JArray< jdouble > RandomDataGenerator::nextDeviates(const ::org::hipparchus::distribution::RealDistribution & a0, jint a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextDeviates_14efafc24c1489a9], a0.this$, a1));
      }

      jdouble RandomDataGenerator::nextExponential(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextExponential_dcbc7ce2902fa136], a0);
      }

      jdouble RandomDataGenerator::nextGamma(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGamma_86ffecc08a63eff0], a0, a1);
      }

      ::java::lang::String RandomDataGenerator::nextHexString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_nextHexString_8cc8a10236476f23], a0));
      }

      jint RandomDataGenerator::nextInt(jint a0, jint a1) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_819f91eddf220c5b], a0, a1);
      }

      jdouble RandomDataGenerator::nextLogNormal(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextLogNormal_86ffecc08a63eff0], a0, a1);
      }

      jlong RandomDataGenerator::nextLong(jlong a0, jlong a1) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_fe4804b67425641b], a0, a1);
      }

      jdouble RandomDataGenerator::nextNormal(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormal_86ffecc08a63eff0], a0, a1);
      }

      JArray< jint > RandomDataGenerator::nextPermutation(jint a0, jint a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextPermutation_f2bc73ddcd6acde6], a0, a1));
      }

      jint RandomDataGenerator::nextPoisson(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextPoisson_4508852644846c83], a0);
      }

      JArray< jdouble > RandomDataGenerator::nextSample(const JArray< jdouble > & a0, jint a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextSample_118f9c80345bfb12], a0.this$, a1));
      }

      JArray< ::java::lang::Object > RandomDataGenerator::nextSample(const ::java::util::Collection & a0, jint a1) const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_nextSample_c53357cdb1932b75], a0.this$, a1));
      }

      JArray< jint > RandomDataGenerator::nextSampleWithReplacement(jint a0, const JArray< jdouble > & a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextSampleWithReplacement_0e70f0fa1a405a85], a0, a1.this$));
      }

      jdouble RandomDataGenerator::nextUniform(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextUniform_86ffecc08a63eff0], a0, a1);
      }

      jint RandomDataGenerator::nextZipf(jint a0, jdouble a1) const
      {
        return env->callIntMethod(this$, mids$[mid_nextZipf_687d91bbad5d613d], a0, a1);
      }

      RandomDataGenerator RandomDataGenerator::of(const ::org::hipparchus::random::RandomGenerator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RandomDataGenerator(env->callStaticObjectMethod(cls, mids$[mid_of_f9e719b4bf1a1b8c], a0.this$));
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
      static PyObject *t_RandomDataGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomDataGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RandomDataGenerator_init_(t_RandomDataGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RandomDataGenerator_nextBeta(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextDeviate(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextDeviates(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextExponential(t_RandomDataGenerator *self, PyObject *arg);
      static PyObject *t_RandomDataGenerator_nextGamma(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextHexString(t_RandomDataGenerator *self, PyObject *arg);
      static PyObject *t_RandomDataGenerator_nextInt(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextLogNormal(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextLong(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextNormal(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextPermutation(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextPoisson(t_RandomDataGenerator *self, PyObject *arg);
      static PyObject *t_RandomDataGenerator_nextSample(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextSampleWithReplacement(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextUniform(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextZipf(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_of(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_RandomDataGenerator__methods_[] = {
        DECLARE_METHOD(t_RandomDataGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomDataGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomDataGenerator, nextBeta, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextDeviate, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextDeviates, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextExponential, METH_O),
        DECLARE_METHOD(t_RandomDataGenerator, nextGamma, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextHexString, METH_O),
        DECLARE_METHOD(t_RandomDataGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextLogNormal, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextNormal, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextPermutation, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextPoisson, METH_O),
        DECLARE_METHOD(t_RandomDataGenerator, nextSample, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextSampleWithReplacement, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextUniform, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextZipf, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, of, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomDataGenerator)[] = {
        { Py_tp_methods, t_RandomDataGenerator__methods_ },
        { Py_tp_init, (void *) t_RandomDataGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomDataGenerator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::ForwardingRandomGenerator),
        NULL
      };

      DEFINE_TYPE(RandomDataGenerator, t_RandomDataGenerator, RandomDataGenerator);

      void t_RandomDataGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomDataGenerator), &PY_TYPE_DEF(RandomDataGenerator), module, "RandomDataGenerator", 0);
      }

      void t_RandomDataGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomDataGenerator), "class_", make_descriptor(RandomDataGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomDataGenerator), "wrapfn_", make_descriptor(t_RandomDataGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomDataGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomDataGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomDataGenerator::initializeClass, 1)))
          return NULL;
        return t_RandomDataGenerator::wrap_Object(RandomDataGenerator(((t_RandomDataGenerator *) arg)->object.this$));
      }
      static PyObject *t_RandomDataGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomDataGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RandomDataGenerator_init_(t_RandomDataGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RandomDataGenerator object((jobject) NULL);

            INT_CALL(object = RandomDataGenerator());
            self->object = object;
            break;
          }
         case 1:
          {
            jlong a0;
            RandomDataGenerator object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = RandomDataGenerator(a0));
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

      static PyObject *t_RandomDataGenerator_nextBeta(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextBeta(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextBeta", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextDeviate(t_RandomDataGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::distribution::IntegerDistribution a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::hipparchus::distribution::IntegerDistribution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.nextDeviate(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.nextDeviate(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextDeviate", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextDeviates(t_RandomDataGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::distribution::IntegerDistribution a0((jobject) NULL);
            jint a1;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::distribution::IntegerDistribution::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.nextDeviates(a0, a1));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
            jint a1;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.nextDeviates(a0, a1));
              return result.wrap();
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextDeviates", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextExponential(t_RandomDataGenerator *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.nextExponential(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextExponential", arg);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextGamma(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextGamma(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextGamma", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextHexString(t_RandomDataGenerator *self, PyObject *arg)
      {
        jint a0;
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nextHexString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextHexString", arg);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextInt(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextInt(a0, a1));
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(RandomDataGenerator), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_RandomDataGenerator_nextLogNormal(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextLogNormal(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextLogNormal", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextLong(t_RandomDataGenerator *self, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jlong result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextLong(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(RandomDataGenerator), (PyObject *) self, "nextLong", args, 2);
      }

      static PyObject *t_RandomDataGenerator_nextNormal(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextNormal(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextNormal", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextPermutation(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        jint a1;
        JArray< jint > result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextPermutation(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "nextPermutation", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextPoisson(t_RandomDataGenerator *self, PyObject *arg)
      {
        jdouble a0;
        jint result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.nextPoisson(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextPoisson", arg);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextSample(t_RandomDataGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[DI", &a0, &a1))
            {
              OBJ_CALL(result = self->object.nextSample(a0, a1));
              return result.wrap();
            }
          }
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            JArray< ::java::lang::Object > result((jobject) NULL);

            if (!parseArgs(args, "KI", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.nextSample(a0, a1));
              return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextSample", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextSampleWithReplacement(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jint > result((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextSampleWithReplacement(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "nextSampleWithReplacement", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextUniform(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextUniform(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextUniform", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextZipf(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jint result;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextZipf(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextZipf", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_of(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        RandomDataGenerator result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::random::RandomDataGenerator::of(a0));
          return t_RandomDataGenerator::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "of", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1042::class$ = NULL;
              jmethodID *Rtcm1042::mids$ = NULL;
              bool Rtcm1042::live$ = false;

              jclass Rtcm1042::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8d38ee1a3f02b7a2] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1042::Rtcm1042(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_8d38ee1a3f02b7a2, a0, a1.this$)) {}
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
            namespace ephemeris {
              static PyObject *t_Rtcm1042_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042_of_(t_Rtcm1042 *self, PyObject *args);
              static int t_Rtcm1042_init_(t_Rtcm1042 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1042_get__parameters_(t_Rtcm1042 *self, void *data);
              static PyGetSetDef t_Rtcm1042__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1042, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1042__methods_[] = {
                DECLARE_METHOD(t_Rtcm1042, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1042)[] = {
                { Py_tp_methods, t_Rtcm1042__methods_ },
                { Py_tp_init, (void *) t_Rtcm1042_init_ },
                { Py_tp_getset, t_Rtcm1042__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1042)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1042, t_Rtcm1042, Rtcm1042);
              PyObject *t_Rtcm1042::wrap_Object(const Rtcm1042& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1042::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1042 *self = (t_Rtcm1042 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1042::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1042::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1042 *self = (t_Rtcm1042 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1042::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1042), &PY_TYPE_DEF(Rtcm1042), module, "Rtcm1042", 0);
              }

              void t_Rtcm1042::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "class_", make_descriptor(Rtcm1042::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "wrapfn_", make_descriptor(t_Rtcm1042::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1042_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1042::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1042::wrap_Object(Rtcm1042(((t_Rtcm1042 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1042_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1042::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1042_of_(t_Rtcm1042 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1042_init_(t_Rtcm1042 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data a1((jobject) NULL);
                Rtcm1042 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1042(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1042Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1042_get__parameters_(t_Rtcm1042 *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/GalileoAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GalileoAlmanac::class$ = NULL;
            jmethodID *GalileoAlmanac::mids$ = NULL;
            bool GalileoAlmanac::live$ = false;

            jclass GalileoAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GalileoAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealthE1_570ce0828f81a2c1] = env->getMethodID(cls, "getHealthE1", "()I");
                mids$[mid_getHealthE5a_570ce0828f81a2c1] = env->getMethodID(cls, "getHealthE5a", "()I");
                mids$[mid_getHealthE5b_570ce0828f81a2c1] = env->getMethodID(cls, "getHealthE5b", "()I");
                mids$[mid_getIOD_570ce0828f81a2c1] = env->getMethodID(cls, "getIOD", "()I");
                mids$[mid_setDeltaInc_17db3a65980d3441] = env->getMethodID(cls, "setDeltaInc", "(D)V");
                mids$[mid_setDeltaSqrtA_17db3a65980d3441] = env->getMethodID(cls, "setDeltaSqrtA", "(D)V");
                mids$[mid_setHealthE1_99803b0791f320ff] = env->getMethodID(cls, "setHealthE1", "(I)V");
                mids$[mid_setHealthE5a_99803b0791f320ff] = env->getMethodID(cls, "setHealthE5a", "(I)V");
                mids$[mid_setHealthE5b_99803b0791f320ff] = env->getMethodID(cls, "setHealthE5b", "(I)V");
                mids$[mid_setIOD_99803b0791f320ff] = env->getMethodID(cls, "setIOD", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GalileoAlmanac::GalileoAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jint GalileoAlmanac::getHealthE1() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE1_570ce0828f81a2c1]);
            }

            jint GalileoAlmanac::getHealthE5a() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE5a_570ce0828f81a2c1]);
            }

            jint GalileoAlmanac::getHealthE5b() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthE5b_570ce0828f81a2c1]);
            }

            jint GalileoAlmanac::getIOD() const
            {
              return env->callIntMethod(this$, mids$[mid_getIOD_570ce0828f81a2c1]);
            }

            void GalileoAlmanac::setDeltaInc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaInc_17db3a65980d3441], a0);
            }

            void GalileoAlmanac::setDeltaSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaSqrtA_17db3a65980d3441], a0);
            }

            void GalileoAlmanac::setHealthE1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE1_99803b0791f320ff], a0);
            }

            void GalileoAlmanac::setHealthE5a(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE5a_99803b0791f320ff], a0);
            }

            void GalileoAlmanac::setHealthE5b(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthE5b_99803b0791f320ff], a0);
            }

            void GalileoAlmanac::setIOD(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIOD_99803b0791f320ff], a0);
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
            static PyObject *t_GalileoAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GalileoAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GalileoAlmanac_init_(t_GalileoAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GalileoAlmanac_getHealthE1(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getHealthE5a(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getHealthE5b(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_getIOD(t_GalileoAlmanac *self);
            static PyObject *t_GalileoAlmanac_setDeltaInc(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setDeltaSqrtA(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE1(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE5a(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setHealthE5b(t_GalileoAlmanac *self, PyObject *arg);
            static PyObject *t_GalileoAlmanac_setIOD(t_GalileoAlmanac *self, PyObject *arg);
            static int t_GalileoAlmanac_set__deltaInc(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static int t_GalileoAlmanac_set__deltaSqrtA(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE1(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE1(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE5a(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE5a(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__healthE5b(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__healthE5b(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GalileoAlmanac_get__iOD(t_GalileoAlmanac *self, void *data);
            static int t_GalileoAlmanac_set__iOD(t_GalileoAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_GalileoAlmanac__fields_[] = {
              DECLARE_SET_FIELD(t_GalileoAlmanac, deltaInc),
              DECLARE_SET_FIELD(t_GalileoAlmanac, deltaSqrtA),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE1),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE5a),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, healthE5b),
              DECLARE_GETSET_FIELD(t_GalileoAlmanac, iOD),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GalileoAlmanac__methods_[] = {
              DECLARE_METHOD(t_GalileoAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE1, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE5a, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getHealthE5b, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, getIOD, METH_NOARGS),
              DECLARE_METHOD(t_GalileoAlmanac, setDeltaInc, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setDeltaSqrtA, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE1, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE5a, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setHealthE5b, METH_O),
              DECLARE_METHOD(t_GalileoAlmanac, setIOD, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GalileoAlmanac)[] = {
              { Py_tp_methods, t_GalileoAlmanac__methods_ },
              { Py_tp_init, (void *) t_GalileoAlmanac_init_ },
              { Py_tp_getset, t_GalileoAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GalileoAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(GalileoAlmanac, t_GalileoAlmanac, GalileoAlmanac);

            void t_GalileoAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GalileoAlmanac), &PY_TYPE_DEF(GalileoAlmanac), module, "GalileoAlmanac", 0);
            }

            void t_GalileoAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "class_", make_descriptor(GalileoAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "wrapfn_", make_descriptor(t_GalileoAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GalileoAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GalileoAlmanac::initializeClass, 1)))
                return NULL;
              return t_GalileoAlmanac::wrap_Object(GalileoAlmanac(((t_GalileoAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GalileoAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GalileoAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GalileoAlmanac_init_(t_GalileoAlmanac *self, PyObject *args, PyObject *kwds)
            {
              GalileoAlmanac object((jobject) NULL);

              INT_CALL(object = GalileoAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_GalileoAlmanac_getHealthE1(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE1());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getHealthE5a(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE5a());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getHealthE5b(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthE5b());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_getIOD(t_GalileoAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIOD());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoAlmanac_setDeltaInc(t_GalileoAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaInc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaInc", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setDeltaSqrtA(t_GalileoAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaSqrtA", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE1(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE1", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE5a(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE5a(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE5a", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setHealthE5b(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealthE5b(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthE5b", arg);
              return NULL;
            }

            static PyObject *t_GalileoAlmanac_setIOD(t_GalileoAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIOD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIOD", arg);
              return NULL;
            }

            static int t_GalileoAlmanac_set__deltaInc(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaInc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaInc", arg);
              return -1;
            }

            static int t_GalileoAlmanac_set__deltaSqrtA(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaSqrtA", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE1(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE1());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE1(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE1", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE5a(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE5a());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE5a(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE5a(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE5a", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__healthE5b(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthE5b());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__healthE5b(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealthE5b(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthE5b", arg);
              return -1;
            }

            static PyObject *t_GalileoAlmanac_get__iOD(t_GalileoAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIOD());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoAlmanac_set__iOD(t_GalileoAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIOD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iOD", arg);
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
#include "org/orekit/propagation/conversion/LutherFieldIntegratorBuilder.h"
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

        ::java::lang::Class *LutherFieldIntegratorBuilder::class$ = NULL;
        jmethodID *LutherFieldIntegratorBuilder::mids$ = NULL;
        bool LutherFieldIntegratorBuilder::live$ = false;

        jclass LutherFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/LutherFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_072c8635f2164db9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherFieldIntegratorBuilder::LutherFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        LutherFieldIntegratorBuilder::LutherFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_072c8635f2164db9, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator LutherFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_LutherFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegratorBuilder_of_(t_LutherFieldIntegratorBuilder *self, PyObject *args);
        static int t_LutherFieldIntegratorBuilder_init_(t_LutherFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherFieldIntegratorBuilder_buildIntegrator(t_LutherFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_LutherFieldIntegratorBuilder_get__parameters_(t_LutherFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_LutherFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_LutherFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_LutherFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_LutherFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_LutherFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(LutherFieldIntegratorBuilder, t_LutherFieldIntegratorBuilder, LutherFieldIntegratorBuilder);
        PyObject *t_LutherFieldIntegratorBuilder::wrap_Object(const LutherFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegratorBuilder *self = (t_LutherFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LutherFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegratorBuilder *self = (t_LutherFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LutherFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherFieldIntegratorBuilder), &PY_TYPE_DEF(LutherFieldIntegratorBuilder), module, "LutherFieldIntegratorBuilder", 0);
        }

        void t_LutherFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "class_", make_descriptor(LutherFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_LutherFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_LutherFieldIntegratorBuilder::wrap_Object(LutherFieldIntegratorBuilder(((t_LutherFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_LutherFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LutherFieldIntegratorBuilder_of_(t_LutherFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LutherFieldIntegratorBuilder_init_(t_LutherFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              LutherFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = LutherFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              LutherFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = LutherFieldIntegratorBuilder(a0));
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

        static PyObject *t_LutherFieldIntegratorBuilder_buildIntegrator(t_LutherFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(LutherFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_LutherFieldIntegratorBuilder_get__parameters_(t_LutherFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldElevationExtremumDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldElevationExtremumDetector::class$ = NULL;
        jmethodID *FieldElevationExtremumDetector::mids$ = NULL;
        bool FieldElevationExtremumDetector::live$ = false;

        jclass FieldElevationExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldElevationExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3d7271a8ea288af2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_28fe72372b8ccb78] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getElevation_41a008afe53da855] = env->getMethodID(cls, "getElevation", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getTopocentricFrame_e17d4157ae504252] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_create_17977b547af3c25a] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldElevationExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldElevationExtremumDetector::FieldElevationExtremumDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::TopocentricFrame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3d7271a8ea288af2, a0.this$, a1.this$)) {}

        FieldElevationExtremumDetector::FieldElevationExtremumDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_28fe72372b8ccb78, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldElevationExtremumDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldElevationExtremumDetector::getElevation(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_41a008afe53da855], a0.this$));
        }

        ::org::orekit::frames::TopocentricFrame FieldElevationExtremumDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_e17d4157ae504252]));
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
        static PyObject *t_FieldElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_of_(t_FieldElevationExtremumDetector *self, PyObject *args);
        static int t_FieldElevationExtremumDetector_init_(t_FieldElevationExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldElevationExtremumDetector_g(t_FieldElevationExtremumDetector *self, PyObject *args);
        static PyObject *t_FieldElevationExtremumDetector_getElevation(t_FieldElevationExtremumDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_getTopocentricFrame(t_FieldElevationExtremumDetector *self);
        static PyObject *t_FieldElevationExtremumDetector_get__topocentricFrame(t_FieldElevationExtremumDetector *self, void *data);
        static PyObject *t_FieldElevationExtremumDetector_get__parameters_(t_FieldElevationExtremumDetector *self, void *data);
        static PyGetSetDef t_FieldElevationExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldElevationExtremumDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_FieldElevationExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldElevationExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_FieldElevationExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, getElevation, METH_O),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, getTopocentricFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldElevationExtremumDetector)[] = {
          { Py_tp_methods, t_FieldElevationExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_FieldElevationExtremumDetector_init_ },
          { Py_tp_getset, t_FieldElevationExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldElevationExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldElevationExtremumDetector, t_FieldElevationExtremumDetector, FieldElevationExtremumDetector);
        PyObject *t_FieldElevationExtremumDetector::wrap_Object(const FieldElevationExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationExtremumDetector *self = (t_FieldElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldElevationExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationExtremumDetector *self = (t_FieldElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldElevationExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldElevationExtremumDetector), &PY_TYPE_DEF(FieldElevationExtremumDetector), module, "FieldElevationExtremumDetector", 0);
        }

        void t_FieldElevationExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "class_", make_descriptor(FieldElevationExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "wrapfn_", make_descriptor(t_FieldElevationExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldElevationExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_FieldElevationExtremumDetector::wrap_Object(FieldElevationExtremumDetector(((t_FieldElevationExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldElevationExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldElevationExtremumDetector_of_(t_FieldElevationExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldElevationExtremumDetector_init_(t_FieldElevationExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
              FieldElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldElevationExtremumDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              FieldElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldElevationExtremumDetector(a0, a1, a2));
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

        static PyObject *t_FieldElevationExtremumDetector_g(t_FieldElevationExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldElevationExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldElevationExtremumDetector_getElevation(t_FieldElevationExtremumDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.getElevation(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
          return NULL;
        }

        static PyObject *t_FieldElevationExtremumDetector_getTopocentricFrame(t_FieldElevationExtremumDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }
        static PyObject *t_FieldElevationExtremumDetector_get__parameters_(t_FieldElevationExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldElevationExtremumDetector_get__topocentricFrame(t_FieldElevationExtremumDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"
#include "java/io/Serializable.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *AbstractSolarActivityDataLoader$LineParameters::class$ = NULL;
            jmethodID *AbstractSolarActivityDataLoader$LineParameters::mids$ = NULL;
            bool AbstractSolarActivityDataLoader$LineParameters::live$ = false;

            jclass AbstractSolarActivityDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_compareTo_b2c45b61abaea01a] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint AbstractSolarActivityDataLoader$LineParameters::compareTo(const AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_b2c45b61abaea01a], a0.this$);
            }

            jboolean AbstractSolarActivityDataLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
            }

            jint AbstractSolarActivityDataLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_of_(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_compareTo(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_equals(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_getDate(t_AbstractSolarActivityDataLoader$LineParameters *self);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_hashCode(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__date(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__parameters_(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_AbstractSolarActivityDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader$LineParameters, date),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader$LineParameters, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSolarActivityDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, compareTo, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, equals, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSolarActivityDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_AbstractSolarActivityDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSolarActivityDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSolarActivityDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSolarActivityDataLoader$LineParameters, t_AbstractSolarActivityDataLoader$LineParameters, AbstractSolarActivityDataLoader$LineParameters);
            PyObject *t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(const AbstractSolarActivityDataLoader$LineParameters& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader$LineParameters *self = (t_AbstractSolarActivityDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader$LineParameters *self = (t_AbstractSolarActivityDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractSolarActivityDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), &PY_TYPE_DEF(AbstractSolarActivityDataLoader$LineParameters), module, "AbstractSolarActivityDataLoader$LineParameters", 0);
            }

            void t_AbstractSolarActivityDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "class_", make_descriptor(AbstractSolarActivityDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "wrapfn_", make_descriptor(t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSolarActivityDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(AbstractSolarActivityDataLoader$LineParameters(((t_AbstractSolarActivityDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSolarActivityDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_of_(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_compareTo(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *arg)
            {
              AbstractSolarActivityDataLoader$LineParameters a0((jobject) NULL);
              PyTypeObject **p0;
              jint result;

              if (!parseArg(arg, "K", AbstractSolarActivityDataLoader$LineParameters::initializeClass, &a0, &p0, t_AbstractSolarActivityDataLoader$LineParameters::parameters_))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_equals(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_getDate(t_AbstractSolarActivityDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_hashCode(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), (PyObject *) self, "hashCode", args, 2);
            }
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__parameters_(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__date(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OneWayGNSSPhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OneWayGNSSPhaseAmbiguityModifier::class$ = NULL;
          jmethodID *OneWayGNSSPhaseAmbiguityModifier::mids$ = NULL;
          bool OneWayGNSSPhaseAmbiguityModifier::live$ = false;

          jclass OneWayGNSSPhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OneWayGNSSPhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OneWayGNSSPhaseAmbiguityModifier::OneWayGNSSPhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

          ::java::util::List OneWayGNSSPhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void OneWayGNSSPhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void OneWayGNSSPhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OneWayGNSSPhaseAmbiguityModifier_init_(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_getParametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modify(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modifyWithoutDerivatives(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_get__parametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_OneWayGNSSPhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSPhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_OneWayGNSSPhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhaseAmbiguityModifier, t_OneWayGNSSPhaseAmbiguityModifier, OneWayGNSSPhaseAmbiguityModifier);

          void t_OneWayGNSSPhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), &PY_TYPE_DEF(OneWayGNSSPhaseAmbiguityModifier), module, "OneWayGNSSPhaseAmbiguityModifier", 0);
          }

          void t_OneWayGNSSPhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "class_", make_descriptor(OneWayGNSSPhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_OneWayGNSSPhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhaseAmbiguityModifier::wrap_Object(OneWayGNSSPhaseAmbiguityModifier(((t_OneWayGNSSPhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OneWayGNSSPhaseAmbiguityModifier_init_(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            OneWayGNSSPhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OneWayGNSSPhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_getParametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modify(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modifyWithoutDerivatives(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_get__parametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self, void *data)
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
#include "java/lang/Class.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/InstantiationException.h"
#include "java/io/Serializable.h"
#include "java/io/InputStream.h"
#include "java/lang/Module.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/Class.h"
#include "java/lang/SecurityException.h"
#include "java/lang/Package.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Class::class$ = NULL;
    jmethodID *Class::mids$ = NULL;
    bool Class::live$ = false;

    jclass Class::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Class");

        mids$ = new jmethodID[max_mid];
        mids$[mid_asSubclass_5010aeabfbec9b1c] = env->getMethodID(cls, "asSubclass", "(Ljava/lang/Class;)Ljava/lang/Class;");
        mids$[mid_cast_9facd1449e0950d3] = env->getMethodID(cls, "cast", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_desiredAssertionStatus_b108b35ef48e27bd] = env->getMethodID(cls, "desiredAssertionStatus", "()Z");
        mids$[mid_forName_e88d065cb04fcbf6] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_forName_7096b883e1b0d903] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_forName_d28f38f0fe51c5ff] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;");
        mids$[mid_getCanonicalName_11b109bd155ca898] = env->getMethodID(cls, "getCanonicalName", "()Ljava/lang/String;");
        mids$[mid_getClassLoader_da1c487fbe6ab900] = env->getMethodID(cls, "getClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getClasses_c7d92886d19dfecc] = env->getMethodID(cls, "getClasses", "()[Ljava/lang/Class;");
        mids$[mid_getComponentType_7c16c5008b34b3db] = env->getMethodID(cls, "getComponentType", "()Ljava/lang/Class;");
        mids$[mid_getDeclaredClasses_c7d92886d19dfecc] = env->getMethodID(cls, "getDeclaredClasses", "()[Ljava/lang/Class;");
        mids$[mid_getDeclaringClass_7c16c5008b34b3db] = env->getMethodID(cls, "getDeclaringClass", "()Ljava/lang/Class;");
        mids$[mid_getEnclosingClass_7c16c5008b34b3db] = env->getMethodID(cls, "getEnclosingClass", "()Ljava/lang/Class;");
        mids$[mid_getEnumConstants_b93c730013ce64c6] = env->getMethodID(cls, "getEnumConstants", "()[Ljava/lang/Object;");
        mids$[mid_getInterfaces_c7d92886d19dfecc] = env->getMethodID(cls, "getInterfaces", "()[Ljava/lang/Class;");
        mids$[mid_getModifiers_570ce0828f81a2c1] = env->getMethodID(cls, "getModifiers", "()I");
        mids$[mid_getModule_191607d6c6e74ab2] = env->getMethodID(cls, "getModule", "()Ljava/lang/Module;");
        mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getNestHost_7c16c5008b34b3db] = env->getMethodID(cls, "getNestHost", "()Ljava/lang/Class;");
        mids$[mid_getNestMembers_c7d92886d19dfecc] = env->getMethodID(cls, "getNestMembers", "()[Ljava/lang/Class;");
        mids$[mid_getPackage_11d7c12a6280b34b] = env->getMethodID(cls, "getPackage", "()Ljava/lang/Package;");
        mids$[mid_getPackageName_11b109bd155ca898] = env->getMethodID(cls, "getPackageName", "()Ljava/lang/String;");
        mids$[mid_getResource_92a0f99f4944a8b1] = env->getMethodID(cls, "getResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getResourceAsStream_d8c3e08e3826298a] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getSigners_b93c730013ce64c6] = env->getMethodID(cls, "getSigners", "()[Ljava/lang/Object;");
        mids$[mid_getSimpleName_11b109bd155ca898] = env->getMethodID(cls, "getSimpleName", "()Ljava/lang/String;");
        mids$[mid_getSuperclass_7c16c5008b34b3db] = env->getMethodID(cls, "getSuperclass", "()Ljava/lang/Class;");
        mids$[mid_getTypeName_11b109bd155ca898] = env->getMethodID(cls, "getTypeName", "()Ljava/lang/String;");
        mids$[mid_isAnnotation_b108b35ef48e27bd] = env->getMethodID(cls, "isAnnotation", "()Z");
        mids$[mid_isAnonymousClass_b108b35ef48e27bd] = env->getMethodID(cls, "isAnonymousClass", "()Z");
        mids$[mid_isArray_b108b35ef48e27bd] = env->getMethodID(cls, "isArray", "()Z");
        mids$[mid_isAssignableFrom_839caca7c078da68] = env->getMethodID(cls, "isAssignableFrom", "(Ljava/lang/Class;)Z");
        mids$[mid_isEnum_b108b35ef48e27bd] = env->getMethodID(cls, "isEnum", "()Z");
        mids$[mid_isInstance_65c7d273e80d497a] = env->getMethodID(cls, "isInstance", "(Ljava/lang/Object;)Z");
        mids$[mid_isInterface_b108b35ef48e27bd] = env->getMethodID(cls, "isInterface", "()Z");
        mids$[mid_isLocalClass_b108b35ef48e27bd] = env->getMethodID(cls, "isLocalClass", "()Z");
        mids$[mid_isMemberClass_b108b35ef48e27bd] = env->getMethodID(cls, "isMemberClass", "()Z");
        mids$[mid_isNestmateOf_839caca7c078da68] = env->getMethodID(cls, "isNestmateOf", "(Ljava/lang/Class;)Z");
        mids$[mid_isPrimitive_b108b35ef48e27bd] = env->getMethodID(cls, "isPrimitive", "()Z");
        mids$[mid_isSynthetic_b108b35ef48e27bd] = env->getMethodID(cls, "isSynthetic", "()Z");
        mids$[mid_newInstance_4d26fd885228c716] = env->getMethodID(cls, "newInstance", "()Ljava/lang/Object;");
        mids$[mid_toGenericString_11b109bd155ca898] = env->getMethodID(cls, "toGenericString", "()Ljava/lang/String;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Class Class::asSubclass(const Class & a0) const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_asSubclass_5010aeabfbec9b1c], a0.this$));
    }

    ::java::lang::Object Class::cast(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cast_9facd1449e0950d3], a0.this$));
    }

    jboolean Class::desiredAssertionStatus() const
    {
      return env->callBooleanMethod(this$, mids$[mid_desiredAssertionStatus_b108b35ef48e27bd]);
    }

    Class Class::forName(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_e88d065cb04fcbf6], a0.this$));
    }

    Class Class::forName(const ::java::lang::Module & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_7096b883e1b0d903], a0.this$, a1.this$));
    }

    Class Class::forName(const ::java::lang::String & a0, jboolean a1, const ::java::lang::ClassLoader & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_d28f38f0fe51c5ff], a0.this$, a1, a2.this$));
    }

    ::java::lang::String Class::getCanonicalName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCanonicalName_11b109bd155ca898]));
    }

    ::java::lang::ClassLoader Class::getClassLoader() const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_getClassLoader_da1c487fbe6ab900]));
    }

    JArray< Class > Class::getClasses() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getClasses_c7d92886d19dfecc]));
    }

    Class Class::getComponentType() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getComponentType_7c16c5008b34b3db]));
    }

    JArray< Class > Class::getDeclaredClasses() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getDeclaredClasses_c7d92886d19dfecc]));
    }

    Class Class::getDeclaringClass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getDeclaringClass_7c16c5008b34b3db]));
    }

    Class Class::getEnclosingClass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getEnclosingClass_7c16c5008b34b3db]));
    }

    JArray< ::java::lang::Object > Class::getEnumConstants() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getEnumConstants_b93c730013ce64c6]));
    }

    JArray< Class > Class::getInterfaces() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getInterfaces_c7d92886d19dfecc]));
    }

    jint Class::getModifiers() const
    {
      return env->callIntMethod(this$, mids$[mid_getModifiers_570ce0828f81a2c1]);
    }

    ::java::lang::Module Class::getModule() const
    {
      return ::java::lang::Module(env->callObjectMethod(this$, mids$[mid_getModule_191607d6c6e74ab2]));
    }

    ::java::lang::String Class::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
    }

    Class Class::getNestHost() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getNestHost_7c16c5008b34b3db]));
    }

    JArray< Class > Class::getNestMembers() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getNestMembers_c7d92886d19dfecc]));
    }

    ::java::lang::Package Class::getPackage() const
    {
      return ::java::lang::Package(env->callObjectMethod(this$, mids$[mid_getPackage_11d7c12a6280b34b]));
    }

    ::java::lang::String Class::getPackageName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPackageName_11b109bd155ca898]));
    }

    ::java::net::URL Class::getResource(const ::java::lang::String & a0) const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_getResource_92a0f99f4944a8b1], a0.this$));
    }

    ::java::io::InputStream Class::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_d8c3e08e3826298a], a0.this$));
    }

    JArray< ::java::lang::Object > Class::getSigners() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getSigners_b93c730013ce64c6]));
    }

    ::java::lang::String Class::getSimpleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSimpleName_11b109bd155ca898]));
    }

    Class Class::getSuperclass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getSuperclass_7c16c5008b34b3db]));
    }

    ::java::lang::String Class::getTypeName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTypeName_11b109bd155ca898]));
    }

    jboolean Class::isAnnotation() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAnnotation_b108b35ef48e27bd]);
    }

    jboolean Class::isAnonymousClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAnonymousClass_b108b35ef48e27bd]);
    }

    jboolean Class::isArray() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isArray_b108b35ef48e27bd]);
    }

    jboolean Class::isAssignableFrom(const Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAssignableFrom_839caca7c078da68], a0.this$);
    }

    jboolean Class::isEnum() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEnum_b108b35ef48e27bd]);
    }

    jboolean Class::isInstance(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInstance_65c7d273e80d497a], a0.this$);
    }

    jboolean Class::isInterface() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInterface_b108b35ef48e27bd]);
    }

    jboolean Class::isLocalClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isLocalClass_b108b35ef48e27bd]);
    }

    jboolean Class::isMemberClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isMemberClass_b108b35ef48e27bd]);
    }

    jboolean Class::isNestmateOf(const Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNestmateOf_839caca7c078da68], a0.this$);
    }

    jboolean Class::isPrimitive() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPrimitive_b108b35ef48e27bd]);
    }

    jboolean Class::isSynthetic() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSynthetic_b108b35ef48e27bd]);
    }

    ::java::lang::Object Class::newInstance() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_newInstance_4d26fd885228c716]));
    }

    ::java::lang::String Class::toGenericString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toGenericString_11b109bd155ca898]));
    }

    ::java::lang::String Class::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Class_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Class_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Class_of_(t_Class *self, PyObject *args);
    static PyObject *t_Class_asSubclass(t_Class *self, PyObject *arg);
    static PyObject *t_Class_cast(t_Class *self, PyObject *arg);
    static PyObject *t_Class_desiredAssertionStatus(t_Class *self);
    static PyObject *t_Class_forName(PyTypeObject *type, PyObject *args);
    static PyObject *t_Class_getCanonicalName(t_Class *self);
    static PyObject *t_Class_getClassLoader(t_Class *self);
    static PyObject *t_Class_getClasses(t_Class *self);
    static PyObject *t_Class_getComponentType(t_Class *self);
    static PyObject *t_Class_getDeclaredClasses(t_Class *self);
    static PyObject *t_Class_getDeclaringClass(t_Class *self);
    static PyObject *t_Class_getEnclosingClass(t_Class *self);
    static PyObject *t_Class_getEnumConstants(t_Class *self);
    static PyObject *t_Class_getInterfaces(t_Class *self);
    static PyObject *t_Class_getModifiers(t_Class *self);
    static PyObject *t_Class_getModule(t_Class *self);
    static PyObject *t_Class_getName(t_Class *self);
    static PyObject *t_Class_getNestHost(t_Class *self);
    static PyObject *t_Class_getNestMembers(t_Class *self);
    static PyObject *t_Class_getPackage(t_Class *self);
    static PyObject *t_Class_getPackageName(t_Class *self);
    static PyObject *t_Class_getResource(t_Class *self, PyObject *arg);
    static PyObject *t_Class_getResourceAsStream(t_Class *self, PyObject *arg);
    static PyObject *t_Class_getSigners(t_Class *self);
    static PyObject *t_Class_getSimpleName(t_Class *self);
    static PyObject *t_Class_getSuperclass(t_Class *self);
    static PyObject *t_Class_getTypeName(t_Class *self);
    static PyObject *t_Class_isAnnotation(t_Class *self);
    static PyObject *t_Class_isAnonymousClass(t_Class *self);
    static PyObject *t_Class_isArray(t_Class *self);
    static PyObject *t_Class_isAssignableFrom(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isEnum(t_Class *self);
    static PyObject *t_Class_isInstance(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isInterface(t_Class *self);
    static PyObject *t_Class_isLocalClass(t_Class *self);
    static PyObject *t_Class_isMemberClass(t_Class *self);
    static PyObject *t_Class_isNestmateOf(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isPrimitive(t_Class *self);
    static PyObject *t_Class_isSynthetic(t_Class *self);
    static PyObject *t_Class_newInstance(t_Class *self);
    static PyObject *t_Class_toGenericString(t_Class *self);
    static PyObject *t_Class_toString(t_Class *self, PyObject *args);
    static PyObject *t_Class_get__annotation(t_Class *self, void *data);
    static PyObject *t_Class_get__anonymousClass(t_Class *self, void *data);
    static PyObject *t_Class_get__array(t_Class *self, void *data);
    static PyObject *t_Class_get__canonicalName(t_Class *self, void *data);
    static PyObject *t_Class_get__classLoader(t_Class *self, void *data);
    static PyObject *t_Class_get__classes(t_Class *self, void *data);
    static PyObject *t_Class_get__componentType(t_Class *self, void *data);
    static PyObject *t_Class_get__declaredClasses(t_Class *self, void *data);
    static PyObject *t_Class_get__declaringClass(t_Class *self, void *data);
    static PyObject *t_Class_get__enclosingClass(t_Class *self, void *data);
    static PyObject *t_Class_get__enum(t_Class *self, void *data);
    static PyObject *t_Class_get__enumConstants(t_Class *self, void *data);
    static PyObject *t_Class_get__interface(t_Class *self, void *data);
    static PyObject *t_Class_get__interfaces(t_Class *self, void *data);
    static PyObject *t_Class_get__localClass(t_Class *self, void *data);
    static PyObject *t_Class_get__memberClass(t_Class *self, void *data);
    static PyObject *t_Class_get__modifiers(t_Class *self, void *data);
    static PyObject *t_Class_get__module(t_Class *self, void *data);
    static PyObject *t_Class_get__name(t_Class *self, void *data);
    static PyObject *t_Class_get__nestHost(t_Class *self, void *data);
    static PyObject *t_Class_get__nestMembers(t_Class *self, void *data);
    static PyObject *t_Class_get__package(t_Class *self, void *data);
    static PyObject *t_Class_get__packageName(t_Class *self, void *data);
    static PyObject *t_Class_get__primitive(t_Class *self, void *data);
    static PyObject *t_Class_get__signers(t_Class *self, void *data);
    static PyObject *t_Class_get__simpleName(t_Class *self, void *data);
    static PyObject *t_Class_get__superclass(t_Class *self, void *data);
    static PyObject *t_Class_get__synthetic(t_Class *self, void *data);
    static PyObject *t_Class_get__typeName(t_Class *self, void *data);
    static PyObject *t_Class_get__parameters_(t_Class *self, void *data);
    static PyGetSetDef t_Class__fields_[] = {
      DECLARE_GET_FIELD(t_Class, annotation),
      DECLARE_GET_FIELD(t_Class, anonymousClass),
      DECLARE_GET_FIELD(t_Class, array),
      DECLARE_GET_FIELD(t_Class, canonicalName),
      DECLARE_GET_FIELD(t_Class, classLoader),
      DECLARE_GET_FIELD(t_Class, classes),
      DECLARE_GET_FIELD(t_Class, componentType),
      DECLARE_GET_FIELD(t_Class, declaredClasses),
      DECLARE_GET_FIELD(t_Class, declaringClass),
      DECLARE_GET_FIELD(t_Class, enclosingClass),
      DECLARE_GET_FIELD(t_Class, enum),
      DECLARE_GET_FIELD(t_Class, enumConstants),
      DECLARE_GET_FIELD(t_Class, interface),
      DECLARE_GET_FIELD(t_Class, interfaces),
      DECLARE_GET_FIELD(t_Class, localClass),
      DECLARE_GET_FIELD(t_Class, memberClass),
      DECLARE_GET_FIELD(t_Class, modifiers),
      DECLARE_GET_FIELD(t_Class, module),
      DECLARE_GET_FIELD(t_Class, name),
      DECLARE_GET_FIELD(t_Class, nestHost),
      DECLARE_GET_FIELD(t_Class, nestMembers),
      DECLARE_GET_FIELD(t_Class, package),
      DECLARE_GET_FIELD(t_Class, packageName),
      DECLARE_GET_FIELD(t_Class, primitive),
      DECLARE_GET_FIELD(t_Class, signers),
      DECLARE_GET_FIELD(t_Class, simpleName),
      DECLARE_GET_FIELD(t_Class, superclass),
      DECLARE_GET_FIELD(t_Class, synthetic),
      DECLARE_GET_FIELD(t_Class, typeName),
      DECLARE_GET_FIELD(t_Class, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Class__methods_[] = {
      DECLARE_METHOD(t_Class, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Class, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Class, of_, METH_VARARGS),
      DECLARE_METHOD(t_Class, asSubclass, METH_O),
      DECLARE_METHOD(t_Class, cast, METH_O),
      DECLARE_METHOD(t_Class, desiredAssertionStatus, METH_NOARGS),
      DECLARE_METHOD(t_Class, forName, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Class, getCanonicalName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getClassLoader, METH_NOARGS),
      DECLARE_METHOD(t_Class, getClasses, METH_NOARGS),
      DECLARE_METHOD(t_Class, getComponentType, METH_NOARGS),
      DECLARE_METHOD(t_Class, getDeclaredClasses, METH_NOARGS),
      DECLARE_METHOD(t_Class, getDeclaringClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getEnclosingClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getEnumConstants, METH_NOARGS),
      DECLARE_METHOD(t_Class, getInterfaces, METH_NOARGS),
      DECLARE_METHOD(t_Class, getModifiers, METH_NOARGS),
      DECLARE_METHOD(t_Class, getModule, METH_NOARGS),
      DECLARE_METHOD(t_Class, getName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getNestHost, METH_NOARGS),
      DECLARE_METHOD(t_Class, getNestMembers, METH_NOARGS),
      DECLARE_METHOD(t_Class, getPackage, METH_NOARGS),
      DECLARE_METHOD(t_Class, getPackageName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getResource, METH_O),
      DECLARE_METHOD(t_Class, getResourceAsStream, METH_O),
      DECLARE_METHOD(t_Class, getSigners, METH_NOARGS),
      DECLARE_METHOD(t_Class, getSimpleName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getSuperclass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getTypeName, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAnnotation, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAnonymousClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isArray, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAssignableFrom, METH_O),
      DECLARE_METHOD(t_Class, isEnum, METH_NOARGS),
      DECLARE_METHOD(t_Class, isInstance, METH_O),
      DECLARE_METHOD(t_Class, isInterface, METH_NOARGS),
      DECLARE_METHOD(t_Class, isLocalClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isMemberClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isNestmateOf, METH_O),
      DECLARE_METHOD(t_Class, isPrimitive, METH_NOARGS),
      DECLARE_METHOD(t_Class, isSynthetic, METH_NOARGS),
      DECLARE_METHOD(t_Class, newInstance, METH_NOARGS),
      DECLARE_METHOD(t_Class, toGenericString, METH_NOARGS),
      DECLARE_METHOD(t_Class, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Class)[] = {
      { Py_tp_methods, t_Class__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Class__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Class)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Class, t_Class, Class);
    PyObject *t_Class::wrap_Object(const Class& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Class::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Class *self = (t_Class *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Class::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Class::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Class *self = (t_Class *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Class::install(PyObject *module)
    {
      installType(&PY_TYPE(Class), &PY_TYPE_DEF(Class), module, "Class", 0);
    }

    void t_Class::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "class_", make_descriptor(Class::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "wrapfn_", make_descriptor(t_Class::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Class_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Class::initializeClass, 1)))
        return NULL;
      return t_Class::wrap_Object(Class(((t_Class *) arg)->object.this$));
    }
    static PyObject *t_Class_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Class::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Class_of_(t_Class *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Class_asSubclass(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      Class result((jobject) NULL);

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.asSubclass(a0));
        return t_Class::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "asSubclass", arg);
      return NULL;
    }

    static PyObject *t_Class_cast(t_Class *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.cast(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "cast", arg);
      return NULL;
    }

    static PyObject *t_Class_desiredAssertionStatus(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.desiredAssertionStatus());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_forName(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0));
            return t_Class::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Module a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::lang::Module::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0, a1));
            return t_Class::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean a1;
          ::java::lang::ClassLoader a2((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "sZk", ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0, a1, a2));
            return t_Class::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "forName", args);
      return NULL;
    }

    static PyObject *t_Class_getCanonicalName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalName());
      return j2p(result);
    }

    static PyObject *t_Class_getClassLoader(t_Class *self)
    {
      ::java::lang::ClassLoader result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_Class_getClasses(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getClasses());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getComponentType(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getComponentType());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getDeclaredClasses(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaredClasses());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getDeclaringClass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaringClass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getEnclosingClass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getEnclosingClass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getEnumConstants(t_Class *self)
    {
      JArray< ::java::lang::Object > result((jobject) NULL);
      OBJ_CALL(result = self->object.getEnumConstants());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_getInterfaces(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getInterfaces());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getModifiers(t_Class *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getModifiers());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Class_getModule(t_Class *self)
    {
      ::java::lang::Module result((jobject) NULL);
      OBJ_CALL(result = self->object.getModule());
      return ::java::lang::t_Module::wrap_Object(result);
    }

    static PyObject *t_Class_getName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_Class_getNestHost(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getNestHost());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getNestMembers(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getNestMembers());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getPackage(t_Class *self)
    {
      ::java::lang::Package result((jobject) NULL);
      OBJ_CALL(result = self->object.getPackage());
      return ::java::lang::t_Package::wrap_Object(result);
    }

    static PyObject *t_Class_getPackageName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPackageName());
      return j2p(result);
    }

    static PyObject *t_Class_getResource(t_Class *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::net::URL result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResource(a0));
        return ::java::net::t_URL::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getResource", arg);
      return NULL;
    }

    static PyObject *t_Class_getResourceAsStream(t_Class *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::io::InputStream result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResourceAsStream(a0));
        return ::java::io::t_InputStream::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getResourceAsStream", arg);
      return NULL;
    }

    static PyObject *t_Class_getSigners(t_Class *self)
    {
      JArray< ::java::lang::Object > result((jobject) NULL);
      OBJ_CALL(result = self->object.getSigners());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_getSimpleName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getSimpleName());
      return j2p(result);
    }

    static PyObject *t_Class_getSuperclass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getSuperclass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getTypeName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getTypeName());
      return j2p(result);
    }

    static PyObject *t_Class_isAnnotation(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAnnotation());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isAnonymousClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAnonymousClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isArray(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isArray());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isAssignableFrom(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.isAssignableFrom(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isAssignableFrom", arg);
      return NULL;
    }

    static PyObject *t_Class_isEnum(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEnum());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isInstance(t_Class *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.isInstance(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isInstance", arg);
      return NULL;
    }

    static PyObject *t_Class_isInterface(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInterface());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isLocalClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isLocalClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isMemberClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isMemberClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isNestmateOf(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.isNestmateOf(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isNestmateOf", arg);
      return NULL;
    }

    static PyObject *t_Class_isPrimitive(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isPrimitive());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isSynthetic(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isSynthetic());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_newInstance(t_Class *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.newInstance());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Class_toGenericString(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toGenericString());
      return j2p(result);
    }

    static PyObject *t_Class_toString(t_Class *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Class), (PyObject *) self, "toString", args, 2);
    }
    static PyObject *t_Class_get__parameters_(t_Class *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Class_get__annotation(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAnnotation());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__anonymousClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAnonymousClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__array(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isArray());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__canonicalName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalName());
      return j2p(value);
    }

    static PyObject *t_Class_get__classLoader(t_Class *self, void *data)
    {
      ::java::lang::ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(value);
    }

    static PyObject *t_Class_get__classes(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getClasses());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__componentType(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getComponentType());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__declaredClasses(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaredClasses());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__declaringClass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaringClass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__enclosingClass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getEnclosingClass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__enum(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEnum());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__enumConstants(t_Class *self, void *data)
    {
      JArray< ::java::lang::Object > value((jobject) NULL);
      OBJ_CALL(value = self->object.getEnumConstants());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_get__interface(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInterface());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__interfaces(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getInterfaces());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__localClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isLocalClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__memberClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isMemberClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__modifiers(t_Class *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getModifiers());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Class_get__module(t_Class *self, void *data)
    {
      ::java::lang::Module value((jobject) NULL);
      OBJ_CALL(value = self->object.getModule());
      return ::java::lang::t_Module::wrap_Object(value);
    }

    static PyObject *t_Class_get__name(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_Class_get__nestHost(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getNestHost());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__nestMembers(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getNestMembers());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__package(t_Class *self, void *data)
    {
      ::java::lang::Package value((jobject) NULL);
      OBJ_CALL(value = self->object.getPackage());
      return ::java::lang::t_Package::wrap_Object(value);
    }

    static PyObject *t_Class_get__packageName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPackageName());
      return j2p(value);
    }

    static PyObject *t_Class_get__primitive(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isPrimitive());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__signers(t_Class *self, void *data)
    {
      JArray< ::java::lang::Object > value((jobject) NULL);
      OBJ_CALL(value = self->object.getSigners());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_get__simpleName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSimpleName());
      return j2p(value);
    }

    static PyObject *t_Class_get__superclass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getSuperclass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__synthetic(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isSynthetic());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__typeName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getTypeName());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *BistaticRangeRate::class$ = NULL;
        jmethodID *BistaticRangeRate::mids$ = NULL;
        bool BistaticRangeRate::live$ = false;
        ::java::lang::String *BistaticRangeRate::MEASUREMENT_TYPE = NULL;

        jclass BistaticRangeRate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/BistaticRangeRate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3001df949fd9e0a4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getEmitterStation_58e3efb0e9576916] = env->getMethodID(cls, "getEmitterStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getReceiverStation_58e3efb0e9576916] = env->getMethodID(cls, "getReceiverStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BistaticRangeRate::BistaticRangeRate(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_3001df949fd9e0a4, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation BistaticRangeRate::getEmitterStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getEmitterStation_58e3efb0e9576916]));
        }

        ::org::orekit::estimation::measurements::GroundStation BistaticRangeRate::getReceiverStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getReceiverStation_58e3efb0e9576916]));
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
        static PyObject *t_BistaticRangeRate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRangeRate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRangeRate_of_(t_BistaticRangeRate *self, PyObject *args);
        static int t_BistaticRangeRate_init_(t_BistaticRangeRate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BistaticRangeRate_getEmitterStation(t_BistaticRangeRate *self);
        static PyObject *t_BistaticRangeRate_getReceiverStation(t_BistaticRangeRate *self);
        static PyObject *t_BistaticRangeRate_get__emitterStation(t_BistaticRangeRate *self, void *data);
        static PyObject *t_BistaticRangeRate_get__receiverStation(t_BistaticRangeRate *self, void *data);
        static PyObject *t_BistaticRangeRate_get__parameters_(t_BistaticRangeRate *self, void *data);
        static PyGetSetDef t_BistaticRangeRate__fields_[] = {
          DECLARE_GET_FIELD(t_BistaticRangeRate, emitterStation),
          DECLARE_GET_FIELD(t_BistaticRangeRate, receiverStation),
          DECLARE_GET_FIELD(t_BistaticRangeRate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BistaticRangeRate__methods_[] = {
          DECLARE_METHOD(t_BistaticRangeRate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRangeRate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRangeRate, of_, METH_VARARGS),
          DECLARE_METHOD(t_BistaticRangeRate, getEmitterStation, METH_NOARGS),
          DECLARE_METHOD(t_BistaticRangeRate, getReceiverStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRate)[] = {
          { Py_tp_methods, t_BistaticRangeRate__methods_ },
          { Py_tp_init, (void *) t_BistaticRangeRate_init_ },
          { Py_tp_getset, t_BistaticRangeRate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BistaticRangeRate)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(BistaticRangeRate, t_BistaticRangeRate, BistaticRangeRate);
        PyObject *t_BistaticRangeRate::wrap_Object(const BistaticRangeRate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRangeRate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRangeRate *self = (t_BistaticRangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BistaticRangeRate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRangeRate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRangeRate *self = (t_BistaticRangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BistaticRangeRate::install(PyObject *module)
        {
          installType(&PY_TYPE(BistaticRangeRate), &PY_TYPE_DEF(BistaticRangeRate), module, "BistaticRangeRate", 0);
        }

        void t_BistaticRangeRate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "class_", make_descriptor(BistaticRangeRate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "wrapfn_", make_descriptor(t_BistaticRangeRate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "boxfn_", make_descriptor(boxObject));
          env->getClass(BistaticRangeRate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "MEASUREMENT_TYPE", make_descriptor(j2p(*BistaticRangeRate::MEASUREMENT_TYPE)));
        }

        static PyObject *t_BistaticRangeRate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BistaticRangeRate::initializeClass, 1)))
            return NULL;
          return t_BistaticRangeRate::wrap_Object(BistaticRangeRate(((t_BistaticRangeRate *) arg)->object.this$));
        }
        static PyObject *t_BistaticRangeRate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BistaticRangeRate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BistaticRangeRate_of_(t_BistaticRangeRate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BistaticRangeRate_init_(t_BistaticRangeRate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          BistaticRangeRate object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = BistaticRangeRate(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRangeRate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BistaticRangeRate_getEmitterStation(t_BistaticRangeRate *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_BistaticRangeRate_getReceiverStation(t_BistaticRangeRate *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_BistaticRangeRate_get__parameters_(t_BistaticRangeRate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BistaticRangeRate_get__emitterStation(t_BistaticRangeRate *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_BistaticRangeRate_get__receiverStation(t_BistaticRangeRate *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince54FieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince54FieldIntegrator::class$ = NULL;
        jmethodID *DormandPrince54FieldIntegrator::mids$ = NULL;
        bool DormandPrince54FieldIntegrator::live$ = false;

        jclass DormandPrince54FieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince54FieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4a2c9513f4a7704d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_6d182549447f82d8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_1b3ae884bec31e6d] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_226a0b2040b1d2e1] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_226a0b2040b1d2e1] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_8da11934ae871d4c] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince54FieldStateInterpolator;");
            mids$[mid_estimateError_f7f77a3e7e765297] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54FieldIntegrator::DormandPrince54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_4a2c9513f4a7704d, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        DormandPrince54FieldIntegrator::DormandPrince54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_6d182549447f82d8, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > DormandPrince54FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_1b3ae884bec31e6d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince54FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_226a0b2040b1d2e1]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince54FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_226a0b2040b1d2e1]));
        }

        jint DormandPrince54FieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
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
        static PyObject *t_DormandPrince54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54FieldIntegrator_of_(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static int t_DormandPrince54FieldIntegrator_init_(t_DormandPrince54FieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54FieldIntegrator_getA(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegrator_getB(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegrator_getC(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegrator_getOrder(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegrator_get__a(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince54FieldIntegrator_get__b(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince54FieldIntegrator_get__c(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince54FieldIntegrator_get__order(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince54FieldIntegrator_get__parameters_(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyGetSetDef t_DormandPrince54FieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, a),
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, b),
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, c),
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, order),
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince54FieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54FieldIntegrator)[] = {
          { Py_tp_methods, t_DormandPrince54FieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54FieldIntegrator_init_ },
          { Py_tp_getset, t_DormandPrince54FieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54FieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince54FieldIntegrator, t_DormandPrince54FieldIntegrator, DormandPrince54FieldIntegrator);
        PyObject *t_DormandPrince54FieldIntegrator::wrap_Object(const DormandPrince54FieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince54FieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince54FieldIntegrator *self = (t_DormandPrince54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince54FieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince54FieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince54FieldIntegrator *self = (t_DormandPrince54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince54FieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54FieldIntegrator), &PY_TYPE_DEF(DormandPrince54FieldIntegrator), module, "DormandPrince54FieldIntegrator", 0);
        }

        void t_DormandPrince54FieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegrator), "class_", make_descriptor(DormandPrince54FieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegrator), "wrapfn_", make_descriptor(t_DormandPrince54FieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54FieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54FieldIntegrator::wrap_Object(DormandPrince54FieldIntegrator(((t_DormandPrince54FieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54FieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince54FieldIntegrator_of_(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince54FieldIntegrator_init_(t_DormandPrince54FieldIntegrator *self, PyObject *args, PyObject *kwds)
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
              DormandPrince54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = DormandPrince54FieldIntegrator(a0, a1, a2, a3, a4));
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
              DormandPrince54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = DormandPrince54FieldIntegrator(a0, a1, a2, a3, a4));
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

        static PyObject *t_DormandPrince54FieldIntegrator_getA(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince54FieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_getB(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(DormandPrince54FieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_getC(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(DormandPrince54FieldIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_getOrder(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince54FieldIntegrator), (PyObject *) self, "getOrder", args, 2);
        }
        static PyObject *t_DormandPrince54FieldIntegrator_get__parameters_(t_DormandPrince54FieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DormandPrince54FieldIntegrator_get__a(t_DormandPrince54FieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_get__b(t_DormandPrince54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_get__c(t_DormandPrince54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_get__order(t_DormandPrince54FieldIntegrator *self, void *data)
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
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
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
            mids$[mid_combinedDerivatives_bed9dfcebfaf5040] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;");
            mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_yields_1b0abd4f90ebd0eb] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::integration::FieldCombinedDerivatives FieldAdditionalDerivativesProvider::combinedDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::FieldCombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_bed9dfcebfaf5040], a0.this$));
        }

        jint FieldAdditionalDerivativesProvider::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
        }

        ::java::lang::String FieldAdditionalDerivativesProvider::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
        }

        void FieldAdditionalDerivativesProvider::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
        }

        jboolean FieldAdditionalDerivativesProvider::yields(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_yields_1b0abd4f90ebd0eb], a0.this$);
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
#include "org/orekit/propagation/events/EventState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/EventState$EventOccurrence.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
            mids$[mid_init$_efb7003d866d4523] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_doEvent_0ff7e42fc3e2c973] = env->getMethodID(cls, "doEvent", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/events/EventState$EventOccurrence;");
            mids$[mid_evaluateStep_f179962aca2c851b] = env->getMethodID(cls, "evaluateStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)Z");
            mids$[mid_getEventDate_85703d13e302437e] = env->getMethodID(cls, "getEventDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEventDetector_d73bb985ffde4156] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_reinitializeBegin_aa75aa80a734fb3b] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_tryAdvance_c5785ef0069e6131] = env->getMethodID(cls, "tryAdvance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventState::EventState(const ::org::orekit::propagation::events::EventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_efb7003d866d4523, a0.this$)) {}

        ::org::orekit::propagation::events::EventState$EventOccurrence EventState::doEvent(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::events::EventState$EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_0ff7e42fc3e2c973], a0.this$));
        }

        jboolean EventState::evaluateStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_f179962aca2c851b], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate EventState::getEventDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEventDate_85703d13e302437e]));
        }

        ::org::orekit::propagation::events::EventDetector EventState::getEventDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_d73bb985ffde4156]));
        }

        void EventState::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
        }

        void EventState::reinitializeBegin(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_aa75aa80a734fb3b], a0.this$);
        }

        jboolean EventState::tryAdvance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_c5785ef0069e6131], a0.this$, a1.this$);
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
#include "org/hipparchus/linear/ComplexEigenDecomposition.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ComplexEigenDecomposition::class$ = NULL;
      jmethodID *ComplexEigenDecomposition::mids$ = NULL;
      bool ComplexEigenDecomposition::live$ = false;
      jdouble ComplexEigenDecomposition::DEFAULT_EIGENVECTORS_EQUALITY = (jdouble) 0;
      jdouble ComplexEigenDecomposition::DEFAULT_EPSILON = (jdouble) 0;
      jdouble ComplexEigenDecomposition::DEFAULT_EPSILON_AV_VD_CHECK = (jdouble) 0;

      jclass ComplexEigenDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ComplexEigenDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_acd058c9ad5e3c71] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDD)V");
          mids$[mid_getD_c992983685c753c5] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getDeterminant_dff5885c2c873297] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getEigenvalues_8a0770025abeda5b] = env->getMethodID(cls, "getEigenvalues", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvector_819edc89e6437565] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getV_c992983685c753c5] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getVT_c992983685c753c5] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_hasComplexEigenvalues_b108b35ef48e27bd] = env->getMethodID(cls, "hasComplexEigenvalues", "()Z");
          mids$[mid_findEigenVectors_3c6edf548344b9f0] = env->getMethodID(cls, "findEigenVectors", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_matricesToEigenArrays_0fa09c18fee449d5] = env->getMethodID(cls, "matricesToEigenArrays", "()V");
          mids$[mid_findEigenValues_c67473bd6cfaa69b] = env->getMethodID(cls, "findEigenValues", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_checkDefinition_c67473bd6cfaa69b] = env->getMethodID(cls, "checkDefinition", "(Lorg/hipparchus/linear/RealMatrix;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EIGENVECTORS_EQUALITY = env->getStaticDoubleField(cls, "DEFAULT_EIGENVECTORS_EQUALITY");
          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          DEFAULT_EPSILON_AV_VD_CHECK = env->getStaticDoubleField(cls, "DEFAULT_EPSILON_AV_VD_CHECK");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexEigenDecomposition::ComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

      ComplexEigenDecomposition::ComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_acd058c9ad5e3c71, a0.this$, a1, a2, a3)) {}

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getD() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getD_c992983685c753c5]));
      }

      jdouble ComplexEigenDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_dff5885c2c873297]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexEigenDecomposition::getEigenvalues() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_8a0770025abeda5b]));
      }

      ::org::hipparchus::linear::FieldVector ComplexEigenDecomposition::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_819edc89e6437565], a0));
      }

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getV() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getV_c992983685c753c5]));
      }

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getVT_c992983685c753c5]));
      }

      jboolean ComplexEigenDecomposition::hasComplexEigenvalues() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasComplexEigenvalues_b108b35ef48e27bd]);
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
      static PyObject *t_ComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexEigenDecomposition_init_(t_ComplexEigenDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexEigenDecomposition_getD(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getDeterminant(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getEigenvalues(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getEigenvector(t_ComplexEigenDecomposition *self, PyObject *arg);
      static PyObject *t_ComplexEigenDecomposition_getV(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getVT(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_hasComplexEigenvalues(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_get__d(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__determinant(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__eigenvalues(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__v(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__vT(t_ComplexEigenDecomposition *self, void *data);
      static PyGetSetDef t_ComplexEigenDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, d),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, determinant),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, eigenvalues),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, v),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexEigenDecomposition__methods_[] = {
        DECLARE_METHOD(t_ComplexEigenDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getD, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getEigenvector, METH_O),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getV, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getVT, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, hasComplexEigenvalues, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexEigenDecomposition)[] = {
        { Py_tp_methods, t_ComplexEigenDecomposition__methods_ },
        { Py_tp_init, (void *) t_ComplexEigenDecomposition_init_ },
        { Py_tp_getset, t_ComplexEigenDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexEigenDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexEigenDecomposition, t_ComplexEigenDecomposition, ComplexEigenDecomposition);

      void t_ComplexEigenDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexEigenDecomposition), &PY_TYPE_DEF(ComplexEigenDecomposition), module, "ComplexEigenDecomposition", 0);
      }

      void t_ComplexEigenDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "class_", make_descriptor(ComplexEigenDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "wrapfn_", make_descriptor(t_ComplexEigenDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "boxfn_", make_descriptor(boxObject));
        env->getClass(ComplexEigenDecomposition::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EIGENVECTORS_EQUALITY", make_descriptor(ComplexEigenDecomposition::DEFAULT_EIGENVECTORS_EQUALITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EPSILON", make_descriptor(ComplexEigenDecomposition::DEFAULT_EPSILON));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EPSILON_AV_VD_CHECK", make_descriptor(ComplexEigenDecomposition::DEFAULT_EPSILON_AV_VD_CHECK));
      }

      static PyObject *t_ComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexEigenDecomposition::initializeClass, 1)))
          return NULL;
        return t_ComplexEigenDecomposition::wrap_Object(ComplexEigenDecomposition(((t_ComplexEigenDecomposition *) arg)->object.this$));
      }
      static PyObject *t_ComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexEigenDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexEigenDecomposition_init_(t_ComplexEigenDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = ComplexEigenDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            ComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDDD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = ComplexEigenDecomposition(a0, a1, a2, a3));
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

      static PyObject *t_ComplexEigenDecomposition_getD(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_getDeterminant(t_ComplexEigenDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ComplexEigenDecomposition_getEigenvalues(t_ComplexEigenDecomposition *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexEigenDecomposition_getEigenvector(t_ComplexEigenDecomposition *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_ComplexEigenDecomposition_getV(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_getVT(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_hasComplexEigenvalues(t_ComplexEigenDecomposition *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasComplexEigenvalues());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ComplexEigenDecomposition_get__d(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__determinant(t_ComplexEigenDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__eigenvalues(t_ComplexEigenDecomposition *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexEigenDecomposition_get__v(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__vT(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FunctionUtils.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
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
          mids$[mid_add_7170b070702438b3] = env->getStaticMethodID(cls, "add", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_add_4eb7faaab711f396] = env->getStaticMethodID(cls, "add", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_collector_4c39da77fc432e07] = env->getStaticMethodID(cls, "collector", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_collector_9349fd916a39e221] = env->getStaticMethodID(cls, "collector", "(Lorg/hipparchus/analysis/BivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;D)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_combine_3330827e5a477097] = env->getStaticMethodID(cls, "combine", "(Lorg/hipparchus/analysis/BivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_compose_7170b070702438b3] = env->getStaticMethodID(cls, "compose", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_compose_4eb7faaab711f396] = env->getStaticMethodID(cls, "compose", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_derivative_1af9f11a6865952e] = env->getStaticMethodID(cls, "derivative", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;[I)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_derivative_5707ffcbbb3c291a] = env->getStaticMethodID(cls, "derivative", "(Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;I)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_fix1stArgument_f48bb0dc5eafff9b] = env->getStaticMethodID(cls, "fix1stArgument", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_fix2ndArgument_f48bb0dc5eafff9b] = env->getStaticMethodID(cls, "fix2ndArgument", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_multiply_7170b070702438b3] = env->getStaticMethodID(cls, "multiply", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_multiply_4eb7faaab711f396] = env->getStaticMethodID(cls, "multiply", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_sample_bb5b80d154c3de2f] = env->getStaticMethodID(cls, "sample", "(Lorg/hipparchus/analysis/UnivariateFunction;DDI)[D");
          mids$[mid_toDifferentiable_ec776c30a2f68070] = env->getStaticMethodID(cls, "toDifferentiable", "(Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_toDifferentiable_33be8e58464546b4] = env->getStaticMethodID(cls, "toDifferentiable", "(Lorg/hipparchus/analysis/MultivariateFunction;Lorg/hipparchus/analysis/MultivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::add(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_add_7170b070702438b3], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::add(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_add_4eb7faaab711f396], a0.this$));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::collector(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_collector_4c39da77fc432e07], a0.this$, a1));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::collector(const ::org::hipparchus::analysis::BivariateFunction & a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_collector_9349fd916a39e221], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::combine(const ::org::hipparchus::analysis::BivariateFunction & a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, const ::org::hipparchus::analysis::UnivariateFunction & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_combine_3330827e5a477097], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::compose(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_compose_7170b070702438b3], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::compose(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_compose_4eb7faaab711f396], a0.this$));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::derivative(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_derivative_1af9f11a6865952e], a0.this$, a1.this$));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::derivative(const ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_derivative_5707ffcbbb3c291a], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::fix1stArgument(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_fix1stArgument_f48bb0dc5eafff9b], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::fix2ndArgument(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_fix2ndArgument_f48bb0dc5eafff9b], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::multiply(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_multiply_7170b070702438b3], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::multiply(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_multiply_4eb7faaab711f396], a0.this$));
      }

      JArray< jdouble > FunctionUtils::sample(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_sample_bb5b80d154c3de2f], a0.this$, a1, a2, a3));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::toDifferentiable(const ::org::hipparchus::analysis::UnivariateFunction & a0, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_toDifferentiable_ec776c30a2f68070], a0.this$, a1.this$));
      }

      ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction FunctionUtils::toDifferentiable(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::org::hipparchus::analysis::MultivariateVectorFunction & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_toDifferentiable_33be8e58464546b4], a0.this$, a1.this$));
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
#include "org/hipparchus/linear/SparseFieldVector.h"
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/SparseFieldVector.h"
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseFieldVector::class$ = NULL;
      jmethodID *SparseFieldVector::mids$ = NULL;
      bool SparseFieldVector::live$ = false;

      jclass SparseFieldVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseFieldVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_989e9dce085ad65f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_c5199de6167cff95] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_7dbd657fb2d34563] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_add_c47354bb26c2147b] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_add_a657ce460dba8c79] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_c47354bb26c2147b] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_ca6f118471875f79] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_a657ce460dba8c79] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_34cb9002c167d93d] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_5546fa4eea5fe461] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_a657ce460dba8c79] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_a657ce460dba8c79] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_ffcdb6600dc6671a] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_cf350b5e44ab330d] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
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
          mids$[mid_outerProduct_28708d1eb805c815] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_outerProduct_02f30c6e86c806f6] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_a657ce460dba8c79] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_f96eb0f00086e90d] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setEntry_2c97e4718ab5a1ad] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_0c5a38a1f7c3f4d4] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_3ea4a04bce899c30] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/SparseFieldVector;");
          mids$[mid_subtract_a657ce460dba8c79] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_cbac806c384cdbe1] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_fb947c4465b9a4d6] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_ec6a5e8719a36b21] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_c01d5834289e5b85] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_411a1a5e2be54cff] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_fb947c4465b9a4d6] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_ec6a5e8719a36b21] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_c01d5834289e5b85] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_411a1a5e2be54cff] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkVectorDimensions_99803b0791f320ff] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_989e9dce085ad65f, a0.this$, a1.this$)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c5199de6167cff95, a0.this$, a1)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7dbd657fb2d34563, a0.this$, a1, a2)) {}

      ::org::hipparchus::linear::FieldVector SparseFieldVector::add(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_c47354bb26c2147b], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::add(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_a657ce460dba8c79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_c47354bb26c2147b], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_a657ce460dba8c79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::copy() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_copy_34cb9002c167d93d]));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::dotProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_5546fa4eea5fe461], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::ebeDivide(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_a657ce460dba8c79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::ebeMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_a657ce460dba8c79], a0.this$));
      }

      jboolean SparseFieldVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      jint SparseFieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::FieldElement SparseFieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_ffcdb6600dc6671a], a0));
      }

      ::org::hipparchus::Field SparseFieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_cf350b5e44ab330d], a0, a1));
      }

      jint SparseFieldVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapInv() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_34cb9002c167d93d]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapInvToSelf() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_34cb9002c167d93d]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldVector::outerProduct(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_28708d1eb805c815], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldVector::outerProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_02f30c6e86c806f6], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::projection(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_projection_a657ce460dba8c79], a0.this$));
      }

      void SparseFieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_f96eb0f00086e90d], a0.this$);
      }

      void SparseFieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_2c97e4718ab5a1ad], a0, a1.this$);
      }

      void SparseFieldVector::setSubVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_0c5a38a1f7c3f4d4], a0, a1.this$);
      }

      SparseFieldVector SparseFieldVector::subtract(const SparseFieldVector & a0) const
      {
        return SparseFieldVector(env->callObjectMethod(this$, mids$[mid_subtract_3ea4a04bce899c30], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::subtract(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_a657ce460dba8c79], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > SparseFieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_cbac806c384cdbe1]));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_fb947c4465b9a4d6], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_ec6a5e8719a36b21], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_c01d5834289e5b85], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_411a1a5e2be54cff], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_fb947c4465b9a4d6], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_ec6a5e8719a36b21], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_c01d5834289e5b85], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_411a1a5e2be54cff], a0.this$, a1, a2));
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
      static PyObject *t_SparseFieldVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldVector_of_(t_SparseFieldVector *self, PyObject *args);
      static int t_SparseFieldVector_init_(t_SparseFieldVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SparseFieldVector_add(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_append(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_copy(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_dotProduct(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_ebeDivide(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_ebeMultiply(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_equals(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_getDimension(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_getEntry(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_getField(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_getSubVector(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_hashCode(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_mapAdd(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapAddToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapDivide(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapDivideToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapInv(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_mapInvToSelf(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_mapMultiply(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapMultiplyToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapSubtract(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapSubtractToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_outerProduct(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_projection(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_set(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_setEntry(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_setSubVector(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_subtract(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_toArray(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_walkInDefaultOrder(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_walkInOptimizedOrder(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_get__dimension(t_SparseFieldVector *self, void *data);
      static PyObject *t_SparseFieldVector_get__field(t_SparseFieldVector *self, void *data);
      static PyObject *t_SparseFieldVector_get__parameters_(t_SparseFieldVector *self, void *data);
      static PyGetSetDef t_SparseFieldVector__fields_[] = {
        DECLARE_GET_FIELD(t_SparseFieldVector, dimension),
        DECLARE_GET_FIELD(t_SparseFieldVector, field),
        DECLARE_GET_FIELD(t_SparseFieldVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SparseFieldVector__methods_[] = {
        DECLARE_METHOD(t_SparseFieldVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, add, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, append, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, dotProduct, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, ebeDivide, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, ebeMultiply, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, getEntry, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, getField, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, mapAdd, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapDivide, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapInv, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, mapInvToSelf, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, outerProduct, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, projection, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, set, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, toArray, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseFieldVector)[] = {
        { Py_tp_methods, t_SparseFieldVector__methods_ },
        { Py_tp_init, (void *) t_SparseFieldVector_init_ },
        { Py_tp_getset, t_SparseFieldVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseFieldVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SparseFieldVector, t_SparseFieldVector, SparseFieldVector);
      PyObject *t_SparseFieldVector::wrap_Object(const SparseFieldVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldVector *self = (t_SparseFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SparseFieldVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldVector *self = (t_SparseFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SparseFieldVector::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseFieldVector), &PY_TYPE_DEF(SparseFieldVector), module, "SparseFieldVector", 0);
      }

      void t_SparseFieldVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldVector), "class_", make_descriptor(SparseFieldVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldVector), "wrapfn_", make_descriptor(t_SparseFieldVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseFieldVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseFieldVector::initializeClass, 1)))
          return NULL;
        return t_SparseFieldVector::wrap_Object(SparseFieldVector(((t_SparseFieldVector *) arg)->object.this$));
      }
      static PyObject *t_SparseFieldVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseFieldVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SparseFieldVector_of_(t_SparseFieldVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SparseFieldVector_init_(t_SparseFieldVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = SparseFieldVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = SparseFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = SparseFieldVector(a0, a1));
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
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = SparseFieldVector(a0, a1, a2));
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

      static PyObject *t_SparseFieldVector_add(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_append(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_copy(t_SparseFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_dotProduct(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_ebeDivide(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_ebeMultiply(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_equals(t_SparseFieldVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SparseFieldVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_SparseFieldVector_getDimension(t_SparseFieldVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SparseFieldVector_getEntry(t_SparseFieldVector *self, PyObject *arg)
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

      static PyObject *t_SparseFieldVector_getField(t_SparseFieldVector *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_getSubVector(t_SparseFieldVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_hashCode(t_SparseFieldVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SparseFieldVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_SparseFieldVector_mapAdd(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapAddToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapDivide(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapDivideToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapInv(t_SparseFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInv());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_mapInvToSelf(t_SparseFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInvToSelf());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_mapMultiply(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapMultiplyToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapSubtract(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapSubtractToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_outerProduct(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_projection(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.projection(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "projection", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_set(t_SparseFieldVector *self, PyObject *arg)
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

      static PyObject *t_SparseFieldVector_setEntry(t_SparseFieldVector *self, PyObject *args)
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

      static PyObject *t_SparseFieldVector_setSubVector(t_SparseFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_subtract(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_SparseFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_toArray(t_SparseFieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_SparseFieldVector_walkInDefaultOrder(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInDefaultOrder", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_walkInOptimizedOrder(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }
      static PyObject *t_SparseFieldVector_get__parameters_(t_SparseFieldVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SparseFieldVector_get__dimension(t_SparseFieldVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SparseFieldVector_get__field(t_SparseFieldVector *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/BilinearInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BilinearInterpolator::class$ = NULL;
        jmethodID *BilinearInterpolator::mids$ = NULL;
        bool BilinearInterpolator::live$ = false;

        jclass BilinearInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BilinearInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_f2cb7c2ca87c1e4e] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BilinearInterpolator::BilinearInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction BilinearInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_f2cb7c2ca87c1e4e], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_BilinearInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BilinearInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BilinearInterpolator_init_(t_BilinearInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BilinearInterpolator_interpolate(t_BilinearInterpolator *self, PyObject *args);

        static PyMethodDef t_BilinearInterpolator__methods_[] = {
          DECLARE_METHOD(t_BilinearInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BilinearInterpolator)[] = {
          { Py_tp_methods, t_BilinearInterpolator__methods_ },
          { Py_tp_init, (void *) t_BilinearInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BilinearInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BilinearInterpolator, t_BilinearInterpolator, BilinearInterpolator);

        void t_BilinearInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(BilinearInterpolator), &PY_TYPE_DEF(BilinearInterpolator), module, "BilinearInterpolator", 0);
        }

        void t_BilinearInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "class_", make_descriptor(BilinearInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "wrapfn_", make_descriptor(t_BilinearInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BilinearInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BilinearInterpolator::initializeClass, 1)))
            return NULL;
          return t_BilinearInterpolator::wrap_Object(BilinearInterpolator(((t_BilinearInterpolator *) arg)->object.this$));
        }
        static PyObject *t_BilinearInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BilinearInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BilinearInterpolator_init_(t_BilinearInterpolator *self, PyObject *args, PyObject *kwds)
        {
          BilinearInterpolator object((jobject) NULL);

          INT_CALL(object = BilinearInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_BilinearInterpolator_interpolate(t_BilinearInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PropagatorsParallelizer.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PropagatorsParallelizer::class$ = NULL;
      jmethodID *PropagatorsParallelizer::mids$ = NULL;
      bool PropagatorsParallelizer::live$ = false;

      jclass PropagatorsParallelizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PropagatorsParallelizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_151c087c1a7e09cf] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/propagation/sampling/MultiSatStepHandler;)V");
          mids$[mid_init$_d0d4103d5687bd9d] = env->getMethodID(cls, "<init>", "(Ljava/util/List;DLorg/orekit/propagation/sampling/MultiSatFixedStepHandler;)V");
          mids$[mid_getPropagators_2afa36052df4765d] = env->getMethodID(cls, "getPropagators", "()Ljava/util/List;");
          mids$[mid_propagate_8060cef9318d72e3] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PropagatorsParallelizer::PropagatorsParallelizer(const ::java::util::List & a0, const ::org::orekit::propagation::sampling::MultiSatStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_151c087c1a7e09cf, a0.this$, a1.this$)) {}

      PropagatorsParallelizer::PropagatorsParallelizer(const ::java::util::List & a0, jdouble a1, const ::org::orekit::propagation::sampling::MultiSatFixedStepHandler & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d4103d5687bd9d, a0.this$, a1, a2.this$)) {}

      ::java::util::List PropagatorsParallelizer::getPropagators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPropagators_2afa36052df4765d]));
      }

      ::java::util::List PropagatorsParallelizer::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_propagate_8060cef9318d72e3], a0.this$, a1.this$));
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
      static PyObject *t_PropagatorsParallelizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagatorsParallelizer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PropagatorsParallelizer_init_(t_PropagatorsParallelizer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PropagatorsParallelizer_getPropagators(t_PropagatorsParallelizer *self);
      static PyObject *t_PropagatorsParallelizer_propagate(t_PropagatorsParallelizer *self, PyObject *args);
      static PyObject *t_PropagatorsParallelizer_get__propagators(t_PropagatorsParallelizer *self, void *data);
      static PyGetSetDef t_PropagatorsParallelizer__fields_[] = {
        DECLARE_GET_FIELD(t_PropagatorsParallelizer, propagators),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PropagatorsParallelizer__methods_[] = {
        DECLARE_METHOD(t_PropagatorsParallelizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagatorsParallelizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagatorsParallelizer, getPropagators, METH_NOARGS),
        DECLARE_METHOD(t_PropagatorsParallelizer, propagate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PropagatorsParallelizer)[] = {
        { Py_tp_methods, t_PropagatorsParallelizer__methods_ },
        { Py_tp_init, (void *) t_PropagatorsParallelizer_init_ },
        { Py_tp_getset, t_PropagatorsParallelizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PropagatorsParallelizer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PropagatorsParallelizer, t_PropagatorsParallelizer, PropagatorsParallelizer);

      void t_PropagatorsParallelizer::install(PyObject *module)
      {
        installType(&PY_TYPE(PropagatorsParallelizer), &PY_TYPE_DEF(PropagatorsParallelizer), module, "PropagatorsParallelizer", 0);
      }

      void t_PropagatorsParallelizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "class_", make_descriptor(PropagatorsParallelizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "wrapfn_", make_descriptor(t_PropagatorsParallelizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PropagatorsParallelizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PropagatorsParallelizer::initializeClass, 1)))
          return NULL;
        return t_PropagatorsParallelizer::wrap_Object(PropagatorsParallelizer(((t_PropagatorsParallelizer *) arg)->object.this$));
      }
      static PyObject *t_PropagatorsParallelizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PropagatorsParallelizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PropagatorsParallelizer_init_(t_PropagatorsParallelizer *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::sampling::MultiSatStepHandler a1((jobject) NULL);
            PropagatorsParallelizer object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::propagation::sampling::MultiSatStepHandler::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
            {
              INT_CALL(object = PropagatorsParallelizer(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::propagation::sampling::MultiSatFixedStepHandler a2((jobject) NULL);
            PropagatorsParallelizer object((jobject) NULL);

            if (!parseArgs(args, "KDk", ::java::util::List::initializeClass, ::org::orekit::propagation::sampling::MultiSatFixedStepHandler::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
            {
              INT_CALL(object = PropagatorsParallelizer(a0, a1, a2));
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

      static PyObject *t_PropagatorsParallelizer_getPropagators(t_PropagatorsParallelizer *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPropagators());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(Propagator));
      }

      static PyObject *t_PropagatorsParallelizer_propagate(t_PropagatorsParallelizer *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.propagate(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", args);
        return NULL;
      }

      static PyObject *t_PropagatorsParallelizer_get__propagators(t_PropagatorsParallelizer *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPropagators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/CommonPhysicalProperties.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *CommonPhysicalProperties::class$ = NULL;
          jmethodID *CommonPhysicalProperties::mids$ = NULL;
          bool CommonPhysicalProperties::live$ = false;

          jclass CommonPhysicalProperties::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/CommonPhysicalProperties");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getMaxRcs_dff5885c2c873297] = env->getMethodID(cls, "getMaxRcs", "()D");
              mids$[mid_getMinRcs_dff5885c2c873297] = env->getMethodID(cls, "getMinRcs", "()D");
              mids$[mid_getOebAreaAlongIntermediate_dff5885c2c873297] = env->getMethodID(cls, "getOebAreaAlongIntermediate", "()D");
              mids$[mid_getOebAreaAlongMax_dff5885c2c873297] = env->getMethodID(cls, "getOebAreaAlongMax", "()D");
              mids$[mid_getOebAreaAlongMin_dff5885c2c873297] = env->getMethodID(cls, "getOebAreaAlongMin", "()D");
              mids$[mid_getOebIntermediate_dff5885c2c873297] = env->getMethodID(cls, "getOebIntermediate", "()D");
              mids$[mid_getOebMax_dff5885c2c873297] = env->getMethodID(cls, "getOebMax", "()D");
              mids$[mid_getOebMin_dff5885c2c873297] = env->getMethodID(cls, "getOebMin", "()D");
              mids$[mid_getOebParentFrame_5d5dd95b04037824] = env->getMethodID(cls, "getOebParentFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
              mids$[mid_getOebParentFrameEpoch_85703d13e302437e] = env->getMethodID(cls, "getOebParentFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getOebQ_18aa64800eb51ca4] = env->getMethodID(cls, "getOebQ", "()Lorg/hipparchus/complex/Quaternion;");
              mids$[mid_getRcs_dff5885c2c873297] = env->getMethodID(cls, "getRcs", "()D");
              mids$[mid_getReflectance_dff5885c2c873297] = env->getMethodID(cls, "getReflectance", "()D");
              mids$[mid_getVmAbsolute_dff5885c2c873297] = env->getMethodID(cls, "getVmAbsolute", "()D");
              mids$[mid_getVmApparent_dff5885c2c873297] = env->getMethodID(cls, "getVmApparent", "()D");
              mids$[mid_getVmApparentMax_dff5885c2c873297] = env->getMethodID(cls, "getVmApparentMax", "()D");
              mids$[mid_getVmApparentMin_dff5885c2c873297] = env->getMethodID(cls, "getVmApparentMin", "()D");
              mids$[mid_setMaxRcs_17db3a65980d3441] = env->getMethodID(cls, "setMaxRcs", "(D)V");
              mids$[mid_setMinRcs_17db3a65980d3441] = env->getMethodID(cls, "setMinRcs", "(D)V");
              mids$[mid_setOebAreaAlongIntermediate_17db3a65980d3441] = env->getMethodID(cls, "setOebAreaAlongIntermediate", "(D)V");
              mids$[mid_setOebAreaAlongMax_17db3a65980d3441] = env->getMethodID(cls, "setOebAreaAlongMax", "(D)V");
              mids$[mid_setOebAreaAlongMin_17db3a65980d3441] = env->getMethodID(cls, "setOebAreaAlongMin", "(D)V");
              mids$[mid_setOebIntermediate_17db3a65980d3441] = env->getMethodID(cls, "setOebIntermediate", "(D)V");
              mids$[mid_setOebMax_17db3a65980d3441] = env->getMethodID(cls, "setOebMax", "(D)V");
              mids$[mid_setOebMin_17db3a65980d3441] = env->getMethodID(cls, "setOebMin", "(D)V");
              mids$[mid_setOebParentFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setOebParentFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
              mids$[mid_setOebParentFrameEpoch_600a2a61652bc473] = env->getMethodID(cls, "setOebParentFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setOebQ_bb79ca80d85d0a66] = env->getMethodID(cls, "setOebQ", "(ID)V");
              mids$[mid_setRcs_17db3a65980d3441] = env->getMethodID(cls, "setRcs", "(D)V");
              mids$[mid_setReflectance_17db3a65980d3441] = env->getMethodID(cls, "setReflectance", "(D)V");
              mids$[mid_setVmAbsolute_17db3a65980d3441] = env->getMethodID(cls, "setVmAbsolute", "(D)V");
              mids$[mid_setVmApparent_17db3a65980d3441] = env->getMethodID(cls, "setVmApparent", "(D)V");
              mids$[mid_setVmApparentMax_17db3a65980d3441] = env->getMethodID(cls, "setVmApparentMax", "(D)V");
              mids$[mid_setVmApparentMin_17db3a65980d3441] = env->getMethodID(cls, "setVmApparentMin", "(D)V");
              mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CommonPhysicalProperties::CommonPhysicalProperties() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          jdouble CommonPhysicalProperties::getMaxRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxRcs_dff5885c2c873297]);
          }

          jdouble CommonPhysicalProperties::getMinRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinRcs_dff5885c2c873297]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongIntermediate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongIntermediate_dff5885c2c873297]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongMax_dff5885c2c873297]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongMin_dff5885c2c873297]);
          }

          jdouble CommonPhysicalProperties::getOebIntermediate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebIntermediate_dff5885c2c873297]);
          }

          jdouble CommonPhysicalProperties::getOebMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebMax_dff5885c2c873297]);
          }

          jdouble CommonPhysicalProperties::getOebMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebMin_dff5885c2c873297]);
          }

          ::org::orekit::files::ccsds::definitions::FrameFacade CommonPhysicalProperties::getOebParentFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getOebParentFrame_5d5dd95b04037824]));
          }

          ::org::orekit::time::AbsoluteDate CommonPhysicalProperties::getOebParentFrameEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getOebParentFrameEpoch_85703d13e302437e]));
          }

          ::org::hipparchus::complex::Quaternion CommonPhysicalProperties::getOebQ() const
          {
            return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getOebQ_18aa64800eb51ca4]));
          }

          jdouble CommonPhysicalProperties::getRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcs_dff5885c2c873297]);
          }

          jdouble CommonPhysicalProperties::getReflectance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getReflectance_dff5885c2c873297]);
          }

          jdouble CommonPhysicalProperties::getVmAbsolute() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmAbsolute_dff5885c2c873297]);
          }

          jdouble CommonPhysicalProperties::getVmApparent() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparent_dff5885c2c873297]);
          }

          jdouble CommonPhysicalProperties::getVmApparentMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparentMax_dff5885c2c873297]);
          }

          jdouble CommonPhysicalProperties::getVmApparentMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparentMin_dff5885c2c873297]);
          }

          void CommonPhysicalProperties::setMaxRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxRcs_17db3a65980d3441], a0);
          }

          void CommonPhysicalProperties::setMinRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMinRcs_17db3a65980d3441], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongIntermediate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongIntermediate_17db3a65980d3441], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongMax_17db3a65980d3441], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongMin_17db3a65980d3441], a0);
          }

          void CommonPhysicalProperties::setOebIntermediate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebIntermediate_17db3a65980d3441], a0);
          }

          void CommonPhysicalProperties::setOebMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebMax_17db3a65980d3441], a0);
          }

          void CommonPhysicalProperties::setOebMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebMin_17db3a65980d3441], a0);
          }

          void CommonPhysicalProperties::setOebParentFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebParentFrame_849bc9e3b38b9bcb], a0.this$);
          }

          void CommonPhysicalProperties::setOebParentFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebParentFrameEpoch_600a2a61652bc473], a0.this$);
          }

          void CommonPhysicalProperties::setOebQ(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebQ_bb79ca80d85d0a66], a0, a1);
          }

          void CommonPhysicalProperties::setRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRcs_17db3a65980d3441], a0);
          }

          void CommonPhysicalProperties::setReflectance(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReflectance_17db3a65980d3441], a0);
          }

          void CommonPhysicalProperties::setVmAbsolute(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmAbsolute_17db3a65980d3441], a0);
          }

          void CommonPhysicalProperties::setVmApparent(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparent_17db3a65980d3441], a0);
          }

          void CommonPhysicalProperties::setVmApparentMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparentMax_17db3a65980d3441], a0);
          }

          void CommonPhysicalProperties::setVmApparentMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparentMin_17db3a65980d3441], a0);
          }

          void CommonPhysicalProperties::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
          static PyObject *t_CommonPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CommonPhysicalProperties_init_(t_CommonPhysicalProperties *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CommonPhysicalProperties_getMaxRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getMinRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongIntermediate(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebIntermediate(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebParentFrame(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebParentFrameEpoch(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebQ(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getReflectance(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmAbsolute(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparent(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparentMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparentMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_setMaxRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setMinRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebQ(t_CommonPhysicalProperties *self, PyObject *args);
          static PyObject *t_CommonPhysicalProperties_setRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setReflectance(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparent(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_validate(t_CommonPhysicalProperties *self, PyObject *args);
          static PyObject *t_CommonPhysicalProperties_get__maxRcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__maxRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__minRcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__minRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebIntermediate(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebParentFrame(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebParentFrameEpoch(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebQ(t_CommonPhysicalProperties *self, void *data);
          static PyObject *t_CommonPhysicalProperties_get__rcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__rcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__reflectance(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__reflectance(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmAbsolute(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparent(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparent(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparentMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparentMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyGetSetDef t_CommonPhysicalProperties__fields_[] = {
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, maxRcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, minRcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongIntermediate),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongMin),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebIntermediate),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebMin),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebParentFrame),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebParentFrameEpoch),
            DECLARE_GET_FIELD(t_CommonPhysicalProperties, oebQ),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, rcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, reflectance),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmAbsolute),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparent),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparentMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparentMin),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CommonPhysicalProperties__methods_[] = {
            DECLARE_METHOD(t_CommonPhysicalProperties, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommonPhysicalProperties, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getMaxRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getMinRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongIntermediate, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebIntermediate, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebParentFrame, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebParentFrameEpoch, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebQ, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getReflectance, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmAbsolute, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparent, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparentMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparentMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, setMaxRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setMinRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongIntermediate, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebIntermediate, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebParentFrame, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebParentFrameEpoch, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebQ, METH_VARARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, setRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setReflectance, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmAbsolute, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparent, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparentMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparentMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CommonPhysicalProperties)[] = {
            { Py_tp_methods, t_CommonPhysicalProperties__methods_ },
            { Py_tp_init, (void *) t_CommonPhysicalProperties_init_ },
            { Py_tp_getset, t_CommonPhysicalProperties__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CommonPhysicalProperties)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
            NULL
          };

          DEFINE_TYPE(CommonPhysicalProperties, t_CommonPhysicalProperties, CommonPhysicalProperties);

          void t_CommonPhysicalProperties::install(PyObject *module)
          {
            installType(&PY_TYPE(CommonPhysicalProperties), &PY_TYPE_DEF(CommonPhysicalProperties), module, "CommonPhysicalProperties", 0);
          }

          void t_CommonPhysicalProperties::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "class_", make_descriptor(CommonPhysicalProperties::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "wrapfn_", make_descriptor(t_CommonPhysicalProperties::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CommonPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CommonPhysicalProperties::initializeClass, 1)))
              return NULL;
            return t_CommonPhysicalProperties::wrap_Object(CommonPhysicalProperties(((t_CommonPhysicalProperties *) arg)->object.this$));
          }
          static PyObject *t_CommonPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CommonPhysicalProperties::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CommonPhysicalProperties_init_(t_CommonPhysicalProperties *self, PyObject *args, PyObject *kwds)
          {
            CommonPhysicalProperties object((jobject) NULL);

            INT_CALL(object = CommonPhysicalProperties());
            self->object = object;

            return 0;
          }

          static PyObject *t_CommonPhysicalProperties_getMaxRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getMinRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMinRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongIntermediate(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongIntermediate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebIntermediate(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebIntermediate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebParentFrame(t_CommonPhysicalProperties *self)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebParentFrame());
            return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebParentFrameEpoch(t_CommonPhysicalProperties *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebParentFrameEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebQ(t_CommonPhysicalProperties *self)
          {
            ::org::hipparchus::complex::Quaternion result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebQ());
            return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getReflectance(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getReflectance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmAbsolute(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmAbsolute());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparent(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparent());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparentMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparentMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparentMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparentMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_setMaxRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setMaxRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setMinRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setMinRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMinRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongIntermediate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongIntermediate", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebIntermediate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebIntermediate", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setOebParentFrame(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebParentFrame", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setOebParentFrameEpoch(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebParentFrameEpoch", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebQ(t_CommonPhysicalProperties *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setOebQ(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebQ", args);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setReflectance(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setReflectance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReflectance", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmAbsolute(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmAbsolute", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparent(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparent(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparent", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparentMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparentMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparentMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparentMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_validate(t_CommonPhysicalProperties *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CommonPhysicalProperties), (PyObject *) self, "validate", args, 2);
          }

          static PyObject *t_CommonPhysicalProperties_get__maxRcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__maxRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setMaxRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxRcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__minRcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMinRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__minRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setMinRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "minRcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongIntermediate());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongIntermediate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongIntermediate", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongMin", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebIntermediate(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebIntermediate());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebIntermediate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebIntermediate", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebMin", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebParentFrame(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebParentFrame());
            return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
          }
          static int t_CommonPhysicalProperties_set__oebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
              {
                INT_CALL(self->object.setOebParentFrame(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebParentFrame", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebParentFrameEpoch(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebParentFrameEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_CommonPhysicalProperties_set__oebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setOebParentFrameEpoch(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebParentFrameEpoch", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebQ(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::hipparchus::complex::Quaternion value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebQ());
            return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
          }

          static PyObject *t_CommonPhysicalProperties_get__rcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__rcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "rcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__reflectance(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getReflectance());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__reflectance(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setReflectance(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "reflectance", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmAbsolute(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmAbsolute());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmAbsolute(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmAbsolute", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparent(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparent());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparent(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparent(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparent", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparentMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparentMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparentMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparentMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparentMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparentMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparentMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparentMin", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *TleGenerationAlgorithm::class$ = NULL;
            jmethodID *TleGenerationAlgorithm::mids$ = NULL;
            bool TleGenerationAlgorithm::live$ = false;

            jclass TleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_bce44986dbf601d6] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_34f09d826252bcec] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::analytical::tle::FieldTLE TleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_bce44986dbf601d6], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE TleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_34f09d826252bcec], a0.this$, a1.this$));
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
        namespace tle {
          namespace generation {
            static PyObject *t_TleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationAlgorithm_generate(t_TleGenerationAlgorithm *self, PyObject *args);

            static PyMethodDef t_TleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_TleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationAlgorithm, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_TleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(TleGenerationAlgorithm, t_TleGenerationAlgorithm, TleGenerationAlgorithm);

            void t_TleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(TleGenerationAlgorithm), &PY_TYPE_DEF(TleGenerationAlgorithm), module, "TleGenerationAlgorithm", 0);
            }

            void t_TleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "class_", make_descriptor(TleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "wrapfn_", make_descriptor(t_TleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_TleGenerationAlgorithm::wrap_Object(TleGenerationAlgorithm(((t_TleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_TleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TleGenerationAlgorithm_generate(t_TleGenerationAlgorithm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "generate", args);
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
#include "org/hipparchus/util/BigRealField.h"
#include "org/hipparchus/util/BigReal.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/BigRealField.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *BigRealField::class$ = NULL;
      jmethodID *BigRealField::mids$ = NULL;
      bool BigRealField::live$ = false;

      jclass BigRealField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/BigRealField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_e723739aa731d3cf] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/util/BigRealField;");
          mids$[mid_getOne_fd9d6080c6f729de] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_fd9d6080c6f729de] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigRealField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      BigRealField BigRealField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigRealField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_e723739aa731d3cf]));
      }

      ::org::hipparchus::util::BigReal BigRealField::getOne() const
      {
        return ::org::hipparchus::util::BigReal(env->callObjectMethod(this$, mids$[mid_getOne_fd9d6080c6f729de]));
      }

      ::java::lang::Class BigRealField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
      }

      ::org::hipparchus::util::BigReal BigRealField::getZero() const
      {
        return ::org::hipparchus::util::BigReal(env->callObjectMethod(this$, mids$[mid_getZero_fd9d6080c6f729de]));
      }

      jint BigRealField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
      static PyObject *t_BigRealField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigRealField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigRealField_equals(t_BigRealField *self, PyObject *args);
      static PyObject *t_BigRealField_getInstance(PyTypeObject *type);
      static PyObject *t_BigRealField_getOne(t_BigRealField *self);
      static PyObject *t_BigRealField_getRuntimeClass(t_BigRealField *self);
      static PyObject *t_BigRealField_getZero(t_BigRealField *self);
      static PyObject *t_BigRealField_hashCode(t_BigRealField *self, PyObject *args);
      static PyObject *t_BigRealField_get__instance(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__one(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__runtimeClass(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__zero(t_BigRealField *self, void *data);
      static PyGetSetDef t_BigRealField__fields_[] = {
        DECLARE_GET_FIELD(t_BigRealField, instance),
        DECLARE_GET_FIELD(t_BigRealField, one),
        DECLARE_GET_FIELD(t_BigRealField, runtimeClass),
        DECLARE_GET_FIELD(t_BigRealField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigRealField__methods_[] = {
        DECLARE_METHOD(t_BigRealField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigRealField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigRealField)[] = {
        { Py_tp_methods, t_BigRealField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BigRealField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigRealField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigRealField, t_BigRealField, BigRealField);

      void t_BigRealField::install(PyObject *module)
      {
        installType(&PY_TYPE(BigRealField), &PY_TYPE_DEF(BigRealField), module, "BigRealField", 0);
      }

      void t_BigRealField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "class_", make_descriptor(BigRealField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "wrapfn_", make_descriptor(t_BigRealField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigRealField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigRealField::initializeClass, 1)))
          return NULL;
        return t_BigRealField::wrap_Object(BigRealField(((t_BigRealField *) arg)->object.this$));
      }
      static PyObject *t_BigRealField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigRealField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BigRealField_equals(t_BigRealField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigRealField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigRealField_getInstance(PyTypeObject *type)
      {
        BigRealField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::BigRealField::getInstance());
        return t_BigRealField::wrap_Object(result);
      }

      static PyObject *t_BigRealField_getOne(t_BigRealField *self)
      {
        ::org::hipparchus::util::BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigRealField_getRuntimeClass(t_BigRealField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(BigReal));
      }

      static PyObject *t_BigRealField_getZero(t_BigRealField *self)
      {
        ::org::hipparchus::util::BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigRealField_hashCode(t_BigRealField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigRealField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigRealField_get__instance(t_BigRealField *self, void *data)
      {
        BigRealField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_BigRealField::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__one(t_BigRealField *self, void *data)
      {
        ::org::hipparchus::util::BigReal value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__runtimeClass(t_BigRealField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__zero(t_BigRealField *self, void *data)
      {
        ::org::hipparchus::util::BigReal value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *RelativisticClockOneWayGNSSRangeModifier::mids$ = NULL;
          bool RelativisticClockOneWayGNSSRangeModifier::live$ = false;

          jclass RelativisticClockOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockOneWayGNSSRangeModifier::RelativisticClockOneWayGNSSRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::java::util::List RelativisticClockOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void RelativisticClockOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockOneWayGNSSRangeModifier_init_(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticClockOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticClockOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockOneWayGNSSRangeModifier, t_RelativisticClockOneWayGNSSRangeModifier, RelativisticClockOneWayGNSSRangeModifier);

          void t_RelativisticClockOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), &PY_TYPE_DEF(RelativisticClockOneWayGNSSRangeModifier), module, "RelativisticClockOneWayGNSSRangeModifier", 0);
          }

          void t_RelativisticClockOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "class_", make_descriptor(RelativisticClockOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_RelativisticClockOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockOneWayGNSSRangeModifier::wrap_Object(RelativisticClockOneWayGNSSRangeModifier(((t_RelativisticClockOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockOneWayGNSSRangeModifier_init_(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockOneWayGNSSRangeModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockOneWayGNSSRangeModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self, void *data)
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
                mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_getCj_46f85b53d9aedd96] = env->getMethodID(cls, "getCj", "(I)D");
                mids$[mid_getDcjDh_46f85b53d9aedd96] = env->getMethodID(cls, "getDcjDh", "(I)D");
                mids$[mid_getDcjDk_46f85b53d9aedd96] = env->getMethodID(cls, "getDcjDk", "(I)D");
                mids$[mid_getDsjDh_46f85b53d9aedd96] = env->getMethodID(cls, "getDsjDh", "(I)D");
                mids$[mid_getDsjDk_46f85b53d9aedd96] = env->getMethodID(cls, "getDsjDk", "(I)D");
                mids$[mid_getSj_46f85b53d9aedd96] = env->getMethodID(cls, "getSj", "(I)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CjSjCoefficient::CjSjCoefficient(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

            jdouble CjSjCoefficient::getCj(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCj_46f85b53d9aedd96], a0);
            }

            jdouble CjSjCoefficient::getDcjDh(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDcjDh_46f85b53d9aedd96], a0);
            }

            jdouble CjSjCoefficient::getDcjDk(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDcjDk_46f85b53d9aedd96], a0);
            }

            jdouble CjSjCoefficient::getDsjDh(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDsjDh_46f85b53d9aedd96], a0);
            }

            jdouble CjSjCoefficient::getDsjDk(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDsjDk_46f85b53d9aedd96], a0);
            }

            jdouble CjSjCoefficient::getSj(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSj_46f85b53d9aedd96], a0);
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
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *LineSensor::class$ = NULL;
        jmethodID *LineSensor::mids$ = NULL;
        bool LineSensor::live$ = false;

        jclass LineSensor::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/LineSensor");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8dd57cbeca7ea1c5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/rugged/linesensor/LineDatation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/los/TimeDependentLOS;)V");
            mids$[mid_dumpRate_17db3a65980d3441] = env->getMethodID(cls, "dumpRate", "(D)V");
            mids$[mid_getDate_149a9211a037d799] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLOS_d13e85cf520666cb] = env->getMethodID(cls, "getLOS", "(Lorg/orekit/time/AbsoluteDate;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOS_0967b903dc4355cb] = env->getMethodID(cls, "getLOS", "(Lorg/orekit/time/AbsoluteDate;I)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOSDerivatives_6c0d2d70ff47f0b3] = env->getMethodID(cls, "getLOSDerivatives", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getLOSDerivatives_2daacf58d695a774] = env->getMethodID(cls, "getLOSDerivatives", "(Lorg/orekit/time/AbsoluteDate;ILorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getLine_bf1d7732f1acb697] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getNbPixels_570ce0828f81a2c1] = env->getMethodID(cls, "getNbPixels", "()I");
            mids$[mid_getParametersDrivers_20f6d2b462aaef4b] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_getPosition_d52645e0d4c07563] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getRate_dcbc7ce2902fa136] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LineSensor::LineSensor(const ::java::lang::String & a0, const ::org::orekit::rugged::linesensor::LineDatation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::los::TimeDependentLOS & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8dd57cbeca7ea1c5, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void LineSensor::dumpRate(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_dumpRate_17db3a65980d3441], a0);
        }

        ::org::orekit::time::AbsoluteDate LineSensor::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_149a9211a037d799], a0));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getLOS(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_d13e85cf520666cb], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getLOS(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_0967b903dc4355cb], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LineSensor::getLOSDerivatives(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_6c0d2d70ff47f0b3], a0.this$, a1, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LineSensor::getLOSDerivatives(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_2daacf58d695a774], a0.this$, a1, a2.this$));
        }

        jdouble LineSensor::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_bf1d7732f1acb697], a0.this$);
        }

        ::java::lang::String LineSensor::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
        }

        jint LineSensor::getNbPixels() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixels_570ce0828f81a2c1]);
        }

        ::java::util::stream::Stream LineSensor::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_20f6d2b462aaef4b]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_d52645e0d4c07563]));
        }

        jdouble LineSensor::getRate(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRate_dcbc7ce2902fa136], a0);
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
      namespace linesensor {
        static PyObject *t_LineSensor_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LineSensor_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LineSensor_init_(t_LineSensor *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LineSensor_dumpRate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getDate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getLOS(t_LineSensor *self, PyObject *args);
        static PyObject *t_LineSensor_getLOSDerivatives(t_LineSensor *self, PyObject *args);
        static PyObject *t_LineSensor_getLine(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getName(t_LineSensor *self);
        static PyObject *t_LineSensor_getNbPixels(t_LineSensor *self);
        static PyObject *t_LineSensor_getParametersDrivers(t_LineSensor *self);
        static PyObject *t_LineSensor_getPosition(t_LineSensor *self);
        static PyObject *t_LineSensor_getRate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_get__name(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__nbPixels(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__parametersDrivers(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__position(t_LineSensor *self, void *data);
        static PyGetSetDef t_LineSensor__fields_[] = {
          DECLARE_GET_FIELD(t_LineSensor, name),
          DECLARE_GET_FIELD(t_LineSensor, nbPixels),
          DECLARE_GET_FIELD(t_LineSensor, parametersDrivers),
          DECLARE_GET_FIELD(t_LineSensor, position),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LineSensor__methods_[] = {
          DECLARE_METHOD(t_LineSensor, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineSensor, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineSensor, dumpRate, METH_O),
          DECLARE_METHOD(t_LineSensor, getDate, METH_O),
          DECLARE_METHOD(t_LineSensor, getLOS, METH_VARARGS),
          DECLARE_METHOD(t_LineSensor, getLOSDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_LineSensor, getLine, METH_O),
          DECLARE_METHOD(t_LineSensor, getName, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getNbPixels, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getPosition, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getRate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LineSensor)[] = {
          { Py_tp_methods, t_LineSensor__methods_ },
          { Py_tp_init, (void *) t_LineSensor_init_ },
          { Py_tp_getset, t_LineSensor__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LineSensor)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LineSensor, t_LineSensor, LineSensor);

        void t_LineSensor::install(PyObject *module)
        {
          installType(&PY_TYPE(LineSensor), &PY_TYPE_DEF(LineSensor), module, "LineSensor", 0);
        }

        void t_LineSensor::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "class_", make_descriptor(LineSensor::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "wrapfn_", make_descriptor(t_LineSensor::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LineSensor_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LineSensor::initializeClass, 1)))
            return NULL;
          return t_LineSensor::wrap_Object(LineSensor(((t_LineSensor *) arg)->object.this$));
        }
        static PyObject *t_LineSensor_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LineSensor::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LineSensor_init_(t_LineSensor *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineDatation a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::los::TimeDependentLOS a3((jobject) NULL);
          LineSensor object((jobject) NULL);

          if (!parseArgs(args, "skkk", ::org::orekit::rugged::linesensor::LineDatation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::los::TimeDependentLOS::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = LineSensor(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LineSensor_dumpRate(t_LineSensor *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.dumpRate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "dumpRate", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_getDate(t_LineSensor *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getDate(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDate", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_getLOS(t_LineSensor *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLOS", args);
          return NULL;
        }

        static PyObject *t_LineSensor_getLOSDerivatives(t_LineSensor *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "kDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jint a1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "kIK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLOSDerivatives", args);
          return NULL;
        }

        static PyObject *t_LineSensor_getLine(t_LineSensor *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getLine(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLine", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_getName(t_LineSensor *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_LineSensor_getNbPixels(t_LineSensor *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPixels());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_LineSensor_getParametersDrivers(t_LineSensor *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_LineSensor_getPosition(t_LineSensor *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_LineSensor_getRate(t_LineSensor *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRate", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_get__name(t_LineSensor *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_LineSensor_get__nbPixels(t_LineSensor *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPixels());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_LineSensor_get__parametersDrivers(t_LineSensor *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_LineSensor_get__position(t_LineSensor *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudesSequence.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudesSequence::class$ = NULL;
      jmethodID *AttitudesSequence::mids$ = NULL;
      bool AttitudesSequence::live$ = false;

      jclass AttitudesSequence::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudesSequence");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addSwitchingCondition_b09582ddb3381fe1] = env->getMethodID(cls, "addSwitchingCondition", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/events/EventDetector;ZZDLorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/attitudes/AttitudesSequence$SwitchHandler;)V");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_29422c22de775b74] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_53a81d4d17b13463] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_registerSwitchEvents_a4d05ab8d79173b5] = env->getMethodID(cls, "registerSwitchEvents", "(Lorg/orekit/propagation/Propagator;)V");
          mids$[mid_registerSwitchEvents_ec733b762a879d62] = env->getMethodID(cls, "registerSwitchEvents", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/FieldPropagator;)V");
          mids$[mid_resetActiveProvider_3cff7c75ea06698c] = env->getMethodID(cls, "resetActiveProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AttitudesSequence::AttitudesSequence() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void AttitudesSequence::addSwitchingCondition(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::propagation::events::EventDetector & a2, jboolean a3, jboolean a4, jdouble a5, const ::org::orekit::utils::AngularDerivativesFilter & a6, const ::org::orekit::attitudes::AttitudesSequence$SwitchHandler & a7) const
      {
        env->callVoidMethod(this$, mids$[mid_addSwitchingCondition_b09582ddb3381fe1], a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$, a7.this$);
      }

      ::org::orekit::attitudes::FieldAttitude AttitudesSequence::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudesSequence::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudesSequence::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_29422c22de775b74], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AttitudesSequence::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_53a81d4d17b13463], a0.this$, a1.this$, a2.this$));
      }

      void AttitudesSequence::registerSwitchEvents(const ::org::orekit::propagation::Propagator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_registerSwitchEvents_a4d05ab8d79173b5], a0.this$);
      }

      void AttitudesSequence::registerSwitchEvents(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::FieldPropagator & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_registerSwitchEvents_ec733b762a879d62], a0.this$, a1.this$);
      }

      void AttitudesSequence::resetActiveProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetActiveProvider_3cff7c75ea06698c], a0.this$);
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
      static PyObject *t_AttitudesSequence_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudesSequence_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AttitudesSequence_init_(t_AttitudesSequence *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AttitudesSequence_addSwitchingCondition(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_getAttitude(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_getAttitudeRotation(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_registerSwitchEvents(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_resetActiveProvider(t_AttitudesSequence *self, PyObject *arg);

      static PyMethodDef t_AttitudesSequence__methods_[] = {
        DECLARE_METHOD(t_AttitudesSequence, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence, addSwitchingCondition, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, registerSwitchEvents, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, resetActiveProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudesSequence)[] = {
        { Py_tp_methods, t_AttitudesSequence__methods_ },
        { Py_tp_init, (void *) t_AttitudesSequence_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudesSequence)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudesSequence, t_AttitudesSequence, AttitudesSequence);

      void t_AttitudesSequence::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudesSequence), &PY_TYPE_DEF(AttitudesSequence), module, "AttitudesSequence", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "SwitchHandler", make_descriptor(&PY_TYPE_DEF(AttitudesSequence$SwitchHandler)));
      }

      void t_AttitudesSequence::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "class_", make_descriptor(AttitudesSequence::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "wrapfn_", make_descriptor(t_AttitudesSequence::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudesSequence_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudesSequence::initializeClass, 1)))
          return NULL;
        return t_AttitudesSequence::wrap_Object(AttitudesSequence(((t_AttitudesSequence *) arg)->object.this$));
      }
      static PyObject *t_AttitudesSequence_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudesSequence::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AttitudesSequence_init_(t_AttitudesSequence *self, PyObject *args, PyObject *kwds)
      {
        AttitudesSequence object((jobject) NULL);

        INT_CALL(object = AttitudesSequence());
        self->object = object;

        return 0;
      }

      static PyObject *t_AttitudesSequence_addSwitchingCondition(t_AttitudesSequence *self, PyObject *args)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
        ::org::orekit::propagation::events::EventDetector a2((jobject) NULL);
        jboolean a3;
        jboolean a4;
        jdouble a5;
        ::org::orekit::utils::AngularDerivativesFilter a6((jobject) NULL);
        PyTypeObject **p6;
        ::org::orekit::attitudes::AttitudesSequence$SwitchHandler a7((jobject) NULL);

        if (!parseArgs(args, "kkkZZDKk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::attitudes::AttitudesSequence$SwitchHandler::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a7))
        {
          OBJ_CALL(self->object.addSwitchingCondition(a0, a1, a2, a3, a4, a5, a6, a7));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSwitchingCondition", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_getAttitude(t_AttitudesSequence *self, PyObject *args)
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

      static PyObject *t_AttitudesSequence_getAttitudeRotation(t_AttitudesSequence *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_registerSwitchEvents(t_AttitudesSequence *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::Propagator a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.registerSwitchEvents(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldPropagator a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::FieldPropagator::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldPropagator::parameters_))
            {
              OBJ_CALL(self->object.registerSwitchEvents(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "registerSwitchEvents", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_resetActiveProvider(t_AttitudesSequence *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetActiveProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetActiveProvider", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/EulerKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/EulerKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *EulerKey::class$ = NULL;
              jmethodID *EulerKey::mids$ = NULL;
              bool EulerKey::live$ = false;
              EulerKey *EulerKey::ANGLE_1 = NULL;
              EulerKey *EulerKey::ANGLE_1_DOT = NULL;
              EulerKey *EulerKey::ANGLE_2 = NULL;
              EulerKey *EulerKey::ANGLE_2_DOT = NULL;
              EulerKey *EulerKey::ANGLE_3 = NULL;
              EulerKey *EulerKey::ANGLE_3_DOT = NULL;
              EulerKey *EulerKey::COMMENT = NULL;
              EulerKey *EulerKey::EULER_DIR = NULL;
              EulerKey *EulerKey::EULER_FRAME_A = NULL;
              EulerKey *EulerKey::EULER_FRAME_B = NULL;
              EulerKey *EulerKey::EULER_ROT_SEQ = NULL;
              EulerKey *EulerKey::RATE_FRAME = NULL;
              EulerKey *EulerKey::REF_FRAME_A = NULL;
              EulerKey *EulerKey::REF_FRAME_B = NULL;
              EulerKey *EulerKey::X_ANGLE = NULL;
              EulerKey *EulerKey::X_RATE = NULL;
              EulerKey *EulerKey::Y_ANGLE = NULL;
              EulerKey *EulerKey::Y_RATE = NULL;
              EulerKey *EulerKey::Z_ANGLE = NULL;
              EulerKey *EulerKey::Z_RATE = NULL;
              EulerKey *EulerKey::rotationAngles = NULL;
              EulerKey *EulerKey::rotationRates = NULL;

              jclass EulerKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/EulerKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_9453d27e5cecf83d] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;)Z");
                  mids$[mid_valueOf_a6d5a41a7735a934] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;");
                  mids$[mid_values_c65f11637145adfb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGLE_1 = new EulerKey(env->getStaticObjectField(cls, "ANGLE_1", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_1_DOT = new EulerKey(env->getStaticObjectField(cls, "ANGLE_1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_2 = new EulerKey(env->getStaticObjectField(cls, "ANGLE_2", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_2_DOT = new EulerKey(env->getStaticObjectField(cls, "ANGLE_2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_3 = new EulerKey(env->getStaticObjectField(cls, "ANGLE_3", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_3_DOT = new EulerKey(env->getStaticObjectField(cls, "ANGLE_3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  COMMENT = new EulerKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_DIR = new EulerKey(env->getStaticObjectField(cls, "EULER_DIR", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_FRAME_A = new EulerKey(env->getStaticObjectField(cls, "EULER_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_FRAME_B = new EulerKey(env->getStaticObjectField(cls, "EULER_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_ROT_SEQ = new EulerKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  RATE_FRAME = new EulerKey(env->getStaticObjectField(cls, "RATE_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  REF_FRAME_A = new EulerKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  REF_FRAME_B = new EulerKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  X_ANGLE = new EulerKey(env->getStaticObjectField(cls, "X_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  X_RATE = new EulerKey(env->getStaticObjectField(cls, "X_RATE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Y_ANGLE = new EulerKey(env->getStaticObjectField(cls, "Y_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Y_RATE = new EulerKey(env->getStaticObjectField(cls, "Y_RATE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Z_ANGLE = new EulerKey(env->getStaticObjectField(cls, "Z_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Z_RATE = new EulerKey(env->getStaticObjectField(cls, "Z_RATE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  rotationAngles = new EulerKey(env->getStaticObjectField(cls, "rotationAngles", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  rotationRates = new EulerKey(env->getStaticObjectField(cls, "rotationRates", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean EulerKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::Euler & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_9453d27e5cecf83d], a0.this$, a1.this$, a2.this$);
              }

              EulerKey EulerKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return EulerKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a6d5a41a7735a934], a0.this$));
              }

              JArray< EulerKey > EulerKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< EulerKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c65f11637145adfb]));
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
              static PyObject *t_EulerKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EulerKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EulerKey_of_(t_EulerKey *self, PyObject *args);
              static PyObject *t_EulerKey_process(t_EulerKey *self, PyObject *args);
              static PyObject *t_EulerKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_EulerKey_values(PyTypeObject *type);
              static PyObject *t_EulerKey_get__parameters_(t_EulerKey *self, void *data);
              static PyGetSetDef t_EulerKey__fields_[] = {
                DECLARE_GET_FIELD(t_EulerKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_EulerKey__methods_[] = {
                DECLARE_METHOD(t_EulerKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EulerKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EulerKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_EulerKey, process, METH_VARARGS),
                DECLARE_METHOD(t_EulerKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_EulerKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(EulerKey)[] = {
                { Py_tp_methods, t_EulerKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_EulerKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(EulerKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(EulerKey, t_EulerKey, EulerKey);
              PyObject *t_EulerKey::wrap_Object(const EulerKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_EulerKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_EulerKey *self = (t_EulerKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_EulerKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_EulerKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_EulerKey *self = (t_EulerKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_EulerKey::install(PyObject *module)
              {
                installType(&PY_TYPE(EulerKey), &PY_TYPE_DEF(EulerKey), module, "EulerKey", 0);
              }

              void t_EulerKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "class_", make_descriptor(EulerKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "wrapfn_", make_descriptor(t_EulerKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(EulerKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_1", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_1_DOT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_2", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_2_DOT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_3", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_3_DOT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "COMMENT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_DIR", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_FRAME_A", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_FRAME_B", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_ROT_SEQ", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "RATE_FRAME", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::RATE_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "REF_FRAME_A", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "REF_FRAME_B", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "X_ANGLE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::X_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "X_RATE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::X_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Y_ANGLE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Y_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Y_RATE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Y_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Z_ANGLE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Z_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Z_RATE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Z_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "rotationAngles", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::rotationAngles)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "rotationRates", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::rotationRates)));
              }

              static PyObject *t_EulerKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, EulerKey::initializeClass, 1)))
                  return NULL;
                return t_EulerKey::wrap_Object(EulerKey(((t_EulerKey *) arg)->object.this$));
              }
              static PyObject *t_EulerKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, EulerKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_EulerKey_of_(t_EulerKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_EulerKey_process(t_EulerKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Euler::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_EulerKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                EulerKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::EulerKey::valueOf(a0));
                  return t_EulerKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_EulerKey_values(PyTypeObject *type)
              {
                JArray< EulerKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::EulerKey::values());
                return JArray<jobject>(result.this$).wrap(t_EulerKey::wrap_jobject);
              }
              static PyObject *t_EulerKey_get__parameters_(t_EulerKey *self, void *data)
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
#include "org/orekit/gnss/metric/ntrip/Record.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Record::class$ = NULL;
          jmethodID *Record::mids$ = NULL;
          bool Record::live$ = false;

          jclass Record::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Record");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMisc_11b109bd155ca898] = env->getMethodID(cls, "getMisc", "()Ljava/lang/String;");
              mids$[mid_getRecordType_7952bb756bff2dbf] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getFieldsNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getFieldsNumber", "()I");
              mids$[mid_getField_8cc8a10236476f23] = env->getMethodID(cls, "getField", "(I)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String Record::getMisc() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMisc_11b109bd155ca898]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType Record::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_7952bb756bff2dbf]));
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
          static PyObject *t_Record_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Record_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Record_getMisc(t_Record *self);
          static PyObject *t_Record_getRecordType(t_Record *self);
          static PyObject *t_Record_get__misc(t_Record *self, void *data);
          static PyObject *t_Record_get__recordType(t_Record *self, void *data);
          static PyGetSetDef t_Record__fields_[] = {
            DECLARE_GET_FIELD(t_Record, misc),
            DECLARE_GET_FIELD(t_Record, recordType),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Record__methods_[] = {
            DECLARE_METHOD(t_Record, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Record, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Record, getMisc, METH_NOARGS),
            DECLARE_METHOD(t_Record, getRecordType, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Record)[] = {
            { Py_tp_methods, t_Record__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Record__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Record)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Record, t_Record, Record);

          void t_Record::install(PyObject *module)
          {
            installType(&PY_TYPE(Record), &PY_TYPE_DEF(Record), module, "Record", 0);
          }

          void t_Record::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "class_", make_descriptor(Record::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "wrapfn_", make_descriptor(t_Record::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Record_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Record::initializeClass, 1)))
              return NULL;
            return t_Record::wrap_Object(Record(((t_Record *) arg)->object.this$));
          }
          static PyObject *t_Record_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Record::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Record_getMisc(t_Record *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMisc());
            return j2p(result);
          }

          static PyObject *t_Record_getRecordType(t_Record *self)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);
            OBJ_CALL(result = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
          }

          static PyObject *t_Record_get__misc(t_Record *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMisc());
            return j2p(value);
          }

          static PyObject *t_Record_get__recordType(t_Record *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Double.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Double::class$ = NULL;
    jmethodID *Double::mids$ = NULL;
    bool Double::live$ = false;
    jint Double::BYTES = (jint) 0;
    jint Double::MAX_EXPONENT = (jint) 0;
    jdouble Double::MAX_VALUE = (jdouble) 0;
    jint Double::MIN_EXPONENT = (jint) 0;
    jdouble Double::MIN_NORMAL = (jdouble) 0;
    jdouble Double::MIN_VALUE = (jdouble) 0;
    jdouble Double::NEGATIVE_INFINITY = (jdouble) 0;
    jdouble Double::NaN = (jdouble) 0;
    jdouble Double::POSITIVE_INFINITY = (jdouble) 0;
    jint Double::SIZE = (jint) 0;
    ::java::lang::Class *Double::TYPE = NULL;

    jclass Double::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Double");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
        mids$[mid_byteValue_42a1555092006f7f] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_1257850af36d5462] = env->getStaticMethodID(cls, "compare", "(DD)I");
        mids$[mid_compareTo_fb8f1feba905d202] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Double;)I");
        mids$[mid_doubleToLongBits_cebf7dc9be03a93c] = env->getStaticMethodID(cls, "doubleToLongBits", "(D)J");
        mids$[mid_doubleToRawLongBits_cebf7dc9be03a93c] = env->getStaticMethodID(cls, "doubleToRawLongBits", "(D)J");
        mids$[mid_doubleValue_dff5885c2c873297] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_5adccb493ada08e8] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_4508852644846c83] = env->getStaticMethodID(cls, "hashCode", "(D)I");
        mids$[mid_intValue_570ce0828f81a2c1] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_isFinite_2e401133981893e4] = env->getStaticMethodID(cls, "isFinite", "(D)Z");
        mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isInfinite_2e401133981893e4] = env->getStaticMethodID(cls, "isInfinite", "(D)Z");
        mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_isNaN_2e401133981893e4] = env->getStaticMethodID(cls, "isNaN", "(D)Z");
        mids$[mid_longBitsToDouble_f0482edaa10e7949] = env->getStaticMethodID(cls, "longBitsToDouble", "(J)D");
        mids$[mid_longValue_492808a339bfa35f] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_max_86ffecc08a63eff0] = env->getStaticMethodID(cls, "max", "(DD)D");
        mids$[mid_min_86ffecc08a63eff0] = env->getStaticMethodID(cls, "min", "(DD)D");
        mids$[mid_parseDouble_b36dde1444e08956] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;)D");
        mids$[mid_shortValue_b5dd6688e7dce57d] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_sum_86ffecc08a63eff0] = env->getStaticMethodID(cls, "sum", "(DD)D");
        mids$[mid_toHexString_e8f51f84167aafbd] = env->getStaticMethodID(cls, "toHexString", "(D)Ljava/lang/String;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_e8f51f84167aafbd] = env->getStaticMethodID(cls, "toString", "(D)Ljava/lang/String;");
        mids$[mid_valueOf_e26d3c10645f38b2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Double;");
        mids$[mid_valueOf_b3bbc231316f8ee9] = env->getStaticMethodID(cls, "valueOf", "(D)Ljava/lang/Double;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_EXPONENT = env->getStaticIntField(cls, "MAX_EXPONENT");
        MAX_VALUE = env->getStaticDoubleField(cls, "MAX_VALUE");
        MIN_EXPONENT = env->getStaticIntField(cls, "MIN_EXPONENT");
        MIN_NORMAL = env->getStaticDoubleField(cls, "MIN_NORMAL");
        MIN_VALUE = env->getStaticDoubleField(cls, "MIN_VALUE");
        NEGATIVE_INFINITY = env->getStaticDoubleField(cls, "NEGATIVE_INFINITY");
        NaN = env->getStaticDoubleField(cls, "NaN");
        POSITIVE_INFINITY = env->getStaticDoubleField(cls, "POSITIVE_INFINITY");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Double::Double(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    Double::Double(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

    jbyte Double::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_42a1555092006f7f]);
    }

    jint Double::compare(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_1257850af36d5462], a0, a1);
    }

    jint Double::compareTo(const Double & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_fb8f1feba905d202], a0.this$);
    }

    jlong Double::doubleToLongBits(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_doubleToLongBits_cebf7dc9be03a93c], a0);
    }

    jlong Double::doubleToRawLongBits(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_doubleToRawLongBits_cebf7dc9be03a93c], a0);
    }

    jdouble Double::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_dff5885c2c873297]);
    }

    jboolean Double::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jfloat Double::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_5adccb493ada08e8]);
    }

    jint Double::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jint Double::hashCode(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_4508852644846c83], a0);
    }

    jint Double::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_570ce0828f81a2c1]);
    }

    jboolean Double::isFinite(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isFinite_2e401133981893e4], a0);
    }

    jboolean Double::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
    }

    jboolean Double::isInfinite(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isInfinite_2e401133981893e4], a0);
    }

    jboolean Double::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
    }

    jboolean Double::isNaN(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isNaN_2e401133981893e4], a0);
    }

    jdouble Double::longBitsToDouble(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_longBitsToDouble_f0482edaa10e7949], a0);
    }

    jlong Double::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_492808a339bfa35f]);
    }

    jdouble Double::max$(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_max_86ffecc08a63eff0], a0, a1);
    }

    jdouble Double::min$(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_min_86ffecc08a63eff0], a0, a1);
    }

    jdouble Double::parseDouble(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_parseDouble_b36dde1444e08956], a0.this$);
    }

    jshort Double::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_b5dd6688e7dce57d]);
    }

    jdouble Double::sum(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_sum_86ffecc08a63eff0], a0, a1);
    }

    ::java::lang::String Double::toHexString(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_e8f51f84167aafbd], a0));
    }

    ::java::lang::String Double::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    ::java::lang::String Double::toString(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_e8f51f84167aafbd], a0));
    }

    Double Double::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Double(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e26d3c10645f38b2], a0.this$));
    }

    Double Double::valueOf(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Double(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b3bbc231316f8ee9], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Double_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Double_init_(t_Double *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Double_byteValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_compareTo(t_Double *self, PyObject *arg);
    static PyObject *t_Double_doubleToLongBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_doubleToRawLongBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_doubleValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_equals(t_Double *self, PyObject *args);
    static PyObject *t_Double_floatValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_hashCode(t_Double *self, PyObject *args);
    static PyObject *t_Double_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_intValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_isFinite(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_isInfinite(t_Double *self);
    static PyObject *t_Double_isInfinite_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_isNaN(t_Double *self);
    static PyObject *t_Double_isNaN_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_longBitsToDouble(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_longValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_parseDouble(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_shortValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_toString(t_Double *self, PyObject *args);
    static PyObject *t_Double_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_get__infinite(t_Double *self, void *data);
    static PyObject *t_Double_get__naN(t_Double *self, void *data);
    static PyGetSetDef t_Double__fields_[] = {
      DECLARE_GET_FIELD(t_Double, infinite),
      DECLARE_GET_FIELD(t_Double, naN),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Double__methods_[] = {
      DECLARE_METHOD(t_Double, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, compareTo, METH_O),
      DECLARE_METHOD(t_Double, doubleToLongBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, doubleToRawLongBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, equals, METH_VARARGS),
      DECLARE_METHOD(t_Double, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Double, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, isFinite, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, isInfinite, METH_NOARGS),
      DECLARE_METHOD(t_Double, isInfinite_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, isNaN, METH_NOARGS),
      DECLARE_METHOD(t_Double, isNaN_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, longBitsToDouble, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, parseDouble, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, toString, METH_VARARGS),
      DECLARE_METHOD(t_Double, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Double)[] = {
      { Py_tp_methods, t_Double__methods_ },
      { Py_tp_init, (void *) t_Double_init_ },
      { Py_tp_getset, t_Double__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Double)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Double, t_Double, Double);

    void t_Double::install(PyObject *module)
    {
      installType(&PY_TYPE(Double), &PY_TYPE_DEF(Double), module, "Double", 0);
    }

    void t_Double::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "class_", make_descriptor(Double::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "wrapfn_", make_descriptor(unboxDouble));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "boxfn_", make_descriptor(boxDouble));
      env->getClass(Double::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "BYTES", make_descriptor(Double::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MAX_EXPONENT", make_descriptor(Double::MAX_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MAX_VALUE", make_descriptor(Double::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_EXPONENT", make_descriptor(Double::MIN_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_NORMAL", make_descriptor(Double::MIN_NORMAL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_VALUE", make_descriptor(Double::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "NEGATIVE_INFINITY", make_descriptor(Double::NEGATIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "NaN", make_descriptor(Double::NaN));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "POSITIVE_INFINITY", make_descriptor(Double::POSITIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "SIZE", make_descriptor(Double::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Double::TYPE)));
    }

    static PyObject *t_Double_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Double::initializeClass, 1)))
        return NULL;
      return t_Double::wrap_Object(Double(((t_Double *) arg)->object.this$));
    }
    static PyObject *t_Double_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Double::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Double_init_(t_Double *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Double object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Double(a0));
            self->object = object;
            break;
          }
        }
        {
          jdouble a0;
          Double object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Double(a0));
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

    static PyObject *t_Double_byteValue(t_Double *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Double_compare(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jint result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Double_compareTo(t_Double *self, PyObject *arg)
    {
      Double a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Double), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleToLongBits(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jlong result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::doubleToLongBits(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "doubleToLongBits", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleToRawLongBits(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jlong result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::doubleToRawLongBits(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "doubleToRawLongBits", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleValue(t_Double *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Double_equals(t_Double *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Double_floatValue(t_Double *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Double_hashCode(t_Double *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Double_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jint result;

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Double_intValue(t_Double *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Double_isFinite(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isFinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isFinite", arg);
      return NULL;
    }

    static PyObject *t_Double_isInfinite(t_Double *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInfinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Double_isInfinite_(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isInfinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isInfinite_", arg);
      return NULL;
    }

    static PyObject *t_Double_isNaN(t_Double *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNaN());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Double_isNaN_(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isNaN(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isNaN_", arg);
      return NULL;
    }

    static PyObject *t_Double_longBitsToDouble(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jdouble result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::longBitsToDouble(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "longBitsToDouble", arg);
      return NULL;
    }

    static PyObject *t_Double_longValue(t_Double *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Double_max(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::max$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Double_min(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::min$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Double_parseDouble(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jdouble result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::parseDouble(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "parseDouble", arg);
      return NULL;
    }

    static PyObject *t_Double_shortValue(t_Double *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Double_sum(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::sum(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Double_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Double_toString(t_Double *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Double_toString_(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Double_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Double result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Double::valueOf(a0));
            return t_Double::wrap_Object(result);
          }
        }
        {
          jdouble a0;
          Double result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = ::java::lang::Double::valueOf(a0));
            return t_Double::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }

    static PyObject *t_Double_get__infinite(t_Double *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInfinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Double_get__naN(t_Double *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNaN());
      Py_RETURN_BOOL(value);
    }
  }
}
