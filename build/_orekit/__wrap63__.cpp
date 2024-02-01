#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldLongitudeCrossingDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
            mids$[mid_init$_2d2108d21f1071ae] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_7fe9da35cd6952f4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBody_dc8275c31111ad9c] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLongitude_9981f74b2d109da6] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_1061f3b179e5c03d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldLongitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldLongitudeCrossingDetector::FieldLongitudeCrossingDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2d2108d21f1071ae, a0.this$, a1.this$, a2)) {}

        FieldLongitudeCrossingDetector::FieldLongitudeCrossingDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_7fe9da35cd6952f4, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldLongitudeCrossingDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::orekit::bodies::OneAxisEllipsoid FieldLongitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_dc8275c31111ad9c]));
        }

        jdouble FieldLongitudeCrossingDetector::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_9981f74b2d109da6]);
        }

        void FieldLongitudeCrossingDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *StreamingOcmWriter$BlockWriter::class$ = NULL;
              jmethodID *StreamingOcmWriter$BlockWriter::mids$ = NULL;
              bool StreamingOcmWriter$BlockWriter::live$ = false;

              jclass StreamingOcmWriter$BlockWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f0e7d3990163ed47] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter;)V");
                  mids$[mid_finish_72b846eb87f3af9a] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_72b846eb87f3af9a] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_c410ce24bfc8448e] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOcmWriter$BlockWriter::StreamingOcmWriter$BlockWriter(const ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f0e7d3990163ed47, a0.this$)) {}

              void StreamingOcmWriter$BlockWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_72b846eb87f3af9a], a0.this$);
              }

              void StreamingOcmWriter$BlockWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_72b846eb87f3af9a], a0.this$);
              }

              void StreamingOcmWriter$BlockWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_init_c410ce24bfc8448e], a0.this$, a1.this$, a2);
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
              static PyObject *t_StreamingOcmWriter$BlockWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOcmWriter$BlockWriter_init_(t_StreamingOcmWriter$BlockWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOcmWriter$BlockWriter_finish(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_handleStep(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_init(t_StreamingOcmWriter$BlockWriter *self, PyObject *args);

              static PyMethodDef t_StreamingOcmWriter$BlockWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOcmWriter$BlockWriter)[] = {
                { Py_tp_methods, t_StreamingOcmWriter$BlockWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOcmWriter$BlockWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOcmWriter$BlockWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOcmWriter$BlockWriter, t_StreamingOcmWriter$BlockWriter, StreamingOcmWriter$BlockWriter);

              void t_StreamingOcmWriter$BlockWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOcmWriter$BlockWriter), &PY_TYPE_DEF(StreamingOcmWriter$BlockWriter), module, "StreamingOcmWriter$BlockWriter", 0);
              }

              void t_StreamingOcmWriter$BlockWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "class_", make_descriptor(StreamingOcmWriter$BlockWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "wrapfn_", make_descriptor(t_StreamingOcmWriter$BlockWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOcmWriter$BlockWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOcmWriter$BlockWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOcmWriter$BlockWriter::wrap_Object(StreamingOcmWriter$BlockWriter(((t_StreamingOcmWriter$BlockWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOcmWriter$BlockWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOcmWriter$BlockWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOcmWriter$BlockWriter_init_(t_StreamingOcmWriter$BlockWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter a0((jobject) NULL);
                StreamingOcmWriter$BlockWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingOcmWriter$BlockWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingOcmWriter$BlockWriter_finish(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg)
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

              static PyObject *t_StreamingOcmWriter$BlockWriter_handleStep(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg)
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

              static PyObject *t_StreamingOcmWriter$BlockWriter_init(t_StreamingOcmWriter$BlockWriter *self, PyObject *args)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$LeafMerger.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree$LeafMerger::class$ = NULL;
        jmethodID *BSPTree$LeafMerger::mids$ = NULL;
        bool BSPTree$LeafMerger::live$ = false;

        jclass BSPTree$LeafMerger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree$LeafMerger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_merge_55aed08bd2c5c887] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;ZZ)Lorg/hipparchus/geometry/partitioning/BSPTree;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::BSPTree BSPTree$LeafMerger::merge(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, const ::org::hipparchus::geometry::partitioning::BSPTree & a1, const ::org::hipparchus::geometry::partitioning::BSPTree & a2, jboolean a3, jboolean a4) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_merge_55aed08bd2c5c887], a0.this$, a1.this$, a2.this$, a3, a4));
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
        static PyObject *t_BSPTree$LeafMerger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$LeafMerger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$LeafMerger_of_(t_BSPTree$LeafMerger *self, PyObject *args);
        static PyObject *t_BSPTree$LeafMerger_merge(t_BSPTree$LeafMerger *self, PyObject *args);
        static PyObject *t_BSPTree$LeafMerger_get__parameters_(t_BSPTree$LeafMerger *self, void *data);
        static PyGetSetDef t_BSPTree$LeafMerger__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTree$LeafMerger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree$LeafMerger__methods_[] = {
          DECLARE_METHOD(t_BSPTree$LeafMerger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, merge, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree$LeafMerger)[] = {
          { Py_tp_methods, t_BSPTree$LeafMerger__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTree$LeafMerger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree$LeafMerger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree$LeafMerger, t_BSPTree$LeafMerger, BSPTree$LeafMerger);
        PyObject *t_BSPTree$LeafMerger::wrap_Object(const BSPTree$LeafMerger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$LeafMerger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$LeafMerger *self = (t_BSPTree$LeafMerger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree$LeafMerger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$LeafMerger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$LeafMerger *self = (t_BSPTree$LeafMerger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree$LeafMerger::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree$LeafMerger), &PY_TYPE_DEF(BSPTree$LeafMerger), module, "BSPTree$LeafMerger", 0);
        }

        void t_BSPTree$LeafMerger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "class_", make_descriptor(BSPTree$LeafMerger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "wrapfn_", make_descriptor(t_BSPTree$LeafMerger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree$LeafMerger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree$LeafMerger::initializeClass, 1)))
            return NULL;
          return t_BSPTree$LeafMerger::wrap_Object(BSPTree$LeafMerger(((t_BSPTree$LeafMerger *) arg)->object.this$));
        }
        static PyObject *t_BSPTree$LeafMerger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree$LeafMerger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree$LeafMerger_of_(t_BSPTree$LeafMerger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTree$LeafMerger_merge(t_BSPTree$LeafMerger *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::BSPTree a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean a3;
          jboolean a4;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KKKZZ", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a2, &p2, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a3, &a4))
          {
            OBJ_CALL(result = self->object.merge(a0, a1, a2, a3, a4));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "merge", args);
          return NULL;
        }
        static PyObject *t_BSPTree$LeafMerger_get__parameters_(t_BSPTree$LeafMerger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractCycleSlipDetector.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractCycleSlipDetector::class$ = NULL;
          jmethodID *PythonAbstractCycleSlipDetector::mids$ = NULL;
          bool PythonAbstractCycleSlipDetector::live$ = false;

          jclass PythonAbstractCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cycleSlipDataSet_417cb06bfd27f642] = env->getMethodID(cls, "cycleSlipDataSet", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/gnss/Frequency;)V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getMaxTimeBeetween2Measurement_9981f74b2d109da6] = env->getMethodID(cls, "getMaxTimeBeetween2Measurement", "()D");
              mids$[mid_getMinMeasurementNumber_d6ab429752e7c267] = env->getMethodID(cls, "getMinMeasurementNumber", "()I");
              mids$[mid_getResults_d751c1a57012b438] = env->getMethodID(cls, "getResults", "()Ljava/util/List;");
              mids$[mid_manageData_d75e9b743ecf20cb] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_setName_69ce224351e794e7] = env->getMethodID(cls, "setName", "(ILorg/orekit/gnss/SatelliteSystem;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void PythonAbstractCycleSlipDetector::cycleSlipDataSet(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::gnss::Frequency & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_cycleSlipDataSet_417cb06bfd27f642], a0.this$, a1.this$, a2, a3.this$);
          }

          void PythonAbstractCycleSlipDetector::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jdouble PythonAbstractCycleSlipDetector::getMaxTimeBeetween2Measurement() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxTimeBeetween2Measurement_9981f74b2d109da6]);
          }

          jint PythonAbstractCycleSlipDetector::getMinMeasurementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getMinMeasurementNumber_d6ab429752e7c267]);
          }

          ::java::util::List PythonAbstractCycleSlipDetector::getResults() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getResults_d751c1a57012b438]));
          }

          jlong PythonAbstractCycleSlipDetector::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonAbstractCycleSlipDetector::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
          }

          ::java::lang::String PythonAbstractCycleSlipDetector::setName(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_setName_69ce224351e794e7], a0, a1.this$));
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
          static PyObject *t_PythonAbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractCycleSlipDetector_cycleSlipDataSet(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static PyObject *t_PythonAbstractCycleSlipDetector_finalize(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getMaxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getMinMeasurementNumber(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getResults(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_pythonExtension(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static PyObject *t_PythonAbstractCycleSlipDetector_setName(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static void JNICALL t_PythonAbstractCycleSlipDetector_manageData0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractCycleSlipDetector_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__self(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__maxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__minMeasurementNumber(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__results(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyGetSetDef t_PythonAbstractCycleSlipDetector__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, maxTimeBeetween2Measurement),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, minMeasurementNumber),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, results),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, cycleSlipDataSet, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getMaxTimeBeetween2Measurement, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getMinMeasurementNumber, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getResults, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, pythonExtension, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, setName, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractCycleSlipDetector)[] = {
            { Py_tp_methods, t_PythonAbstractCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PythonAbstractCycleSlipDetector__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(PythonAbstractCycleSlipDetector, t_PythonAbstractCycleSlipDetector, PythonAbstractCycleSlipDetector);

          void t_PythonAbstractCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractCycleSlipDetector), &PY_TYPE_DEF(PythonAbstractCycleSlipDetector), module, "PythonAbstractCycleSlipDetector", 1);
          }

          void t_PythonAbstractCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "class_", make_descriptor(PythonAbstractCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "wrapfn_", make_descriptor(t_PythonAbstractCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractCycleSlipDetector::initializeClass);
            JNINativeMethod methods[] = {
              { "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V", (void *) t_PythonAbstractCycleSlipDetector_manageData0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractCycleSlipDetector_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractCycleSlipDetector::wrap_Object(PythonAbstractCycleSlipDetector(((t_PythonAbstractCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_cycleSlipDataSet(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::gnss::Frequency a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "skDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::gnss::Frequency::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(self->object.cycleSlipDataSet(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "cycleSlipDataSet", args);
            return NULL;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_finalize(t_PythonAbstractCycleSlipDetector *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getMaxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxTimeBeetween2Measurement());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getMinMeasurementNumber(t_PythonAbstractCycleSlipDetector *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMinMeasurementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getResults(t_PythonAbstractCycleSlipDetector *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getResults());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_pythonExtension(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
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

          static PyObject *t_PythonAbstractCycleSlipDetector_setName(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
          {
            jint a0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.setName(a0, a1));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "setName", args);
            return NULL;
          }

          static void JNICALL t_PythonAbstractCycleSlipDetector_manageData0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(::org::orekit::files::rinex::observation::ObservationDataSet(a0));
            PyObject *result = PyObject_CallMethod(obj, "manageData", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractCycleSlipDetector_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__self(t_PythonAbstractCycleSlipDetector *self, void *data)
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

          static PyObject *t_PythonAbstractCycleSlipDetector_get__maxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxTimeBeetween2Measurement());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__minMeasurementNumber(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMinMeasurementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__results(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getResults());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *StreamingAemWriter$SegmentWriter::class$ = NULL;
              jmethodID *StreamingAemWriter$SegmentWriter::mids$ = NULL;
              bool StreamingAemWriter$SegmentWriter::live$ = false;

              jclass StreamingAemWriter$SegmentWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_2aa9eaae9ca8f3c7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter;)V");
                  mids$[mid_finish_72b846eb87f3af9a] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_72b846eb87f3af9a] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_c410ce24bfc8448e] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingAemWriter$SegmentWriter::StreamingAemWriter$SegmentWriter(const ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2aa9eaae9ca8f3c7, a0.this$)) {}

              void StreamingAemWriter$SegmentWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_72b846eb87f3af9a], a0.this$);
              }

              void StreamingAemWriter$SegmentWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_72b846eb87f3af9a], a0.this$);
              }

              void StreamingAemWriter$SegmentWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_init_c410ce24bfc8448e], a0.this$, a1.this$, a2);
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
              static PyObject *t_StreamingAemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingAemWriter$SegmentWriter_init_(t_StreamingAemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingAemWriter$SegmentWriter_finish(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_handleStep(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_init(t_StreamingAemWriter$SegmentWriter *self, PyObject *args);

              static PyMethodDef t_StreamingAemWriter$SegmentWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingAemWriter$SegmentWriter)[] = {
                { Py_tp_methods, t_StreamingAemWriter$SegmentWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingAemWriter$SegmentWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingAemWriter$SegmentWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingAemWriter$SegmentWriter, t_StreamingAemWriter$SegmentWriter, StreamingAemWriter$SegmentWriter);

              void t_StreamingAemWriter$SegmentWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingAemWriter$SegmentWriter), &PY_TYPE_DEF(StreamingAemWriter$SegmentWriter), module, "StreamingAemWriter$SegmentWriter", 0);
              }

              void t_StreamingAemWriter$SegmentWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "class_", make_descriptor(StreamingAemWriter$SegmentWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "wrapfn_", make_descriptor(t_StreamingAemWriter$SegmentWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingAemWriter$SegmentWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingAemWriter$SegmentWriter::wrap_Object(StreamingAemWriter$SegmentWriter(((t_StreamingAemWriter$SegmentWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingAemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingAemWriter$SegmentWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingAemWriter$SegmentWriter_init_(t_StreamingAemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter a0((jobject) NULL);
                StreamingAemWriter$SegmentWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingAemWriter$SegmentWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_finish(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg)
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

              static PyObject *t_StreamingAemWriter$SegmentWriter_handleStep(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg)
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

              static PyObject *t_StreamingAemWriter$SegmentWriter_init(t_StreamingAemWriter$SegmentWriter *self, PyObject *args)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/utils/OccultationEngine$FieldOccultationAngles.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/utils/OccultationEngine$OccultationAngles.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OccultationEngine::class$ = NULL;
      jmethodID *OccultationEngine::mids$ = NULL;
      bool OccultationEngine::live$ = false;

      jclass OccultationEngine::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OccultationEngine");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_81366f164ddc07cb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_angles_5c6cc25e87fc3ece] = env->getMethodID(cls, "angles", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/utils/OccultationEngine$FieldOccultationAngles;");
          mids$[mid_angles_a849264804844c5a] = env->getMethodID(cls, "angles", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/utils/OccultationEngine$OccultationAngles;");
          mids$[mid_getOcculted_b623c04f72a10774] = env->getMethodID(cls, "getOcculted", "()Lorg/orekit/utils/ExtendedPVCoordinatesProvider;");
          mids$[mid_getOccultedRadius_9981f74b2d109da6] = env->getMethodID(cls, "getOccultedRadius", "()D");
          mids$[mid_getOcculting_dc8275c31111ad9c] = env->getMethodID(cls, "getOcculting", "()Lorg/orekit/bodies/OneAxisEllipsoid;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OccultationEngine::OccultationEngine(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_81366f164ddc07cb, a0.this$, a1, a2.this$)) {}

      ::org::orekit::utils::OccultationEngine$FieldOccultationAngles OccultationEngine::angles(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::orekit::utils::OccultationEngine$FieldOccultationAngles(env->callObjectMethod(this$, mids$[mid_angles_5c6cc25e87fc3ece], a0.this$));
      }

      ::org::orekit::utils::OccultationEngine$OccultationAngles OccultationEngine::angles(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::orekit::utils::OccultationEngine$OccultationAngles(env->callObjectMethod(this$, mids$[mid_angles_a849264804844c5a], a0.this$));
      }

      ::org::orekit::utils::ExtendedPVCoordinatesProvider OccultationEngine::getOcculted() const
      {
        return ::org::orekit::utils::ExtendedPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getOcculted_b623c04f72a10774]));
      }

      jdouble OccultationEngine::getOccultedRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOccultedRadius_9981f74b2d109da6]);
      }

      ::org::orekit::bodies::OneAxisEllipsoid OccultationEngine::getOcculting() const
      {
        return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getOcculting_dc8275c31111ad9c]));
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
      static PyObject *t_OccultationEngine_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OccultationEngine_init_(t_OccultationEngine *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OccultationEngine_angles(t_OccultationEngine *self, PyObject *args);
      static PyObject *t_OccultationEngine_getOcculted(t_OccultationEngine *self);
      static PyObject *t_OccultationEngine_getOccultedRadius(t_OccultationEngine *self);
      static PyObject *t_OccultationEngine_getOcculting(t_OccultationEngine *self);
      static PyObject *t_OccultationEngine_get__occulted(t_OccultationEngine *self, void *data);
      static PyObject *t_OccultationEngine_get__occultedRadius(t_OccultationEngine *self, void *data);
      static PyObject *t_OccultationEngine_get__occulting(t_OccultationEngine *self, void *data);
      static PyGetSetDef t_OccultationEngine__fields_[] = {
        DECLARE_GET_FIELD(t_OccultationEngine, occulted),
        DECLARE_GET_FIELD(t_OccultationEngine, occultedRadius),
        DECLARE_GET_FIELD(t_OccultationEngine, occulting),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OccultationEngine__methods_[] = {
        DECLARE_METHOD(t_OccultationEngine, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine, angles, METH_VARARGS),
        DECLARE_METHOD(t_OccultationEngine, getOcculted, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine, getOccultedRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine, getOcculting, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OccultationEngine)[] = {
        { Py_tp_methods, t_OccultationEngine__methods_ },
        { Py_tp_init, (void *) t_OccultationEngine_init_ },
        { Py_tp_getset, t_OccultationEngine__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OccultationEngine)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OccultationEngine, t_OccultationEngine, OccultationEngine);

      void t_OccultationEngine::install(PyObject *module)
      {
        installType(&PY_TYPE(OccultationEngine), &PY_TYPE_DEF(OccultationEngine), module, "OccultationEngine", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "FieldOccultationAngles", make_descriptor(&PY_TYPE_DEF(OccultationEngine$FieldOccultationAngles)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "OccultationAngles", make_descriptor(&PY_TYPE_DEF(OccultationEngine$OccultationAngles)));
      }

      void t_OccultationEngine::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "class_", make_descriptor(OccultationEngine::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "wrapfn_", make_descriptor(t_OccultationEngine::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OccultationEngine_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OccultationEngine::initializeClass, 1)))
          return NULL;
        return t_OccultationEngine::wrap_Object(OccultationEngine(((t_OccultationEngine *) arg)->object.this$));
      }
      static PyObject *t_OccultationEngine_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OccultationEngine::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OccultationEngine_init_(t_OccultationEngine *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
        jdouble a1;
        ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
        OccultationEngine object((jobject) NULL);

        if (!parseArgs(args, "kDk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = OccultationEngine(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OccultationEngine_angles(t_OccultationEngine *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::OccultationEngine$FieldOccultationAngles result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.angles(a0));
              return ::org::orekit::utils::t_OccultationEngine$FieldOccultationAngles::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::utils::OccultationEngine$OccultationAngles result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.angles(a0));
              return ::org::orekit::utils::t_OccultationEngine$OccultationAngles::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "angles", args);
        return NULL;
      }

      static PyObject *t_OccultationEngine_getOcculted(t_OccultationEngine *self)
      {
        ::org::orekit::utils::ExtendedPVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getOcculted());
        return ::org::orekit::utils::t_ExtendedPVCoordinatesProvider::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine_getOccultedRadius(t_OccultationEngine *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOccultedRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine_getOcculting(t_OccultationEngine *self)
      {
        ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
        OBJ_CALL(result = self->object.getOcculting());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine_get__occulted(t_OccultationEngine *self, void *data)
      {
        ::org::orekit::utils::ExtendedPVCoordinatesProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getOcculted());
        return ::org::orekit::utils::t_ExtendedPVCoordinatesProvider::wrap_Object(value);
      }

      static PyObject *t_OccultationEngine_get__occultedRadius(t_OccultationEngine *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOccultedRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OccultationEngine_get__occulting(t_OccultationEngine *self, void *data)
      {
        ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
        OBJ_CALL(value = self->object.getOcculting());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Cos.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cos::class$ = NULL;
        jmethodID *Cos::mids$ = NULL;
        bool Cos::live$ = false;

        jclass Cos::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cos");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cos::Cos() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Cos::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cos::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_Cos_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cos_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cos_init_(t_Cos *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cos_value(t_Cos *self, PyObject *args);

        static PyMethodDef t_Cos__methods_[] = {
          DECLARE_METHOD(t_Cos, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cos, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cos, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cos)[] = {
          { Py_tp_methods, t_Cos__methods_ },
          { Py_tp_init, (void *) t_Cos_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cos)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cos, t_Cos, Cos);

        void t_Cos::install(PyObject *module)
        {
          installType(&PY_TYPE(Cos), &PY_TYPE_DEF(Cos), module, "Cos", 0);
        }

        void t_Cos::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "class_", make_descriptor(Cos::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "wrapfn_", make_descriptor(t_Cos::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cos_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cos::initializeClass, 1)))
            return NULL;
          return t_Cos::wrap_Object(Cos(((t_Cos *) arg)->object.this$));
        }
        static PyObject *t_Cos_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cos::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cos_init_(t_Cos *self, PyObject *args, PyObject *kwds)
        {
          Cos object((jobject) NULL);

          INT_CALL(object = Cos());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cos_value(t_Cos *self, PyObject *args)
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
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/UnsupportedOperationException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealLinearOperator::class$ = NULL;
      jmethodID *RealLinearOperator::mids$ = NULL;
      bool RealLinearOperator::live$ = false;

      jclass RealLinearOperator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealLinearOperator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_d6ab429752e7c267] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_d6ab429752e7c267] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isTransposable_eee3de00fe971136] = env->getMethodID(cls, "isTransposable", "()Z");
          mids$[mid_operate_bf8d75e459632544] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_operateTranspose_bf8d75e459632544] = env->getMethodID(cls, "operateTranspose", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint RealLinearOperator::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_d6ab429752e7c267]);
      }

      jint RealLinearOperator::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_d6ab429752e7c267]);
      }

      jboolean RealLinearOperator::isTransposable() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isTransposable_eee3de00fe971136]);
      }

      ::org::hipparchus::linear::RealVector RealLinearOperator::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_bf8d75e459632544], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealLinearOperator::operateTranspose(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operateTranspose_bf8d75e459632544], a0.this$));
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
      static PyObject *t_RealLinearOperator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealLinearOperator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealLinearOperator_getColumnDimension(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_getRowDimension(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_isTransposable(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_operate(t_RealLinearOperator *self, PyObject *arg);
      static PyObject *t_RealLinearOperator_operateTranspose(t_RealLinearOperator *self, PyObject *arg);
      static PyObject *t_RealLinearOperator_get__columnDimension(t_RealLinearOperator *self, void *data);
      static PyObject *t_RealLinearOperator_get__rowDimension(t_RealLinearOperator *self, void *data);
      static PyObject *t_RealLinearOperator_get__transposable(t_RealLinearOperator *self, void *data);
      static PyGetSetDef t_RealLinearOperator__fields_[] = {
        DECLARE_GET_FIELD(t_RealLinearOperator, columnDimension),
        DECLARE_GET_FIELD(t_RealLinearOperator, rowDimension),
        DECLARE_GET_FIELD(t_RealLinearOperator, transposable),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealLinearOperator__methods_[] = {
        DECLARE_METHOD(t_RealLinearOperator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealLinearOperator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealLinearOperator, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, isTransposable, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, operate, METH_O),
        DECLARE_METHOD(t_RealLinearOperator, operateTranspose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealLinearOperator)[] = {
        { Py_tp_methods, t_RealLinearOperator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealLinearOperator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealLinearOperator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealLinearOperator, t_RealLinearOperator, RealLinearOperator);

      void t_RealLinearOperator::install(PyObject *module)
      {
        installType(&PY_TYPE(RealLinearOperator), &PY_TYPE_DEF(RealLinearOperator), module, "RealLinearOperator", 0);
      }

      void t_RealLinearOperator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "class_", make_descriptor(RealLinearOperator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "wrapfn_", make_descriptor(t_RealLinearOperator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealLinearOperator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealLinearOperator::initializeClass, 1)))
          return NULL;
        return t_RealLinearOperator::wrap_Object(RealLinearOperator(((t_RealLinearOperator *) arg)->object.this$));
      }
      static PyObject *t_RealLinearOperator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealLinearOperator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealLinearOperator_getColumnDimension(t_RealLinearOperator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealLinearOperator_getRowDimension(t_RealLinearOperator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealLinearOperator_isTransposable(t_RealLinearOperator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isTransposable());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealLinearOperator_operate(t_RealLinearOperator *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "operate", arg);
        return NULL;
      }

      static PyObject *t_RealLinearOperator_operateTranspose(t_RealLinearOperator *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.operateTranspose(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "operateTranspose", arg);
        return NULL;
      }

      static PyObject *t_RealLinearOperator_get__columnDimension(t_RealLinearOperator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealLinearOperator_get__rowDimension(t_RealLinearOperator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealLinearOperator_get__transposable(t_RealLinearOperator *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isTransposable());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/LUDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *LUDecomposition::class$ = NULL;
      jmethodID *LUDecomposition::mids$ = NULL;
      bool LUDecomposition::live$ = false;

      jclass LUDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/LUDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_dc02fdb8767f32bc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getDeterminant_9981f74b2d109da6] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getL_b2eebabce70526d8] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_b2eebabce70526d8] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPivot_d6f20bd740dd34cd] = env->getMethodID(cls, "getPivot", "()[I");
          mids$[mid_getSolver_ac3e6aafa2c6c596] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getU_b2eebabce70526d8] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LUDecomposition::LUDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

      LUDecomposition::LUDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc02fdb8767f32bc, a0.this$, a1)) {}

      jdouble LUDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_9981f74b2d109da6]);
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_b2eebabce70526d8]));
      }

      JArray< jint > LUDecomposition::getPivot() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPivot_d6f20bd740dd34cd]));
      }

      ::org::hipparchus::linear::DecompositionSolver LUDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_ac3e6aafa2c6c596]));
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getU() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getU_b2eebabce70526d8]));
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
      static PyObject *t_LUDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LUDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LUDecomposition_init_(t_LUDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LUDecomposition_getDeterminant(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getL(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getP(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getPivot(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getSolver(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getU(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_get__determinant(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__l(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__p(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__pivot(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__solver(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__u(t_LUDecomposition *self, void *data);
      static PyGetSetDef t_LUDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_LUDecomposition, determinant),
        DECLARE_GET_FIELD(t_LUDecomposition, l),
        DECLARE_GET_FIELD(t_LUDecomposition, p),
        DECLARE_GET_FIELD(t_LUDecomposition, pivot),
        DECLARE_GET_FIELD(t_LUDecomposition, solver),
        DECLARE_GET_FIELD(t_LUDecomposition, u),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LUDecomposition__methods_[] = {
        DECLARE_METHOD(t_LUDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getP, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getPivot, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getU, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LUDecomposition)[] = {
        { Py_tp_methods, t_LUDecomposition__methods_ },
        { Py_tp_init, (void *) t_LUDecomposition_init_ },
        { Py_tp_getset, t_LUDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LUDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LUDecomposition, t_LUDecomposition, LUDecomposition);

      void t_LUDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(LUDecomposition), &PY_TYPE_DEF(LUDecomposition), module, "LUDecomposition", 0);
      }

      void t_LUDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "class_", make_descriptor(LUDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "wrapfn_", make_descriptor(t_LUDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LUDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LUDecomposition::initializeClass, 1)))
          return NULL;
        return t_LUDecomposition::wrap_Object(LUDecomposition(((t_LUDecomposition *) arg)->object.this$));
      }
      static PyObject *t_LUDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LUDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LUDecomposition_init_(t_LUDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            LUDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = LUDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            LUDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LUDecomposition(a0, a1));
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

      static PyObject *t_LUDecomposition_getDeterminant(t_LUDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_LUDecomposition_getL(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getP(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getPivot(t_LUDecomposition *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPivot());
        return result.wrap();
      }

      static PyObject *t_LUDecomposition_getSolver(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getU(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_get__determinant(t_LUDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_LUDecomposition_get__l(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__p(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__pivot(t_LUDecomposition *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPivot());
        return value.wrap();
      }

      static PyObject *t_LUDecomposition_get__solver(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__u(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LibrationOrbitFamily::class$ = NULL;
      jmethodID *LibrationOrbitFamily::mids$ = NULL;
      bool LibrationOrbitFamily::live$ = false;
      LibrationOrbitFamily *LibrationOrbitFamily::NORTHERN = NULL;
      LibrationOrbitFamily *LibrationOrbitFamily::SOUTHERN = NULL;

      jclass LibrationOrbitFamily::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LibrationOrbitFamily");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_a8abea73ad627a2a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/LibrationOrbitFamily;");
          mids$[mid_values_07ae4ad6adf4951c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/LibrationOrbitFamily;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NORTHERN = new LibrationOrbitFamily(env->getStaticObjectField(cls, "NORTHERN", "Lorg/orekit/orbits/LibrationOrbitFamily;"));
          SOUTHERN = new LibrationOrbitFamily(env->getStaticObjectField(cls, "SOUTHERN", "Lorg/orekit/orbits/LibrationOrbitFamily;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LibrationOrbitFamily LibrationOrbitFamily::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LibrationOrbitFamily(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a8abea73ad627a2a], a0.this$));
      }

      JArray< LibrationOrbitFamily > LibrationOrbitFamily::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LibrationOrbitFamily >(env->callStaticObjectMethod(cls, mids$[mid_values_07ae4ad6adf4951c]));
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
      static PyObject *t_LibrationOrbitFamily_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitFamily_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitFamily_of_(t_LibrationOrbitFamily *self, PyObject *args);
      static PyObject *t_LibrationOrbitFamily_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LibrationOrbitFamily_values(PyTypeObject *type);
      static PyObject *t_LibrationOrbitFamily_get__parameters_(t_LibrationOrbitFamily *self, void *data);
      static PyGetSetDef t_LibrationOrbitFamily__fields_[] = {
        DECLARE_GET_FIELD(t_LibrationOrbitFamily, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LibrationOrbitFamily__methods_[] = {
        DECLARE_METHOD(t_LibrationOrbitFamily, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, of_, METH_VARARGS),
        DECLARE_METHOD(t_LibrationOrbitFamily, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LibrationOrbitFamily)[] = {
        { Py_tp_methods, t_LibrationOrbitFamily__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LibrationOrbitFamily__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LibrationOrbitFamily)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LibrationOrbitFamily, t_LibrationOrbitFamily, LibrationOrbitFamily);
      PyObject *t_LibrationOrbitFamily::wrap_Object(const LibrationOrbitFamily& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitFamily::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitFamily *self = (t_LibrationOrbitFamily *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LibrationOrbitFamily::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitFamily::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitFamily *self = (t_LibrationOrbitFamily *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LibrationOrbitFamily::install(PyObject *module)
      {
        installType(&PY_TYPE(LibrationOrbitFamily), &PY_TYPE_DEF(LibrationOrbitFamily), module, "LibrationOrbitFamily", 0);
      }

      void t_LibrationOrbitFamily::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "class_", make_descriptor(LibrationOrbitFamily::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "wrapfn_", make_descriptor(t_LibrationOrbitFamily::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "boxfn_", make_descriptor(boxObject));
        env->getClass(LibrationOrbitFamily::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "NORTHERN", make_descriptor(t_LibrationOrbitFamily::wrap_Object(*LibrationOrbitFamily::NORTHERN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "SOUTHERN", make_descriptor(t_LibrationOrbitFamily::wrap_Object(*LibrationOrbitFamily::SOUTHERN)));
      }

      static PyObject *t_LibrationOrbitFamily_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LibrationOrbitFamily::initializeClass, 1)))
          return NULL;
        return t_LibrationOrbitFamily::wrap_Object(LibrationOrbitFamily(((t_LibrationOrbitFamily *) arg)->object.this$));
      }
      static PyObject *t_LibrationOrbitFamily_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LibrationOrbitFamily::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LibrationOrbitFamily_of_(t_LibrationOrbitFamily *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LibrationOrbitFamily_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LibrationOrbitFamily result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitFamily::valueOf(a0));
          return t_LibrationOrbitFamily::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LibrationOrbitFamily_values(PyTypeObject *type)
      {
        JArray< LibrationOrbitFamily > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitFamily::values());
        return JArray<jobject>(result.this$).wrap(t_LibrationOrbitFamily::wrap_jobject);
      }
      static PyObject *t_LibrationOrbitFamily_get__parameters_(t_LibrationOrbitFamily *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonKalmanEstimation.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonKalmanEstimation::class$ = NULL;
        jmethodID *PythonKalmanEstimation::mids$ = NULL;
        bool PythonKalmanEstimation::live$ = false;

        jclass PythonKalmanEstimation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonKalmanEstimation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCorrectedMeasurement_b4478e72a44f53a7] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_598bcd058df23e79] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_80e11148db499dda] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_d6ab429752e7c267] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_b4478e72a44f53a7] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_598bcd058df23e79] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonKalmanEstimation::PythonKalmanEstimation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonKalmanEstimation::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonKalmanEstimation::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonKalmanEstimation::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace sequential {
        static PyObject *t_PythonKalmanEstimation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonKalmanEstimation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonKalmanEstimation_init_(t_PythonKalmanEstimation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonKalmanEstimation_finalize(t_PythonKalmanEstimation *self);
        static PyObject *t_PythonKalmanEstimation_pythonExtension(t_PythonKalmanEstimation *self, PyObject *args);
        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedMeasurement0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedSpacecraftStates1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getCurrentDate2(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonKalmanEstimation_getCurrentMeasurementNumber3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedMeasurementsParameters4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedOrbitalParameters5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedPropagationParameters6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedCovarianceMatrix7(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedState8(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalInnovationCovarianceMatrix9(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalKalmanGain10(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalMeasurementJacobian11(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalStateTransitionMatrix12(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPredictedMeasurement13(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPredictedSpacecraftStates14(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonKalmanEstimation_pythonDecRef15(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonKalmanEstimation_get__self(t_PythonKalmanEstimation *self, void *data);
        static PyGetSetDef t_PythonKalmanEstimation__fields_[] = {
          DECLARE_GET_FIELD(t_PythonKalmanEstimation, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonKalmanEstimation__methods_[] = {
          DECLARE_METHOD(t_PythonKalmanEstimation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanEstimation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanEstimation, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonKalmanEstimation, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonKalmanEstimation)[] = {
          { Py_tp_methods, t_PythonKalmanEstimation__methods_ },
          { Py_tp_init, (void *) t_PythonKalmanEstimation_init_ },
          { Py_tp_getset, t_PythonKalmanEstimation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonKalmanEstimation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonKalmanEstimation, t_PythonKalmanEstimation, PythonKalmanEstimation);

        void t_PythonKalmanEstimation::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonKalmanEstimation), &PY_TYPE_DEF(PythonKalmanEstimation), module, "PythonKalmanEstimation", 1);
        }

        void t_PythonKalmanEstimation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanEstimation), "class_", make_descriptor(PythonKalmanEstimation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanEstimation), "wrapfn_", make_descriptor(t_PythonKalmanEstimation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanEstimation), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonKalmanEstimation::initializeClass);
          JNINativeMethod methods[] = {
            { "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonKalmanEstimation_getCorrectedMeasurement0 },
            { "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonKalmanEstimation_getCorrectedSpacecraftStates1 },
            { "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonKalmanEstimation_getCurrentDate2 },
            { "getCurrentMeasurementNumber", "()I", (void *) t_PythonKalmanEstimation_getCurrentMeasurementNumber3 },
            { "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonKalmanEstimation_getEstimatedMeasurementsParameters4 },
            { "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonKalmanEstimation_getEstimatedOrbitalParameters5 },
            { "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonKalmanEstimation_getEstimatedPropagationParameters6 },
            { "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalEstimatedCovarianceMatrix7 },
            { "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;", (void *) t_PythonKalmanEstimation_getPhysicalEstimatedState8 },
            { "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalInnovationCovarianceMatrix9 },
            { "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalKalmanGain10 },
            { "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalMeasurementJacobian11 },
            { "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalStateTransitionMatrix12 },
            { "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonKalmanEstimation_getPredictedMeasurement13 },
            { "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonKalmanEstimation_getPredictedSpacecraftStates14 },
            { "pythonDecRef", "()V", (void *) t_PythonKalmanEstimation_pythonDecRef15 },
          };
          env->registerNatives(cls, methods, 16);
        }

        static PyObject *t_PythonKalmanEstimation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonKalmanEstimation::initializeClass, 1)))
            return NULL;
          return t_PythonKalmanEstimation::wrap_Object(PythonKalmanEstimation(((t_PythonKalmanEstimation *) arg)->object.this$));
        }
        static PyObject *t_PythonKalmanEstimation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonKalmanEstimation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonKalmanEstimation_init_(t_PythonKalmanEstimation *self, PyObject *args, PyObject *kwds)
        {
          PythonKalmanEstimation object((jobject) NULL);

          INT_CALL(object = PythonKalmanEstimation());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonKalmanEstimation_finalize(t_PythonKalmanEstimation *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonKalmanEstimation_pythonExtension(t_PythonKalmanEstimation *self, PyObject *args)
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

        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedMeasurement0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCorrectedMeasurement", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("getCorrectedMeasurement", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedSpacecraftStates1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCorrectedSpacecraftStates", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getCorrectedSpacecraftStates", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getCurrentDate2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCurrentDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getCurrentDate", result);
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

        static jint JNICALL t_PythonKalmanEstimation_getCurrentMeasurementNumber3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getCurrentMeasurementNumber", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getCurrentMeasurementNumber", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedMeasurementsParameters4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedMeasurementsParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getEstimatedMeasurementsParameters", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedOrbitalParameters5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedOrbitalParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getEstimatedOrbitalParameters", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedPropagationParameters6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedPropagationParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getEstimatedPropagationParameters", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedCovarianceMatrix7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalEstimatedCovarianceMatrix", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalEstimatedCovarianceMatrix", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedState8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalEstimatedState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealVector::initializeClass, &value))
          {
            throwTypeError("getPhysicalEstimatedState", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalInnovationCovarianceMatrix9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalInnovationCovarianceMatrix", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalInnovationCovarianceMatrix", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalKalmanGain10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalKalmanGain", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalKalmanGain", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalMeasurementJacobian11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalMeasurementJacobian", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalMeasurementJacobian", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalStateTransitionMatrix12(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalStateTransitionMatrix", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalStateTransitionMatrix", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPredictedMeasurement13(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPredictedMeasurement", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("getPredictedMeasurement", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPredictedSpacecraftStates14(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPredictedSpacecraftStates", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getPredictedSpacecraftStates", result);
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

        static void JNICALL t_PythonKalmanEstimation_pythonDecRef15(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonKalmanEstimation_get__self(t_PythonKalmanEstimation *self, void *data)
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
#include "org/orekit/data/NetworkCrawler.h"
#include "java/lang/Class.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *NetworkCrawler::class$ = NULL;
      jmethodID *NetworkCrawler::mids$ = NULL;
      bool NetworkCrawler::live$ = false;

      jclass NetworkCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/NetworkCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a060fadda655b8dd] = env->getMethodID(cls, "<init>", "([Ljava/net/URL;)V");
          mids$[mid_setTimeout_8fd427ab23829bf5] = env->getMethodID(cls, "setTimeout", "(I)V");
          mids$[mid_getCompleteName_51f6f7513d4e198f] = env->getMethodID(cls, "getCompleteName", "(Ljava/net/URL;)Ljava/lang/String;");
          mids$[mid_getBaseName_51f6f7513d4e198f] = env->getMethodID(cls, "getBaseName", "(Ljava/net/URL;)Ljava/lang/String;");
          mids$[mid_getZipJarCrawler_3f6467e33f877b63] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/net/URL;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_getStream_bcb2a49a31478ed4] = env->getMethodID(cls, "getStream", "(Ljava/net/URL;)Ljava/io/InputStream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NetworkCrawler::NetworkCrawler(const JArray< ::java::net::URL > & a0) : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_a060fadda655b8dd, a0.this$)) {}

      void NetworkCrawler::setTimeout(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setTimeout_8fd427ab23829bf5], a0);
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
      static PyObject *t_NetworkCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NetworkCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NetworkCrawler_of_(t_NetworkCrawler *self, PyObject *args);
      static int t_NetworkCrawler_init_(t_NetworkCrawler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_NetworkCrawler_setTimeout(t_NetworkCrawler *self, PyObject *arg);
      static int t_NetworkCrawler_set__timeout(t_NetworkCrawler *self, PyObject *arg, void *data);
      static PyObject *t_NetworkCrawler_get__parameters_(t_NetworkCrawler *self, void *data);
      static PyGetSetDef t_NetworkCrawler__fields_[] = {
        DECLARE_SET_FIELD(t_NetworkCrawler, timeout),
        DECLARE_GET_FIELD(t_NetworkCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_NetworkCrawler__methods_[] = {
        DECLARE_METHOD(t_NetworkCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NetworkCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NetworkCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_NetworkCrawler, setTimeout, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NetworkCrawler)[] = {
        { Py_tp_methods, t_NetworkCrawler__methods_ },
        { Py_tp_init, (void *) t_NetworkCrawler_init_ },
        { Py_tp_getset, t_NetworkCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NetworkCrawler)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractListCrawler),
        NULL
      };

      DEFINE_TYPE(NetworkCrawler, t_NetworkCrawler, NetworkCrawler);
      PyObject *t_NetworkCrawler::wrap_Object(const NetworkCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_NetworkCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_NetworkCrawler *self = (t_NetworkCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_NetworkCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_NetworkCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_NetworkCrawler *self = (t_NetworkCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_NetworkCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(NetworkCrawler), &PY_TYPE_DEF(NetworkCrawler), module, "NetworkCrawler", 0);
      }

      void t_NetworkCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "class_", make_descriptor(NetworkCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "wrapfn_", make_descriptor(t_NetworkCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NetworkCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NetworkCrawler::initializeClass, 1)))
          return NULL;
        return t_NetworkCrawler::wrap_Object(NetworkCrawler(((t_NetworkCrawler *) arg)->object.this$));
      }
      static PyObject *t_NetworkCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NetworkCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_NetworkCrawler_of_(t_NetworkCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_NetworkCrawler_init_(t_NetworkCrawler *self, PyObject *args, PyObject *kwds)
      {
        JArray< ::java::net::URL > a0((jobject) NULL);
        NetworkCrawler object((jobject) NULL);

        if (!parseArgs(args, "[k", ::java::net::URL::initializeClass, &a0))
        {
          INT_CALL(object = NetworkCrawler(a0));
          self->object = object;
          self->parameters[0] = ::java::net::PY_TYPE(URL);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_NetworkCrawler_setTimeout(t_NetworkCrawler *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setTimeout(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setTimeout", arg);
        return NULL;
      }
      static PyObject *t_NetworkCrawler_get__parameters_(t_NetworkCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static int t_NetworkCrawler_set__timeout(t_NetworkCrawler *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setTimeout(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "timeout", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/HeaderProcessingState.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *HeaderProcessingState::class$ = NULL;
          jmethodID *HeaderProcessingState::mids$ = NULL;
          bool HeaderProcessingState::live$ = false;

          jclass HeaderProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/HeaderProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_50726b2cbe411b54] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_48865e799ebb0b92] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HeaderProcessingState::HeaderProcessingState(const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_50726b2cbe411b54, a0.this$)) {}

          jboolean HeaderProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_48865e799ebb0b92], a0.this$);
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
          static PyObject *t_HeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HeaderProcessingState_init_(t_HeaderProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HeaderProcessingState_processToken(t_HeaderProcessingState *self, PyObject *arg);

          static PyMethodDef t_HeaderProcessingState__methods_[] = {
            DECLARE_METHOD(t_HeaderProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HeaderProcessingState)[] = {
            { Py_tp_methods, t_HeaderProcessingState__methods_ },
            { Py_tp_init, (void *) t_HeaderProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HeaderProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HeaderProcessingState, t_HeaderProcessingState, HeaderProcessingState);

          void t_HeaderProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(HeaderProcessingState), &PY_TYPE_DEF(HeaderProcessingState), module, "HeaderProcessingState", 0);
          }

          void t_HeaderProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "class_", make_descriptor(HeaderProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "wrapfn_", make_descriptor(t_HeaderProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HeaderProcessingState::initializeClass, 1)))
              return NULL;
            return t_HeaderProcessingState::wrap_Object(HeaderProcessingState(((t_HeaderProcessingState *) arg)->object.this$));
          }
          static PyObject *t_HeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HeaderProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HeaderProcessingState_init_(t_HeaderProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a0((jobject) NULL);
            PyTypeObject **p0;
            HeaderProcessingState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = HeaderProcessingState(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_HeaderProcessingState_processToken(t_HeaderProcessingState *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.processToken(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "processToken", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SingularValueDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SingularValueDecomposition::class$ = NULL;
      jmethodID *SingularValueDecomposition::mids$ = NULL;
      bool SingularValueDecomposition::live$ = false;

      jclass SingularValueDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SingularValueDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getConditionNumber_9981f74b2d109da6] = env->getMethodID(cls, "getConditionNumber", "()D");
          mids$[mid_getCovariance_d5a7c13c36e5009c] = env->getMethodID(cls, "getCovariance", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getInverseConditionNumber_9981f74b2d109da6] = env->getMethodID(cls, "getInverseConditionNumber", "()D");
          mids$[mid_getNorm_9981f74b2d109da6] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getRank_d6ab429752e7c267] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getS_b2eebabce70526d8] = env->getMethodID(cls, "getS", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSingularValues_be783177b060994b] = env->getMethodID(cls, "getSingularValues", "()[D");
          mids$[mid_getSolver_ac3e6aafa2c6c596] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getU_b2eebabce70526d8] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getUT_b2eebabce70526d8] = env->getMethodID(cls, "getUT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getV_b2eebabce70526d8] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVT_b2eebabce70526d8] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingularValueDecomposition::SingularValueDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

      jdouble SingularValueDecomposition::getConditionNumber() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getConditionNumber_9981f74b2d109da6]);
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getCovariance(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_d5a7c13c36e5009c], a0));
      }

      jdouble SingularValueDecomposition::getInverseConditionNumber() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getInverseConditionNumber_9981f74b2d109da6]);
      }

      jdouble SingularValueDecomposition::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_9981f74b2d109da6]);
      }

      jint SingularValueDecomposition::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getS() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getS_b2eebabce70526d8]));
      }

      JArray< jdouble > SingularValueDecomposition::getSingularValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSingularValues_be783177b060994b]));
      }

      ::org::hipparchus::linear::DecompositionSolver SingularValueDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_ac3e6aafa2c6c596]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getU() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getU_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getUT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getUT_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVT_b2eebabce70526d8]));
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
      static PyObject *t_SingularValueDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SingularValueDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SingularValueDecomposition_init_(t_SingularValueDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SingularValueDecomposition_getConditionNumber(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getCovariance(t_SingularValueDecomposition *self, PyObject *arg);
      static PyObject *t_SingularValueDecomposition_getInverseConditionNumber(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getNorm(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getRank(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getS(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getSingularValues(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getSolver(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getU(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getUT(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getV(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getVT(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_get__conditionNumber(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__inverseConditionNumber(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__norm(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__rank(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__s(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__singularValues(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__solver(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__u(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__uT(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__v(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__vT(t_SingularValueDecomposition *self, void *data);
      static PyGetSetDef t_SingularValueDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_SingularValueDecomposition, conditionNumber),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, inverseConditionNumber),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, norm),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, rank),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, s),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, singularValues),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, solver),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, u),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, uT),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, v),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SingularValueDecomposition__methods_[] = {
        DECLARE_METHOD(t_SingularValueDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposition, getConditionNumber, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getCovariance, METH_O),
        DECLARE_METHOD(t_SingularValueDecomposition, getInverseConditionNumber, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getRank, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getS, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getSingularValues, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getU, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getUT, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getV, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getVT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SingularValueDecomposition)[] = {
        { Py_tp_methods, t_SingularValueDecomposition__methods_ },
        { Py_tp_init, (void *) t_SingularValueDecomposition_init_ },
        { Py_tp_getset, t_SingularValueDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SingularValueDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SingularValueDecomposition, t_SingularValueDecomposition, SingularValueDecomposition);

      void t_SingularValueDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(SingularValueDecomposition), &PY_TYPE_DEF(SingularValueDecomposition), module, "SingularValueDecomposition", 0);
      }

      void t_SingularValueDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposition), "class_", make_descriptor(SingularValueDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposition), "wrapfn_", make_descriptor(t_SingularValueDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SingularValueDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SingularValueDecomposition::initializeClass, 1)))
          return NULL;
        return t_SingularValueDecomposition::wrap_Object(SingularValueDecomposition(((t_SingularValueDecomposition *) arg)->object.this$));
      }
      static PyObject *t_SingularValueDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SingularValueDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SingularValueDecomposition_init_(t_SingularValueDecomposition *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        SingularValueDecomposition object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          INT_CALL(object = SingularValueDecomposition(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SingularValueDecomposition_getConditionNumber(t_SingularValueDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getConditionNumber());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SingularValueDecomposition_getCovariance(t_SingularValueDecomposition *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getCovariance(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCovariance", arg);
        return NULL;
      }

      static PyObject *t_SingularValueDecomposition_getInverseConditionNumber(t_SingularValueDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getInverseConditionNumber());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SingularValueDecomposition_getNorm(t_SingularValueDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SingularValueDecomposition_getRank(t_SingularValueDecomposition *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRank());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SingularValueDecomposition_getS(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getS());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getSingularValues(t_SingularValueDecomposition *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getSingularValues());
        return result.wrap();
      }

      static PyObject *t_SingularValueDecomposition_getSolver(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getU(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getUT(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getUT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getV(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getVT(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_get__conditionNumber(t_SingularValueDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getConditionNumber());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SingularValueDecomposition_get__inverseConditionNumber(t_SingularValueDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getInverseConditionNumber());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SingularValueDecomposition_get__norm(t_SingularValueDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SingularValueDecomposition_get__rank(t_SingularValueDecomposition *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRank());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SingularValueDecomposition_get__s(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getS());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__singularValues(t_SingularValueDecomposition *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getSingularValues());
        return value.wrap();
      }

      static PyObject *t_SingularValueDecomposition_get__solver(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__u(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__uT(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getUT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__v(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__vT(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldAdapterDetector.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAdapterDetector::class$ = NULL;
        jmethodID *FieldAdapterDetector::mids$ = NULL;
        bool FieldAdapterDetector::live$ = false;

        jclass FieldAdapterDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAdapterDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bb8991c4a46cf56d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_3146cd1129cf853c] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getHandler_ae50020f8bfe1c59] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_0f2b5ee7b716ac92] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_08d37e3f77b7239d] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldAdapterDetector::FieldAdapterDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb8991c4a46cf56d, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldAdapterDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldAdapterDetector::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_3146cd1129cf853c]));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldAdapterDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_ae50020f8bfe1c59]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldAdapterDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_0f2b5ee7b716ac92]));
        }

        jint FieldAdapterDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_d6ab429752e7c267]);
        }

        ::org::hipparchus::CalculusFieldElement FieldAdapterDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_08d37e3f77b7239d]));
        }

        void FieldAdapterDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
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
    namespace propagation {
      namespace events {
        static PyObject *t_FieldAdapterDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_of_(t_FieldAdapterDetector *self, PyObject *args);
        static int t_FieldAdapterDetector_init_(t_FieldAdapterDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldAdapterDetector_g(t_FieldAdapterDetector *self, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_getDetector(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getHandler(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getMaxCheckInterval(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getMaxIterationCount(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getThreshold(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_init(t_FieldAdapterDetector *self, PyObject *args);
        static PyObject *t_FieldAdapterDetector_get__detector(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__handler(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__maxCheckInterval(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__maxIterationCount(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__threshold(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__parameters_(t_FieldAdapterDetector *self, void *data);
        static PyGetSetDef t_FieldAdapterDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdapterDetector, detector),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, handler),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, threshold),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdapterDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAdapterDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdapterDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdapterDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, g, METH_O),
          DECLARE_METHOD(t_FieldAdapterDetector, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdapterDetector)[] = {
          { Py_tp_methods, t_FieldAdapterDetector__methods_ },
          { Py_tp_init, (void *) t_FieldAdapterDetector_init_ },
          { Py_tp_getset, t_FieldAdapterDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdapterDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdapterDetector, t_FieldAdapterDetector, FieldAdapterDetector);
        PyObject *t_FieldAdapterDetector::wrap_Object(const FieldAdapterDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdapterDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdapterDetector *self = (t_FieldAdapterDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdapterDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdapterDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdapterDetector *self = (t_FieldAdapterDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdapterDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdapterDetector), &PY_TYPE_DEF(FieldAdapterDetector), module, "FieldAdapterDetector", 0);
        }

        void t_FieldAdapterDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "class_", make_descriptor(FieldAdapterDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "wrapfn_", make_descriptor(t_FieldAdapterDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdapterDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdapterDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAdapterDetector::wrap_Object(FieldAdapterDetector(((t_FieldAdapterDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAdapterDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdapterDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdapterDetector_of_(t_FieldAdapterDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldAdapterDetector_init_(t_FieldAdapterDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAdapterDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldAdapterDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldAdapterDetector_g(t_FieldAdapterDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldAdapterDetector_getDetector(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getHandler(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getMaxCheckInterval(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getMaxIterationCount(t_FieldAdapterDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAdapterDetector_getThreshold(t_FieldAdapterDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAdapterDetector_init(t_FieldAdapterDetector *self, PyObject *args)
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
        static PyObject *t_FieldAdapterDetector_get__parameters_(t_FieldAdapterDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAdapterDetector_get__detector(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__handler(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__maxCheckInterval(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__maxIterationCount(t_FieldAdapterDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAdapterDetector_get__threshold(t_FieldAdapterDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getThreshold());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonParameterObserver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterObserver.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/ParameterDriver.h"
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
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_valueChanged_561d325e967ec35c] = env->getMethodID(cls, "valueChanged", "(DLorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_valueSpanMapChanged_d10bdde76d08bc2c] = env->getMethodID(cls, "valueSpanMapChanged", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/ParameterDriver;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterObserver::PythonParameterObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonParameterObserver::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonParameterObserver::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonParameterObserver::pythonExtension(jlong a0) const
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonParameterObserver_valueChanged1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_42c72b98e3c2e08a]);
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistoryMetadata::class$ = NULL;
              jmethodID *AttitudeStateHistoryMetadata::mids$ = NULL;
              bool AttitudeStateHistoryMetadata::live$ = false;

              jclass AttitudeStateHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAttBasis_d2c8eb4129821f0e] = env->getMethodID(cls, "getAttBasis", "()Ljava/lang/String;");
                  mids$[mid_getAttBasisID_d2c8eb4129821f0e] = env->getMethodID(cls, "getAttBasisID", "()Ljava/lang/String;");
                  mids$[mid_getAttID_d2c8eb4129821f0e] = env->getMethodID(cls, "getAttID", "()Ljava/lang/String;");
                  mids$[mid_getAttPrevID_d2c8eb4129821f0e] = env->getMethodID(cls, "getAttPrevID", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeType_8cc80fd874f53bfc] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getEndpoints_d67fadc29cf1ce4a] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_503d51f00fe64860] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getNbStates_d6ab429752e7c267] = env->getMethodID(cls, "getNbStates", "()I");
                  mids$[mid_getRateType_29a8b143d426bd15] = env->getMethodID(cls, "getRateType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_setAttBasis_105e1eadb709d9ac] = env->getMethodID(cls, "setAttBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setAttBasisID_105e1eadb709d9ac] = env->getMethodID(cls, "setAttBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttID_105e1eadb709d9ac] = env->getMethodID(cls, "setAttID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttPrevID_105e1eadb709d9ac] = env->getMethodID(cls, "setAttPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeType_c9e4b2c8c6496634] = env->getMethodID(cls, "setAttitudeType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;)V");
                  mids$[mid_setEulerRotSeq_d6989ad0241efe2c] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setNbStates_8fd427ab23829bf5] = env->getMethodID(cls, "setNbStates", "(I)V");
                  mids$[mid_setRateType_60a107afe829430c] = env->getMethodID(cls, "setRateType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeStateHistoryMetadata::AttitudeStateHistoryMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::java::lang::String AttitudeStateHistoryMetadata::getAttBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttBasis_d2c8eb4129821f0e]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttBasisID_d2c8eb4129821f0e]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttID_d2c8eb4129821f0e]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttPrevID_d2c8eb4129821f0e]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeStateHistoryMetadata::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_8cc80fd874f53bfc]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AttitudeStateHistoryMetadata::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_d67fadc29cf1ce4a]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AttitudeStateHistoryMetadata::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_503d51f00fe64860]));
              }

              jint AttitudeStateHistoryMetadata::getNbStates() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbStates_d6ab429752e7c267]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeStateHistoryMetadata::getRateType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateType_29a8b143d426bd15]));
              }

              void AttitudeStateHistoryMetadata::setAttBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttBasis_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttBasisID_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttID_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttPrevID_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttitudeType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeType_c9e4b2c8c6496634], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_d6989ad0241efe2c], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setNbStates(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbStates_8fd427ab23829bf5], a0);
              }

              void AttitudeStateHistoryMetadata::setRateType(const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateType_60a107afe829430c], a0.this$);
              }

              void AttitudeStateHistoryMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
              static PyObject *t_AttitudeStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeStateHistoryMetadata_init_(t_AttitudeStateHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasis(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasisID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttPrevID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttitudeType(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getEndpoints(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getEulerRotSeq(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getNbStates(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getRateType(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setEulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setNbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setRateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_validate(t_AttitudeStateHistoryMetadata *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasis(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasisID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attPrevID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attitudeType(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__endpoints(t_AttitudeStateHistoryMetadata *self, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__nbStates(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__nbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__rateType(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__rateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeStateHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attBasis),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attBasisID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attPrevID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attitudeType),
                DECLARE_GET_FIELD(t_AttitudeStateHistoryMetadata, endpoints),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, eulerRotSeq),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, nbStates),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, rateType),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttBasis, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttBasisID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttPrevID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttitudeType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getNbStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getRateType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttBasis, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttBasisID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttPrevID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttitudeType, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setNbStates, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setRateType, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistoryMetadata)[] = {
                { Py_tp_methods, t_AttitudeStateHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_AttitudeStateHistoryMetadata_init_ },
                { Py_tp_getset, t_AttitudeStateHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistoryMetadata, t_AttitudeStateHistoryMetadata, AttitudeStateHistoryMetadata);

              void t_AttitudeStateHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistoryMetadata), &PY_TYPE_DEF(AttitudeStateHistoryMetadata), module, "AttitudeStateHistoryMetadata", 0);
              }

              void t_AttitudeStateHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "class_", make_descriptor(AttitudeStateHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "wrapfn_", make_descriptor(t_AttitudeStateHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistoryMetadata::wrap_Object(AttitudeStateHistoryMetadata(((t_AttitudeStateHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeStateHistoryMetadata_init_(t_AttitudeStateHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                AttitudeStateHistoryMetadata object((jobject) NULL);

                INT_CALL(object = AttitudeStateHistoryMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasis(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttBasis());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasisID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttBasisID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttPrevID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttPrevID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttitudeType(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getEndpoints(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getEulerRotSeq(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getNbStates(t_AttitudeStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbStates());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getRateType(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getRateType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttBasis", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttBasisID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttPrevID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setAttitudeType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setEulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(self->object.setEulerRotSeq(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEulerRotSeq", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setNbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNbStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNbStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setRateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setRateType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_validate(t_AttitudeStateHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeStateHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasis(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttBasis());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attBasis", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasisID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttBasisID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attBasisID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attPrevID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttPrevID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attPrevID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attitudeType(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAttitudeType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeType", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__endpoints(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEulerRotSeq(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eulerRotSeq", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__nbStates(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbStates());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeStateHistoryMetadata_set__nbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNbStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nbStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__rateType(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getRateType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__rateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setRateType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateType", arg);
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
#include "org/orekit/forces/maneuvers/ImpulseManeuver.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/ImpulseManeuver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *ImpulseManeuver::class$ = NULL;
        jmethodID *ImpulseManeuver::mids$ = NULL;
        bool ImpulseManeuver::live$ = false;

        jclass ImpulseManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/ImpulseManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a8adba5582913c96] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_2de4d267593a16a3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_922c32c6eebbf23a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/forces/maneuvers/Control3DVectorCostType;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAttitudeOverride_2f73d1f4460b8d6c] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_fc9abda16ef946e0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getDeltaVSat_032312bdeb3f2f93] = env->getMethodID(cls, "getDeltaVSat", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getIsp_9981f74b2d109da6] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getTrigger_ebd847a60689999d] = env->getMethodID(cls, "getTrigger", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_1ad29cd39384bfba] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/forces/maneuvers/ImpulseManeuver;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a8adba5582913c96, a0.this$, a1.this$, a2)) {}

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2de4d267593a16a3, a0.this$, a1.this$, a2.this$, a3)) {}

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_922c32c6eebbf23a, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        jdouble ImpulseManeuver::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::attitudes::AttitudeProvider ImpulseManeuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_2f73d1f4460b8d6c]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType ImpulseManeuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_fc9abda16ef946e0]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ImpulseManeuver::getDeltaVSat() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDeltaVSat_032312bdeb3f2f93]));
        }

        jdouble ImpulseManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_9981f74b2d109da6]);
        }

        ::org::orekit::propagation::events::EventDetector ImpulseManeuver::getTrigger() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getTrigger_ebd847a60689999d]));
        }

        void ImpulseManeuver::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
        static PyObject *t_ImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ImpulseManeuver_of_(t_ImpulseManeuver *self, PyObject *args);
        static int t_ImpulseManeuver_init_(t_ImpulseManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ImpulseManeuver_g(t_ImpulseManeuver *self, PyObject *args);
        static PyObject *t_ImpulseManeuver_getAttitudeOverride(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getControl3DVectorCostType(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getDeltaVSat(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getIsp(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getTrigger(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_init(t_ImpulseManeuver *self, PyObject *args);
        static PyObject *t_ImpulseManeuver_get__attitudeOverride(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__control3DVectorCostType(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__deltaVSat(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__isp(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__trigger(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__parameters_(t_ImpulseManeuver *self, void *data);
        static PyGetSetDef t_ImpulseManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_ImpulseManeuver, attitudeOverride),
          DECLARE_GET_FIELD(t_ImpulseManeuver, control3DVectorCostType),
          DECLARE_GET_FIELD(t_ImpulseManeuver, deltaVSat),
          DECLARE_GET_FIELD(t_ImpulseManeuver, isp),
          DECLARE_GET_FIELD(t_ImpulseManeuver, trigger),
          DECLARE_GET_FIELD(t_ImpulseManeuver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ImpulseManeuver__methods_[] = {
          DECLARE_METHOD(t_ImpulseManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ImpulseManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ImpulseManeuver, of_, METH_VARARGS),
          DECLARE_METHOD(t_ImpulseManeuver, g, METH_VARARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getAttitudeOverride, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getControl3DVectorCostType, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getDeltaVSat, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getIsp, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getTrigger, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ImpulseManeuver)[] = {
          { Py_tp_methods, t_ImpulseManeuver__methods_ },
          { Py_tp_init, (void *) t_ImpulseManeuver_init_ },
          { Py_tp_getset, t_ImpulseManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ImpulseManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ImpulseManeuver, t_ImpulseManeuver, ImpulseManeuver);
        PyObject *t_ImpulseManeuver::wrap_Object(const ImpulseManeuver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ImpulseManeuver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ImpulseManeuver *self = (t_ImpulseManeuver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ImpulseManeuver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ImpulseManeuver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ImpulseManeuver *self = (t_ImpulseManeuver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ImpulseManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(ImpulseManeuver), &PY_TYPE_DEF(ImpulseManeuver), module, "ImpulseManeuver", 0);
        }

        void t_ImpulseManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ImpulseManeuver), "class_", make_descriptor(ImpulseManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ImpulseManeuver), "wrapfn_", make_descriptor(t_ImpulseManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ImpulseManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ImpulseManeuver::initializeClass, 1)))
            return NULL;
          return t_ImpulseManeuver::wrap_Object(ImpulseManeuver(((t_ImpulseManeuver *) arg)->object.this$));
        }
        static PyObject *t_ImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ImpulseManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ImpulseManeuver_of_(t_ImpulseManeuver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ImpulseManeuver_init_(t_ImpulseManeuver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              ImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ImpulseManeuver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::forces::maneuvers::PY_TYPE(ImpulseManeuver);
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              ImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = ImpulseManeuver(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::forces::maneuvers::PY_TYPE(ImpulseManeuver);
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::forces::maneuvers::Control3DVectorCostType a4((jobject) NULL);
              PyTypeObject **p4;
              ImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "kkkDK", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_))
              {
                INT_CALL(object = ImpulseManeuver(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::forces::maneuvers::PY_TYPE(ImpulseManeuver);
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

        static PyObject *t_ImpulseManeuver_g(t_ImpulseManeuver *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ImpulseManeuver), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ImpulseManeuver_getAttitudeOverride(t_ImpulseManeuver *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_getControl3DVectorCostType(t_ImpulseManeuver *self)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
          OBJ_CALL(result = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_getDeltaVSat(t_ImpulseManeuver *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_getIsp(t_ImpulseManeuver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getIsp());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ImpulseManeuver_getTrigger(t_ImpulseManeuver *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_init(t_ImpulseManeuver *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(ImpulseManeuver), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_ImpulseManeuver_get__parameters_(t_ImpulseManeuver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ImpulseManeuver_get__attitudeOverride(t_ImpulseManeuver *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_ImpulseManeuver_get__control3DVectorCostType(t_ImpulseManeuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
          OBJ_CALL(value = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
        }

        static PyObject *t_ImpulseManeuver_get__deltaVSat(t_ImpulseManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_ImpulseManeuver_get__isp(t_ImpulseManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIsp());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ImpulseManeuver_get__trigger(t_ImpulseManeuver *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AbstractIntegratedPropagator::class$ = NULL;
        jmethodID *AbstractIntegratedPropagator::mids$ = NULL;
        bool AbstractIntegratedPropagator::live$ = false;

        jclass AbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_0b9db0c63a43ba8a] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/AdditionalDerivativesProvider;)V");
            mids$[mid_addEventDetector_d5d8be0538a03d97] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_clearEventsDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getAdditionalDerivativesProviders_d751c1a57012b438] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");
            mids$[mid_getBasicDimension_d6ab429752e7c267] = env->getMethodID(cls, "getBasicDimension", "()I");
            mids$[mid_getCalls_d6ab429752e7c267] = env->getMethodID(cls, "getCalls", "()I");
            mids$[mid_getEphemerisGenerator_9f3d902ece22e1af] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
            mids$[mid_getEventsDetectors_3bfef5c77ceb081a] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getIntegratorName_d2c8eb4129821f0e] = env->getMethodID(cls, "getIntegratorName", "()Ljava/lang/String;");
            mids$[mid_getManagedAdditionalStates_f81c0644d57ae495] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagationType_fa97d40fdfd0f5fb] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getResetAtEnd_eee3de00fe971136] = env->getMethodID(cls, "getResetAtEnd", "()Z");
            mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
            mids$[mid_propagate_1e982279849c3b65] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_propagate_aaae977c62060398] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_setMu_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setResetAtEnd_b35db77cae58639e] = env->getMethodID(cls, "setResetAtEnd", "(Z)V");
            mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_setUpStmAndJacobianGenerators_ff7cb6c242604316] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");
            mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_beforeIntegration_14deaae988292d42] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_afterIntegration_ff7cb6c242604316] = env->getMethodID(cls, "afterIntegration", "()V");
            mids$[mid_getInitialIntegrationState_8fbfa58855031235] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_createMapper_5f8935bd082b8966] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_getMainStateEquations_97764934e3fe735c] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_setUpEventDetector_1ad9fe3c0dae9948] = env->getMethodID(cls, "setUpEventDetector", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_initMapper_ff7cb6c242604316] = env->getMethodID(cls, "initMapper", "()V");
            mids$[mid_setOrbitType_faf186fbb93ad060] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_266be23fd67cbce4] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_getIntegrator_5f35958883823593] = env->getMethodID(cls, "getIntegrator", "()Lorg/hipparchus/ode/ODEIntegrator;");
            mids$[mid_setUpUserEventDetectors_ff7cb6c242604316] = env->getMethodID(cls, "setUpUserEventDetectors", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractIntegratedPropagator::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::AdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_0b9db0c63a43ba8a], a0.this$);
        }

        void AbstractIntegratedPropagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_d5d8be0538a03d97], a0.this$);
        }

        void AbstractIntegratedPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_ff7cb6c242604316]);
        }

        ::java::util::List AbstractIntegratedPropagator::getAdditionalDerivativesProviders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivativesProviders_d751c1a57012b438]));
        }

        jint AbstractIntegratedPropagator::getBasicDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getBasicDimension_d6ab429752e7c267]);
        }

        jint AbstractIntegratedPropagator::getCalls() const
        {
          return env->callIntMethod(this$, mids$[mid_getCalls_d6ab429752e7c267]);
        }

        ::org::orekit::propagation::EphemerisGenerator AbstractIntegratedPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_9f3d902ece22e1af]));
        }

        ::java::util::Collection AbstractIntegratedPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_3bfef5c77ceb081a]));
        }

        ::java::lang::String AbstractIntegratedPropagator::getIntegratorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIntegratorName_d2c8eb4129821f0e]));
        }

        JArray< ::java::lang::String > AbstractIntegratedPropagator::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_f81c0644d57ae495]));
        }

        jdouble AbstractIntegratedPropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        ::org::orekit::propagation::PropagationType AbstractIntegratedPropagator::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_fa97d40fdfd0f5fb]));
        }

        jboolean AbstractIntegratedPropagator::getResetAtEnd() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getResetAtEnd_eee3de00fe971136]);
        }

        jboolean AbstractIntegratedPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41], a0.this$);
        }

        ::org::orekit::propagation::SpacecraftState AbstractIntegratedPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_1e982279849c3b65], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState AbstractIntegratedPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_aaae977c62060398], a0.this$, a1.this$));
        }

        void AbstractIntegratedPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
        }

        void AbstractIntegratedPropagator::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_1ad26e8c8c0cd65b], a0);
        }

        void AbstractIntegratedPropagator::setResetAtEnd(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setResetAtEnd_b35db77cae58639e], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_AbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_addEventDetector(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_clearEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getBasicDimension(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getCalls(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getEphemerisGenerator(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getIntegratorName(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getManagedAdditionalStates(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getMu(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getPropagationType(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getResetAtEnd(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_isAdditionalStateManaged(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_propagate(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_setAttitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_setMu(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_setResetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_get__additionalDerivativesProviders(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__attitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__basicDimension(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__calls(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__ephemerisGenerator(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__eventsDetectors(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__integratorName(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__managedAdditionalStates(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__mu(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__mu(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__propagationType(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__resetAtEnd(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__resetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, additionalDerivativesProviders),
          DECLARE_SET_FIELD(t_AbstractIntegratedPropagator, attitudeProvider),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, basicDimension),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, calls),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, integratorName),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, managedAdditionalStates),
          DECLARE_GETSET_FIELD(t_AbstractIntegratedPropagator, mu),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, propagationType),
          DECLARE_GETSET_FIELD(t_AbstractIntegratedPropagator, resetAtEnd),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_AbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getAdditionalDerivativesProviders, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getBasicDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getCalls, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getIntegratorName, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getResetAtEnd, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, propagate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setMu, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setResetAtEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_AbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
          NULL
        };

        DEFINE_TYPE(AbstractIntegratedPropagator, t_AbstractIntegratedPropagator, AbstractIntegratedPropagator);

        void t_AbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractIntegratedPropagator), &PY_TYPE_DEF(AbstractIntegratedPropagator), module, "AbstractIntegratedPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "MainStateEquations", make_descriptor(&PY_TYPE_DEF(AbstractIntegratedPropagator$MainStateEquations)));
        }

        void t_AbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "class_", make_descriptor(AbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_AbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_AbstractIntegratedPropagator::wrap_Object(AbstractIntegratedPropagator(((t_AbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_AbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_AbstractIntegratedPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::integration::AdditionalDerivativesProvider a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::integration::AdditionalDerivativesProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addAdditionalDerivativesProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAdditionalDerivativesProvider", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator_addEventDetector(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_clearEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_AbstractIntegratedPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::integration::PY_TYPE(AdditionalDerivativesProvider));
        }

        static PyObject *t_AbstractIntegratedPropagator_getBasicDimension(t_AbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getBasicDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getCalls(t_AbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCalls());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getEphemerisGenerator(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getIntegratorName(t_AbstractIntegratedPropagator *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorName());
          return j2p(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getManagedAdditionalStates(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getMu(t_AbstractIntegratedPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getPropagationType(t_AbstractIntegratedPropagator *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getResetAtEnd(t_AbstractIntegratedPropagator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getResetAtEnd());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_isAdditionalStateManaged(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_propagate(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.propagate(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.propagate(a0, a1));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_setAttitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_setMu(t_AbstractIntegratedPropagator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMu", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator_setResetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setResetAtEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setResetAtEnd", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator_get__additionalDerivativesProviders(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_AbstractIntegratedPropagator_set__attitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
            {
              INT_CALL(self->object.setAttitudeProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return -1;
        }

        static PyObject *t_AbstractIntegratedPropagator_get__basicDimension(t_AbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getBasicDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__calls(t_AbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCalls());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__ephemerisGenerator(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__eventsDetectors(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__integratorName(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorName());
          return j2p(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__managedAdditionalStates(t_AbstractIntegratedPropagator *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_AbstractIntegratedPropagator_get__mu(t_AbstractIntegratedPropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }
        static int t_AbstractIntegratedPropagator_set__mu(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_AbstractIntegratedPropagator_get__propagationType(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__resetAtEnd(t_AbstractIntegratedPropagator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getResetAtEnd());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractIntegratedPropagator_set__resetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setResetAtEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "resetAtEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *CMAESOptimizer$Sigma::class$ = NULL;
            jmethodID *CMAESOptimizer$Sigma::mids$ = NULL;
            bool CMAESOptimizer$Sigma::live$ = false;

            jclass CMAESOptimizer$Sigma::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_getSigma_be783177b060994b] = env->getMethodID(cls, "getSigma", "()[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer$Sigma::CMAESOptimizer$Sigma(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

            JArray< jdouble > CMAESOptimizer$Sigma::getSigma() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSigma_be783177b060994b]));
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
            static PyObject *t_CMAESOptimizer$Sigma_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$Sigma_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$Sigma_of_(t_CMAESOptimizer$Sigma *self, PyObject *args);
            static int t_CMAESOptimizer$Sigma_init_(t_CMAESOptimizer$Sigma *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CMAESOptimizer$Sigma_getSigma(t_CMAESOptimizer$Sigma *self);
            static PyObject *t_CMAESOptimizer$Sigma_get__sigma(t_CMAESOptimizer$Sigma *self, void *data);
            static PyObject *t_CMAESOptimizer$Sigma_get__parameters_(t_CMAESOptimizer$Sigma *self, void *data);
            static PyGetSetDef t_CMAESOptimizer$Sigma__fields_[] = {
              DECLARE_GET_FIELD(t_CMAESOptimizer$Sigma, sigma),
              DECLARE_GET_FIELD(t_CMAESOptimizer$Sigma, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CMAESOptimizer$Sigma__methods_[] = {
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, of_, METH_VARARGS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, getSigma, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CMAESOptimizer$Sigma)[] = {
              { Py_tp_methods, t_CMAESOptimizer$Sigma__methods_ },
              { Py_tp_init, (void *) t_CMAESOptimizer$Sigma_init_ },
              { Py_tp_getset, t_CMAESOptimizer$Sigma__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CMAESOptimizer$Sigma)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CMAESOptimizer$Sigma, t_CMAESOptimizer$Sigma, CMAESOptimizer$Sigma);
            PyObject *t_CMAESOptimizer$Sigma::wrap_Object(const CMAESOptimizer$Sigma& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$Sigma::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$Sigma *self = (t_CMAESOptimizer$Sigma *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CMAESOptimizer$Sigma::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$Sigma::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$Sigma *self = (t_CMAESOptimizer$Sigma *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CMAESOptimizer$Sigma::install(PyObject *module)
            {
              installType(&PY_TYPE(CMAESOptimizer$Sigma), &PY_TYPE_DEF(CMAESOptimizer$Sigma), module, "CMAESOptimizer$Sigma", 0);
            }

            void t_CMAESOptimizer$Sigma::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "class_", make_descriptor(CMAESOptimizer$Sigma::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "wrapfn_", make_descriptor(t_CMAESOptimizer$Sigma::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CMAESOptimizer$Sigma_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CMAESOptimizer$Sigma::initializeClass, 1)))
                return NULL;
              return t_CMAESOptimizer$Sigma::wrap_Object(CMAESOptimizer$Sigma(((t_CMAESOptimizer$Sigma *) arg)->object.this$));
            }
            static PyObject *t_CMAESOptimizer$Sigma_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CMAESOptimizer$Sigma::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CMAESOptimizer$Sigma_of_(t_CMAESOptimizer$Sigma *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CMAESOptimizer$Sigma_init_(t_CMAESOptimizer$Sigma *self, PyObject *args, PyObject *kwds)
            {
              JArray< jdouble > a0((jobject) NULL);
              CMAESOptimizer$Sigma object((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                INT_CALL(object = CMAESOptimizer$Sigma(a0));
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

            static PyObject *t_CMAESOptimizer$Sigma_getSigma(t_CMAESOptimizer$Sigma *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getSigma());
              return result.wrap();
            }
            static PyObject *t_CMAESOptimizer$Sigma_get__parameters_(t_CMAESOptimizer$Sigma *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CMAESOptimizer$Sigma_get__sigma(t_CMAESOptimizer$Sigma *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getSigma());
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "java/io/IOException.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmWriter::class$ = NULL;
            jmethodID *CdmWriter::mids$ = NULL;
            bool CdmWriter::live$ = false;
            jdouble CdmWriter::CCSDS_CDM_VERS = (jdouble) 0;
            jint CdmWriter::KVN_PADDING_WIDTH = (jint) 0;

            jclass CdmWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3fedc1babc120c04] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                mids$[mid_writeRelativeMetadataContent_d892bd325a5da5c3] = env->getMethodID(cls, "writeRelativeMetadataContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_writeSegmentContent_305aa7864995b122] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CCSDS_CDM_VERS = env->getStaticDoubleField(cls, "CCSDS_CDM_VERS");
                KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmWriter::CdmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::ndm::cdm::CdmMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_3fedc1babc120c04, a0.this$, a1.this$)) {}

            void CdmWriter::writeRelativeMetadataContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRelativeMetadataContent_d892bd325a5da5c3], a0.this$, a1, a2.this$);
            }

            void CdmWriter::writeSegmentContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::section::Segment & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegmentContent_305aa7864995b122], a0.this$, a1, a2.this$);
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
            static PyObject *t_CdmWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmWriter_init_(t_CdmWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmWriter_writeRelativeMetadataContent(t_CdmWriter *self, PyObject *args);
            static PyObject *t_CdmWriter_writeSegmentContent(t_CdmWriter *self, PyObject *args);

            static PyMethodDef t_CdmWriter__methods_[] = {
              DECLARE_METHOD(t_CdmWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmWriter, writeRelativeMetadataContent, METH_VARARGS),
              DECLARE_METHOD(t_CdmWriter, writeSegmentContent, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmWriter)[] = {
              { Py_tp_methods, t_CdmWriter__methods_ },
              { Py_tp_init, (void *) t_CdmWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::cdm::CdmMessageWriter),
              NULL
            };

            DEFINE_TYPE(CdmWriter, t_CdmWriter, CdmWriter);

            void t_CdmWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmWriter), &PY_TYPE_DEF(CdmWriter), module, "CdmWriter", 0);
            }

            void t_CdmWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "class_", make_descriptor(CdmWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "wrapfn_", make_descriptor(t_CdmWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "CCSDS_CDM_VERS", make_descriptor(CdmWriter::CCSDS_CDM_VERS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "KVN_PADDING_WIDTH", make_descriptor(CdmWriter::KVN_PADDING_WIDTH));
            }

            static PyObject *t_CdmWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmWriter::initializeClass, 1)))
                return NULL;
              return t_CdmWriter::wrap_Object(CdmWriter(((t_CdmWriter *) arg)->object.this$));
            }
            static PyObject *t_CdmWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmWriter_init_(t_CdmWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::utils::IERSConventions a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::data::DataContext a1((jobject) NULL);
              CdmWriter object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
              {
                INT_CALL(object = CdmWriter(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmWriter_writeRelativeMetadataContent(t_CdmWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a2((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.writeRelativeMetadataContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmWriter), (PyObject *) self, "writeRelativeMetadataContent", args, 2);
            }

            static PyObject *t_CdmWriter_writeSegmentContent(t_CdmWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::section::Segment a2((jobject) NULL);
              PyTypeObject **p2;

              if (!parseArgs(args, "kDK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegmentContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmWriter), (PyObject *) self, "writeSegmentContent", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame45.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame45::class$ = NULL;
          jmethodID *SubFrame45::mids$ = NULL;
          bool SubFrame45::live$ = false;

          jclass SubFrame45::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame45");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDataId_d6ab429752e7c267] = env->getMethodID(cls, "getDataId", "()I");
              mids$[mid_getSvId_d6ab429752e7c267] = env->getMethodID(cls, "getSvId", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame45::getDataId() const
          {
            return env->callIntMethod(this$, mids$[mid_getDataId_d6ab429752e7c267]);
          }

          jint SubFrame45::getSvId() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvId_d6ab429752e7c267]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame45_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame45_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame45_getDataId(t_SubFrame45 *self);
          static PyObject *t_SubFrame45_getSvId(t_SubFrame45 *self);
          static PyObject *t_SubFrame45_get__dataId(t_SubFrame45 *self, void *data);
          static PyObject *t_SubFrame45_get__svId(t_SubFrame45 *self, void *data);
          static PyGetSetDef t_SubFrame45__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame45, dataId),
            DECLARE_GET_FIELD(t_SubFrame45, svId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame45__methods_[] = {
            DECLARE_METHOD(t_SubFrame45, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame45, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame45, getDataId, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame45, getSvId, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame45)[] = {
            { Py_tp_methods, t_SubFrame45__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame45__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame45)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame45, t_SubFrame45, SubFrame45);

          void t_SubFrame45::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame45), &PY_TYPE_DEF(SubFrame45), module, "SubFrame45", 0);
          }

          void t_SubFrame45::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "class_", make_descriptor(SubFrame45::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "wrapfn_", make_descriptor(t_SubFrame45::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame45_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame45::initializeClass, 1)))
              return NULL;
            return t_SubFrame45::wrap_Object(SubFrame45(((t_SubFrame45 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame45_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame45::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame45_getDataId(t_SubFrame45 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDataId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame45_getSvId(t_SubFrame45 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame45_get__dataId(t_SubFrame45 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDataId());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame45_get__svId(t_SubFrame45 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvId());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseMinusCodeCombination::class$ = NULL;
          jmethodID *PhaseMinusCodeCombination::mids$ = NULL;
          bool PhaseMinusCodeCombination::live$ = false;

          jclass PhaseMinusCodeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_82f92590f4247da1] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

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

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PhaseMinusCodeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseMinusCodeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_PhaseMinusCodeCombination__methods_[] = {
            DECLARE_METHOD(t_PhaseMinusCodeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseMinusCodeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseMinusCodeCombination)[] = {
            { Py_tp_methods, t_PhaseMinusCodeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseMinusCodeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(PhaseMinusCodeCombination, t_PhaseMinusCodeCombination, PhaseMinusCodeCombination);

          void t_PhaseMinusCodeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseMinusCodeCombination), &PY_TYPE_DEF(PhaseMinusCodeCombination), module, "PhaseMinusCodeCombination", 0);
          }

          void t_PhaseMinusCodeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "class_", make_descriptor(PhaseMinusCodeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "wrapfn_", make_descriptor(t_PhaseMinusCodeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseMinusCodeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseMinusCodeCombination::initializeClass, 1)))
              return NULL;
            return t_PhaseMinusCodeCombination::wrap_Object(PhaseMinusCodeCombination(((t_PhaseMinusCodeCombination *) arg)->object.this$));
          }
          static PyObject *t_PhaseMinusCodeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseMinusCodeCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TricubicInterpolatingFunction::class$ = NULL;
        jmethodID *TricubicInterpolatingFunction::mids$ = NULL;
        bool TricubicInterpolatingFunction::live$ = false;

        jclass TricubicInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b857764c8b8b3202] = env->getMethodID(cls, "<init>", "([D[D[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D)V");
            mids$[mid_isValidPoint_de33958d3e7816c8] = env->getMethodID(cls, "isValidPoint", "(DDD)Z");
            mids$[mid_value_db06d8c3fc3d9670] = env->getMethodID(cls, "value", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TricubicInterpolatingFunction::TricubicInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3, const JArray< JArray< JArray< jdouble > > > & a4, const JArray< JArray< JArray< jdouble > > > & a5, const JArray< JArray< JArray< jdouble > > > & a6, const JArray< JArray< JArray< jdouble > > > & a7, const JArray< JArray< JArray< jdouble > > > & a8, const JArray< JArray< JArray< jdouble > > > & a9, const JArray< JArray< JArray< jdouble > > > & a10) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b857764c8b8b3202, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$)) {}

        jboolean TricubicInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_de33958d3e7816c8], a0, a1, a2);
        }

        jdouble TricubicInterpolatingFunction::value(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_db06d8c3fc3d9670], a0, a1, a2);
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
        static PyObject *t_TricubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TricubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TricubicInterpolatingFunction_init_(t_TricubicInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TricubicInterpolatingFunction_isValidPoint(t_TricubicInterpolatingFunction *self, PyObject *args);
        static PyObject *t_TricubicInterpolatingFunction_value(t_TricubicInterpolatingFunction *self, PyObject *args);

        static PyMethodDef t_TricubicInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_TricubicInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, isValidPoint, METH_VARARGS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TricubicInterpolatingFunction)[] = {
          { Py_tp_methods, t_TricubicInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_TricubicInterpolatingFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TricubicInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TricubicInterpolatingFunction, t_TricubicInterpolatingFunction, TricubicInterpolatingFunction);

        void t_TricubicInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(TricubicInterpolatingFunction), &PY_TYPE_DEF(TricubicInterpolatingFunction), module, "TricubicInterpolatingFunction", 0);
        }

        void t_TricubicInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "class_", make_descriptor(TricubicInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "wrapfn_", make_descriptor(t_TricubicInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TricubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TricubicInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_TricubicInterpolatingFunction::wrap_Object(TricubicInterpolatingFunction(((t_TricubicInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_TricubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TricubicInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TricubicInterpolatingFunction_init_(t_TricubicInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a4((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a5((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a6((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a7((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a8((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a9((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a10((jobject) NULL);
          TricubicInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10))
          {
            INT_CALL(object = TricubicInterpolatingFunction(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TricubicInterpolatingFunction_isValidPoint(t_TricubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", args);
          return NULL;
        }

        static PyObject *t_TricubicInterpolatingFunction_value(t_TricubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.value(a0, a1, a2));
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
#include "org/orekit/files/ilrs/CRD.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRD$CRDDataBlock.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD::class$ = NULL;
        jmethodID *CRD::mids$ = NULL;
        bool CRD::live$ = false;
        ::java::lang::String *CRD::STR_NAN = NULL;
        ::java::lang::String *CRD::STR_VALUE_NOT_AVAILABLE = NULL;

        jclass CRD::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addDataBlock_6220e04f8e74b4dd] = env->getMethodID(cls, "addDataBlock", "(Lorg/orekit/files/ilrs/CRD$CRDDataBlock;)V");
            mids$[mid_formatIntegerOrNaN_43e3765e4d074a90] = env->getStaticMethodID(cls, "formatIntegerOrNaN", "(II)Ljava/lang/String;");
            mids$[mid_getComments_d751c1a57012b438] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getDataBlocks_d751c1a57012b438] = env->getMethodID(cls, "getDataBlocks", "()Ljava/util/List;");
            mids$[mid_handleNaN_95277969d373e11f] = env->getStaticMethodID(cls, "handleNaN", "(Ljava/lang/String;)Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            STR_NAN = new ::java::lang::String(env->getStaticObjectField(cls, "STR_NAN", "Ljava/lang/String;"));
            STR_VALUE_NOT_AVAILABLE = new ::java::lang::String(env->getStaticObjectField(cls, "STR_VALUE_NOT_AVAILABLE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD::CRD() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void CRD::addDataBlock(const ::org::orekit::files::ilrs::CRD$CRDDataBlock & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addDataBlock_6220e04f8e74b4dd], a0.this$);
        }

        ::java::lang::String CRD::formatIntegerOrNaN(jint a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatIntegerOrNaN_43e3765e4d074a90], a0, a1));
        }

        ::java::util::List CRD::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_d751c1a57012b438]));
        }

        ::java::util::List CRD::getDataBlocks() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataBlocks_d751c1a57012b438]));
        }

        ::java::lang::String CRD::handleNaN(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_handleNaN_95277969d373e11f], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/files/ilrs/CRD$NptRangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$FrRangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRD_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD_init_(t_CRD *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD_addDataBlock(t_CRD *self, PyObject *arg);
        static PyObject *t_CRD_formatIntegerOrNaN(PyTypeObject *type, PyObject *args);
        static PyObject *t_CRD_getComments(t_CRD *self);
        static PyObject *t_CRD_getDataBlocks(t_CRD *self);
        static PyObject *t_CRD_handleNaN(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD_get__comments(t_CRD *self, void *data);
        static PyObject *t_CRD_get__dataBlocks(t_CRD *self, void *data);
        static PyGetSetDef t_CRD__fields_[] = {
          DECLARE_GET_FIELD(t_CRD, comments),
          DECLARE_GET_FIELD(t_CRD, dataBlocks),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD__methods_[] = {
          DECLARE_METHOD(t_CRD, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD, addDataBlock, METH_O),
          DECLARE_METHOD(t_CRD, formatIntegerOrNaN, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_CRD, getComments, METH_NOARGS),
          DECLARE_METHOD(t_CRD, getDataBlocks, METH_NOARGS),
          DECLARE_METHOD(t_CRD, handleNaN, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD)[] = {
          { Py_tp_methods, t_CRD__methods_ },
          { Py_tp_init, (void *) t_CRD_init_ },
          { Py_tp_getset, t_CRD__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD, t_CRD, CRD);

        void t_CRD::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD), &PY_TYPE_DEF(CRD), module, "CRD", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "SessionStatistics", make_descriptor(&PY_TYPE_DEF(CRD$SessionStatistics)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "CalibrationDetail", make_descriptor(&PY_TYPE_DEF(CRD$CalibrationDetail)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "Calibration", make_descriptor(&PY_TYPE_DEF(CRD$Calibration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "Meteo", make_descriptor(&PY_TYPE_DEF(CRD$Meteo)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "AnglesMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$AnglesMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "MeteorologicalMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$MeteorologicalMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "RangeSupplement", make_descriptor(&PY_TYPE_DEF(CRD$RangeSupplement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "NptRangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$NptRangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "FrRangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$FrRangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "RangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$RangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "CRDDataBlock", make_descriptor(&PY_TYPE_DEF(CRD$CRDDataBlock)));
        }

        void t_CRD::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "class_", make_descriptor(CRD::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "wrapfn_", make_descriptor(t_CRD::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRD::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "STR_NAN", make_descriptor(j2p(*CRD::STR_NAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "STR_VALUE_NOT_AVAILABLE", make_descriptor(j2p(*CRD::STR_VALUE_NOT_AVAILABLE)));
        }

        static PyObject *t_CRD_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD::initializeClass, 1)))
            return NULL;
          return t_CRD::wrap_Object(CRD(((t_CRD *) arg)->object.this$));
        }
        static PyObject *t_CRD_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD_init_(t_CRD *self, PyObject *args, PyObject *kwds)
        {
          CRD object((jobject) NULL);

          INT_CALL(object = CRD());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRD_addDataBlock(t_CRD *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$CRDDataBlock a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$CRDDataBlock::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addDataBlock(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDataBlock", arg);
          return NULL;
        }

        static PyObject *t_CRD_formatIntegerOrNaN(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRD::formatIntegerOrNaN(a0, a1));
            return j2p(result);
          }

          PyErr_SetArgsError(type, "formatIntegerOrNaN", args);
          return NULL;
        }

        static PyObject *t_CRD_getComments(t_CRD *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRD_getDataBlocks(t_CRD *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDataBlocks());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CRDDataBlock));
        }

        static PyObject *t_CRD_handleNaN(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRD::handleNaN(a0));
            return j2p(result);
          }

          PyErr_SetArgsError(type, "handleNaN", arg);
          return NULL;
        }

        static PyObject *t_CRD_get__comments(t_CRD *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD_get__dataBlocks(t_CRD *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDataBlocks());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/NamedParameterJacobianProvider.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *NamedParameterJacobianProvider::class$ = NULL;
      jmethodID *NamedParameterJacobianProvider::mids$ = NULL;
      bool NamedParameterJacobianProvider::live$ = false;

      jclass NamedParameterJacobianProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/NamedParameterJacobianProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeParameterJacobian_b64c18f49b11902d] = env->getMethodID(cls, "computeParameterJacobian", "(D[D[DLjava/lang/String;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > NamedParameterJacobianProvider::computeParameterJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::java::lang::String & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeParameterJacobian_b64c18f49b11902d], a0, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_NamedParameterJacobianProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NamedParameterJacobianProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NamedParameterJacobianProvider_computeParameterJacobian(t_NamedParameterJacobianProvider *self, PyObject *args);

      static PyMethodDef t_NamedParameterJacobianProvider__methods_[] = {
        DECLARE_METHOD(t_NamedParameterJacobianProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NamedParameterJacobianProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NamedParameterJacobianProvider, computeParameterJacobian, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NamedParameterJacobianProvider)[] = {
        { Py_tp_methods, t_NamedParameterJacobianProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NamedParameterJacobianProvider)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::Parameterizable),
        NULL
      };

      DEFINE_TYPE(NamedParameterJacobianProvider, t_NamedParameterJacobianProvider, NamedParameterJacobianProvider);

      void t_NamedParameterJacobianProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(NamedParameterJacobianProvider), &PY_TYPE_DEF(NamedParameterJacobianProvider), module, "NamedParameterJacobianProvider", 0);
      }

      void t_NamedParameterJacobianProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "class_", make_descriptor(NamedParameterJacobianProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "wrapfn_", make_descriptor(t_NamedParameterJacobianProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NamedParameterJacobianProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NamedParameterJacobianProvider::initializeClass, 1)))
          return NULL;
        return t_NamedParameterJacobianProvider::wrap_Object(NamedParameterJacobianProvider(((t_NamedParameterJacobianProvider *) arg)->object.this$));
      }
      static PyObject *t_NamedParameterJacobianProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NamedParameterJacobianProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_NamedParameterJacobianProvider_computeParameterJacobian(t_NamedParameterJacobianProvider *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[Ds", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeParameterJacobian(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeParameterJacobian", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/GillFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *GillFieldIntegrator::class$ = NULL;
        jmethodID *GillFieldIntegrator::mids$ = NULL;
        bool GillFieldIntegrator::live$ = false;

        jclass GillFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/GillFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_88bffd71fb0313dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_4d010bb8d4780d51] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_94ed2e0620f8833d] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_94ed2e0620f8833d] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_94c47b22d7e0a749] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/GillFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillFieldIntegrator::GillFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_88bffd71fb0313dc, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > GillFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_4d010bb8d4780d51]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > GillFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_94ed2e0620f8833d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > GillFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_94ed2e0620f8833d]));
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
        static PyObject *t_GillFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegrator_of_(t_GillFieldIntegrator *self, PyObject *args);
        static int t_GillFieldIntegrator_init_(t_GillFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillFieldIntegrator_getA(t_GillFieldIntegrator *self, PyObject *args);
        static PyObject *t_GillFieldIntegrator_getB(t_GillFieldIntegrator *self, PyObject *args);
        static PyObject *t_GillFieldIntegrator_getC(t_GillFieldIntegrator *self, PyObject *args);
        static PyObject *t_GillFieldIntegrator_get__a(t_GillFieldIntegrator *self, void *data);
        static PyObject *t_GillFieldIntegrator_get__b(t_GillFieldIntegrator *self, void *data);
        static PyObject *t_GillFieldIntegrator_get__c(t_GillFieldIntegrator *self, void *data);
        static PyObject *t_GillFieldIntegrator_get__parameters_(t_GillFieldIntegrator *self, void *data);
        static PyGetSetDef t_GillFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_GillFieldIntegrator, a),
          DECLARE_GET_FIELD(t_GillFieldIntegrator, b),
          DECLARE_GET_FIELD(t_GillFieldIntegrator, c),
          DECLARE_GET_FIELD(t_GillFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GillFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_GillFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillFieldIntegrator)[] = {
          { Py_tp_methods, t_GillFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_GillFieldIntegrator_init_ },
          { Py_tp_getset, t_GillFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(GillFieldIntegrator, t_GillFieldIntegrator, GillFieldIntegrator);
        PyObject *t_GillFieldIntegrator::wrap_Object(const GillFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegrator *self = (t_GillFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GillFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegrator *self = (t_GillFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GillFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(GillFieldIntegrator), &PY_TYPE_DEF(GillFieldIntegrator), module, "GillFieldIntegrator", 0);
        }

        void t_GillFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegrator), "class_", make_descriptor(GillFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegrator), "wrapfn_", make_descriptor(t_GillFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_GillFieldIntegrator::wrap_Object(GillFieldIntegrator(((t_GillFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_GillFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GillFieldIntegrator_of_(t_GillFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GillFieldIntegrator_init_(t_GillFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          GillFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = GillFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GillFieldIntegrator_getA(t_GillFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(GillFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_GillFieldIntegrator_getB(t_GillFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(GillFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_GillFieldIntegrator_getC(t_GillFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(GillFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_GillFieldIntegrator_get__parameters_(t_GillFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GillFieldIntegrator_get__a(t_GillFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_GillFieldIntegrator_get__b(t_GillFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_GillFieldIntegrator_get__c(t_GillFieldIntegrator *self, void *data)
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
#include "org/orekit/python/PythonUnivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonUnivariateFunction::class$ = NULL;
      jmethodID *PythonUnivariateFunction::mids$ = NULL;
      bool PythonUnivariateFunction::live$ = false;

      jclass PythonUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUnivariateFunction::PythonUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonUnivariateFunction::pythonExtension(jlong a0) const
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
    namespace python {
      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self);
      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonUnivariateFunction, t_PythonUnivariateFunction, PythonUnivariateFunction);

      void t_PythonUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonUnivariateFunction), &PY_TYPE_DEF(PythonUnivariateFunction), module, "PythonUnivariateFunction", 1);
      }

      void t_PythonUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "class_", make_descriptor(PythonUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "wrapfn_", make_descriptor(t_PythonUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonUnivariateFunction_pythonDecRef0 },
          { "value", "(D)D", (void *) t_PythonUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonUnivariateFunction::wrap_Object(PythonUnivariateFunction(((t_PythonUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "value", "d", (double) a0);
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

      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data)
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
#include "org/hipparchus/ode/FieldSecondaryODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldSecondaryODE::class$ = NULL;
      jmethodID *FieldSecondaryODE::mids$ = NULL;
      bool FieldSecondaryODE::live$ = false;

      jclass FieldSecondaryODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldSecondaryODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_a9647acde182d143] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_7b905e39487f1ac1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSecondaryODE::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_a9647acde182d143], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      jint FieldSecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      void FieldSecondaryODE::init(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_7b905e39487f1ac1], a0.this$, a1.this$, a2.this$, a3.this$);
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
      static PyObject *t_FieldSecondaryODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSecondaryODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSecondaryODE_of_(t_FieldSecondaryODE *self, PyObject *args);
      static PyObject *t_FieldSecondaryODE_computeDerivatives(t_FieldSecondaryODE *self, PyObject *args);
      static PyObject *t_FieldSecondaryODE_getDimension(t_FieldSecondaryODE *self);
      static PyObject *t_FieldSecondaryODE_init(t_FieldSecondaryODE *self, PyObject *args);
      static PyObject *t_FieldSecondaryODE_get__dimension(t_FieldSecondaryODE *self, void *data);
      static PyObject *t_FieldSecondaryODE_get__parameters_(t_FieldSecondaryODE *self, void *data);
      static PyGetSetDef t_FieldSecondaryODE__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSecondaryODE, dimension),
        DECLARE_GET_FIELD(t_FieldSecondaryODE, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSecondaryODE__methods_[] = {
        DECLARE_METHOD(t_FieldSecondaryODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSecondaryODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSecondaryODE, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSecondaryODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldSecondaryODE, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldSecondaryODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSecondaryODE)[] = {
        { Py_tp_methods, t_FieldSecondaryODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldSecondaryODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSecondaryODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSecondaryODE, t_FieldSecondaryODE, FieldSecondaryODE);
      PyObject *t_FieldSecondaryODE::wrap_Object(const FieldSecondaryODE& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSecondaryODE::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSecondaryODE *self = (t_FieldSecondaryODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSecondaryODE::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSecondaryODE::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSecondaryODE *self = (t_FieldSecondaryODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSecondaryODE::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSecondaryODE), &PY_TYPE_DEF(FieldSecondaryODE), module, "FieldSecondaryODE", 0);
      }

      void t_FieldSecondaryODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSecondaryODE), "class_", make_descriptor(FieldSecondaryODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSecondaryODE), "wrapfn_", make_descriptor(t_FieldSecondaryODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSecondaryODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSecondaryODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSecondaryODE::initializeClass, 1)))
          return NULL;
        return t_FieldSecondaryODE::wrap_Object(FieldSecondaryODE(((t_FieldSecondaryODE *) arg)->object.this$));
      }
      static PyObject *t_FieldSecondaryODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSecondaryODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSecondaryODE_of_(t_FieldSecondaryODE *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldSecondaryODE_computeDerivatives(t_FieldSecondaryODE *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;
        JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
        PyTypeObject **p3;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1, a2, a3));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FieldSecondaryODE_getDimension(t_FieldSecondaryODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldSecondaryODE_init(t_FieldSecondaryODE *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;

        if (!parseArgs(args, "K[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldSecondaryODE_get__parameters_(t_FieldSecondaryODE *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldSecondaryODE_get__dimension(t_FieldSecondaryODE *self, void *data)
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
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AdaptableInterval::class$ = NULL;
        jmethodID *AdaptableInterval::mids$ = NULL;
        bool AdaptableInterval::live$ = false;

        jclass AdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_b443ba1cc794b916] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AdaptableInterval::currentInterval(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_b443ba1cc794b916], a0.this$);
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
        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg);

        static PyMethodDef t_AdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_AdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptableInterval)[] = {
          { Py_tp_methods, t_AdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdaptableInterval, t_AdaptableInterval, AdaptableInterval);

        void t_AdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptableInterval), &PY_TYPE_DEF(AdaptableInterval), module, "AdaptableInterval", 0);
        }

        void t_AdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "class_", make_descriptor(AdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "wrapfn_", make_descriptor(t_AdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_AdaptableInterval::wrap_Object(AdaptableInterval(((t_AdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *IntersectionAlgorithm::class$ = NULL;
        jmethodID *IntersectionAlgorithm::mids$ = NULL;
        bool IntersectionAlgorithm::live$ = false;

        jclass IntersectionAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/IntersectionAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAlgorithmId_65c2eab2e30f9d2d] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_82f92590f4247da1] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_5c14acfe95406f7d] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_1feab13663326a32] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::api::AlgorithmId IntersectionAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_65c2eab2e30f9d2d]));
        }

        jdouble IntersectionAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_82f92590f4247da1], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IntersectionAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_5c14acfe95406f7d], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IntersectionAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_1feab13663326a32], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace intersection {
        static PyObject *t_IntersectionAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IntersectionAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IntersectionAlgorithm_getAlgorithmId(t_IntersectionAlgorithm *self);
        static PyObject *t_IntersectionAlgorithm_getElevation(t_IntersectionAlgorithm *self, PyObject *args);
        static PyObject *t_IntersectionAlgorithm_intersection(t_IntersectionAlgorithm *self, PyObject *args);
        static PyObject *t_IntersectionAlgorithm_refineIntersection(t_IntersectionAlgorithm *self, PyObject *args);
        static PyObject *t_IntersectionAlgorithm_get__algorithmId(t_IntersectionAlgorithm *self, void *data);
        static PyGetSetDef t_IntersectionAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_IntersectionAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IntersectionAlgorithm__methods_[] = {
          DECLARE_METHOD(t_IntersectionAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntersectionAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntersectionAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_IntersectionAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_IntersectionAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_IntersectionAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IntersectionAlgorithm)[] = {
          { Py_tp_methods, t_IntersectionAlgorithm__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_IntersectionAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IntersectionAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IntersectionAlgorithm, t_IntersectionAlgorithm, IntersectionAlgorithm);

        void t_IntersectionAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(IntersectionAlgorithm), &PY_TYPE_DEF(IntersectionAlgorithm), module, "IntersectionAlgorithm", 0);
        }

        void t_IntersectionAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntersectionAlgorithm), "class_", make_descriptor(IntersectionAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntersectionAlgorithm), "wrapfn_", make_descriptor(t_IntersectionAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntersectionAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IntersectionAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IntersectionAlgorithm::initializeClass, 1)))
            return NULL;
          return t_IntersectionAlgorithm::wrap_Object(IntersectionAlgorithm(((t_IntersectionAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_IntersectionAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IntersectionAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_IntersectionAlgorithm_getAlgorithmId(t_IntersectionAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_IntersectionAlgorithm_getElevation(t_IntersectionAlgorithm *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", args);
          return NULL;
        }

        static PyObject *t_IntersectionAlgorithm_intersection(t_IntersectionAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_IntersectionAlgorithm_refineIntersection(t_IntersectionAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
          return NULL;
        }

        static PyObject *t_IntersectionAlgorithm_get__algorithmId(t_IntersectionAlgorithm *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *CombinedDerivatives::class$ = NULL;
        jmethodID *CombinedDerivatives::mids$ = NULL;
        bool CombinedDerivatives::live$ = false;

        jclass CombinedDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/CombinedDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_64100e41ba74de8f] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_getAdditionalDerivatives_be783177b060994b] = env->getMethodID(cls, "getAdditionalDerivatives", "()[D");
            mids$[mid_getMainStateDerivativesIncrements_be783177b060994b] = env->getMethodID(cls, "getMainStateDerivativesIncrements", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CombinedDerivatives::CombinedDerivatives(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64100e41ba74de8f, a0.this$, a1.this$)) {}

        JArray< jdouble > CombinedDerivatives::getAdditionalDerivatives() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivatives_be783177b060994b]));
        }

        JArray< jdouble > CombinedDerivatives::getMainStateDerivativesIncrements() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMainStateDerivativesIncrements_be783177b060994b]));
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
        static PyObject *t_CombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CombinedDerivatives_init_(t_CombinedDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CombinedDerivatives_getAdditionalDerivatives(t_CombinedDerivatives *self);
        static PyObject *t_CombinedDerivatives_getMainStateDerivativesIncrements(t_CombinedDerivatives *self);
        static PyObject *t_CombinedDerivatives_get__additionalDerivatives(t_CombinedDerivatives *self, void *data);
        static PyObject *t_CombinedDerivatives_get__mainStateDerivativesIncrements(t_CombinedDerivatives *self, void *data);
        static PyGetSetDef t_CombinedDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_CombinedDerivatives, additionalDerivatives),
          DECLARE_GET_FIELD(t_CombinedDerivatives, mainStateDerivativesIncrements),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CombinedDerivatives__methods_[] = {
          DECLARE_METHOD(t_CombinedDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CombinedDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CombinedDerivatives, getAdditionalDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_CombinedDerivatives, getMainStateDerivativesIncrements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CombinedDerivatives)[] = {
          { Py_tp_methods, t_CombinedDerivatives__methods_ },
          { Py_tp_init, (void *) t_CombinedDerivatives_init_ },
          { Py_tp_getset, t_CombinedDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CombinedDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CombinedDerivatives, t_CombinedDerivatives, CombinedDerivatives);

        void t_CombinedDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(CombinedDerivatives), &PY_TYPE_DEF(CombinedDerivatives), module, "CombinedDerivatives", 0);
        }

        void t_CombinedDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "class_", make_descriptor(CombinedDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "wrapfn_", make_descriptor(t_CombinedDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CombinedDerivatives::initializeClass, 1)))
            return NULL;
          return t_CombinedDerivatives::wrap_Object(CombinedDerivatives(((t_CombinedDerivatives *) arg)->object.this$));
        }
        static PyObject *t_CombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CombinedDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CombinedDerivatives_init_(t_CombinedDerivatives *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          CombinedDerivatives object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = CombinedDerivatives(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CombinedDerivatives_getAdditionalDerivatives(t_CombinedDerivatives *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivatives());
          return result.wrap();
        }

        static PyObject *t_CombinedDerivatives_getMainStateDerivativesIncrements(t_CombinedDerivatives *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMainStateDerivativesIncrements());
          return result.wrap();
        }

        static PyObject *t_CombinedDerivatives_get__additionalDerivatives(t_CombinedDerivatives *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivatives());
          return value.wrap();
        }

        static PyObject *t_CombinedDerivatives_get__mainStateDerivativesIncrements(t_CombinedDerivatives *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMainStateDerivativesIncrements());
          return value.wrap();
        }
      }
    }
  }
}
