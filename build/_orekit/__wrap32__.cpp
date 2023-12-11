#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
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
            mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_0d9551367f7ecdef] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_fa108fc36df3791a] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_587eea156586204f] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::utils::CartesianDerivativesFilter EphemerisFile$EphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837]));
        }

        ::java::util::List EphemerisFile$EphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_0d9551367f7ecdef]));
        }

        ::org::orekit::frames::Frame EphemerisFile$EphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
        }

        ::org::orekit::frames::Frame EphemerisFile$EphemerisSegment::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_6c9bc0a928c56d4e]));
        }

        jint EphemerisFile$EphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_412668abc8d889e9]);
        }

        jdouble EphemerisFile$EphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$EphemerisSegment::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_fa108fc36df3791a]));
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$EphemerisSegment::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_587eea156586204f], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$EphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$EphemerisSegment::getStop() const
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
#include "org/orekit/files/sinex/Station.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sinex/Station$ReferenceSystem.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *Station::class$ = NULL;
        jmethodID *Station::mids$ = NULL;
        bool Station::live$ = false;

        jclass Station::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/Station");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addAntennaTypeValidAfter_bcaa2ba21337a9a6] = env->getMethodID(cls, "addAntennaTypeValidAfter", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addAntennaTypeValidBefore_bcaa2ba21337a9a6] = env->getMethodID(cls, "addAntennaTypeValidBefore", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addStationEccentricitiesValidAfter_a17b72176d656894] = env->getMethodID(cls, "addStationEccentricitiesValidAfter", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addStationEccentricitiesValidBefore_a17b72176d656894] = env->getMethodID(cls, "addStationEccentricitiesValidBefore", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getAntennaType_4e0f3c605fbc7c96] = env->getMethodID(cls, "getAntennaType", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
            mids$[mid_getAntennaTypeTimeSpanMap_d26bd874ee319049] = env->getMethodID(cls, "getAntennaTypeTimeSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getDomes_3cffd47377eca18a] = env->getMethodID(cls, "getDomes", "()Ljava/lang/String;");
            mids$[mid_getEccRefSystem_322bd3cfdf1910e8] = env->getMethodID(cls, "getEccRefSystem", "()Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_getEccentricities_3df461fe15362b2b] = env->getMethodID(cls, "getEccentricities", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getEccentricitiesTimeSpanMap_d26bd874ee319049] = env->getMethodID(cls, "getEccentricitiesTimeSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPosition_f88961cca75a2c0a] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getSiteCode_3cffd47377eca18a] = env->getMethodID(cls, "getSiteCode", "()Ljava/lang/String;");
            mids$[mid_getValidFrom_7a97f7e149e79afb] = env->getMethodID(cls, "getValidFrom", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getValidUntil_7a97f7e149e79afb] = env->getMethodID(cls, "getValidUntil", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getVelocity_f88961cca75a2c0a] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_setDomes_f5ffdf29129ef90a] = env->getMethodID(cls, "setDomes", "(Ljava/lang/String;)V");
            mids$[mid_setEccRefSystem_634c2865dd55aa0f] = env->getMethodID(cls, "setEccRefSystem", "(Lorg/orekit/files/sinex/Station$ReferenceSystem;)V");
            mids$[mid_setEpoch_20affcbd28542333] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setPosition_2810d2bec90e7b1c] = env->getMethodID(cls, "setPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_setSiteCode_f5ffdf29129ef90a] = env->getMethodID(cls, "setSiteCode", "(Ljava/lang/String;)V");
            mids$[mid_setValidFrom_20affcbd28542333] = env->getMethodID(cls, "setValidFrom", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setValidUntil_20affcbd28542333] = env->getMethodID(cls, "setValidUntil", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setVelocity_2810d2bec90e7b1c] = env->getMethodID(cls, "setVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Station::Station() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void Station::addAntennaTypeValidAfter(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAntennaTypeValidAfter_bcaa2ba21337a9a6], a0.this$, a1.this$);
        }

        void Station::addAntennaTypeValidBefore(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAntennaTypeValidBefore_bcaa2ba21337a9a6], a0.this$, a1.this$);
        }

        void Station::addStationEccentricitiesValidAfter(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addStationEccentricitiesValidAfter_a17b72176d656894], a0.this$, a1.this$);
        }

        void Station::addStationEccentricitiesValidBefore(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addStationEccentricitiesValidBefore_a17b72176d656894], a0.this$, a1.this$);
        }

        ::java::lang::String Station::getAntennaType(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaType_4e0f3c605fbc7c96], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap Station::getAntennaTypeTimeSpanMap() const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getAntennaTypeTimeSpanMap_d26bd874ee319049]));
        }

        ::java::lang::String Station::getDomes() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDomes_3cffd47377eca18a]));
        }

        ::org::orekit::files::sinex::Station$ReferenceSystem Station::getEccRefSystem() const
        {
          return ::org::orekit::files::sinex::Station$ReferenceSystem(env->callObjectMethod(this$, mids$[mid_getEccRefSystem_322bd3cfdf1910e8]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getEccentricities(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_3df461fe15362b2b], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap Station::getEccentricitiesTimeSpanMap() const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getEccentricitiesTimeSpanMap_d26bd874ee319049]));
        }

        ::org::orekit::time::AbsoluteDate Station::getEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_7a97f7e149e79afb]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_f88961cca75a2c0a]));
        }

        ::java::lang::String Station::getSiteCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteCode_3cffd47377eca18a]));
        }

        ::org::orekit::time::AbsoluteDate Station::getValidFrom() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidFrom_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate Station::getValidUntil() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidUntil_7a97f7e149e79afb]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getVelocity() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_f88961cca75a2c0a]));
        }

        void Station::setDomes(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDomes_f5ffdf29129ef90a], a0.this$);
        }

        void Station::setEccRefSystem(const ::org::orekit::files::sinex::Station$ReferenceSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEccRefSystem_634c2865dd55aa0f], a0.this$);
        }

        void Station::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpoch_20affcbd28542333], a0.this$);
        }

        void Station::setPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPosition_2810d2bec90e7b1c], a0.this$);
        }

        void Station::setSiteCode(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSiteCode_f5ffdf29129ef90a], a0.this$);
        }

        void Station::setValidFrom(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setValidFrom_20affcbd28542333], a0.this$);
        }

        void Station::setValidUntil(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setValidUntil_20affcbd28542333], a0.this$);
        }

        void Station::setVelocity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVelocity_2810d2bec90e7b1c], a0.this$);
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
      namespace sinex {
        static PyObject *t_Station_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Station_init_(t_Station *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Station_addAntennaTypeValidAfter(t_Station *self, PyObject *args);
        static PyObject *t_Station_addAntennaTypeValidBefore(t_Station *self, PyObject *args);
        static PyObject *t_Station_addStationEccentricitiesValidAfter(t_Station *self, PyObject *args);
        static PyObject *t_Station_addStationEccentricitiesValidBefore(t_Station *self, PyObject *args);
        static PyObject *t_Station_getAntennaType(t_Station *self, PyObject *arg);
        static PyObject *t_Station_getAntennaTypeTimeSpanMap(t_Station *self);
        static PyObject *t_Station_getDomes(t_Station *self);
        static PyObject *t_Station_getEccRefSystem(t_Station *self);
        static PyObject *t_Station_getEccentricities(t_Station *self, PyObject *arg);
        static PyObject *t_Station_getEccentricitiesTimeSpanMap(t_Station *self);
        static PyObject *t_Station_getEpoch(t_Station *self);
        static PyObject *t_Station_getPosition(t_Station *self);
        static PyObject *t_Station_getSiteCode(t_Station *self);
        static PyObject *t_Station_getValidFrom(t_Station *self);
        static PyObject *t_Station_getValidUntil(t_Station *self);
        static PyObject *t_Station_getVelocity(t_Station *self);
        static PyObject *t_Station_setDomes(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setEccRefSystem(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setEpoch(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setPosition(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setSiteCode(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setValidFrom(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setValidUntil(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setVelocity(t_Station *self, PyObject *arg);
        static PyObject *t_Station_get__antennaTypeTimeSpanMap(t_Station *self, void *data);
        static PyObject *t_Station_get__domes(t_Station *self, void *data);
        static int t_Station_set__domes(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__eccRefSystem(t_Station *self, void *data);
        static int t_Station_set__eccRefSystem(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__eccentricitiesTimeSpanMap(t_Station *self, void *data);
        static PyObject *t_Station_get__epoch(t_Station *self, void *data);
        static int t_Station_set__epoch(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__position(t_Station *self, void *data);
        static int t_Station_set__position(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__siteCode(t_Station *self, void *data);
        static int t_Station_set__siteCode(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__validFrom(t_Station *self, void *data);
        static int t_Station_set__validFrom(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__validUntil(t_Station *self, void *data);
        static int t_Station_set__validUntil(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__velocity(t_Station *self, void *data);
        static int t_Station_set__velocity(t_Station *self, PyObject *arg, void *data);
        static PyGetSetDef t_Station__fields_[] = {
          DECLARE_GET_FIELD(t_Station, antennaTypeTimeSpanMap),
          DECLARE_GETSET_FIELD(t_Station, domes),
          DECLARE_GETSET_FIELD(t_Station, eccRefSystem),
          DECLARE_GET_FIELD(t_Station, eccentricitiesTimeSpanMap),
          DECLARE_GETSET_FIELD(t_Station, epoch),
          DECLARE_GETSET_FIELD(t_Station, position),
          DECLARE_GETSET_FIELD(t_Station, siteCode),
          DECLARE_GETSET_FIELD(t_Station, validFrom),
          DECLARE_GETSET_FIELD(t_Station, validUntil),
          DECLARE_GETSET_FIELD(t_Station, velocity),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Station__methods_[] = {
          DECLARE_METHOD(t_Station, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station, addAntennaTypeValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_Station, addAntennaTypeValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_Station, addStationEccentricitiesValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_Station, addStationEccentricitiesValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_Station, getAntennaType, METH_O),
          DECLARE_METHOD(t_Station, getAntennaTypeTimeSpanMap, METH_NOARGS),
          DECLARE_METHOD(t_Station, getDomes, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEccRefSystem, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEccentricities, METH_O),
          DECLARE_METHOD(t_Station, getEccentricitiesTimeSpanMap, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_Station, getPosition, METH_NOARGS),
          DECLARE_METHOD(t_Station, getSiteCode, METH_NOARGS),
          DECLARE_METHOD(t_Station, getValidFrom, METH_NOARGS),
          DECLARE_METHOD(t_Station, getValidUntil, METH_NOARGS),
          DECLARE_METHOD(t_Station, getVelocity, METH_NOARGS),
          DECLARE_METHOD(t_Station, setDomes, METH_O),
          DECLARE_METHOD(t_Station, setEccRefSystem, METH_O),
          DECLARE_METHOD(t_Station, setEpoch, METH_O),
          DECLARE_METHOD(t_Station, setPosition, METH_O),
          DECLARE_METHOD(t_Station, setSiteCode, METH_O),
          DECLARE_METHOD(t_Station, setValidFrom, METH_O),
          DECLARE_METHOD(t_Station, setValidUntil, METH_O),
          DECLARE_METHOD(t_Station, setVelocity, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Station)[] = {
          { Py_tp_methods, t_Station__methods_ },
          { Py_tp_init, (void *) t_Station_init_ },
          { Py_tp_getset, t_Station__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Station)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Station, t_Station, Station);

        void t_Station::install(PyObject *module)
        {
          installType(&PY_TYPE(Station), &PY_TYPE_DEF(Station), module, "Station", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "ReferenceSystem", make_descriptor(&PY_TYPE_DEF(Station$ReferenceSystem)));
        }

        void t_Station::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "class_", make_descriptor(Station::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "wrapfn_", make_descriptor(t_Station::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Station_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Station::initializeClass, 1)))
            return NULL;
          return t_Station::wrap_Object(Station(((t_Station *) arg)->object.this$));
        }
        static PyObject *t_Station_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Station::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Station_init_(t_Station *self, PyObject *args, PyObject *kwds)
        {
          Station object((jobject) NULL);

          INT_CALL(object = Station());
          self->object = object;

          return 0;
        }

        static PyObject *t_Station_addAntennaTypeValidAfter(t_Station *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAntennaTypeValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAntennaTypeValidAfter", args);
          return NULL;
        }

        static PyObject *t_Station_addAntennaTypeValidBefore(t_Station *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAntennaTypeValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAntennaTypeValidBefore", args);
          return NULL;
        }

        static PyObject *t_Station_addStationEccentricitiesValidAfter(t_Station *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addStationEccentricitiesValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addStationEccentricitiesValidAfter", args);
          return NULL;
        }

        static PyObject *t_Station_addStationEccentricitiesValidBefore(t_Station *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addStationEccentricitiesValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addStationEccentricitiesValidBefore", args);
          return NULL;
        }

        static PyObject *t_Station_getAntennaType(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAntennaType(a0));
            return j2p(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getAntennaType", arg);
          return NULL;
        }

        static PyObject *t_Station_getAntennaTypeTimeSpanMap(t_Station *self)
        {
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getAntennaTypeTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_Station_getDomes(t_Station *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDomes());
          return j2p(result);
        }

        static PyObject *t_Station_getEccRefSystem(t_Station *self)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccRefSystem());
          return ::org::orekit::files::sinex::t_Station$ReferenceSystem::wrap_Object(result);
        }

        static PyObject *t_Station_getEccentricities(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getEccentricities(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEccentricities", arg);
          return NULL;
        }

        static PyObject *t_Station_getEccentricitiesTimeSpanMap(t_Station *self)
        {
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccentricitiesTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
        }

        static PyObject *t_Station_getEpoch(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getPosition(t_Station *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_Station_getSiteCode(t_Station *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSiteCode());
          return j2p(result);
        }

        static PyObject *t_Station_getValidFrom(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getValidUntil(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getVelocity(t_Station *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_Station_setDomes(t_Station *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDomes(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDomes", arg);
          return NULL;
        }

        static PyObject *t_Station_setEccRefSystem(t_Station *self, PyObject *arg)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::files::sinex::Station$ReferenceSystem::initializeClass, &a0, &p0, ::org::orekit::files::sinex::t_Station$ReferenceSystem::parameters_))
          {
            OBJ_CALL(self->object.setEccRefSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEccRefSystem", arg);
          return NULL;
        }

        static PyObject *t_Station_setEpoch(t_Station *self, PyObject *arg)
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

        static PyObject *t_Station_setPosition(t_Station *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setPosition(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPosition", arg);
          return NULL;
        }

        static PyObject *t_Station_setSiteCode(t_Station *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSiteCode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSiteCode", arg);
          return NULL;
        }

        static PyObject *t_Station_setValidFrom(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setValidFrom(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setValidFrom", arg);
          return NULL;
        }

        static PyObject *t_Station_setValidUntil(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setValidUntil(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setValidUntil", arg);
          return NULL;
        }

        static PyObject *t_Station_setVelocity(t_Station *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setVelocity(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVelocity", arg);
          return NULL;
        }

        static PyObject *t_Station_get__antennaTypeTimeSpanMap(t_Station *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getAntennaTypeTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
        }

        static PyObject *t_Station_get__domes(t_Station *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDomes());
          return j2p(value);
        }
        static int t_Station_set__domes(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDomes(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "domes", arg);
          return -1;
        }

        static PyObject *t_Station_get__eccRefSystem(t_Station *self, void *data)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccRefSystem());
          return ::org::orekit::files::sinex::t_Station$ReferenceSystem::wrap_Object(value);
        }
        static int t_Station_set__eccRefSystem(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sinex::Station$ReferenceSystem value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sinex::Station$ReferenceSystem::initializeClass, &value))
            {
              INT_CALL(self->object.setEccRefSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "eccRefSystem", arg);
          return -1;
        }

        static PyObject *t_Station_get__eccentricitiesTimeSpanMap(t_Station *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccentricitiesTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
        }

        static PyObject *t_Station_get__epoch(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__epoch(t_Station *self, PyObject *arg, void *data)
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

        static PyObject *t_Station_get__position(t_Station *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
        static int t_Station_set__position(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              INT_CALL(self->object.setPosition(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "position", arg);
          return -1;
        }

        static PyObject *t_Station_get__siteCode(t_Station *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSiteCode());
          return j2p(value);
        }
        static int t_Station_set__siteCode(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSiteCode(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "siteCode", arg);
          return -1;
        }

        static PyObject *t_Station_get__validFrom(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__validFrom(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setValidFrom(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "validFrom", arg);
          return -1;
        }

        static PyObject *t_Station_get__validUntil(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__validUntil(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setValidUntil(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "validUntil", arg);
          return -1;
        }

        static PyObject *t_Station_get__velocity(t_Station *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
        static int t_Station_set__velocity(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              INT_CALL(self->object.setVelocity(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "velocity", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *SinhCosh::class$ = NULL;
      jmethodID *SinhCosh::mids$ = NULL;
      bool SinhCosh::live$ = false;

      jclass SinhCosh::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/SinhCosh");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cosh_557b8123390d8d0c] = env->getMethodID(cls, "cosh", "()D");
          mids$[mid_difference_add2402b81ab1dda] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/SinhCosh;Lorg/hipparchus/util/SinhCosh;)Lorg/hipparchus/util/SinhCosh;");
          mids$[mid_sinh_557b8123390d8d0c] = env->getMethodID(cls, "sinh", "()D");
          mids$[mid_sum_add2402b81ab1dda] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/SinhCosh;Lorg/hipparchus/util/SinhCosh;)Lorg/hipparchus/util/SinhCosh;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble SinhCosh::cosh() const
      {
        return env->callDoubleMethod(this$, mids$[mid_cosh_557b8123390d8d0c]);
      }

      SinhCosh SinhCosh::difference(const SinhCosh & a0, const SinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_difference_add2402b81ab1dda], a0.this$, a1.this$));
      }

      jdouble SinhCosh::sinh() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sinh_557b8123390d8d0c]);
      }

      SinhCosh SinhCosh::sum(const SinhCosh & a0, const SinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sum_add2402b81ab1dda], a0.this$, a1.this$));
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
      static PyObject *t_SinhCosh_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinhCosh_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinhCosh_cosh(t_SinhCosh *self);
      static PyObject *t_SinhCosh_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_SinhCosh_sinh(t_SinhCosh *self);
      static PyObject *t_SinhCosh_sum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_SinhCosh__methods_[] = {
        DECLARE_METHOD(t_SinhCosh, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, cosh, METH_NOARGS),
        DECLARE_METHOD(t_SinhCosh, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, sinh, METH_NOARGS),
        DECLARE_METHOD(t_SinhCosh, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SinhCosh)[] = {
        { Py_tp_methods, t_SinhCosh__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SinhCosh)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SinhCosh, t_SinhCosh, SinhCosh);

      void t_SinhCosh::install(PyObject *module)
      {
        installType(&PY_TYPE(SinhCosh), &PY_TYPE_DEF(SinhCosh), module, "SinhCosh", 0);
      }

      void t_SinhCosh::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "class_", make_descriptor(SinhCosh::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "wrapfn_", make_descriptor(t_SinhCosh::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SinhCosh_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SinhCosh::initializeClass, 1)))
          return NULL;
        return t_SinhCosh::wrap_Object(SinhCosh(((t_SinhCosh *) arg)->object.this$));
      }
      static PyObject *t_SinhCosh_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SinhCosh::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SinhCosh_cosh(t_SinhCosh *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.cosh());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinhCosh_difference(PyTypeObject *type, PyObject *args)
      {
        SinhCosh a0((jobject) NULL);
        SinhCosh a1((jobject) NULL);
        SinhCosh result((jobject) NULL);

        if (!parseArgs(args, "kk", SinhCosh::initializeClass, SinhCosh::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinhCosh::difference(a0, a1));
          return t_SinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_SinhCosh_sinh(t_SinhCosh *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.sinh());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinhCosh_sum(PyTypeObject *type, PyObject *args)
      {
        SinhCosh a0((jobject) NULL);
        SinhCosh a1((jobject) NULL);
        SinhCosh result((jobject) NULL);

        if (!parseArgs(args, "kk", SinhCosh::initializeClass, SinhCosh::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinhCosh::sum(a0, a1));
          return t_SinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/AbstractEncodedMessage.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *AbstractEncodedMessage::class$ = NULL;
          jmethodID *AbstractEncodedMessage::mids$ = NULL;
          bool AbstractEncodedMessage::live$ = false;

          jclass AbstractEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/AbstractEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_extractBits_4f6383d3e31ab417] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_start_0640e6acf969ed28] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_412668abc8d889e9] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractEncodedMessage::AbstractEncodedMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          jlong AbstractEncodedMessage::extractBits(jint a0) const
          {
            return env->callLongMethod(this$, mids$[mid_extractBits_4f6383d3e31ab417], a0);
          }

          void AbstractEncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_0640e6acf969ed28]);
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
          static PyObject *t_AbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractEncodedMessage_init_(t_AbstractEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractEncodedMessage_extractBits(t_AbstractEncodedMessage *self, PyObject *arg);
          static PyObject *t_AbstractEncodedMessage_start(t_AbstractEncodedMessage *self);

          static PyMethodDef t_AbstractEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_AbstractEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractEncodedMessage, extractBits, METH_O),
            DECLARE_METHOD(t_AbstractEncodedMessage, start, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractEncodedMessage)[] = {
            { Py_tp_methods, t_AbstractEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_AbstractEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractEncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractEncodedMessage, t_AbstractEncodedMessage, AbstractEncodedMessage);

          void t_AbstractEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractEncodedMessage), &PY_TYPE_DEF(AbstractEncodedMessage), module, "AbstractEncodedMessage", 0);
          }

          void t_AbstractEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "class_", make_descriptor(AbstractEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "wrapfn_", make_descriptor(t_AbstractEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_AbstractEncodedMessage::wrap_Object(AbstractEncodedMessage(((t_AbstractEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_AbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractEncodedMessage_init_(t_AbstractEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            AbstractEncodedMessage object((jobject) NULL);

            INT_CALL(object = AbstractEncodedMessage());
            self->object = object;

            return 0;
          }

          static PyObject *t_AbstractEncodedMessage_extractBits(t_AbstractEncodedMessage *self, PyObject *arg)
          {
            jint a0;
            jlong result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.extractBits(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError((PyObject *) self, "extractBits", arg);
            return NULL;
          }

          static PyObject *t_AbstractEncodedMessage_start(t_AbstractEncodedMessage *self)
          {
            OBJ_CALL(self->object.start());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/BlockFieldMatrix.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/BlockFieldMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *BlockFieldMatrix::class$ = NULL;
      jmethodID *BlockFieldMatrix::mids$ = NULL;
      bool BlockFieldMatrix::live$ = false;
      jint BlockFieldMatrix::BLOCK_SIZE = (jint) 0;

      jclass BlockFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/BlockFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f8690281fd65dda7] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_a9ccb012d4cb48bd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_init$_635d5b233a9a373e] = env->getMethodID(cls, "<init>", "(II[[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_add_058834d466178374] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_add_60dc3401cb1a0936] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_a6d8caed839ba827] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_1d6b27621d7bea96] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createBlocksLayout_918e914ae6927f78] = env->getStaticMethodID(cls, "createBlocksLayout", "(Lorg/hipparchus/Field;II)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_createMatrix_f57999d9fe0fa8c7] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumn_5bf832a9d0c2a7e7] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnDimension_412668abc8d889e9] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_86145252a1591a99] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_6f1c886add96d5a0] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_7007d1e2762517a8] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_a7f16df0741fd579] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRow_5bf832a9d0c2a7e7] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_412668abc8d889e9] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_86145252a1591a99] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_6f1c886add96d5a0] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_455eec4445ba70d4] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiply_058834d466178374] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_multiply_60dc3401cb1a0936] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_a6d8caed839ba827] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_058834d466178374] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_multiplyTransposed_46bb3c73957bfb07] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_operate_ee5975d9ac401b83] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_ee5975d9ac401b83] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_scalarAdd_59a8d7279b1a66f0] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_59a8d7279b1a66f0] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_25fe2a3042ba75d1] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_82ae94aaf3c46d50] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_502f8ed205bebebd] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_a6d8caed839ba827] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_25fe2a3042ba75d1] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_63b21f9a765f6de3] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/BlockFieldMatrix;)V");
          mids$[mid_setRowMatrix_82ae94aaf3c46d50] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_502f8ed205bebebd] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_7c2e1cd72b6eb4ce] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_058834d466178374] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_subtract_60dc3401cb1a0936] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_toBlocksLayout_7c2983baa1174efc] = env->getStaticMethodID(cls, "toBlocksLayout", "([[Lorg/hipparchus/FieldElement;)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_transpose_1d6b27621d7bea96] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_058834d466178374] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_transposeMultiply_46bb3c73957bfb07] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_walkInOptimizedOrder_7d4c76689ca2f3c1] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_76fd1db3efda6447] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_516fb751ccd95d3b] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_e5d38b926487f1a5] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_7d4c76689ca2f3c1] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_76fd1db3efda6447] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_516fb751ccd95d3b] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_e5d38b926487f1a5] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BLOCK_SIZE = env->getStaticIntField(cls, "BLOCK_SIZE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BlockFieldMatrix::BlockFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_f8690281fd65dda7, a0.this$)) {}

      BlockFieldMatrix::BlockFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_a9ccb012d4cb48bd, a0.this$, a1, a2)) {}

      BlockFieldMatrix::BlockFieldMatrix(jint a0, jint a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2, jboolean a3) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_635d5b233a9a373e, a0, a1, a2.this$, a3)) {}

      BlockFieldMatrix BlockFieldMatrix::add(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_add_058834d466178374], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::add(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_60dc3401cb1a0936], a0.this$));
      }

      void BlockFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_1d6b27621d7bea96]));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::createBlocksLayout(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_createBlocksLayout_918e914ae6927f78], a0.this$, a1, a2));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_f57999d9fe0fa8c7], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_5bf832a9d0c2a7e7], a0));
      }

      jint BlockFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_86145252a1591a99], a0));
      }

      ::org::hipparchus::linear::FieldVector BlockFieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_6f1c886add96d5a0], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_7007d1e2762517a8]));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_a7f16df0741fd579], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_5bf832a9d0c2a7e7], a0));
      }

      jint BlockFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_86145252a1591a99], a0));
      }

      ::org::hipparchus::linear::FieldVector BlockFieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_6f1c886add96d5a0], a0));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_455eec4445ba70d4], a0, a1, a2, a3));
      }

      BlockFieldMatrix BlockFieldMatrix::multiply(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_058834d466178374], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::multiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_60dc3401cb1a0936], a0.this$));
      }

      void BlockFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      BlockFieldMatrix BlockFieldMatrix::multiplyTransposed(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_058834d466178374], a0.this$));
      }

      BlockFieldMatrix BlockFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_46bb3c73957bfb07], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_ee5975d9ac401b83], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_ee5975d9ac401b83], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_59a8d7279b1a66f0], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_59a8d7279b1a66f0], a0.this$));
      }

      void BlockFieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_25fe2a3042ba75d1], a0, a1.this$);
      }

      void BlockFieldMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_82ae94aaf3c46d50], a0, a1.this$);
      }

      void BlockFieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_502f8ed205bebebd], a0, a1.this$);
      }

      void BlockFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      void BlockFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_25fe2a3042ba75d1], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowMatrix(jint a0, const BlockFieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_63b21f9a765f6de3], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_82ae94aaf3c46d50], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_502f8ed205bebebd], a0, a1.this$);
      }

      void BlockFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_7c2e1cd72b6eb4ce], a0.this$, a1, a2);
      }

      BlockFieldMatrix BlockFieldMatrix::subtract(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_058834d466178374], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::subtract(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_60dc3401cb1a0936], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::toBlocksLayout(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_toBlocksLayout_7c2983baa1174efc], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::transpose() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_1d6b27621d7bea96]));
      }

      BlockFieldMatrix BlockFieldMatrix::transposeMultiply(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_058834d466178374], a0.this$));
      }

      BlockFieldMatrix BlockFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_46bb3c73957bfb07], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_7d4c76689ca2f3c1], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_76fd1db3efda6447], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_516fb751ccd95d3b], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_e5d38b926487f1a5], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_7d4c76689ca2f3c1], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_76fd1db3efda6447], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_516fb751ccd95d3b], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_e5d38b926487f1a5], a0.this$, a1, a2, a3, a4));
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
      static PyObject *t_BlockFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_of_(t_BlockFieldMatrix *self, PyObject *args);
      static int t_BlockFieldMatrix_init_(t_BlockFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BlockFieldMatrix_add(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_addToEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_copy(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args);
      static PyObject *t_BlockFieldMatrix_createMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumn(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnDimension(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getData(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRow(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowDimension(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getSubMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiplyEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiplyTransposed(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_operate(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_preMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_scalarAdd(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_scalarMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumn(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumnMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumnVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRow(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRowMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRowVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setSubMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_subtract(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_transpose(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_transposeMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_walkInOptimizedOrder(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_walkInRowOrder(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_get__columnDimension(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__data(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__rowDimension(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__parameters_(t_BlockFieldMatrix *self, void *data);
      static PyGetSetDef t_BlockFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_BlockFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, data),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BlockFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_BlockFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, createBlocksLayout, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, scalarAdd, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, scalarMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, toBlocksLayout, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, transpose, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BlockFieldMatrix)[] = {
        { Py_tp_methods, t_BlockFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_BlockFieldMatrix_init_ },
        { Py_tp_getset, t_BlockFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BlockFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(BlockFieldMatrix, t_BlockFieldMatrix, BlockFieldMatrix);
      PyObject *t_BlockFieldMatrix::wrap_Object(const BlockFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BlockFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BlockFieldMatrix *self = (t_BlockFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BlockFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BlockFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BlockFieldMatrix *self = (t_BlockFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BlockFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(BlockFieldMatrix), &PY_TYPE_DEF(BlockFieldMatrix), module, "BlockFieldMatrix", 0);
      }

      void t_BlockFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "class_", make_descriptor(BlockFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "wrapfn_", make_descriptor(t_BlockFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "boxfn_", make_descriptor(boxObject));
        env->getClass(BlockFieldMatrix::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "BLOCK_SIZE", make_descriptor(BlockFieldMatrix::BLOCK_SIZE));
      }

      static PyObject *t_BlockFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BlockFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_BlockFieldMatrix::wrap_Object(BlockFieldMatrix(((t_BlockFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_BlockFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BlockFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BlockFieldMatrix_of_(t_BlockFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_BlockFieldMatrix_init_(t_BlockFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = BlockFieldMatrix(a0));
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
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = BlockFieldMatrix(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            JArray< JArray< ::org::hipparchus::FieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;
            jboolean a3;
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "II[[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3))
            {
              INT_CALL(object = BlockFieldMatrix(a0, a1, a2, a3));
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

      static PyObject *t_BlockFieldMatrix_add(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_addToEntry(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_copy(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockFieldMatrix::createBlocksLayout(a0, a1, a2));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "createBlocksLayout", args);
        return NULL;
      }

      static PyObject *t_BlockFieldMatrix_createMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumn(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumn", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnDimension(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getData(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getEntry(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRow(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowDimension(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getSubMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiplyEntry(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiplyTransposed(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_operate(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_preMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_scalarAdd(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "scalarAdd", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_scalarMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "scalarMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumn(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumn", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumnMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumnMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumnVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumnVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setEntry(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRow(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRowMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            BlockFieldMatrix a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", BlockFieldMatrix::initializeClass, &a0, &a1, &p1, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRowMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRowVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRowVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setSubMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_subtract(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockFieldMatrix::toBlocksLayout(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "toBlocksLayout", arg);
        return NULL;
      }

      static PyObject *t_BlockFieldMatrix_transpose(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.transpose());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "transpose", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_transposeMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_walkInOptimizedOrder(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "walkInOptimizedOrder", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_walkInRowOrder(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }
      static PyObject *t_BlockFieldMatrix_get__parameters_(t_BlockFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BlockFieldMatrix_get__columnDimension(t_BlockFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BlockFieldMatrix_get__data(t_BlockFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_BlockFieldMatrix_get__rowDimension(t_BlockFieldMatrix *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$PopulationSize.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *CMAESOptimizer$PopulationSize::class$ = NULL;
            jmethodID *CMAESOptimizer$PopulationSize::mids$ = NULL;
            bool CMAESOptimizer$PopulationSize::live$ = false;

            jclass CMAESOptimizer$PopulationSize::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$PopulationSize");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getPopulationSize_412668abc8d889e9] = env->getMethodID(cls, "getPopulationSize", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer$PopulationSize::CMAESOptimizer$PopulationSize(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

            jint CMAESOptimizer$PopulationSize::getPopulationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getPopulationSize_412668abc8d889e9]);
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
            static PyObject *t_CMAESOptimizer$PopulationSize_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$PopulationSize_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$PopulationSize_of_(t_CMAESOptimizer$PopulationSize *self, PyObject *args);
            static int t_CMAESOptimizer$PopulationSize_init_(t_CMAESOptimizer$PopulationSize *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CMAESOptimizer$PopulationSize_getPopulationSize(t_CMAESOptimizer$PopulationSize *self);
            static PyObject *t_CMAESOptimizer$PopulationSize_get__populationSize(t_CMAESOptimizer$PopulationSize *self, void *data);
            static PyObject *t_CMAESOptimizer$PopulationSize_get__parameters_(t_CMAESOptimizer$PopulationSize *self, void *data);
            static PyGetSetDef t_CMAESOptimizer$PopulationSize__fields_[] = {
              DECLARE_GET_FIELD(t_CMAESOptimizer$PopulationSize, populationSize),
              DECLARE_GET_FIELD(t_CMAESOptimizer$PopulationSize, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CMAESOptimizer$PopulationSize__methods_[] = {
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, of_, METH_VARARGS),
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, getPopulationSize, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CMAESOptimizer$PopulationSize)[] = {
              { Py_tp_methods, t_CMAESOptimizer$PopulationSize__methods_ },
              { Py_tp_init, (void *) t_CMAESOptimizer$PopulationSize_init_ },
              { Py_tp_getset, t_CMAESOptimizer$PopulationSize__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CMAESOptimizer$PopulationSize)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CMAESOptimizer$PopulationSize, t_CMAESOptimizer$PopulationSize, CMAESOptimizer$PopulationSize);
            PyObject *t_CMAESOptimizer$PopulationSize::wrap_Object(const CMAESOptimizer$PopulationSize& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$PopulationSize::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$PopulationSize *self = (t_CMAESOptimizer$PopulationSize *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CMAESOptimizer$PopulationSize::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$PopulationSize::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$PopulationSize *self = (t_CMAESOptimizer$PopulationSize *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CMAESOptimizer$PopulationSize::install(PyObject *module)
            {
              installType(&PY_TYPE(CMAESOptimizer$PopulationSize), &PY_TYPE_DEF(CMAESOptimizer$PopulationSize), module, "CMAESOptimizer$PopulationSize", 0);
            }

            void t_CMAESOptimizer$PopulationSize::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$PopulationSize), "class_", make_descriptor(CMAESOptimizer$PopulationSize::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$PopulationSize), "wrapfn_", make_descriptor(t_CMAESOptimizer$PopulationSize::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$PopulationSize), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CMAESOptimizer$PopulationSize::initializeClass, 1)))
                return NULL;
              return t_CMAESOptimizer$PopulationSize::wrap_Object(CMAESOptimizer$PopulationSize(((t_CMAESOptimizer$PopulationSize *) arg)->object.this$));
            }
            static PyObject *t_CMAESOptimizer$PopulationSize_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CMAESOptimizer$PopulationSize::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_of_(t_CMAESOptimizer$PopulationSize *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CMAESOptimizer$PopulationSize_init_(t_CMAESOptimizer$PopulationSize *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              CMAESOptimizer$PopulationSize object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = CMAESOptimizer$PopulationSize(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_getPopulationSize(t_CMAESOptimizer$PopulationSize *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPopulationSize());
              return PyLong_FromLong((long) result);
            }
            static PyObject *t_CMAESOptimizer$PopulationSize_get__parameters_(t_CMAESOptimizer$PopulationSize *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_get__populationSize(t_CMAESOptimizer$PopulationSize *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPopulationSize());
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
#include "org/orekit/propagation/numerical/FieldNumericalPropagator.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *FieldNumericalPropagator::class$ = NULL;
        jmethodID *FieldNumericalPropagator::mids$ = NULL;
        bool FieldNumericalPropagator::live$ = false;

        jclass FieldNumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/FieldNumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_68cc2850ac8c3b8a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;)V");
            mids$[mid_init$_5fd536ebd2e543f8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_e37f41a34246ae45] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_getAllForceModels_0d9551367f7ecdef] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPVCoordinates_4ac52e75113a03db] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_removeForceModels_0640e6acf969ed28] = env->getMethodID(cls, "removeForceModels", "()V");
            mids$[mid_resetInitialState_b66c84a5711243d5] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_setIgnoreCentralAttraction_ed2afdb8506b9742] = env->getMethodID(cls, "setIgnoreCentralAttraction", "(Z)V");
            mids$[mid_setInitialState_b66c84a5711243d5] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_setMu_1ee4bed350fde589] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setOrbitType_6ccfc646a24c9722] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_44c283653315b1a7] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_tolerances_89f225076cfe8a9a] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_tolerances_f1caea89d67ed2a2] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_createMapper_ad7c2ac9dfe2008b] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_getMainStateEquations_c822d3b1a2fa150a] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNumericalPropagator::FieldNumericalPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_68cc2850ac8c3b8a, a0.this$, a1.this$)) {}

        FieldNumericalPropagator::FieldNumericalPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_5fd536ebd2e543f8, a0.this$, a1.this$, a2.this$)) {}

        void FieldNumericalPropagator::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_e37f41a34246ae45], a0.this$);
        }

        ::java::util::List FieldNumericalPropagator::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_0d9551367f7ecdef]));
        }

        ::org::orekit::orbits::OrbitType FieldNumericalPropagator::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_2cea2a2cb3e02091]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldNumericalPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_4ac52e75113a03db], a0.this$, a1.this$));
        }

        ::org::orekit::orbits::PositionAngleType FieldNumericalPropagator::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
        }

        void FieldNumericalPropagator::removeForceModels() const
        {
          env->callVoidMethod(this$, mids$[mid_removeForceModels_0640e6acf969ed28]);
        }

        void FieldNumericalPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_b66c84a5711243d5], a0.this$);
        }

        void FieldNumericalPropagator::setIgnoreCentralAttraction(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIgnoreCentralAttraction_ed2afdb8506b9742], a0);
        }

        void FieldNumericalPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialState_b66c84a5711243d5], a0.this$);
        }

        void FieldNumericalPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_1ee4bed350fde589], a0.this$);
        }

        void FieldNumericalPropagator::setOrbitType(const ::org::orekit::orbits::OrbitType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitType_6ccfc646a24c9722], a0.this$);
        }

        void FieldNumericalPropagator::setPositionAngleType(const ::org::orekit::orbits::PositionAngleType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_44c283653315b1a7], a0.this$);
        }

        JArray< JArray< jdouble > > FieldNumericalPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::orekit::orbits::OrbitType & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_89f225076cfe8a9a], a0.this$, a1.this$, a2.this$));
        }

        JArray< JArray< jdouble > > FieldNumericalPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::orbits::OrbitType & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_f1caea89d67ed2a2], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_FieldNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_of_(t_FieldNumericalPropagator *self, PyObject *args);
        static int t_FieldNumericalPropagator_init_(t_FieldNumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldNumericalPropagator_addForceModel(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_getAllForceModels(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_getOrbitType(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_getPVCoordinates(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_getPositionAngleType(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_removeForceModels(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_resetInitialState(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_setIgnoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setInitialState(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setMu(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_setOrbitType(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setPositionAngleType(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_tolerances(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_get__allForceModels(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__ignoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static int t_FieldNumericalPropagator_set__initialState(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static int t_FieldNumericalPropagator_set__mu(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__orbitType(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__orbitType(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__positionAngleType(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__positionAngleType(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__parameters_(t_FieldNumericalPropagator *self, void *data);
        static PyGetSetDef t_FieldNumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldNumericalPropagator, allForceModels),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, ignoreCentralAttraction),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, initialState),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, mu),
          DECLARE_GETSET_FIELD(t_FieldNumericalPropagator, orbitType),
          DECLARE_GETSET_FIELD(t_FieldNumericalPropagator, positionAngleType),
          DECLARE_GET_FIELD(t_FieldNumericalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldNumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldNumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNumericalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, addForceModel, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, removeForceModels, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, setIgnoreCentralAttraction, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setInitialState, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setMu, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, setOrbitType, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setPositionAngleType, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, tolerances, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldNumericalPropagator)[] = {
          { Py_tp_methods, t_FieldNumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_FieldNumericalPropagator_init_ },
          { Py_tp_getset, t_FieldNumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldNumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(FieldNumericalPropagator, t_FieldNumericalPropagator, FieldNumericalPropagator);
        PyObject *t_FieldNumericalPropagator::wrap_Object(const FieldNumericalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNumericalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNumericalPropagator *self = (t_FieldNumericalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldNumericalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNumericalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNumericalPropagator *self = (t_FieldNumericalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldNumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldNumericalPropagator), &PY_TYPE_DEF(FieldNumericalPropagator), module, "FieldNumericalPropagator", 0);
        }

        void t_FieldNumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "class_", make_descriptor(FieldNumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "wrapfn_", make_descriptor(t_FieldNumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldNumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldNumericalPropagator::wrap_Object(FieldNumericalPropagator(((t_FieldNumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldNumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldNumericalPropagator_of_(t_FieldNumericalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldNumericalPropagator_init_(t_FieldNumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
              PyTypeObject **p1;
              FieldNumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_))
              {
                INT_CALL(object = FieldNumericalPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              FieldNumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2))
              {
                INT_CALL(object = FieldNumericalPropagator(a0, a1, a2));
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

        static PyObject *t_FieldNumericalPropagator_addForceModel(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::forces::ForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::forces::ForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_getAllForceModels(t_FieldNumericalPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_FieldNumericalPropagator_getOrbitType(t_FieldNumericalPropagator *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_FieldNumericalPropagator_getPVCoordinates(t_FieldNumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_getPositionAngleType(t_FieldNumericalPropagator *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_FieldNumericalPropagator_removeForceModels(t_FieldNumericalPropagator *self)
        {
          OBJ_CALL(self->object.removeForceModels());
          Py_RETURN_NONE;
        }

        static PyObject *t_FieldNumericalPropagator_resetInitialState(t_FieldNumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_setIgnoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIgnoreCentralAttraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIgnoreCentralAttraction", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setInitialState(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.setInitialState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialState", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setMu(t_FieldNumericalPropagator *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "setMu", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_setOrbitType(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::OrbitType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(self->object.setOrbitType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitType", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setPositionAngleType(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
          {
            OBJ_CALL(self->object.setPositionAngleType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPositionAngleType", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_tolerances(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::FieldNumericalPropagator::tolerances(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::orbits::OrbitType a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::FieldNumericalPropagator::tolerances(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError(type, "tolerances", args);
          return NULL;
        }
        static PyObject *t_FieldNumericalPropagator_get__parameters_(t_FieldNumericalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldNumericalPropagator_get__allForceModels(t_FieldNumericalPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_FieldNumericalPropagator_set__ignoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setIgnoreCentralAttraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ignoreCentralAttraction", arg);
          return -1;
        }

        static int t_FieldNumericalPropagator_set__initialState(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialState(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialState", arg);
          return -1;
        }

        static int t_FieldNumericalPropagator_set__mu(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_FieldNumericalPropagator_get__orbitType(t_FieldNumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }
        static int t_FieldNumericalPropagator_set__orbitType(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
            {
              INT_CALL(self->object.setOrbitType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitType", arg);
          return -1;
        }

        static PyObject *t_FieldNumericalPropagator_get__positionAngleType(t_FieldNumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
        static int t_FieldNumericalPropagator_set__positionAngleType(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
            {
              INT_CALL(self->object.setPositionAngleType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "positionAngleType", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/PythonEncodedMessage.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonEncodedMessage::class$ = NULL;
          jmethodID *PythonEncodedMessage::mids$ = NULL;
          bool PythonEncodedMessage::live$ = false;

          jclass PythonEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_extractBits_4f6383d3e31ab417] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonEncodedMessage::PythonEncodedMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonEncodedMessage::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonEncodedMessage::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonEncodedMessage::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonEncodedMessage_init_(t_PythonEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonEncodedMessage_finalize(t_PythonEncodedMessage *self);
          static PyObject *t_PythonEncodedMessage_pythonExtension(t_PythonEncodedMessage *self, PyObject *args);
          static jlong JNICALL t_PythonEncodedMessage_extractBits0(JNIEnv *jenv, jobject jobj, jint a0);
          static void JNICALL t_PythonEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonEncodedMessage_get__self(t_PythonEncodedMessage *self, void *data);
          static PyGetSetDef t_PythonEncodedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_PythonEncodedMessage, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_PythonEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEncodedMessage, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonEncodedMessage, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonEncodedMessage)[] = {
            { Py_tp_methods, t_PythonEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_PythonEncodedMessage_init_ },
            { Py_tp_getset, t_PythonEncodedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonEncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonEncodedMessage, t_PythonEncodedMessage, PythonEncodedMessage);

          void t_PythonEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonEncodedMessage), &PY_TYPE_DEF(PythonEncodedMessage), module, "PythonEncodedMessage", 1);
          }

          void t_PythonEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "class_", make_descriptor(PythonEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "wrapfn_", make_descriptor(t_PythonEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonEncodedMessage::initializeClass);
            JNINativeMethod methods[] = {
              { "extractBits", "(I)J", (void *) t_PythonEncodedMessage_extractBits0 },
              { "pythonDecRef", "()V", (void *) t_PythonEncodedMessage_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_PythonEncodedMessage::wrap_Object(PythonEncodedMessage(((t_PythonEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_PythonEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonEncodedMessage_init_(t_PythonEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            PythonEncodedMessage object((jobject) NULL);

            INT_CALL(object = PythonEncodedMessage());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonEncodedMessage_finalize(t_PythonEncodedMessage *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonEncodedMessage_pythonExtension(t_PythonEncodedMessage *self, PyObject *args)
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

          static jlong JNICALL t_PythonEncodedMessage_extractBits0(JNIEnv *jenv, jobject jobj, jint a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jlong value;
            PyObject *result = PyObject_CallMethod(obj, "extractBits", "i", (int) a0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "J", &value))
            {
              throwTypeError("extractBits", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jlong) 0;
          }

          static void JNICALL t_PythonEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonEncodedMessage_get__self(t_PythonEncodedMessage *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/TurnAroundRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *TurnAroundRangeBuilder::class$ = NULL;
          jmethodID *TurnAroundRangeBuilder::mids$ = NULL;
          bool TurnAroundRangeBuilder::live$ = false;

          jclass TurnAroundRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/TurnAroundRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_feb9739fac37e84c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_3715956a439ac42b] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/TurnAroundRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TurnAroundRangeBuilder::TurnAroundRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_feb9739fac37e84c, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::TurnAroundRange TurnAroundRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::TurnAroundRange(env->callObjectMethod(this$, mids$[mid_build_3715956a439ac42b], a0.this$, a1.this$));
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
          static PyObject *t_TurnAroundRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeBuilder_of_(t_TurnAroundRangeBuilder *self, PyObject *args);
          static int t_TurnAroundRangeBuilder_init_(t_TurnAroundRangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TurnAroundRangeBuilder_build(t_TurnAroundRangeBuilder *self, PyObject *args);
          static PyObject *t_TurnAroundRangeBuilder_get__parameters_(t_TurnAroundRangeBuilder *self, void *data);
          static PyGetSetDef t_TurnAroundRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_TurnAroundRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TurnAroundRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_TurnAroundRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_TurnAroundRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TurnAroundRangeBuilder)[] = {
            { Py_tp_methods, t_TurnAroundRangeBuilder__methods_ },
            { Py_tp_init, (void *) t_TurnAroundRangeBuilder_init_ },
            { Py_tp_getset, t_TurnAroundRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TurnAroundRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(TurnAroundRangeBuilder, t_TurnAroundRangeBuilder, TurnAroundRangeBuilder);
          PyObject *t_TurnAroundRangeBuilder::wrap_Object(const TurnAroundRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TurnAroundRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TurnAroundRangeBuilder *self = (t_TurnAroundRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TurnAroundRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TurnAroundRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TurnAroundRangeBuilder *self = (t_TurnAroundRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TurnAroundRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(TurnAroundRangeBuilder), &PY_TYPE_DEF(TurnAroundRangeBuilder), module, "TurnAroundRangeBuilder", 0);
          }

          void t_TurnAroundRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeBuilder), "class_", make_descriptor(TurnAroundRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeBuilder), "wrapfn_", make_descriptor(t_TurnAroundRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TurnAroundRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TurnAroundRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_TurnAroundRangeBuilder::wrap_Object(TurnAroundRangeBuilder(((t_TurnAroundRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_TurnAroundRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TurnAroundRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TurnAroundRangeBuilder_of_(t_TurnAroundRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_TurnAroundRangeBuilder_init_(t_TurnAroundRangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            TurnAroundRangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = TurnAroundRangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TurnAroundRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TurnAroundRangeBuilder_build(t_TurnAroundRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::TurnAroundRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_TurnAroundRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TurnAroundRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_TurnAroundRangeBuilder_get__parameters_(t_TurnAroundRangeBuilder *self, void *data)
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
#include "org/orekit/frames/PredictedEOPHistory.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPFitter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PredictedEOPHistory::class$ = NULL;
      jmethodID *PredictedEOPHistory::mids$ = NULL;
      bool PredictedEOPHistory::live$ = false;

      jclass PredictedEOPHistory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PredictedEOPHistory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_aa062f4825aa77e9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/EOPHistory;DLorg/orekit/frames/EOPFitter;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PredictedEOPHistory::PredictedEOPHistory(const ::org::orekit::frames::EOPHistory & a0, jdouble a1, const ::org::orekit::frames::EOPFitter & a2) : ::org::orekit::frames::EOPHistory(env->newObject(initializeClass, &mids$, mid_init$_aa062f4825aa77e9, a0.this$, a1, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_PredictedEOPHistory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PredictedEOPHistory_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PredictedEOPHistory_init_(t_PredictedEOPHistory *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_PredictedEOPHistory__methods_[] = {
        DECLARE_METHOD(t_PredictedEOPHistory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PredictedEOPHistory, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PredictedEOPHistory)[] = {
        { Py_tp_methods, t_PredictedEOPHistory__methods_ },
        { Py_tp_init, (void *) t_PredictedEOPHistory_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PredictedEOPHistory)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::EOPHistory),
        NULL
      };

      DEFINE_TYPE(PredictedEOPHistory, t_PredictedEOPHistory, PredictedEOPHistory);

      void t_PredictedEOPHistory::install(PyObject *module)
      {
        installType(&PY_TYPE(PredictedEOPHistory), &PY_TYPE_DEF(PredictedEOPHistory), module, "PredictedEOPHistory", 0);
      }

      void t_PredictedEOPHistory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "class_", make_descriptor(PredictedEOPHistory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "wrapfn_", make_descriptor(t_PredictedEOPHistory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PredictedEOPHistory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PredictedEOPHistory::initializeClass, 1)))
          return NULL;
        return t_PredictedEOPHistory::wrap_Object(PredictedEOPHistory(((t_PredictedEOPHistory *) arg)->object.this$));
      }
      static PyObject *t_PredictedEOPHistory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PredictedEOPHistory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PredictedEOPHistory_init_(t_PredictedEOPHistory *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        jdouble a1;
        ::org::orekit::frames::EOPFitter a2((jobject) NULL);
        PredictedEOPHistory object((jobject) NULL);

        if (!parseArgs(args, "kDk", ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::frames::EOPFitter::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PredictedEOPHistory(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/BoxAndSolarArraySpacecraft.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/Panel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *BoxAndSolarArraySpacecraft::class$ = NULL;
      jmethodID *BoxAndSolarArraySpacecraft::mids$ = NULL;
      bool BoxAndSolarArraySpacecraft::live$ = false;

      jclass BoxAndSolarArraySpacecraft::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/BoxAndSolarArraySpacecraft");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_init$_557121873802722e] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDD)V");
          mids$[mid_buildBox_1a565ea8d1d30b76] = env->getStaticMethodID(cls, "buildBox", "(DDDDDDD)Ljava/util/List;");
          mids$[mid_buildPanels_54f4a04d08f6adbc] = env->getStaticMethodID(cls, "buildPanels", "(DDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDD)Ljava/util/List;");
          mids$[mid_dragAcceleration_bc16b30ecfb3a4cc] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_dragAcceleration_59d392869e8fa633] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getDragParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");
          mids$[mid_getPanels_0d9551367f7ecdef] = env->getMethodID(cls, "getPanels", "()Ljava/util/List;");
          mids$[mid_getRadiationParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
          mids$[mid_radiationPressureAcceleration_a910b2c2e7db1f82] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_radiationPressureAcceleration_122b60d0431fddf5] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BoxAndSolarArraySpacecraft::BoxAndSolarArraySpacecraft(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}

      BoxAndSolarArraySpacecraft::BoxAndSolarArraySpacecraft(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_557121873802722e, a0, a1, a2, a3.this$, a4, a5.this$, a6, a7, a8, a9)) {}

      ::java::util::List BoxAndSolarArraySpacecraft::buildBox(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildBox_1a565ea8d1d30b76], a0, a1, a2, a3, a4, a5, a6));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::buildPanels(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildPanels_54f4a04d08f6adbc], a0, a1, a2, a3.this$, a4, a5.this$, a6, a7, a8, a9));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BoxAndSolarArraySpacecraft::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_bc16b30ecfb3a4cc], a0.this$, a1, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BoxAndSolarArraySpacecraft::dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_59d392869e8fa633], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getDragParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_0d9551367f7ecdef]));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getPanels() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPanels_0d9551367f7ecdef]));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getRadiationParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_0d9551367f7ecdef]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BoxAndSolarArraySpacecraft::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a910b2c2e7db1f82], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BoxAndSolarArraySpacecraft::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_122b60d0431fddf5], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_BoxAndSolarArraySpacecraft_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoxAndSolarArraySpacecraft_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BoxAndSolarArraySpacecraft_init_(t_BoxAndSolarArraySpacecraft *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BoxAndSolarArraySpacecraft_buildBox(PyTypeObject *type, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_buildPanels(PyTypeObject *type, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_dragAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_getDragParametersDrivers(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_getPanels(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_getRadiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_radiationPressureAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__dragParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__panels(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__radiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyGetSetDef t_BoxAndSolarArraySpacecraft__fields_[] = {
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, dragParametersDrivers),
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, panels),
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, radiationParametersDrivers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BoxAndSolarArraySpacecraft__methods_[] = {
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, buildBox, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, buildPanels, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, dragAcceleration, METH_VARARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getDragParametersDrivers, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getPanels, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getRadiationParametersDrivers, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, radiationPressureAcceleration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BoxAndSolarArraySpacecraft)[] = {
        { Py_tp_methods, t_BoxAndSolarArraySpacecraft__methods_ },
        { Py_tp_init, (void *) t_BoxAndSolarArraySpacecraft_init_ },
        { Py_tp_getset, t_BoxAndSolarArraySpacecraft__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BoxAndSolarArraySpacecraft)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BoxAndSolarArraySpacecraft, t_BoxAndSolarArraySpacecraft, BoxAndSolarArraySpacecraft);

      void t_BoxAndSolarArraySpacecraft::install(PyObject *module)
      {
        installType(&PY_TYPE(BoxAndSolarArraySpacecraft), &PY_TYPE_DEF(BoxAndSolarArraySpacecraft), module, "BoxAndSolarArraySpacecraft", 0);
      }

      void t_BoxAndSolarArraySpacecraft::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "class_", make_descriptor(BoxAndSolarArraySpacecraft::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "wrapfn_", make_descriptor(t_BoxAndSolarArraySpacecraft::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BoxAndSolarArraySpacecraft::initializeClass, 1)))
          return NULL;
        return t_BoxAndSolarArraySpacecraft::wrap_Object(BoxAndSolarArraySpacecraft(((t_BoxAndSolarArraySpacecraft *) arg)->object.this$));
      }
      static PyObject *t_BoxAndSolarArraySpacecraft_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BoxAndSolarArraySpacecraft::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BoxAndSolarArraySpacecraft_init_(t_BoxAndSolarArraySpacecraft *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            BoxAndSolarArraySpacecraft object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = BoxAndSolarArraySpacecraft(a0));
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
            ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
            jdouble a4;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            BoxAndSolarArraySpacecraft object((jobject) NULL);

            if (!parseArgs(args, "DDDkDkDDDD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
            {
              INT_CALL(object = BoxAndSolarArraySpacecraft(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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

      static PyObject *t_BoxAndSolarArraySpacecraft_buildBox(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "DDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          OBJ_CALL(result = ::org::orekit::forces::BoxAndSolarArraySpacecraft::buildBox(a0, a1, a2, a3, a4, a5, a6));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
        }

        PyErr_SetArgsError(type, "buildBox", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_buildPanels(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
        jdouble a4;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "DDDkDkDDDD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
        {
          OBJ_CALL(result = ::org::orekit::forces::BoxAndSolarArraySpacecraft::buildPanels(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
        }

        PyErr_SetArgsError(type, "buildPanels", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_dragAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kDk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "dragAcceleration", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getDragParametersDrivers(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getDragParametersDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getPanels(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPanels());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getRadiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getRadiationParametersDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_radiationPressureAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__dragParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getDragParametersDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__panels(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPanels());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__radiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getRadiationParametersDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AggregatedPVCoordinatesProvider::class$ = NULL;
      jmethodID *AggregatedPVCoordinatesProvider::mids$ = NULL;
      bool AggregatedPVCoordinatesProvider::live$ = false;

      jclass AggregatedPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AggregatedPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_81c77edb92f240ae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;)V");
          mids$[mid_init$_44690fe6b1395199] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_7ca40559664606d9] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider::AggregatedPVCoordinatesProvider(const ::org::orekit::utils::TimeSpanMap & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_81c77edb92f240ae, a0.this$)) {}

      AggregatedPVCoordinatesProvider::AggregatedPVCoordinatesProvider(const ::org::orekit::utils::TimeSpanMap & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44690fe6b1395199, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::time::AbsoluteDate AggregatedPVCoordinatesProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate AggregatedPVCoordinatesProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AggregatedPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_17742a9a6655bdb1], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AggregatedPVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_7ca40559664606d9], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_AggregatedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregatedPVCoordinatesProvider_init_(t_AggregatedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregatedPVCoordinatesProvider_getMaxDate(t_AggregatedPVCoordinatesProvider *self);
      static PyObject *t_AggregatedPVCoordinatesProvider_getMinDate(t_AggregatedPVCoordinatesProvider *self);
      static PyObject *t_AggregatedPVCoordinatesProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider_getPosition(t_AggregatedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider_get__maxDate(t_AggregatedPVCoordinatesProvider *self, void *data);
      static PyObject *t_AggregatedPVCoordinatesProvider_get__minDate(t_AggregatedPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_AggregatedPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_AggregatedPVCoordinatesProvider, maxDate),
        DECLARE_GET_FIELD(t_AggregatedPVCoordinatesProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AggregatedPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getMinDate, METH_NOARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregatedPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_AggregatedPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_AggregatedPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_AggregatedPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregatedPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregatedPVCoordinatesProvider, t_AggregatedPVCoordinatesProvider, AggregatedPVCoordinatesProvider);

      void t_AggregatedPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregatedPVCoordinatesProvider), &PY_TYPE_DEF(AggregatedPVCoordinatesProvider), module, "AggregatedPVCoordinatesProvider", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "InvalidPVProvider", make_descriptor(&PY_TYPE_DEF(AggregatedPVCoordinatesProvider$InvalidPVProvider)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "Builder", make_descriptor(&PY_TYPE_DEF(AggregatedPVCoordinatesProvider$Builder)));
      }

      void t_AggregatedPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "class_", make_descriptor(AggregatedPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "wrapfn_", make_descriptor(t_AggregatedPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregatedPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_AggregatedPVCoordinatesProvider::wrap_Object(AggregatedPVCoordinatesProvider(((t_AggregatedPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_AggregatedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregatedPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregatedPVCoordinatesProvider_init_(t_AggregatedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
            PyTypeObject **p0;
            AggregatedPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeSpanMap::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_))
            {
              INT_CALL(object = AggregatedPVCoordinatesProvider(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            AggregatedPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a1, &a2))
            {
              INT_CALL(object = AggregatedPVCoordinatesProvider(a0, a1, a2));
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

      static PyObject *t_AggregatedPVCoordinatesProvider_getMaxDate(t_AggregatedPVCoordinatesProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_getMinDate(t_AggregatedPVCoordinatesProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_getPosition(t_AggregatedPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_get__maxDate(t_AggregatedPVCoordinatesProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_get__minDate(t_AggregatedPVCoordinatesProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultFieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultFieldMatrixChangingVisitor::class$ = NULL;
      jmethodID *DefaultFieldMatrixChangingVisitor::mids$ = NULL;
      bool DefaultFieldMatrixChangingVisitor::live$ = false;

      jclass DefaultFieldMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultFieldMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b906415fb0b2ba27] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_end_ce0470d468f80a56] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_b02282271d2e33e3] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_0f2f35f7d94c9635] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultFieldMatrixChangingVisitor::DefaultFieldMatrixChangingVisitor(const ::org::hipparchus::FieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b906415fb0b2ba27, a0.this$)) {}

      ::org::hipparchus::FieldElement DefaultFieldMatrixChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_ce0470d468f80a56]));
      }

      void DefaultFieldMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_b02282271d2e33e3], a0, a1, a2, a3, a4, a5);
      }

      ::org::hipparchus::FieldElement DefaultFieldMatrixChangingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_0f2f35f7d94c9635], a0, a1, a2.this$));
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
      static PyObject *t_DefaultFieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_of_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static int t_DefaultFieldMatrixChangingVisitor_init_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_end(t_DefaultFieldMatrixChangingVisitor *self);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_start(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_visit(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_get__parameters_(t_DefaultFieldMatrixChangingVisitor *self, void *data);
      static PyGetSetDef t_DefaultFieldMatrixChangingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultFieldMatrixChangingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultFieldMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultFieldMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_DefaultFieldMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultFieldMatrixChangingVisitor_init_ },
        { Py_tp_getset, t_DefaultFieldMatrixChangingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultFieldMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultFieldMatrixChangingVisitor, t_DefaultFieldMatrixChangingVisitor, DefaultFieldMatrixChangingVisitor);
      PyObject *t_DefaultFieldMatrixChangingVisitor::wrap_Object(const DefaultFieldMatrixChangingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixChangingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixChangingVisitor *self = (t_DefaultFieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DefaultFieldMatrixChangingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixChangingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixChangingVisitor *self = (t_DefaultFieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DefaultFieldMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultFieldMatrixChangingVisitor), &PY_TYPE_DEF(DefaultFieldMatrixChangingVisitor), module, "DefaultFieldMatrixChangingVisitor", 0);
      }

      void t_DefaultFieldMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "class_", make_descriptor(DefaultFieldMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "wrapfn_", make_descriptor(t_DefaultFieldMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultFieldMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultFieldMatrixChangingVisitor::wrap_Object(DefaultFieldMatrixChangingVisitor(((t_DefaultFieldMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultFieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultFieldMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_of_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_DefaultFieldMatrixChangingVisitor_init_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        DefaultFieldMatrixChangingVisitor object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          INT_CALL(object = DefaultFieldMatrixChangingVisitor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_end(t_DefaultFieldMatrixChangingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_start(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_visit(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_DefaultFieldMatrixChangingVisitor_get__parameters_(t_DefaultFieldMatrixChangingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitDetermination::class$ = NULL;
              jmethodID *OrbitDetermination::mids$ = NULL;
              bool OrbitDetermination::live$ = false;

              jclass OrbitDetermination::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getActualOdSpan_557b8123390d8d0c] = env->getMethodID(cls, "getActualOdSpan", "()D");
                  mids$[mid_getConfidence_557b8123390d8d0c] = env->getMethodID(cls, "getConfidence", "()D");
                  mids$[mid_getConsiderN_412668abc8d889e9] = env->getMethodID(cls, "getConsiderN", "()I");
                  mids$[mid_getConsiderParameters_0d9551367f7ecdef] = env->getMethodID(cls, "getConsiderParameters", "()Ljava/util/List;");
                  mids$[mid_getDataTypes_0d9551367f7ecdef] = env->getMethodID(cls, "getDataTypes", "()Ljava/util/List;");
                  mids$[mid_getEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getEpochEigenInt_557b8123390d8d0c] = env->getMethodID(cls, "getEpochEigenInt", "()D");
                  mids$[mid_getEpochEigenMaj_557b8123390d8d0c] = env->getMethodID(cls, "getEpochEigenMaj", "()D");
                  mids$[mid_getEpochEigenMin_557b8123390d8d0c] = env->getMethodID(cls, "getEpochEigenMin", "()D");
                  mids$[mid_getGdop_557b8123390d8d0c] = env->getMethodID(cls, "getGdop", "()D");
                  mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMaxPredictedEigenMaj_557b8123390d8d0c] = env->getMethodID(cls, "getMaxPredictedEigenMaj", "()D");
                  mids$[mid_getMaximumObsGap_557b8123390d8d0c] = env->getMethodID(cls, "getMaximumObsGap", "()D");
                  mids$[mid_getMethod_969c9256ca143e68] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/files/ccsds/definitions/OdMethodFacade;");
                  mids$[mid_getMinPredictedEigenMin_557b8123390d8d0c] = env->getMethodID(cls, "getMinPredictedEigenMin", "()D");
                  mids$[mid_getObsAvailable_412668abc8d889e9] = env->getMethodID(cls, "getObsAvailable", "()I");
                  mids$[mid_getObsUsed_412668abc8d889e9] = env->getMethodID(cls, "getObsUsed", "()I");
                  mids$[mid_getPrevId_3cffd47377eca18a] = env->getMethodID(cls, "getPrevId", "()Ljava/lang/String;");
                  mids$[mid_getRecommendedOdSpan_557b8123390d8d0c] = env->getMethodID(cls, "getRecommendedOdSpan", "()D");
                  mids$[mid_getSedr_557b8123390d8d0c] = env->getMethodID(cls, "getSedr", "()D");
                  mids$[mid_getSensors_0d9551367f7ecdef] = env->getMethodID(cls, "getSensors", "()Ljava/util/List;");
                  mids$[mid_getSensorsN_412668abc8d889e9] = env->getMethodID(cls, "getSensorsN", "()I");
                  mids$[mid_getSolveN_412668abc8d889e9] = env->getMethodID(cls, "getSolveN", "()I");
                  mids$[mid_getSolveStates_0d9551367f7ecdef] = env->getMethodID(cls, "getSolveStates", "()Ljava/util/List;");
                  mids$[mid_getTimeSinceFirstObservation_557b8123390d8d0c] = env->getMethodID(cls, "getTimeSinceFirstObservation", "()D");
                  mids$[mid_getTimeSinceLastObservation_557b8123390d8d0c] = env->getMethodID(cls, "getTimeSinceLastObservation", "()D");
                  mids$[mid_getTracksAvailable_412668abc8d889e9] = env->getMethodID(cls, "getTracksAvailable", "()I");
                  mids$[mid_getTracksUsed_412668abc8d889e9] = env->getMethodID(cls, "getTracksUsed", "()I");
                  mids$[mid_getWeightedRms_557b8123390d8d0c] = env->getMethodID(cls, "getWeightedRms", "()D");
                  mids$[mid_setActualOdSpan_10f281d777284cea] = env->getMethodID(cls, "setActualOdSpan", "(D)V");
                  mids$[mid_setConfidence_10f281d777284cea] = env->getMethodID(cls, "setConfidence", "(D)V");
                  mids$[mid_setConsiderN_a3da1a935cb37f7b] = env->getMethodID(cls, "setConsiderN", "(I)V");
                  mids$[mid_setConsiderParameters_4ccaedadb068bdeb] = env->getMethodID(cls, "setConsiderParameters", "(Ljava/util/List;)V");
                  mids$[mid_setDataTypes_4ccaedadb068bdeb] = env->getMethodID(cls, "setDataTypes", "(Ljava/util/List;)V");
                  mids$[mid_setEpoch_20affcbd28542333] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setEpochEigenInt_10f281d777284cea] = env->getMethodID(cls, "setEpochEigenInt", "(D)V");
                  mids$[mid_setEpochEigenMaj_10f281d777284cea] = env->getMethodID(cls, "setEpochEigenMaj", "(D)V");
                  mids$[mid_setEpochEigenMin_10f281d777284cea] = env->getMethodID(cls, "setEpochEigenMin", "(D)V");
                  mids$[mid_setGdop_10f281d777284cea] = env->getMethodID(cls, "setGdop", "(D)V");
                  mids$[mid_setId_f5ffdf29129ef90a] = env->getMethodID(cls, "setId", "(Ljava/lang/String;)V");
                  mids$[mid_setMaxPredictedEigenMaj_10f281d777284cea] = env->getMethodID(cls, "setMaxPredictedEigenMaj", "(D)V");
                  mids$[mid_setMaximumObsGap_10f281d777284cea] = env->getMethodID(cls, "setMaximumObsGap", "(D)V");
                  mids$[mid_setMethod_344785fcd4d01936] = env->getMethodID(cls, "setMethod", "(Lorg/orekit/files/ccsds/definitions/OdMethodFacade;)V");
                  mids$[mid_setMinPredictedEigenMin_10f281d777284cea] = env->getMethodID(cls, "setMinPredictedEigenMin", "(D)V");
                  mids$[mid_setObsAvailable_a3da1a935cb37f7b] = env->getMethodID(cls, "setObsAvailable", "(I)V");
                  mids$[mid_setObsUsed_a3da1a935cb37f7b] = env->getMethodID(cls, "setObsUsed", "(I)V");
                  mids$[mid_setPrevId_f5ffdf29129ef90a] = env->getMethodID(cls, "setPrevId", "(Ljava/lang/String;)V");
                  mids$[mid_setRecommendedOdSpan_10f281d777284cea] = env->getMethodID(cls, "setRecommendedOdSpan", "(D)V");
                  mids$[mid_setSedr_10f281d777284cea] = env->getMethodID(cls, "setSedr", "(D)V");
                  mids$[mid_setSensors_4ccaedadb068bdeb] = env->getMethodID(cls, "setSensors", "(Ljava/util/List;)V");
                  mids$[mid_setSensorsN_a3da1a935cb37f7b] = env->getMethodID(cls, "setSensorsN", "(I)V");
                  mids$[mid_setSolveN_a3da1a935cb37f7b] = env->getMethodID(cls, "setSolveN", "(I)V");
                  mids$[mid_setSolveStates_4ccaedadb068bdeb] = env->getMethodID(cls, "setSolveStates", "(Ljava/util/List;)V");
                  mids$[mid_setTimeSinceFirstObservation_10f281d777284cea] = env->getMethodID(cls, "setTimeSinceFirstObservation", "(D)V");
                  mids$[mid_setTimeSinceLastObservation_10f281d777284cea] = env->getMethodID(cls, "setTimeSinceLastObservation", "(D)V");
                  mids$[mid_setTracksAvailable_a3da1a935cb37f7b] = env->getMethodID(cls, "setTracksAvailable", "(I)V");
                  mids$[mid_setTracksUsed_a3da1a935cb37f7b] = env->getMethodID(cls, "setTracksUsed", "(I)V");
                  mids$[mid_setWeightedRms_10f281d777284cea] = env->getMethodID(cls, "setWeightedRms", "(D)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitDetermination::OrbitDetermination() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jdouble OrbitDetermination::getActualOdSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getActualOdSpan_557b8123390d8d0c]);
              }

              jdouble OrbitDetermination::getConfidence() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getConfidence_557b8123390d8d0c]);
              }

              jint OrbitDetermination::getConsiderN() const
              {
                return env->callIntMethod(this$, mids$[mid_getConsiderN_412668abc8d889e9]);
              }

              ::java::util::List OrbitDetermination::getConsiderParameters() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getConsiderParameters_0d9551367f7ecdef]));
              }

              ::java::util::List OrbitDetermination::getDataTypes() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataTypes_0d9551367f7ecdef]));
              }

              ::org::orekit::time::AbsoluteDate OrbitDetermination::getEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_7a97f7e149e79afb]));
              }

              jdouble OrbitDetermination::getEpochEigenInt() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenInt_557b8123390d8d0c]);
              }

              jdouble OrbitDetermination::getEpochEigenMaj() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenMaj_557b8123390d8d0c]);
              }

              jdouble OrbitDetermination::getEpochEigenMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenMin_557b8123390d8d0c]);
              }

              jdouble OrbitDetermination::getGdop() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGdop_557b8123390d8d0c]);
              }

              ::java::lang::String OrbitDetermination::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_3cffd47377eca18a]));
              }

              jdouble OrbitDetermination::getMaxPredictedEigenMaj() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxPredictedEigenMaj_557b8123390d8d0c]);
              }

              jdouble OrbitDetermination::getMaximumObsGap() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaximumObsGap_557b8123390d8d0c]);
              }

              ::org::orekit::files::ccsds::definitions::OdMethodFacade OrbitDetermination::getMethod() const
              {
                return ::org::orekit::files::ccsds::definitions::OdMethodFacade(env->callObjectMethod(this$, mids$[mid_getMethod_969c9256ca143e68]));
              }

              jdouble OrbitDetermination::getMinPredictedEigenMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMinPredictedEigenMin_557b8123390d8d0c]);
              }

              jint OrbitDetermination::getObsAvailable() const
              {
                return env->callIntMethod(this$, mids$[mid_getObsAvailable_412668abc8d889e9]);
              }

              jint OrbitDetermination::getObsUsed() const
              {
                return env->callIntMethod(this$, mids$[mid_getObsUsed_412668abc8d889e9]);
              }

              ::java::lang::String OrbitDetermination::getPrevId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevId_3cffd47377eca18a]));
              }

              jdouble OrbitDetermination::getRecommendedOdSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRecommendedOdSpan_557b8123390d8d0c]);
              }

              jdouble OrbitDetermination::getSedr() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSedr_557b8123390d8d0c]);
              }

              ::java::util::List OrbitDetermination::getSensors() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSensors_0d9551367f7ecdef]));
              }

              jint OrbitDetermination::getSensorsN() const
              {
                return env->callIntMethod(this$, mids$[mid_getSensorsN_412668abc8d889e9]);
              }

              jint OrbitDetermination::getSolveN() const
              {
                return env->callIntMethod(this$, mids$[mid_getSolveN_412668abc8d889e9]);
              }

              ::java::util::List OrbitDetermination::getSolveStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSolveStates_0d9551367f7ecdef]));
              }

              jdouble OrbitDetermination::getTimeSinceFirstObservation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSinceFirstObservation_557b8123390d8d0c]);
              }

              jdouble OrbitDetermination::getTimeSinceLastObservation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSinceLastObservation_557b8123390d8d0c]);
              }

              jint OrbitDetermination::getTracksAvailable() const
              {
                return env->callIntMethod(this$, mids$[mid_getTracksAvailable_412668abc8d889e9]);
              }

              jint OrbitDetermination::getTracksUsed() const
              {
                return env->callIntMethod(this$, mids$[mid_getTracksUsed_412668abc8d889e9]);
              }

              jdouble OrbitDetermination::getWeightedRms() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWeightedRms_557b8123390d8d0c]);
              }

              void OrbitDetermination::setActualOdSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setActualOdSpan_10f281d777284cea], a0);
              }

              void OrbitDetermination::setConfidence(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConfidence_10f281d777284cea], a0);
              }

              void OrbitDetermination::setConsiderN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConsiderN_a3da1a935cb37f7b], a0);
              }

              void OrbitDetermination::setConsiderParameters(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConsiderParameters_4ccaedadb068bdeb], a0.this$);
              }

              void OrbitDetermination::setDataTypes(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDataTypes_4ccaedadb068bdeb], a0.this$);
              }

              void OrbitDetermination::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpoch_20affcbd28542333], a0.this$);
              }

              void OrbitDetermination::setEpochEigenInt(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenInt_10f281d777284cea], a0);
              }

              void OrbitDetermination::setEpochEigenMaj(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenMaj_10f281d777284cea], a0);
              }

              void OrbitDetermination::setEpochEigenMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenMin_10f281d777284cea], a0);
              }

              void OrbitDetermination::setGdop(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGdop_10f281d777284cea], a0);
              }

              void OrbitDetermination::setId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setId_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitDetermination::setMaxPredictedEigenMaj(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxPredictedEigenMaj_10f281d777284cea], a0);
              }

              void OrbitDetermination::setMaximumObsGap(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaximumObsGap_10f281d777284cea], a0);
              }

              void OrbitDetermination::setMethod(const ::org::orekit::files::ccsds::definitions::OdMethodFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMethod_344785fcd4d01936], a0.this$);
              }

              void OrbitDetermination::setMinPredictedEigenMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMinPredictedEigenMin_10f281d777284cea], a0);
              }

              void OrbitDetermination::setObsAvailable(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObsAvailable_a3da1a935cb37f7b], a0);
              }

              void OrbitDetermination::setObsUsed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObsUsed_a3da1a935cb37f7b], a0);
              }

              void OrbitDetermination::setPrevId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevId_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitDetermination::setRecommendedOdSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRecommendedOdSpan_10f281d777284cea], a0);
              }

              void OrbitDetermination::setSedr(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSedr_10f281d777284cea], a0);
              }

              void OrbitDetermination::setSensors(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensors_4ccaedadb068bdeb], a0.this$);
              }

              void OrbitDetermination::setSensorsN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorsN_a3da1a935cb37f7b], a0);
              }

              void OrbitDetermination::setSolveN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolveN_a3da1a935cb37f7b], a0);
              }

              void OrbitDetermination::setSolveStates(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolveStates_4ccaedadb068bdeb], a0.this$);
              }

              void OrbitDetermination::setTimeSinceFirstObservation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSinceFirstObservation_10f281d777284cea], a0);
              }

              void OrbitDetermination::setTimeSinceLastObservation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSinceLastObservation_10f281d777284cea], a0);
              }

              void OrbitDetermination::setTracksAvailable(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTracksAvailable_a3da1a935cb37f7b], a0);
              }

              void OrbitDetermination::setTracksUsed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTracksUsed_a3da1a935cb37f7b], a0);
              }

              void OrbitDetermination::setWeightedRms(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWeightedRms_10f281d777284cea], a0);
              }

              void OrbitDetermination::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
              static PyObject *t_OrbitDetermination_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitDetermination_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitDetermination_init_(t_OrbitDetermination *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitDetermination_getActualOdSpan(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getConfidence(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getConsiderN(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getConsiderParameters(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getDataTypes(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpoch(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpochEigenInt(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpochEigenMaj(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpochEigenMin(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getGdop(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getId(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMaxPredictedEigenMaj(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMaximumObsGap(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMethod(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMinPredictedEigenMin(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getObsAvailable(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getObsUsed(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getPrevId(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getRecommendedOdSpan(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSedr(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSensors(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSensorsN(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSolveN(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSolveStates(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTimeSinceFirstObservation(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTimeSinceLastObservation(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTracksAvailable(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTracksUsed(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getWeightedRms(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_setActualOdSpan(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setConfidence(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setConsiderN(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setConsiderParameters(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setDataTypes(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpoch(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpochEigenInt(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpochEigenMaj(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpochEigenMin(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setGdop(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setId(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMaxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMaximumObsGap(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMethod(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMinPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setObsAvailable(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setObsUsed(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setPrevId(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setRecommendedOdSpan(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSedr(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSensors(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSensorsN(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSolveN(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSolveStates(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTimeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTimeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTracksAvailable(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTracksUsed(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setWeightedRms(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_validate(t_OrbitDetermination *self, PyObject *args);
              static PyObject *t_OrbitDetermination_get__actualOdSpan(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__actualOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__confidence(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__confidence(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__considerN(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__considerN(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__considerParameters(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__considerParameters(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__dataTypes(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__dataTypes(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epoch(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epoch(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epochEigenInt(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epochEigenInt(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epochEigenMaj(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epochEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epochEigenMin(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epochEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__gdop(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__gdop(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__id(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__id(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__maxPredictedEigenMaj(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__maxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__maximumObsGap(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__maximumObsGap(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__method(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__method(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__minPredictedEigenMin(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__minPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__obsAvailable(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__obsAvailable(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__obsUsed(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__obsUsed(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__prevId(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__prevId(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__recommendedOdSpan(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__recommendedOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__sedr(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__sedr(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__sensors(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__sensors(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__sensorsN(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__sensorsN(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__solveN(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__solveN(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__solveStates(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__solveStates(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__timeSinceFirstObservation(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__timeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__timeSinceLastObservation(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__timeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__tracksAvailable(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__tracksAvailable(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__tracksUsed(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__tracksUsed(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__weightedRms(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__weightedRms(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitDetermination__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitDetermination, actualOdSpan),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, confidence),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, considerN),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, considerParameters),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, dataTypes),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epoch),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epochEigenInt),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epochEigenMaj),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epochEigenMin),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, gdop),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, id),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, maxPredictedEigenMaj),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, maximumObsGap),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, method),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, minPredictedEigenMin),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, obsAvailable),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, obsUsed),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, prevId),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, recommendedOdSpan),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, sedr),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, sensors),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, sensorsN),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, solveN),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, solveStates),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, timeSinceFirstObservation),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, timeSinceLastObservation),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, tracksAvailable),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, tracksUsed),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, weightedRms),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitDetermination__methods_[] = {
                DECLARE_METHOD(t_OrbitDetermination, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDetermination, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDetermination, getActualOdSpan, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getConfidence, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getConsiderN, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getConsiderParameters, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getDataTypes, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpochEigenInt, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpochEigenMaj, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpochEigenMin, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getGdop, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getId, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMaxPredictedEigenMaj, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMaximumObsGap, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMethod, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMinPredictedEigenMin, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getObsAvailable, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getObsUsed, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getPrevId, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getRecommendedOdSpan, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSedr, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSensors, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSensorsN, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSolveN, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSolveStates, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTimeSinceFirstObservation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTimeSinceLastObservation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTracksAvailable, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTracksUsed, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getWeightedRms, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, setActualOdSpan, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setConfidence, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setConsiderN, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setConsiderParameters, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setDataTypes, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpoch, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpochEigenInt, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpochEigenMaj, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpochEigenMin, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setGdop, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setId, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMaxPredictedEigenMaj, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMaximumObsGap, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMethod, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMinPredictedEigenMin, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setObsAvailable, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setObsUsed, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setPrevId, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setRecommendedOdSpan, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSedr, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSensors, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSensorsN, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSolveN, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSolveStates, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTimeSinceFirstObservation, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTimeSinceLastObservation, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTracksAvailable, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTracksUsed, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setWeightedRms, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitDetermination)[] = {
                { Py_tp_methods, t_OrbitDetermination__methods_ },
                { Py_tp_init, (void *) t_OrbitDetermination_init_ },
                { Py_tp_getset, t_OrbitDetermination__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitDetermination)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OrbitDetermination, t_OrbitDetermination, OrbitDetermination);

              void t_OrbitDetermination::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitDetermination), &PY_TYPE_DEF(OrbitDetermination), module, "OrbitDetermination", 0);
              }

              void t_OrbitDetermination::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDetermination), "class_", make_descriptor(OrbitDetermination::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDetermination), "wrapfn_", make_descriptor(t_OrbitDetermination::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDetermination), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitDetermination_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitDetermination::initializeClass, 1)))
                  return NULL;
                return t_OrbitDetermination::wrap_Object(OrbitDetermination(((t_OrbitDetermination *) arg)->object.this$));
              }
              static PyObject *t_OrbitDetermination_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitDetermination::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitDetermination_init_(t_OrbitDetermination *self, PyObject *args, PyObject *kwds)
              {
                OrbitDetermination object((jobject) NULL);

                INT_CALL(object = OrbitDetermination());
                self->object = object;

                return 0;
              }

              static PyObject *t_OrbitDetermination_getActualOdSpan(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getActualOdSpan());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getConfidence(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getConfidence());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getConsiderN(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getConsiderN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getConsiderParameters(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getConsiderParameters());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getDataTypes(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getDataTypes());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getEpoch(t_OrbitDetermination *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitDetermination_getEpochEigenInt(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochEigenInt());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getEpochEigenMaj(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochEigenMaj());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getEpochEigenMin(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochEigenMin());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getGdop(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGdop());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getId(t_OrbitDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_OrbitDetermination_getMaxPredictedEigenMaj(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaxPredictedEigenMaj());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getMaximumObsGap(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaximumObsGap());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getMethod(t_OrbitDetermination *self)
              {
                ::org::orekit::files::ccsds::definitions::OdMethodFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_OdMethodFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitDetermination_getMinPredictedEigenMin(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMinPredictedEigenMin());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getObsAvailable(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getObsAvailable());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getObsUsed(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getObsUsed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getPrevId(t_OrbitDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrevId());
                return j2p(result);
              }

              static PyObject *t_OrbitDetermination_getRecommendedOdSpan(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getRecommendedOdSpan());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getSedr(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSedr());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getSensors(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensors());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getSensorsN(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSensorsN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getSolveN(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSolveN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getSolveStates(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSolveStates());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getTimeSinceFirstObservation(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTimeSinceFirstObservation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getTimeSinceLastObservation(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTimeSinceLastObservation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getTracksAvailable(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getTracksAvailable());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getTracksUsed(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getTracksUsed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getWeightedRms(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getWeightedRms());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_setActualOdSpan(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setActualOdSpan(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setActualOdSpan", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setConfidence(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setConfidence(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConfidence", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setConsiderN(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setConsiderN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConsiderN", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setConsiderParameters(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setConsiderParameters(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConsiderParameters", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setDataTypes(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setDataTypes(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDataTypes", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setEpoch(t_OrbitDetermination *self, PyObject *arg)
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

              static PyObject *t_OrbitDetermination_setEpochEigenInt(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochEigenInt(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochEigenInt", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setEpochEigenMaj(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochEigenMaj(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochEigenMaj", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setEpochEigenMin(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochEigenMin(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochEigenMin", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setGdop(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGdop(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGdop", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setId(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setId", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMaxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaxPredictedEigenMaj(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaxPredictedEigenMaj", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMaximumObsGap(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaximumObsGap(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaximumObsGap", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMethod(t_OrbitDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::OdMethodFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OdMethodFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMethod", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMinPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMinPredictedEigenMin(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMinPredictedEigenMin", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setObsAvailable(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setObsAvailable(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setObsAvailable", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setObsUsed(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setObsUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setObsUsed", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setPrevId(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrevId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrevId", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setRecommendedOdSpan(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setRecommendedOdSpan(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRecommendedOdSpan", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSedr(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSedr(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSedr", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSensors(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setSensors(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensors", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSensorsN(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSensorsN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorsN", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSolveN(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSolveN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSolveN", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSolveStates(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setSolveStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSolveStates", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTimeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTimeSinceFirstObservation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTimeSinceFirstObservation", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTimeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTimeSinceLastObservation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTimeSinceLastObservation", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTracksAvailable(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setTracksAvailable(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTracksAvailable", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTracksUsed(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setTracksUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTracksUsed", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setWeightedRms(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setWeightedRms(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setWeightedRms", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_validate(t_OrbitDetermination *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OrbitDetermination), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OrbitDetermination_get__actualOdSpan(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getActualOdSpan());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__actualOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setActualOdSpan(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "actualOdSpan", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__confidence(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getConfidence());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__confidence(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setConfidence(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "confidence", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__considerN(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getConsiderN());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__considerN(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setConsiderN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "considerN", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__considerParameters(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getConsiderParameters());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__considerParameters(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setConsiderParameters(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "considerParameters", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__dataTypes(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getDataTypes());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__dataTypes(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDataTypes(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dataTypes", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__epoch(t_OrbitDetermination *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__epoch(t_OrbitDetermination *self, PyObject *arg, void *data)
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

              static PyObject *t_OrbitDetermination_get__epochEigenInt(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochEigenInt());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__epochEigenInt(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochEigenInt(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochEigenInt", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__epochEigenMaj(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochEigenMaj());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__epochEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochEigenMaj(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochEigenMaj", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__epochEigenMin(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochEigenMin());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__epochEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochEigenMin(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochEigenMin", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__gdop(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGdop());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__gdop(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGdop(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gdop", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__id(t_OrbitDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }
              static int t_OrbitDetermination_set__id(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "id", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__maxPredictedEigenMaj(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaxPredictedEigenMaj());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__maxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaxPredictedEigenMaj(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maxPredictedEigenMaj", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__maximumObsGap(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaximumObsGap());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__maximumObsGap(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaximumObsGap(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maximumObsGap", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__method(t_OrbitDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::OdMethodFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_OdMethodFacade::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__method(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::OdMethodFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OdMethodFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "method", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__minPredictedEigenMin(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMinPredictedEigenMin());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__minPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMinPredictedEigenMin(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "minPredictedEigenMin", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__obsAvailable(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getObsAvailable());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__obsAvailable(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setObsAvailable(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "obsAvailable", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__obsUsed(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getObsUsed());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__obsUsed(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setObsUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "obsUsed", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__prevId(t_OrbitDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrevId());
                return j2p(value);
              }
              static int t_OrbitDetermination_set__prevId(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrevId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prevId", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__recommendedOdSpan(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getRecommendedOdSpan());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__recommendedOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setRecommendedOdSpan(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "recommendedOdSpan", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__sedr(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSedr());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__sedr(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSedr(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sedr", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__sensors(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensors());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__sensors(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSensors(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensors", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__sensorsN(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSensorsN());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__sensorsN(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSensorsN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorsN", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__solveN(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSolveN());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__solveN(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSolveN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "solveN", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__solveStates(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSolveStates());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__solveStates(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSolveStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "solveStates", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__timeSinceFirstObservation(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTimeSinceFirstObservation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__timeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTimeSinceFirstObservation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "timeSinceFirstObservation", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__timeSinceLastObservation(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTimeSinceLastObservation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__timeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTimeSinceLastObservation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "timeSinceLastObservation", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__tracksAvailable(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getTracksAvailable());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__tracksAvailable(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setTracksAvailable(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tracksAvailable", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__tracksUsed(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getTracksUsed());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__tracksUsed(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setTracksUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tracksUsed", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__weightedRms(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getWeightedRms());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__weightedRms(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setWeightedRms(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "weightedRms", arg);
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
#include "org/orekit/models/earth/troposphere/SaastamoinenModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/SaastamoinenModel.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *SaastamoinenModel::class$ = NULL;
          jmethodID *SaastamoinenModel::mids$ = NULL;
          bool SaastamoinenModel::live$ = false;
          jdouble SaastamoinenModel::DEFAULT_LOW_ELEVATION_THRESHOLD = (jdouble) 0;
          ::java::lang::String *SaastamoinenModel::DELTA_R_FILE_NAME = NULL;

          jclass SaastamoinenModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/SaastamoinenModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_init$_cd0a6cb6bf2555a1] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;)V");
              mids$[mid_init$_6715d5a727bb2ee9] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getLowElevationThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getLowElevationThreshold", "()D");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_f1fd9d673b2eb4b0] = env->getStaticMethodID(cls, "getStandardModel", "()Lorg/orekit/models/earth/troposphere/SaastamoinenModel;");
              mids$[mid_pathDelay_a4fdd877b349d4a6] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_129678f244f63094] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_setLowElevationThreshold_10f281d777284cea] = env->getMethodID(cls, "setLowElevationThreshold", "(D)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_LOW_ELEVATION_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_LOW_ELEVATION_THRESHOLD");
              DELTA_R_FILE_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DELTA_R_FILE_NAME", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd0a6cb6bf2555a1, a0, a1, a2, a3.this$)) {}

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3, const ::org::orekit::data::DataProvidersManager & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6715d5a727bb2ee9, a0, a1, a2, a3.this$, a4.this$)) {}

          jdouble SaastamoinenModel::getLowElevationThreshold() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowElevationThreshold_557b8123390d8d0c]);
          }

          ::java::util::List SaastamoinenModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          SaastamoinenModel SaastamoinenModel::getStandardModel()
          {
            jclass cls = env->getClass(initializeClass);
            return SaastamoinenModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_f1fd9d673b2eb4b0]));
          }

          ::org::hipparchus::CalculusFieldElement SaastamoinenModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_a4fdd877b349d4a6], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble SaastamoinenModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_129678f244f63094], a0, a1.this$, a2.this$, a3.this$);
          }

          void SaastamoinenModel::setLowElevationThreshold(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLowElevationThreshold_10f281d777284cea], a0);
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
          static PyObject *t_SaastamoinenModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SaastamoinenModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SaastamoinenModel_init_(t_SaastamoinenModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SaastamoinenModel_getLowElevationThreshold(t_SaastamoinenModel *self);
          static PyObject *t_SaastamoinenModel_getParametersDrivers(t_SaastamoinenModel *self);
          static PyObject *t_SaastamoinenModel_getStandardModel(PyTypeObject *type);
          static PyObject *t_SaastamoinenModel_pathDelay(t_SaastamoinenModel *self, PyObject *args);
          static PyObject *t_SaastamoinenModel_setLowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg);
          static PyObject *t_SaastamoinenModel_get__lowElevationThreshold(t_SaastamoinenModel *self, void *data);
          static int t_SaastamoinenModel_set__lowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg, void *data);
          static PyObject *t_SaastamoinenModel_get__parametersDrivers(t_SaastamoinenModel *self, void *data);
          static PyObject *t_SaastamoinenModel_get__standardModel(t_SaastamoinenModel *self, void *data);
          static PyGetSetDef t_SaastamoinenModel__fields_[] = {
            DECLARE_GETSET_FIELD(t_SaastamoinenModel, lowElevationThreshold),
            DECLARE_GET_FIELD(t_SaastamoinenModel, parametersDrivers),
            DECLARE_GET_FIELD(t_SaastamoinenModel, standardModel),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SaastamoinenModel__methods_[] = {
            DECLARE_METHOD(t_SaastamoinenModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SaastamoinenModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SaastamoinenModel, getLowElevationThreshold, METH_NOARGS),
            DECLARE_METHOD(t_SaastamoinenModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_SaastamoinenModel, getStandardModel, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_SaastamoinenModel, pathDelay, METH_VARARGS),
            DECLARE_METHOD(t_SaastamoinenModel, setLowElevationThreshold, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SaastamoinenModel)[] = {
            { Py_tp_methods, t_SaastamoinenModel__methods_ },
            { Py_tp_init, (void *) t_SaastamoinenModel_init_ },
            { Py_tp_getset, t_SaastamoinenModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SaastamoinenModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SaastamoinenModel, t_SaastamoinenModel, SaastamoinenModel);

          void t_SaastamoinenModel::install(PyObject *module)
          {
            installType(&PY_TYPE(SaastamoinenModel), &PY_TYPE_DEF(SaastamoinenModel), module, "SaastamoinenModel", 0);
          }

          void t_SaastamoinenModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "class_", make_descriptor(SaastamoinenModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "wrapfn_", make_descriptor(t_SaastamoinenModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(SaastamoinenModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "DEFAULT_LOW_ELEVATION_THRESHOLD", make_descriptor(SaastamoinenModel::DEFAULT_LOW_ELEVATION_THRESHOLD));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "DELTA_R_FILE_NAME", make_descriptor(j2p(*SaastamoinenModel::DELTA_R_FILE_NAME)));
          }

          static PyObject *t_SaastamoinenModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SaastamoinenModel::initializeClass, 1)))
              return NULL;
            return t_SaastamoinenModel::wrap_Object(SaastamoinenModel(((t_SaastamoinenModel *) arg)->object.this$));
          }
          static PyObject *t_SaastamoinenModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SaastamoinenModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SaastamoinenModel_init_(t_SaastamoinenModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                SaastamoinenModel object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = SaastamoinenModel(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                ::java::lang::String a3((jobject) NULL);
                SaastamoinenModel object((jobject) NULL);

                if (!parseArgs(args, "DDDs", &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = SaastamoinenModel(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                ::java::lang::String a3((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a4((jobject) NULL);
                SaastamoinenModel object((jobject) NULL);

                if (!parseArgs(args, "DDDsk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = SaastamoinenModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_SaastamoinenModel_getLowElevationThreshold(t_SaastamoinenModel *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLowElevationThreshold());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SaastamoinenModel_getParametersDrivers(t_SaastamoinenModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_SaastamoinenModel_getStandardModel(PyTypeObject *type)
          {
            SaastamoinenModel result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::models::earth::troposphere::SaastamoinenModel::getStandardModel());
            return t_SaastamoinenModel::wrap_Object(result);
          }

          static PyObject *t_SaastamoinenModel_pathDelay(t_SaastamoinenModel *self, PyObject *args)
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

          static PyObject *t_SaastamoinenModel_setLowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setLowElevationThreshold(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLowElevationThreshold", arg);
            return NULL;
          }

          static PyObject *t_SaastamoinenModel_get__lowElevationThreshold(t_SaastamoinenModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLowElevationThreshold());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SaastamoinenModel_set__lowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setLowElevationThreshold(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "lowElevationThreshold", arg);
            return -1;
          }

          static PyObject *t_SaastamoinenModel_get__parametersDrivers(t_SaastamoinenModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SaastamoinenModel_get__standardModel(t_SaastamoinenModel *self, void *data)
          {
            SaastamoinenModel value((jobject) NULL);
            OBJ_CALL(value = self->object.getStandardModel());
            return t_SaastamoinenModel::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *IllegalStateException::class$ = NULL;
    jmethodID *IllegalStateException::mids$ = NULL;
    bool IllegalStateException::live$ = false;

    jclass IllegalStateException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/IllegalStateException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_7d9320fd2ea36122] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_0701bef404aae0c6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IllegalStateException::IllegalStateException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7d9320fd2ea36122, a0.this$)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0701bef404aae0c6, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_IllegalStateException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IllegalStateException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IllegalStateException_init_(t_IllegalStateException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IllegalStateException__methods_[] = {
      DECLARE_METHOD(t_IllegalStateException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IllegalStateException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IllegalStateException)[] = {
      { Py_tp_methods, t_IllegalStateException__methods_ },
      { Py_tp_init, (void *) t_IllegalStateException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IllegalStateException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(IllegalStateException, t_IllegalStateException, IllegalStateException);

    void t_IllegalStateException::install(PyObject *module)
    {
      installType(&PY_TYPE(IllegalStateException), &PY_TYPE_DEF(IllegalStateException), module, "IllegalStateException", 0);
    }

    void t_IllegalStateException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalStateException), "class_", make_descriptor(IllegalStateException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalStateException), "wrapfn_", make_descriptor(t_IllegalStateException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalStateException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IllegalStateException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IllegalStateException::initializeClass, 1)))
        return NULL;
      return t_IllegalStateException::wrap_Object(IllegalStateException(((t_IllegalStateException *) arg)->object.this$));
    }
    static PyObject *t_IllegalStateException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IllegalStateException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IllegalStateException_init_(t_IllegalStateException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IllegalStateException object((jobject) NULL);

          INT_CALL(object = IllegalStateException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IllegalStateException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IllegalStateException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          IllegalStateException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = IllegalStateException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          IllegalStateException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = IllegalStateException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/DateDriver.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldParameterDrivenDateIntervalDetector::class$ = NULL;
        jmethodID *FieldParameterDrivenDateIntervalDetector::mids$ = NULL;
        bool FieldParameterDrivenDateIntervalDetector::live$ = false;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::DURATION_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::START_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::STOP_SUFFIX = NULL;

        jclass FieldParameterDrivenDateIntervalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2b833fd21087965f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_9966c0d31c17c449] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDurationDriver_4194657b5e280ddc] = env->getMethodID(cls, "getDurationDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getMedianDriver_e73bc59e931ba25e] = env->getMethodID(cls, "getMedianDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStartDriver_e73bc59e931ba25e] = env->getMethodID(cls, "getStartDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStopDriver_e73bc59e931ba25e] = env->getMethodID(cls, "getStopDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_create_f408a982afeb758b] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DURATION_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DURATION_SUFFIX", "Ljava/lang/String;"));
            MEDIAN_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "MEDIAN_SUFFIX", "Ljava/lang/String;"));
            START_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "START_SUFFIX", "Ljava/lang/String;"));
            STOP_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "STOP_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldParameterDrivenDateIntervalDetector::FieldParameterDrivenDateIntervalDetector(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2b833fd21087965f, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldParameterDrivenDateIntervalDetector::FieldParameterDrivenDateIntervalDetector(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_9966c0d31c17c449, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldParameterDrivenDateIntervalDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::orekit::utils::ParameterDriver FieldParameterDrivenDateIntervalDetector::getDurationDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getDurationDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getMedianDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getMedianDriver_e73bc59e931ba25e]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getStartDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStartDriver_e73bc59e931ba25e]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getStopDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStopDriver_e73bc59e931ba25e]));
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
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_of_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args);
        static int t_FieldParameterDrivenDateIntervalDetector_init_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_g(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getDurationDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getMedianDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStartDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStopDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__durationDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__medianDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__startDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__stopDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__parameters_(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyGetSetDef t_FieldParameterDrivenDateIntervalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, durationDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, medianDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, startDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, stopDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldParameterDrivenDateIntervalDetector__methods_[] = {
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getDurationDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getMedianDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getStartDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getStopDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldParameterDrivenDateIntervalDetector)[] = {
          { Py_tp_methods, t_FieldParameterDrivenDateIntervalDetector__methods_ },
          { Py_tp_init, (void *) t_FieldParameterDrivenDateIntervalDetector_init_ },
          { Py_tp_getset, t_FieldParameterDrivenDateIntervalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldParameterDrivenDateIntervalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldParameterDrivenDateIntervalDetector, t_FieldParameterDrivenDateIntervalDetector, FieldParameterDrivenDateIntervalDetector);
        PyObject *t_FieldParameterDrivenDateIntervalDetector::wrap_Object(const FieldParameterDrivenDateIntervalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldParameterDrivenDateIntervalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldParameterDrivenDateIntervalDetector *self = (t_FieldParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldParameterDrivenDateIntervalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldParameterDrivenDateIntervalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldParameterDrivenDateIntervalDetector *self = (t_FieldParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldParameterDrivenDateIntervalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldParameterDrivenDateIntervalDetector), &PY_TYPE_DEF(FieldParameterDrivenDateIntervalDetector), module, "FieldParameterDrivenDateIntervalDetector", 0);
        }

        void t_FieldParameterDrivenDateIntervalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "class_", make_descriptor(FieldParameterDrivenDateIntervalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "wrapfn_", make_descriptor(t_FieldParameterDrivenDateIntervalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldParameterDrivenDateIntervalDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "DURATION_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::DURATION_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "MEDIAN_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "START_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::START_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "STOP_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::STOP_SUFFIX)));
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldParameterDrivenDateIntervalDetector::initializeClass, 1)))
            return NULL;
          return t_FieldParameterDrivenDateIntervalDetector::wrap_Object(FieldParameterDrivenDateIntervalDetector(((t_FieldParameterDrivenDateIntervalDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldParameterDrivenDateIntervalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_of_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldParameterDrivenDateIntervalDetector_init_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              FieldParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "Kskk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldParameterDrivenDateIntervalDetector(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              FieldParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "KskD", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldParameterDrivenDateIntervalDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_g(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldParameterDrivenDateIntervalDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getDurationDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getMedianDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStartDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStopDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__parameters_(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__durationDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__medianDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__startDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__stopDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/PyhonData.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *PyhonData::class$ = NULL;
          jmethodID *PyhonData::mids$ = NULL;
          bool PyhonData::live$ = false;

          jclass PyhonData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/PyhonData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PyhonData::PyhonData() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PyhonData::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PyhonData::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PyhonData::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_PyhonData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PyhonData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PyhonData_init_(t_PyhonData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PyhonData_finalize(t_PyhonData *self);
          static PyObject *t_PyhonData_pythonExtension(t_PyhonData *self, PyObject *args);
          static void JNICALL t_PyhonData_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PyhonData_validate1(JNIEnv *jenv, jobject jobj, jdouble a0);
          static PyObject *t_PyhonData_get__self(t_PyhonData *self, void *data);
          static PyGetSetDef t_PyhonData__fields_[] = {
            DECLARE_GET_FIELD(t_PyhonData, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PyhonData__methods_[] = {
            DECLARE_METHOD(t_PyhonData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PyhonData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PyhonData, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PyhonData, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PyhonData)[] = {
            { Py_tp_methods, t_PyhonData__methods_ },
            { Py_tp_init, (void *) t_PyhonData_init_ },
            { Py_tp_getset, t_PyhonData__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PyhonData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PyhonData, t_PyhonData, PyhonData);

          void t_PyhonData::install(PyObject *module)
          {
            installType(&PY_TYPE(PyhonData), &PY_TYPE_DEF(PyhonData), module, "PyhonData", 1);
          }

          void t_PyhonData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PyhonData), "class_", make_descriptor(PyhonData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PyhonData), "wrapfn_", make_descriptor(t_PyhonData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PyhonData), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PyhonData::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PyhonData_pythonDecRef0 },
              { "validate", "(D)V", (void *) t_PyhonData_validate1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PyhonData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PyhonData::initializeClass, 1)))
              return NULL;
            return t_PyhonData::wrap_Object(PyhonData(((t_PyhonData *) arg)->object.this$));
          }
          static PyObject *t_PyhonData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PyhonData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PyhonData_init_(t_PyhonData *self, PyObject *args, PyObject *kwds)
          {
            PyhonData object((jobject) NULL);

            INT_CALL(object = PyhonData());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PyhonData_finalize(t_PyhonData *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PyhonData_pythonExtension(t_PyhonData *self, PyObject *args)
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

          static void JNICALL t_PyhonData_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PyhonData::mids$[PyhonData::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PyhonData::mids$[PyhonData::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PyhonData_validate1(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PyhonData::mids$[PyhonData::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "validate", "d", (double) a0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PyhonData_get__self(t_PyhonData *self, void *data)
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
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovariance::class$ = NULL;
      jmethodID *StateCovariance::mids$ = NULL;
      bool StateCovariance::live$ = false;
      jint StateCovariance::STATE_DIMENSION = (jint) 0;

      jclass StateCovariance::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovariance");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b1688c6adc38bffb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_ab299c366767a21a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_changeCovarianceFrame_f34a2de6a1678f3a] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_changeCovarianceFrame_0326c1621cadb083] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/LOF;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_changeCovarianceType_9bc86cc0bda1675d] = env->getMethodID(cls, "changeCovarianceType", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_checkFrameAndOrbitTypeConsistency_fa21e9c7a1011dd1] = env->getStaticMethodID(cls, "checkFrameAndOrbitTypeConsistency", "(Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;)V");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getLOF_13b82f8eb71f0f31] = env->getMethodID(cls, "getLOF", "()Lorg/orekit/frames/LOF;");
          mids$[mid_getMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStm_4ff3f8635ed236f0] = env->getStaticMethodID(cls, "getStm", "(Lorg/orekit/orbits/Orbit;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_shiftedBy_521921f1a20e36e2] = env->getMethodID(cls, "shiftedBy", "(Lorg/orekit/orbits/Orbit;D)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovariance::StateCovariance(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::LOF & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b1688c6adc38bffb, a0.this$, a1.this$, a2.this$)) {}

      StateCovariance::StateCovariance(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab299c366767a21a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      StateCovariance StateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_f34a2de6a1678f3a], a0.this$, a1.this$));
      }

      StateCovariance StateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::LOF & a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_0326c1621cadb083], a0.this$, a1.this$));
      }

      StateCovariance StateCovariance::changeCovarianceType(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceType_9bc86cc0bda1675d], a0.this$, a1.this$, a2.this$));
      }

      void StateCovariance::checkFrameAndOrbitTypeConsistency(const ::org::orekit::frames::Frame & a0, const ::org::orekit::orbits::OrbitType & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFrameAndOrbitTypeConsistency_fa21e9c7a1011dd1], a0.this$, a1.this$);
      }

      ::org::orekit::time::AbsoluteDate StateCovariance::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      ::org::orekit::frames::Frame StateCovariance::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::frames::LOF StateCovariance::getLOF() const
      {
        return ::org::orekit::frames::LOF(env->callObjectMethod(this$, mids$[mid_getLOF_13b82f8eb71f0f31]));
      }

      ::org::hipparchus::linear::RealMatrix StateCovariance::getMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_70a207fcbc031df2]));
      }

      ::org::orekit::orbits::OrbitType StateCovariance::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_2cea2a2cb3e02091]));
      }

      ::org::orekit::orbits::PositionAngleType StateCovariance::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
      }

      ::org::hipparchus::linear::RealMatrix StateCovariance::getStm(const ::org::orekit::orbits::Orbit & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_getStm_4ff3f8635ed236f0], a0.this$, a1));
      }

      StateCovariance StateCovariance::shiftedBy(const ::org::orekit::orbits::Orbit & a0, jdouble a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_shiftedBy_521921f1a20e36e2], a0.this$, a1));
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
      static PyObject *t_StateCovariance_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovariance_instance_(PyTypeObject *type, PyObject *arg);
      static int t_StateCovariance_init_(t_StateCovariance *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovariance_changeCovarianceFrame(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_changeCovarianceType(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_checkFrameAndOrbitTypeConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_StateCovariance_getDate(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getFrame(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getLOF(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getMatrix(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getOrbitType(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getPositionAngleType(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getStm(PyTypeObject *type, PyObject *args);
      static PyObject *t_StateCovariance_shiftedBy(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_get__date(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__frame(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__lOF(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__matrix(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__orbitType(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__positionAngleType(t_StateCovariance *self, void *data);
      static PyGetSetDef t_StateCovariance__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovariance, date),
        DECLARE_GET_FIELD(t_StateCovariance, frame),
        DECLARE_GET_FIELD(t_StateCovariance, lOF),
        DECLARE_GET_FIELD(t_StateCovariance, matrix),
        DECLARE_GET_FIELD(t_StateCovariance, orbitType),
        DECLARE_GET_FIELD(t_StateCovariance, positionAngleType),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovariance__methods_[] = {
        DECLARE_METHOD(t_StateCovariance, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, changeCovarianceFrame, METH_VARARGS),
        DECLARE_METHOD(t_StateCovariance, changeCovarianceType, METH_VARARGS),
        DECLARE_METHOD(t_StateCovariance, checkFrameAndOrbitTypeConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, getDate, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getLOF, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getMatrix, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getStm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, shiftedBy, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovariance)[] = {
        { Py_tp_methods, t_StateCovariance__methods_ },
        { Py_tp_init, (void *) t_StateCovariance_init_ },
        { Py_tp_getset, t_StateCovariance__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovariance)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateCovariance, t_StateCovariance, StateCovariance);

      void t_StateCovariance::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovariance), &PY_TYPE_DEF(StateCovariance), module, "StateCovariance", 0);
      }

      void t_StateCovariance::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "class_", make_descriptor(StateCovariance::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "wrapfn_", make_descriptor(t_StateCovariance::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "boxfn_", make_descriptor(boxObject));
        env->getClass(StateCovariance::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "STATE_DIMENSION", make_descriptor(StateCovariance::STATE_DIMENSION));
      }

      static PyObject *t_StateCovariance_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovariance::initializeClass, 1)))
          return NULL;
        return t_StateCovariance::wrap_Object(StateCovariance(((t_StateCovariance *) arg)->object.this$));
      }
      static PyObject *t_StateCovariance_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovariance::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_StateCovariance_init_(t_StateCovariance *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::LOF a2((jobject) NULL);
            StateCovariance object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = StateCovariance(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovariance object((jobject) NULL);

            if (!parseArgs(args, "kkkKK", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovariance(a0, a1, a2, a3, a4));
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

      static PyObject *t_StateCovariance_changeCovarianceFrame(t_StateCovariance *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_StateCovariance::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_StateCovariance::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceFrame", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_changeCovarianceType(t_StateCovariance *self, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        ::org::orekit::orbits::OrbitType a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
        PyTypeObject **p2;
        StateCovariance result((jobject) NULL);

        if (!parseArgs(args, "kKK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.changeCovarianceType(a0, a1, a2));
          return t_StateCovariance::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceType", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_checkFrameAndOrbitTypeConsistency(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::orbits::OrbitType a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
        {
          OBJ_CALL(::org::orekit::propagation::StateCovariance::checkFrameAndOrbitTypeConsistency(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkFrameAndOrbitTypeConsistency", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_getDate(t_StateCovariance *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getFrame(t_StateCovariance *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getLOF(t_StateCovariance *self)
      {
        ::org::orekit::frames::LOF result((jobject) NULL);
        OBJ_CALL(result = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getMatrix(t_StateCovariance *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getOrbitType(t_StateCovariance *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getPositionAngleType(t_StateCovariance *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getStm(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        jdouble a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::propagation::StateCovariance::getStm(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getStm", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_shiftedBy(t_StateCovariance *self, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        jdouble a1;
        StateCovariance result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0, a1));
          return t_StateCovariance::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_get__date(t_StateCovariance *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__frame(t_StateCovariance *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__lOF(t_StateCovariance *self, void *data)
      {
        ::org::orekit::frames::LOF value((jobject) NULL);
        OBJ_CALL(value = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__matrix(t_StateCovariance *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__orbitType(t_StateCovariance *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__positionAngleType(t_StateCovariance *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitDeterminationKey::class$ = NULL;
              jmethodID *OrbitDeterminationKey::mids$ = NULL;
              bool OrbitDeterminationKey::live$ = false;
              OrbitDeterminationKey *OrbitDeterminationKey::ACTUAL_OD_SPAN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::COMMENT = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::CONSIDER_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::CONSIDER_PARAMS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DATA_TYPES = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DAYS_SINCE_FIRST_OBS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DAYS_SINCE_LAST_OBS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::GDOP = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::MAXIMUM_OBS_GAP = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OBS_AVAILABLE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OBS_USED = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_CONFIDENCE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGINT = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGMAJ = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGMIN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_ID = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_MAX_PRED_EIGMAJ = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_METHOD = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_MIN_PRED_EIGMIN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_PREV_ID = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::RECOMMENDED_OD_SPAN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SEDR = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SENSORS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SENSORS_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SOLVE_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SOLVE_STATES = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::TRACKS_AVAILABLE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::TRACKS_USED = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::WEIGHTED_RMS = NULL;

              jclass OrbitDeterminationKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_106ad4cf2988349f] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;)Z");
                  mids$[mid_valueOf_6aedeeb40c743b6d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;");
                  mids$[mid_values_6315d5d95b5ccc70] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACTUAL_OD_SPAN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "ACTUAL_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  COMMENT = new OrbitDeterminationKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  CONSIDER_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "CONSIDER_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  CONSIDER_PARAMS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "CONSIDER_PARAMS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DATA_TYPES = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DATA_TYPES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DAYS_SINCE_FIRST_OBS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DAYS_SINCE_FIRST_OBS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DAYS_SINCE_LAST_OBS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DAYS_SINCE_LAST_OBS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  GDOP = new OrbitDeterminationKey(env->getStaticObjectField(cls, "GDOP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  MAXIMUM_OBS_GAP = new OrbitDeterminationKey(env->getStaticObjectField(cls, "MAXIMUM_OBS_GAP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OBS_AVAILABLE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OBS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OBS_USED = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OBS_USED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_CONFIDENCE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGINT = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGINT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGMAJ = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGMAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGMIN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGMIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_ID = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_MAX_PRED_EIGMAJ = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_MAX_PRED_EIGMAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_METHOD = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_MIN_PRED_EIGMIN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_MIN_PRED_EIGMIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_PREV_ID = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  RECOMMENDED_OD_SPAN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "RECOMMENDED_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SEDR = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SEDR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SENSORS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SENSORS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SENSORS_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SENSORS_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SOLVE_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SOLVE_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SOLVE_STATES = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SOLVE_STATES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  TRACKS_AVAILABLE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "TRACKS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  TRACKS_USED = new OrbitDeterminationKey(env->getStaticObjectField(cls, "TRACKS_USED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  WEIGHTED_RMS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "WEIGHTED_RMS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitDeterminationKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_106ad4cf2988349f], a0.this$, a1.this$, a2.this$);
              }

              OrbitDeterminationKey OrbitDeterminationKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitDeterminationKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6aedeeb40c743b6d], a0.this$));
              }

              JArray< OrbitDeterminationKey > OrbitDeterminationKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitDeterminationKey >(env->callStaticObjectMethod(cls, mids$[mid_values_6315d5d95b5ccc70]));
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
              static PyObject *t_OrbitDeterminationKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitDeterminationKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitDeterminationKey_of_(t_OrbitDeterminationKey *self, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_process(t_OrbitDeterminationKey *self, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_values(PyTypeObject *type);
              static PyObject *t_OrbitDeterminationKey_get__parameters_(t_OrbitDeterminationKey *self, void *data);
              static PyGetSetDef t_OrbitDeterminationKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitDeterminationKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitDeterminationKey__methods_[] = {
                DECLARE_METHOD(t_OrbitDeterminationKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitDeterminationKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitDeterminationKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitDeterminationKey)[] = {
                { Py_tp_methods, t_OrbitDeterminationKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitDeterminationKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitDeterminationKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitDeterminationKey, t_OrbitDeterminationKey, OrbitDeterminationKey);
              PyObject *t_OrbitDeterminationKey::wrap_Object(const OrbitDeterminationKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitDeterminationKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitDeterminationKey *self = (t_OrbitDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitDeterminationKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitDeterminationKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitDeterminationKey *self = (t_OrbitDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitDeterminationKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitDeterminationKey), &PY_TYPE_DEF(OrbitDeterminationKey), module, "OrbitDeterminationKey", 0);
              }

              void t_OrbitDeterminationKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "class_", make_descriptor(OrbitDeterminationKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "wrapfn_", make_descriptor(t_OrbitDeterminationKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitDeterminationKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "ACTUAL_OD_SPAN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::ACTUAL_OD_SPAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "COMMENT", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "CONSIDER_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::CONSIDER_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "CONSIDER_PARAMS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::CONSIDER_PARAMS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DATA_TYPES", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DATA_TYPES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DAYS_SINCE_FIRST_OBS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DAYS_SINCE_FIRST_OBS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DAYS_SINCE_LAST_OBS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DAYS_SINCE_LAST_OBS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "GDOP", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::GDOP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "MAXIMUM_OBS_GAP", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::MAXIMUM_OBS_GAP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OBS_AVAILABLE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OBS_AVAILABLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OBS_USED", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OBS_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_CONFIDENCE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_CONFIDENCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGINT", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGINT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGMAJ", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGMAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGMIN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGMIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_ID", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_MAX_PRED_EIGMAJ", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_MAX_PRED_EIGMAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_METHOD", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_MIN_PRED_EIGMIN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_MIN_PRED_EIGMIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_PREV_ID", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "RECOMMENDED_OD_SPAN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::RECOMMENDED_OD_SPAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SEDR", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SEDR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SENSORS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SENSORS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SENSORS_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SENSORS_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SOLVE_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SOLVE_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SOLVE_STATES", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SOLVE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "TRACKS_AVAILABLE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::TRACKS_AVAILABLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "TRACKS_USED", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::TRACKS_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "WEIGHTED_RMS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::WEIGHTED_RMS)));
              }

              static PyObject *t_OrbitDeterminationKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitDeterminationKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitDeterminationKey::wrap_Object(OrbitDeterminationKey(((t_OrbitDeterminationKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitDeterminationKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitDeterminationKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitDeterminationKey_of_(t_OrbitDeterminationKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitDeterminationKey_process(t_OrbitDeterminationKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitDeterminationKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitDeterminationKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDeterminationKey::valueOf(a0));
                  return t_OrbitDeterminationKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitDeterminationKey_values(PyTypeObject *type)
              {
                JArray< OrbitDeterminationKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDeterminationKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitDeterminationKey::wrap_jobject);
              }
              static PyObject *t_OrbitDeterminationKey_get__parameters_(t_OrbitDeterminationKey *self, void *data)
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
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Arc::class$ = NULL;
          jmethodID *Arc::mids$ = NULL;
          bool Arc::live$ = false;

          jclass Arc::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Arc");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_checkPoint_7a14c5735bc0a803] = env->getMethodID(cls, "checkPoint", "(D)Lorg/hipparchus/geometry/partitioning/Region$Location;");
              mids$[mid_getBarycenter_557b8123390d8d0c] = env->getMethodID(cls, "getBarycenter", "()D");
              mids$[mid_getInf_557b8123390d8d0c] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getOffset_badaa03339491dac] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;)D");
              mids$[mid_getOffset_7e960cd6eee376d8] = env->getMethodID(cls, "getOffset", "(D)D");
              mids$[mid_getSize_557b8123390d8d0c] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_getSup_557b8123390d8d0c] = env->getMethodID(cls, "getSup", "()D");
              mids$[mid_getTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getTolerance", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Arc::Arc(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

          ::org::hipparchus::geometry::partitioning::Region$Location Arc::checkPoint(jdouble a0) const
          {
            return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_7a14c5735bc0a803], a0));
          }

          jdouble Arc::getBarycenter() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBarycenter_557b8123390d8d0c]);
          }

          jdouble Arc::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_557b8123390d8d0c]);
          }

          jdouble Arc::getOffset(const ::org::hipparchus::geometry::spherical::oned::S1Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_badaa03339491dac], a0.this$);
          }

          jdouble Arc::getOffset(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_7e960cd6eee376d8], a0);
          }

          jdouble Arc::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_557b8123390d8d0c]);
          }

          jdouble Arc::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_557b8123390d8d0c]);
          }

          jdouble Arc::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_557b8123390d8d0c]);
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
          static PyObject *t_Arc_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Arc_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Arc_init_(t_Arc *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Arc_checkPoint(t_Arc *self, PyObject *arg);
          static PyObject *t_Arc_getBarycenter(t_Arc *self);
          static PyObject *t_Arc_getInf(t_Arc *self);
          static PyObject *t_Arc_getOffset(t_Arc *self, PyObject *args);
          static PyObject *t_Arc_getSize(t_Arc *self);
          static PyObject *t_Arc_getSup(t_Arc *self);
          static PyObject *t_Arc_getTolerance(t_Arc *self);
          static PyObject *t_Arc_get__barycenter(t_Arc *self, void *data);
          static PyObject *t_Arc_get__inf(t_Arc *self, void *data);
          static PyObject *t_Arc_get__size(t_Arc *self, void *data);
          static PyObject *t_Arc_get__sup(t_Arc *self, void *data);
          static PyObject *t_Arc_get__tolerance(t_Arc *self, void *data);
          static PyGetSetDef t_Arc__fields_[] = {
            DECLARE_GET_FIELD(t_Arc, barycenter),
            DECLARE_GET_FIELD(t_Arc, inf),
            DECLARE_GET_FIELD(t_Arc, size),
            DECLARE_GET_FIELD(t_Arc, sup),
            DECLARE_GET_FIELD(t_Arc, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Arc__methods_[] = {
            DECLARE_METHOD(t_Arc, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Arc, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Arc, checkPoint, METH_O),
            DECLARE_METHOD(t_Arc, getBarycenter, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getInf, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Arc, getSize, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getSup, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getTolerance, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Arc)[] = {
            { Py_tp_methods, t_Arc__methods_ },
            { Py_tp_init, (void *) t_Arc_init_ },
            { Py_tp_getset, t_Arc__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Arc)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Arc, t_Arc, Arc);

          void t_Arc::install(PyObject *module)
          {
            installType(&PY_TYPE(Arc), &PY_TYPE_DEF(Arc), module, "Arc", 0);
          }

          void t_Arc::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "class_", make_descriptor(Arc::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "wrapfn_", make_descriptor(t_Arc::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Arc_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Arc::initializeClass, 1)))
              return NULL;
            return t_Arc::wrap_Object(Arc(((t_Arc *) arg)->object.this$));
          }
          static PyObject *t_Arc_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Arc::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Arc_init_(t_Arc *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            Arc object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = Arc(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Arc_checkPoint(t_Arc *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.checkPoint(a0));
              return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "checkPoint", arg);
            return NULL;
          }

          static PyObject *t_Arc_getBarycenter(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBarycenter());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getInf(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getOffset(t_Arc *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::spherical::oned::S1Point a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::spherical::oned::S1Point::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Arc_getSize(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSize());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getSup(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getTolerance(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_get__barycenter(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBarycenter());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__inf(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__size(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__sup(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__tolerance(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ThrustDirectionProvider::class$ = NULL;
          jmethodID *ThrustDirectionProvider::mids$ = NULL;
          bool ThrustDirectionProvider::live$ = false;

          jclass ThrustDirectionProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_computeThrustDirection_102e5d95cb32da9e] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustDirectionProvider::computeThrustDirection(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_computeThrustDirection_102e5d95cb32da9e], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_ThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionProvider_computeThrustDirection(t_ThrustDirectionProvider *self, PyObject *args);

          static PyMethodDef t_ThrustDirectionProvider__methods_[] = {
            DECLARE_METHOD(t_ThrustDirectionProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionProvider, computeThrustDirection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ThrustDirectionProvider)[] = {
            { Py_tp_methods, t_ThrustDirectionProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ThrustDirectionProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ThrustDirectionProvider, t_ThrustDirectionProvider, ThrustDirectionProvider);

          void t_ThrustDirectionProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ThrustDirectionProvider), &PY_TYPE_DEF(ThrustDirectionProvider), module, "ThrustDirectionProvider", 0);
          }

          void t_ThrustDirectionProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionProvider), "class_", make_descriptor(ThrustDirectionProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionProvider), "wrapfn_", make_descriptor(t_ThrustDirectionProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ThrustDirectionProvider::initializeClass, 1)))
              return NULL;
            return t_ThrustDirectionProvider::wrap_Object(ThrustDirectionProvider(((t_ThrustDirectionProvider *) arg)->object.this$));
          }
          static PyObject *t_ThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ThrustDirectionProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ThrustDirectionProvider_computeThrustDirection(t_ThrustDirectionProvider *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *RTNCovariance::class$ = NULL;
            jmethodID *RTNCovariance::mids$ = NULL;
            bool RTNCovariance::live$ = false;

            jclass RTNCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/RTNCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getCdrgdrg_557b8123390d8d0c] = env->getMethodID(cls, "getCdrgdrg", "()D");
                mids$[mid_getCdrgn_557b8123390d8d0c] = env->getMethodID(cls, "getCdrgn", "()D");
                mids$[mid_getCdrgndot_557b8123390d8d0c] = env->getMethodID(cls, "getCdrgndot", "()D");
                mids$[mid_getCdrgr_557b8123390d8d0c] = env->getMethodID(cls, "getCdrgr", "()D");
                mids$[mid_getCdrgrdot_557b8123390d8d0c] = env->getMethodID(cls, "getCdrgrdot", "()D");
                mids$[mid_getCdrgt_557b8123390d8d0c] = env->getMethodID(cls, "getCdrgt", "()D");
                mids$[mid_getCdrgtdot_557b8123390d8d0c] = env->getMethodID(cls, "getCdrgtdot", "()D");
                mids$[mid_getCndotn_557b8123390d8d0c] = env->getMethodID(cls, "getCndotn", "()D");
                mids$[mid_getCndotndot_557b8123390d8d0c] = env->getMethodID(cls, "getCndotndot", "()D");
                mids$[mid_getCndotr_557b8123390d8d0c] = env->getMethodID(cls, "getCndotr", "()D");
                mids$[mid_getCndotrdot_557b8123390d8d0c] = env->getMethodID(cls, "getCndotrdot", "()D");
                mids$[mid_getCndott_557b8123390d8d0c] = env->getMethodID(cls, "getCndott", "()D");
                mids$[mid_getCndottdot_557b8123390d8d0c] = env->getMethodID(cls, "getCndottdot", "()D");
                mids$[mid_getCnn_557b8123390d8d0c] = env->getMethodID(cls, "getCnn", "()D");
                mids$[mid_getCnr_557b8123390d8d0c] = env->getMethodID(cls, "getCnr", "()D");
                mids$[mid_getCnt_557b8123390d8d0c] = env->getMethodID(cls, "getCnt", "()D");
                mids$[mid_getCrdotn_557b8123390d8d0c] = env->getMethodID(cls, "getCrdotn", "()D");
                mids$[mid_getCrdotr_557b8123390d8d0c] = env->getMethodID(cls, "getCrdotr", "()D");
                mids$[mid_getCrdotrdot_557b8123390d8d0c] = env->getMethodID(cls, "getCrdotrdot", "()D");
                mids$[mid_getCrdott_557b8123390d8d0c] = env->getMethodID(cls, "getCrdott", "()D");
                mids$[mid_getCrr_557b8123390d8d0c] = env->getMethodID(cls, "getCrr", "()D");
                mids$[mid_getCsrpdrg_557b8123390d8d0c] = env->getMethodID(cls, "getCsrpdrg", "()D");
                mids$[mid_getCsrpn_557b8123390d8d0c] = env->getMethodID(cls, "getCsrpn", "()D");
                mids$[mid_getCsrpndot_557b8123390d8d0c] = env->getMethodID(cls, "getCsrpndot", "()D");
                mids$[mid_getCsrpr_557b8123390d8d0c] = env->getMethodID(cls, "getCsrpr", "()D");
                mids$[mid_getCsrprdot_557b8123390d8d0c] = env->getMethodID(cls, "getCsrprdot", "()D");
                mids$[mid_getCsrpsrp_557b8123390d8d0c] = env->getMethodID(cls, "getCsrpsrp", "()D");
                mids$[mid_getCsrpt_557b8123390d8d0c] = env->getMethodID(cls, "getCsrpt", "()D");
                mids$[mid_getCsrptdot_557b8123390d8d0c] = env->getMethodID(cls, "getCsrptdot", "()D");
                mids$[mid_getCtdotn_557b8123390d8d0c] = env->getMethodID(cls, "getCtdotn", "()D");
                mids$[mid_getCtdotr_557b8123390d8d0c] = env->getMethodID(cls, "getCtdotr", "()D");
                mids$[mid_getCtdotrdot_557b8123390d8d0c] = env->getMethodID(cls, "getCtdotrdot", "()D");
                mids$[mid_getCtdott_557b8123390d8d0c] = env->getMethodID(cls, "getCtdott", "()D");
                mids$[mid_getCtdottdot_557b8123390d8d0c] = env->getMethodID(cls, "getCtdottdot", "()D");
                mids$[mid_getCthrdrg_557b8123390d8d0c] = env->getMethodID(cls, "getCthrdrg", "()D");
                mids$[mid_getCthrn_557b8123390d8d0c] = env->getMethodID(cls, "getCthrn", "()D");
                mids$[mid_getCthrndot_557b8123390d8d0c] = env->getMethodID(cls, "getCthrndot", "()D");
                mids$[mid_getCthrr_557b8123390d8d0c] = env->getMethodID(cls, "getCthrr", "()D");
                mids$[mid_getCthrrdot_557b8123390d8d0c] = env->getMethodID(cls, "getCthrrdot", "()D");
                mids$[mid_getCthrsrp_557b8123390d8d0c] = env->getMethodID(cls, "getCthrsrp", "()D");
                mids$[mid_getCthrt_557b8123390d8d0c] = env->getMethodID(cls, "getCthrt", "()D");
                mids$[mid_getCthrtdot_557b8123390d8d0c] = env->getMethodID(cls, "getCthrtdot", "()D");
                mids$[mid_getCthrthr_557b8123390d8d0c] = env->getMethodID(cls, "getCthrthr", "()D");
                mids$[mid_getCtr_557b8123390d8d0c] = env->getMethodID(cls, "getCtr", "()D");
                mids$[mid_getCtt_557b8123390d8d0c] = env->getMethodID(cls, "getCtt", "()D");
                mids$[mid_getRTNCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getRTNCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_setCdrgdrg_10f281d777284cea] = env->getMethodID(cls, "setCdrgdrg", "(D)V");
                mids$[mid_setCdrgn_10f281d777284cea] = env->getMethodID(cls, "setCdrgn", "(D)V");
                mids$[mid_setCdrgndot_10f281d777284cea] = env->getMethodID(cls, "setCdrgndot", "(D)V");
                mids$[mid_setCdrgr_10f281d777284cea] = env->getMethodID(cls, "setCdrgr", "(D)V");
                mids$[mid_setCdrgrdot_10f281d777284cea] = env->getMethodID(cls, "setCdrgrdot", "(D)V");
                mids$[mid_setCdrgt_10f281d777284cea] = env->getMethodID(cls, "setCdrgt", "(D)V");
                mids$[mid_setCdrgtdot_10f281d777284cea] = env->getMethodID(cls, "setCdrgtdot", "(D)V");
                mids$[mid_setCndotn_10f281d777284cea] = env->getMethodID(cls, "setCndotn", "(D)V");
                mids$[mid_setCndotndot_10f281d777284cea] = env->getMethodID(cls, "setCndotndot", "(D)V");
                mids$[mid_setCndotr_10f281d777284cea] = env->getMethodID(cls, "setCndotr", "(D)V");
                mids$[mid_setCndotrdot_10f281d777284cea] = env->getMethodID(cls, "setCndotrdot", "(D)V");
                mids$[mid_setCndott_10f281d777284cea] = env->getMethodID(cls, "setCndott", "(D)V");
                mids$[mid_setCndottdot_10f281d777284cea] = env->getMethodID(cls, "setCndottdot", "(D)V");
                mids$[mid_setCnn_10f281d777284cea] = env->getMethodID(cls, "setCnn", "(D)V");
                mids$[mid_setCnr_10f281d777284cea] = env->getMethodID(cls, "setCnr", "(D)V");
                mids$[mid_setCnt_10f281d777284cea] = env->getMethodID(cls, "setCnt", "(D)V");
                mids$[mid_setCovarianceMatrixEntry_754312f3734d6e2f] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setCrdotn_10f281d777284cea] = env->getMethodID(cls, "setCrdotn", "(D)V");
                mids$[mid_setCrdotr_10f281d777284cea] = env->getMethodID(cls, "setCrdotr", "(D)V");
                mids$[mid_setCrdotrdot_10f281d777284cea] = env->getMethodID(cls, "setCrdotrdot", "(D)V");
                mids$[mid_setCrdott_10f281d777284cea] = env->getMethodID(cls, "setCrdott", "(D)V");
                mids$[mid_setCrr_10f281d777284cea] = env->getMethodID(cls, "setCrr", "(D)V");
                mids$[mid_setCsrpdrg_10f281d777284cea] = env->getMethodID(cls, "setCsrpdrg", "(D)V");
                mids$[mid_setCsrpn_10f281d777284cea] = env->getMethodID(cls, "setCsrpn", "(D)V");
                mids$[mid_setCsrpndot_10f281d777284cea] = env->getMethodID(cls, "setCsrpndot", "(D)V");
                mids$[mid_setCsrpr_10f281d777284cea] = env->getMethodID(cls, "setCsrpr", "(D)V");
                mids$[mid_setCsrprdot_10f281d777284cea] = env->getMethodID(cls, "setCsrprdot", "(D)V");
                mids$[mid_setCsrpsrp_10f281d777284cea] = env->getMethodID(cls, "setCsrpsrp", "(D)V");
                mids$[mid_setCsrpt_10f281d777284cea] = env->getMethodID(cls, "setCsrpt", "(D)V");
                mids$[mid_setCsrptdot_10f281d777284cea] = env->getMethodID(cls, "setCsrptdot", "(D)V");
                mids$[mid_setCtdotn_10f281d777284cea] = env->getMethodID(cls, "setCtdotn", "(D)V");
                mids$[mid_setCtdotr_10f281d777284cea] = env->getMethodID(cls, "setCtdotr", "(D)V");
                mids$[mid_setCtdotrdot_10f281d777284cea] = env->getMethodID(cls, "setCtdotrdot", "(D)V");
                mids$[mid_setCtdott_10f281d777284cea] = env->getMethodID(cls, "setCtdott", "(D)V");
                mids$[mid_setCtdottdot_10f281d777284cea] = env->getMethodID(cls, "setCtdottdot", "(D)V");
                mids$[mid_setCthrdrg_10f281d777284cea] = env->getMethodID(cls, "setCthrdrg", "(D)V");
                mids$[mid_setCthrn_10f281d777284cea] = env->getMethodID(cls, "setCthrn", "(D)V");
                mids$[mid_setCthrndot_10f281d777284cea] = env->getMethodID(cls, "setCthrndot", "(D)V");
                mids$[mid_setCthrr_10f281d777284cea] = env->getMethodID(cls, "setCthrr", "(D)V");
                mids$[mid_setCthrrdot_10f281d777284cea] = env->getMethodID(cls, "setCthrrdot", "(D)V");
                mids$[mid_setCthrsrp_10f281d777284cea] = env->getMethodID(cls, "setCthrsrp", "(D)V");
                mids$[mid_setCthrt_10f281d777284cea] = env->getMethodID(cls, "setCthrt", "(D)V");
                mids$[mid_setCthrtdot_10f281d777284cea] = env->getMethodID(cls, "setCthrtdot", "(D)V");
                mids$[mid_setCthrthr_10f281d777284cea] = env->getMethodID(cls, "setCthrthr", "(D)V");
                mids$[mid_setCtr_10f281d777284cea] = env->getMethodID(cls, "setCtr", "(D)V");
                mids$[mid_setCtt_10f281d777284cea] = env->getMethodID(cls, "setCtt", "(D)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RTNCovariance::RTNCovariance() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jdouble RTNCovariance::getCdrgdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgdrg_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCdrgn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgn_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCdrgndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgndot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCdrgr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgr_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCdrgrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgrdot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCdrgt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgt_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCdrgtdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgtdot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCndotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotn_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCndotndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotndot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCndotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotr_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCndotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotrdot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCndott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndott_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCndottdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndottdot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCnn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnn_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCnr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnr_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCnt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnt_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCrdotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotn_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCrdotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotr_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCrdotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotrdot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCrdott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdott_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCrr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrr_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCsrpdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpdrg_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCsrpn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpn_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCsrpndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpndot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCsrpr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpr_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCsrprdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrprdot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCsrpsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpsrp_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCsrpt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpt_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCsrptdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrptdot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCtdotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotn_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCtdotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotr_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCtdotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotrdot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCtdott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdott_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCtdottdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdottdot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCthrdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrdrg_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCthrn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrn_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCthrndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrndot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCthrr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrr_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCthrrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrrdot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCthrsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrsrp_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCthrt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrt_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCthrtdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrtdot_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCthrthr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrthr_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCtr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr_557b8123390d8d0c]);
            }

            jdouble RTNCovariance::getCtt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtt_557b8123390d8d0c]);
            }

            ::org::hipparchus::linear::RealMatrix RTNCovariance::getRTNCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRTNCovarianceMatrix_70a207fcbc031df2]));
            }

            void RTNCovariance::setCdrgdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgdrg_10f281d777284cea], a0);
            }

            void RTNCovariance::setCdrgn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgn_10f281d777284cea], a0);
            }

            void RTNCovariance::setCdrgndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgndot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCdrgr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgr_10f281d777284cea], a0);
            }

            void RTNCovariance::setCdrgrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgrdot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCdrgt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgt_10f281d777284cea], a0);
            }

            void RTNCovariance::setCdrgtdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgtdot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCndotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotn_10f281d777284cea], a0);
            }

            void RTNCovariance::setCndotndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotndot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCndotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotr_10f281d777284cea], a0);
            }

            void RTNCovariance::setCndotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotrdot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCndott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndott_10f281d777284cea], a0);
            }

            void RTNCovariance::setCndottdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndottdot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCnn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnn_10f281d777284cea], a0);
            }

            void RTNCovariance::setCnr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnr_10f281d777284cea], a0);
            }

            void RTNCovariance::setCnt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnt_10f281d777284cea], a0);
            }

            void RTNCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_754312f3734d6e2f], a0, a1, a2);
            }

            void RTNCovariance::setCrdotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotn_10f281d777284cea], a0);
            }

            void RTNCovariance::setCrdotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotr_10f281d777284cea], a0);
            }

            void RTNCovariance::setCrdotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotrdot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCrdott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdott_10f281d777284cea], a0);
            }

            void RTNCovariance::setCrr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrr_10f281d777284cea], a0);
            }

            void RTNCovariance::setCsrpdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpdrg_10f281d777284cea], a0);
            }

            void RTNCovariance::setCsrpn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpn_10f281d777284cea], a0);
            }

            void RTNCovariance::setCsrpndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpndot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCsrpr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpr_10f281d777284cea], a0);
            }

            void RTNCovariance::setCsrprdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrprdot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCsrpsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpsrp_10f281d777284cea], a0);
            }

            void RTNCovariance::setCsrpt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpt_10f281d777284cea], a0);
            }

            void RTNCovariance::setCsrptdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrptdot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCtdotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotn_10f281d777284cea], a0);
            }

            void RTNCovariance::setCtdotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotr_10f281d777284cea], a0);
            }

            void RTNCovariance::setCtdotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotrdot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCtdott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdott_10f281d777284cea], a0);
            }

            void RTNCovariance::setCtdottdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdottdot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCthrdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrdrg_10f281d777284cea], a0);
            }

            void RTNCovariance::setCthrn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrn_10f281d777284cea], a0);
            }

            void RTNCovariance::setCthrndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrndot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCthrr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrr_10f281d777284cea], a0);
            }

            void RTNCovariance::setCthrrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrrdot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCthrsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrsrp_10f281d777284cea], a0);
            }

            void RTNCovariance::setCthrt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrt_10f281d777284cea], a0);
            }

            void RTNCovariance::setCthrtdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrtdot_10f281d777284cea], a0);
            }

            void RTNCovariance::setCthrthr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrthr_10f281d777284cea], a0);
            }

            void RTNCovariance::setCtr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtr_10f281d777284cea], a0);
            }

            void RTNCovariance::setCtt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtt_10f281d777284cea], a0);
            }

            void RTNCovariance::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
            static PyObject *t_RTNCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RTNCovariance_init_(t_RTNCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RTNCovariance_getCdrgdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgtdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndottdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrprdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpsrp(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrptdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdottdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrsrp(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrtdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrthr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getRTNCovarianceMatrix(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_setCdrgdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgtdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndottdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCovarianceMatrixEntry(t_RTNCovariance *self, PyObject *args);
            static PyObject *t_RTNCovariance_setCrdotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrprdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpsrp(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrptdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdottdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrsrp(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrtdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrthr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_validate(t_RTNCovariance *self, PyObject *args);
            static PyObject *t_RTNCovariance_get__cdrgdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgtdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgtdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndottdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndottdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrprdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrprdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpsrp(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpsrp(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrptdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrptdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdottdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdottdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrsrp(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrsrp(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrtdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrtdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrthr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrthr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__rTNCovarianceMatrix(t_RTNCovariance *self, void *data);
            static PyGetSetDef t_RTNCovariance__fields_[] = {
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgtdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndottdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrprdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpsrp),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrptdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdottdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrsrp),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrtdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrthr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctt),
              DECLARE_GET_FIELD(t_RTNCovariance, rTNCovarianceMatrix),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RTNCovariance__methods_[] = {
              DECLARE_METHOD(t_RTNCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgtdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndottdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrprdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpsrp, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrptdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdottdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrsrp, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrtdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrthr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getRTNCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, setCdrgdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgtdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndottdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_RTNCovariance, setCrdotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrprdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpsrp, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrptdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdottdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrsrp, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrtdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrthr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RTNCovariance)[] = {
              { Py_tp_methods, t_RTNCovariance__methods_ },
              { Py_tp_init, (void *) t_RTNCovariance_init_ },
              { Py_tp_getset, t_RTNCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RTNCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(RTNCovariance, t_RTNCovariance, RTNCovariance);

            void t_RTNCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(RTNCovariance), &PY_TYPE_DEF(RTNCovariance), module, "RTNCovariance", 0);
            }

            void t_RTNCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "class_", make_descriptor(RTNCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "wrapfn_", make_descriptor(t_RTNCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RTNCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RTNCovariance::initializeClass, 1)))
                return NULL;
              return t_RTNCovariance::wrap_Object(RTNCovariance(((t_RTNCovariance *) arg)->object.this$));
            }
            static PyObject *t_RTNCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RTNCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RTNCovariance_init_(t_RTNCovariance *self, PyObject *args, PyObject *kwds)
            {
              RTNCovariance object((jobject) NULL);

              INT_CALL(object = RTNCovariance());
              self->object = object;

              return 0;
            }

            static PyObject *t_RTNCovariance_getCdrgdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgtdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgtdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndottdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndottdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrprdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrprdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpsrp(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrptdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrptdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdottdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdottdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrsrp(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrtdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrtdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrthr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrthr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getRTNCovarianceMatrix(t_RTNCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getRTNCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_RTNCovariance_setCdrgdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgtdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgtdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgtdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndottdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndottdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndottdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCovarianceMatrixEntry(t_RTNCovariance *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setCovarianceMatrixEntry(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixEntry", args);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrprdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrprdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrprdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpsrp(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpsrp", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrptdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrptdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrptdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdottdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdottdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdottdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrsrp(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrsrp", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrtdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrtdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrtdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrthr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrthr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrthr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_validate(t_RTNCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(RTNCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_RTNCovariance_get__cdrgdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgtdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgtdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgtdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgtdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgtdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndottdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndottdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndottdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndottdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndottdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrprdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrprdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrprdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrprdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrprdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpsrp(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpsrp(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpsrp", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrptdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrptdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrptdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrptdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrptdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdottdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdottdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdottdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdottdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdottdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrsrp(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrsrp(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrsrp", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrtdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrtdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrtdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrtdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrtdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrthr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrthr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrthr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrthr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrthr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__rTNCovarianceMatrix(t_RTNCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getRTNCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonParameterObserver.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Double.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonParameterObserver::class$ = NULL;
      jmethodID *PythonParameterObserver::mids$ = NULL;
      bool PythonParameterObserver::live$ = false;

      jclass PythonParameterObserver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonParameterObserver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_valueChanged_9eb625c4c5bd9f60] = env->getMethodID(cls, "valueChanged", "(DLorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_valueSpanMapChanged_db2a83a9d010ab79] = env->getMethodID(cls, "valueSpanMapChanged", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/ParameterDriver;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterObserver::PythonParameterObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonParameterObserver::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonParameterObserver::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonParameterObserver::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonParameterObserver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParameterObserver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParameterObserver_init_(t_PythonParameterObserver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParameterObserver_finalize(t_PythonParameterObserver *self);
      static PyObject *t_PythonParameterObserver_pythonExtension(t_PythonParameterObserver *self, PyObject *args);
      static void JNICALL t_PythonParameterObserver_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonParameterObserver_valueChanged1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2);
      static void JNICALL t_PythonParameterObserver_valueSpanMapChanged2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static PyObject *t_PythonParameterObserver_get__self(t_PythonParameterObserver *self, void *data);
      static PyGetSetDef t_PythonParameterObserver__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParameterObserver, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParameterObserver__methods_[] = {
        DECLARE_METHOD(t_PythonParameterObserver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterObserver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterObserver, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParameterObserver, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParameterObserver)[] = {
        { Py_tp_methods, t_PythonParameterObserver__methods_ },
        { Py_tp_init, (void *) t_PythonParameterObserver_init_ },
        { Py_tp_getset, t_PythonParameterObserver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParameterObserver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParameterObserver, t_PythonParameterObserver, PythonParameterObserver);

      void t_PythonParameterObserver::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParameterObserver), &PY_TYPE_DEF(PythonParameterObserver), module, "PythonParameterObserver", 1);
      }

      void t_PythonParameterObserver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterObserver), "class_", make_descriptor(PythonParameterObserver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterObserver), "wrapfn_", make_descriptor(t_PythonParameterObserver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterObserver), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParameterObserver::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonParameterObserver_pythonDecRef0 },
          { "valueChanged", "(DLorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonParameterObserver_valueChanged1 },
          { "valueSpanMapChanged", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/ParameterDriver;)V", (void *) t_PythonParameterObserver_valueSpanMapChanged2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonParameterObserver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParameterObserver::initializeClass, 1)))
          return NULL;
        return t_PythonParameterObserver::wrap_Object(PythonParameterObserver(((t_PythonParameterObserver *) arg)->object.this$));
      }
      static PyObject *t_PythonParameterObserver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParameterObserver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParameterObserver_init_(t_PythonParameterObserver *self, PyObject *args, PyObject *kwds)
      {
        PythonParameterObserver object((jobject) NULL);

        INT_CALL(object = PythonParameterObserver());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParameterObserver_finalize(t_PythonParameterObserver *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParameterObserver_pythonExtension(t_PythonParameterObserver *self, PyObject *args)
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

      static void JNICALL t_PythonParameterObserver_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonParameterObserver_valueChanged1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o1 = ::org::orekit::utils::t_ParameterDriver::wrap_Object(::org::orekit::utils::ParameterDriver(a1));
        PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
        PyObject *result = PyObject_CallMethod(obj, "valueChanged", "dOO", (double) a0, o1, o2);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonParameterObserver_valueSpanMapChanged2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::utils::t_TimeSpanMap::wrap_Object(::org::orekit::utils::TimeSpanMap(a0));
        PyObject *o1 = ::org::orekit::utils::t_ParameterDriver::wrap_Object(::org::orekit::utils::ParameterDriver(a1));
        PyObject *result = PyObject_CallMethod(obj, "valueSpanMapChanged", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonParameterObserver_get__self(t_PythonParameterObserver *self, void *data)
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
#include "org/orekit/files/sinex/SinexEopEntry.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *SinexEopEntry::class$ = NULL;
        jmethodID *SinexEopEntry::mids$ = NULL;
        bool SinexEopEntry::live$ = false;

        jclass SinexEopEntry::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/SinexEopEntry");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_20affcbd28542333] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLod_557b8123390d8d0c] = env->getMethodID(cls, "getLod", "()D");
            mids$[mid_getNutLn_557b8123390d8d0c] = env->getMethodID(cls, "getNutLn", "()D");
            mids$[mid_getNutOb_557b8123390d8d0c] = env->getMethodID(cls, "getNutOb", "()D");
            mids$[mid_getNutX_557b8123390d8d0c] = env->getMethodID(cls, "getNutX", "()D");
            mids$[mid_getNutY_557b8123390d8d0c] = env->getMethodID(cls, "getNutY", "()D");
            mids$[mid_getUt1MinusUtc_557b8123390d8d0c] = env->getMethodID(cls, "getUt1MinusUtc", "()D");
            mids$[mid_getXPo_557b8123390d8d0c] = env->getMethodID(cls, "getXPo", "()D");
            mids$[mid_getYPo_557b8123390d8d0c] = env->getMethodID(cls, "getYPo", "()D");
            mids$[mid_setLod_10f281d777284cea] = env->getMethodID(cls, "setLod", "(D)V");
            mids$[mid_setNutLn_10f281d777284cea] = env->getMethodID(cls, "setNutLn", "(D)V");
            mids$[mid_setNutOb_10f281d777284cea] = env->getMethodID(cls, "setNutOb", "(D)V");
            mids$[mid_setNutX_10f281d777284cea] = env->getMethodID(cls, "setNutX", "(D)V");
            mids$[mid_setNutY_10f281d777284cea] = env->getMethodID(cls, "setNutY", "(D)V");
            mids$[mid_setUt1MinusUtc_10f281d777284cea] = env->getMethodID(cls, "setUt1MinusUtc", "(D)V");
            mids$[mid_setxPo_10f281d777284cea] = env->getMethodID(cls, "setxPo", "(D)V");
            mids$[mid_setyPo_10f281d777284cea] = env->getMethodID(cls, "setyPo", "(D)V");
            mids$[mid_toEopEntry_29ec6104a94c2ddc] = env->getMethodID(cls, "toEopEntry", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Lorg/orekit/frames/ITRFVersion;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/EOPEntry;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SinexEopEntry::SinexEopEntry(const ::org::orekit::time::AbsoluteDate & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_20affcbd28542333, a0.this$)) {}

        ::org::orekit::time::AbsoluteDate SinexEopEntry::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
        }

        jdouble SinexEopEntry::getLod() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLod_557b8123390d8d0c]);
        }

        jdouble SinexEopEntry::getNutLn() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutLn_557b8123390d8d0c]);
        }

        jdouble SinexEopEntry::getNutOb() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutOb_557b8123390d8d0c]);
        }

        jdouble SinexEopEntry::getNutX() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutX_557b8123390d8d0c]);
        }

        jdouble SinexEopEntry::getNutY() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutY_557b8123390d8d0c]);
        }

        jdouble SinexEopEntry::getUt1MinusUtc() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUt1MinusUtc_557b8123390d8d0c]);
        }

        jdouble SinexEopEntry::getXPo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXPo_557b8123390d8d0c]);
        }

        jdouble SinexEopEntry::getYPo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYPo_557b8123390d8d0c]);
        }

        void SinexEopEntry::setLod(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLod_10f281d777284cea], a0);
        }

        void SinexEopEntry::setNutLn(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutLn_10f281d777284cea], a0);
        }

        void SinexEopEntry::setNutOb(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutOb_10f281d777284cea], a0);
        }

        void SinexEopEntry::setNutX(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutX_10f281d777284cea], a0);
        }

        void SinexEopEntry::setNutY(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutY_10f281d777284cea], a0);
        }

        void SinexEopEntry::setUt1MinusUtc(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setUt1MinusUtc_10f281d777284cea], a0);
        }

        void SinexEopEntry::setxPo(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setxPo_10f281d777284cea], a0);
        }

        void SinexEopEntry::setyPo(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setyPo_10f281d777284cea], a0);
        }

        ::org::orekit::frames::EOPEntry SinexEopEntry::toEopEntry(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::org::orekit::frames::ITRFVersion & a1, const ::org::orekit::time::TimeScale & a2) const
        {
          return ::org::orekit::frames::EOPEntry(env->callObjectMethod(this$, mids$[mid_toEopEntry_29ec6104a94c2ddc], a0.this$, a1.this$, a2.this$));
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
      namespace sinex {
        static PyObject *t_SinexEopEntry_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SinexEopEntry_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SinexEopEntry_init_(t_SinexEopEntry *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SinexEopEntry_getDate(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getLod(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutLn(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutOb(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutX(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutY(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getUt1MinusUtc(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getXPo(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getYPo(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_setLod(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutLn(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutOb(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutX(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutY(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setUt1MinusUtc(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setxPo(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setyPo(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_toEopEntry(t_SinexEopEntry *self, PyObject *args);
        static PyObject *t_SinexEopEntry_get__date(t_SinexEopEntry *self, void *data);
        static PyObject *t_SinexEopEntry_get__lod(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__lod(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutLn(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutLn(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutOb(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutOb(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutX(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutX(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutY(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutY(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__ut1MinusUtc(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__ut1MinusUtc(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__xPo(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__xPo(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__yPo(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__yPo(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyGetSetDef t_SinexEopEntry__fields_[] = {
          DECLARE_GET_FIELD(t_SinexEopEntry, date),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, lod),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutLn),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutOb),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutX),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutY),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, ut1MinusUtc),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, xPo),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, yPo),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SinexEopEntry__methods_[] = {
          DECLARE_METHOD(t_SinexEopEntry, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexEopEntry, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexEopEntry, getDate, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getLod, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutLn, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutOb, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutX, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutY, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getUt1MinusUtc, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getXPo, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getYPo, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, setLod, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutLn, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutOb, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutX, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutY, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setUt1MinusUtc, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setxPo, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setyPo, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, toEopEntry, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SinexEopEntry)[] = {
          { Py_tp_methods, t_SinexEopEntry__methods_ },
          { Py_tp_init, (void *) t_SinexEopEntry_init_ },
          { Py_tp_getset, t_SinexEopEntry__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SinexEopEntry)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SinexEopEntry, t_SinexEopEntry, SinexEopEntry);

        void t_SinexEopEntry::install(PyObject *module)
        {
          installType(&PY_TYPE(SinexEopEntry), &PY_TYPE_DEF(SinexEopEntry), module, "SinexEopEntry", 0);
        }

        void t_SinexEopEntry::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "class_", make_descriptor(SinexEopEntry::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "wrapfn_", make_descriptor(t_SinexEopEntry::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SinexEopEntry_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SinexEopEntry::initializeClass, 1)))
            return NULL;
          return t_SinexEopEntry::wrap_Object(SinexEopEntry(((t_SinexEopEntry *) arg)->object.this$));
        }
        static PyObject *t_SinexEopEntry_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SinexEopEntry::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SinexEopEntry_init_(t_SinexEopEntry *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          SinexEopEntry object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            INT_CALL(object = SinexEopEntry(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SinexEopEntry_getDate(t_SinexEopEntry *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexEopEntry_getLod(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLod());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutLn(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutLn());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutOb(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutOb());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutX(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutX());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutY(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutY());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getUt1MinusUtc(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUt1MinusUtc());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getXPo(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXPo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getYPo(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYPo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_setLod(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setLod(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLod", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutLn(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutLn(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutLn", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutOb(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutOb(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutOb", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutX(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutX(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutX", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutY(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutY(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutY", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setUt1MinusUtc(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setUt1MinusUtc(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setUt1MinusUtc", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setxPo(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setxPo(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setxPo", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setyPo(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setyPo(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setyPo", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_toEopEntry(t_SinexEopEntry *self, PyObject *args)
        {
          ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::ITRFVersion a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::time::TimeScale a2((jobject) NULL);
          ::org::orekit::frames::EOPEntry result((jobject) NULL);

          if (!parseArgs(args, "KKk", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &p1, ::org::orekit::frames::t_ITRFVersion::parameters_, &a2))
          {
            OBJ_CALL(result = self->object.toEopEntry(a0, a1, a2));
            return ::org::orekit::frames::t_EOPEntry::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "toEopEntry", args);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_get__date(t_SinexEopEntry *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexEopEntry_get__lod(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLod());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__lod(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setLod(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "lod", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutLn(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutLn());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutLn(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutLn(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutLn", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutOb(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutOb());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutOb(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutOb(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutOb", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutX(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutX());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutX(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutX(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutX", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutY(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutY());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutY(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutY(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutY", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__ut1MinusUtc(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUt1MinusUtc());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__ut1MinusUtc(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setUt1MinusUtc(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ut1MinusUtc", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__xPo(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXPo());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__xPo(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setxPo(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "xPo", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__yPo(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYPo());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__yPo(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setyPo(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "yPo", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeSpanMap$Span::class$ = NULL;
      jmethodID *TimeSpanMap$Span::mids$ = NULL;
      bool TimeSpanMap$Span::live$ = false;

      jclass TimeSpanMap$Span::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeSpanMap$Span");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getData_e661fe3ba2fafb22] = env->getMethodID(cls, "getData", "()Ljava/lang/Object;");
          mids$[mid_getEnd_7a97f7e149e79afb] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getEndTransition_b2de56d896f89501] = env->getMethodID(cls, "getEndTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getStartTransition_b2de56d896f89501] = env->getMethodID(cls, "getStartTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_next_2a24ed7b7f6cbca3] = env->getMethodID(cls, "next", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_previous_2a24ed7b7f6cbca3] = env->getMethodID(cls, "previous", "()Lorg/orekit/utils/TimeSpanMap$Span;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object TimeSpanMap$Span::getData() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getData_e661fe3ba2fafb22]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Span::getEnd() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEnd_7a97f7e149e79afb]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap$Span::getEndTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getEndTransition_b2de56d896f89501]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Span::getStart() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap$Span::getStartTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getStartTransition_b2de56d896f89501]));
      }

      TimeSpanMap$Span TimeSpanMap$Span::next() const
      {
        return TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_next_2a24ed7b7f6cbca3]));
      }

      TimeSpanMap$Span TimeSpanMap$Span::previous() const
      {
        return TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_previous_2a24ed7b7f6cbca3]));
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
      static PyObject *t_TimeSpanMap$Span_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Span_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Span_of_(t_TimeSpanMap$Span *self, PyObject *args);
      static PyObject *t_TimeSpanMap$Span_getData(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getEnd(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getEndTransition(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getStart(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getStartTransition(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_next(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_previous(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_get__data(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__end(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__endTransition(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__start(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__startTransition(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__parameters_(t_TimeSpanMap$Span *self, void *data);
      static PyGetSetDef t_TimeSpanMap$Span__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, data),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, end),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, endTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, start),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, startTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSpanMap$Span__methods_[] = {
        DECLARE_METHOD(t_TimeSpanMap$Span, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Span, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Span, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getData, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getEnd, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getEndTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getStart, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getStartTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, next, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, previous, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSpanMap$Span)[] = {
        { Py_tp_methods, t_TimeSpanMap$Span__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeSpanMap$Span__fields_ },
        { Py_tp_iter, (void *) PyObject_SelfIter },
        { Py_tp_iternext, (void *) ((PyObject *(*)(t_TimeSpanMap$Span *)) get_generic_next< t_TimeSpanMap$Span,t_TimeSpanMap$Span,TimeSpanMap$Span >) },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSpanMap$Span)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeSpanMap$Span, t_TimeSpanMap$Span, TimeSpanMap$Span);
      PyObject *t_TimeSpanMap$Span::wrap_Object(const TimeSpanMap$Span& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Span::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Span *self = (t_TimeSpanMap$Span *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSpanMap$Span::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Span::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Span *self = (t_TimeSpanMap$Span *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSpanMap$Span::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSpanMap$Span), &PY_TYPE_DEF(TimeSpanMap$Span), module, "TimeSpanMap$Span", 0);
      }

      void t_TimeSpanMap$Span::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Span), "class_", make_descriptor(TimeSpanMap$Span::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Span), "wrapfn_", make_descriptor(t_TimeSpanMap$Span::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Span), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeSpanMap$Span_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSpanMap$Span::initializeClass, 1)))
          return NULL;
        return t_TimeSpanMap$Span::wrap_Object(TimeSpanMap$Span(((t_TimeSpanMap$Span *) arg)->object.this$));
      }
      static PyObject *t_TimeSpanMap$Span_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSpanMap$Span::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSpanMap$Span_of_(t_TimeSpanMap$Span *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeSpanMap$Span_getData(t_TimeSpanMap$Span *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Span_getEnd(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getEnd());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Span_getEndTransition(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getEndTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Span_getStart(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Span_getStartTransition(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getStartTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Span_next(t_TimeSpanMap$Span *self)
      {
        TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.next());
        return t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Span_previous(t_TimeSpanMap$Span *self)
      {
        TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.previous());
        return t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_TimeSpanMap$Span_get__parameters_(t_TimeSpanMap$Span *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSpanMap$Span_get__data(t_TimeSpanMap$Span *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__end(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getEnd());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__endTransition(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getEndTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__start(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__startTransition(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getStartTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSNavigationMessage::class$ = NULL;
            jmethodID *GLONASSNavigationMessage::mids$ = NULL;
            bool GLONASSNavigationMessage::live$ = false;

            jclass GLONASSNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getFrequencyNumber_412668abc8d889e9] = env->getMethodID(cls, "getFrequencyNumber", "()I");
                mids$[mid_getGammaN_557b8123390d8d0c] = env->getMethodID(cls, "getGammaN", "()D");
                mids$[mid_getGroupDelayDifference_557b8123390d8d0c] = env->getMethodID(cls, "getGroupDelayDifference", "()D");
                mids$[mid_getHealthFlags_412668abc8d889e9] = env->getMethodID(cls, "getHealthFlags", "()I");
                mids$[mid_getPropagator_fc28496ebab1b1d8] = env->getMethodID(cls, "getPropagator", "(D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getPropagator_8fbba33c5477d47f] = env->getMethodID(cls, "getPropagator", "(DLorg/orekit/data/DataContext;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getPropagator_adcfdbcc48ccedc1] = env->getMethodID(cls, "getPropagator", "(DLorg/orekit/data/DataContext;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getStatusFlags_412668abc8d889e9] = env->getMethodID(cls, "getStatusFlags", "()I");
                mids$[mid_getTN_557b8123390d8d0c] = env->getMethodID(cls, "getTN", "()D");
                mids$[mid_getTime_557b8123390d8d0c] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getURA_557b8123390d8d0c] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_setFrequencyNumber_10f281d777284cea] = env->getMethodID(cls, "setFrequencyNumber", "(D)V");
                mids$[mid_setGammaN_10f281d777284cea] = env->getMethodID(cls, "setGammaN", "(D)V");
                mids$[mid_setGroupDelayDifference_10f281d777284cea] = env->getMethodID(cls, "setGroupDelayDifference", "(D)V");
                mids$[mid_setHealthFlags_10f281d777284cea] = env->getMethodID(cls, "setHealthFlags", "(D)V");
                mids$[mid_setStatusFlags_10f281d777284cea] = env->getMethodID(cls, "setStatusFlags", "(D)V");
                mids$[mid_setTauN_10f281d777284cea] = env->getMethodID(cls, "setTauN", "(D)V");
                mids$[mid_setTime_10f281d777284cea] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setURA_10f281d777284cea] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSNavigationMessage::GLONASSNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jint GLONASSNavigationMessage::getFrequencyNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getFrequencyNumber_412668abc8d889e9]);
            }

            jdouble GLONASSNavigationMessage::getGammaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGammaN_557b8123390d8d0c]);
            }

            jdouble GLONASSNavigationMessage::getGroupDelayDifference() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGroupDelayDifference_557b8123390d8d0c]);
            }

            jint GLONASSNavigationMessage::getHealthFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthFlags_412668abc8d889e9]);
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_fc28496ebab1b1d8], a0));
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0, const ::org::orekit::data::DataContext & a1) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_8fbba33c5477d47f], a0, a1.this$));
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_adcfdbcc48ccedc1], a0, a1.this$, a2.this$, a3.this$, a4));
            }

            jint GLONASSNavigationMessage::getStatusFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getStatusFlags_412668abc8d889e9]);
            }

            jdouble GLONASSNavigationMessage::getTN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTN_557b8123390d8d0c]);
            }

            jdouble GLONASSNavigationMessage::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_557b8123390d8d0c]);
            }

            jdouble GLONASSNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_557b8123390d8d0c]);
            }

            void GLONASSNavigationMessage::setFrequencyNumber(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrequencyNumber_10f281d777284cea], a0);
            }

            void GLONASSNavigationMessage::setGammaN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setGammaN_10f281d777284cea], a0);
            }

            void GLONASSNavigationMessage::setGroupDelayDifference(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setGroupDelayDifference_10f281d777284cea], a0);
            }

            void GLONASSNavigationMessage::setHealthFlags(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthFlags_10f281d777284cea], a0);
            }

            void GLONASSNavigationMessage::setStatusFlags(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStatusFlags_10f281d777284cea], a0);
            }

            void GLONASSNavigationMessage::setTauN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTauN_10f281d777284cea], a0);
            }

            void GLONASSNavigationMessage::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_10f281d777284cea], a0);
            }

            void GLONASSNavigationMessage::setURA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_10f281d777284cea], a0);
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
            static PyObject *t_GLONASSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GLONASSNavigationMessage_init_(t_GLONASSNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GLONASSNavigationMessage_getFrequencyNumber(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getGammaN(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getGroupDelayDifference(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getHealthFlags(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getPropagator(t_GLONASSNavigationMessage *self, PyObject *args);
            static PyObject *t_GLONASSNavigationMessage_getStatusFlags(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getTN(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getTime(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getURA(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_setFrequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setGammaN(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setGroupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setHealthFlags(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setStatusFlags(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setTauN(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setTime(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setURA(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_get__frequencyNumber(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__frequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__gammaN(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__gammaN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__groupDelayDifference(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__groupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__healthFlags(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__healthFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__statusFlags(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__statusFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__tN(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__tauN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__time(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__time(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__uRA(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__uRA(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_GLONASSNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, frequencyNumber),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, gammaN),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, groupDelayDifference),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, healthFlags),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, statusFlags),
              DECLARE_GET_FIELD(t_GLONASSNavigationMessage, tN),
              DECLARE_SET_FIELD(t_GLONASSNavigationMessage, tauN),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, time),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, uRA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GLONASSNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getFrequencyNumber, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getGammaN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getGroupDelayDifference, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getHealthFlags, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getStatusFlags, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getTN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getURA, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setFrequencyNumber, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setGammaN, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setGroupDelayDifference, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setHealthFlags, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setStatusFlags, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setTauN, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setTime, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSNavigationMessage)[] = {
              { Py_tp_methods, t_GLONASSNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GLONASSNavigationMessage_init_ },
              { Py_tp_getset, t_GLONASSNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage),
              NULL
            };

            DEFINE_TYPE(GLONASSNavigationMessage, t_GLONASSNavigationMessage, GLONASSNavigationMessage);

            void t_GLONASSNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSNavigationMessage), &PY_TYPE_DEF(GLONASSNavigationMessage), module, "GLONASSNavigationMessage", 0);
            }

            void t_GLONASSNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNavigationMessage), "class_", make_descriptor(GLONASSNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNavigationMessage), "wrapfn_", make_descriptor(t_GLONASSNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GLONASSNavigationMessage::wrap_Object(GLONASSNavigationMessage(((t_GLONASSNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GLONASSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GLONASSNavigationMessage_init_(t_GLONASSNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              GLONASSNavigationMessage object((jobject) NULL);

              INT_CALL(object = GLONASSNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_GLONASSNavigationMessage_getFrequencyNumber(t_GLONASSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFrequencyNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getGammaN(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGammaN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getGroupDelayDifference(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGroupDelayDifference());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getHealthFlags(t_GLONASSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthFlags());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getPropagator(t_GLONASSNavigationMessage *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jdouble a0;
                  ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "D", &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
                  }
                }
                break;
               case 2:
                {
                  jdouble a0;
                  ::org::orekit::data::DataContext a1((jobject) NULL);
                  ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "Dk", ::org::orekit::data::DataContext::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1));
                    return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
                  }
                }
                break;
               case 5:
                {
                  jdouble a0;
                  ::org::orekit::data::DataContext a1((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "DkkkD", ::org::orekit::data::DataContext::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4));
                    return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_getStatusFlags(t_GLONASSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getStatusFlags());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getTN(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getTime(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getURA(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getURA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_setFrequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setFrequencyNumber(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrequencyNumber", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setGammaN(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setGammaN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setGammaN", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setGroupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setGroupDelayDifference(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setGroupDelayDifference", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setHealthFlags(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setHealthFlags(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthFlags", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setStatusFlags(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setStatusFlags(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStatusFlags", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setTauN(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTauN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTauN", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setTime(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTime", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setURA(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_get__frequencyNumber(t_GLONASSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFrequencyNumber());
              return PyLong_FromLong((long) value);
            }
            static int t_GLONASSNavigationMessage_set__frequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setFrequencyNumber(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frequencyNumber", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__gammaN(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGammaN());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__gammaN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setGammaN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "gammaN", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__groupDelayDifference(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGroupDelayDifference());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__groupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setGroupDelayDifference(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "groupDelayDifference", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__healthFlags(t_GLONASSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthFlags());
              return PyLong_FromLong((long) value);
            }
            static int t_GLONASSNavigationMessage_set__healthFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setHealthFlags(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthFlags", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__statusFlags(t_GLONASSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getStatusFlags());
              return PyLong_FromLong((long) value);
            }
            static int t_GLONASSNavigationMessage_set__statusFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setStatusFlags(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "statusFlags", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__tN(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTN());
              return PyFloat_FromDouble((double) value);
            }

            static int t_GLONASSNavigationMessage_set__tauN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTauN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tauN", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__time(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__time(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "time", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__uRA(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getURA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__uRA(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
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
#include "org/orekit/forces/gravity/potential/PythonNormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonNormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonNormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonNormalizedSphericalHarmonicsProvider::live$ = false;

          jclass PythonNormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonNormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_557b8123390d8d0c] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_412668abc8d889e9] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_412668abc8d889e9] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_7d9a2a298dcb49fa] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_efafd161e8b9f542] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonNormalizedSphericalHarmonicsProvider::PythonNormalizedSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonNormalizedSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonNormalizedSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonNormalizedSphericalHarmonicsProvider::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonNormalizedSphericalHarmonicsProvider_init_(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_finalize(t_PythonNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonNormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_get__self(t_PythonNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonNormalizedSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonNormalizedSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonNormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonNormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonNormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonNormalizedSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonNormalizedSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonNormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonNormalizedSphericalHarmonicsProvider, t_PythonNormalizedSphericalHarmonicsProvider, PythonNormalizedSphericalHarmonicsProvider);

          void t_PythonNormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonNormalizedSphericalHarmonicsProvider), module, "PythonNormalizedSphericalHarmonicsProvider", 1);
          }

          void t_PythonNormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), "class_", make_descriptor(PythonNormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonNormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonNormalizedSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getTideSystem5 },
              { "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;", (void *) t_PythonNormalizedSphericalHarmonicsProvider_onDate6 },
              { "pythonDecRef", "()V", (void *) t_PythonNormalizedSphericalHarmonicsProvider_pythonDecRef7 },
            };
            env->registerNatives(cls, methods, 8);
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonNormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonNormalizedSphericalHarmonicsProvider::wrap_Object(PythonNormalizedSphericalHarmonicsProvider(((t_PythonNormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonNormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonNormalizedSphericalHarmonicsProvider_init_(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonNormalizedSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonNormalizedSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_finalize(t_PythonNormalizedSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args)
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

          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getMu", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMu", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
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

          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "onDate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, &value))
            {
              throwTypeError("onDate", result);
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

          static void JNICALL t_PythonNormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_get__self(t_PythonNormalizedSphericalHarmonicsProvider *self, void *data)
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
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "java/util/List.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *FieldOfView::class$ = NULL;
        jmethodID *FieldOfView::mids$ = NULL;
        bool FieldOfView::live$ = false;

        jclass FieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/FieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFootprint_37f5cab3ae6d781a] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getMargin_557b8123390d8d0c] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_offsetFromBoundary_d0bb3aecf00cc465] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_b48aa9aef740fa79] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List FieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_37f5cab3ae6d781a], a0.this$, a1.this$, a2));
        }

        jdouble FieldOfView::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_557b8123390d8d0c]);
        }

        jdouble FieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_d0bb3aecf00cc465], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_b48aa9aef740fa79], a0.this$));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_FieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfView_getFootprint(t_FieldOfView *self, PyObject *args);
        static PyObject *t_FieldOfView_getMargin(t_FieldOfView *self);
        static PyObject *t_FieldOfView_offsetFromBoundary(t_FieldOfView *self, PyObject *args);
        static PyObject *t_FieldOfView_projectToBoundary(t_FieldOfView *self, PyObject *arg);
        static PyObject *t_FieldOfView_get__margin(t_FieldOfView *self, void *data);
        static PyGetSetDef t_FieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOfView, margin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOfView__methods_[] = {
          DECLARE_METHOD(t_FieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfView, getFootprint, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfView, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_FieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfView, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOfView)[] = {
          { Py_tp_methods, t_FieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOfView, t_FieldOfView, FieldOfView);

        void t_FieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOfView), &PY_TYPE_DEF(FieldOfView), module, "FieldOfView", 0);
        }

        void t_FieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "class_", make_descriptor(FieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "wrapfn_", make_descriptor(t_FieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOfView::initializeClass, 1)))
            return NULL;
          return t_FieldOfView::wrap_Object(FieldOfView(((t_FieldOfView *) arg)->object.this$));
        }
        static PyObject *t_FieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOfView_getFootprint(t_FieldOfView *self, PyObject *args)
        {
          ::org::orekit::frames::Transform a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          jdouble a2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::frames::Transform::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getFootprint(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFootprint", args);
          return NULL;
        }

        static PyObject *t_FieldOfView_getMargin(t_FieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldOfView_offsetFromBoundary(t_FieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "offsetFromBoundary", args);
          return NULL;
        }

        static PyObject *t_FieldOfView_projectToBoundary(t_FieldOfView *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }

        static PyObject *t_FieldOfView_get__margin(t_FieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Sigmoid$Parametric.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sigmoid$Parametric::class$ = NULL;
        jmethodID *Sigmoid$Parametric::mids$ = NULL;
        bool Sigmoid$Parametric::live$ = false;

        jclass Sigmoid$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sigmoid$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_31b9a2982d73e37a] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_1bc40469b56f2c3c] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sigmoid$Parametric::Sigmoid$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        JArray< jdouble > Sigmoid$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_31b9a2982d73e37a], a0, a1.this$));
        }

        jdouble Sigmoid$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_1bc40469b56f2c3c], a0, a1.this$);
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
        static PyObject *t_Sigmoid$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sigmoid$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sigmoid$Parametric_init_(t_Sigmoid$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sigmoid$Parametric_gradient(t_Sigmoid$Parametric *self, PyObject *args);
        static PyObject *t_Sigmoid$Parametric_value(t_Sigmoid$Parametric *self, PyObject *args);

        static PyMethodDef t_Sigmoid$Parametric__methods_[] = {
          DECLARE_METHOD(t_Sigmoid$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Sigmoid$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sigmoid$Parametric)[] = {
          { Py_tp_methods, t_Sigmoid$Parametric__methods_ },
          { Py_tp_init, (void *) t_Sigmoid$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sigmoid$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sigmoid$Parametric, t_Sigmoid$Parametric, Sigmoid$Parametric);

        void t_Sigmoid$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Sigmoid$Parametric), &PY_TYPE_DEF(Sigmoid$Parametric), module, "Sigmoid$Parametric", 0);
        }

        void t_Sigmoid$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "class_", make_descriptor(Sigmoid$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "wrapfn_", make_descriptor(t_Sigmoid$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sigmoid$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sigmoid$Parametric::initializeClass, 1)))
            return NULL;
          return t_Sigmoid$Parametric::wrap_Object(Sigmoid$Parametric(((t_Sigmoid$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Sigmoid$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sigmoid$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sigmoid$Parametric_init_(t_Sigmoid$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Sigmoid$Parametric object((jobject) NULL);

          INT_CALL(object = Sigmoid$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sigmoid$Parametric_gradient(t_Sigmoid$Parametric *self, PyObject *args)
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

        static PyObject *t_Sigmoid$Parametric_value(t_Sigmoid$Parametric *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CommonMetadataWriter::class$ = NULL;
            jmethodID *CommonMetadataWriter::mids$ = NULL;
            bool CommonMetadataWriter::live$ = false;

            jclass CommonMetadataWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CommonMetadataWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c31d29c400404d15] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;Lorg/orekit/files/ccsds/definitions/TimeConverter;)V");
                mids$[mid_writeContent_0503da09b1f1eb3c] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CommonMetadataWriter::CommonMetadataWriter(const ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_c31d29c400404d15, a0.this$, a1.this$)) {}
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
            static PyObject *t_CommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CommonMetadataWriter_init_(t_CommonMetadataWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_CommonMetadataWriter__methods_[] = {
              DECLARE_METHOD(t_CommonMetadataWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CommonMetadataWriter)[] = {
              { Py_tp_methods, t_CommonMetadataWriter__methods_ },
              { Py_tp_init, (void *) t_CommonMetadataWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CommonMetadataWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(CommonMetadataWriter, t_CommonMetadataWriter, CommonMetadataWriter);

            void t_CommonMetadataWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CommonMetadataWriter), &PY_TYPE_DEF(CommonMetadataWriter), module, "CommonMetadataWriter", 0);
            }

            void t_CommonMetadataWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "class_", make_descriptor(CommonMetadataWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "wrapfn_", make_descriptor(t_CommonMetadataWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CommonMetadataWriter::initializeClass, 1)))
                return NULL;
              return t_CommonMetadataWriter::wrap_Object(CommonMetadataWriter(((t_CommonMetadataWriter *) arg)->object.this$));
            }
            static PyObject *t_CommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CommonMetadataWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CommonMetadataWriter_init_(t_CommonMetadataWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata a0((jobject) NULL);
              ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
              CommonMetadataWriter object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata::initializeClass, ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CommonMetadataWriter(a0, a1));
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
#include "org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *StateTransitionMatrixGenerator$PartialsObserver::class$ = NULL;
        jmethodID *StateTransitionMatrixGenerator$PartialsObserver::mids$ = NULL;
        bool StateTransitionMatrixGenerator$PartialsObserver::live$ = false;

        jclass StateTransitionMatrixGenerator$PartialsObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_partialsComputed_c6e78d5a2304799f] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StateTransitionMatrixGenerator$PartialsObserver::partialsComputed(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_partialsComputed_c6e78d5a2304799f], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_partialsComputed(t_StateTransitionMatrixGenerator$PartialsObserver *self, PyObject *args);

        static PyMethodDef t_StateTransitionMatrixGenerator$PartialsObserver__methods_[] = {
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, partialsComputed, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StateTransitionMatrixGenerator$PartialsObserver)[] = {
          { Py_tp_methods, t_StateTransitionMatrixGenerator$PartialsObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StateTransitionMatrixGenerator$PartialsObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StateTransitionMatrixGenerator$PartialsObserver, t_StateTransitionMatrixGenerator$PartialsObserver, StateTransitionMatrixGenerator$PartialsObserver);

        void t_StateTransitionMatrixGenerator$PartialsObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), &PY_TYPE_DEF(StateTransitionMatrixGenerator$PartialsObserver), module, "StateTransitionMatrixGenerator$PartialsObserver", 0);
        }

        void t_StateTransitionMatrixGenerator$PartialsObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "class_", make_descriptor(StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "wrapfn_", make_descriptor(t_StateTransitionMatrixGenerator$PartialsObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 1)))
            return NULL;
          return t_StateTransitionMatrixGenerator$PartialsObserver::wrap_Object(StateTransitionMatrixGenerator$PartialsObserver(((t_StateTransitionMatrixGenerator$PartialsObserver *) arg)->object.this$));
        }
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_partialsComputed(t_StateTransitionMatrixGenerator$PartialsObserver *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.partialsComputed(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "partialsComputed", args);
          return NULL;
        }
      }
    }
  }
}
