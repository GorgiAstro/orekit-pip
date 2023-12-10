#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClock$Receiver.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$Receiver::class$ = NULL;
          jmethodID *RinexClock$Receiver::mids$ = NULL;
          bool RinexClock$Receiver::live$ = false;

          jclass RinexClock$Receiver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$Receiver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4831ccef11c12868] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DDD)V");
              mids$[mid_getDesignator_11b109bd155ca898] = env->getMethodID(cls, "getDesignator", "()Ljava/lang/String;");
              mids$[mid_getReceiverIdentifier_11b109bd155ca898] = env->getMethodID(cls, "getReceiverIdentifier", "()Ljava/lang/String;");
              mids$[mid_getX_dff5885c2c873297] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_dff5885c2c873297] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZ_dff5885c2c873297] = env->getMethodID(cls, "getZ", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$Receiver::RinexClock$Receiver(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4831ccef11c12868, a0.this$, a1.this$, a2, a3, a4)) {}

          ::java::lang::String RinexClock$Receiver::getDesignator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDesignator_11b109bd155ca898]));
          }

          ::java::lang::String RinexClock$Receiver::getReceiverIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverIdentifier_11b109bd155ca898]));
          }

          jdouble RinexClock$Receiver::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_dff5885c2c873297]);
          }

          jdouble RinexClock$Receiver::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_dff5885c2c873297]);
          }

          jdouble RinexClock$Receiver::getZ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZ_dff5885c2c873297]);
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
        namespace clock {
          static PyObject *t_RinexClock$Receiver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$Receiver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClock$Receiver_init_(t_RinexClock$Receiver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClock$Receiver_getDesignator(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getReceiverIdentifier(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getX(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getY(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getZ(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_get__designator(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__receiverIdentifier(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__x(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__y(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__z(t_RinexClock$Receiver *self, void *data);
          static PyGetSetDef t_RinexClock$Receiver__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$Receiver, designator),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, receiverIdentifier),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, x),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, y),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, z),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$Receiver__methods_[] = {
            DECLARE_METHOD(t_RinexClock$Receiver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$Receiver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$Receiver, getDesignator, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getReceiverIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getX, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getY, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getZ, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$Receiver)[] = {
            { Py_tp_methods, t_RinexClock$Receiver__methods_ },
            { Py_tp_init, (void *) t_RinexClock$Receiver_init_ },
            { Py_tp_getset, t_RinexClock$Receiver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$Receiver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock$Receiver, t_RinexClock$Receiver, RinexClock$Receiver);

          void t_RinexClock$Receiver::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$Receiver), &PY_TYPE_DEF(RinexClock$Receiver), module, "RinexClock$Receiver", 0);
          }

          void t_RinexClock$Receiver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$Receiver), "class_", make_descriptor(RinexClock$Receiver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$Receiver), "wrapfn_", make_descriptor(t_RinexClock$Receiver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$Receiver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock$Receiver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$Receiver::initializeClass, 1)))
              return NULL;
            return t_RinexClock$Receiver::wrap_Object(RinexClock$Receiver(((t_RinexClock$Receiver *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$Receiver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$Receiver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClock$Receiver_init_(t_RinexClock$Receiver *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            jdouble a4;
            RinexClock$Receiver object((jobject) NULL);

            if (!parseArgs(args, "ssDDD", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = RinexClock$Receiver(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexClock$Receiver_getDesignator(t_RinexClock$Receiver *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getDesignator());
            return j2p(result);
          }

          static PyObject *t_RinexClock$Receiver_getReceiverIdentifier(t_RinexClock$Receiver *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverIdentifier());
            return j2p(result);
          }

          static PyObject *t_RinexClock$Receiver_getX(t_RinexClock$Receiver *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$Receiver_getY(t_RinexClock$Receiver *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getY());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$Receiver_getZ(t_RinexClock$Receiver *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getZ());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$Receiver_get__designator(t_RinexClock$Receiver *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getDesignator());
            return j2p(value);
          }

          static PyObject *t_RinexClock$Receiver_get__receiverIdentifier(t_RinexClock$Receiver *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverIdentifier());
            return j2p(value);
          }

          static PyObject *t_RinexClock$Receiver_get__x(t_RinexClock$Receiver *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$Receiver_get__y(t_RinexClock$Receiver *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getY());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$Receiver_get__z(t_RinexClock$Receiver *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getZ());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAbsolutePVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *FieldAbsolutePVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool FieldAbsolutePVCoordinatesHermiteInterpolator::live$ = false;

      jclass FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAbsolutePVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b5680f5c30eede66] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_f67f9ac4338cd9bf] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_66865f52d36c8d04] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_1958d683b153c045] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_16e9a7b5414faf2d] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getOutputFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_288eddbc9c4f0da2] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b5680f5c30eede66, a0.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_f67f9ac4338cd9bf, a0, a1.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_66865f52d36c8d04, a0, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_1958d683b153c045, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter FieldAbsolutePVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_16e9a7b5414faf2d]));
      }

      ::org::orekit::frames::Frame FieldAbsolutePVCoordinatesHermiteInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_b86f9f61d97a7244]));
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
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_of_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getFilter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__filter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_FieldAbsolutePVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsolutePVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, getOutputFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsolutePVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_FieldAbsolutePVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_FieldAbsolutePVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsolutePVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator, t_FieldAbsolutePVCoordinatesHermiteInterpolator, FieldAbsolutePVCoordinatesHermiteInterpolator);
      PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(const FieldAbsolutePVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinatesHermiteInterpolator *self = (t_FieldAbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinatesHermiteInterpolator *self = (t_FieldAbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsolutePVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(FieldAbsolutePVCoordinatesHermiteInterpolator), module, "FieldAbsolutePVCoordinatesHermiteInterpolator", 0);
      }

      void t_FieldAbsolutePVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "class_", make_descriptor(FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(FieldAbsolutePVCoordinatesHermiteInterpolator(((t_FieldAbsolutePVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_of_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2, a3));
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

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getFilter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__filter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *RawSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *RawSphericalHarmonicsProvider::mids$ = NULL;
          bool RawSphericalHarmonicsProvider::live$ = false;

          jclass RawSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_onDate_25793e429590ca38] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics RawSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_25793e429590ca38], a0.this$));
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
          static PyObject *t_RawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider_onDate(t_RawSphericalHarmonicsProvider *self, PyObject *arg);

          static PyMethodDef t_RawSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RawSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_RawSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RawSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider),
            NULL
          };

          DEFINE_TYPE(RawSphericalHarmonicsProvider, t_RawSphericalHarmonicsProvider, RawSphericalHarmonicsProvider);

          void t_RawSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(RawSphericalHarmonicsProvider), &PY_TYPE_DEF(RawSphericalHarmonicsProvider), module, "RawSphericalHarmonicsProvider", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "RawSphericalHarmonics", make_descriptor(&PY_TYPE_DEF(RawSphericalHarmonicsProvider$RawSphericalHarmonics)));
          }

          void t_RawSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "class_", make_descriptor(RawSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_RawSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RawSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_RawSphericalHarmonicsProvider::wrap_Object(RawSphericalHarmonicsProvider(((t_RawSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_RawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RawSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RawSphericalHarmonicsProvider_onDate(t_RawSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_Object(result);
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
                mids$[mid_getAf0_dff5885c2c873297] = env->getMethodID(cls, "getAf0", "()D");
                mids$[mid_getAf1_dff5885c2c873297] = env->getMethodID(cls, "getAf1", "()D");
                mids$[mid_getAf2_dff5885c2c873297] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCycleDuration_dff5885c2c873297] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getTGD_dff5885c2c873297] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getToc_dff5885c2c873297] = env->getMethodID(cls, "getToc", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GNSSClockElements::getAf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf0_dff5885c2c873297]);
            }

            jdouble GNSSClockElements::getAf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf1_dff5885c2c873297]);
            }

            jdouble GNSSClockElements::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_dff5885c2c873297]);
            }

            jdouble GNSSClockElements::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_dff5885c2c873297]);
            }

            jdouble GNSSClockElements::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_dff5885c2c873297]);
            }

            jdouble GNSSClockElements::getToc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getToc_dff5885c2c873297]);
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/LnsCoefficients.h"
#include "java/util/SortedMap.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *LnsCoefficients::class$ = NULL;
            jmethodID *LnsCoefficients::mids$ = NULL;
            bool LnsCoefficients::live$ = false;

            jclass LnsCoefficients::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/LnsCoefficients");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b122398eeda7067f] = env->getMethodID(cls, "<init>", "(II[[DLjava/util/SortedMap;D)V");
                mids$[mid_getLns_dbbe5f05149dbf73] = env->getMethodID(cls, "getLns", "(II)D");
                mids$[mid_getdLnsdGamma_dbbe5f05149dbf73] = env->getMethodID(cls, "getdLnsdGamma", "(II)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LnsCoefficients::LnsCoefficients(jint a0, jint a1, const JArray< JArray< jdouble > > & a2, const ::java::util::SortedMap & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b122398eeda7067f, a0, a1, a2.this$, a3.this$, a4)) {}

            jdouble LnsCoefficients::getLns(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLns_dbbe5f05149dbf73], a0, a1);
            }

            jdouble LnsCoefficients::getdLnsdGamma(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdLnsdGamma_dbbe5f05149dbf73], a0, a1);
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
            static PyObject *t_LnsCoefficients_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LnsCoefficients_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LnsCoefficients_init_(t_LnsCoefficients *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LnsCoefficients_getLns(t_LnsCoefficients *self, PyObject *args);
            static PyObject *t_LnsCoefficients_getdLnsdGamma(t_LnsCoefficients *self, PyObject *args);

            static PyMethodDef t_LnsCoefficients__methods_[] = {
              DECLARE_METHOD(t_LnsCoefficients, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LnsCoefficients, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LnsCoefficients, getLns, METH_VARARGS),
              DECLARE_METHOD(t_LnsCoefficients, getdLnsdGamma, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LnsCoefficients)[] = {
              { Py_tp_methods, t_LnsCoefficients__methods_ },
              { Py_tp_init, (void *) t_LnsCoefficients_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LnsCoefficients)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LnsCoefficients, t_LnsCoefficients, LnsCoefficients);

            void t_LnsCoefficients::install(PyObject *module)
            {
              installType(&PY_TYPE(LnsCoefficients), &PY_TYPE_DEF(LnsCoefficients), module, "LnsCoefficients", 0);
            }

            void t_LnsCoefficients::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "class_", make_descriptor(LnsCoefficients::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "wrapfn_", make_descriptor(t_LnsCoefficients::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LnsCoefficients_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LnsCoefficients::initializeClass, 1)))
                return NULL;
              return t_LnsCoefficients::wrap_Object(LnsCoefficients(((t_LnsCoefficients *) arg)->object.this$));
            }
            static PyObject *t_LnsCoefficients_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LnsCoefficients::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LnsCoefficients_init_(t_LnsCoefficients *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jint a1;
              JArray< JArray< jdouble > > a2((jobject) NULL);
              ::java::util::SortedMap a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              LnsCoefficients object((jobject) NULL);

              if (!parseArgs(args, "II[[DKD", ::java::util::SortedMap::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_SortedMap::parameters_, &a4))
              {
                INT_CALL(object = LnsCoefficients(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_LnsCoefficients_getLns(t_LnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLns(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getLns", args);
              return NULL;
            }

            static PyObject *t_LnsCoefficients_getdLnsdGamma(t_LnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdLnsdGamma(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdLnsdGamma", args);
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
#include "org/orekit/utils/GenericTimeStampedCache.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "java/lang/IllegalStateException.h"
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
          mids$[mid_init$_7f578824dbb30780] = env->getMethodID(cls, "<init>", "(IIDDLorg/orekit/utils/TimeStampedGenerator;)V");
          mids$[mid_init$_78773a34e0cc3e3a] = env->getMethodID(cls, "<init>", "(IIDDLorg/orekit/utils/TimeStampedGenerator;D)V");
          mids$[mid_getEarliest_c2a1e08c7d64b02c] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getEntries_570ce0828f81a2c1] = env->getMethodID(cls, "getEntries", "()I");
          mids$[mid_getGenerateCalls_570ce0828f81a2c1] = env->getMethodID(cls, "getGenerateCalls", "()I");
          mids$[mid_getGenerator_8de8e24d5cfdcebf] = env->getMethodID(cls, "getGenerator", "()Lorg/orekit/utils/TimeStampedGenerator;");
          mids$[mid_getGetNeighborsCalls_570ce0828f81a2c1] = env->getMethodID(cls, "getGetNeighborsCalls", "()I");
          mids$[mid_getLatest_c2a1e08c7d64b02c] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getMaxSlots_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxSlots", "()I");
          mids$[mid_getMaxSpan_dff5885c2c873297] = env->getMethodID(cls, "getMaxSpan", "()D");
          mids$[mid_getNeighbors_a067290de6165283] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_getNewSlotQuantumGap_dff5885c2c873297] = env->getMethodID(cls, "getNewSlotQuantumGap", "()D");
          mids$[mid_getSlots_570ce0828f81a2c1] = env->getMethodID(cls, "getSlots", "()I");
          mids$[mid_getSlotsEvictions_570ce0828f81a2c1] = env->getMethodID(cls, "getSlotsEvictions", "()I");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_CACHED_SLOTS_NUMBER = env->getStaticIntField(cls, "DEFAULT_CACHED_SLOTS_NUMBER");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GenericTimeStampedCache::GenericTimeStampedCache(jint a0, jint a1, jdouble a2, jdouble a3, const ::org::orekit::utils::TimeStampedGenerator & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7f578824dbb30780, a0, a1, a2, a3, a4.this$)) {}

      GenericTimeStampedCache::GenericTimeStampedCache(jint a0, jint a1, jdouble a2, jdouble a3, const ::org::orekit::utils::TimeStampedGenerator & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78773a34e0cc3e3a, a0, a1, a2, a3, a4.this$, a5)) {}

      ::org::orekit::time::TimeStamped GenericTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_c2a1e08c7d64b02c]));
      }

      jint GenericTimeStampedCache::getEntries() const
      {
        return env->callIntMethod(this$, mids$[mid_getEntries_570ce0828f81a2c1]);
      }

      jint GenericTimeStampedCache::getGenerateCalls() const
      {
        return env->callIntMethod(this$, mids$[mid_getGenerateCalls_570ce0828f81a2c1]);
      }

      ::org::orekit::utils::TimeStampedGenerator GenericTimeStampedCache::getGenerator() const
      {
        return ::org::orekit::utils::TimeStampedGenerator(env->callObjectMethod(this$, mids$[mid_getGenerator_8de8e24d5cfdcebf]));
      }

      jint GenericTimeStampedCache::getGetNeighborsCalls() const
      {
        return env->callIntMethod(this$, mids$[mid_getGetNeighborsCalls_570ce0828f81a2c1]);
      }

      ::org::orekit::time::TimeStamped GenericTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_c2a1e08c7d64b02c]));
      }

      jint GenericTimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_570ce0828f81a2c1]);
      }

      jint GenericTimeStampedCache::getMaxSlots() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxSlots_570ce0828f81a2c1]);
      }

      jdouble GenericTimeStampedCache::getMaxSpan() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxSpan_dff5885c2c873297]);
      }

      ::java::util::stream::Stream GenericTimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_a067290de6165283], a0.this$, a1));
      }

      jdouble GenericTimeStampedCache::getNewSlotQuantumGap() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNewSlotQuantumGap_dff5885c2c873297]);
      }

      jint GenericTimeStampedCache::getSlots() const
      {
        return env->callIntMethod(this$, mids$[mid_getSlots_570ce0828f81a2c1]);
      }

      jint GenericTimeStampedCache::getSlotsEvictions() const
      {
        return env->callIntMethod(this$, mids$[mid_getSlotsEvictions_570ce0828f81a2c1]);
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
#include "org/hipparchus/geometry/euclidean/oned/Vector1DFormat.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "java/text/NumberFormat.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1DFormat.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Vector1DFormat::class$ = NULL;
          jmethodID *Vector1DFormat::mids$ = NULL;
          bool Vector1DFormat::live$ = false;

          jclass Vector1DFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Vector1DFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_256f36a22c0d0f55] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_6a2001eff0605f71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_7706b32444fa5b9a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_84b38396c796d436] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector1DFormat_866be8bfa4bc145d] = env->getStaticMethodID(cls, "getVector1DFormat", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1DFormat;");
              mids$[mid_getVector1DFormat_ecec3e400f920a3d] = env->getStaticMethodID(cls, "getVector1DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/oned/Vector1DFormat;");
              mids$[mid_parse_9ee5006ad26b508d] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_parse_77e599b352cc406f] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector1DFormat::Vector1DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          Vector1DFormat::Vector1DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_256f36a22c0d0f55, a0.this$)) {}

          Vector1DFormat::Vector1DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_6a2001eff0605f71, a0.this$, a1.this$)) {}

          Vector1DFormat::Vector1DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_7706b32444fa5b9a, a0.this$, a1.this$, a2.this$)) {}

          ::java::lang::StringBuffer Vector1DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_84b38396c796d436], a0.this$, a1.this$, a2.this$));
          }

          Vector1DFormat Vector1DFormat::getVector1DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector1DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector1DFormat_866be8bfa4bc145d]));
          }

          Vector1DFormat Vector1DFormat::getVector1DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector1DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector1DFormat_ecec3e400f920a3d], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Vector1DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_parse_9ee5006ad26b508d], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Vector1DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_parse_77e599b352cc406f], a0.this$, a1.this$));
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
          static PyObject *t_Vector1DFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector1DFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector1DFormat_of_(t_Vector1DFormat *self, PyObject *args);
          static int t_Vector1DFormat_init_(t_Vector1DFormat *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector1DFormat_format(t_Vector1DFormat *self, PyObject *args);
          static PyObject *t_Vector1DFormat_getVector1DFormat(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1DFormat_parse(t_Vector1DFormat *self, PyObject *args);
          static PyObject *t_Vector1DFormat_get__vector1DFormat(t_Vector1DFormat *self, void *data);
          static PyObject *t_Vector1DFormat_get__parameters_(t_Vector1DFormat *self, void *data);
          static PyGetSetDef t_Vector1DFormat__fields_[] = {
            DECLARE_GET_FIELD(t_Vector1DFormat, vector1DFormat),
            DECLARE_GET_FIELD(t_Vector1DFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector1DFormat__methods_[] = {
            DECLARE_METHOD(t_Vector1DFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1DFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1DFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_Vector1DFormat, format, METH_VARARGS),
            DECLARE_METHOD(t_Vector1DFormat, getVector1DFormat, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1DFormat, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector1DFormat)[] = {
            { Py_tp_methods, t_Vector1DFormat__methods_ },
            { Py_tp_init, (void *) t_Vector1DFormat_init_ },
            { Py_tp_getset, t_Vector1DFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector1DFormat)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::VectorFormat),
            NULL
          };

          DEFINE_TYPE(Vector1DFormat, t_Vector1DFormat, Vector1DFormat);
          PyObject *t_Vector1DFormat::wrap_Object(const Vector1DFormat& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector1DFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector1DFormat *self = (t_Vector1DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Vector1DFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector1DFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector1DFormat *self = (t_Vector1DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Vector1DFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector1DFormat), &PY_TYPE_DEF(Vector1DFormat), module, "Vector1DFormat", 0);
          }

          void t_Vector1DFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1DFormat), "class_", make_descriptor(Vector1DFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1DFormat), "wrapfn_", make_descriptor(t_Vector1DFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1DFormat), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vector1DFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector1DFormat::initializeClass, 1)))
              return NULL;
            return t_Vector1DFormat::wrap_Object(Vector1DFormat(((t_Vector1DFormat *) arg)->object.this$));
          }
          static PyObject *t_Vector1DFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector1DFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vector1DFormat_of_(t_Vector1DFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Vector1DFormat_init_(t_Vector1DFormat *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector1DFormat object((jobject) NULL);

                INT_CALL(object = Vector1DFormat());
                self->object = object;
                self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
                break;
              }
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                Vector1DFormat object((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  INT_CALL(object = Vector1DFormat(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                Vector1DFormat object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = Vector1DFormat(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::text::NumberFormat a2((jobject) NULL);
                Vector1DFormat object((jobject) NULL);

                if (!parseArgs(args, "ssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector1DFormat(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
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

          static PyObject *t_Vector1DFormat_format(t_Vector1DFormat *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Vector1DFormat), (PyObject *) self, "format", args, 2);
          }

          static PyObject *t_Vector1DFormat_getVector1DFormat(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector1DFormat result((jobject) NULL);
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1DFormat::getVector1DFormat());
                return t_Vector1DFormat::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::util::Locale a0((jobject) NULL);
                Vector1DFormat result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1DFormat::getVector1DFormat(a0));
                  return t_Vector1DFormat::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getVector1DFormat", args);
            return NULL;
          }

          static PyObject *t_Vector1DFormat_parse(t_Vector1DFormat *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::text::ParsePosition a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector1DFormat), (PyObject *) self, "parse", args, 2);
          }
          static PyObject *t_Vector1DFormat_get__parameters_(t_Vector1DFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Vector1DFormat_get__vector1DFormat(t_Vector1DFormat *self, void *data)
          {
            Vector1DFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector1DFormat());
            return t_Vector1DFormat::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractShapiroBaseModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractShapiroBaseModifier::class$ = NULL;
          jmethodID *AbstractShapiroBaseModifier::mids$ = NULL;
          bool AbstractShapiroBaseModifier::live$ = false;

          jclass AbstractShapiroBaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractShapiroBaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_doModify_d1815d998cba71e9] = env->getMethodID(cls, "doModify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_shapiroCorrection_29151631501fa929] = env->getMethodID(cls, "shapiroCorrection", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/utils/TimeStampedPVCoordinates;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractShapiroBaseModifier::AbstractShapiroBaseModifier(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}
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
          static PyObject *t_AbstractShapiroBaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractShapiroBaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractShapiroBaseModifier_init_(t_AbstractShapiroBaseModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractShapiroBaseModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractShapiroBaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractShapiroBaseModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractShapiroBaseModifier)[] = {
            { Py_tp_methods, t_AbstractShapiroBaseModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractShapiroBaseModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractShapiroBaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractShapiroBaseModifier, t_AbstractShapiroBaseModifier, AbstractShapiroBaseModifier);

          void t_AbstractShapiroBaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractShapiroBaseModifier), &PY_TYPE_DEF(AbstractShapiroBaseModifier), module, "AbstractShapiroBaseModifier", 0);
          }

          void t_AbstractShapiroBaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "class_", make_descriptor(AbstractShapiroBaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "wrapfn_", make_descriptor(t_AbstractShapiroBaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractShapiroBaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractShapiroBaseModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractShapiroBaseModifier::wrap_Object(AbstractShapiroBaseModifier(((t_AbstractShapiroBaseModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractShapiroBaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractShapiroBaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractShapiroBaseModifier_init_(t_AbstractShapiroBaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            AbstractShapiroBaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = AbstractShapiroBaseModifier(a0));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *FieldComplexField::class$ = NULL;
      jmethodID *FieldComplexField::mids$ = NULL;
      bool FieldComplexField::live$ = false;

      jclass FieldComplexField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/FieldComplexField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getField_560e9f4ec935da98] = env->getStaticMethodID(cls, "getField", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplexField;");
          mids$[mid_getOne_ded2d2c0c0e6239b] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_ded2d2c0c0e6239b] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean FieldComplexField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      FieldComplexField FieldComplexField::getField(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplexField(env->callStaticObjectMethod(cls, mids$[mid_getField_560e9f4ec935da98], a0.this$));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexField::getOne() const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_getOne_ded2d2c0c0e6239b]));
      }

      ::java::lang::Class FieldComplexField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexField::getZero() const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_getZero_ded2d2c0c0e6239b]));
      }

      jint FieldComplexField::hashCode() const
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
    namespace complex {
      static PyObject *t_FieldComplexField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexField_of_(t_FieldComplexField *self, PyObject *args);
      static PyObject *t_FieldComplexField_equals(t_FieldComplexField *self, PyObject *args);
      static PyObject *t_FieldComplexField_getField(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexField_getOne(t_FieldComplexField *self);
      static PyObject *t_FieldComplexField_getRuntimeClass(t_FieldComplexField *self);
      static PyObject *t_FieldComplexField_getZero(t_FieldComplexField *self);
      static PyObject *t_FieldComplexField_hashCode(t_FieldComplexField *self, PyObject *args);
      static PyObject *t_FieldComplexField_get__one(t_FieldComplexField *self, void *data);
      static PyObject *t_FieldComplexField_get__runtimeClass(t_FieldComplexField *self, void *data);
      static PyObject *t_FieldComplexField_get__zero(t_FieldComplexField *self, void *data);
      static PyObject *t_FieldComplexField_get__parameters_(t_FieldComplexField *self, void *data);
      static PyGetSetDef t_FieldComplexField__fields_[] = {
        DECLARE_GET_FIELD(t_FieldComplexField, one),
        DECLARE_GET_FIELD(t_FieldComplexField, runtimeClass),
        DECLARE_GET_FIELD(t_FieldComplexField, zero),
        DECLARE_GET_FIELD(t_FieldComplexField, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldComplexField__methods_[] = {
        DECLARE_METHOD(t_FieldComplexField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexField, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplexField, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplexField, getField, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplexField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplexField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplexField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldComplexField)[] = {
        { Py_tp_methods, t_FieldComplexField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldComplexField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldComplexField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldComplexField, t_FieldComplexField, FieldComplexField);
      PyObject *t_FieldComplexField::wrap_Object(const FieldComplexField& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexField::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexField *self = (t_FieldComplexField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldComplexField::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexField::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexField *self = (t_FieldComplexField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldComplexField::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldComplexField), &PY_TYPE_DEF(FieldComplexField), module, "FieldComplexField", 0);
      }

      void t_FieldComplexField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexField), "class_", make_descriptor(FieldComplexField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexField), "wrapfn_", make_descriptor(t_FieldComplexField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldComplexField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldComplexField::initializeClass, 1)))
          return NULL;
        return t_FieldComplexField::wrap_Object(FieldComplexField(((t_FieldComplexField *) arg)->object.this$));
      }
      static PyObject *t_FieldComplexField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldComplexField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldComplexField_of_(t_FieldComplexField *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldComplexField_equals(t_FieldComplexField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldComplexField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldComplexField_getField(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplexField result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplexField::getField(a0));
          return t_FieldComplexField::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getField", arg);
        return NULL;
      }

      static PyObject *t_FieldComplexField_getOne(t_FieldComplexField *self)
      {
        ::org::hipparchus::complex::FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplexField_getRuntimeClass(t_FieldComplexField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result);
      }

      static PyObject *t_FieldComplexField_getZero(t_FieldComplexField *self)
      {
        ::org::hipparchus::complex::FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplexField_hashCode(t_FieldComplexField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldComplexField), (PyObject *) self, "hashCode", args, 2);
      }
      static PyObject *t_FieldComplexField_get__parameters_(t_FieldComplexField *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldComplexField_get__one(t_FieldComplexField *self, void *data)
      {
        ::org::hipparchus::complex::FieldComplex value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(value);
      }

      static PyObject *t_FieldComplexField_get__runtimeClass(t_FieldComplexField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_FieldComplexField_get__zero(t_FieldComplexField *self, void *data)
      {
        ::org::hipparchus::complex::FieldComplex value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/QRDecomposition.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *QRDecomposition::class$ = NULL;
      jmethodID *QRDecomposition::mids$ = NULL;
      bool QRDecomposition::live$ = false;

      jclass QRDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/QRDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_21a79182f4dd9085] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getH_688b496048ff947b] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getQ_688b496048ff947b] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getQT_688b496048ff947b] = env->getMethodID(cls, "getQT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getR_688b496048ff947b] = env->getMethodID(cls, "getR", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSolver_6b396ee5bc11943f] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_decompose_a0befc7f3dc19e41] = env->getMethodID(cls, "decompose", "([[D)V");
          mids$[mid_performHouseholderReflection_3ca2bf5de9b54389] = env->getMethodID(cls, "performHouseholderReflection", "(I[[D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      QRDecomposition::QRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

      QRDecomposition::QRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_21a79182f4dd9085, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getH() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getH_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getQ() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getQ_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getQT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getQT_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getR() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getR_688b496048ff947b]));
      }

      ::org::hipparchus::linear::DecompositionSolver QRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_6b396ee5bc11943f]));
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
      static PyObject *t_QRDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QRDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_QRDecomposition_init_(t_QRDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_QRDecomposition_getH(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getQ(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getQT(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getR(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getSolver(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_get__h(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__q(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__qT(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__r(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__solver(t_QRDecomposition *self, void *data);
      static PyGetSetDef t_QRDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_QRDecomposition, h),
        DECLARE_GET_FIELD(t_QRDecomposition, q),
        DECLARE_GET_FIELD(t_QRDecomposition, qT),
        DECLARE_GET_FIELD(t_QRDecomposition, r),
        DECLARE_GET_FIELD(t_QRDecomposition, solver),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_QRDecomposition__methods_[] = {
        DECLARE_METHOD(t_QRDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposition, getH, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getQ, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getQT, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getR, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getSolver, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(QRDecomposition)[] = {
        { Py_tp_methods, t_QRDecomposition__methods_ },
        { Py_tp_init, (void *) t_QRDecomposition_init_ },
        { Py_tp_getset, t_QRDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(QRDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(QRDecomposition, t_QRDecomposition, QRDecomposition);

      void t_QRDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(QRDecomposition), &PY_TYPE_DEF(QRDecomposition), module, "QRDecomposition", 0);
      }

      void t_QRDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "class_", make_descriptor(QRDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "wrapfn_", make_descriptor(t_QRDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_QRDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, QRDecomposition::initializeClass, 1)))
          return NULL;
        return t_QRDecomposition::wrap_Object(QRDecomposition(((t_QRDecomposition *) arg)->object.this$));
      }
      static PyObject *t_QRDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, QRDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_QRDecomposition_init_(t_QRDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            QRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = QRDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            QRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = QRDecomposition(a0, a1));
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

      static PyObject *t_QRDecomposition_getH(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getQ(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQ());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getQT(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getR(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getR());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getSolver(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_get__h(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__q(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQ());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__qT(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__r(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getR());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__solver(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Euclidean3D::class$ = NULL;
          jmethodID *Euclidean3D::mids$ = NULL;
          bool Euclidean3D::live$ = false;

          jclass Euclidean3D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Euclidean3D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_77987c948d33384e] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/threed/Euclidean3D;");
              mids$[mid_getSubSpace_6c1c21e9986360d8] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/euclidean/twod/Euclidean2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean3D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
          }

          Euclidean3D Euclidean3D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean3D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_77987c948d33384e]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Euclidean2D Euclidean3D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Euclidean2D(env->callObjectMethod(this$, mids$[mid_getSubSpace_6c1c21e9986360d8]));
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
          static PyObject *t_Euclidean3D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean3D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean3D_getDimension(t_Euclidean3D *self);
          static PyObject *t_Euclidean3D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean3D_getSubSpace(t_Euclidean3D *self);
          static PyObject *t_Euclidean3D_get__dimension(t_Euclidean3D *self, void *data);
          static PyObject *t_Euclidean3D_get__instance(t_Euclidean3D *self, void *data);
          static PyObject *t_Euclidean3D_get__subSpace(t_Euclidean3D *self, void *data);
          static PyGetSetDef t_Euclidean3D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean3D, dimension),
            DECLARE_GET_FIELD(t_Euclidean3D, instance),
            DECLARE_GET_FIELD(t_Euclidean3D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean3D__methods_[] = {
            DECLARE_METHOD(t_Euclidean3D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean3D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean3D)[] = {
            { Py_tp_methods, t_Euclidean3D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean3D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean3D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean3D, t_Euclidean3D, Euclidean3D);

          void t_Euclidean3D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean3D), &PY_TYPE_DEF(Euclidean3D), module, "Euclidean3D", 0);
          }

          void t_Euclidean3D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "class_", make_descriptor(Euclidean3D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "wrapfn_", make_descriptor(t_Euclidean3D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean3D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean3D::initializeClass, 1)))
              return NULL;
            return t_Euclidean3D::wrap_Object(Euclidean3D(((t_Euclidean3D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean3D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean3D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean3D_getDimension(t_Euclidean3D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean3D_getInstance(PyTypeObject *type)
          {
            Euclidean3D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Euclidean3D::getInstance());
            return t_Euclidean3D::wrap_Object(result);
          }

          static PyObject *t_Euclidean3D_getSubSpace(t_Euclidean3D *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Euclidean2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_Euclidean2D::wrap_Object(result);
          }

          static PyObject *t_Euclidean3D_get__dimension(t_Euclidean3D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean3D_get__instance(t_Euclidean3D *self, void *data)
          {
            Euclidean3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean3D::wrap_Object(value);
          }

          static PyObject *t_Euclidean3D_get__subSpace(t_Euclidean3D *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Euclidean2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_Euclidean2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeUnitsConverter::class$ = NULL;
            jmethodID *RangeUnitsConverter::mids$ = NULL;
            bool RangeUnitsConverter::live$ = false;

            jclass RangeUnitsConverter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_metersToRu_19583340ae9202d1] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_ruToMeters_19583340ae9202d1] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble RangeUnitsConverter::metersToRu(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_metersToRu_19583340ae9202d1], a0.this$, a1.this$, a2);
            }

            jdouble RangeUnitsConverter::ruToMeters(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_ruToMeters_19583340ae9202d1], a0.this$, a1.this$, a2);
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
            static PyObject *t_RangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnitsConverter_metersToRu(t_RangeUnitsConverter *self, PyObject *args);
            static PyObject *t_RangeUnitsConverter_ruToMeters(t_RangeUnitsConverter *self, PyObject *args);

            static PyMethodDef t_RangeUnitsConverter__methods_[] = {
              DECLARE_METHOD(t_RangeUnitsConverter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnitsConverter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnitsConverter, metersToRu, METH_VARARGS),
              DECLARE_METHOD(t_RangeUnitsConverter, ruToMeters, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeUnitsConverter)[] = {
              { Py_tp_methods, t_RangeUnitsConverter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeUnitsConverter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RangeUnitsConverter, t_RangeUnitsConverter, RangeUnitsConverter);

            void t_RangeUnitsConverter::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeUnitsConverter), &PY_TYPE_DEF(RangeUnitsConverter), module, "RangeUnitsConverter", 0);
            }

            void t_RangeUnitsConverter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "class_", make_descriptor(RangeUnitsConverter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "wrapfn_", make_descriptor(t_RangeUnitsConverter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeUnitsConverter::initializeClass, 1)))
                return NULL;
              return t_RangeUnitsConverter::wrap_Object(RangeUnitsConverter(((t_RangeUnitsConverter *) arg)->object.this$));
            }
            static PyObject *t_RangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeUnitsConverter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeUnitsConverter_metersToRu(t_RangeUnitsConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.metersToRu(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "metersToRu", args);
              return NULL;
            }

            static PyObject *t_RangeUnitsConverter_ruToMeters(t_RangeUnitsConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.ruToMeters(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "ruToMeters", args);
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
#include "org/orekit/forces/PythonForceModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *PythonForceModel::class$ = NULL;
      jmethodID *PythonForceModel::mids$ = NULL;
      bool PythonForceModel::live$ = false;

      jclass PythonForceModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/PythonForceModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_addContribution_5852b6ea0a71dcb4] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
          mids$[mid_addContribution_9d1574df69c5f1ff] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
          mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getParameterDriver_32a37bc1292372ac] = env->getMethodID(cls, "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;");
          mids$[mid_getParameters_60c7040667a7dc5c] = env->getMethodID(cls, "getParameters", "()[D");
          mids$[mid_getParameters_f040a403cffae196] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_isSupported_7edad2c2f64f4d68] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonForceModel::PythonForceModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonForceModel::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonForceModel::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonForceModel::pythonExtension(jlong a0) const
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
    namespace forces {
      static PyObject *t_PythonForceModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonForceModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonForceModel_init_(t_PythonForceModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonForceModel_finalize(t_PythonForceModel *self);
      static PyObject *t_PythonForceModel_pythonExtension(t_PythonForceModel *self, PyObject *args);
      static jobject JNICALL t_PythonForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonForceModel_addContribution2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonForceModel_addContribution3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonForceModel_dependsOnPositionOnly4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonForceModel_getParameterDriver5(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonForceModel_getParameters6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonForceModel_getParameters7(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonForceModel_getParametersDrivers8(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonForceModel_init9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonForceModel_isSupported10(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonForceModel_pythonDecRef11(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonForceModel_get__self(t_PythonForceModel *self, void *data);
      static PyGetSetDef t_PythonForceModel__fields_[] = {
        DECLARE_GET_FIELD(t_PythonForceModel, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonForceModel__methods_[] = {
        DECLARE_METHOD(t_PythonForceModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonForceModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonForceModel, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonForceModel, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonForceModel)[] = {
        { Py_tp_methods, t_PythonForceModel__methods_ },
        { Py_tp_init, (void *) t_PythonForceModel_init_ },
        { Py_tp_getset, t_PythonForceModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonForceModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonForceModel, t_PythonForceModel, PythonForceModel);

      void t_PythonForceModel::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonForceModel), &PY_TYPE_DEF(PythonForceModel), module, "PythonForceModel", 1);
      }

      void t_PythonForceModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "class_", make_descriptor(PythonForceModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "wrapfn_", make_descriptor(t_PythonForceModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonForceModel::initializeClass);
        JNINativeMethod methods[] = {
          { "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonForceModel_acceleration0 },
          { "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonForceModel_acceleration1 },
          { "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V", (void *) t_PythonForceModel_addContribution2 },
          { "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V", (void *) t_PythonForceModel_addContribution3 },
          { "dependsOnPositionOnly", "()Z", (void *) t_PythonForceModel_dependsOnPositionOnly4 },
          { "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;", (void *) t_PythonForceModel_getParameterDriver5 },
          { "getParameters", "()[D", (void *) t_PythonForceModel_getParameters6 },
          { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonForceModel_getParameters7 },
          { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonForceModel_getParametersDrivers8 },
          { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonForceModel_init9 },
          { "isSupported", "(Ljava/lang/String;)Z", (void *) t_PythonForceModel_isSupported10 },
          { "pythonDecRef", "()V", (void *) t_PythonForceModel_pythonDecRef11 },
        };
        env->registerNatives(cls, methods, 12);
      }

      static PyObject *t_PythonForceModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonForceModel::initializeClass, 1)))
          return NULL;
        return t_PythonForceModel::wrap_Object(PythonForceModel(((t_PythonForceModel *) arg)->object.this$));
      }
      static PyObject *t_PythonForceModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonForceModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonForceModel_init_(t_PythonForceModel *self, PyObject *args, PyObject *kwds)
      {
        PythonForceModel object((jobject) NULL);

        INT_CALL(object = PythonForceModel());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonForceModel_finalize(t_PythonForceModel *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonForceModel_pythonExtension(t_PythonForceModel *self, PyObject *args)
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

      static jobject JNICALL t_PythonForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = JArray<jdouble>(a1).wrap();
        PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("acceleration", result);
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

      static jobject JNICALL t_PythonForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("acceleration", result);
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

      static void JNICALL t_PythonForceModel_addContribution2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *o1 = ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::wrap_Object(::org::orekit::propagation::numerical::FieldTimeDerivativesEquations(a1));
        PyObject *result = PyObject_CallMethod(obj, "addContribution", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonForceModel_addContribution3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = ::org::orekit::propagation::numerical::t_TimeDerivativesEquations::wrap_Object(::org::orekit::propagation::numerical::TimeDerivativesEquations(a1));
        PyObject *result = PyObject_CallMethod(obj, "addContribution", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jboolean JNICALL t_PythonForceModel_dependsOnPositionOnly4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *result = PyObject_CallMethod(obj, "dependsOnPositionOnly", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("dependsOnPositionOnly", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonForceModel_getParameterDriver5(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::ParameterDriver value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getParameterDriver", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &value))
        {
          throwTypeError("getParameterDriver", result);
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

      static jobject JNICALL t_PythonForceModel_getParameters6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getParameters", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("getParameters", result);
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

      static jobject JNICALL t_PythonForceModel_getParameters7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
        PyObject *result = PyObject_CallMethod(obj, "getParameters", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("getParameters", result);
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

      static jobject JNICALL t_PythonForceModel_getParametersDrivers8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getParametersDrivers", result);
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

      static void JNICALL t_PythonForceModel_init9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jboolean JNICALL t_PythonForceModel_isSupported10(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isSupported", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isSupported", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static void JNICALL t_PythonForceModel_pythonDecRef11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonForceModel_get__self(t_PythonForceModel *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *Maneuvrable::class$ = NULL;
            jmethodID *Maneuvrable::mids$ = NULL;
            bool Maneuvrable::live$ = false;
            Maneuvrable *Maneuvrable::NO = NULL;
            Maneuvrable *Maneuvrable::N_A = NULL;
            Maneuvrable *Maneuvrable::YES = NULL;

            jclass Maneuvrable::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/Maneuvrable");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getEnum_2dc0bddd82534f22] = env->getStaticMethodID(cls, "getEnum", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_getValue_11b109bd155ca898] = env->getMethodID(cls, "getValue", "()Ljava/lang/String;");
                mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_valueOf_2dc0bddd82534f22] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_values_2965c3863ae8e0f6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                NO = new Maneuvrable(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                N_A = new Maneuvrable(env->getStaticObjectField(cls, "N_A", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                YES = new Maneuvrable(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Maneuvrable Maneuvrable::getEnum(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return Maneuvrable(env->callStaticObjectMethod(cls, mids$[mid_getEnum_2dc0bddd82534f22], a0.this$));
            }

            ::java::lang::String Maneuvrable::getValue() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getValue_11b109bd155ca898]));
            }

            ::java::lang::String Maneuvrable::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
            }

            Maneuvrable Maneuvrable::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return Maneuvrable(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2dc0bddd82534f22], a0.this$));
            }

            JArray< Maneuvrable > Maneuvrable::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< Maneuvrable >(env->callStaticObjectMethod(cls, mids$[mid_values_2965c3863ae8e0f6]));
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
            static PyObject *t_Maneuvrable_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_of_(t_Maneuvrable *self, PyObject *args);
            static PyObject *t_Maneuvrable_getEnum(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_getValue(t_Maneuvrable *self);
            static PyObject *t_Maneuvrable_toString(t_Maneuvrable *self, PyObject *args);
            static PyObject *t_Maneuvrable_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_Maneuvrable_values(PyTypeObject *type);
            static PyObject *t_Maneuvrable_get__value(t_Maneuvrable *self, void *data);
            static PyObject *t_Maneuvrable_get__parameters_(t_Maneuvrable *self, void *data);
            static PyGetSetDef t_Maneuvrable__fields_[] = {
              DECLARE_GET_FIELD(t_Maneuvrable, value),
              DECLARE_GET_FIELD(t_Maneuvrable, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Maneuvrable__methods_[] = {
              DECLARE_METHOD(t_Maneuvrable, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, of_, METH_VARARGS),
              DECLARE_METHOD(t_Maneuvrable, getEnum, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, getValue, METH_NOARGS),
              DECLARE_METHOD(t_Maneuvrable, toString, METH_VARARGS),
              DECLARE_METHOD(t_Maneuvrable, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Maneuvrable)[] = {
              { Py_tp_methods, t_Maneuvrable__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_Maneuvrable__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Maneuvrable)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(Maneuvrable, t_Maneuvrable, Maneuvrable);
            PyObject *t_Maneuvrable::wrap_Object(const Maneuvrable& object, PyTypeObject *p0)
            {
              PyObject *obj = t_Maneuvrable::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Maneuvrable *self = (t_Maneuvrable *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_Maneuvrable::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_Maneuvrable::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Maneuvrable *self = (t_Maneuvrable *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_Maneuvrable::install(PyObject *module)
            {
              installType(&PY_TYPE(Maneuvrable), &PY_TYPE_DEF(Maneuvrable), module, "Maneuvrable", 0);
            }

            void t_Maneuvrable::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "class_", make_descriptor(Maneuvrable::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "wrapfn_", make_descriptor(t_Maneuvrable::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "boxfn_", make_descriptor(boxObject));
              env->getClass(Maneuvrable::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "NO", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::NO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "N_A", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::N_A)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "YES", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::YES)));
            }

            static PyObject *t_Maneuvrable_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Maneuvrable::initializeClass, 1)))
                return NULL;
              return t_Maneuvrable::wrap_Object(Maneuvrable(((t_Maneuvrable *) arg)->object.this$));
            }
            static PyObject *t_Maneuvrable_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Maneuvrable::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Maneuvrable_of_(t_Maneuvrable *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_Maneuvrable_getEnum(PyTypeObject *type, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              Maneuvrable result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::getEnum(a0));
                return t_Maneuvrable::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "getEnum", arg);
              return NULL;
            }

            static PyObject *t_Maneuvrable_getValue(t_Maneuvrable *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getValue());
              return j2p(result);
            }

            static PyObject *t_Maneuvrable_toString(t_Maneuvrable *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(Maneuvrable), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_Maneuvrable_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              Maneuvrable result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::valueOf(a0));
                return t_Maneuvrable::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_Maneuvrable_values(PyTypeObject *type)
            {
              JArray< Maneuvrable > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::values());
              return JArray<jobject>(result.this$).wrap(t_Maneuvrable::wrap_jobject);
            }
            static PyObject *t_Maneuvrable_get__parameters_(t_Maneuvrable *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_Maneuvrable_get__value(t_Maneuvrable *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getValue());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/SHMFormatReader.h"
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

          ::java::lang::Class *SHMFormatReader::class$ = NULL;
          jmethodID *SHMFormatReader::mids$ = NULL;
          bool SHMFormatReader::live$ = false;

          jclass SHMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/SHMFormatReader");

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

          SHMFormatReader::SHMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_d6df10f4e35ef1e8, a0.this$, a1)) {}

          SHMFormatReader::SHMFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_b0bdaadf6311e767, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider SHMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_fc0a96c558346426], a0, a1, a2));
          }

          void SHMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
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
          static PyObject *t_SHMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SHMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SHMFormatReader_init_(t_SHMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SHMFormatReader_getProvider(t_SHMFormatReader *self, PyObject *args);
          static PyObject *t_SHMFormatReader_loadData(t_SHMFormatReader *self, PyObject *args);

          static PyMethodDef t_SHMFormatReader__methods_[] = {
            DECLARE_METHOD(t_SHMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SHMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SHMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_SHMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SHMFormatReader)[] = {
            { Py_tp_methods, t_SHMFormatReader__methods_ },
            { Py_tp_init, (void *) t_SHMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SHMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(SHMFormatReader, t_SHMFormatReader, SHMFormatReader);

          void t_SHMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(SHMFormatReader), &PY_TYPE_DEF(SHMFormatReader), module, "SHMFormatReader", 0);
          }

          void t_SHMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "class_", make_descriptor(SHMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "wrapfn_", make_descriptor(t_SHMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SHMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SHMFormatReader::initializeClass, 1)))
              return NULL;
            return t_SHMFormatReader::wrap_Object(SHMFormatReader(((t_SHMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_SHMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SHMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SHMFormatReader_init_(t_SHMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                SHMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = SHMFormatReader(a0, a1));
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
                SHMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SHMFormatReader(a0, a1, a2));
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

          static PyObject *t_SHMFormatReader_getProvider(t_SHMFormatReader *self, PyObject *args)
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

            return callSuper(PY_TYPE(SHMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_SHMFormatReader_loadData(t_SHMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SHMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RectangularCholeskyDecomposition.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RectangularCholeskyDecomposition::class$ = NULL;
      jmethodID *RectangularCholeskyDecomposition::mids$ = NULL;
      bool RectangularCholeskyDecomposition::live$ = false;

      jclass RectangularCholeskyDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RectangularCholeskyDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_21a79182f4dd9085] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getRank_570ce0828f81a2c1] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getRootMatrix_688b496048ff947b] = env->getMethodID(cls, "getRootMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RectangularCholeskyDecomposition::RectangularCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

      RectangularCholeskyDecomposition::RectangularCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_21a79182f4dd9085, a0.this$, a1)) {}

      jint RectangularCholeskyDecomposition::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::RealMatrix RectangularCholeskyDecomposition::getRootMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRootMatrix_688b496048ff947b]));
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
      static PyObject *t_RectangularCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RectangularCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RectangularCholeskyDecomposition_init_(t_RectangularCholeskyDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RectangularCholeskyDecomposition_getRank(t_RectangularCholeskyDecomposition *self);
      static PyObject *t_RectangularCholeskyDecomposition_getRootMatrix(t_RectangularCholeskyDecomposition *self);
      static PyObject *t_RectangularCholeskyDecomposition_get__rank(t_RectangularCholeskyDecomposition *self, void *data);
      static PyObject *t_RectangularCholeskyDecomposition_get__rootMatrix(t_RectangularCholeskyDecomposition *self, void *data);
      static PyGetSetDef t_RectangularCholeskyDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_RectangularCholeskyDecomposition, rank),
        DECLARE_GET_FIELD(t_RectangularCholeskyDecomposition, rootMatrix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RectangularCholeskyDecomposition__methods_[] = {
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, getRank, METH_NOARGS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, getRootMatrix, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RectangularCholeskyDecomposition)[] = {
        { Py_tp_methods, t_RectangularCholeskyDecomposition__methods_ },
        { Py_tp_init, (void *) t_RectangularCholeskyDecomposition_init_ },
        { Py_tp_getset, t_RectangularCholeskyDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RectangularCholeskyDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RectangularCholeskyDecomposition, t_RectangularCholeskyDecomposition, RectangularCholeskyDecomposition);

      void t_RectangularCholeskyDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(RectangularCholeskyDecomposition), &PY_TYPE_DEF(RectangularCholeskyDecomposition), module, "RectangularCholeskyDecomposition", 0);
      }

      void t_RectangularCholeskyDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "class_", make_descriptor(RectangularCholeskyDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "wrapfn_", make_descriptor(t_RectangularCholeskyDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RectangularCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RectangularCholeskyDecomposition::initializeClass, 1)))
          return NULL;
        return t_RectangularCholeskyDecomposition::wrap_Object(RectangularCholeskyDecomposition(((t_RectangularCholeskyDecomposition *) arg)->object.this$));
      }
      static PyObject *t_RectangularCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RectangularCholeskyDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RectangularCholeskyDecomposition_init_(t_RectangularCholeskyDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            RectangularCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = RectangularCholeskyDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            RectangularCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RectangularCholeskyDecomposition(a0, a1));
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

      static PyObject *t_RectangularCholeskyDecomposition_getRank(t_RectangularCholeskyDecomposition *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRank());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RectangularCholeskyDecomposition_getRootMatrix(t_RectangularCholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RectangularCholeskyDecomposition_get__rank(t_RectangularCholeskyDecomposition *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRank());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RectangularCholeskyDecomposition_get__rootMatrix(t_RectangularCholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/SinCos.h"
#include "org/hipparchus/util/SinCos.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *SinCos::class$ = NULL;
      jmethodID *SinCos::mids$ = NULL;
      bool SinCos::live$ = false;

      jclass SinCos::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/SinCos");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cos_dff5885c2c873297] = env->getMethodID(cls, "cos", "()D");
          mids$[mid_difference_80c613b8b7394c80] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/SinCos;Lorg/hipparchus/util/SinCos;)Lorg/hipparchus/util/SinCos;");
          mids$[mid_sin_dff5885c2c873297] = env->getMethodID(cls, "sin", "()D");
          mids$[mid_sum_80c613b8b7394c80] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/SinCos;Lorg/hipparchus/util/SinCos;)Lorg/hipparchus/util/SinCos;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble SinCos::cos() const
      {
        return env->callDoubleMethod(this$, mids$[mid_cos_dff5885c2c873297]);
      }

      SinCos SinCos::difference(const SinCos & a0, const SinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinCos(env->callStaticObjectMethod(cls, mids$[mid_difference_80c613b8b7394c80], a0.this$, a1.this$));
      }

      jdouble SinCos::sin() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sin_dff5885c2c873297]);
      }

      SinCos SinCos::sum(const SinCos & a0, const SinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinCos(env->callStaticObjectMethod(cls, mids$[mid_sum_80c613b8b7394c80], a0.this$, a1.this$));
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
      static PyObject *t_SinCos_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinCos_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinCos_cos(t_SinCos *self);
      static PyObject *t_SinCos_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_SinCos_sin(t_SinCos *self);
      static PyObject *t_SinCos_sum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_SinCos__methods_[] = {
        DECLARE_METHOD(t_SinCos, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinCos, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinCos, cos, METH_NOARGS),
        DECLARE_METHOD(t_SinCos, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SinCos, sin, METH_NOARGS),
        DECLARE_METHOD(t_SinCos, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SinCos)[] = {
        { Py_tp_methods, t_SinCos__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SinCos)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SinCos, t_SinCos, SinCos);

      void t_SinCos::install(PyObject *module)
      {
        installType(&PY_TYPE(SinCos), &PY_TYPE_DEF(SinCos), module, "SinCos", 0);
      }

      void t_SinCos::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "class_", make_descriptor(SinCos::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "wrapfn_", make_descriptor(t_SinCos::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SinCos_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SinCos::initializeClass, 1)))
          return NULL;
        return t_SinCos::wrap_Object(SinCos(((t_SinCos *) arg)->object.this$));
      }
      static PyObject *t_SinCos_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SinCos::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SinCos_cos(t_SinCos *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.cos());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinCos_difference(PyTypeObject *type, PyObject *args)
      {
        SinCos a0((jobject) NULL);
        SinCos a1((jobject) NULL);
        SinCos result((jobject) NULL);

        if (!parseArgs(args, "kk", SinCos::initializeClass, SinCos::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinCos::difference(a0, a1));
          return t_SinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_SinCos_sin(t_SinCos *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.sin());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinCos_sum(PyTypeObject *type, PyObject *args)
      {
        SinCos a0((jobject) NULL);
        SinCos a1((jobject) NULL);
        SinCos result((jobject) NULL);

        if (!parseArgs(args, "kk", SinCos::initializeClass, SinCos::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinCos::sum(a0, a1));
          return t_SinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunctionNewtonForm::class$ = NULL;
        jmethodID *PolynomialFunctionNewtonForm::mids$ = NULL;
        bool PolynomialFunctionNewtonForm::live$ = false;

        jclass PolynomialFunctionNewtonForm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e1f4b15468f5564a] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_degree_570ce0828f81a2c1] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_evaluate_81770d1e77838f28] = env->getStaticMethodID(cls, "evaluate", "([D[DD)D");
            mids$[mid_getCenters_60c7040667a7dc5c] = env->getMethodID(cls, "getCenters", "()[D");
            mids$[mid_getCoefficients_60c7040667a7dc5c] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_getNewtonCoefficients_60c7040667a7dc5c] = env->getMethodID(cls, "getNewtonCoefficients", "()[D");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a4b1871f4d29e58b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_computeCoefficients_0fa09c18fee449d5] = env->getMethodID(cls, "computeCoefficients", "()V");
            mids$[mid_verifyInputArray_e1f4b15468f5564a] = env->getStaticMethodID(cls, "verifyInputArray", "([D[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunctionNewtonForm::PolynomialFunctionNewtonForm(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1f4b15468f5564a, a0.this$, a1.this$)) {}

        jint PolynomialFunctionNewtonForm::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_570ce0828f81a2c1]);
        }

        jdouble PolynomialFunctionNewtonForm::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_evaluate_81770d1e77838f28], a0.this$, a1.this$, a2);
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getCenters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCenters_60c7040667a7dc5c]));
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_60c7040667a7dc5c]));
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getNewtonCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNewtonCoefficients_60c7040667a7dc5c]));
        }

        jdouble PolynomialFunctionNewtonForm::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialFunctionNewtonForm::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a4b1871f4d29e58b], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialFunctionNewtonForm::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_PolynomialFunctionNewtonForm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunctionNewtonForm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunctionNewtonForm_init_(t_PolynomialFunctionNewtonForm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunctionNewtonForm_degree(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_evaluate(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionNewtonForm_getCenters(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_getCoefficients(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_getNewtonCoefficients(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_value(t_PolynomialFunctionNewtonForm *self, PyObject *args);
        static PyObject *t_PolynomialFunctionNewtonForm_get__centers(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyObject *t_PolynomialFunctionNewtonForm_get__coefficients(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyObject *t_PolynomialFunctionNewtonForm_get__newtonCoefficients(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyGetSetDef t_PolynomialFunctionNewtonForm__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, centers),
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, coefficients),
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, newtonCoefficients),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialFunctionNewtonForm__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, degree, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, evaluate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getCenters, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getNewtonCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunctionNewtonForm)[] = {
          { Py_tp_methods, t_PolynomialFunctionNewtonForm__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunctionNewtonForm_init_ },
          { Py_tp_getset, t_PolynomialFunctionNewtonForm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunctionNewtonForm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunctionNewtonForm, t_PolynomialFunctionNewtonForm, PolynomialFunctionNewtonForm);

        void t_PolynomialFunctionNewtonForm::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunctionNewtonForm), &PY_TYPE_DEF(PolynomialFunctionNewtonForm), module, "PolynomialFunctionNewtonForm", 0);
        }

        void t_PolynomialFunctionNewtonForm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "class_", make_descriptor(PolynomialFunctionNewtonForm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "wrapfn_", make_descriptor(t_PolynomialFunctionNewtonForm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunctionNewtonForm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunctionNewtonForm::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunctionNewtonForm::wrap_Object(PolynomialFunctionNewtonForm(((t_PolynomialFunctionNewtonForm *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunctionNewtonForm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunctionNewtonForm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunctionNewtonForm_init_(t_PolynomialFunctionNewtonForm *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          PolynomialFunctionNewtonForm object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = PolynomialFunctionNewtonForm(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialFunctionNewtonForm_degree(t_PolynomialFunctionNewtonForm *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialFunctionNewtonForm_evaluate(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm::evaluate(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "evaluate", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getCenters(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenters());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getCoefficients(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getNewtonCoefficients(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewtonCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_value(t_PolynomialFunctionNewtonForm *self, PyObject *args)
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
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
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

        static PyObject *t_PolynomialFunctionNewtonForm_get__centers(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenters());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_get__coefficients(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_get__newtonCoefficients(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewtonCoefficients());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedPair::class$ = NULL;
      jmethodID *TimeStampedPair::mids$ = NULL;
      bool TimeStampedPair::live$ = false;
      jdouble TimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD = (jdouble) 0;

      jclass TimeStampedPair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedPair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b69629f88ee62d0c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)V");
          mids$[mid_init$_81e1c812179d2782] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;D)V");
          mids$[mid_checkDatesConsistency_da69b15169b809c3] = env->getStaticMethodID(cls, "checkDatesConsistency", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFirst_c2a1e08c7d64b02c] = env->getMethodID(cls, "getFirst", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getSecond_c2a1e08c7d64b02c] = env->getMethodID(cls, "getSecond", "()Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DATE_EQUALITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_DATE_EQUALITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPair::TimeStampedPair(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b69629f88ee62d0c, a0.this$, a1.this$)) {}

      TimeStampedPair::TimeStampedPair(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_81e1c812179d2782, a0.this$, a1.this$, a2)) {}

      void TimeStampedPair::checkDatesConsistency(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkDatesConsistency_da69b15169b809c3], a0.this$, a1.this$, a2);
      }

      ::org::orekit::time::AbsoluteDate TimeStampedPair::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      ::org::orekit::time::TimeStamped TimeStampedPair::getFirst() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getFirst_c2a1e08c7d64b02c]));
      }

      ::org::orekit::time::TimeStamped TimeStampedPair::getSecond() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getSecond_c2a1e08c7d64b02c]));
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
      static PyObject *t_TimeStampedPair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPair_of_(t_TimeStampedPair *self, PyObject *args);
      static int t_TimeStampedPair_init_(t_TimeStampedPair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedPair_checkDatesConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeStampedPair_getDate(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_getFirst(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_getSecond(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_get__date(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__first(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__second(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__parameters_(t_TimeStampedPair *self, void *data);
      static PyGetSetDef t_TimeStampedPair__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedPair, date),
        DECLARE_GET_FIELD(t_TimeStampedPair, first),
        DECLARE_GET_FIELD(t_TimeStampedPair, second),
        DECLARE_GET_FIELD(t_TimeStampedPair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedPair__methods_[] = {
        DECLARE_METHOD(t_TimeStampedPair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPair, checkDatesConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPair, getFirst, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPair, getSecond, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedPair)[] = {
        { Py_tp_methods, t_TimeStampedPair__methods_ },
        { Py_tp_init, (void *) t_TimeStampedPair_init_ },
        { Py_tp_getset, t_TimeStampedPair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedPair)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedPair, t_TimeStampedPair, TimeStampedPair);
      PyObject *t_TimeStampedPair::wrap_Object(const TimeStampedPair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_TimeStampedPair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPair *self = (t_TimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_TimeStampedPair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_TimeStampedPair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPair *self = (t_TimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_TimeStampedPair::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedPair), &PY_TYPE_DEF(TimeStampedPair), module, "TimeStampedPair", 0);
      }

      void t_TimeStampedPair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "class_", make_descriptor(TimeStampedPair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "wrapfn_", make_descriptor(t_TimeStampedPair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "boxfn_", make_descriptor(boxObject));
        env->getClass(TimeStampedPair::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "DEFAULT_DATE_EQUALITY_THRESHOLD", make_descriptor(TimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD));
      }

      static PyObject *t_TimeStampedPair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedPair::initializeClass, 1)))
          return NULL;
        return t_TimeStampedPair::wrap_Object(TimeStampedPair(((t_TimeStampedPair *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedPair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedPair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedPair_of_(t_TimeStampedPair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedPair_init_(t_TimeStampedPair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeStamped a0((jobject) NULL);
            ::org::orekit::time::TimeStamped a1((jobject) NULL);
            TimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedPair(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::TimeStamped a0((jobject) NULL);
            ::org::orekit::time::TimeStamped a1((jobject) NULL);
            jdouble a2;
            TimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPair(a0, a1, a2));
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

      static PyObject *t_TimeStampedPair_checkDatesConsistency(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(::org::orekit::time::TimeStampedPair::checkDatesConsistency(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkDatesConsistency", args);
        return NULL;
      }

      static PyObject *t_TimeStampedPair_getDate(t_TimeStampedPair *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPair_getFirst(t_TimeStampedPair *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirst());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPair_getSecond(t_TimeStampedPair *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecond());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }
      static PyObject *t_TimeStampedPair_get__parameters_(t_TimeStampedPair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedPair_get__date(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeStampedPair_get__first(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirst());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_TimeStampedPair_get__second(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecond());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbsolutePVCoordinates::class$ = NULL;
      jmethodID *AbsolutePVCoordinates::mids$ = NULL;
      bool AbsolutePVCoordinates::live$ = false;

      jclass AbsolutePVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbsolutePVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0daa668827680b8e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
          mids$[mid_init$_5149c5d601d1b99c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_9204b33858544bf0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_a91babafba973925] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_fa9ab2460e66166d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_292536b29942aed7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_cc3081536a71c211] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_f2a1bf0b29b61ed3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_4e298926d9652ffd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_355d9810ccc5dfdd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPVCoordinates_c204436deca11d94] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_d9ebf50b8aebcbf9] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_e91e859b879f3586] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_62e71a9085e39e01] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_toTaylorProvider_903aca6bb4523e29] = env->getMethodID(cls, "toTaylorProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedPVCoordinates & a1) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_0daa668827680b8e, a0.this$, a1.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const AbsolutePVCoordinates & a1, const AbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_5149c5d601d1b99c, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_9204b33858544bf0, a0.this$, a1, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a91babafba973925, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_fa9ab2460e66166d, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_292536b29942aed7, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_cc3081536a71c211, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_f2a1bf0b29b61ed3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4, jdouble a5, const AbsolutePVCoordinates & a6) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_4e298926d9652ffd, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4, jdouble a5, const AbsolutePVCoordinates & a6, jdouble a7, const AbsolutePVCoordinates & a8) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_355d9810ccc5dfdd, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      ::org::orekit::frames::Frame AbsolutePVCoordinates::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_c204436deca11d94]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_d9ebf50b8aebcbf9], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cfeec55f7c63ec64], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AbsolutePVCoordinates::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_e91e859b879f3586], a0.this$));
      }

      AbsolutePVCoordinates AbsolutePVCoordinates::shiftedBy(jdouble a0) const
      {
        return AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_62e71a9085e39e01], a0));
      }

      ::org::orekit::utils::PVCoordinatesProvider AbsolutePVCoordinates::toTaylorProvider() const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_903aca6bb4523e29]));
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
      static PyObject *t_AbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbsolutePVCoordinates_init_(t_AbsolutePVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsolutePVCoordinates_getFrame(t_AbsolutePVCoordinates *self);
      static PyObject *t_AbsolutePVCoordinates_getPVCoordinates(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_getPosition(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_shiftedBy(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_toTaylorProvider(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_get__frame(t_AbsolutePVCoordinates *self, void *data);
      static PyObject *t_AbsolutePVCoordinates_get__pVCoordinates(t_AbsolutePVCoordinates *self, void *data);
      static PyGetSetDef t_AbsolutePVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_AbsolutePVCoordinates, frame),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinates, pVCoordinates),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsolutePVCoordinates__methods_[] = {
        DECLARE_METHOD(t_AbsolutePVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, toTaylorProvider, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsolutePVCoordinates)[] = {
        { Py_tp_methods, t_AbsolutePVCoordinates__methods_ },
        { Py_tp_init, (void *) t_AbsolutePVCoordinates_init_ },
        { Py_tp_getset, t_AbsolutePVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsolutePVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
        NULL
      };

      DEFINE_TYPE(AbsolutePVCoordinates, t_AbsolutePVCoordinates, AbsolutePVCoordinates);

      void t_AbsolutePVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsolutePVCoordinates), &PY_TYPE_DEF(AbsolutePVCoordinates), module, "AbsolutePVCoordinates", 0);
      }

      void t_AbsolutePVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "class_", make_descriptor(AbsolutePVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "wrapfn_", make_descriptor(t_AbsolutePVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsolutePVCoordinates::initializeClass, 1)))
          return NULL;
        return t_AbsolutePVCoordinates::wrap_Object(AbsolutePVCoordinates(((t_AbsolutePVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_AbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsolutePVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbsolutePVCoordinates_init_(t_AbsolutePVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates a1((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            AbsolutePVCoordinates a1((jobject) NULL);
            AbsolutePVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            jdouble a5;
            AbsolutePVCoordinates a6((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            jdouble a5;
            AbsolutePVCoordinates a6((jobject) NULL);
            jdouble a7;
            AbsolutePVCoordinates a8((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_AbsolutePVCoordinates_getFrame(t_AbsolutePVCoordinates *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbsolutePVCoordinates_getPVCoordinates(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_AbsolutePVCoordinates_getPosition(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "getPosition", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_shiftedBy(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        jdouble a0;
        AbsolutePVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AbsolutePVCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_toTaylorProvider(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toTaylorProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "toTaylorProvider", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_get__frame(t_AbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbsolutePVCoordinates_get__pVCoordinates(t_AbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexUnivariateIntegrator.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexUnivariateIntegrator::class$ = NULL;
      jmethodID *ComplexUnivariateIntegrator::mids$ = NULL;
      bool ComplexUnivariateIntegrator::live$ = false;

      jclass ComplexUnivariateIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexUnivariateIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7cba7be88dd116d3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/UnivariateIntegrator;)V");
          mids$[mid_integrate_66dae97a0b7800f3] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_integrate_a6f5aae59bfc2b06] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexUnivariateIntegrator::ComplexUnivariateIntegrator(const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7cba7be88dd116d3, a0.this$)) {}

      ::org::hipparchus::complex::Complex ComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::Complex & a2, const JArray< ::org::hipparchus::complex::Complex > & a3) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_integrate_66dae97a0b7800f3], a0, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::complex::Complex ComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_integrate_a6f5aae59bfc2b06], a0, a1.this$, a2.this$, a3.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_ComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexUnivariateIntegrator_init_(t_ComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexUnivariateIntegrator_integrate(t_ComplexUnivariateIntegrator *self, PyObject *args);

      static PyMethodDef t_ComplexUnivariateIntegrator__methods_[] = {
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, integrate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexUnivariateIntegrator)[] = {
        { Py_tp_methods, t_ComplexUnivariateIntegrator__methods_ },
        { Py_tp_init, (void *) t_ComplexUnivariateIntegrator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexUnivariateIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexUnivariateIntegrator, t_ComplexUnivariateIntegrator, ComplexUnivariateIntegrator);

      void t_ComplexUnivariateIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexUnivariateIntegrator), &PY_TYPE_DEF(ComplexUnivariateIntegrator), module, "ComplexUnivariateIntegrator", 0);
      }

      void t_ComplexUnivariateIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "class_", make_descriptor(ComplexUnivariateIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "wrapfn_", make_descriptor(t_ComplexUnivariateIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexUnivariateIntegrator::initializeClass, 1)))
          return NULL;
        return t_ComplexUnivariateIntegrator::wrap_Object(ComplexUnivariateIntegrator(((t_ComplexUnivariateIntegrator *) arg)->object.this$));
      }
      static PyObject *t_ComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexUnivariateIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexUnivariateIntegrator_init_(t_ComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::integration::UnivariateIntegrator a0((jobject) NULL);
        ComplexUnivariateIntegrator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0))
        {
          INT_CALL(object = ComplexUnivariateIntegrator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ComplexUnivariateIntegrator_integrate(t_ComplexUnivariateIntegrator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::Complex a2((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a3((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "IKk[k", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::Complex a2((jobject) NULL);
            ::org::hipparchus::complex::Complex a3((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "IKkk", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *ODEStepEndHandler::class$ = NULL;
        jmethodID *ODEStepEndHandler::mids$ = NULL;
        bool ODEStepEndHandler::live$ = false;

        jclass ODEStepEndHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/ODEStepEndHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_5aaadc62bce8a394] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_resetState_7cd804371553b6cb] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ODEState;");
            mids$[mid_stepEndOccurred_a59261ef992f1208] = env->getMethodID(cls, "stepEndOccurred", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Z)Lorg/hipparchus/ode/events/Action;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEStepEndHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_5aaadc62bce8a394], a0.this$, a1);
        }

        ::org::hipparchus::ode::ODEState ODEStepEndHandler::resetState(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_resetState_7cd804371553b6cb], a0.this$));
        }

        ::org::hipparchus::ode::events::Action ODEStepEndHandler::stepEndOccurred(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jboolean a1) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_stepEndOccurred_a59261ef992f1208], a0.this$, a1));
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
        static PyObject *t_ODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_init(t_ODEStepEndHandler *self, PyObject *args);
        static PyObject *t_ODEStepEndHandler_resetState(t_ODEStepEndHandler *self, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_stepEndOccurred(t_ODEStepEndHandler *self, PyObject *args);

        static PyMethodDef t_ODEStepEndHandler__methods_[] = {
          DECLARE_METHOD(t_ODEStepEndHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepEndHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepEndHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_ODEStepEndHandler, resetState, METH_O),
          DECLARE_METHOD(t_ODEStepEndHandler, stepEndOccurred, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStepEndHandler)[] = {
          { Py_tp_methods, t_ODEStepEndHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStepEndHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEStepEndHandler, t_ODEStepEndHandler, ODEStepEndHandler);

        void t_ODEStepEndHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStepEndHandler), &PY_TYPE_DEF(ODEStepEndHandler), module, "ODEStepEndHandler", 0);
        }

        void t_ODEStepEndHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "class_", make_descriptor(ODEStepEndHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "wrapfn_", make_descriptor(t_ODEStepEndHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStepEndHandler::initializeClass, 1)))
            return NULL;
          return t_ODEStepEndHandler::wrap_Object(ODEStepEndHandler(((t_ODEStepEndHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStepEndHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStepEndHandler_init(t_ODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_ODEStepEndHandler_resetState(t_ODEStepEndHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.resetState(a0));
            return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", arg);
          return NULL;
        }

        static PyObject *t_ODEStepEndHandler_stepEndOccurred(t_ODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jboolean a1;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "kZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.stepEndOccurred(a0, a1));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "stepEndOccurred", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/HighamHall54Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *HighamHall54Integrator::class$ = NULL;
        jmethodID *HighamHall54Integrator::mids$ = NULL;
        bool HighamHall54Integrator::live$ = false;

        jclass HighamHall54Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/HighamHall54Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_36e977212374ff6b] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_b0a935b68e41d65a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_0358d8ea02f2cdb1] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_60c7040667a7dc5c] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_60c7040667a7dc5c] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_9f516095b43771c0] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/HighamHall54StateInterpolator;");
            mids$[mid_estimateError_c892cfaf07a4634f] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54Integrator::HighamHall54Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_36e977212374ff6b, a0, a1, a2.this$, a3.this$)) {}

        HighamHall54Integrator::HighamHall54Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b0a935b68e41d65a, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > HighamHall54Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_0358d8ea02f2cdb1]));
        }

        JArray< jdouble > HighamHall54Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_60c7040667a7dc5c]));
        }

        JArray< jdouble > HighamHall54Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_60c7040667a7dc5c]));
        }

        jint HighamHall54Integrator::getOrder() const
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
        static PyObject *t_HighamHall54Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HighamHall54Integrator_init_(t_HighamHall54Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54Integrator_getA(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getB(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getC(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getOrder(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_get__a(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__b(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__c(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__order(t_HighamHall54Integrator *self, void *data);
        static PyGetSetDef t_HighamHall54Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54Integrator, a),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, b),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, c),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54Integrator__methods_[] = {
          DECLARE_METHOD(t_HighamHall54Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54Integrator)[] = {
          { Py_tp_methods, t_HighamHall54Integrator__methods_ },
          { Py_tp_init, (void *) t_HighamHall54Integrator_init_ },
          { Py_tp_getset, t_HighamHall54Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(HighamHall54Integrator, t_HighamHall54Integrator, HighamHall54Integrator);

        void t_HighamHall54Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54Integrator), &PY_TYPE_DEF(HighamHall54Integrator), module, "HighamHall54Integrator", 0);
        }

        void t_HighamHall54Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "class_", make_descriptor(HighamHall54Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "wrapfn_", make_descriptor(t_HighamHall54Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54Integrator::initializeClass, 1)))
            return NULL;
          return t_HighamHall54Integrator::wrap_Object(HighamHall54Integrator(((t_HighamHall54Integrator *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HighamHall54Integrator_init_(t_HighamHall54Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              HighamHall54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = HighamHall54Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              HighamHall54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = HighamHall54Integrator(a0, a1, a2, a3));
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

        static PyObject *t_HighamHall54Integrator_getA(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getB(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getC(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getOrder(t_HighamHall54Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_get__a(t_HighamHall54Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_HighamHall54Integrator_get__b(t_HighamHall54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_HighamHall54Integrator_get__c(t_HighamHall54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_HighamHall54Integrator_get__order(t_HighamHall54Integrator *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/GHIJjsPolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GHIJjsPolynomials::class$ = NULL;
            jmethodID *GHIJjsPolynomials::mids$ = NULL;
            bool GHIJjsPolynomials::live$ = false;

            jclass GHIJjsPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GHIJjsPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b0a935b68e41d65a] = env->getMethodID(cls, "<init>", "(DDDD)V");
                mids$[mid_getGjs_dbbe5f05149dbf73] = env->getMethodID(cls, "getGjs", "(II)D");
                mids$[mid_getHjs_dbbe5f05149dbf73] = env->getMethodID(cls, "getHjs", "(II)D");
                mids$[mid_getIjs_dbbe5f05149dbf73] = env->getMethodID(cls, "getIjs", "(II)D");
                mids$[mid_getJjs_dbbe5f05149dbf73] = env->getMethodID(cls, "getJjs", "(II)D");
                mids$[mid_getdGjsdAlpha_dbbe5f05149dbf73] = env->getMethodID(cls, "getdGjsdAlpha", "(II)D");
                mids$[mid_getdGjsdBeta_dbbe5f05149dbf73] = env->getMethodID(cls, "getdGjsdBeta", "(II)D");
                mids$[mid_getdGjsdh_dbbe5f05149dbf73] = env->getMethodID(cls, "getdGjsdh", "(II)D");
                mids$[mid_getdGjsdk_dbbe5f05149dbf73] = env->getMethodID(cls, "getdGjsdk", "(II)D");
                mids$[mid_getdHjsdAlpha_dbbe5f05149dbf73] = env->getMethodID(cls, "getdHjsdAlpha", "(II)D");
                mids$[mid_getdHjsdBeta_dbbe5f05149dbf73] = env->getMethodID(cls, "getdHjsdBeta", "(II)D");
                mids$[mid_getdHjsdh_dbbe5f05149dbf73] = env->getMethodID(cls, "getdHjsdh", "(II)D");
                mids$[mid_getdHjsdk_dbbe5f05149dbf73] = env->getMethodID(cls, "getdHjsdk", "(II)D");
                mids$[mid_getdIjsdAlpha_dbbe5f05149dbf73] = env->getMethodID(cls, "getdIjsdAlpha", "(II)D");
                mids$[mid_getdIjsdBeta_dbbe5f05149dbf73] = env->getMethodID(cls, "getdIjsdBeta", "(II)D");
                mids$[mid_getdIjsdh_dbbe5f05149dbf73] = env->getMethodID(cls, "getdIjsdh", "(II)D");
                mids$[mid_getdIjsdk_dbbe5f05149dbf73] = env->getMethodID(cls, "getdIjsdk", "(II)D");
                mids$[mid_getdJjsdAlpha_dbbe5f05149dbf73] = env->getMethodID(cls, "getdJjsdAlpha", "(II)D");
                mids$[mid_getdJjsdBeta_dbbe5f05149dbf73] = env->getMethodID(cls, "getdJjsdBeta", "(II)D");
                mids$[mid_getdJjsdh_dbbe5f05149dbf73] = env->getMethodID(cls, "getdJjsdh", "(II)D");
                mids$[mid_getdJjsdk_dbbe5f05149dbf73] = env->getMethodID(cls, "getdJjsdk", "(II)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GHIJjsPolynomials::GHIJjsPolynomials(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0a935b68e41d65a, a0, a1, a2, a3)) {}

            jdouble GHIJjsPolynomials::getGjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGjs_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getHjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHjs_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getIjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIjs_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getJjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getJjs_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdAlpha_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdBeta_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdh_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdk_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdAlpha_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdBeta_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdh_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdk_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdAlpha_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdBeta_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdh_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdk_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdAlpha_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdBeta_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdh_dbbe5f05149dbf73], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdk_dbbe5f05149dbf73], a0, a1);
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
            static PyObject *t_GHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GHIJjsPolynomials_init_(t_GHIJjsPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GHIJjsPolynomials_getGjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getHjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getIjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getJjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdk(t_GHIJjsPolynomials *self, PyObject *args);

            static PyMethodDef t_GHIJjsPolynomials__methods_[] = {
              DECLARE_METHOD(t_GHIJjsPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHIJjsPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getGjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getHjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getIjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getJjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GHIJjsPolynomials)[] = {
              { Py_tp_methods, t_GHIJjsPolynomials__methods_ },
              { Py_tp_init, (void *) t_GHIJjsPolynomials_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GHIJjsPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GHIJjsPolynomials, t_GHIJjsPolynomials, GHIJjsPolynomials);

            void t_GHIJjsPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(GHIJjsPolynomials), &PY_TYPE_DEF(GHIJjsPolynomials), module, "GHIJjsPolynomials", 0);
            }

            void t_GHIJjsPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "class_", make_descriptor(GHIJjsPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "wrapfn_", make_descriptor(t_GHIJjsPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GHIJjsPolynomials::initializeClass, 1)))
                return NULL;
              return t_GHIJjsPolynomials::wrap_Object(GHIJjsPolynomials(((t_GHIJjsPolynomials *) arg)->object.this$));
            }
            static PyObject *t_GHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GHIJjsPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GHIJjsPolynomials_init_(t_GHIJjsPolynomials *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              GHIJjsPolynomials object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GHIJjsPolynomials(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GHIJjsPolynomials_getGjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getHjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getHjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getIjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getIjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getIjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getJjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getJjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getJjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdk", args);
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
#include "org/orekit/propagation/events/ApsideDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/events/ApsideDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ApsideDetector::class$ = NULL;
        jmethodID *ApsideDetector::mids$ = NULL;
        bool ApsideDetector::live$ = false;

        jclass ApsideDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ApsideDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6219f6b430651d68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_init$_487615206f927568] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_0efb55e20fece899] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ApsideDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ApsideDetector::ApsideDetector(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6219f6b430651d68, a0.this$)) {}

        ApsideDetector::ApsideDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_487615206f927568, a0, a1.this$)) {}

        jdouble ApsideDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
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
        static PyObject *t_ApsideDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ApsideDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ApsideDetector_of_(t_ApsideDetector *self, PyObject *args);
        static int t_ApsideDetector_init_(t_ApsideDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ApsideDetector_g(t_ApsideDetector *self, PyObject *args);
        static PyObject *t_ApsideDetector_get__parameters_(t_ApsideDetector *self, void *data);
        static PyGetSetDef t_ApsideDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ApsideDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ApsideDetector__methods_[] = {
          DECLARE_METHOD(t_ApsideDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ApsideDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ApsideDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ApsideDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ApsideDetector)[] = {
          { Py_tp_methods, t_ApsideDetector__methods_ },
          { Py_tp_init, (void *) t_ApsideDetector_init_ },
          { Py_tp_getset, t_ApsideDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ApsideDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ApsideDetector, t_ApsideDetector, ApsideDetector);
        PyObject *t_ApsideDetector::wrap_Object(const ApsideDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ApsideDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ApsideDetector *self = (t_ApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ApsideDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ApsideDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ApsideDetector *self = (t_ApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ApsideDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ApsideDetector), &PY_TYPE_DEF(ApsideDetector), module, "ApsideDetector", 0);
        }

        void t_ApsideDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "class_", make_descriptor(ApsideDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "wrapfn_", make_descriptor(t_ApsideDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ApsideDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ApsideDetector::initializeClass, 1)))
            return NULL;
          return t_ApsideDetector::wrap_Object(ApsideDetector(((t_ApsideDetector *) arg)->object.this$));
        }
        static PyObject *t_ApsideDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ApsideDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ApsideDetector_of_(t_ApsideDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ApsideDetector_init_(t_ApsideDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                INT_CALL(object = ApsideDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ApsideDetector);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ApsideDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ApsideDetector);
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

        static PyObject *t_ApsideDetector_g(t_ApsideDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ApsideDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_ApsideDetector_get__parameters_(t_ApsideDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/PowerTerm.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "java/lang/Class.h"
#include "java/lang/CharSequence.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *PowerTerm::class$ = NULL;
        jmethodID *PowerTerm::mids$ = NULL;
        bool PowerTerm::live$ = false;

        jclass PowerTerm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/PowerTerm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getBase_3a61c13ba4f982db] = env->getMethodID(cls, "getBase", "()Ljava/lang/CharSequence;");
            mids$[mid_getExponent_883007575ab78b44] = env->getMethodID(cls, "getExponent", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getScale_dff5885c2c873297] = env->getMethodID(cls, "getScale", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::CharSequence PowerTerm::getBase() const
        {
          return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_getBase_3a61c13ba4f982db]));
        }

        ::org::hipparchus::fraction::Fraction PowerTerm::getExponent() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getExponent_883007575ab78b44]));
        }

        jdouble PowerTerm::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_dff5885c2c873297]);
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
        static PyObject *t_PowerTerm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PowerTerm_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PowerTerm_getBase(t_PowerTerm *self);
        static PyObject *t_PowerTerm_getExponent(t_PowerTerm *self);
        static PyObject *t_PowerTerm_getScale(t_PowerTerm *self);
        static PyObject *t_PowerTerm_get__base(t_PowerTerm *self, void *data);
        static PyObject *t_PowerTerm_get__exponent(t_PowerTerm *self, void *data);
        static PyObject *t_PowerTerm_get__scale(t_PowerTerm *self, void *data);
        static PyGetSetDef t_PowerTerm__fields_[] = {
          DECLARE_GET_FIELD(t_PowerTerm, base),
          DECLARE_GET_FIELD(t_PowerTerm, exponent),
          DECLARE_GET_FIELD(t_PowerTerm, scale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PowerTerm__methods_[] = {
          DECLARE_METHOD(t_PowerTerm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PowerTerm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PowerTerm, getBase, METH_NOARGS),
          DECLARE_METHOD(t_PowerTerm, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_PowerTerm, getScale, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PowerTerm)[] = {
          { Py_tp_methods, t_PowerTerm__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PowerTerm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PowerTerm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PowerTerm, t_PowerTerm, PowerTerm);

        void t_PowerTerm::install(PyObject *module)
        {
          installType(&PY_TYPE(PowerTerm), &PY_TYPE_DEF(PowerTerm), module, "PowerTerm", 0);
        }

        void t_PowerTerm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "class_", make_descriptor(PowerTerm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "wrapfn_", make_descriptor(t_PowerTerm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PowerTerm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PowerTerm::initializeClass, 1)))
            return NULL;
          return t_PowerTerm::wrap_Object(PowerTerm(((t_PowerTerm *) arg)->object.this$));
        }
        static PyObject *t_PowerTerm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PowerTerm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PowerTerm_getBase(t_PowerTerm *self)
        {
          ::java::lang::CharSequence result((jobject) NULL);
          OBJ_CALL(result = self->object.getBase());
          return ::java::lang::t_CharSequence::wrap_Object(result);
        }

        static PyObject *t_PowerTerm_getExponent(t_PowerTerm *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getExponent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_PowerTerm_getScale(t_PowerTerm *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PowerTerm_get__base(t_PowerTerm *self, void *data)
        {
          ::java::lang::CharSequence value((jobject) NULL);
          OBJ_CALL(value = self->object.getBase());
          return ::java::lang::t_CharSequence::wrap_Object(value);
        }

        static PyObject *t_PowerTerm_get__exponent(t_PowerTerm *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getExponent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_PowerTerm_get__scale(t_PowerTerm *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StorelessMultivariateStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StorelessMultivariateStatistic::class$ = NULL;
        jmethodID *StorelessMultivariateStatistic::mids$ = NULL;
        bool StorelessMultivariateStatistic::live$ = false;

        jclass StorelessMultivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StorelessMultivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getResult_60c7040667a7dc5c] = env->getMethodID(cls, "getResult", "()[D");
            mids$[mid_increment_fa9d415d19f69361] = env->getMethodID(cls, "increment", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StorelessMultivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
        }

        jint StorelessMultivariateStatistic::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
        }

        jlong StorelessMultivariateStatistic::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
        }

        JArray< jdouble > StorelessMultivariateStatistic::getResult() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getResult_60c7040667a7dc5c]));
        }

        void StorelessMultivariateStatistic::increment(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_fa9d415d19f69361], a0.this$);
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
        static PyObject *t_StorelessMultivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_clear(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getDimension(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getN(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getResult(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_increment(t_StorelessMultivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_get__dimension(t_StorelessMultivariateStatistic *self, void *data);
        static PyObject *t_StorelessMultivariateStatistic_get__n(t_StorelessMultivariateStatistic *self, void *data);
        static PyObject *t_StorelessMultivariateStatistic_get__result(t_StorelessMultivariateStatistic *self, void *data);
        static PyGetSetDef t_StorelessMultivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, dimension),
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, n),
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessMultivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_StorelessMultivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getN, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, increment, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessMultivariateStatistic)[] = {
          { Py_tp_methods, t_StorelessMultivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StorelessMultivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessMultivariateStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StorelessMultivariateStatistic, t_StorelessMultivariateStatistic, StorelessMultivariateStatistic);

        void t_StorelessMultivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessMultivariateStatistic), &PY_TYPE_DEF(StorelessMultivariateStatistic), module, "StorelessMultivariateStatistic", 0);
        }

        void t_StorelessMultivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "class_", make_descriptor(StorelessMultivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "wrapfn_", make_descriptor(t_StorelessMultivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessMultivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessMultivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_StorelessMultivariateStatistic::wrap_Object(StorelessMultivariateStatistic(((t_StorelessMultivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_StorelessMultivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessMultivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StorelessMultivariateStatistic_clear(t_StorelessMultivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StorelessMultivariateStatistic_getDimension(t_StorelessMultivariateStatistic *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StorelessMultivariateStatistic_getN(t_StorelessMultivariateStatistic *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StorelessMultivariateStatistic_getResult(t_StorelessMultivariateStatistic *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getResult());
          return result.wrap();
        }

        static PyObject *t_StorelessMultivariateStatistic_increment(t_StorelessMultivariateStatistic *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_StorelessMultivariateStatistic_get__dimension(t_StorelessMultivariateStatistic *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StorelessMultivariateStatistic_get__n(t_StorelessMultivariateStatistic *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StorelessMultivariateStatistic_get__result(t_StorelessMultivariateStatistic *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getResult());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/AbstractUnivariateDifferentiableSolver.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/solvers/UnivariateDifferentiableSolver.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AbstractUnivariateDifferentiableSolver::class$ = NULL;
        jmethodID *AbstractUnivariateDifferentiableSolver::mids$ = NULL;
        bool AbstractUnivariateDifferentiableSolver::live$ = false;

        jclass AbstractUnivariateDifferentiableSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AbstractUnivariateDifferentiableSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeObjectiveValueAndDerivative_b3ed376bfd09e93b] = env->getMethodID(cls, "computeObjectiveValueAndDerivative", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_setup_7b491e71da30eef2] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;DDD)V");

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
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        static PyObject *t_AbstractUnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_of_(t_AbstractUnivariateDifferentiableSolver *self, PyObject *args);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_get__parameters_(t_AbstractUnivariateDifferentiableSolver *self, void *data);
        static PyGetSetDef t_AbstractUnivariateDifferentiableSolver__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractUnivariateDifferentiableSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractUnivariateDifferentiableSolver__methods_[] = {
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractUnivariateDifferentiableSolver)[] = {
          { Py_tp_methods, t_AbstractUnivariateDifferentiableSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractUnivariateDifferentiableSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractUnivariateDifferentiableSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(AbstractUnivariateDifferentiableSolver, t_AbstractUnivariateDifferentiableSolver, AbstractUnivariateDifferentiableSolver);
        PyObject *t_AbstractUnivariateDifferentiableSolver::wrap_Object(const AbstractUnivariateDifferentiableSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateDifferentiableSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateDifferentiableSolver *self = (t_AbstractUnivariateDifferentiableSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractUnivariateDifferentiableSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateDifferentiableSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateDifferentiableSolver *self = (t_AbstractUnivariateDifferentiableSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractUnivariateDifferentiableSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractUnivariateDifferentiableSolver), &PY_TYPE_DEF(AbstractUnivariateDifferentiableSolver), module, "AbstractUnivariateDifferentiableSolver", 0);
        }

        void t_AbstractUnivariateDifferentiableSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "class_", make_descriptor(AbstractUnivariateDifferentiableSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "wrapfn_", make_descriptor(t_AbstractUnivariateDifferentiableSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractUnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractUnivariateDifferentiableSolver::initializeClass, 1)))
            return NULL;
          return t_AbstractUnivariateDifferentiableSolver::wrap_Object(AbstractUnivariateDifferentiableSolver(((t_AbstractUnivariateDifferentiableSolver *) arg)->object.this$));
        }
        static PyObject *t_AbstractUnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractUnivariateDifferentiableSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractUnivariateDifferentiableSolver_of_(t_AbstractUnivariateDifferentiableSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractUnivariateDifferentiableSolver_get__parameters_(t_AbstractUnivariateDifferentiableSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/NormalDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *NormalDistribution::class$ = NULL;
        jmethodID *NormalDistribution::mids$ = NULL;
        bool NormalDistribution::live$ = false;

        jclass NormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/NormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMean_dff5885c2c873297] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getStandardDeviation_dff5885c2c873297] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_dcbc7ce2902fa136] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_86ffecc08a63eff0] = env->getMethodID(cls, "probability", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NormalDistribution::NormalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        NormalDistribution::NormalDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble NormalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble NormalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble NormalDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_dff5885c2c873297]);
        }

        jdouble NormalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble NormalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble NormalDistribution::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_dff5885c2c873297]);
        }

        jdouble NormalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble NormalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jdouble NormalDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jboolean NormalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble NormalDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_dcbc7ce2902fa136], a0);
        }

        jdouble NormalDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_86ffecc08a63eff0], a0, a1);
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
        static PyObject *t_NormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NormalDistribution_init_(t_NormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NormalDistribution_cumulativeProbability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_density(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getMean(t_NormalDistribution *self);
        static PyObject *t_NormalDistribution_getNumericalMean(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getNumericalVariance(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getStandardDeviation(t_NormalDistribution *self);
        static PyObject *t_NormalDistribution_getSupportLowerBound(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getSupportUpperBound(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_inverseCumulativeProbability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_isSupportConnected(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_logDensity(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_probability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_get__mean(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__numericalMean(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__numericalVariance(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__standardDeviation(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportConnected(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportLowerBound(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportUpperBound(t_NormalDistribution *self, void *data);
        static PyGetSetDef t_NormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_NormalDistribution, mean),
          DECLARE_GET_FIELD(t_NormalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_NormalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_NormalDistribution, standardDeviation),
          DECLARE_GET_FIELD(t_NormalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_NormalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_NormalDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NormalDistribution__methods_[] = {
          DECLARE_METHOD(t_NormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_NormalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_NormalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, logDensity, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NormalDistribution)[] = {
          { Py_tp_methods, t_NormalDistribution__methods_ },
          { Py_tp_init, (void *) t_NormalDistribution_init_ },
          { Py_tp_getset, t_NormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(NormalDistribution, t_NormalDistribution, NormalDistribution);

        void t_NormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(NormalDistribution), &PY_TYPE_DEF(NormalDistribution), module, "NormalDistribution", 0);
        }

        void t_NormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "class_", make_descriptor(NormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "wrapfn_", make_descriptor(t_NormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NormalDistribution::initializeClass, 1)))
            return NULL;
          return t_NormalDistribution::wrap_Object(NormalDistribution(((t_NormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_NormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NormalDistribution_init_(t_NormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NormalDistribution object((jobject) NULL);

              INT_CALL(object = NormalDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              NormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = NormalDistribution(a0, a1));
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

        static PyObject *t_NormalDistribution_cumulativeProbability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_NormalDistribution_density(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_NormalDistribution_getMean(t_NormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NormalDistribution_getNumericalMean(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_NormalDistribution_getNumericalVariance(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_NormalDistribution_getStandardDeviation(t_NormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NormalDistribution_getSupportLowerBound(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_NormalDistribution_getSupportUpperBound(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_NormalDistribution_inverseCumulativeProbability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_NormalDistribution_isSupportConnected(t_NormalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_NormalDistribution_logDensity(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_NormalDistribution_probability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_NormalDistribution_get__mean(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__numericalMean(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__numericalVariance(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__standardDeviation(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__supportConnected(t_NormalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_NormalDistribution_get__supportLowerBound(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__supportUpperBound(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
