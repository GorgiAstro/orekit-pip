#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::class$ = NULL;
        jmethodID *OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::mids$ = NULL;
        bool OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::live$ = false;

        jclass OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5653bfa3cc0d261b] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/lang/String;ILorg/orekit/frames/Frame;Lorg/orekit/utils/AngularDerivativesFilter;)V");
            mids$[mid_getAngularCoordinates_d751c1a57012b438] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
            mids$[mid_getAttitudeProvider_228bb29d53a1472e] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getAvailableDerivatives_410860c8cd87dc25] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getInterpolationMethod_d2c8eb4129821f0e] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getReferenceFrame_cb151471db4570f0] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(const ::java::util::List & a0, const ::java::lang::String & a1, jint a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::AngularDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5653bfa3cc0d261b, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        ::java::util::List OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAngularCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_d751c1a57012b438]));
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_228bb29d53a1472e]));
        }

        ::org::orekit::utils::AngularDerivativesFilter OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_410860c8cd87dc25]));
        }

        ::java::lang::String OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getInterpolationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_d2c8eb4129821f0e]));
        }

        jint OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_d6ab429752e7c267]);
        }

        ::org::orekit::frames::Frame OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_cb151471db4570f0]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_init_(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAngularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAttitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAvailableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getReferenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStart(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__angularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__attitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__availableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__referenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__start(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__stop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyGetSetDef t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, angularCoordinates),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, attitudeProvider),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, interpolationMethod),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, referenceFrame),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, start),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getAngularCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getInterpolationMethod, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getReferenceFrame, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment)[] = {
          { Py_tp_methods, t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_init_ },
          { Py_tp_getset, t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment);

        void t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), &PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), module, "OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment", 0);
        }

        void t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), "class_", make_descriptor(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), "wrapfn_", make_descriptor(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::wrap_Object(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(((t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_init_(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          jint a2;
          ::org::orekit::frames::Frame a3((jobject) NULL);
          ::org::orekit::utils::AngularDerivativesFilter a4((jobject) NULL);
          PyTypeObject **p4;
          OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment object((jobject) NULL);

          if (!parseArgs(args, "KsIkK", ::java::util::List::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
          {
            INT_CALL(object = OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAngularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAngularCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAttitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAvailableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolationMethod());
          return j2p(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getReferenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStart(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__angularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAngularCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__attitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__availableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolationMethod());
          return j2p(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__referenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__start(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__stop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
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
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFileWriter::class$ = NULL;
        jmethodID *AttitudeEphemerisFileWriter::mids$ = NULL;
        bool AttitudeEphemerisFileWriter::live$ = false;

        jclass AttitudeEphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_write_c92852f32538ef23] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");
            mids$[mid_write_14fbf989f0a2cdb3] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AttitudeEphemerisFileWriter::write(const ::java::lang::String & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_c92852f32538ef23], a0.this$, a1.this$);
        }

        void AttitudeEphemerisFileWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_14fbf989f0a2cdb3], a0.this$, a1.this$);
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
        static PyObject *t_AttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileWriter_write(t_AttitudeEphemerisFileWriter *self, PyObject *args);

        static PyMethodDef t_AttitudeEphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFileWriter)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFileWriter, t_AttitudeEphemerisFileWriter, AttitudeEphemerisFileWriter);

        void t_AttitudeEphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFileWriter), &PY_TYPE_DEF(AttitudeEphemerisFileWriter), module, "AttitudeEphemerisFileWriter", 0);
        }

        void t_AttitudeEphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileWriter), "class_", make_descriptor(AttitudeEphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileWriter), "wrapfn_", make_descriptor(t_AttitudeEphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFileWriter::wrap_Object(AttitudeEphemerisFileWriter(((t_AttitudeEphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFileWriter_write(t_AttitudeEphemerisFileWriter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::general::AttitudeEphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "sK", ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_AttitudeEphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::files::general::AttitudeEphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_AttitudeEphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/Antenna.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *Antenna::class$ = NULL;
        jmethodID *Antenna::mids$ = NULL;
        bool Antenna::live$ = false;

        jclass Antenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/Antenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEccentricities_86fd4ab836dd60d9] = env->getMethodID(cls, "getEccentricities", "(Lorg/orekit/gnss/Frequency;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFrequencies_d751c1a57012b438] = env->getMethodID(cls, "getFrequencies", "()Ljava/util/List;");
            mids$[mid_getPattern_9514e0cf8151316d] = env->getMethodID(cls, "getPattern", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/gnss/antenna/FrequencyPattern;");
            mids$[mid_getPhaseCenterVariation_82fe1a9470191ef4] = env->getMethodID(cls, "getPhaseCenterVariation", "(Lorg/orekit/gnss/Frequency;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_getSinexCode_d2c8eb4129821f0e] = env->getMethodID(cls, "getSinexCode", "()Ljava/lang/String;");
            mids$[mid_getType_d2c8eb4129821f0e] = env->getMethodID(cls, "getType", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Antenna::getEccentricities(const ::org::orekit::gnss::Frequency & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_86fd4ab836dd60d9], a0.this$));
        }

        ::java::util::List Antenna::getFrequencies() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFrequencies_d751c1a57012b438]));
        }

        ::org::orekit::gnss::antenna::FrequencyPattern Antenna::getPattern(const ::org::orekit::gnss::Frequency & a0) const
        {
          return ::org::orekit::gnss::antenna::FrequencyPattern(env->callObjectMethod(this$, mids$[mid_getPattern_9514e0cf8151316d], a0.this$));
        }

        jdouble Antenna::getPhaseCenterVariation(const ::org::orekit::gnss::Frequency & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPhaseCenterVariation_82fe1a9470191ef4], a0.this$, a1.this$);
        }

        ::java::lang::String Antenna::getSinexCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSinexCode_d2c8eb4129821f0e]));
        }

        ::java::lang::String Antenna::getType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getType_d2c8eb4129821f0e]));
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
        static PyObject *t_Antenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Antenna_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Antenna_getEccentricities(t_Antenna *self, PyObject *arg);
        static PyObject *t_Antenna_getFrequencies(t_Antenna *self);
        static PyObject *t_Antenna_getPattern(t_Antenna *self, PyObject *arg);
        static PyObject *t_Antenna_getPhaseCenterVariation(t_Antenna *self, PyObject *args);
        static PyObject *t_Antenna_getSinexCode(t_Antenna *self);
        static PyObject *t_Antenna_getType(t_Antenna *self);
        static PyObject *t_Antenna_get__frequencies(t_Antenna *self, void *data);
        static PyObject *t_Antenna_get__sinexCode(t_Antenna *self, void *data);
        static PyObject *t_Antenna_get__type(t_Antenna *self, void *data);
        static PyGetSetDef t_Antenna__fields_[] = {
          DECLARE_GET_FIELD(t_Antenna, frequencies),
          DECLARE_GET_FIELD(t_Antenna, sinexCode),
          DECLARE_GET_FIELD(t_Antenna, type),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Antenna__methods_[] = {
          DECLARE_METHOD(t_Antenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Antenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Antenna, getEccentricities, METH_O),
          DECLARE_METHOD(t_Antenna, getFrequencies, METH_NOARGS),
          DECLARE_METHOD(t_Antenna, getPattern, METH_O),
          DECLARE_METHOD(t_Antenna, getPhaseCenterVariation, METH_VARARGS),
          DECLARE_METHOD(t_Antenna, getSinexCode, METH_NOARGS),
          DECLARE_METHOD(t_Antenna, getType, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Antenna)[] = {
          { Py_tp_methods, t_Antenna__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Antenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Antenna)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Antenna, t_Antenna, Antenna);

        void t_Antenna::install(PyObject *module)
        {
          installType(&PY_TYPE(Antenna), &PY_TYPE_DEF(Antenna), module, "Antenna", 0);
        }

        void t_Antenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "class_", make_descriptor(Antenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "wrapfn_", make_descriptor(t_Antenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Antenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Antenna::initializeClass, 1)))
            return NULL;
          return t_Antenna::wrap_Object(Antenna(((t_Antenna *) arg)->object.this$));
        }
        static PyObject *t_Antenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Antenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Antenna_getEccentricities(t_Antenna *self, PyObject *arg)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
          {
            OBJ_CALL(result = self->object.getEccentricities(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEccentricities", arg);
          return NULL;
        }

        static PyObject *t_Antenna_getFrequencies(t_Antenna *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrequencies());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(Frequency));
        }

        static PyObject *t_Antenna_getPattern(t_Antenna *self, PyObject *arg)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::gnss::antenna::FrequencyPattern result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
          {
            OBJ_CALL(result = self->object.getPattern(a0));
            return ::org::orekit::gnss::antenna::t_FrequencyPattern::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPattern", arg);
          return NULL;
        }

        static PyObject *t_Antenna_getPhaseCenterVariation(t_Antenna *self, PyObject *args)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "Kk", ::org::orekit::gnss::Frequency::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPhaseCenterVariation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhaseCenterVariation", args);
          return NULL;
        }

        static PyObject *t_Antenna_getSinexCode(t_Antenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSinexCode());
          return j2p(result);
        }

        static PyObject *t_Antenna_getType(t_Antenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getType());
          return j2p(result);
        }

        static PyObject *t_Antenna_get__frequencies(t_Antenna *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrequencies());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_Antenna_get__sinexCode(t_Antenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSinexCode());
          return j2p(value);
        }

        static PyObject *t_Antenna_get__type(t_Antenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getType());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalParameters::class$ = NULL;
            jmethodID *AdditionalParameters::mids$ = NULL;
            bool AdditionalParameters::live$ = false;

            jclass AdditionalParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getApoapsisAltitude_9981f74b2d109da6] = env->getMethodID(cls, "getApoapsisAltitude", "()D");
                mids$[mid_getAreaDRG_9981f74b2d109da6] = env->getMethodID(cls, "getAreaDRG", "()D");
                mids$[mid_getAreaPC_9981f74b2d109da6] = env->getMethodID(cls, "getAreaPC", "()D");
                mids$[mid_getAreaPCMax_9981f74b2d109da6] = env->getMethodID(cls, "getAreaPCMax", "()D");
                mids$[mid_getAreaPCMin_9981f74b2d109da6] = env->getMethodID(cls, "getAreaPCMin", "()D");
                mids$[mid_getAreaSRP_9981f74b2d109da6] = env->getMethodID(cls, "getAreaSRP", "()D");
                mids$[mid_getCDAreaOverMass_9981f74b2d109da6] = env->getMethodID(cls, "getCDAreaOverMass", "()D");
                mids$[mid_getCRAreaOverMass_9981f74b2d109da6] = env->getMethodID(cls, "getCRAreaOverMass", "()D");
                mids$[mid_getCovConfidence_9981f74b2d109da6] = env->getMethodID(cls, "getCovConfidence", "()D");
                mids$[mid_getCovConfidenceMethod_d2c8eb4129821f0e] = env->getMethodID(cls, "getCovConfidenceMethod", "()Ljava/lang/String;");
                mids$[mid_getHbr_9981f74b2d109da6] = env->getMethodID(cls, "getHbr", "()D");
                mids$[mid_getInclination_9981f74b2d109da6] = env->getMethodID(cls, "getInclination", "()D");
                mids$[mid_getMass_9981f74b2d109da6] = env->getMethodID(cls, "getMass", "()D");
                mids$[mid_getPeriapsisAltitude_9981f74b2d109da6] = env->getMethodID(cls, "getPeriapsisAltitude", "()D");
                mids$[mid_getSedr_9981f74b2d109da6] = env->getMethodID(cls, "getSedr", "()D");
                mids$[mid_getThrustAcceleration_9981f74b2d109da6] = env->getMethodID(cls, "getThrustAcceleration", "()D");
                mids$[mid_setApoapsisAltitude_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setApoapsisAltitude", "(D)V");
                mids$[mid_setAreaDRG_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAreaDRG", "(D)V");
                mids$[mid_setAreaPC_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAreaPC", "(D)V");
                mids$[mid_setAreaPCMax_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAreaPCMax", "(D)V");
                mids$[mid_setAreaPCMin_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAreaPCMin", "(D)V");
                mids$[mid_setAreaSRP_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAreaSRP", "(D)V");
                mids$[mid_setCDAreaOverMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCDAreaOverMass", "(D)V");
                mids$[mid_setCRAreaOverMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCRAreaOverMass", "(D)V");
                mids$[mid_setCovConfidence_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCovConfidence", "(D)V");
                mids$[mid_setCovConfidenceMethod_105e1eadb709d9ac] = env->getMethodID(cls, "setCovConfidenceMethod", "(Ljava/lang/String;)V");
                mids$[mid_setHbr_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setHbr", "(D)V");
                mids$[mid_setInclination_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setInclination", "(D)V");
                mids$[mid_setMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMass", "(D)V");
                mids$[mid_setPeriapsisAltitude_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setPeriapsisAltitude", "(D)V");
                mids$[mid_setSedr_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSedr", "(D)V");
                mids$[mid_setThrustAcceleration_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setThrustAcceleration", "(D)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdditionalParameters::AdditionalParameters() : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jdouble AdditionalParameters::getApoapsisAltitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApoapsisAltitude_9981f74b2d109da6]);
            }

            jdouble AdditionalParameters::getAreaDRG() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaDRG_9981f74b2d109da6]);
            }

            jdouble AdditionalParameters::getAreaPC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPC_9981f74b2d109da6]);
            }

            jdouble AdditionalParameters::getAreaPCMax() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPCMax_9981f74b2d109da6]);
            }

            jdouble AdditionalParameters::getAreaPCMin() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPCMin_9981f74b2d109da6]);
            }

            jdouble AdditionalParameters::getAreaSRP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaSRP_9981f74b2d109da6]);
            }

            jdouble AdditionalParameters::getCDAreaOverMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCDAreaOverMass_9981f74b2d109da6]);
            }

            jdouble AdditionalParameters::getCRAreaOverMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCRAreaOverMass_9981f74b2d109da6]);
            }

            jdouble AdditionalParameters::getCovConfidence() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCovConfidence_9981f74b2d109da6]);
            }

            ::java::lang::String AdditionalParameters::getCovConfidenceMethod() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovConfidenceMethod_d2c8eb4129821f0e]));
            }

            jdouble AdditionalParameters::getHbr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHbr_9981f74b2d109da6]);
            }

            jdouble AdditionalParameters::getInclination() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInclination_9981f74b2d109da6]);
            }

            jdouble AdditionalParameters::getMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMass_9981f74b2d109da6]);
            }

            jdouble AdditionalParameters::getPeriapsisAltitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPeriapsisAltitude_9981f74b2d109da6]);
            }

            jdouble AdditionalParameters::getSedr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSedr_9981f74b2d109da6]);
            }

            jdouble AdditionalParameters::getThrustAcceleration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThrustAcceleration_9981f74b2d109da6]);
            }

            void AdditionalParameters::setApoapsisAltitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setApoapsisAltitude_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::setAreaDRG(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaDRG_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::setAreaPC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPC_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::setAreaPCMax(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPCMax_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::setAreaPCMin(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPCMin_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::setAreaSRP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaSRP_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::setCDAreaOverMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCDAreaOverMass_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::setCRAreaOverMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCRAreaOverMass_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::setCovConfidence(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovConfidence_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::setCovConfidenceMethod(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovConfidenceMethod_105e1eadb709d9ac], a0.this$);
            }

            void AdditionalParameters::setHbr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHbr_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::setInclination(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInclination_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::setMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMass_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::setPeriapsisAltitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPeriapsisAltitude_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::setSedr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSedr_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::setThrustAcceleration(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setThrustAcceleration_1ad26e8c8c0cd65b], a0);
            }

            void AdditionalParameters::validate(jdouble a0) const
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
          namespace cdm {
            static PyObject *t_AdditionalParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdditionalParameters_init_(t_AdditionalParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AdditionalParameters_getApoapsisAltitude(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaDRG(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPC(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPCMax(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPCMin(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaSRP(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCDAreaOverMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCRAreaOverMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCovConfidence(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCovConfidenceMethod(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getHbr(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getInclination(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getPeriapsisAltitude(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getSedr(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getThrustAcceleration(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_setApoapsisAltitude(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaDRG(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPC(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPCMax(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPCMin(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaSRP(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCDAreaOverMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCRAreaOverMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCovConfidence(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCovConfidenceMethod(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setHbr(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setInclination(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setPeriapsisAltitude(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setSedr(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setThrustAcceleration(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_validate(t_AdditionalParameters *self, PyObject *args);
            static PyObject *t_AdditionalParameters_get__apoapsisAltitude(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__apoapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaDRG(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaDRG(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPC(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPC(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPCMax(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPCMax(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPCMin(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPCMin(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaSRP(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaSRP(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__cDAreaOverMass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__cDAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__cRAreaOverMass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__cRAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__covConfidence(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__covConfidence(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__covConfidenceMethod(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__covConfidenceMethod(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__hbr(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__hbr(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__inclination(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__inclination(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__mass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__mass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__periapsisAltitude(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__periapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__sedr(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__sedr(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__thrustAcceleration(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__thrustAcceleration(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyGetSetDef t_AdditionalParameters__fields_[] = {
              DECLARE_GETSET_FIELD(t_AdditionalParameters, apoapsisAltitude),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaDRG),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPC),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPCMax),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPCMin),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaSRP),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, cDAreaOverMass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, cRAreaOverMass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, covConfidence),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, covConfidenceMethod),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, hbr),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, inclination),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, mass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, periapsisAltitude),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, sedr),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, thrustAcceleration),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalParameters__methods_[] = {
              DECLARE_METHOD(t_AdditionalParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParameters, getApoapsisAltitude, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaDRG, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPC, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPCMax, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPCMin, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaSRP, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCDAreaOverMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCRAreaOverMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCovConfidence, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCovConfidenceMethod, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getHbr, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getInclination, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getPeriapsisAltitude, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getSedr, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getThrustAcceleration, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, setApoapsisAltitude, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaDRG, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPC, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPCMax, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPCMin, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaSRP, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCDAreaOverMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCRAreaOverMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCovConfidence, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCovConfidenceMethod, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setHbr, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setInclination, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setPeriapsisAltitude, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setSedr, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setThrustAcceleration, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalParameters)[] = {
              { Py_tp_methods, t_AdditionalParameters__methods_ },
              { Py_tp_init, (void *) t_AdditionalParameters_init_ },
              { Py_tp_getset, t_AdditionalParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::CommonPhysicalProperties),
              NULL
            };

            DEFINE_TYPE(AdditionalParameters, t_AdditionalParameters, AdditionalParameters);

            void t_AdditionalParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalParameters), &PY_TYPE_DEF(AdditionalParameters), module, "AdditionalParameters", 0);
            }

            void t_AdditionalParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "class_", make_descriptor(AdditionalParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "wrapfn_", make_descriptor(t_AdditionalParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdditionalParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalParameters::initializeClass, 1)))
                return NULL;
              return t_AdditionalParameters::wrap_Object(AdditionalParameters(((t_AdditionalParameters *) arg)->object.this$));
            }
            static PyObject *t_AdditionalParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdditionalParameters_init_(t_AdditionalParameters *self, PyObject *args, PyObject *kwds)
            {
              AdditionalParameters object((jobject) NULL);

              INT_CALL(object = AdditionalParameters());
              self->object = object;

              return 0;
            }

            static PyObject *t_AdditionalParameters_getApoapsisAltitude(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getApoapsisAltitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaDRG(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaDRG());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPC(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPCMax(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPCMax());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPCMin(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPCMin());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaSRP(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaSRP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCDAreaOverMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCDAreaOverMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCRAreaOverMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCRAreaOverMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCovConfidence(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCovConfidence());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCovConfidenceMethod(t_AdditionalParameters *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovConfidenceMethod());
              return j2p(result);
            }

            static PyObject *t_AdditionalParameters_getHbr(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHbr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getInclination(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getInclination());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getPeriapsisAltitude(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPeriapsisAltitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getSedr(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSedr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getThrustAcceleration(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustAcceleration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_setApoapsisAltitude(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setApoapsisAltitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setApoapsisAltitude", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaDRG(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaDRG(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaDRG", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPC(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPC", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPCMax(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPCMax(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPCMax", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPCMin(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPCMin(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPCMin", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaSRP(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaSRP(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaSRP", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCDAreaOverMass(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCDAreaOverMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCDAreaOverMass", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCRAreaOverMass(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCRAreaOverMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCRAreaOverMass", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCovConfidence(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCovConfidence(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovConfidence", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCovConfidenceMethod(t_AdditionalParameters *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setCovConfidenceMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovConfidenceMethod", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setHbr(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setHbr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHbr", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setInclination(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setInclination(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInclination", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setMass(t_AdditionalParameters *self, PyObject *arg)
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

            static PyObject *t_AdditionalParameters_setPeriapsisAltitude(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setPeriapsisAltitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPeriapsisAltitude", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setSedr(t_AdditionalParameters *self, PyObject *arg)
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

            static PyObject *t_AdditionalParameters_setThrustAcceleration(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setThrustAcceleration(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setThrustAcceleration", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_validate(t_AdditionalParameters *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(AdditionalParameters), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_AdditionalParameters_get__apoapsisAltitude(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getApoapsisAltitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__apoapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setApoapsisAltitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "apoapsisAltitude", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaDRG(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaDRG());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaDRG(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaDRG(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaDRG", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPC(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPC());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPC(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPC", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPCMax(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPCMax());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPCMax(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPCMax(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPCMax", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPCMin(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPCMin());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPCMin(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPCMin(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPCMin", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaSRP(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaSRP());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaSRP(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaSRP(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaSRP", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__cDAreaOverMass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCDAreaOverMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__cDAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCDAreaOverMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cDAreaOverMass", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__cRAreaOverMass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCRAreaOverMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__cRAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCRAreaOverMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cRAreaOverMass", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__covConfidence(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCovConfidence());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__covConfidence(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCovConfidence(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covConfidence", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__covConfidenceMethod(t_AdditionalParameters *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovConfidenceMethod());
              return j2p(value);
            }
            static int t_AdditionalParameters_set__covConfidenceMethod(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setCovConfidenceMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covConfidenceMethod", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__hbr(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHbr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__hbr(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setHbr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "hbr", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__inclination(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getInclination());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__inclination(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setInclination(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "inclination", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__mass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__mass(t_AdditionalParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_AdditionalParameters_get__periapsisAltitude(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPeriapsisAltitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__periapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setPeriapsisAltitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "periapsisAltitude", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__sedr(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSedr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__sedr(t_AdditionalParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_AdditionalParameters_get__thrustAcceleration(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getThrustAcceleration());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__thrustAcceleration(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setThrustAcceleration(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "thrustAcceleration", arg);
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
#include "org/orekit/utils/GenericTimeStampedCache.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/IllegalStateException.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *GenericTimeStampedCache::class$ = NULL;
      jmethodID *GenericTimeStampedCache::mids$ = NULL;
      bool GenericTimeStampedCache::live$ = false;
      jint GenericTimeStampedCache::DEFAULT_CACHED_SLOTS_NUMBER = (jint) 0;

      jclass GenericTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/GenericTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_865bbb0ad15ecfbc] = env->getMethodID(cls, "<init>", "(IIDDLorg/orekit/utils/TimeStampedGenerator;)V");
          mids$[mid_init$_c348b01d22639cec] = env->getMethodID(cls, "<init>", "(IIDDLorg/orekit/utils/TimeStampedGenerator;D)V");
          mids$[mid_getEarliest_80bbab87cd34ef1a] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getEntries_d6ab429752e7c267] = env->getMethodID(cls, "getEntries", "()I");
          mids$[mid_getGenerateCalls_d6ab429752e7c267] = env->getMethodID(cls, "getGenerateCalls", "()I");
          mids$[mid_getGenerator_23e186bbf57aea41] = env->getMethodID(cls, "getGenerator", "()Lorg/orekit/utils/TimeStampedGenerator;");
          mids$[mid_getGetNeighborsCalls_d6ab429752e7c267] = env->getMethodID(cls, "getGetNeighborsCalls", "()I");
          mids$[mid_getLatest_80bbab87cd34ef1a] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_d6ab429752e7c267] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getMaxSlots_d6ab429752e7c267] = env->getMethodID(cls, "getMaxSlots", "()I");
          mids$[mid_getMaxSpan_9981f74b2d109da6] = env->getMethodID(cls, "getMaxSpan", "()D");
          mids$[mid_getNeighbors_ad75bac85cbb88e7] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_getNewSlotQuantumGap_9981f74b2d109da6] = env->getMethodID(cls, "getNewSlotQuantumGap", "()D");
          mids$[mid_getSlots_d6ab429752e7c267] = env->getMethodID(cls, "getSlots", "()I");
          mids$[mid_getSlotsEvictions_d6ab429752e7c267] = env->getMethodID(cls, "getSlotsEvictions", "()I");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_CACHED_SLOTS_NUMBER = env->getStaticIntField(cls, "DEFAULT_CACHED_SLOTS_NUMBER");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GenericTimeStampedCache::GenericTimeStampedCache(jint a0, jint a1, jdouble a2, jdouble a3, const ::org::orekit::utils::TimeStampedGenerator & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_865bbb0ad15ecfbc, a0, a1, a2, a3, a4.this$)) {}

      GenericTimeStampedCache::GenericTimeStampedCache(jint a0, jint a1, jdouble a2, jdouble a3, const ::org::orekit::utils::TimeStampedGenerator & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c348b01d22639cec, a0, a1, a2, a3, a4.this$, a5)) {}

      ::org::orekit::time::TimeStamped GenericTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_80bbab87cd34ef1a]));
      }

      jint GenericTimeStampedCache::getEntries() const
      {
        return env->callIntMethod(this$, mids$[mid_getEntries_d6ab429752e7c267]);
      }

      jint GenericTimeStampedCache::getGenerateCalls() const
      {
        return env->callIntMethod(this$, mids$[mid_getGenerateCalls_d6ab429752e7c267]);
      }

      ::org::orekit::utils::TimeStampedGenerator GenericTimeStampedCache::getGenerator() const
      {
        return ::org::orekit::utils::TimeStampedGenerator(env->callObjectMethod(this$, mids$[mid_getGenerator_23e186bbf57aea41]));
      }

      jint GenericTimeStampedCache::getGetNeighborsCalls() const
      {
        return env->callIntMethod(this$, mids$[mid_getGetNeighborsCalls_d6ab429752e7c267]);
      }

      ::org::orekit::time::TimeStamped GenericTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_80bbab87cd34ef1a]));
      }

      jint GenericTimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_d6ab429752e7c267]);
      }

      jint GenericTimeStampedCache::getMaxSlots() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxSlots_d6ab429752e7c267]);
      }

      jdouble GenericTimeStampedCache::getMaxSpan() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxSpan_9981f74b2d109da6]);
      }

      ::java::util::stream::Stream GenericTimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_ad75bac85cbb88e7], a0.this$, a1));
      }

      jdouble GenericTimeStampedCache::getNewSlotQuantumGap() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNewSlotQuantumGap_9981f74b2d109da6]);
      }

      jint GenericTimeStampedCache::getSlots() const
      {
        return env->callIntMethod(this$, mids$[mid_getSlots_d6ab429752e7c267]);
      }

      jint GenericTimeStampedCache::getSlotsEvictions() const
      {
        return env->callIntMethod(this$, mids$[mid_getSlotsEvictions_d6ab429752e7c267]);
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
      static PyObject *t_GenericTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GenericTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GenericTimeStampedCache_of_(t_GenericTimeStampedCache *self, PyObject *args);
      static int t_GenericTimeStampedCache_init_(t_GenericTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GenericTimeStampedCache_getEarliest(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getEntries(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getGenerateCalls(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getGenerator(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getGetNeighborsCalls(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getLatest(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getMaxNeighborsSize(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getMaxSlots(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getMaxSpan(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getNeighbors(t_GenericTimeStampedCache *self, PyObject *args);
      static PyObject *t_GenericTimeStampedCache_getNewSlotQuantumGap(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getSlots(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getSlotsEvictions(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_get__earliest(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__entries(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__generateCalls(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__generator(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__getNeighborsCalls(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__latest(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__maxNeighborsSize(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__maxSlots(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__maxSpan(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__newSlotQuantumGap(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__slots(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__slotsEvictions(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__parameters_(t_GenericTimeStampedCache *self, void *data);
      static PyGetSetDef t_GenericTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, entries),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, generateCalls),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, generator),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, getNeighborsCalls),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, maxNeighborsSize),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, maxSlots),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, maxSpan),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, newSlotQuantumGap),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, slots),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, slotsEvictions),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GenericTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_GenericTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GenericTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GenericTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getEntries, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getGenerateCalls, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getGenerator, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getGetNeighborsCalls, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getMaxNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getMaxSlots, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getMaxSpan, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getNeighbors, METH_VARARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getNewSlotQuantumGap, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getSlots, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getSlotsEvictions, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GenericTimeStampedCache)[] = {
        { Py_tp_methods, t_GenericTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_GenericTimeStampedCache_init_ },
        { Py_tp_getset, t_GenericTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GenericTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GenericTimeStampedCache, t_GenericTimeStampedCache, GenericTimeStampedCache);
      PyObject *t_GenericTimeStampedCache::wrap_Object(const GenericTimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_GenericTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_GenericTimeStampedCache *self = (t_GenericTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_GenericTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_GenericTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_GenericTimeStampedCache *self = (t_GenericTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_GenericTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(GenericTimeStampedCache), &PY_TYPE_DEF(GenericTimeStampedCache), module, "GenericTimeStampedCache", 0);
      }

      void t_GenericTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "class_", make_descriptor(GenericTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "wrapfn_", make_descriptor(t_GenericTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "boxfn_", make_descriptor(boxObject));
        env->getClass(GenericTimeStampedCache::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "DEFAULT_CACHED_SLOTS_NUMBER", make_descriptor(GenericTimeStampedCache::DEFAULT_CACHED_SLOTS_NUMBER));
      }

      static PyObject *t_GenericTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GenericTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_GenericTimeStampedCache::wrap_Object(GenericTimeStampedCache(((t_GenericTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_GenericTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GenericTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GenericTimeStampedCache_of_(t_GenericTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_GenericTimeStampedCache_init_(t_GenericTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            jint a0;
            jint a1;
            jdouble a2;
            jdouble a3;
            ::org::orekit::utils::TimeStampedGenerator a4((jobject) NULL);
            PyTypeObject **p4;
            GenericTimeStampedCache object((jobject) NULL);

            if (!parseArgs(args, "IIDDK", ::org::orekit::utils::TimeStampedGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_TimeStampedGenerator::parameters_))
            {
              INT_CALL(object = GenericTimeStampedCache(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jint a1;
            jdouble a2;
            jdouble a3;
            ::org::orekit::utils::TimeStampedGenerator a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            GenericTimeStampedCache object((jobject) NULL);

            if (!parseArgs(args, "IIDDKD", ::org::orekit::utils::TimeStampedGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_TimeStampedGenerator::parameters_, &a5))
            {
              INT_CALL(object = GenericTimeStampedCache(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_GenericTimeStampedCache_getEarliest(t_GenericTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_GenericTimeStampedCache_getEntries(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEntries());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getGenerateCalls(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGenerateCalls());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getGenerator(t_GenericTimeStampedCache *self)
      {
        ::org::orekit::utils::TimeStampedGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGenerator());
        return ::org::orekit::utils::t_TimeStampedGenerator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_GenericTimeStampedCache_getGetNeighborsCalls(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGetNeighborsCalls());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getLatest(t_GenericTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_GenericTimeStampedCache_getMaxNeighborsSize(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getMaxSlots(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxSlots());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getMaxSpan(t_GenericTimeStampedCache *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxSpan());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GenericTimeStampedCache_getNeighbors(t_GenericTimeStampedCache *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", args);
        return NULL;
      }

      static PyObject *t_GenericTimeStampedCache_getNewSlotQuantumGap(t_GenericTimeStampedCache *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNewSlotQuantumGap());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GenericTimeStampedCache_getSlots(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSlots());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getSlotsEvictions(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSlotsEvictions());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_GenericTimeStampedCache_get__parameters_(t_GenericTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_GenericTimeStampedCache_get__earliest(t_GenericTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_GenericTimeStampedCache_get__entries(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEntries());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__generateCalls(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGenerateCalls());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__generator(t_GenericTimeStampedCache *self, void *data)
      {
        ::org::orekit::utils::TimeStampedGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGenerator());
        return ::org::orekit::utils::t_TimeStampedGenerator::wrap_Object(value);
      }

      static PyObject *t_GenericTimeStampedCache_get__getNeighborsCalls(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGetNeighborsCalls());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__latest(t_GenericTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_GenericTimeStampedCache_get__maxNeighborsSize(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__maxSlots(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxSlots());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__maxSpan(t_GenericTimeStampedCache *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxSpan());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__newSlotQuantumGap(t_GenericTimeStampedCache *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNewSlotQuantumGap());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__slots(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSlots());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__slotsEvictions(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSlotsEvictions());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemData.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemSegment::class$ = NULL;
              jmethodID *AemSegment::mids$ = NULL;
              bool AemSegment::live$ = false;

              jclass AemSegment::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemSegment");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_93672d3934b0f497] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;Lorg/orekit/files/ccsds/ndm/adm/aem/AemData;)V");
                  mids$[mid_getAngularCoordinates_d751c1a57012b438] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
                  mids$[mid_getAttitudeProvider_228bb29d53a1472e] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
                  mids$[mid_getAvailableDerivatives_410860c8cd87dc25] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getInterpolationMethod_d2c8eb4129821f0e] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getReferenceFrame_cb151471db4570f0] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemSegment::AemSegment(const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a0, const ::org::orekit::files::ccsds::ndm::adm::aem::AemData & a1) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_93672d3934b0f497, a0.this$, a1.this$)) {}

              ::java::util::List AemSegment::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_d751c1a57012b438]));
              }

              ::org::orekit::attitudes::BoundedAttitudeProvider AemSegment::getAttitudeProvider() const
              {
                return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_228bb29d53a1472e]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AemSegment::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_410860c8cd87dc25]));
              }

              ::java::lang::String AemSegment::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_d2c8eb4129821f0e]));
              }

              jint AemSegment::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_d6ab429752e7c267]);
              }

              ::org::orekit::frames::Frame AemSegment::getReferenceFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_cb151471db4570f0]));
              }

              ::org::orekit::time::AbsoluteDate AemSegment::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate AemSegment::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
              static PyObject *t_AemSegment_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSegment_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSegment_of_(t_AemSegment *self, PyObject *args);
              static int t_AemSegment_init_(t_AemSegment *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemSegment_getAngularCoordinates(t_AemSegment *self);
              static PyObject *t_AemSegment_getAttitudeProvider(t_AemSegment *self);
              static PyObject *t_AemSegment_getAvailableDerivatives(t_AemSegment *self);
              static PyObject *t_AemSegment_getInterpolationMethod(t_AemSegment *self);
              static PyObject *t_AemSegment_getInterpolationSamples(t_AemSegment *self);
              static PyObject *t_AemSegment_getReferenceFrame(t_AemSegment *self);
              static PyObject *t_AemSegment_getStart(t_AemSegment *self);
              static PyObject *t_AemSegment_getStop(t_AemSegment *self);
              static PyObject *t_AemSegment_get__angularCoordinates(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__attitudeProvider(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__availableDerivatives(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__interpolationMethod(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__interpolationSamples(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__referenceFrame(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__start(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__stop(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__parameters_(t_AemSegment *self, void *data);
              static PyGetSetDef t_AemSegment__fields_[] = {
                DECLARE_GET_FIELD(t_AemSegment, angularCoordinates),
                DECLARE_GET_FIELD(t_AemSegment, attitudeProvider),
                DECLARE_GET_FIELD(t_AemSegment, availableDerivatives),
                DECLARE_GET_FIELD(t_AemSegment, interpolationMethod),
                DECLARE_GET_FIELD(t_AemSegment, interpolationSamples),
                DECLARE_GET_FIELD(t_AemSegment, referenceFrame),
                DECLARE_GET_FIELD(t_AemSegment, start),
                DECLARE_GET_FIELD(t_AemSegment, stop),
                DECLARE_GET_FIELD(t_AemSegment, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemSegment__methods_[] = {
                DECLARE_METHOD(t_AemSegment, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSegment, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSegment, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemSegment, getAngularCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getAttitudeProvider, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemSegment)[] = {
                { Py_tp_methods, t_AemSegment__methods_ },
                { Py_tp_init, (void *) t_AemSegment_init_ },
                { Py_tp_getset, t_AemSegment__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemSegment)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Segment),
                NULL
              };

              DEFINE_TYPE(AemSegment, t_AemSegment, AemSegment);
              PyObject *t_AemSegment::wrap_Object(const AemSegment& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemSegment::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemSegment *self = (t_AemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AemSegment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemSegment::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemSegment *self = (t_AemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AemSegment::install(PyObject *module)
              {
                installType(&PY_TYPE(AemSegment), &PY_TYPE_DEF(AemSegment), module, "AemSegment", 0);
              }

              void t_AemSegment::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "class_", make_descriptor(AemSegment::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "wrapfn_", make_descriptor(t_AemSegment::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemSegment_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemSegment::initializeClass, 1)))
                  return NULL;
                return t_AemSegment::wrap_Object(AemSegment(((t_AemSegment *) arg)->object.this$));
              }
              static PyObject *t_AemSegment_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemSegment::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemSegment_of_(t_AemSegment *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_AemSegment_init_(t_AemSegment *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemData a1((jobject) NULL);
                AemSegment object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemData::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = AemSegment(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemMetadata);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AemSegment_getAngularCoordinates(t_AemSegment *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AemSegment_getAttitudeProvider(t_AemSegment *self)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getAvailableDerivatives(t_AemSegment *self)
              {
                ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getInterpolationMethod(t_AemSegment *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return j2p(result);
              }

              static PyObject *t_AemSegment_getInterpolationSamples(t_AemSegment *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AemSegment_getReferenceFrame(t_AemSegment *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getStart(t_AemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getStop(t_AemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
              static PyObject *t_AemSegment_get__parameters_(t_AemSegment *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AemSegment_get__angularCoordinates(t_AemSegment *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__attitudeProvider(t_AemSegment *self, void *data)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__availableDerivatives(t_AemSegment *self, void *data)
              {
                ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__interpolationMethod(t_AemSegment *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return j2p(value);
              }

              static PyObject *t_AemSegment_get__interpolationSamples(t_AemSegment *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_AemSegment_get__referenceFrame(t_AemSegment *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__start(t_AemSegment *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__stop(t_AemSegment *self, void *data)
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
#include "org/hipparchus/distribution/continuous/GammaDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *GammaDistribution::class$ = NULL;
        jmethodID *GammaDistribution::mids$ = NULL;
        bool GammaDistribution::live$ = false;

        jclass GammaDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/GammaDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_9981f74b2d109da6] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_9981f74b2d109da6] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_bf28ed64d6e8576b] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GammaDistribution::GammaDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        GammaDistribution::GammaDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        jdouble GammaDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble GammaDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble GammaDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble GammaDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble GammaDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_9981f74b2d109da6]);
        }

        jdouble GammaDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_9981f74b2d109da6]);
        }

        jdouble GammaDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble GammaDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jboolean GammaDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble GammaDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_bf28ed64d6e8576b], a0);
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
        static PyObject *t_GammaDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GammaDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GammaDistribution_init_(t_GammaDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GammaDistribution_cumulativeProbability(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_density(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getNumericalMean(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getNumericalVariance(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getScale(t_GammaDistribution *self);
        static PyObject *t_GammaDistribution_getShape(t_GammaDistribution *self);
        static PyObject *t_GammaDistribution_getSupportLowerBound(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getSupportUpperBound(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_isSupportConnected(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_logDensity(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_get__numericalMean(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__numericalVariance(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__scale(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__shape(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportConnected(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportLowerBound(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportUpperBound(t_GammaDistribution *self, void *data);
        static PyGetSetDef t_GammaDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GammaDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GammaDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GammaDistribution, scale),
          DECLARE_GET_FIELD(t_GammaDistribution, shape),
          DECLARE_GET_FIELD(t_GammaDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GammaDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GammaDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GammaDistribution__methods_[] = {
          DECLARE_METHOD(t_GammaDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GammaDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GammaDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_GammaDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_GammaDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GammaDistribution)[] = {
          { Py_tp_methods, t_GammaDistribution__methods_ },
          { Py_tp_init, (void *) t_GammaDistribution_init_ },
          { Py_tp_getset, t_GammaDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GammaDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(GammaDistribution, t_GammaDistribution, GammaDistribution);

        void t_GammaDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GammaDistribution), &PY_TYPE_DEF(GammaDistribution), module, "GammaDistribution", 0);
        }

        void t_GammaDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "class_", make_descriptor(GammaDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "wrapfn_", make_descriptor(t_GammaDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GammaDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GammaDistribution::initializeClass, 1)))
            return NULL;
          return t_GammaDistribution::wrap_Object(GammaDistribution(((t_GammaDistribution *) arg)->object.this$));
        }
        static PyObject *t_GammaDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GammaDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GammaDistribution_init_(t_GammaDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              GammaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = GammaDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              GammaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = GammaDistribution(a0, a1, a2));
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

        static PyObject *t_GammaDistribution_cumulativeProbability(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GammaDistribution_density(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_GammaDistribution_getNumericalMean(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GammaDistribution_getNumericalVariance(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GammaDistribution_getScale(t_GammaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GammaDistribution_getShape(t_GammaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GammaDistribution_getSupportLowerBound(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GammaDistribution_getSupportUpperBound(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GammaDistribution_isSupportConnected(t_GammaDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GammaDistribution_logDensity(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_GammaDistribution_get__numericalMean(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__numericalVariance(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__scale(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__shape(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__supportConnected(t_GammaDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GammaDistribution_get__supportLowerBound(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__supportUpperBound(t_GammaDistribution *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/BaseRangeIonosphericDelayModifier.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeIonosphericDelayModifier::mids$ = NULL;
          bool BaseRangeIonosphericDelayModifier::live$ = false;

          jclass BaseRangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_rangeErrorIonosphericModel_e648598eaaa5f94d] = env->getMethodID(cls, "rangeErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeErrorIonosphericModel_29b53a0d2fc3b115] = env->getMethodID(cls, "rangeErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getIonoModel_f3204fe1fff3f0ac] = env->getMethodID(cls, "getIonoModel", "()Lorg/orekit/models/earth/ionosphere/IonosphericModel;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
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
          static PyObject *t_BaseRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeIonosphericDelayModifier_getParametersDrivers(t_BaseRangeIonosphericDelayModifier *self);
          static PyObject *t_BaseRangeIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeIonosphericDelayModifier, t_BaseRangeIonosphericDelayModifier, BaseRangeIonosphericDelayModifier);

          void t_BaseRangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeIonosphericDelayModifier), &PY_TYPE_DEF(BaseRangeIonosphericDelayModifier), module, "BaseRangeIonosphericDelayModifier", 0);
          }

          void t_BaseRangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeIonosphericDelayModifier), "class_", make_descriptor(BaseRangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeIonosphericDelayModifier::wrap_Object(BaseRangeIonosphericDelayModifier(((t_BaseRangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeIonosphericDelayModifier_getParametersDrivers(t_BaseRangeIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/utils/PythonFieldPVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonFieldPVCoordinatesProvider::class$ = NULL;
      jmethodID *PythonFieldPVCoordinatesProvider::mids$ = NULL;
      bool PythonFieldPVCoordinatesProvider::live$ = false;

      jclass PythonFieldPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonFieldPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_1b1a4229447f7bf7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldPVCoordinatesProvider::PythonFieldPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonFieldPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFieldPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFieldPVCoordinatesProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonFieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPVCoordinatesProvider_of_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args);
      static int t_PythonFieldPVCoordinatesProvider_init_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldPVCoordinatesProvider_finalize(t_PythonFieldPVCoordinatesProvider *self);
      static PyObject *t_PythonFieldPVCoordinatesProvider_pythonExtension(t_PythonFieldPVCoordinatesProvider *self, PyObject *args);
      static jobject JNICALL t_PythonFieldPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldPVCoordinatesProvider_get__self(t_PythonFieldPVCoordinatesProvider *self, void *data);
      static PyObject *t_PythonFieldPVCoordinatesProvider_get__parameters_(t_PythonFieldPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_PythonFieldPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldPVCoordinatesProvider, self),
        DECLARE_GET_FIELD(t_PythonFieldPVCoordinatesProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PythonFieldPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_PythonFieldPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_PythonFieldPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldPVCoordinatesProvider, t_PythonFieldPVCoordinatesProvider, PythonFieldPVCoordinatesProvider);
      PyObject *t_PythonFieldPVCoordinatesProvider::wrap_Object(const PythonFieldPVCoordinatesProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPVCoordinatesProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPVCoordinatesProvider *self = (t_PythonFieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldPVCoordinatesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPVCoordinatesProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPVCoordinatesProvider *self = (t_PythonFieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldPVCoordinatesProvider), &PY_TYPE_DEF(PythonFieldPVCoordinatesProvider), module, "PythonFieldPVCoordinatesProvider", 1);
      }

      void t_PythonFieldPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPVCoordinatesProvider), "class_", make_descriptor(PythonFieldPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPVCoordinatesProvider), "wrapfn_", make_descriptor(t_PythonFieldPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldPVCoordinatesProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonFieldPVCoordinatesProvider_getPVCoordinates0 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldPVCoordinatesProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PythonFieldPVCoordinatesProvider::wrap_Object(PythonFieldPVCoordinatesProvider(((t_PythonFieldPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_of_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldPVCoordinatesProvider_init_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldPVCoordinatesProvider object((jobject) NULL);

        INT_CALL(object = PythonFieldPVCoordinatesProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_finalize(t_PythonFieldPVCoordinatesProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_pythonExtension(t_PythonFieldPVCoordinatesProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
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

      static void JNICALL t_PythonFieldPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_get__self(t_PythonFieldPVCoordinatesProvider *self, void *data)
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
      static PyObject *t_PythonFieldPVCoordinatesProvider_get__parameters_(t_PythonFieldPVCoordinatesProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldODEEventHandler::class$ = NULL;
        jmethodID *FieldODEEventHandler::mids$ = NULL;
        bool FieldODEEventHandler::live$ = false;

        jclass FieldODEEventHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldODEEventHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventOccurred_90626baf6f42aedd] = env->getMethodID(cls, "eventOccurred", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/events/FieldODEEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_init_eb18bfd93775f3f3] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
            mids$[mid_resetState_f010636055240458] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/FieldODEState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action FieldODEEventHandler::eventOccurred(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::events::FieldODEEventDetector & a1, jboolean a2) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_90626baf6f42aedd], a0.this$, a1.this$, a2));
        }

        void FieldODEEventHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::ode::events::FieldODEEventDetector & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_eb18bfd93775f3f3], a0.this$, a1.this$, a2.this$);
        }

        ::org::hipparchus::ode::FieldODEState FieldODEEventHandler::resetState(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a1) const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_resetState_f010636055240458], a0.this$, a1.this$));
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
      namespace events {
        static PyObject *t_FieldODEEventHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventHandler_of_(t_FieldODEEventHandler *self, PyObject *args);
        static PyObject *t_FieldODEEventHandler_eventOccurred(t_FieldODEEventHandler *self, PyObject *args);
        static PyObject *t_FieldODEEventHandler_init(t_FieldODEEventHandler *self, PyObject *args);
        static PyObject *t_FieldODEEventHandler_resetState(t_FieldODEEventHandler *self, PyObject *args);
        static PyObject *t_FieldODEEventHandler_get__parameters_(t_FieldODEEventHandler *self, void *data);
        static PyGetSetDef t_FieldODEEventHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEEventHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEEventHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEEventHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEEventHandler, eventOccurred, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEEventHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEEventHandler, resetState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEEventHandler)[] = {
          { Py_tp_methods, t_FieldODEEventHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEEventHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEEventHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEEventHandler, t_FieldODEEventHandler, FieldODEEventHandler);
        PyObject *t_FieldODEEventHandler::wrap_Object(const FieldODEEventHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventHandler *self = (t_FieldODEEventHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEEventHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventHandler *self = (t_FieldODEEventHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEEventHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEEventHandler), &PY_TYPE_DEF(FieldODEEventHandler), module, "FieldODEEventHandler", 0);
        }

        void t_FieldODEEventHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventHandler), "class_", make_descriptor(FieldODEEventHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventHandler), "wrapfn_", make_descriptor(t_FieldODEEventHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEEventHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEEventHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEEventHandler::wrap_Object(FieldODEEventHandler(((t_FieldODEEventHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEEventHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEEventHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEEventHandler_of_(t_FieldODEEventHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEEventHandler_eventOccurred(t_FieldODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldODEEventDetector a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean a2;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "KKZ", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_, &a2))
          {
            OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
          return NULL;
        }

        static PyObject *t_FieldODEEventHandler_init(t_FieldODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::events::FieldODEEventDetector a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldODEEventHandler_resetState(t_FieldODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::FieldODEState result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.resetState(a0, a1));
            return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", args);
          return NULL;
        }
        static PyObject *t_FieldODEEventHandler_get__parameters_(t_FieldODEEventHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractEphemerisMessage::class$ = NULL;
            jmethodID *AbstractEphemerisMessage::mids$ = NULL;
            bool AbstractEphemerisMessage::live$ = false;

            jclass AbstractEphemerisMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getEpochToc_80e11148db499dda] = env->getMethodID(cls, "getEpochToc", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getHealth_9981f74b2d109da6] = env->getMethodID(cls, "getHealth", "()D");
                mids$[mid_getPRN_d6ab429752e7c267] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getX_9981f74b2d109da6] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_9981f74b2d109da6] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_9981f74b2d109da6] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_9981f74b2d109da6] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_9981f74b2d109da6] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_9981f74b2d109da6] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getZDotDot", "()D");
                mids$[mid_setDate_8497861b879c83f7] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setEpochToc_8497861b879c83f7] = env->getMethodID(cls, "setEpochToc", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setHealth_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setHealth", "(D)V");
                mids$[mid_setPRN_8fd427ab23829bf5] = env->getMethodID(cls, "setPRN", "(I)V");
                mids$[mid_setX_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setX", "(D)V");
                mids$[mid_setXDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setXDot", "(D)V");
                mids$[mid_setXDotDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setXDotDot", "(D)V");
                mids$[mid_setY_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setY", "(D)V");
                mids$[mid_setYDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setYDot", "(D)V");
                mids$[mid_setYDotDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setYDotDot", "(D)V");
                mids$[mid_setZ_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setZ", "(D)V");
                mids$[mid_setZDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setZDot", "(D)V");
                mids$[mid_setZDotDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setZDotDot", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractEphemerisMessage::AbstractEphemerisMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            ::org::orekit::time::AbsoluteDate AbstractEphemerisMessage::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
            }

            ::org::orekit::time::AbsoluteDate AbstractEphemerisMessage::getEpochToc() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochToc_80e11148db499dda]));
            }

            jdouble AbstractEphemerisMessage::getHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHealth_9981f74b2d109da6]);
            }

            jint AbstractEphemerisMessage::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_d6ab429752e7c267]);
            }

            jdouble AbstractEphemerisMessage::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_9981f74b2d109da6]);
            }

            jdouble AbstractEphemerisMessage::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_9981f74b2d109da6]);
            }

            jdouble AbstractEphemerisMessage::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_9981f74b2d109da6]);
            }

            jdouble AbstractEphemerisMessage::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_9981f74b2d109da6]);
            }

            jdouble AbstractEphemerisMessage::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_9981f74b2d109da6]);
            }

            jdouble AbstractEphemerisMessage::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_9981f74b2d109da6]);
            }

            jdouble AbstractEphemerisMessage::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_9981f74b2d109da6]);
            }

            jdouble AbstractEphemerisMessage::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_9981f74b2d109da6]);
            }

            jdouble AbstractEphemerisMessage::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_9981f74b2d109da6]);
            }

            void AbstractEphemerisMessage::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDate_8497861b879c83f7], a0.this$);
            }

            void AbstractEphemerisMessage::setEpochToc(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpochToc_8497861b879c83f7], a0.this$);
            }

            void AbstractEphemerisMessage::setHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_1ad26e8c8c0cd65b], a0);
            }

            void AbstractEphemerisMessage::setPRN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPRN_8fd427ab23829bf5], a0);
            }

            void AbstractEphemerisMessage::setX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setX_1ad26e8c8c0cd65b], a0);
            }

            void AbstractEphemerisMessage::setXDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXDot_1ad26e8c8c0cd65b], a0);
            }

            void AbstractEphemerisMessage::setXDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXDotDot_1ad26e8c8c0cd65b], a0);
            }

            void AbstractEphemerisMessage::setY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setY_1ad26e8c8c0cd65b], a0);
            }

            void AbstractEphemerisMessage::setYDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYDot_1ad26e8c8c0cd65b], a0);
            }

            void AbstractEphemerisMessage::setYDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYDotDot_1ad26e8c8c0cd65b], a0);
            }

            void AbstractEphemerisMessage::setZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZ_1ad26e8c8c0cd65b], a0);
            }

            void AbstractEphemerisMessage::setZDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZDot_1ad26e8c8c0cd65b], a0);
            }

            void AbstractEphemerisMessage::setZDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZDotDot_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_AbstractEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractEphemerisMessage_init_(t_AbstractEphemerisMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractEphemerisMessage_getDate(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getEpochToc(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getHealth(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getPRN(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getX(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getXDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getXDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getY(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getYDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getYDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZ(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_setDate(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setEpochToc(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setHealth(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setPRN(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setX(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setXDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setXDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setY(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setYDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setYDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZ(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_get__date(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__date(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__epochToc(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__epochToc(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__health(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__health(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__pRN(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__pRN(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__x(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__x(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__xDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__xDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__xDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__xDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__y(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__y(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__yDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__yDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__yDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__yDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__z(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__z(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__zDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__zDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__zDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__zDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_AbstractEphemerisMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, date),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, epochToc),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, health),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, pRN),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, x),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, xDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, xDotDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, y),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, yDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, yDotDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, z),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, zDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractEphemerisMessage__methods_[] = {
              DECLARE_METHOD(t_AbstractEphemerisMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getEpochToc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getX, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getY, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZ, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setDate, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setEpochToc, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setHealth, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setPRN, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setX, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setXDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setXDotDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setY, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setYDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setYDotDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZ, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZDotDot, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractEphemerisMessage)[] = {
              { Py_tp_methods, t_AbstractEphemerisMessage__methods_ },
              { Py_tp_init, (void *) t_AbstractEphemerisMessage_init_ },
              { Py_tp_getset, t_AbstractEphemerisMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractEphemerisMessage)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractEphemerisMessage, t_AbstractEphemerisMessage, AbstractEphemerisMessage);

            void t_AbstractEphemerisMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractEphemerisMessage), &PY_TYPE_DEF(AbstractEphemerisMessage), module, "AbstractEphemerisMessage", 0);
            }

            void t_AbstractEphemerisMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "class_", make_descriptor(AbstractEphemerisMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "wrapfn_", make_descriptor(t_AbstractEphemerisMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractEphemerisMessage::initializeClass, 1)))
                return NULL;
              return t_AbstractEphemerisMessage::wrap_Object(AbstractEphemerisMessage(((t_AbstractEphemerisMessage *) arg)->object.this$));
            }
            static PyObject *t_AbstractEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractEphemerisMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractEphemerisMessage_init_(t_AbstractEphemerisMessage *self, PyObject *args, PyObject *kwds)
            {
              AbstractEphemerisMessage object((jobject) NULL);

              INT_CALL(object = AbstractEphemerisMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_AbstractEphemerisMessage_getDate(t_AbstractEphemerisMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractEphemerisMessage_getEpochToc(t_AbstractEphemerisMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractEphemerisMessage_getHealth(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHealth());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getPRN(t_AbstractEphemerisMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getX(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getXDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getXDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getY(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getYDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getYDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZ(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_setDate(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDate", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setEpochToc(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpochToc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpochToc", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setHealth(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setPRN(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setPRN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPRN", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setX(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setX", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setXDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setXDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setY(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setY", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setYDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setYDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZ(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZ", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_get__date(t_AbstractEphemerisMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractEphemerisMessage_set__date(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "date", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__epochToc(t_AbstractEphemerisMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractEphemerisMessage_set__epochToc(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpochToc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epochToc", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__health(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHealth());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__health(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__pRN(t_AbstractEphemerisMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }
            static int t_AbstractEphemerisMessage_set__pRN(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setPRN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pRN", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__x(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__x(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "x", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__xDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__xDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__xDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__xDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xDotDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__y(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__y(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "y", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__yDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__yDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "yDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__yDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__yDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "yDotDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__z(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__z(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "z", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__zDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__zDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__zDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__zDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zDotDot", arg);
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
#include "org/hipparchus/stat/descriptive/moment/Kurtosis.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/moment/Kurtosis.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Kurtosis::class$ = NULL;
          jmethodID *Kurtosis::mids$ = NULL;
          bool Kurtosis::live$ = false;

          jclass Kurtosis::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Kurtosis");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_6126927dba844d69] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Kurtosis;");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Kurtosis::Kurtosis() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void Kurtosis::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          Kurtosis Kurtosis::copy() const
          {
            return Kurtosis(env->callObjectMethod(this$, mids$[mid_copy_6126927dba844d69]));
          }

          jdouble Kurtosis::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jlong Kurtosis::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble Kurtosis::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          void Kurtosis::increment(jdouble a0) const
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
          static PyObject *t_Kurtosis_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Kurtosis_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Kurtosis_init_(t_Kurtosis *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Kurtosis_clear(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_copy(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_evaluate(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_getN(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_getResult(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_increment(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_get__n(t_Kurtosis *self, void *data);
          static PyObject *t_Kurtosis_get__result(t_Kurtosis *self, void *data);
          static PyGetSetDef t_Kurtosis__fields_[] = {
            DECLARE_GET_FIELD(t_Kurtosis, n),
            DECLARE_GET_FIELD(t_Kurtosis, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Kurtosis__methods_[] = {
            DECLARE_METHOD(t_Kurtosis, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Kurtosis, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Kurtosis, clear, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, copy, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, getN, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Kurtosis)[] = {
            { Py_tp_methods, t_Kurtosis__methods_ },
            { Py_tp_init, (void *) t_Kurtosis_init_ },
            { Py_tp_getset, t_Kurtosis__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Kurtosis)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Kurtosis, t_Kurtosis, Kurtosis);

          void t_Kurtosis::install(PyObject *module)
          {
            installType(&PY_TYPE(Kurtosis), &PY_TYPE_DEF(Kurtosis), module, "Kurtosis", 0);
          }

          void t_Kurtosis::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Kurtosis), "class_", make_descriptor(Kurtosis::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Kurtosis), "wrapfn_", make_descriptor(t_Kurtosis::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Kurtosis), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Kurtosis_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Kurtosis::initializeClass, 1)))
              return NULL;
            return t_Kurtosis::wrap_Object(Kurtosis(((t_Kurtosis *) arg)->object.this$));
          }
          static PyObject *t_Kurtosis_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Kurtosis::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Kurtosis_init_(t_Kurtosis *self, PyObject *args, PyObject *kwds)
          {
            Kurtosis object((jobject) NULL);

            INT_CALL(object = Kurtosis());
            self->object = object;

            return 0;
          }

          static PyObject *t_Kurtosis_clear(t_Kurtosis *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Kurtosis_copy(t_Kurtosis *self, PyObject *args)
          {
            Kurtosis result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Kurtosis::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Kurtosis_evaluate(t_Kurtosis *self, PyObject *args)
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

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Kurtosis_getN(t_Kurtosis *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Kurtosis_getResult(t_Kurtosis *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Kurtosis_increment(t_Kurtosis *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Kurtosis_get__n(t_Kurtosis *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Kurtosis_get__result(t_Kurtosis *self, void *data)
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
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorMeanPlaneCrossing::class$ = NULL;
        jmethodID *SensorMeanPlaneCrossing::mids$ = NULL;
        bool SensorMeanPlaneCrossing::live$ = false;

        jclass SensorMeanPlaneCrossing::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorMeanPlaneCrossing");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_59bbb07cdad689df] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/rugged/utils/SpacecraftToObservedBody;IIZZID)V");
            mids$[mid_init$_cd0bb1e3ab180aa0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/rugged/utils/SpacecraftToObservedBody;IIZZIDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/util/stream/Stream;)V");
            mids$[mid_find_ce491b6a117d4860] = env->getMethodID(cls, "find", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult;");
            mids$[mid_getAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAccuracy", "()D");
            mids$[mid_getCachedResults_11e4ca8182c1933d] = env->getMethodID(cls, "getCachedResults", "()Ljava/util/stream/Stream;");
            mids$[mid_getMaxEval_d6ab429752e7c267] = env->getMethodID(cls, "getMaxEval", "()I");
            mids$[mid_getMaxLine_d6ab429752e7c267] = env->getMethodID(cls, "getMaxLine", "()I");
            mids$[mid_getMeanPlaneNormal_032312bdeb3f2f93] = env->getMethodID(cls, "getMeanPlaneNormal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getMinLine_d6ab429752e7c267] = env->getMethodID(cls, "getMinLine", "()I");
            mids$[mid_getScToBody_a784fa07890a0e9f] = env->getMethodID(cls, "getScToBody", "()Lorg/orekit/rugged/utils/SpacecraftToObservedBody;");
            mids$[mid_getSensor_98f3dfe0c28ffc3c] = env->getMethodID(cls, "getSensor", "()Lorg/orekit/rugged/linesensor/LineSensor;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorMeanPlaneCrossing::SensorMeanPlaneCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a1, jint a2, jint a3, jboolean a4, jboolean a5, jint a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_59bbb07cdad689df, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

        SensorMeanPlaneCrossing::SensorMeanPlaneCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a1, jint a2, jint a3, jboolean a4, jboolean a5, jint a6, jdouble a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::java::util::stream::Stream & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd0bb1e3ab180aa0, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$)) {}

        ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult SensorMeanPlaneCrossing::find(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult(env->callObjectMethod(this$, mids$[mid_find_ce491b6a117d4860], a0.this$));
        }

        jdouble SensorMeanPlaneCrossing::getAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAccuracy_9981f74b2d109da6]);
        }

        ::java::util::stream::Stream SensorMeanPlaneCrossing::getCachedResults() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getCachedResults_11e4ca8182c1933d]));
        }

        jint SensorMeanPlaneCrossing::getMaxEval() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEval_d6ab429752e7c267]);
        }

        jint SensorMeanPlaneCrossing::getMaxLine() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxLine_d6ab429752e7c267]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing::getMeanPlaneNormal() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getMeanPlaneNormal_032312bdeb3f2f93]));
        }

        jint SensorMeanPlaneCrossing::getMinLine() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinLine_d6ab429752e7c267]);
        }

        ::org::orekit::rugged::utils::SpacecraftToObservedBody SensorMeanPlaneCrossing::getScToBody() const
        {
          return ::org::orekit::rugged::utils::SpacecraftToObservedBody(env->callObjectMethod(this$, mids$[mid_getScToBody_a784fa07890a0e9f]));
        }

        ::org::orekit::rugged::linesensor::LineSensor SensorMeanPlaneCrossing::getSensor() const
        {
          return ::org::orekit::rugged::linesensor::LineSensor(env->callObjectMethod(this$, mids$[mid_getSensor_98f3dfe0c28ffc3c]));
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
        static PyObject *t_SensorMeanPlaneCrossing_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorMeanPlaneCrossing_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorMeanPlaneCrossing_init_(t_SensorMeanPlaneCrossing *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorMeanPlaneCrossing_find(t_SensorMeanPlaneCrossing *self, PyObject *arg);
        static PyObject *t_SensorMeanPlaneCrossing_getAccuracy(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getCachedResults(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMaxEval(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMaxLine(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMeanPlaneNormal(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMinLine(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getScToBody(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getSensor(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_get__accuracy(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__cachedResults(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__maxEval(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__maxLine(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__meanPlaneNormal(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__minLine(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__scToBody(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__sensor(t_SensorMeanPlaneCrossing *self, void *data);
        static PyGetSetDef t_SensorMeanPlaneCrossing__fields_[] = {
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, accuracy),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, cachedResults),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, maxEval),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, maxLine),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, meanPlaneNormal),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, minLine),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, scToBody),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, sensor),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SensorMeanPlaneCrossing__methods_[] = {
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, find, METH_O),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getCachedResults, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMaxEval, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMaxLine, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMeanPlaneNormal, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMinLine, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getScToBody, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getSensor, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorMeanPlaneCrossing)[] = {
          { Py_tp_methods, t_SensorMeanPlaneCrossing__methods_ },
          { Py_tp_init, (void *) t_SensorMeanPlaneCrossing_init_ },
          { Py_tp_getset, t_SensorMeanPlaneCrossing__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorMeanPlaneCrossing)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorMeanPlaneCrossing, t_SensorMeanPlaneCrossing, SensorMeanPlaneCrossing);

        void t_SensorMeanPlaneCrossing::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorMeanPlaneCrossing), &PY_TYPE_DEF(SensorMeanPlaneCrossing), module, "SensorMeanPlaneCrossing", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "CrossingResult", make_descriptor(&PY_TYPE_DEF(SensorMeanPlaneCrossing$CrossingResult)));
        }

        void t_SensorMeanPlaneCrossing::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "class_", make_descriptor(SensorMeanPlaneCrossing::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "wrapfn_", make_descriptor(t_SensorMeanPlaneCrossing::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorMeanPlaneCrossing_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorMeanPlaneCrossing::initializeClass, 1)))
            return NULL;
          return t_SensorMeanPlaneCrossing::wrap_Object(SensorMeanPlaneCrossing(((t_SensorMeanPlaneCrossing *) arg)->object.this$));
        }
        static PyObject *t_SensorMeanPlaneCrossing_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorMeanPlaneCrossing::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorMeanPlaneCrossing_init_(t_SensorMeanPlaneCrossing *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
              ::org::orekit::rugged::utils::SpacecraftToObservedBody a1((jobject) NULL);
              jint a2;
              jint a3;
              jboolean a4;
              jboolean a5;
              jint a6;
              jdouble a7;
              SensorMeanPlaneCrossing object((jobject) NULL);

              if (!parseArgs(args, "kkIIZZID", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = SensorMeanPlaneCrossing(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
              ::org::orekit::rugged::utils::SpacecraftToObservedBody a1((jobject) NULL);
              jint a2;
              jint a3;
              jboolean a4;
              jboolean a5;
              jint a6;
              jdouble a7;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a8((jobject) NULL);
              ::java::util::stream::Stream a9((jobject) NULL);
              PyTypeObject **p9;
              SensorMeanPlaneCrossing object((jobject) NULL);

              if (!parseArgs(args, "kkIIZZIDkK", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &p9, ::java::util::stream::t_Stream::parameters_))
              {
                INT_CALL(object = SensorMeanPlaneCrossing(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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

        static PyObject *t_SensorMeanPlaneCrossing_find(t_SensorMeanPlaneCrossing *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.find(a0));
            return ::org::orekit::rugged::linesensor::t_SensorMeanPlaneCrossing$CrossingResult::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "find", arg);
          return NULL;
        }

        static PyObject *t_SensorMeanPlaneCrossing_getAccuracy(t_SensorMeanPlaneCrossing *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getCachedResults(t_SensorMeanPlaneCrossing *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getCachedResults());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::rugged::linesensor::PY_TYPE(SensorMeanPlaneCrossing$CrossingResult));
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMaxEval(t_SensorMeanPlaneCrossing *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEval());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMaxLine(t_SensorMeanPlaneCrossing *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxLine());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMeanPlaneNormal(t_SensorMeanPlaneCrossing *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeanPlaneNormal());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMinLine(t_SensorMeanPlaneCrossing *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinLine());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getScToBody(t_SensorMeanPlaneCrossing *self)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getSensor(t_SensorMeanPlaneCrossing *self)
        {
          ::org::orekit::rugged::linesensor::LineSensor result((jobject) NULL);
          OBJ_CALL(result = self->object.getSensor());
          return ::org::orekit::rugged::linesensor::t_LineSensor::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__accuracy(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__cachedResults(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getCachedResults());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__maxEval(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEval());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__maxLine(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxLine());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__meanPlaneNormal(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeanPlaneNormal());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__minLine(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinLine());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__scToBody(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__sensor(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::org::orekit::rugged::linesensor::LineSensor value((jobject) NULL);
          OBJ_CALL(value = self->object.getSensor());
          return ::org::orekit::rugged::linesensor::t_LineSensor::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *StepHandlerMultiplexer::class$ = NULL;
        jmethodID *StepHandlerMultiplexer::mids$ = NULL;
        bool StepHandlerMultiplexer::live$ = false;

        jclass StepHandlerMultiplexer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/StepHandlerMultiplexer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_a99d5b52ca8703a8] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
            mids$[mid_add_e1387cf2cfecde7f] = env->getMethodID(cls, "add", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_finish_72b846eb87f3af9a] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getHandlers_d751c1a57012b438] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
            mids$[mid_handleStep_9db9d9fe85cac7f9] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_remove_f2592a12facd1d6e] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_remove_a99d5b52ca8703a8] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepHandlerMultiplexer::StepHandlerMultiplexer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void StepHandlerMultiplexer::add(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_a99d5b52ca8703a8], a0.this$);
        }

        void StepHandlerMultiplexer::add(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_add_e1387cf2cfecde7f], a0, a1.this$);
        }

        void StepHandlerMultiplexer::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
        }

        void StepHandlerMultiplexer::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_72b846eb87f3af9a], a0.this$);
        }

        ::java::util::List StepHandlerMultiplexer::getHandlers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_d751c1a57012b438]));
        }

        void StepHandlerMultiplexer::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_9db9d9fe85cac7f9], a0.this$);
        }

        void StepHandlerMultiplexer::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
        }

        void StepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_f2592a12facd1d6e], a0.this$);
        }

        void StepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_a99d5b52ca8703a8], a0.this$);
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
        static PyObject *t_StepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepHandlerMultiplexer_init_(t_StepHandlerMultiplexer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepHandlerMultiplexer_add(t_StepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_StepHandlerMultiplexer_clear(t_StepHandlerMultiplexer *self);
        static PyObject *t_StepHandlerMultiplexer_finish(t_StepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_StepHandlerMultiplexer_getHandlers(t_StepHandlerMultiplexer *self);
        static PyObject *t_StepHandlerMultiplexer_handleStep(t_StepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_StepHandlerMultiplexer_init(t_StepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_StepHandlerMultiplexer_remove(t_StepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_StepHandlerMultiplexer_get__handlers(t_StepHandlerMultiplexer *self, void *data);
        static PyGetSetDef t_StepHandlerMultiplexer__fields_[] = {
          DECLARE_GET_FIELD(t_StepHandlerMultiplexer, handlers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepHandlerMultiplexer__methods_[] = {
          DECLARE_METHOD(t_StepHandlerMultiplexer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, add, METH_VARARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, clear, METH_NOARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, finish, METH_O),
          DECLARE_METHOD(t_StepHandlerMultiplexer, getHandlers, METH_NOARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, handleStep, METH_O),
          DECLARE_METHOD(t_StepHandlerMultiplexer, init, METH_VARARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, remove, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepHandlerMultiplexer)[] = {
          { Py_tp_methods, t_StepHandlerMultiplexer__methods_ },
          { Py_tp_init, (void *) t_StepHandlerMultiplexer_init_ },
          { Py_tp_getset, t_StepHandlerMultiplexer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepHandlerMultiplexer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepHandlerMultiplexer, t_StepHandlerMultiplexer, StepHandlerMultiplexer);

        void t_StepHandlerMultiplexer::install(PyObject *module)
        {
          installType(&PY_TYPE(StepHandlerMultiplexer), &PY_TYPE_DEF(StepHandlerMultiplexer), module, "StepHandlerMultiplexer", 0);
        }

        void t_StepHandlerMultiplexer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepHandlerMultiplexer), "class_", make_descriptor(StepHandlerMultiplexer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepHandlerMultiplexer), "wrapfn_", make_descriptor(t_StepHandlerMultiplexer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepHandlerMultiplexer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepHandlerMultiplexer::initializeClass, 1)))
            return NULL;
          return t_StepHandlerMultiplexer::wrap_Object(StepHandlerMultiplexer(((t_StepHandlerMultiplexer *) arg)->object.this$));
        }
        static PyObject *t_StepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepHandlerMultiplexer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepHandlerMultiplexer_init_(t_StepHandlerMultiplexer *self, PyObject *args, PyObject *kwds)
        {
          StepHandlerMultiplexer object((jobject) NULL);

          INT_CALL(object = StepHandlerMultiplexer());
          self->object = object;

          return 0;
        }

        static PyObject *t_StepHandlerMultiplexer_add(t_StepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::OrekitStepHandler a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &a0))
              {
                OBJ_CALL(self->object.add(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              ::org::orekit::propagation::sampling::OrekitFixedStepHandler a1((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.add(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_StepHandlerMultiplexer_clear(t_StepHandlerMultiplexer *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StepHandlerMultiplexer_finish(t_StepHandlerMultiplexer *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_StepHandlerMultiplexer_getHandlers(t_StepHandlerMultiplexer *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::sampling::PY_TYPE(OrekitStepHandler));
        }

        static PyObject *t_StepHandlerMultiplexer_handleStep(t_StepHandlerMultiplexer *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_StepHandlerMultiplexer_init(t_StepHandlerMultiplexer *self, PyObject *args)
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

        static PyObject *t_StepHandlerMultiplexer_remove(t_StepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::OrekitFixedStepHandler a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::sampling::OrekitStepHandler a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &a0))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remove", args);
          return NULL;
        }

        static PyObject *t_StepHandlerMultiplexer_get__handlers(t_StepHandlerMultiplexer *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitFixedStepHandler::class$ = NULL;
        jmethodID *OrekitFixedStepHandler::mids$ = NULL;
        bool OrekitFixedStepHandler::live$ = false;

        jclass OrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_72b846eb87f3af9a] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_72b846eb87f3af9a] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_init_c410ce24bfc8448e] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void OrekitFixedStepHandler::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_72b846eb87f3af9a], a0.this$);
        }

        void OrekitFixedStepHandler::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_72b846eb87f3af9a], a0.this$);
        }

        void OrekitFixedStepHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_c410ce24bfc8448e], a0.this$, a1.this$, a2);
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
        static PyObject *t_OrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_finish(t_OrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_handleStep(t_OrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_init(t_OrekitFixedStepHandler *self, PyObject *args);

        static PyMethodDef t_OrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_OrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitFixedStepHandler, finish, METH_O),
          DECLARE_METHOD(t_OrekitFixedStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_OrekitFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_OrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitFixedStepHandler, t_OrekitFixedStepHandler, OrekitFixedStepHandler);

        void t_OrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitFixedStepHandler), &PY_TYPE_DEF(OrekitFixedStepHandler), module, "OrekitFixedStepHandler", 0);
        }

        void t_OrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitFixedStepHandler), "class_", make_descriptor(OrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitFixedStepHandler), "wrapfn_", make_descriptor(t_OrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_OrekitFixedStepHandler::wrap_Object(OrekitFixedStepHandler(((t_OrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_OrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OrekitFixedStepHandler_finish(t_OrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_OrekitFixedStepHandler_handleStep(t_OrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_OrekitFixedStepHandler_init(t_OrekitFixedStepHandler *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;

          if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
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
#include "org/orekit/rugged/raster/PythonTileFactory.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *PythonTileFactory::class$ = NULL;
        jmethodID *PythonTileFactory::mids$ = NULL;
        bool PythonTileFactory::live$ = false;

        jclass PythonTileFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/PythonTileFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_createTile_d40b50c92d1487cb] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/raster/Tile;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonTileFactory::PythonTileFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonTileFactory::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonTileFactory::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonTileFactory::pythonExtension(jlong a0) const
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
    namespace rugged {
      namespace raster {
        static PyObject *t_PythonTileFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonTileFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonTileFactory_of_(t_PythonTileFactory *self, PyObject *args);
        static int t_PythonTileFactory_init_(t_PythonTileFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonTileFactory_finalize(t_PythonTileFactory *self);
        static PyObject *t_PythonTileFactory_pythonExtension(t_PythonTileFactory *self, PyObject *args);
        static jobject JNICALL t_PythonTileFactory_createTile0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonTileFactory_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonTileFactory_get__self(t_PythonTileFactory *self, void *data);
        static PyObject *t_PythonTileFactory_get__parameters_(t_PythonTileFactory *self, void *data);
        static PyGetSetDef t_PythonTileFactory__fields_[] = {
          DECLARE_GET_FIELD(t_PythonTileFactory, self),
          DECLARE_GET_FIELD(t_PythonTileFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonTileFactory__methods_[] = {
          DECLARE_METHOD(t_PythonTileFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTileFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTileFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonTileFactory, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonTileFactory, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonTileFactory)[] = {
          { Py_tp_methods, t_PythonTileFactory__methods_ },
          { Py_tp_init, (void *) t_PythonTileFactory_init_ },
          { Py_tp_getset, t_PythonTileFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonTileFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonTileFactory, t_PythonTileFactory, PythonTileFactory);
        PyObject *t_PythonTileFactory::wrap_Object(const PythonTileFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonTileFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonTileFactory *self = (t_PythonTileFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonTileFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonTileFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonTileFactory *self = (t_PythonTileFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonTileFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonTileFactory), &PY_TYPE_DEF(PythonTileFactory), module, "PythonTileFactory", 1);
        }

        void t_PythonTileFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileFactory), "class_", make_descriptor(PythonTileFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileFactory), "wrapfn_", make_descriptor(t_PythonTileFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileFactory), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonTileFactory::initializeClass);
          JNINativeMethod methods[] = {
            { "createTile", "()Lorg/orekit/rugged/raster/Tile;", (void *) t_PythonTileFactory_createTile0 },
            { "pythonDecRef", "()V", (void *) t_PythonTileFactory_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonTileFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonTileFactory::initializeClass, 1)))
            return NULL;
          return t_PythonTileFactory::wrap_Object(PythonTileFactory(((t_PythonTileFactory *) arg)->object.this$));
        }
        static PyObject *t_PythonTileFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonTileFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonTileFactory_of_(t_PythonTileFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonTileFactory_init_(t_PythonTileFactory *self, PyObject *args, PyObject *kwds)
        {
          PythonTileFactory object((jobject) NULL);

          INT_CALL(object = PythonTileFactory());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonTileFactory_finalize(t_PythonTileFactory *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonTileFactory_pythonExtension(t_PythonTileFactory *self, PyObject *args)
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

        static jobject JNICALL t_PythonTileFactory_createTile0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTileFactory::mids$[PythonTileFactory::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::rugged::raster::Tile value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "createTile", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::rugged::raster::Tile::initializeClass, &value))
          {
            throwTypeError("createTile", result);
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

        static void JNICALL t_PythonTileFactory_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTileFactory::mids$[PythonTileFactory::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonTileFactory::mids$[PythonTileFactory::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonTileFactory_get__self(t_PythonTileFactory *self, void *data)
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
        static PyObject *t_PythonTileFactory_get__parameters_(t_PythonTileFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/List.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *Maneuver::class$ = NULL;
        jmethodID *Maneuver::mids$ = NULL;
        bool Maneuver::live$ = false;

        jclass Maneuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/Maneuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_49fe3b908b3a29ec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;Lorg/orekit/forces/maneuvers/propulsion/PropulsionModel;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_addContribution_05bb906f491bab6b] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
            mids$[mid_addContribution_2fcaaed225365615] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getAttitudeOverride_2f73d1f4460b8d6c] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_fc9abda16ef946e0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getManeuverTriggers_9694695cc99bc836] = env->getMethodID(cls, "getManeuverTriggers", "()Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getPropulsionModel_7f9325840a7bbd68] = env->getMethodID(cls, "getPropulsionModel", "()Lorg/orekit/forces/maneuvers/propulsion/PropulsionModel;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Maneuver::Maneuver(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers & a1, const ::org::orekit::forces::maneuvers::propulsion::PropulsionModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49fe3b908b3a29ec, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Maneuver::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        void Maneuver::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_05bb906f491bab6b], a0.this$, a1.this$);
        }

        void Maneuver::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_2fcaaed225365615], a0.this$, a1.this$);
        }

        jboolean Maneuver::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        ::org::orekit::attitudes::AttitudeProvider Maneuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_2f73d1f4460b8d6c]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType Maneuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_fc9abda16ef946e0]));
        }

        ::java::util::stream::Stream Maneuver::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
        }

        ::java::util::stream::Stream Maneuver::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
        }

        ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers Maneuver::getManeuverTriggers() const
        {
          return ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers(env->callObjectMethod(this$, mids$[mid_getManeuverTriggers_9694695cc99bc836]));
        }

        ::java::lang::String Maneuver::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
        }

        ::java::util::List Maneuver::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        ::org::orekit::forces::maneuvers::propulsion::PropulsionModel Maneuver::getPropulsionModel() const
        {
          return ::org::orekit::forces::maneuvers::propulsion::PropulsionModel(env->callObjectMethod(this$, mids$[mid_getPropulsionModel_7f9325840a7bbd68]));
        }

        void Maneuver::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
        }

        void Maneuver::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
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
        static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Maneuver_acceleration(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_addContribution(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_dependsOnPositionOnly(t_Maneuver *self);
        static PyObject *t_Maneuver_getAttitudeOverride(t_Maneuver *self);
        static PyObject *t_Maneuver_getControl3DVectorCostType(t_Maneuver *self);
        static PyObject *t_Maneuver_getEventDetectors(t_Maneuver *self);
        static PyObject *t_Maneuver_getFieldEventDetectors(t_Maneuver *self, PyObject *arg);
        static PyObject *t_Maneuver_getManeuverTriggers(t_Maneuver *self);
        static PyObject *t_Maneuver_getName(t_Maneuver *self);
        static PyObject *t_Maneuver_getParametersDrivers(t_Maneuver *self);
        static PyObject *t_Maneuver_getPropulsionModel(t_Maneuver *self);
        static PyObject *t_Maneuver_init(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_get__attitudeOverride(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__control3DVectorCostType(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__eventDetectors(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__maneuverTriggers(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__name(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__parametersDrivers(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__propulsionModel(t_Maneuver *self, void *data);
        static PyGetSetDef t_Maneuver__fields_[] = {
          DECLARE_GET_FIELD(t_Maneuver, attitudeOverride),
          DECLARE_GET_FIELD(t_Maneuver, control3DVectorCostType),
          DECLARE_GET_FIELD(t_Maneuver, eventDetectors),
          DECLARE_GET_FIELD(t_Maneuver, maneuverTriggers),
          DECLARE_GET_FIELD(t_Maneuver, name),
          DECLARE_GET_FIELD(t_Maneuver, parametersDrivers),
          DECLARE_GET_FIELD(t_Maneuver, propulsionModel),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Maneuver__methods_[] = {
          DECLARE_METHOD(t_Maneuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Maneuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Maneuver, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_Maneuver, addContribution, METH_VARARGS),
          DECLARE_METHOD(t_Maneuver, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getAttitudeOverride, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getControl3DVectorCostType, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_Maneuver, getManeuverTriggers, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getName, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getPropulsionModel, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Maneuver)[] = {
          { Py_tp_methods, t_Maneuver__methods_ },
          { Py_tp_init, (void *) t_Maneuver_init_ },
          { Py_tp_getset, t_Maneuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Maneuver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Maneuver, t_Maneuver, Maneuver);

        void t_Maneuver::install(PyObject *module)
        {
          installType(&PY_TYPE(Maneuver), &PY_TYPE_DEF(Maneuver), module, "Maneuver", 0);
        }

        void t_Maneuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "class_", make_descriptor(Maneuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "wrapfn_", make_descriptor(t_Maneuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Maneuver::initializeClass, 1)))
            return NULL;
          return t_Maneuver::wrap_Object(Maneuver(((t_Maneuver *) arg)->object.this$));
        }
        static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Maneuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers a1((jobject) NULL);
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel a2((jobject) NULL);
          Maneuver object((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers::initializeClass, ::org::orekit::forces::maneuvers::propulsion::PropulsionModel::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = Maneuver(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Maneuver_acceleration(t_Maneuver *self, PyObject *args)
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

        static PyObject *t_Maneuver_addContribution(t_Maneuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::parameters_))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::numerical::TimeDerivativesEquations a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::numerical::TimeDerivativesEquations::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addContribution", args);
          return NULL;
        }

        static PyObject *t_Maneuver_dependsOnPositionOnly(t_Maneuver *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Maneuver_getAttitudeOverride(t_Maneuver *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getControl3DVectorCostType(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
          OBJ_CALL(result = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getEventDetectors(t_Maneuver *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_Maneuver_getFieldEventDetectors(t_Maneuver *self, PyObject *arg)
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

        static PyObject *t_Maneuver_getManeuverTriggers(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers result((jobject) NULL);
          OBJ_CALL(result = self->object.getManeuverTriggers());
          return ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggers::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getName(t_Maneuver *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Maneuver_getParametersDrivers(t_Maneuver *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_Maneuver_getPropulsionModel(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropulsionModel());
          return ::org::orekit::forces::maneuvers::propulsion::t_PropulsionModel::wrap_Object(result);
        }

        static PyObject *t_Maneuver_init(t_Maneuver *self, PyObject *args)
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

        static PyObject *t_Maneuver_get__attitudeOverride(t_Maneuver *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__control3DVectorCostType(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
          OBJ_CALL(value = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__eventDetectors(t_Maneuver *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__maneuverTriggers(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers value((jobject) NULL);
          OBJ_CALL(value = self->object.getManeuverTriggers());
          return ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggers::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__name(t_Maneuver *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Maneuver_get__parametersDrivers(t_Maneuver *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__propulsionModel(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropulsionModel());
          return ::org::orekit::forces::maneuvers::propulsion::t_PropulsionModel::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Logit$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logit$Parametric::class$ = NULL;
        jmethodID *Logit$Parametric::mids$ = NULL;
        bool Logit$Parametric::live$ = false;

        jclass Logit$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logit$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_bfc955188bf36f2c] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_4f42c7a8793320e4] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logit$Parametric::Logit$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        JArray< jdouble > Logit$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_bfc955188bf36f2c], a0, a1.this$));
        }

        jdouble Logit$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_4f42c7a8793320e4], a0, a1.this$);
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
        static PyObject *t_Logit$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logit$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logit$Parametric_init_(t_Logit$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logit$Parametric_gradient(t_Logit$Parametric *self, PyObject *args);
        static PyObject *t_Logit$Parametric_value(t_Logit$Parametric *self, PyObject *args);

        static PyMethodDef t_Logit$Parametric__methods_[] = {
          DECLARE_METHOD(t_Logit$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Logit$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logit$Parametric)[] = {
          { Py_tp_methods, t_Logit$Parametric__methods_ },
          { Py_tp_init, (void *) t_Logit$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logit$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logit$Parametric, t_Logit$Parametric, Logit$Parametric);

        void t_Logit$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Logit$Parametric), &PY_TYPE_DEF(Logit$Parametric), module, "Logit$Parametric", 0);
        }

        void t_Logit$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "class_", make_descriptor(Logit$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "wrapfn_", make_descriptor(t_Logit$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logit$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logit$Parametric::initializeClass, 1)))
            return NULL;
          return t_Logit$Parametric::wrap_Object(Logit$Parametric(((t_Logit$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Logit$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logit$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logit$Parametric_init_(t_Logit$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Logit$Parametric object((jobject) NULL);

          INT_CALL(object = Logit$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Logit$Parametric_gradient(t_Logit$Parametric *self, PyObject *args)
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

        static PyObject *t_Logit$Parametric_value(t_Logit$Parametric *self, PyObject *args)
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
#include "org/hipparchus/optim/univariate/MultiStartUnivariateOptimizer.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *MultiStartUnivariateOptimizer::class$ = NULL;
        jmethodID *MultiStartUnivariateOptimizer::mids$ = NULL;
        bool MultiStartUnivariateOptimizer::live$ = false;

        jclass MultiStartUnivariateOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/MultiStartUnivariateOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e4d93d959ad5a158] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/univariate/UnivariateOptimizer;ILorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getOptima_0b09cd040eebf691] = env->getMethodID(cls, "getOptima", "()[Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_optimize_d4d3dd9bd6992b67] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_doOptimize_3bb7748f0ac76925] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiStartUnivariateOptimizer::MultiStartUnivariateOptimizer(const ::org::hipparchus::optim::univariate::UnivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomGenerator & a2) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_e4d93d959ad5a158, a0.this$, a1, a2.this$)) {}

        jint MultiStartUnivariateOptimizer::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
        }

        JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair > MultiStartUnivariateOptimizer::getOptima() const
        {
          return JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair >(env->callObjectMethod(this$, mids$[mid_getOptima_0b09cd040eebf691]));
        }

        ::org::hipparchus::optim::univariate::UnivariatePointValuePair MultiStartUnivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_d4d3dd9bd6992b67], a0.this$));
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
        static PyObject *t_MultiStartUnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiStartUnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiStartUnivariateOptimizer_of_(t_MultiStartUnivariateOptimizer *self, PyObject *args);
        static int t_MultiStartUnivariateOptimizer_init_(t_MultiStartUnivariateOptimizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultiStartUnivariateOptimizer_getEvaluations(t_MultiStartUnivariateOptimizer *self, PyObject *args);
        static PyObject *t_MultiStartUnivariateOptimizer_getOptima(t_MultiStartUnivariateOptimizer *self);
        static PyObject *t_MultiStartUnivariateOptimizer_optimize(t_MultiStartUnivariateOptimizer *self, PyObject *args);
        static PyObject *t_MultiStartUnivariateOptimizer_get__evaluations(t_MultiStartUnivariateOptimizer *self, void *data);
        static PyObject *t_MultiStartUnivariateOptimizer_get__optima(t_MultiStartUnivariateOptimizer *self, void *data);
        static PyObject *t_MultiStartUnivariateOptimizer_get__parameters_(t_MultiStartUnivariateOptimizer *self, void *data);
        static PyGetSetDef t_MultiStartUnivariateOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_MultiStartUnivariateOptimizer, evaluations),
          DECLARE_GET_FIELD(t_MultiStartUnivariateOptimizer, optima),
          DECLARE_GET_FIELD(t_MultiStartUnivariateOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultiStartUnivariateOptimizer__methods_[] = {
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, getEvaluations, METH_VARARGS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, getOptima, METH_NOARGS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, optimize, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiStartUnivariateOptimizer)[] = {
          { Py_tp_methods, t_MultiStartUnivariateOptimizer__methods_ },
          { Py_tp_init, (void *) t_MultiStartUnivariateOptimizer_init_ },
          { Py_tp_getset, t_MultiStartUnivariateOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiStartUnivariateOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::univariate::UnivariateOptimizer),
          NULL
        };

        DEFINE_TYPE(MultiStartUnivariateOptimizer, t_MultiStartUnivariateOptimizer, MultiStartUnivariateOptimizer);
        PyObject *t_MultiStartUnivariateOptimizer::wrap_Object(const MultiStartUnivariateOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiStartUnivariateOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiStartUnivariateOptimizer *self = (t_MultiStartUnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MultiStartUnivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiStartUnivariateOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiStartUnivariateOptimizer *self = (t_MultiStartUnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MultiStartUnivariateOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiStartUnivariateOptimizer), &PY_TYPE_DEF(MultiStartUnivariateOptimizer), module, "MultiStartUnivariateOptimizer", 0);
        }

        void t_MultiStartUnivariateOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartUnivariateOptimizer), "class_", make_descriptor(MultiStartUnivariateOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartUnivariateOptimizer), "wrapfn_", make_descriptor(t_MultiStartUnivariateOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartUnivariateOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiStartUnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiStartUnivariateOptimizer::initializeClass, 1)))
            return NULL;
          return t_MultiStartUnivariateOptimizer::wrap_Object(MultiStartUnivariateOptimizer(((t_MultiStartUnivariateOptimizer *) arg)->object.this$));
        }
        static PyObject *t_MultiStartUnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiStartUnivariateOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiStartUnivariateOptimizer_of_(t_MultiStartUnivariateOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MultiStartUnivariateOptimizer_init_(t_MultiStartUnivariateOptimizer *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::optim::univariate::UnivariateOptimizer a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          ::org::hipparchus::random::RandomGenerator a2((jobject) NULL);
          MultiStartUnivariateOptimizer object((jobject) NULL);

          if (!parseArgs(args, "KIk", ::org::hipparchus::optim::univariate::UnivariateOptimizer::initializeClass, ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &p0, ::org::hipparchus::optim::univariate::t_UnivariateOptimizer::parameters_, &a1, &a2))
          {
            INT_CALL(object = MultiStartUnivariateOptimizer(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultiStartUnivariateOptimizer_getEvaluations(t_MultiStartUnivariateOptimizer *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEvaluations());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(MultiStartUnivariateOptimizer), (PyObject *) self, "getEvaluations", args, 2);
        }

        static PyObject *t_MultiStartUnivariateOptimizer_getOptima(t_MultiStartUnivariateOptimizer *self)
        {
          JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair > result((jobject) NULL);
          OBJ_CALL(result = self->object.getOptima());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_jobject);
        }

        static PyObject *t_MultiStartUnivariateOptimizer_optimize(t_MultiStartUnivariateOptimizer *self, PyObject *args)
        {
          JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_Object(result);
          }

          return callSuper(PY_TYPE(MultiStartUnivariateOptimizer), (PyObject *) self, "optimize", args, 2);
        }
        static PyObject *t_MultiStartUnivariateOptimizer_get__parameters_(t_MultiStartUnivariateOptimizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MultiStartUnivariateOptimizer_get__evaluations(t_MultiStartUnivariateOptimizer *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_MultiStartUnivariateOptimizer_get__optima(t_MultiStartUnivariateOptimizer *self, void *data)
        {
          JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair > value((jobject) NULL);
          OBJ_CALL(value = self->object.getOptima());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/data/LazyLoadedDataContext.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataContext::class$ = NULL;
      jmethodID *DataContext::mids$ = NULL;
      bool DataContext::live$ = false;

      jclass DataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCelestialBodies_62495cefe741b009] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getDefault_9617066f56887d20] = env->getStaticMethodID(cls, "getDefault", "()Lorg/orekit/data/LazyLoadedDataContext;");
          mids$[mid_getFrames_34da2547798ee1dc] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_7d1b07207cbeab65] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_3af6c17fe31f8686] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_796d09eb9f0f96ef] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_setDefault_038b3f0ac7485dff] = env->getStaticMethodID(cls, "setDefault", "(Lorg/orekit/data/LazyLoadedDataContext;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBodies DataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::CelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_62495cefe741b009]));
      }

      ::org::orekit::data::LazyLoadedDataContext DataContext::getDefault()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::data::LazyLoadedDataContext(env->callStaticObjectMethod(cls, mids$[mid_getDefault_9617066f56887d20]));
      }

      ::org::orekit::frames::Frames DataContext::getFrames() const
      {
        return ::org::orekit::frames::Frames(env->callObjectMethod(this$, mids$[mid_getFrames_34da2547798ee1dc]));
      }

      ::org::orekit::models::earth::GeoMagneticFields DataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::GeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_7d1b07207cbeab65]));
      }

      ::org::orekit::forces::gravity::potential::GravityFields DataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::GravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_3af6c17fe31f8686]));
      }

      ::org::orekit::time::TimeScales DataContext::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_796d09eb9f0f96ef]));
      }

      void DataContext::setDefault(const ::org::orekit::data::LazyLoadedDataContext & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setDefault_038b3f0ac7485dff], a0.this$);
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
      static PyObject *t_DataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_getCelestialBodies(t_DataContext *self);
      static PyObject *t_DataContext_getDefault(PyTypeObject *type);
      static PyObject *t_DataContext_getFrames(t_DataContext *self);
      static PyObject *t_DataContext_getGeoMagneticFields(t_DataContext *self);
      static PyObject *t_DataContext_getGravityFields(t_DataContext *self);
      static PyObject *t_DataContext_getTimeScales(t_DataContext *self);
      static PyObject *t_DataContext_setDefault(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_get__celestialBodies(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__default(t_DataContext *self, void *data);
      static int t_DataContext_set__default(t_DataContext *self, PyObject *arg, void *data);
      static PyObject *t_DataContext_get__frames(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__geoMagneticFields(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__gravityFields(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__timeScales(t_DataContext *self, void *data);
      static PyGetSetDef t_DataContext__fields_[] = {
        DECLARE_GET_FIELD(t_DataContext, celestialBodies),
        DECLARE_GETSET_FIELD(t_DataContext, default),
        DECLARE_GET_FIELD(t_DataContext, frames),
        DECLARE_GET_FIELD(t_DataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_DataContext, gravityFields),
        DECLARE_GET_FIELD(t_DataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataContext__methods_[] = {
        DECLARE_METHOD(t_DataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataContext, getCelestialBodies, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getDefault, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_DataContext, getFrames, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getGeoMagneticFields, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getGravityFields, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getTimeScales, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, setDefault, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataContext)[] = {
        { Py_tp_methods, t_DataContext__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataContext, t_DataContext, DataContext);

      void t_DataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(DataContext), &PY_TYPE_DEF(DataContext), module, "DataContext", 0);
      }

      void t_DataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "class_", make_descriptor(DataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "wrapfn_", make_descriptor(t_DataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataContext::initializeClass, 1)))
          return NULL;
        return t_DataContext::wrap_Object(DataContext(((t_DataContext *) arg)->object.this$));
      }
      static PyObject *t_DataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataContext_getCelestialBodies(t_DataContext *self)
      {
        ::org::orekit::bodies::CelestialBodies result((jobject) NULL);
        OBJ_CALL(result = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(result);
      }

      static PyObject *t_DataContext_getDefault(PyTypeObject *type)
      {
        ::org::orekit::data::LazyLoadedDataContext result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::data::DataContext::getDefault());
        return ::org::orekit::data::t_LazyLoadedDataContext::wrap_Object(result);
      }

      static PyObject *t_DataContext_getFrames(t_DataContext *self)
      {
        ::org::orekit::frames::Frames result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(result);
      }

      static PyObject *t_DataContext_getGeoMagneticFields(t_DataContext *self)
      {
        ::org::orekit::models::earth::GeoMagneticFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(result);
      }

      static PyObject *t_DataContext_getGravityFields(t_DataContext *self)
      {
        ::org::orekit::forces::gravity::potential::GravityFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(result);
      }

      static PyObject *t_DataContext_getTimeScales(t_DataContext *self)
      {
        ::org::orekit::time::TimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(result);
      }

      static PyObject *t_DataContext_setDefault(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::data::LazyLoadedDataContext a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::LazyLoadedDataContext::initializeClass, &a0))
        {
          OBJ_CALL(::org::orekit::data::DataContext::setDefault(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setDefault", arg);
        return NULL;
      }

      static PyObject *t_DataContext_get__celestialBodies(t_DataContext *self, void *data)
      {
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__default(t_DataContext *self, void *data)
      {
        ::org::orekit::data::LazyLoadedDataContext value((jobject) NULL);
        OBJ_CALL(value = self->object.getDefault());
        return ::org::orekit::data::t_LazyLoadedDataContext::wrap_Object(value);
      }
      static int t_DataContext_set__default(t_DataContext *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::data::LazyLoadedDataContext value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::data::LazyLoadedDataContext::initializeClass, &value))
          {
            INT_CALL(self->object.setDefault(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "default", arg);
        return -1;
      }

      static PyObject *t_DataContext_get__frames(t_DataContext *self, void *data)
      {
        ::org::orekit::frames::Frames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__geoMagneticFields(t_DataContext *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__gravityFields(t_DataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__timeScales(t_DataContext *self, void *data)
      {
        ::org::orekit::time::TimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {

        ::java::lang::Class *FieldProbabilityOfCollision::class$ = NULL;
        jmethodID *FieldProbabilityOfCollision::mids$ = NULL;
        bool FieldProbabilityOfCollision::live$ = false;

        jclass FieldProbabilityOfCollision::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/ssa/metrics/FieldProbabilityOfCollision");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_df99f6c7619851b8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;)V");
            mids$[mid_init$_40d2b87250b39e7c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;Z)V");
            mids$[mid_init$_690376ceb492d4fa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;Z)V");
            mids$[mid_getLowerLimit_08d37e3f77b7239d] = env->getMethodID(cls, "getLowerLimit", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getProbabilityOfCollisionMethodName_d2c8eb4129821f0e] = env->getMethodID(cls, "getProbabilityOfCollisionMethodName", "()Ljava/lang/String;");
            mids$[mid_getUpperLimit_08d37e3f77b7239d] = env->getMethodID(cls, "getUpperLimit", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_08d37e3f77b7239d] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_isMaxProbability_eee3de00fe971136] = env->getMethodID(cls, "isMaxProbability", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_df99f6c7619851b8, a0.this$, a1.this$)) {}

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::java::lang::String & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_40d2b87250b39e7c, a0.this$, a1.this$, a2)) {}

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::java::lang::String & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_690376ceb492d4fa, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getLowerLimit() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLowerLimit_08d37e3f77b7239d]));
        }

        ::java::lang::String FieldProbabilityOfCollision::getProbabilityOfCollisionMethodName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProbabilityOfCollisionMethodName_d2c8eb4129821f0e]));
        }

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getUpperLimit() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getUpperLimit_08d37e3f77b7239d]));
        }

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_08d37e3f77b7239d]));
        }

        jboolean FieldProbabilityOfCollision::isMaxProbability() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isMaxProbability_eee3de00fe971136]);
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
      namespace metrics {
        static PyObject *t_FieldProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldProbabilityOfCollision_of_(t_FieldProbabilityOfCollision *self, PyObject *args);
        static int t_FieldProbabilityOfCollision_init_(t_FieldProbabilityOfCollision *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldProbabilityOfCollision_getLowerLimit(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_getUpperLimit(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_getValue(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_isMaxProbability(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_get__lowerLimit(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__maxProbability(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__upperLimit(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__value(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__parameters_(t_FieldProbabilityOfCollision *self, void *data);
        static PyGetSetDef t_FieldProbabilityOfCollision__fields_[] = {
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, lowerLimit),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, maxProbability),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, probabilityOfCollisionMethodName),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, upperLimit),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, value),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldProbabilityOfCollision__methods_[] = {
          DECLARE_METHOD(t_FieldProbabilityOfCollision, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getLowerLimit, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getProbabilityOfCollisionMethodName, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getUpperLimit, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getValue, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, isMaxProbability, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldProbabilityOfCollision)[] = {
          { Py_tp_methods, t_FieldProbabilityOfCollision__methods_ },
          { Py_tp_init, (void *) t_FieldProbabilityOfCollision_init_ },
          { Py_tp_getset, t_FieldProbabilityOfCollision__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldProbabilityOfCollision)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldProbabilityOfCollision, t_FieldProbabilityOfCollision, FieldProbabilityOfCollision);
        PyObject *t_FieldProbabilityOfCollision::wrap_Object(const FieldProbabilityOfCollision& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldProbabilityOfCollision::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldProbabilityOfCollision *self = (t_FieldProbabilityOfCollision *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldProbabilityOfCollision::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldProbabilityOfCollision::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldProbabilityOfCollision *self = (t_FieldProbabilityOfCollision *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldProbabilityOfCollision::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldProbabilityOfCollision), &PY_TYPE_DEF(FieldProbabilityOfCollision), module, "FieldProbabilityOfCollision", 0);
        }

        void t_FieldProbabilityOfCollision::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldProbabilityOfCollision), "class_", make_descriptor(FieldProbabilityOfCollision::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldProbabilityOfCollision), "wrapfn_", make_descriptor(t_FieldProbabilityOfCollision::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldProbabilityOfCollision), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldProbabilityOfCollision::initializeClass, 1)))
            return NULL;
          return t_FieldProbabilityOfCollision::wrap_Object(FieldProbabilityOfCollision(((t_FieldProbabilityOfCollision *) arg)->object.this$));
        }
        static PyObject *t_FieldProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldProbabilityOfCollision::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldProbabilityOfCollision_of_(t_FieldProbabilityOfCollision *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldProbabilityOfCollision_init_(t_FieldProbabilityOfCollision *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              FieldProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "Ks", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
              {
                INT_CALL(object = FieldProbabilityOfCollision(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jboolean a2;
              FieldProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "KsZ", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldProbabilityOfCollision(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::lang::String a3((jobject) NULL);
              jboolean a4;
              FieldProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "KKKsZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4))
              {
                INT_CALL(object = FieldProbabilityOfCollision(a0, a1, a2, a3, a4));
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

        static PyObject *t_FieldProbabilityOfCollision_getLowerLimit(t_FieldProbabilityOfCollision *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getLowerLimit());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProbabilityOfCollisionMethodName());
          return j2p(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_getUpperLimit(t_FieldProbabilityOfCollision *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getUpperLimit());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_getValue(t_FieldProbabilityOfCollision *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_isMaxProbability(t_FieldProbabilityOfCollision *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isMaxProbability());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldProbabilityOfCollision_get__parameters_(t_FieldProbabilityOfCollision *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldProbabilityOfCollision_get__lowerLimit(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getLowerLimit());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__maxProbability(t_FieldProbabilityOfCollision *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isMaxProbability());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProbabilityOfCollisionMethodName());
          return j2p(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__upperLimit(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getUpperLimit());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__value(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/LeastSquareAdjuster.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *LeastSquareAdjuster::class$ = NULL;
        jmethodID *LeastSquareAdjuster::mids$ = NULL;
        bool LeastSquareAdjuster::live$ = false;

        jclass LeastSquareAdjuster::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/LeastSquareAdjuster");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_3baa1ef9d5c66967] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/adjustment/OptimizerId;)V");
            mids$[mid_optimize_45e9e6e9254f21c4] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LeastSquareAdjuster::LeastSquareAdjuster() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        LeastSquareAdjuster::LeastSquareAdjuster(const ::org::orekit::rugged::adjustment::OptimizerId & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3baa1ef9d5c66967, a0.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LeastSquareAdjuster::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_45e9e6e9254f21c4], a0.this$));
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
        static PyObject *t_LeastSquareAdjuster_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LeastSquareAdjuster_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LeastSquareAdjuster_init_(t_LeastSquareAdjuster *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LeastSquareAdjuster_optimize(t_LeastSquareAdjuster *self, PyObject *arg);

        static PyMethodDef t_LeastSquareAdjuster__methods_[] = {
          DECLARE_METHOD(t_LeastSquareAdjuster, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LeastSquareAdjuster, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LeastSquareAdjuster, optimize, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LeastSquareAdjuster)[] = {
          { Py_tp_methods, t_LeastSquareAdjuster__methods_ },
          { Py_tp_init, (void *) t_LeastSquareAdjuster_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LeastSquareAdjuster)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LeastSquareAdjuster, t_LeastSquareAdjuster, LeastSquareAdjuster);

        void t_LeastSquareAdjuster::install(PyObject *module)
        {
          installType(&PY_TYPE(LeastSquareAdjuster), &PY_TYPE_DEF(LeastSquareAdjuster), module, "LeastSquareAdjuster", 0);
        }

        void t_LeastSquareAdjuster::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "class_", make_descriptor(LeastSquareAdjuster::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "wrapfn_", make_descriptor(t_LeastSquareAdjuster::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LeastSquareAdjuster_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LeastSquareAdjuster::initializeClass, 1)))
            return NULL;
          return t_LeastSquareAdjuster::wrap_Object(LeastSquareAdjuster(((t_LeastSquareAdjuster *) arg)->object.this$));
        }
        static PyObject *t_LeastSquareAdjuster_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LeastSquareAdjuster::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LeastSquareAdjuster_init_(t_LeastSquareAdjuster *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LeastSquareAdjuster object((jobject) NULL);

              INT_CALL(object = LeastSquareAdjuster());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::orekit::rugged::adjustment::OptimizerId a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquareAdjuster object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &a0, &p0, ::org::orekit::rugged::adjustment::t_OptimizerId::parameters_))
              {
                INT_CALL(object = LeastSquareAdjuster(a0));
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

        static PyObject *t_LeastSquareAdjuster_optimize(t_LeastSquareAdjuster *self, PyObject *arg)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "optimize", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *HarmonicCurveFitter::class$ = NULL;
      jmethodID *HarmonicCurveFitter::mids$ = NULL;
      bool HarmonicCurveFitter::live$ = false;

      jclass HarmonicCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/HarmonicCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_91e0a1a50a3dcf85] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_withMaxIterations_0aeae166097a719a] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_withStartPoint_900fce2d2a39b849] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_getProblem_51e01b60016ab388] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HarmonicCurveFitter HarmonicCurveFitter::create()
      {
        jclass cls = env->getClass(initializeClass);
        return HarmonicCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_91e0a1a50a3dcf85]));
      }

      HarmonicCurveFitter HarmonicCurveFitter::withMaxIterations(jint a0) const
      {
        return HarmonicCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_0aeae166097a719a], a0));
      }

      HarmonicCurveFitter HarmonicCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return HarmonicCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_900fce2d2a39b849], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_HarmonicCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_create(PyTypeObject *type);
      static PyObject *t_HarmonicCurveFitter_withMaxIterations(t_HarmonicCurveFitter *self, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_withStartPoint(t_HarmonicCurveFitter *self, PyObject *arg);

      static PyMethodDef t_HarmonicCurveFitter__methods_[] = {
        DECLARE_METHOD(t_HarmonicCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_HarmonicCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HarmonicCurveFitter)[] = {
        { Py_tp_methods, t_HarmonicCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HarmonicCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(HarmonicCurveFitter, t_HarmonicCurveFitter, HarmonicCurveFitter);

      void t_HarmonicCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(HarmonicCurveFitter), &PY_TYPE_DEF(HarmonicCurveFitter), module, "HarmonicCurveFitter", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "ParameterGuesser", make_descriptor(&PY_TYPE_DEF(HarmonicCurveFitter$ParameterGuesser)));
      }

      void t_HarmonicCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "class_", make_descriptor(HarmonicCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "wrapfn_", make_descriptor(t_HarmonicCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HarmonicCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HarmonicCurveFitter::initializeClass, 1)))
          return NULL;
        return t_HarmonicCurveFitter::wrap_Object(HarmonicCurveFitter(((t_HarmonicCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_HarmonicCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HarmonicCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_HarmonicCurveFitter_create(PyTypeObject *type)
      {
        HarmonicCurveFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fitting::HarmonicCurveFitter::create());
        return t_HarmonicCurveFitter::wrap_Object(result);
      }

      static PyObject *t_HarmonicCurveFitter_withMaxIterations(t_HarmonicCurveFitter *self, PyObject *arg)
      {
        jint a0;
        HarmonicCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_HarmonicCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_HarmonicCurveFitter_withStartPoint(t_HarmonicCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        HarmonicCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_HarmonicCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/ThirdBodyAttraction.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *ThirdBodyAttraction::class$ = NULL;
        jmethodID *ThirdBodyAttraction::mids$ = NULL;
        bool ThirdBodyAttraction::live$ = false;
        ::java::lang::String *ThirdBodyAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass ThirdBodyAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/ThirdBodyAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3892f9945e7aba0a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThirdBodyAttraction::ThirdBodyAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3892f9945e7aba0a, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ThirdBodyAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThirdBodyAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        jboolean ThirdBodyAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        ::java::util::List ThirdBodyAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
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
        static PyObject *t_ThirdBodyAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThirdBodyAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThirdBodyAttraction_init_(t_ThirdBodyAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThirdBodyAttraction_acceleration(t_ThirdBodyAttraction *self, PyObject *args);
        static PyObject *t_ThirdBodyAttraction_dependsOnPositionOnly(t_ThirdBodyAttraction *self);
        static PyObject *t_ThirdBodyAttraction_getParametersDrivers(t_ThirdBodyAttraction *self);
        static PyObject *t_ThirdBodyAttraction_get__parametersDrivers(t_ThirdBodyAttraction *self, void *data);
        static PyGetSetDef t_ThirdBodyAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_ThirdBodyAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThirdBodyAttraction__methods_[] = {
          DECLARE_METHOD(t_ThirdBodyAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_ThirdBodyAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_ThirdBodyAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThirdBodyAttraction)[] = {
          { Py_tp_methods, t_ThirdBodyAttraction__methods_ },
          { Py_tp_init, (void *) t_ThirdBodyAttraction_init_ },
          { Py_tp_getset, t_ThirdBodyAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThirdBodyAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ThirdBodyAttraction, t_ThirdBodyAttraction, ThirdBodyAttraction);

        void t_ThirdBodyAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(ThirdBodyAttraction), &PY_TYPE_DEF(ThirdBodyAttraction), module, "ThirdBodyAttraction", 0);
        }

        void t_ThirdBodyAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "class_", make_descriptor(ThirdBodyAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "wrapfn_", make_descriptor(t_ThirdBodyAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(ThirdBodyAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*ThirdBodyAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_ThirdBodyAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThirdBodyAttraction::initializeClass, 1)))
            return NULL;
          return t_ThirdBodyAttraction::wrap_Object(ThirdBodyAttraction(((t_ThirdBodyAttraction *) arg)->object.this$));
        }
        static PyObject *t_ThirdBodyAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThirdBodyAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThirdBodyAttraction_init_(t_ThirdBodyAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          ThirdBodyAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = ThirdBodyAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThirdBodyAttraction_acceleration(t_ThirdBodyAttraction *self, PyObject *args)
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

        static PyObject *t_ThirdBodyAttraction_dependsOnPositionOnly(t_ThirdBodyAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ThirdBodyAttraction_getParametersDrivers(t_ThirdBodyAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_ThirdBodyAttraction_get__parametersDrivers(t_ThirdBodyAttraction *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/JacobiTheta.h"
#include "org/hipparchus/special/elliptic/jacobi/Theta.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *JacobiTheta::class$ = NULL;
          jmethodID *JacobiTheta::mids$ = NULL;
          bool JacobiTheta::live$ = false;

          jclass JacobiTheta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/JacobiTheta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getQ_9981f74b2d109da6] = env->getMethodID(cls, "getQ", "()D");
              mids$[mid_values_14aa4f1bf3429ef3] = env->getMethodID(cls, "values", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/special/elliptic/jacobi/Theta;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JacobiTheta::JacobiTheta(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          jdouble JacobiTheta::getQ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ_9981f74b2d109da6]);
          }

          ::org::hipparchus::special::elliptic::jacobi::Theta JacobiTheta::values(const ::org::hipparchus::complex::Complex & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::Theta(env->callObjectMethod(this$, mids$[mid_values_14aa4f1bf3429ef3], a0.this$));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_JacobiTheta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiTheta_instance_(PyTypeObject *type, PyObject *arg);
          static int t_JacobiTheta_init_(t_JacobiTheta *self, PyObject *args, PyObject *kwds);
          static PyObject *t_JacobiTheta_getQ(t_JacobiTheta *self);
          static PyObject *t_JacobiTheta_values(t_JacobiTheta *self, PyObject *arg);
          static PyObject *t_JacobiTheta_get__q(t_JacobiTheta *self, void *data);
          static PyGetSetDef t_JacobiTheta__fields_[] = {
            DECLARE_GET_FIELD(t_JacobiTheta, q),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JacobiTheta__methods_[] = {
            DECLARE_METHOD(t_JacobiTheta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiTheta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiTheta, getQ, METH_NOARGS),
            DECLARE_METHOD(t_JacobiTheta, values, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JacobiTheta)[] = {
            { Py_tp_methods, t_JacobiTheta__methods_ },
            { Py_tp_init, (void *) t_JacobiTheta_init_ },
            { Py_tp_getset, t_JacobiTheta__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JacobiTheta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JacobiTheta, t_JacobiTheta, JacobiTheta);

          void t_JacobiTheta::install(PyObject *module)
          {
            installType(&PY_TYPE(JacobiTheta), &PY_TYPE_DEF(JacobiTheta), module, "JacobiTheta", 0);
          }

          void t_JacobiTheta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "class_", make_descriptor(JacobiTheta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "wrapfn_", make_descriptor(t_JacobiTheta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JacobiTheta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JacobiTheta::initializeClass, 1)))
              return NULL;
            return t_JacobiTheta::wrap_Object(JacobiTheta(((t_JacobiTheta *) arg)->object.this$));
          }
          static PyObject *t_JacobiTheta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JacobiTheta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_JacobiTheta_init_(t_JacobiTheta *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            JacobiTheta object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = JacobiTheta(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_JacobiTheta_getQ(t_JacobiTheta *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_JacobiTheta_values(t_JacobiTheta *self, PyObject *arg)
          {
            ::org::hipparchus::complex::Complex a0((jobject) NULL);
            ::org::hipparchus::special::elliptic::jacobi::Theta result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.values(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_Theta::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "values", arg);
            return NULL;
          }

          static PyObject *t_JacobiTheta_get__q(t_JacobiTheta *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ());
            return PyFloat_FromDouble((double) value);
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
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0a70d77e3c5fdad0] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_e6096d9f5fb551a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IllegalStateException::IllegalStateException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0a70d77e3c5fdad0, a0.this$)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_e6096d9f5fb551a3, a0.this$, a1.this$)) {}
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/PythonInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *PythonInterpolationGrid::class$ = NULL;
            jmethodID *PythonInterpolationGrid::mids$ = NULL;
            bool PythonInterpolationGrid::live$ = false;

            jclass PythonInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/PythonInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getGridPoints_4c8160a53aa8811b] = env->getMethodID(cls, "getGridPoints", "(DD)[D");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonInterpolationGrid::PythonInterpolationGrid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonInterpolationGrid::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonInterpolationGrid::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonInterpolationGrid::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
            static PyObject *t_PythonInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonInterpolationGrid_init_(t_PythonInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonInterpolationGrid_finalize(t_PythonInterpolationGrid *self);
            static PyObject *t_PythonInterpolationGrid_pythonExtension(t_PythonInterpolationGrid *self, PyObject *args);
            static jobject JNICALL t_PythonInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
            static void JNICALL t_PythonInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonInterpolationGrid_get__self(t_PythonInterpolationGrid *self, void *data);
            static PyGetSetDef t_PythonInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_PythonInterpolationGrid, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_PythonInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonInterpolationGrid, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonInterpolationGrid, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonInterpolationGrid)[] = {
              { Py_tp_methods, t_PythonInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_PythonInterpolationGrid_init_ },
              { Py_tp_getset, t_PythonInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonInterpolationGrid, t_PythonInterpolationGrid, PythonInterpolationGrid);

            void t_PythonInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonInterpolationGrid), &PY_TYPE_DEF(PythonInterpolationGrid), module, "PythonInterpolationGrid", 1);
            }

            void t_PythonInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "class_", make_descriptor(PythonInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "wrapfn_", make_descriptor(t_PythonInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonInterpolationGrid::initializeClass);
              JNINativeMethod methods[] = {
                { "getGridPoints", "(DD)[D", (void *) t_PythonInterpolationGrid_getGridPoints0 },
                { "pythonDecRef", "()V", (void *) t_PythonInterpolationGrid_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_PythonInterpolationGrid::wrap_Object(PythonInterpolationGrid(((t_PythonInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_PythonInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonInterpolationGrid_init_(t_PythonInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              PythonInterpolationGrid object((jobject) NULL);

              INT_CALL(object = PythonInterpolationGrid());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonInterpolationGrid_finalize(t_PythonInterpolationGrid *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonInterpolationGrid_pythonExtension(t_PythonInterpolationGrid *self, PyObject *args)
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

            static jobject JNICALL t_PythonInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getGridPoints", "dd", (double) a0, (double) a1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getGridPoints", result);
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

            static void JNICALL t_PythonInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonInterpolationGrid_get__self(t_PythonInterpolationGrid *self, void *data)
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
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SemiVariance$Direction::class$ = NULL;
          jmethodID *SemiVariance$Direction::mids$ = NULL;
          bool SemiVariance$Direction::live$ = false;
          SemiVariance$Direction *SemiVariance$Direction::DOWNSIDE = NULL;
          SemiVariance$Direction *SemiVariance$Direction::UPSIDE = NULL;

          jclass SemiVariance$Direction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SemiVariance$Direction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_29bf87268fdad6bb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");
              mids$[mid_values_7034b66d45106e33] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DOWNSIDE = new SemiVariance$Direction(env->getStaticObjectField(cls, "DOWNSIDE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              UPSIDE = new SemiVariance$Direction(env->getStaticObjectField(cls, "UPSIDE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SemiVariance$Direction SemiVariance$Direction::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SemiVariance$Direction(env->callStaticObjectMethod(cls, mids$[mid_valueOf_29bf87268fdad6bb], a0.this$));
          }

          JArray< SemiVariance$Direction > SemiVariance$Direction::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SemiVariance$Direction >(env->callStaticObjectMethod(cls, mids$[mid_values_7034b66d45106e33]));
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
          static PyObject *t_SemiVariance$Direction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance$Direction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance$Direction_of_(t_SemiVariance$Direction *self, PyObject *args);
          static PyObject *t_SemiVariance$Direction_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SemiVariance$Direction_values(PyTypeObject *type);
          static PyObject *t_SemiVariance$Direction_get__parameters_(t_SemiVariance$Direction *self, void *data);
          static PyGetSetDef t_SemiVariance$Direction__fields_[] = {
            DECLARE_GET_FIELD(t_SemiVariance$Direction, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SemiVariance$Direction__methods_[] = {
            DECLARE_METHOD(t_SemiVariance$Direction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, of_, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance$Direction, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SemiVariance$Direction)[] = {
            { Py_tp_methods, t_SemiVariance$Direction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SemiVariance$Direction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SemiVariance$Direction)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SemiVariance$Direction, t_SemiVariance$Direction, SemiVariance$Direction);
          PyObject *t_SemiVariance$Direction::wrap_Object(const SemiVariance$Direction& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SemiVariance$Direction::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SemiVariance$Direction *self = (t_SemiVariance$Direction *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SemiVariance$Direction::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SemiVariance$Direction::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SemiVariance$Direction *self = (t_SemiVariance$Direction *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SemiVariance$Direction::install(PyObject *module)
          {
            installType(&PY_TYPE(SemiVariance$Direction), &PY_TYPE_DEF(SemiVariance$Direction), module, "SemiVariance$Direction", 0);
          }

          void t_SemiVariance$Direction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "class_", make_descriptor(SemiVariance$Direction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "wrapfn_", make_descriptor(t_SemiVariance$Direction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "boxfn_", make_descriptor(boxObject));
            env->getClass(SemiVariance$Direction::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "DOWNSIDE", make_descriptor(t_SemiVariance$Direction::wrap_Object(*SemiVariance$Direction::DOWNSIDE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "UPSIDE", make_descriptor(t_SemiVariance$Direction::wrap_Object(*SemiVariance$Direction::UPSIDE)));
          }

          static PyObject *t_SemiVariance$Direction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SemiVariance$Direction::initializeClass, 1)))
              return NULL;
            return t_SemiVariance$Direction::wrap_Object(SemiVariance$Direction(((t_SemiVariance$Direction *) arg)->object.this$));
          }
          static PyObject *t_SemiVariance$Direction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SemiVariance$Direction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SemiVariance$Direction_of_(t_SemiVariance$Direction *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SemiVariance$Direction_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SemiVariance$Direction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::valueOf(a0));
              return t_SemiVariance$Direction::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SemiVariance$Direction_values(PyTypeObject *type)
          {
            JArray< SemiVariance$Direction > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::values());
            return JArray<jobject>(result.this$).wrap(t_SemiVariance$Direction::wrap_jobject);
          }
          static PyObject *t_SemiVariance$Direction_get__parameters_(t_SemiVariance$Direction *self, void *data)
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
#include "org/hipparchus/random/Well44497b.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well44497b::class$ = NULL;
      jmethodID *Well44497b::mids$ = NULL;
      bool Well44497b::live$ = false;

      jclass Well44497b::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well44497b");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d43202153dd284f7] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well44497b::Well44497b() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      Well44497b::Well44497b(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_d43202153dd284f7, a0.this$)) {}

      Well44497b::Well44497b(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      Well44497b::Well44497b(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

      jint Well44497b::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
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
      static PyObject *t_Well44497b_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well44497b_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well44497b_init_(t_Well44497b *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well44497b_nextInt(t_Well44497b *self, PyObject *args);

      static PyMethodDef t_Well44497b__methods_[] = {
        DECLARE_METHOD(t_Well44497b, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497b, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497b, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well44497b)[] = {
        { Py_tp_methods, t_Well44497b__methods_ },
        { Py_tp_init, (void *) t_Well44497b_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well44497b)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well44497b, t_Well44497b, Well44497b);

      void t_Well44497b::install(PyObject *module)
      {
        installType(&PY_TYPE(Well44497b), &PY_TYPE_DEF(Well44497b), module, "Well44497b", 0);
      }

      void t_Well44497b::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "class_", make_descriptor(Well44497b::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "wrapfn_", make_descriptor(t_Well44497b::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well44497b_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well44497b::initializeClass, 1)))
          return NULL;
        return t_Well44497b::wrap_Object(Well44497b(((t_Well44497b *) arg)->object.this$));
      }
      static PyObject *t_Well44497b_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well44497b::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well44497b_init_(t_Well44497b *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well44497b object((jobject) NULL);

            INT_CALL(object = Well44497b());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well44497b(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well44497b(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well44497b(a0));
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

      static PyObject *t_Well44497b_nextInt(t_Well44497b *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well44497b), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/GlobalPressureTemperatureModel.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *GlobalPressureTemperatureModel::class$ = NULL;
          jmethodID *GlobalPressureTemperatureModel::mids$ = NULL;
          bool GlobalPressureTemperatureModel::live$ = false;

          jclass GlobalPressureTemperatureModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/GlobalPressureTemperatureModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ba4696e0d7f6f24b] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
              mids$[mid_init$_615bf5368f0f3b55] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;Lorg/orekit/data/DataContext;)V");
              mids$[mid_getPressure_9981f74b2d109da6] = env->getMethodID(cls, "getPressure", "()D");
              mids$[mid_getTemperature_9981f74b2d109da6] = env->getMethodID(cls, "getTemperature", "()D");
              mids$[mid_weatherParameters_281401e03841f11f] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalPressureTemperatureModel::GlobalPressureTemperatureModel(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ba4696e0d7f6f24b, a0, a1, a2.this$)) {}

          GlobalPressureTemperatureModel::GlobalPressureTemperatureModel(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::data::DataContext & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_615bf5368f0f3b55, a0, a1, a2.this$, a3.this$)) {}

          jdouble GlobalPressureTemperatureModel::getPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPressure_9981f74b2d109da6]);
          }

          jdouble GlobalPressureTemperatureModel::getTemperature() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTemperature_9981f74b2d109da6]);
          }

          void GlobalPressureTemperatureModel::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_281401e03841f11f], a0, a1.this$);
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
        namespace weather {
          static PyObject *t_GlobalPressureTemperatureModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalPressureTemperatureModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalPressureTemperatureModel_init_(t_GlobalPressureTemperatureModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalPressureTemperatureModel_getPressure(t_GlobalPressureTemperatureModel *self);
          static PyObject *t_GlobalPressureTemperatureModel_getTemperature(t_GlobalPressureTemperatureModel *self);
          static PyObject *t_GlobalPressureTemperatureModel_weatherParameters(t_GlobalPressureTemperatureModel *self, PyObject *args);
          static PyObject *t_GlobalPressureTemperatureModel_get__pressure(t_GlobalPressureTemperatureModel *self, void *data);
          static PyObject *t_GlobalPressureTemperatureModel_get__temperature(t_GlobalPressureTemperatureModel *self, void *data);
          static PyGetSetDef t_GlobalPressureTemperatureModel__fields_[] = {
            DECLARE_GET_FIELD(t_GlobalPressureTemperatureModel, pressure),
            DECLARE_GET_FIELD(t_GlobalPressureTemperatureModel, temperature),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlobalPressureTemperatureModel__methods_[] = {
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, getPressure, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, getTemperature, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, weatherParameters, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalPressureTemperatureModel)[] = {
            { Py_tp_methods, t_GlobalPressureTemperatureModel__methods_ },
            { Py_tp_init, (void *) t_GlobalPressureTemperatureModel_init_ },
            { Py_tp_getset, t_GlobalPressureTemperatureModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalPressureTemperatureModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalPressureTemperatureModel, t_GlobalPressureTemperatureModel, GlobalPressureTemperatureModel);

          void t_GlobalPressureTemperatureModel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalPressureTemperatureModel), &PY_TYPE_DEF(GlobalPressureTemperatureModel), module, "GlobalPressureTemperatureModel", 0);
          }

          void t_GlobalPressureTemperatureModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "class_", make_descriptor(GlobalPressureTemperatureModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "wrapfn_", make_descriptor(t_GlobalPressureTemperatureModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlobalPressureTemperatureModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalPressureTemperatureModel::initializeClass, 1)))
              return NULL;
            return t_GlobalPressureTemperatureModel::wrap_Object(GlobalPressureTemperatureModel(((t_GlobalPressureTemperatureModel *) arg)->object.this$));
          }
          static PyObject *t_GlobalPressureTemperatureModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalPressureTemperatureModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalPressureTemperatureModel_init_(t_GlobalPressureTemperatureModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                GlobalPressureTemperatureModel object((jobject) NULL);

                if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GlobalPressureTemperatureModel(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::orekit::data::DataContext a3((jobject) NULL);
                GlobalPressureTemperatureModel object((jobject) NULL);

                if (!parseArgs(args, "DDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = GlobalPressureTemperatureModel(a0, a1, a2, a3));
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

          static PyObject *t_GlobalPressureTemperatureModel_getPressure(t_GlobalPressureTemperatureModel *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPressure());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperatureModel_getTemperature(t_GlobalPressureTemperatureModel *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTemperature());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperatureModel_weatherParameters(t_GlobalPressureTemperatureModel *self, PyObject *args)
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.weatherParameters(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "weatherParameters", args);
            return NULL;
          }

          static PyObject *t_GlobalPressureTemperatureModel_get__pressure(t_GlobalPressureTemperatureModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPressure());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GlobalPressureTemperatureModel_get__temperature(t_GlobalPressureTemperatureModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTemperature());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PV::class$ = NULL;
        jmethodID *PV::mids$ = NULL;
        bool PV::live$ = false;
        ::java::lang::String *PV::MEASUREMENT_TYPE = NULL;

        jclass PV::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PV");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a747e59bf5cbf117] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_3bfaed5e0365e963] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_53a6d1957e6238b5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_2293665340e2c778] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[D[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_43a03eb81775031e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getCorrelationCoefficientsMatrix_eda3f19b8225f78f] = env->getMethodID(cls, "getCorrelationCoefficientsMatrix", "()[[D");
            mids$[mid_getCovarianceMatrix_eda3f19b8225f78f] = env->getMethodID(cls, "getCovarianceMatrix", "()[[D");
            mids$[mid_getPosition_032312bdeb3f2f93] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getVelocity_032312bdeb3f2f93] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_a747e59bf5cbf117, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< JArray< jdouble > > & a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_3bfaed5e0365e963, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_53a6d1957e6238b5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_2293665340e2c778, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_43a03eb81775031e, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        JArray< JArray< jdouble > > PV::getCorrelationCoefficientsMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCorrelationCoefficientsMatrix_eda3f19b8225f78f]));
        }

        JArray< JArray< jdouble > > PV::getCovarianceMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_eda3f19b8225f78f]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PV::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_032312bdeb3f2f93]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PV::getVelocity() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_032312bdeb3f2f93]));
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
        static PyObject *t_PV_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PV_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PV_of_(t_PV *self, PyObject *args);
        static int t_PV_init_(t_PV *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PV_getCorrelationCoefficientsMatrix(t_PV *self);
        static PyObject *t_PV_getCovarianceMatrix(t_PV *self);
        static PyObject *t_PV_getPosition(t_PV *self);
        static PyObject *t_PV_getVelocity(t_PV *self);
        static PyObject *t_PV_get__correlationCoefficientsMatrix(t_PV *self, void *data);
        static PyObject *t_PV_get__covarianceMatrix(t_PV *self, void *data);
        static PyObject *t_PV_get__position(t_PV *self, void *data);
        static PyObject *t_PV_get__velocity(t_PV *self, void *data);
        static PyObject *t_PV_get__parameters_(t_PV *self, void *data);
        static PyGetSetDef t_PV__fields_[] = {
          DECLARE_GET_FIELD(t_PV, correlationCoefficientsMatrix),
          DECLARE_GET_FIELD(t_PV, covarianceMatrix),
          DECLARE_GET_FIELD(t_PV, position),
          DECLARE_GET_FIELD(t_PV, velocity),
          DECLARE_GET_FIELD(t_PV, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PV__methods_[] = {
          DECLARE_METHOD(t_PV, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PV, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PV, of_, METH_VARARGS),
          DECLARE_METHOD(t_PV, getCorrelationCoefficientsMatrix, METH_NOARGS),
          DECLARE_METHOD(t_PV, getCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_PV, getPosition, METH_NOARGS),
          DECLARE_METHOD(t_PV, getVelocity, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PV)[] = {
          { Py_tp_methods, t_PV__methods_ },
          { Py_tp_init, (void *) t_PV_init_ },
          { Py_tp_getset, t_PV__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PV)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(PV, t_PV, PV);
        PyObject *t_PV::wrap_Object(const PV& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PV::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PV *self = (t_PV *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PV::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PV::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PV *self = (t_PV *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PV::install(PyObject *module)
        {
          installType(&PY_TYPE(PV), &PY_TYPE_DEF(PV), module, "PV", 0);
        }

        void t_PV::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "class_", make_descriptor(PV::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "wrapfn_", make_descriptor(t_PV::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "boxfn_", make_descriptor(boxObject));
          env->getClass(PV::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "MEASUREMENT_TYPE", make_descriptor(j2p(*PV::MEASUREMENT_TYPE)));
        }

        static PyObject *t_PV_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PV::initializeClass, 1)))
            return NULL;
          return t_PV::wrap_Object(PV(((t_PV *) arg)->object.this$));
        }
        static PyObject *t_PV_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PV::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PV_of_(t_PV *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PV_init_(t_PV *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              jdouble a4;
              ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< JArray< jdouble > > a3((jobject) NULL);
              jdouble a4;
              ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[D[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< JArray< jdouble > > a3((jobject) NULL);
              JArray< JArray< jdouble > > a4((jobject) NULL);
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[[D[[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkkDDDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
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

        static PyObject *t_PV_getCorrelationCoefficientsMatrix(t_PV *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_PV_getCovarianceMatrix(t_PV *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_PV_getPosition(t_PV *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_PV_getVelocity(t_PV *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }
        static PyObject *t_PV_get__parameters_(t_PV *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_PV_get__correlationCoefficientsMatrix(t_PV *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_PV_get__covarianceMatrix(t_PV *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_PV_get__position(t_PV *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_PV_get__velocity(t_PV *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathUtils.h"
#include "org/hipparchus/util/MathUtils$SumAndResidual.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/MathUtils$FieldSumAndResidual.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils::class$ = NULL;
      jmethodID *MathUtils::mids$ = NULL;
      bool MathUtils::live$ = false;
      jdouble MathUtils::PI_SQUARED = (jdouble) 0;
      jdouble MathUtils::SEMI_PI = (jdouble) 0;
      jdouble MathUtils::TWO_PI = (jdouble) 0;

      jclass MathUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_checkDimension_b5d23e6c0858e8ed] = env->getStaticMethodID(cls, "checkDimension", "(II)V");
          mids$[mid_checkFinite_a71c45509eaf92d1] = env->getStaticMethodID(cls, "checkFinite", "([D)V");
          mids$[mid_checkFinite_1ad26e8c8c0cd65b] = env->getStaticMethodID(cls, "checkFinite", "(D)V");
          mids$[mid_checkNotNull_83ee235bb1e64e94] = env->getStaticMethodID(cls, "checkNotNull", "(Ljava/lang/Object;)V");
          mids$[mid_checkNotNull_1eef9f365bbd2d45] = env->getStaticMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_checkRangeInclusive_bd28dc6055dc5bbd] = env->getStaticMethodID(cls, "checkRangeInclusive", "(DDD)V");
          mids$[mid_checkRangeInclusive_ca932f9f7e00d3a3] = env->getStaticMethodID(cls, "checkRangeInclusive", "(JJJ)V");
          mids$[mid_copySign_2808127888b4293b] = env->getStaticMethodID(cls, "copySign", "(BB)B");
          mids$[mid_copySign_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "copySign", "(II)I");
          mids$[mid_copySign_7912418dc9bc44e3] = env->getStaticMethodID(cls, "copySign", "(JJ)J");
          mids$[mid_copySign_38206875b8cc5381] = env->getStaticMethodID(cls, "copySign", "(SS)S");
          mids$[mid_equals_0fc66ee74538f12c] = env->getStaticMethodID(cls, "equals", "(DD)Z");
          mids$[mid_hash_0bbaa89e7f8976bd] = env->getStaticMethodID(cls, "hash", "([D)I");
          mids$[mid_hash_9e72cb20adb363fb] = env->getStaticMethodID(cls, "hash", "(D)I");
          mids$[mid_max_b5ecd7df9e053968] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_b5ecd7df9e053968] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_normalizeAngle_82f92590f4247da1] = env->getStaticMethodID(cls, "normalizeAngle", "(DD)D");
          mids$[mid_normalizeAngle_b5ecd7df9e053968] = env->getStaticMethodID(cls, "normalizeAngle", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_reduce_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "reduce", "(DDD)D");
          mids$[mid_twoSum_ac565a513efe989e] = env->getStaticMethodID(cls, "twoSum", "(DD)Lorg/hipparchus/util/MathUtils$SumAndResidual;");
          mids$[mid_twoSum_b856fba37b6f9318] = env->getStaticMethodID(cls, "twoSum", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/util/MathUtils$FieldSumAndResidual;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          PI_SQUARED = env->getStaticDoubleField(cls, "PI_SQUARED");
          SEMI_PI = env->getStaticDoubleField(cls, "SEMI_PI");
          TWO_PI = env->getStaticDoubleField(cls, "TWO_PI");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void MathUtils::checkDimension(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkDimension_b5d23e6c0858e8ed], a0, a1);
      }

      void MathUtils::checkFinite(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFinite_a71c45509eaf92d1], a0.this$);
      }

      void MathUtils::checkFinite(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFinite_1ad26e8c8c0cd65b], a0);
      }

      void MathUtils::checkNotNull(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNull_83ee235bb1e64e94], a0.this$);
      }

      void MathUtils::checkNotNull(const ::java::lang::Object & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNull_1eef9f365bbd2d45], a0.this$, a1.this$, a2.this$);
      }

      void MathUtils::checkRangeInclusive(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRangeInclusive_bd28dc6055dc5bbd], a0, a1, a2);
      }

      void MathUtils::checkRangeInclusive(jlong a0, jlong a1, jlong a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRangeInclusive_ca932f9f7e00d3a3], a0, a1, a2);
      }

      jbyte MathUtils::copySign(jbyte a0, jbyte a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticByteMethod(cls, mids$[mid_copySign_2808127888b4293b], a0, a1);
      }

      jint MathUtils::copySign(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_copySign_91b9e1e34b2235d5], a0, a1);
      }

      jlong MathUtils::copySign(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_copySign_7912418dc9bc44e3], a0, a1);
      }

      jshort MathUtils::copySign(jshort a0, jshort a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticShortMethod(cls, mids$[mid_copySign_38206875b8cc5381], a0, a1);
      }

      jboolean MathUtils::equals(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_0fc66ee74538f12c], a0, a1);
      }

      jint MathUtils::hash(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_hash_0bbaa89e7f8976bd], a0.this$);
      }

      jint MathUtils::hash(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_hash_9e72cb20adb363fb], a0);
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::max$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::min$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      jdouble MathUtils::normalizeAngle(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_normalizeAngle_82f92590f4247da1], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::normalizeAngle(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_normalizeAngle_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      jdouble MathUtils::reduce(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_reduce_db06d8c3fc3d9670], a0, a1, a2);
      }

      ::org::hipparchus::util::MathUtils$SumAndResidual MathUtils::twoSum(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::MathUtils$SumAndResidual(env->callStaticObjectMethod(cls, mids$[mid_twoSum_ac565a513efe989e], a0, a1));
      }

      ::org::hipparchus::util::MathUtils$FieldSumAndResidual MathUtils::twoSum(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::MathUtils$FieldSumAndResidual(env->callStaticObjectMethod(cls, mids$[mid_twoSum_b856fba37b6f9318], a0.this$, a1.this$));
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
      static PyObject *t_MathUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils_checkDimension(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkFinite(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkNotNull(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkRangeInclusive(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_copySign(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_hash(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_max(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_min(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_normalizeAngle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_reduce(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_twoSum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_MathUtils__methods_[] = {
        DECLARE_METHOD(t_MathUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkDimension, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkFinite, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkNotNull, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkRangeInclusive, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, copySign, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, hash, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, max, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, min, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, normalizeAngle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, reduce, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, twoSum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils)[] = {
        { Py_tp_methods, t_MathUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils, t_MathUtils, MathUtils);

      void t_MathUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils), &PY_TYPE_DEF(MathUtils), module, "MathUtils", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "FieldSumAndResidual", make_descriptor(&PY_TYPE_DEF(MathUtils$FieldSumAndResidual)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "SumAndResidual", make_descriptor(&PY_TYPE_DEF(MathUtils$SumAndResidual)));
      }

      void t_MathUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "class_", make_descriptor(MathUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "wrapfn_", make_descriptor(t_MathUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(MathUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "PI_SQUARED", make_descriptor(MathUtils::PI_SQUARED));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "SEMI_PI", make_descriptor(MathUtils::SEMI_PI));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "TWO_PI", make_descriptor(MathUtils::TWO_PI));
      }

      static PyObject *t_MathUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils::initializeClass, 1)))
          return NULL;
        return t_MathUtils::wrap_Object(MathUtils(((t_MathUtils *) arg)->object.this$));
      }
      static PyObject *t_MathUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils_checkDimension(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::MathUtils::checkDimension(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkDimension", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkFinite(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkFinite(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkFinite(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkFinite", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkNotNull(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Object a0((jobject) NULL);

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkNotNull(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            ::java::lang::Object a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);

            if (!parseArgs(args, "ok[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkNotNull(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkNotNull", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkRangeInclusive(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkRangeInclusive(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong a2;

            if (!parseArgs(args, "JJJ", &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkRangeInclusive(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkRangeInclusive", args);
        return NULL;
      }

      static PyObject *t_MathUtils_copySign(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            jbyte a1;
            jbyte result;

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jshort a0;
            jshort a1;
            jshort result;

            if (!parseArgs(args, "SS", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "copySign", args);
        return NULL;
      }

      static PyObject *t_MathUtils_equals(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::equals(a0, a1));
          Py_RETURN_BOOL(result);
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_MathUtils_hash(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::hash(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jdouble a0;
            jint result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::hash(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "hash", args);
        return NULL;
      }

      static PyObject *t_MathUtils_max(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::max$(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "max", args);
        return NULL;
      }

      static PyObject *t_MathUtils_min(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::min$(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "min", args);
        return NULL;
      }

      static PyObject *t_MathUtils_normalizeAngle(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::normalizeAngle(a0, a1));
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
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::normalizeAngle(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "normalizeAngle", args);
        return NULL;
      }

      static PyObject *t_MathUtils_reduce(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::reduce(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "reduce", args);
        return NULL;
      }

      static PyObject *t_MathUtils_twoSum(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::util::MathUtils$SumAndResidual result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::twoSum(a0, a1));
              return ::org::hipparchus::util::t_MathUtils$SumAndResidual::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::util::MathUtils$FieldSumAndResidual result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::twoSum(a0, a1));
              return ::org::hipparchus::util::t_MathUtils$FieldSumAndResidual::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "twoSum", args);
        return NULL;
      }
    }
  }
}
