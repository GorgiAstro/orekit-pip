#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2DFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/util/Locale.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2DFormat.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/text/FieldPosition.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Vector2DFormat::class$ = NULL;
          jmethodID *Vector2DFormat::mids$ = NULL;
          bool Vector2DFormat::live$ = false;

          jclass Vector2DFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Vector2DFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_695a782f9c7823f6] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_de8316969b81209c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_3420ce131d6f9e7d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_d63c028b54a2ec6c] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector2DFormat_ccb08435455f7a35] = env->getStaticMethodID(cls, "getVector2DFormat", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2DFormat;");
              mids$[mid_getVector2DFormat_6bf2e0b65b9c1779] = env->getStaticMethodID(cls, "getVector2DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/twod/Vector2DFormat;");
              mids$[mid_parse_0494dc1a6378cd42] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_parse_1fed149f6d69ecad] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector2DFormat::Vector2DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          Vector2DFormat::Vector2DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_695a782f9c7823f6, a0.this$)) {}

          Vector2DFormat::Vector2DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_de8316969b81209c, a0.this$, a1.this$, a2.this$)) {}

          Vector2DFormat::Vector2DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_3420ce131d6f9e7d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::StringBuffer Vector2DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_d63c028b54a2ec6c], a0.this$, a1.this$, a2.this$));
          }

          Vector2DFormat Vector2DFormat::getVector2DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector2DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector2DFormat_ccb08435455f7a35]));
          }

          Vector2DFormat Vector2DFormat::getVector2DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector2DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector2DFormat_6bf2e0b65b9c1779], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Vector2DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_parse_0494dc1a6378cd42], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Vector2DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_parse_1fed149f6d69ecad], a0.this$, a1.this$));
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
        namespace twod {
          static PyObject *t_Vector2DFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2DFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2DFormat_of_(t_Vector2DFormat *self, PyObject *args);
          static int t_Vector2DFormat_init_(t_Vector2DFormat *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector2DFormat_format(t_Vector2DFormat *self, PyObject *args);
          static PyObject *t_Vector2DFormat_getVector2DFormat(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2DFormat_parse(t_Vector2DFormat *self, PyObject *args);
          static PyObject *t_Vector2DFormat_get__vector2DFormat(t_Vector2DFormat *self, void *data);
          static PyObject *t_Vector2DFormat_get__parameters_(t_Vector2DFormat *self, void *data);
          static PyGetSetDef t_Vector2DFormat__fields_[] = {
            DECLARE_GET_FIELD(t_Vector2DFormat, vector2DFormat),
            DECLARE_GET_FIELD(t_Vector2DFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector2DFormat__methods_[] = {
            DECLARE_METHOD(t_Vector2DFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_Vector2DFormat, format, METH_VARARGS),
            DECLARE_METHOD(t_Vector2DFormat, getVector2DFormat, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector2DFormat)[] = {
            { Py_tp_methods, t_Vector2DFormat__methods_ },
            { Py_tp_init, (void *) t_Vector2DFormat_init_ },
            { Py_tp_getset, t_Vector2DFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector2DFormat)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::VectorFormat),
            NULL
          };

          DEFINE_TYPE(Vector2DFormat, t_Vector2DFormat, Vector2DFormat);
          PyObject *t_Vector2DFormat::wrap_Object(const Vector2DFormat& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector2DFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector2DFormat *self = (t_Vector2DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Vector2DFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector2DFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector2DFormat *self = (t_Vector2DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Vector2DFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector2DFormat), &PY_TYPE_DEF(Vector2DFormat), module, "Vector2DFormat", 0);
          }

          void t_Vector2DFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "class_", make_descriptor(Vector2DFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "wrapfn_", make_descriptor(t_Vector2DFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vector2DFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector2DFormat::initializeClass, 1)))
              return NULL;
            return t_Vector2DFormat::wrap_Object(Vector2DFormat(((t_Vector2DFormat *) arg)->object.this$));
          }
          static PyObject *t_Vector2DFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector2DFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vector2DFormat_of_(t_Vector2DFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Vector2DFormat_init_(t_Vector2DFormat *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector2DFormat object((jobject) NULL);

                INT_CALL(object = Vector2DFormat());
                self->object = object;
                self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
                break;
              }
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  INT_CALL(object = Vector2DFormat(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "sss", &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector2DFormat(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::text::NumberFormat a3((jobject) NULL);
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector2DFormat(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
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

          static PyObject *t_Vector2DFormat_format(t_Vector2DFormat *self, PyObject *args)
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

            return callSuper(PY_TYPE(Vector2DFormat), (PyObject *) self, "format", args, 2);
          }

          static PyObject *t_Vector2DFormat_getVector2DFormat(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector2DFormat result((jobject) NULL);
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2DFormat::getVector2DFormat());
                return t_Vector2DFormat::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::util::Locale a0((jobject) NULL);
                Vector2DFormat result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2DFormat::getVector2DFormat(a0));
                  return t_Vector2DFormat::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getVector2DFormat", args);
            return NULL;
          }

          static PyObject *t_Vector2DFormat_parse(t_Vector2DFormat *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::text::ParsePosition a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector2DFormat), (PyObject *) self, "parse", args, 2);
          }
          static PyObject *t_Vector2DFormat_get__parameters_(t_Vector2DFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Vector2DFormat_get__vector2DFormat(t_Vector2DFormat *self, void *data)
          {
            Vector2DFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector2DFormat());
            return t_Vector2DFormat::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
            mids$[mid_finish_2b88003f931f70a7] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_2b88003f931f70a7] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_init_703918df646bd2ae] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void OrekitFixedStepHandler::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_2b88003f931f70a7], a0.this$);
        }

        void OrekitFixedStepHandler::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_2b88003f931f70a7], a0.this$);
        }

        void OrekitFixedStepHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_703918df646bd2ae], a0.this$, a1.this$, a2);
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
#include "org/orekit/frames/AbstractFrames.h"
#include "org/orekit/time/TimeScales.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *AbstractFrames::class$ = NULL;
      jmethodID *AbstractFrames::mids$ = NULL;
      bool AbstractFrames::live$ = false;

      jclass AbstractFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/AbstractFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2e8e53c66e9d36c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)V");
          mids$[mid_buildUncachedITRF_d03d9d841d2585cb] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getCIRF_7a43fbb334938fb6] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_238e1a1a48ce9b9b] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEcliptic_951ab15b750ec500] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_1d8cb946d8760b58] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_c8fe21bcdac65bf6] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_e0bf161d9af50163] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_7a43fbb334938fb6] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_c8fe21bcdac65bf6] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_7a43fbb334938fb6] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_604147dabe0b6681] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_7a43fbb334938fb6] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_f41281a5e34c0279] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_e0bf161d9af50163] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_7a43fbb334938fb6] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_238e1a1a48ce9b9b] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_f41281a5e34c0279] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_7a43fbb334938fb6] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_e0bf161d9af50163] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_7a43fbb334938fb6] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_238e1a1a48ce9b9b] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTimeScales_5912acf3bafa785f] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFrames::AbstractFrames(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2e8e53c66e9d36c4, a0.this$, a1.this$)) {}

      ::org::orekit::frames::Frame AbstractFrames::buildUncachedITRF(const ::org::orekit::time::UT1Scale & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_buildUncachedITRF_d03d9d841d2585cb], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getCIRF_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getEME2000() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getEME2000_238e1a1a48ce9b9b]));
      }

      ::org::orekit::frames::Frame AbstractFrames::getEcliptic(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEcliptic_951ab15b750ec500], a0.this$));
      }

      ::org::orekit::frames::Frame AbstractFrames::getFrame(const ::org::orekit::frames::Predefined & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_1d8cb946d8760b58], a0.this$));
      }

      ::org::orekit::frames::Frame AbstractFrames::getGCRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getGCRF_c8fe21bcdac65bf6]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getGTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_e0bf161d9af50163], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::Frame AbstractFrames::getICRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getICRF_c8fe21bcdac65bf6]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRF_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF AbstractFrames::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2) const
      {
        return ::org::orekit::frames::VersionedITRF(env->callObjectMethod(this$, mids$[mid_getITRF_604147dabe0b6681], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRFEquinox_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getMOD(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_f41281a5e34c0279], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getMOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_e0bf161d9af50163], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getPZ9011_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTEME() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTEME_238e1a1a48ce9b9b]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTIRF(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_f41281a5e34c0279], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_e0bf161d9af50163], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getVeis1950() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getVeis1950_238e1a1a48ce9b9b]));
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
      static PyObject *t_AbstractFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractFrames_init_(t_AbstractFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractFrames_buildUncachedITRF(t_AbstractFrames *self, PyObject *arg);
      static PyObject *t_AbstractFrames_getCIRF(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getEME2000(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getEcliptic(t_AbstractFrames *self, PyObject *arg);
      static PyObject *t_AbstractFrames_getFrame(t_AbstractFrames *self, PyObject *arg);
      static PyObject *t_AbstractFrames_getGCRF(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getGTOD(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getICRF(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getITRF(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getITRFEquinox(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getMOD(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getPZ9011(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getTEME(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getTIRF(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getTOD(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getVeis1950(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_get__eME2000(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__gCRF(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__iCRF(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__tEME(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__veis1950(t_AbstractFrames *self, void *data);
      static PyGetSetDef t_AbstractFrames__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFrames, eME2000),
        DECLARE_GET_FIELD(t_AbstractFrames, gCRF),
        DECLARE_GET_FIELD(t_AbstractFrames, iCRF),
        DECLARE_GET_FIELD(t_AbstractFrames, tEME),
        DECLARE_GET_FIELD(t_AbstractFrames, veis1950),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFrames__methods_[] = {
        DECLARE_METHOD(t_AbstractFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFrames, buildUncachedITRF, METH_O),
        DECLARE_METHOD(t_AbstractFrames, getCIRF, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getEME2000, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getEcliptic, METH_O),
        DECLARE_METHOD(t_AbstractFrames, getFrame, METH_O),
        DECLARE_METHOD(t_AbstractFrames, getGCRF, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getGTOD, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getICRF, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getITRF, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getITRFEquinox, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getMOD, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getPZ9011, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getTEME, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getTIRF, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getTOD, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getVeis1950, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFrames)[] = {
        { Py_tp_methods, t_AbstractFrames__methods_ },
        { Py_tp_init, (void *) t_AbstractFrames_init_ },
        { Py_tp_getset, t_AbstractFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFrames)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFrames, t_AbstractFrames, AbstractFrames);

      void t_AbstractFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFrames), &PY_TYPE_DEF(AbstractFrames), module, "AbstractFrames", 0);
      }

      void t_AbstractFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFrames), "class_", make_descriptor(AbstractFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFrames), "wrapfn_", make_descriptor(t_AbstractFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFrames), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFrames::initializeClass, 1)))
          return NULL;
        return t_AbstractFrames::wrap_Object(AbstractFrames(((t_AbstractFrames *) arg)->object.this$));
      }
      static PyObject *t_AbstractFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractFrames_init_(t_AbstractFrames *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::java::util::function::Supplier a1((jobject) NULL);
        PyTypeObject **p1;
        AbstractFrames object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::TimeScales::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
        {
          INT_CALL(object = AbstractFrames(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractFrames_buildUncachedITRF(t_AbstractFrames *self, PyObject *arg)
      {
        ::org::orekit::time::UT1Scale a0((jobject) NULL);
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UT1Scale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.buildUncachedITRF(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "buildUncachedITRF", arg);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getCIRF(t_AbstractFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getCIRF(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCIRF", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getEME2000(t_AbstractFrames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getEcliptic(t_AbstractFrames *self, PyObject *arg)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
        {
          OBJ_CALL(result = self->object.getEcliptic(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEcliptic", arg);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getFrame(t_AbstractFrames *self, PyObject *arg)
      {
        ::org::orekit::frames::Predefined a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::frames::Predefined::initializeClass, &a0, &p0, ::org::orekit::frames::t_Predefined::parameters_))
        {
          OBJ_CALL(result = self->object.getFrame(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrame", arg);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getGCRF(t_AbstractFrames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getGTOD(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getGTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getGTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGTOD", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getICRF(t_AbstractFrames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getITRF(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getITRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::frames::VersionedITRF result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::frames::t_ITRFVersion::parameters_, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getITRF(a0, a1, a2));
              return ::org::orekit::frames::t_VersionedITRF::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getITRF", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getITRFEquinox(t_AbstractFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getITRFEquinox(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getITRFEquinox", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getMOD(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getMOD", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getPZ9011(t_AbstractFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPZ9011(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPZ9011", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getTEME(t_AbstractFrames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getTIRF(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getTIRF(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getTIRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTIRF", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getTOD(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTOD", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getVeis1950(t_AbstractFrames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_get__eME2000(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__gCRF(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__iCRF(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__tEME(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__veis1950(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockOneWayGNSSRangeModifier::mids$ = NULL;
          bool RelativisticJ2ClockOneWayGNSSRangeModifier::live$ = false;

          jclass RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockOneWayGNSSRangeModifier::RelativisticJ2ClockOneWayGNSSRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void RelativisticJ2ClockOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier, t_RelativisticJ2ClockOneWayGNSSRangeModifier, RelativisticJ2ClockOneWayGNSSRangeModifier);

          void t_RelativisticJ2ClockOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), &PY_TYPE_DEF(RelativisticJ2ClockOneWayGNSSRangeModifier), module, "RelativisticJ2ClockOneWayGNSSRangeModifier", 0);
          }

          void t_RelativisticJ2ClockOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "class_", make_descriptor(RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockOneWayGNSSRangeModifier::wrap_Object(RelativisticJ2ClockOneWayGNSSRangeModifier(((t_RelativisticJ2ClockOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockOneWayGNSSRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ManBasis::class$ = NULL;
              jmethodID *ManBasis::mids$ = NULL;
              bool ManBasis::live$ = false;
              ManBasis *ManBasis::ANTICIPATED = NULL;
              ManBasis *ManBasis::CANDIDATE = NULL;
              ManBasis *ManBasis::DETERMINED_OD = NULL;
              ManBasis *ManBasis::DETERMINED_TLM = NULL;
              ManBasis *ManBasis::OTHER = NULL;
              ManBasis *ManBasis::PLANNED = NULL;
              ManBasis *ManBasis::SIMULATED = NULL;

              jclass ManBasis::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ManBasis");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_63c4d40e73adb828] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");
                  mids$[mid_values_cf78199c7f7cbda4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANTICIPATED = new ManBasis(env->getStaticObjectField(cls, "ANTICIPATED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  CANDIDATE = new ManBasis(env->getStaticObjectField(cls, "CANDIDATE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  DETERMINED_OD = new ManBasis(env->getStaticObjectField(cls, "DETERMINED_OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  DETERMINED_TLM = new ManBasis(env->getStaticObjectField(cls, "DETERMINED_TLM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  OTHER = new ManBasis(env->getStaticObjectField(cls, "OTHER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  PLANNED = new ManBasis(env->getStaticObjectField(cls, "PLANNED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  SIMULATED = new ManBasis(env->getStaticObjectField(cls, "SIMULATED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ManBasis ManBasis::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManBasis(env->callStaticObjectMethod(cls, mids$[mid_valueOf_63c4d40e73adb828], a0.this$));
              }

              JArray< ManBasis > ManBasis::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManBasis >(env->callStaticObjectMethod(cls, mids$[mid_values_cf78199c7f7cbda4]));
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
              static PyObject *t_ManBasis_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManBasis_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManBasis_of_(t_ManBasis *self, PyObject *args);
              static PyObject *t_ManBasis_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManBasis_values(PyTypeObject *type);
              static PyObject *t_ManBasis_get__parameters_(t_ManBasis *self, void *data);
              static PyGetSetDef t_ManBasis__fields_[] = {
                DECLARE_GET_FIELD(t_ManBasis, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManBasis__methods_[] = {
                DECLARE_METHOD(t_ManBasis, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManBasis, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManBasis)[] = {
                { Py_tp_methods, t_ManBasis__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManBasis__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManBasis)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManBasis, t_ManBasis, ManBasis);
              PyObject *t_ManBasis::wrap_Object(const ManBasis& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManBasis::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManBasis *self = (t_ManBasis *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManBasis::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManBasis::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManBasis *self = (t_ManBasis *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManBasis::install(PyObject *module)
              {
                installType(&PY_TYPE(ManBasis), &PY_TYPE_DEF(ManBasis), module, "ManBasis", 0);
              }

              void t_ManBasis::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "class_", make_descriptor(ManBasis::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "wrapfn_", make_descriptor(t_ManBasis::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManBasis::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "ANTICIPATED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::ANTICIPATED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "CANDIDATE", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::CANDIDATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "DETERMINED_OD", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::DETERMINED_OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "DETERMINED_TLM", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::DETERMINED_TLM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "OTHER", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::OTHER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "PLANNED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::PLANNED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "SIMULATED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::SIMULATED)));
              }

              static PyObject *t_ManBasis_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManBasis::initializeClass, 1)))
                  return NULL;
                return t_ManBasis::wrap_Object(ManBasis(((t_ManBasis *) arg)->object.this$));
              }
              static PyObject *t_ManBasis_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManBasis::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManBasis_of_(t_ManBasis *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManBasis_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManBasis result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::valueOf(a0));
                  return t_ManBasis::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManBasis_values(PyTypeObject *type)
              {
                JArray< ManBasis > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::values());
                return JArray<jobject>(result.this$).wrap(t_ManBasis::wrap_jobject);
              }
              static PyObject *t_ManBasis_get__parameters_(t_ManBasis *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OnOff::class$ = NULL;
          jmethodID *OnOff::mids$ = NULL;
          bool OnOff::live$ = false;
          OnOff *OnOff::OFF = NULL;
          OnOff *OnOff::ON = NULL;

          jclass OnOff::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OnOff");

              mids$ = new jmethodID[max_mid];
              mids$[mid_isOn_e470b6d9e0d979db] = env->getMethodID(cls, "isOn", "()Z");
              mids$[mid_valueOf_407ee23562aadd5f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OnOff;");
              mids$[mid_values_8ef873722278102a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OnOff;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              OFF = new OnOff(env->getStaticObjectField(cls, "OFF", "Lorg/orekit/files/ccsds/definitions/OnOff;"));
              ON = new OnOff(env->getStaticObjectField(cls, "ON", "Lorg/orekit/files/ccsds/definitions/OnOff;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean OnOff::isOn() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isOn_e470b6d9e0d979db]);
          }

          OnOff OnOff::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OnOff(env->callStaticObjectMethod(cls, mids$[mid_valueOf_407ee23562aadd5f], a0.this$));
          }

          JArray< OnOff > OnOff::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OnOff >(env->callStaticObjectMethod(cls, mids$[mid_values_8ef873722278102a]));
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
          static PyObject *t_OnOff_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnOff_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnOff_of_(t_OnOff *self, PyObject *args);
          static PyObject *t_OnOff_isOn(t_OnOff *self);
          static PyObject *t_OnOff_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OnOff_values(PyTypeObject *type);
          static PyObject *t_OnOff_get__on(t_OnOff *self, void *data);
          static PyObject *t_OnOff_get__parameters_(t_OnOff *self, void *data);
          static PyGetSetDef t_OnOff__fields_[] = {
            DECLARE_GET_FIELD(t_OnOff, on),
            DECLARE_GET_FIELD(t_OnOff, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnOff__methods_[] = {
            DECLARE_METHOD(t_OnOff, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnOff, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnOff, of_, METH_VARARGS),
            DECLARE_METHOD(t_OnOff, isOn, METH_NOARGS),
            DECLARE_METHOD(t_OnOff, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OnOff, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnOff)[] = {
            { Py_tp_methods, t_OnOff__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OnOff__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnOff)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OnOff, t_OnOff, OnOff);
          PyObject *t_OnOff::wrap_Object(const OnOff& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OnOff::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OnOff *self = (t_OnOff *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OnOff::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OnOff::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OnOff *self = (t_OnOff *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OnOff::install(PyObject *module)
          {
            installType(&PY_TYPE(OnOff), &PY_TYPE_DEF(OnOff), module, "OnOff", 0);
          }

          void t_OnOff::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "class_", make_descriptor(OnOff::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "wrapfn_", make_descriptor(t_OnOff::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "boxfn_", make_descriptor(boxObject));
            env->getClass(OnOff::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "OFF", make_descriptor(t_OnOff::wrap_Object(*OnOff::OFF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "ON", make_descriptor(t_OnOff::wrap_Object(*OnOff::ON)));
          }

          static PyObject *t_OnOff_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnOff::initializeClass, 1)))
              return NULL;
            return t_OnOff::wrap_Object(OnOff(((t_OnOff *) arg)->object.this$));
          }
          static PyObject *t_OnOff_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnOff::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OnOff_of_(t_OnOff *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OnOff_isOn(t_OnOff *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isOn());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OnOff_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OnOff result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OnOff::valueOf(a0));
              return t_OnOff::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OnOff_values(PyTypeObject *type)
          {
            JArray< OnOff > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OnOff::values());
            return JArray<jobject>(result.this$).wrap(t_OnOff::wrap_jobject);
          }
          static PyObject *t_OnOff_get__parameters_(t_OnOff *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OnOff_get__on(t_OnOff *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isOn());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$PopulationSize.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
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
                mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getPopulationSize_f2f64475e4580546] = env->getMethodID(cls, "getPopulationSize", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer$PopulationSize::CMAESOptimizer$PopulationSize(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

            jint CMAESOptimizer$PopulationSize::getPopulationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getPopulationSize_f2f64475e4580546]);
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
#include "org/orekit/gnss/rflink/gps/SubFrame4D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4D::class$ = NULL;
          jmethodID *SubFrame4D::mids$ = NULL;
          bool SubFrame4D::live$ = false;

          jclass SubFrame4D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getA0_456d9a2f64d6b28d] = env->getMethodID(cls, "getA0", "()D");
              mids$[mid_getA1_456d9a2f64d6b28d] = env->getMethodID(cls, "getA1", "()D");
              mids$[mid_getAlpha0_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlpha0", "()D");
              mids$[mid_getAlpha1_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlpha1", "()D");
              mids$[mid_getAlpha2_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlpha2", "()D");
              mids$[mid_getAlpha3_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlpha3", "()D");
              mids$[mid_getBeta0_456d9a2f64d6b28d] = env->getMethodID(cls, "getBeta0", "()D");
              mids$[mid_getBeta1_456d9a2f64d6b28d] = env->getMethodID(cls, "getBeta1", "()D");
              mids$[mid_getBeta2_456d9a2f64d6b28d] = env->getMethodID(cls, "getBeta2", "()D");
              mids$[mid_getBeta3_456d9a2f64d6b28d] = env->getMethodID(cls, "getBeta3", "()D");
              mids$[mid_getDeltaTLs_f2f64475e4580546] = env->getMethodID(cls, "getDeltaTLs", "()I");
              mids$[mid_getDeltaTLsf_f2f64475e4580546] = env->getMethodID(cls, "getDeltaTLsf", "()I");
              mids$[mid_getDn_f2f64475e4580546] = env->getMethodID(cls, "getDn", "()I");
              mids$[mid_getReserved10_f2f64475e4580546] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getTot_f2f64475e4580546] = env->getMethodID(cls, "getTot", "()I");
              mids$[mid_getWeekNumberLsf_f2f64475e4580546] = env->getMethodID(cls, "getWeekNumberLsf", "()I");
              mids$[mid_getWeekNumberT_f2f64475e4580546] = env->getMethodID(cls, "getWeekNumberT", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame4D::getA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA0_456d9a2f64d6b28d]);
          }

          jdouble SubFrame4D::getA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA1_456d9a2f64d6b28d]);
          }

          jdouble SubFrame4D::getAlpha0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha0_456d9a2f64d6b28d]);
          }

          jdouble SubFrame4D::getAlpha1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha1_456d9a2f64d6b28d]);
          }

          jdouble SubFrame4D::getAlpha2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha2_456d9a2f64d6b28d]);
          }

          jdouble SubFrame4D::getAlpha3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha3_456d9a2f64d6b28d]);
          }

          jdouble SubFrame4D::getBeta0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta0_456d9a2f64d6b28d]);
          }

          jdouble SubFrame4D::getBeta1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta1_456d9a2f64d6b28d]);
          }

          jdouble SubFrame4D::getBeta2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta2_456d9a2f64d6b28d]);
          }

          jdouble SubFrame4D::getBeta3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta3_456d9a2f64d6b28d]);
          }

          jint SubFrame4D::getDeltaTLs() const
          {
            return env->callIntMethod(this$, mids$[mid_getDeltaTLs_f2f64475e4580546]);
          }

          jint SubFrame4D::getDeltaTLsf() const
          {
            return env->callIntMethod(this$, mids$[mid_getDeltaTLsf_f2f64475e4580546]);
          }

          jint SubFrame4D::getDn() const
          {
            return env->callIntMethod(this$, mids$[mid_getDn_f2f64475e4580546]);
          }

          jint SubFrame4D::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_f2f64475e4580546]);
          }

          jint SubFrame4D::getTot() const
          {
            return env->callIntMethod(this$, mids$[mid_getTot_f2f64475e4580546]);
          }

          jint SubFrame4D::getWeekNumberLsf() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumberLsf_f2f64475e4580546]);
          }

          jint SubFrame4D::getWeekNumberT() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumberT_f2f64475e4580546]);
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
          static PyObject *t_SubFrame4D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4D_getA0(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getA1(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha0(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha1(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha2(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha3(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta0(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta1(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta2(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta3(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getDeltaTLs(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getDeltaTLsf(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getDn(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getReserved10(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getTot(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getWeekNumberLsf(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getWeekNumberT(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_get__a0(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__a1(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha0(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha1(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha2(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha3(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta0(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta1(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta2(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta3(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__deltaTLs(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__deltaTLsf(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__dn(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__reserved10(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__tot(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__weekNumberLsf(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__weekNumberT(t_SubFrame4D *self, void *data);
          static PyGetSetDef t_SubFrame4D__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4D, a0),
            DECLARE_GET_FIELD(t_SubFrame4D, a1),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha0),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha1),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha2),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha3),
            DECLARE_GET_FIELD(t_SubFrame4D, beta0),
            DECLARE_GET_FIELD(t_SubFrame4D, beta1),
            DECLARE_GET_FIELD(t_SubFrame4D, beta2),
            DECLARE_GET_FIELD(t_SubFrame4D, beta3),
            DECLARE_GET_FIELD(t_SubFrame4D, deltaTLs),
            DECLARE_GET_FIELD(t_SubFrame4D, deltaTLsf),
            DECLARE_GET_FIELD(t_SubFrame4D, dn),
            DECLARE_GET_FIELD(t_SubFrame4D, reserved10),
            DECLARE_GET_FIELD(t_SubFrame4D, tot),
            DECLARE_GET_FIELD(t_SubFrame4D, weekNumberLsf),
            DECLARE_GET_FIELD(t_SubFrame4D, weekNumberT),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4D__methods_[] = {
            DECLARE_METHOD(t_SubFrame4D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4D, getA0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getA1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha2, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha3, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta2, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta3, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getDeltaTLs, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getDeltaTLsf, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getDn, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getReserved10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getTot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getWeekNumberLsf, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getWeekNumberT, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4D)[] = {
            { Py_tp_methods, t_SubFrame4D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4D)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4D, t_SubFrame4D, SubFrame4D);

          void t_SubFrame4D::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4D), &PY_TYPE_DEF(SubFrame4D), module, "SubFrame4D", 0);
          }

          void t_SubFrame4D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4D), "class_", make_descriptor(SubFrame4D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4D), "wrapfn_", make_descriptor(t_SubFrame4D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4D::initializeClass, 1)))
              return NULL;
            return t_SubFrame4D::wrap_Object(SubFrame4D(((t_SubFrame4D *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4D_getA0(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getA1(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha0(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha1(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha2(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha3(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha3());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta0(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta1(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta2(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta3(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta3());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getDeltaTLs(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDeltaTLs());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getDeltaTLsf(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDeltaTLsf());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getDn(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDn());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getReserved10(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getTot(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTot());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getWeekNumberLsf(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumberLsf());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getWeekNumberT(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumberT());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_get__a0(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__a1(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha0(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha1(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha2(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha3(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha3());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta0(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta1(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta2(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta3(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta3());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__deltaTLs(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDeltaTLs());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__deltaTLsf(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDeltaTLsf());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__dn(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDn());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__reserved10(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__tot(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTot());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__weekNumberLsf(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumberLsf());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__weekNumberT(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumberT());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/PythonIonosphericMappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *PythonIonosphericMappingFunction::class$ = NULL;
          jmethodID *PythonIonosphericMappingFunction::mids$ = NULL;
          bool PythonIonosphericMappingFunction::live$ = false;

          jclass PythonIonosphericMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/PythonIonosphericMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_mappingFactor_0ba5fed9597b693e] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_d3398190482814dc] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactor_T_d3398190482814dc] = env->getMethodID(cls, "mappingFactor_T", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIonosphericMappingFunction::PythonIonosphericMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonIonosphericMappingFunction::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonIonosphericMappingFunction::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonIonosphericMappingFunction::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonIonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonIonosphericMappingFunction_init_(t_PythonIonosphericMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIonosphericMappingFunction_finalize(t_PythonIonosphericMappingFunction *self);
          static PyObject *t_PythonIonosphericMappingFunction_pythonExtension(t_PythonIonosphericMappingFunction *self, PyObject *args);
          static jdouble JNICALL t_PythonIonosphericMappingFunction_mappingFactor0(JNIEnv *jenv, jobject jobj, jdouble a0);
          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor_T2(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonIonosphericMappingFunction_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIonosphericMappingFunction_get__self(t_PythonIonosphericMappingFunction *self, void *data);
          static PyGetSetDef t_PythonIonosphericMappingFunction__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIonosphericMappingFunction, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIonosphericMappingFunction__methods_[] = {
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIonosphericMappingFunction)[] = {
            { Py_tp_methods, t_PythonIonosphericMappingFunction__methods_ },
            { Py_tp_init, (void *) t_PythonIonosphericMappingFunction_init_ },
            { Py_tp_getset, t_PythonIonosphericMappingFunction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIonosphericMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonIonosphericMappingFunction, t_PythonIonosphericMappingFunction, PythonIonosphericMappingFunction);

          void t_PythonIonosphericMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIonosphericMappingFunction), &PY_TYPE_DEF(PythonIonosphericMappingFunction), module, "PythonIonosphericMappingFunction", 1);
          }

          void t_PythonIonosphericMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "class_", make_descriptor(PythonIonosphericMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "wrapfn_", make_descriptor(t_PythonIonosphericMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIonosphericMappingFunction::initializeClass);
            JNINativeMethod methods[] = {
              { "mappingFactor", "(D)D", (void *) t_PythonIonosphericMappingFunction_mappingFactor0 },
              { "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericMappingFunction_mappingFactor1 },
              { "mappingFactor_T", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericMappingFunction_mappingFactor_T2 },
              { "pythonDecRef", "()V", (void *) t_PythonIonosphericMappingFunction_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonIonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIonosphericMappingFunction::initializeClass, 1)))
              return NULL;
            return t_PythonIonosphericMappingFunction::wrap_Object(PythonIonosphericMappingFunction(((t_PythonIonosphericMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_PythonIonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIonosphericMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonIonosphericMappingFunction_init_(t_PythonIonosphericMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            PythonIonosphericMappingFunction object((jobject) NULL);

            INT_CALL(object = PythonIonosphericMappingFunction());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIonosphericMappingFunction_finalize(t_PythonIonosphericMappingFunction *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIonosphericMappingFunction_pythonExtension(t_PythonIonosphericMappingFunction *self, PyObject *args)
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

          static jdouble JNICALL t_PythonIonosphericMappingFunction_mappingFactor0(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor", "d", (double) a0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("mappingFactor", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactor", result);
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

          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor_T2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor_T", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactor_T", result);
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

          static void JNICALL t_PythonIonosphericMappingFunction_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIonosphericMappingFunction_get__self(t_PythonIonosphericMappingFunction *self, void *data)
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
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticFieldFactory$FieldModel::class$ = NULL;
        jmethodID *GeoMagneticFieldFactory$FieldModel::mids$ = NULL;
        bool GeoMagneticFieldFactory$FieldModel::live$ = false;
        GeoMagneticFieldFactory$FieldModel *GeoMagneticFieldFactory$FieldModel::IGRF = NULL;
        GeoMagneticFieldFactory$FieldModel *GeoMagneticFieldFactory$FieldModel::WMM = NULL;

        jclass GeoMagneticFieldFactory$FieldModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_481e459ccd75559f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;");
            mids$[mid_values_18f4f6baaf80b114] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            IGRF = new GeoMagneticFieldFactory$FieldModel(env->getStaticObjectField(cls, "IGRF", "Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;"));
            WMM = new GeoMagneticFieldFactory$FieldModel(env->getStaticObjectField(cls, "WMM", "Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticFieldFactory$FieldModel GeoMagneticFieldFactory$FieldModel::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return GeoMagneticFieldFactory$FieldModel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_481e459ccd75559f], a0.this$));
        }

        JArray< GeoMagneticFieldFactory$FieldModel > GeoMagneticFieldFactory$FieldModel::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< GeoMagneticFieldFactory$FieldModel >(env->callStaticObjectMethod(cls, mids$[mid_values_18f4f6baaf80b114]));
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
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_of_(t_GeoMagneticFieldFactory$FieldModel *self, PyObject *args);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_values(PyTypeObject *type);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_get__parameters_(t_GeoMagneticFieldFactory$FieldModel *self, void *data);
        static PyGetSetDef t_GeoMagneticFieldFactory$FieldModel__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticFieldFactory$FieldModel, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticFieldFactory$FieldModel__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, of_, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticFieldFactory$FieldModel)[] = {
          { Py_tp_methods, t_GeoMagneticFieldFactory$FieldModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GeoMagneticFieldFactory$FieldModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticFieldFactory$FieldModel)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(GeoMagneticFieldFactory$FieldModel, t_GeoMagneticFieldFactory$FieldModel, GeoMagneticFieldFactory$FieldModel);
        PyObject *t_GeoMagneticFieldFactory$FieldModel::wrap_Object(const GeoMagneticFieldFactory$FieldModel& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeoMagneticFieldFactory$FieldModel::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeoMagneticFieldFactory$FieldModel *self = (t_GeoMagneticFieldFactory$FieldModel *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GeoMagneticFieldFactory$FieldModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeoMagneticFieldFactory$FieldModel::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeoMagneticFieldFactory$FieldModel *self = (t_GeoMagneticFieldFactory$FieldModel *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GeoMagneticFieldFactory$FieldModel::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticFieldFactory$FieldModel), &PY_TYPE_DEF(GeoMagneticFieldFactory$FieldModel), module, "GeoMagneticFieldFactory$FieldModel", 0);
        }

        void t_GeoMagneticFieldFactory$FieldModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "class_", make_descriptor(GeoMagneticFieldFactory$FieldModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "wrapfn_", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "boxfn_", make_descriptor(boxObject));
          env->getClass(GeoMagneticFieldFactory$FieldModel::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "IGRF", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_Object(*GeoMagneticFieldFactory$FieldModel::IGRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "WMM", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_Object(*GeoMagneticFieldFactory$FieldModel::WMM)));
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticFieldFactory$FieldModel::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticFieldFactory$FieldModel::wrap_Object(GeoMagneticFieldFactory$FieldModel(((t_GeoMagneticFieldFactory$FieldModel *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticFieldFactory$FieldModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_of_(t_GeoMagneticFieldFactory$FieldModel *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          GeoMagneticFieldFactory$FieldModel result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::valueOf(a0));
            return t_GeoMagneticFieldFactory$FieldModel::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_values(PyTypeObject *type)
        {
          JArray< GeoMagneticFieldFactory$FieldModel > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::values());
          return JArray<jobject>(result.this$).wrap(t_GeoMagneticFieldFactory$FieldModel::wrap_jobject);
        }
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_get__parameters_(t_GeoMagneticFieldFactory$FieldModel *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/AbstractEopLoader.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *AbstractEopLoader::class$ = NULL;
      jmethodID *AbstractEopLoader::mids$ = NULL;
      bool AbstractEopLoader::live$ = false;

      jclass AbstractEopLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/AbstractEopLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2b8b2dff6b391082] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Ljava/util/function/Supplier;)V");
          mids$[mid_getUtc_63ac10047983bd43] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractEopLoader::AbstractEopLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::java::util::function::Supplier & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_2b8b2dff6b391082, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_AbstractEopLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractEopLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractEopLoader_init_(t_AbstractEopLoader *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_AbstractEopLoader__methods_[] = {
        DECLARE_METHOD(t_AbstractEopLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractEopLoader, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractEopLoader)[] = {
        { Py_tp_methods, t_AbstractEopLoader__methods_ },
        { Py_tp_init, (void *) t_AbstractEopLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractEopLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(AbstractEopLoader, t_AbstractEopLoader, AbstractEopLoader);

      void t_AbstractEopLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractEopLoader), &PY_TYPE_DEF(AbstractEopLoader), module, "AbstractEopLoader", 0);
      }

      void t_AbstractEopLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "class_", make_descriptor(AbstractEopLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "wrapfn_", make_descriptor(t_AbstractEopLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractEopLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractEopLoader::initializeClass, 1)))
          return NULL;
        return t_AbstractEopLoader::wrap_Object(AbstractEopLoader(((t_AbstractEopLoader *) arg)->object.this$));
      }
      static PyObject *t_AbstractEopLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractEopLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractEopLoader_init_(t_AbstractEopLoader *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
        ::java::util::function::Supplier a2((jobject) NULL);
        PyTypeObject **p2;
        AbstractEopLoader object((jobject) NULL);

        if (!parseArgs(args, "skK", ::org::orekit::data::DataProvidersManager::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &p2, ::java::util::function::t_Supplier::parameters_))
        {
          INT_CALL(object = AbstractEopLoader(a0, a1, a2));
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseralContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTTesseralContext::class$ = NULL;
            jmethodID *DSSTTesseralContext::mids$ = NULL;
            bool DSSTTesseralContext::live$ = false;

            jclass DSSTTesseralContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseralContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAx2oA_456d9a2f64d6b28d] = env->getMethodID(cls, "getAx2oA", "()D");
                mids$[mid_getBoA_456d9a2f64d6b28d] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_456d9a2f64d6b28d] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getChi_456d9a2f64d6b28d] = env->getMethodID(cls, "getChi", "()D");
                mids$[mid_getChi2_456d9a2f64d6b28d] = env->getMethodID(cls, "getChi2", "()D");
                mids$[mid_getCo2AB_456d9a2f64d6b28d] = env->getMethodID(cls, "getCo2AB", "()D");
                mids$[mid_getE2_456d9a2f64d6b28d] = env->getMethodID(cls, "getE2", "()D");
                mids$[mid_getMeanMotion_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMoa_456d9a2f64d6b28d] = env->getMethodID(cls, "getMoa", "()D");
                mids$[mid_getOoAB_456d9a2f64d6b28d] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getOrbitPeriod_456d9a2f64d6b28d] = env->getMethodID(cls, "getOrbitPeriod", "()D");
                mids$[mid_getRatio_456d9a2f64d6b28d] = env->getMethodID(cls, "getRatio", "()D");
                mids$[mid_getRoa_456d9a2f64d6b28d] = env->getMethodID(cls, "getRoa", "()D");
                mids$[mid_getTheta_456d9a2f64d6b28d] = env->getMethodID(cls, "getTheta", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble DSSTTesseralContext::getAx2oA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAx2oA_456d9a2f64d6b28d]);
            }

            jdouble DSSTTesseralContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_456d9a2f64d6b28d]);
            }

            jdouble DSSTTesseralContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_456d9a2f64d6b28d]);
            }

            jdouble DSSTTesseralContext::getChi() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChi_456d9a2f64d6b28d]);
            }

            jdouble DSSTTesseralContext::getChi2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChi2_456d9a2f64d6b28d]);
            }

            jdouble DSSTTesseralContext::getCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCo2AB_456d9a2f64d6b28d]);
            }

            jdouble DSSTTesseralContext::getE2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE2_456d9a2f64d6b28d]);
            }

            jdouble DSSTTesseralContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_456d9a2f64d6b28d]);
            }

            jdouble DSSTTesseralContext::getMoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMoa_456d9a2f64d6b28d]);
            }

            jdouble DSSTTesseralContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_456d9a2f64d6b28d]);
            }

            jdouble DSSTTesseralContext::getOrbitPeriod() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOrbitPeriod_456d9a2f64d6b28d]);
            }

            jdouble DSSTTesseralContext::getRatio() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRatio_456d9a2f64d6b28d]);
            }

            jdouble DSSTTesseralContext::getRoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRoa_456d9a2f64d6b28d]);
            }

            jdouble DSSTTesseralContext::getTheta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTheta_456d9a2f64d6b28d]);
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
          namespace forces {
            static PyObject *t_DSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseralContext_getAx2oA(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getBoA(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getBoABpo(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getChi(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getChi2(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getCo2AB(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getE2(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getMeanMotion(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getMoa(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getOoAB(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getOrbitPeriod(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getRatio(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getRoa(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getTheta(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_get__ax2oA(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__boA(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__boABpo(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__chi(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__chi2(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__co2AB(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__e2(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__meanMotion(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__moa(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__ooAB(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__orbitPeriod(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__ratio(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__roa(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__theta(t_DSSTTesseralContext *self, void *data);
            static PyGetSetDef t_DSSTTesseralContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ax2oA),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, boA),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, chi),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, chi2),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, co2AB),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, e2),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, moa),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, orbitPeriod),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ratio),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, roa),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, theta),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTTesseralContext__methods_[] = {
              DECLARE_METHOD(t_DSSTTesseralContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseralContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseralContext, getAx2oA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getChi, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getChi2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getE2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getMoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getOrbitPeriod, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getRatio, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getTheta, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTTesseralContext)[] = {
              { Py_tp_methods, t_DSSTTesseralContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTTesseralContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTTesseralContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTTesseralContext, t_DSSTTesseralContext, DSSTTesseralContext);

            void t_DSSTTesseralContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTTesseralContext), &PY_TYPE_DEF(DSSTTesseralContext), module, "DSSTTesseralContext", 0);
            }

            void t_DSSTTesseralContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "class_", make_descriptor(DSSTTesseralContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "wrapfn_", make_descriptor(t_DSSTTesseralContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTTesseralContext::initializeClass, 1)))
                return NULL;
              return t_DSSTTesseralContext::wrap_Object(DSSTTesseralContext(((t_DSSTTesseralContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTTesseralContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTTesseralContext_getAx2oA(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAx2oA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getBoA(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getBoABpo(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getChi(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChi());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getChi2(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChi2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getCo2AB(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getE2(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getMeanMotion(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getMoa(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getOoAB(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getOrbitPeriod(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOrbitPeriod());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getRatio(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRatio());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getRoa(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getTheta(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTheta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_get__ax2oA(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAx2oA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__boA(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__boABpo(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__chi(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChi());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__chi2(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChi2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__co2AB(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__e2(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__meanMotion(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__moa(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__ooAB(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__orbitPeriod(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOrbitPeriod());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__ratio(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRatio());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__roa(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__theta(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTheta());
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
#include "org/hipparchus/geometry/euclidean/oned/Vector1DFormat.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/util/Locale.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1DFormat.h"
#include "java/text/FieldPosition.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
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
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_695a782f9c7823f6] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_96073c87872b7a97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_5c4b42e4039e6fd8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_d63c028b54a2ec6c] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector1DFormat_986c40182243631f] = env->getStaticMethodID(cls, "getVector1DFormat", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1DFormat;");
              mids$[mid_getVector1DFormat_4e5ca528e097bfbd] = env->getStaticMethodID(cls, "getVector1DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/oned/Vector1DFormat;");
              mids$[mid_parse_7852a63a77946b05] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_parse_3b2799fbb949b57a] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector1DFormat::Vector1DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          Vector1DFormat::Vector1DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_695a782f9c7823f6, a0.this$)) {}

          Vector1DFormat::Vector1DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_96073c87872b7a97, a0.this$, a1.this$)) {}

          Vector1DFormat::Vector1DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_5c4b42e4039e6fd8, a0.this$, a1.this$, a2.this$)) {}

          ::java::lang::StringBuffer Vector1DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_d63c028b54a2ec6c], a0.this$, a1.this$, a2.this$));
          }

          Vector1DFormat Vector1DFormat::getVector1DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector1DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector1DFormat_986c40182243631f]));
          }

          Vector1DFormat Vector1DFormat::getVector1DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector1DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector1DFormat_4e5ca528e097bfbd], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Vector1DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_parse_7852a63a77946b05], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Vector1DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_parse_3b2799fbb949b57a], a0.this$, a1.this$));
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
            mids$[mid_init$_15e7459be7ec40d8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_dd8485a0eb2e2903] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_01c7d10e96d5cf94] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_01c7d10e96d5cf94] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_eca47cd3718291d4] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/GillFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillFieldIntegrator::GillFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_15e7459be7ec40d8, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > GillFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_dd8485a0eb2e2903]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > GillFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_01c7d10e96d5cf94]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > GillFieldIntegrator::getC() const
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
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "java/util/List.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$Meteo::class$ = NULL;
        jmethodID *CRD$Meteo::mids$ = NULL;
        bool CRD$Meteo::live$ = false;

        jclass CRD$Meteo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$Meteo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a0cbc2e5c81cd156] = env->getMethodID(cls, "<init>", "(Ljava/util/SortedSet;)V");
            mids$[mid_getData_a6156df500549a58] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
            mids$[mid_getMeteo_5b3f917bfd70ec40] = env->getMethodID(cls, "getMeteo", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/files/ilrs/CRD$MeteorologicalMeasurement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$Meteo::CRD$Meteo(const ::java::util::SortedSet & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0cbc2e5c81cd156, a0.this$)) {}

        ::java::util::List CRD$Meteo::getData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_a6156df500549a58]));
        }

        ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement CRD$Meteo::getMeteo(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement(env->callObjectMethod(this$, mids$[mid_getMeteo_5b3f917bfd70ec40], a0.this$));
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
        static PyObject *t_CRD$Meteo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$Meteo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$Meteo_init_(t_CRD$Meteo *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$Meteo_getData(t_CRD$Meteo *self);
        static PyObject *t_CRD$Meteo_getMeteo(t_CRD$Meteo *self, PyObject *arg);
        static PyObject *t_CRD$Meteo_get__data(t_CRD$Meteo *self, void *data);
        static PyGetSetDef t_CRD$Meteo__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$Meteo, data),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$Meteo__methods_[] = {
          DECLARE_METHOD(t_CRD$Meteo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Meteo, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Meteo, getData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Meteo, getMeteo, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$Meteo)[] = {
          { Py_tp_methods, t_CRD$Meteo__methods_ },
          { Py_tp_init, (void *) t_CRD$Meteo_init_ },
          { Py_tp_getset, t_CRD$Meteo__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$Meteo)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$Meteo, t_CRD$Meteo, CRD$Meteo);

        void t_CRD$Meteo::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$Meteo), &PY_TYPE_DEF(CRD$Meteo), module, "CRD$Meteo", 0);
        }

        void t_CRD$Meteo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Meteo), "class_", make_descriptor(CRD$Meteo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Meteo), "wrapfn_", make_descriptor(t_CRD$Meteo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Meteo), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$Meteo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$Meteo::initializeClass, 1)))
            return NULL;
          return t_CRD$Meteo::wrap_Object(CRD$Meteo(((t_CRD$Meteo *) arg)->object.this$));
        }
        static PyObject *t_CRD$Meteo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$Meteo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$Meteo_init_(t_CRD$Meteo *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::SortedSet a0((jobject) NULL);
          PyTypeObject **p0;
          CRD$Meteo object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
          {
            INT_CALL(object = CRD$Meteo(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$Meteo_getData(t_CRD$Meteo *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$MeteorologicalMeasurement));
        }

        static PyObject *t_CRD$Meteo_getMeteo(t_CRD$Meteo *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getMeteo(a0));
            return ::org::orekit::files::ilrs::t_CRD$MeteorologicalMeasurement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getMeteo", arg);
          return NULL;
        }

        static PyObject *t_CRD$Meteo_get__data(t_CRD$Meteo *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getData());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *SingleParameterFitter::class$ = NULL;
      jmethodID *SingleParameterFitter::mids$ = NULL;
      bool SingleParameterFitter::live$ = false;
      jdouble SingleParameterFitter::MOON_DRACONIC_PULSATION = (jdouble) 0;
      jdouble SingleParameterFitter::SUN_PULSATION = (jdouble) 0;

      jclass SingleParameterFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/SingleParameterFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cc1f2fc8a56d171b] = env->getMethodID(cls, "<init>", "(DDDI[D)V");
          mids$[mid_createDefaultDut1FitterLongTermPrediction_1395ce7e030f12ba] = env->getStaticMethodID(cls, "createDefaultDut1FitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultDut1FitterShortTermPrediction_1395ce7e030f12ba] = env->getStaticMethodID(cls, "createDefaultDut1FitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultNutationFitterLongTermPrediction_1395ce7e030f12ba] = env->getStaticMethodID(cls, "createDefaultNutationFitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultNutationFitterShortTermPrediction_1395ce7e030f12ba] = env->getStaticMethodID(cls, "createDefaultNutationFitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultPoleFitterLongTermPrediction_1395ce7e030f12ba] = env->getStaticMethodID(cls, "createDefaultPoleFitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultPoleFitterShortTermPrediction_1395ce7e030f12ba] = env->getStaticMethodID(cls, "createDefaultPoleFitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MOON_DRACONIC_PULSATION = env->getStaticDoubleField(cls, "MOON_DRACONIC_PULSATION");
          SUN_PULSATION = env->getStaticDoubleField(cls, "SUN_PULSATION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingleParameterFitter::SingleParameterFitter(jdouble a0, jdouble a1, jdouble a2, jint a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc1f2fc8a56d171b, a0, a1, a2, a3, a4.this$)) {}

      SingleParameterFitter SingleParameterFitter::createDefaultDut1FitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultDut1FitterLongTermPrediction_1395ce7e030f12ba]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultDut1FitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultDut1FitterShortTermPrediction_1395ce7e030f12ba]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultNutationFitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultNutationFitterLongTermPrediction_1395ce7e030f12ba]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultNutationFitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultNutationFitterShortTermPrediction_1395ce7e030f12ba]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultPoleFitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultPoleFitterLongTermPrediction_1395ce7e030f12ba]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultPoleFitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultPoleFitterShortTermPrediction_1395ce7e030f12ba]));
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
      static PyObject *t_SingleParameterFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SingleParameterFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SingleParameterFitter_init_(t_SingleParameterFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterShortTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterShortTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterShortTermPrediction(PyTypeObject *type);

      static PyMethodDef t_SingleParameterFitter__methods_[] = {
        DECLARE_METHOD(t_SingleParameterFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultDut1FitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultDut1FitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultNutationFitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultNutationFitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultPoleFitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultPoleFitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SingleParameterFitter)[] = {
        { Py_tp_methods, t_SingleParameterFitter__methods_ },
        { Py_tp_init, (void *) t_SingleParameterFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SingleParameterFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SingleParameterFitter, t_SingleParameterFitter, SingleParameterFitter);

      void t_SingleParameterFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(SingleParameterFitter), &PY_TYPE_DEF(SingleParameterFitter), module, "SingleParameterFitter", 0);
      }

      void t_SingleParameterFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "class_", make_descriptor(SingleParameterFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "wrapfn_", make_descriptor(t_SingleParameterFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "boxfn_", make_descriptor(boxObject));
        env->getClass(SingleParameterFitter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "MOON_DRACONIC_PULSATION", make_descriptor(SingleParameterFitter::MOON_DRACONIC_PULSATION));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "SUN_PULSATION", make_descriptor(SingleParameterFitter::SUN_PULSATION));
      }

      static PyObject *t_SingleParameterFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SingleParameterFitter::initializeClass, 1)))
          return NULL;
        return t_SingleParameterFitter::wrap_Object(SingleParameterFitter(((t_SingleParameterFitter *) arg)->object.this$));
      }
      static PyObject *t_SingleParameterFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SingleParameterFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SingleParameterFitter_init_(t_SingleParameterFitter *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jint a3;
        JArray< jdouble > a4((jobject) NULL);
        SingleParameterFitter object((jobject) NULL);

        if (!parseArgs(args, "DDDI[D", &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = SingleParameterFitter(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultDut1FitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultDut1FitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultNutationFitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultNutationFitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultPoleFitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultPoleFitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeInterpolator::class$ = NULL;
      jmethodID *TimeInterpolator::mids$ = NULL;
      bool TimeInterpolator::live$ = false;

      jclass TimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getExtrapolationThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_f2f64475e4580546] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_a6156df500549a58] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_1bf58a5a4276965f] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_e3cc35eb10c5d2cd] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_456d9a2f64d6b28d]);
      }

      jint TimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_f2f64475e4580546]);
      }

      ::java::util::List TimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_a6156df500549a58]));
      }

      ::org::orekit::time::TimeStamped TimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_1bf58a5a4276965f], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeStamped TimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_e3cc35eb10c5d2cd], a0.this$, a1.this$));
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
      static PyObject *t_TimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeInterpolator_of_(t_TimeInterpolator *self, PyObject *args);
      static PyObject *t_TimeInterpolator_getExtrapolationThreshold(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_getNbInterpolationPoints(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_getSubInterpolators(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_interpolate(t_TimeInterpolator *self, PyObject *args);
      static PyObject *t_TimeInterpolator_get__extrapolationThreshold(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__nbInterpolationPoints(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__subInterpolators(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__parameters_(t_TimeInterpolator *self, void *data);
      static PyGetSetDef t_TimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_TimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_TimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_TimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeInterpolator)[] = {
        { Py_tp_methods, t_TimeInterpolator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeInterpolator, t_TimeInterpolator, TimeInterpolator);
      PyObject *t_TimeInterpolator::wrap_Object(const TimeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeInterpolator *self = (t_TimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeInterpolator *self = (t_TimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeInterpolator), &PY_TYPE_DEF(TimeInterpolator), module, "TimeInterpolator", 0);
      }

      void t_TimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "class_", make_descriptor(TimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "wrapfn_", make_descriptor(t_TimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeInterpolator::wrap_Object(TimeInterpolator(((t_TimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeInterpolator_of_(t_TimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeInterpolator_getExtrapolationThreshold(t_TimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeInterpolator_getNbInterpolationPoints(t_TimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeInterpolator_getSubInterpolators(t_TimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_TimeInterpolator_interpolate(t_TimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_TimeInterpolator_get__parameters_(t_TimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeInterpolator_get__extrapolationThreshold(t_TimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeInterpolator_get__nbInterpolationPoints(t_TimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeInterpolator_get__subInterpolators(t_TimeInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$LaserConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$LaserConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$LaserConfiguration::mids$ = NULL;
        bool CRDConfiguration$LaserConfiguration::live$ = false;

        jclass CRDConfiguration$LaserConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$LaserConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getBeamDivergence_456d9a2f64d6b28d] = env->getMethodID(cls, "getBeamDivergence", "()D");
            mids$[mid_getLaserId_0090f7797e403f43] = env->getMethodID(cls, "getLaserId", "()Ljava/lang/String;");
            mids$[mid_getLaserType_0090f7797e403f43] = env->getMethodID(cls, "getLaserType", "()Ljava/lang/String;");
            mids$[mid_getNominalFireRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getNominalFireRate", "()D");
            mids$[mid_getPrimaryWavelength_456d9a2f64d6b28d] = env->getMethodID(cls, "getPrimaryWavelength", "()D");
            mids$[mid_getPulseEnergy_456d9a2f64d6b28d] = env->getMethodID(cls, "getPulseEnergy", "()D");
            mids$[mid_getPulseInOutgoingSemiTrain_f2f64475e4580546] = env->getMethodID(cls, "getPulseInOutgoingSemiTrain", "()I");
            mids$[mid_getPulseWidth_456d9a2f64d6b28d] = env->getMethodID(cls, "getPulseWidth", "()D");
            mids$[mid_setBeamDivergence_77e0f9a1f260e2e5] = env->getMethodID(cls, "setBeamDivergence", "(D)V");
            mids$[mid_setLaserId_e939c6558ae8d313] = env->getMethodID(cls, "setLaserId", "(Ljava/lang/String;)V");
            mids$[mid_setLaserType_e939c6558ae8d313] = env->getMethodID(cls, "setLaserType", "(Ljava/lang/String;)V");
            mids$[mid_setNominalFireRate_77e0f9a1f260e2e5] = env->getMethodID(cls, "setNominalFireRate", "(D)V");
            mids$[mid_setPrimaryWavelength_77e0f9a1f260e2e5] = env->getMethodID(cls, "setPrimaryWavelength", "(D)V");
            mids$[mid_setPulseEnergy_77e0f9a1f260e2e5] = env->getMethodID(cls, "setPulseEnergy", "(D)V");
            mids$[mid_setPulseInOutgoingSemiTrain_0a2a1ac2721c0336] = env->getMethodID(cls, "setPulseInOutgoingSemiTrain", "(I)V");
            mids$[mid_setPulseWidth_77e0f9a1f260e2e5] = env->getMethodID(cls, "setPulseWidth", "(D)V");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$LaserConfiguration::CRDConfiguration$LaserConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble CRDConfiguration$LaserConfiguration::getBeamDivergence() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBeamDivergence_456d9a2f64d6b28d]);
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::getLaserId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaserId_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::getLaserType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaserType_0090f7797e403f43]));
        }

        jdouble CRDConfiguration$LaserConfiguration::getNominalFireRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNominalFireRate_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPrimaryWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPrimaryWavelength_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPulseEnergy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseEnergy_456d9a2f64d6b28d]);
        }

        jint CRDConfiguration$LaserConfiguration::getPulseInOutgoingSemiTrain() const
        {
          return env->callIntMethod(this$, mids$[mid_getPulseInOutgoingSemiTrain_f2f64475e4580546]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPulseWidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseWidth_456d9a2f64d6b28d]);
        }

        void CRDConfiguration$LaserConfiguration::setBeamDivergence(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setBeamDivergence_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$LaserConfiguration::setLaserId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLaserId_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$LaserConfiguration::setLaserType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLaserType_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$LaserConfiguration::setNominalFireRate(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNominalFireRate_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPrimaryWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPrimaryWavelength_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseEnergy(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseEnergy_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseInOutgoingSemiTrain(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseInOutgoingSemiTrain_0a2a1ac2721c0336], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseWidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseWidth_77e0f9a1f260e2e5], a0);
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        static PyObject *t_CRDConfiguration$LaserConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$LaserConfiguration_init_(t_CRDConfiguration$LaserConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getBeamDivergence(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserId(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserType(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getNominalFireRate(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseEnergy(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseWidth(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setBeamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setNominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_toCrdString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$LaserConfiguration_toString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserId(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__laserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserType(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__laserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$LaserConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, beamDivergence),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, laserId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, laserType),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, nominalFireRate),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, primaryWavelength),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, pulseEnergy),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, pulseInOutgoingSemiTrain),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, pulseWidth),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$LaserConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getBeamDivergence, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getLaserId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getLaserType, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getNominalFireRate, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPrimaryWavelength, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPulseEnergy, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPulseInOutgoingSemiTrain, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPulseWidth, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setBeamDivergence, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setLaserId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setLaserType, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setNominalFireRate, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPrimaryWavelength, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPulseEnergy, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPulseInOutgoingSemiTrain, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPulseWidth, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$LaserConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$LaserConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$LaserConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$LaserConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$LaserConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$LaserConfiguration, t_CRDConfiguration$LaserConfiguration, CRDConfiguration$LaserConfiguration);

        void t_CRDConfiguration$LaserConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$LaserConfiguration), &PY_TYPE_DEF(CRDConfiguration$LaserConfiguration), module, "CRDConfiguration$LaserConfiguration", 0);
        }

        void t_CRDConfiguration$LaserConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$LaserConfiguration), "class_", make_descriptor(CRDConfiguration$LaserConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$LaserConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$LaserConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$LaserConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$LaserConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$LaserConfiguration::wrap_Object(CRDConfiguration$LaserConfiguration(((t_CRDConfiguration$LaserConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$LaserConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$LaserConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$LaserConfiguration_init_(t_CRDConfiguration$LaserConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$LaserConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$LaserConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getBeamDivergence(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBeamDivergence());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserId(t_CRDConfiguration$LaserConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getLaserId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserType(t_CRDConfiguration$LaserConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getLaserType());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getNominalFireRate(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNominalFireRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPrimaryWavelength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseEnergy(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPulseInOutgoingSemiTrain());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseWidth(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPulseWidth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setBeamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setBeamDivergence(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setBeamDivergence", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setLaserId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLaserId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setLaserType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLaserType", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setNominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNominalFireRate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNominalFireRate", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPrimaryWavelength(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPrimaryWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPulseEnergy(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseEnergy", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setPulseInOutgoingSemiTrain(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseInOutgoingSemiTrain", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPulseWidth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseWidth", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_toCrdString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$LaserConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_toString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$LaserConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBeamDivergence());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setBeamDivergence(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "beamDivergence", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserId(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLaserId());
          return j2p(value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__laserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setLaserId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "laserId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserType(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLaserType());
          return j2p(value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__laserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setLaserType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "laserType", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNominalFireRate());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNominalFireRate(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nominalFireRate", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPrimaryWavelength());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPrimaryWavelength(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "primaryWavelength", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPulseEnergy(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseEnergy", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPulseInOutgoingSemiTrain());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setPulseInOutgoingSemiTrain(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseInOutgoingSemiTrain", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPulseWidth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPulseWidth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseWidth", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonKalmanEstimation.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCorrectedMeasurement_164e77faf6b1d416] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_aaa854c403487cf3] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_f2f64475e4580546] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_6d9adf1d5b463928] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_164e77faf6b1d416] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_a4eb258dd7a1e164] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonKalmanEstimation::PythonKalmanEstimation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonKalmanEstimation::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonKalmanEstimation::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonKalmanEstimation::pythonExtension(jlong a0) const
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
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
#include "org/orekit/propagation/PythonAbstractMatricesHarvester.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAbstractMatricesHarvester::class$ = NULL;
      jmethodID *PythonAbstractMatricesHarvester::mids$ = NULL;
      bool PythonAbstractMatricesHarvester::live$ = false;

      jclass PythonAbstractMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAbstractMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a6f986e64780e110] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_freezeColumnsNames_7ae3461a92a43152] = env->getMethodID(cls, "freezeColumnsNames", "()V");
          mids$[mid_getJacobiansColumnsNames_a6156df500549a58] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractMatricesHarvester::PythonAbstractMatricesHarvester(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::org::orekit::propagation::AbstractMatricesHarvester(env->newObject(initializeClass, &mids$, mid_init$_a6f986e64780e110, a0.this$, a1.this$, a2.this$)) {}

      void PythonAbstractMatricesHarvester::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonAbstractMatricesHarvester::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonAbstractMatricesHarvester::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonAbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractMatricesHarvester_init_(t_PythonAbstractMatricesHarvester *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractMatricesHarvester_finalize(t_PythonAbstractMatricesHarvester *self);
      static PyObject *t_PythonAbstractMatricesHarvester_pythonExtension(t_PythonAbstractMatricesHarvester *self, PyObject *args);
      static void JNICALL t_PythonAbstractMatricesHarvester_freezeColumnsNames0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getOrbitType2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAbstractMatricesHarvester_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractMatricesHarvester_get__self(t_PythonAbstractMatricesHarvester *self, void *data);
      static PyGetSetDef t_PythonAbstractMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractMatricesHarvester, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMatricesHarvester)[] = {
        { Py_tp_methods, t_PythonAbstractMatricesHarvester__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractMatricesHarvester_init_ },
        { Py_tp_getset, t_PythonAbstractMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractMatricesHarvester)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractMatricesHarvester),
        NULL
      };

      DEFINE_TYPE(PythonAbstractMatricesHarvester, t_PythonAbstractMatricesHarvester, PythonAbstractMatricesHarvester);

      void t_PythonAbstractMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractMatricesHarvester), &PY_TYPE_DEF(PythonAbstractMatricesHarvester), module, "PythonAbstractMatricesHarvester", 1);
      }

      void t_PythonAbstractMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "class_", make_descriptor(PythonAbstractMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "wrapfn_", make_descriptor(t_PythonAbstractMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractMatricesHarvester::initializeClass);
        JNINativeMethod methods[] = {
          { "freezeColumnsNames", "()V", (void *) t_PythonAbstractMatricesHarvester_freezeColumnsNames0 },
          { "getJacobiansColumnsNames", "()Ljava/util/List;", (void *) t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1 },
          { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonAbstractMatricesHarvester_getOrbitType2 },
          { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonAbstractMatricesHarvester_getPositionAngleType3 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractMatricesHarvester_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractMatricesHarvester::wrap_Object(PythonAbstractMatricesHarvester(((t_PythonAbstractMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractMatricesHarvester_init_(t_PythonAbstractMatricesHarvester *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        PythonAbstractMatricesHarvester object((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PythonAbstractMatricesHarvester(a0, a1, a2));
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

      static PyObject *t_PythonAbstractMatricesHarvester_finalize(t_PythonAbstractMatricesHarvester *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractMatricesHarvester_pythonExtension(t_PythonAbstractMatricesHarvester *self, PyObject *args)
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

      static void JNICALL t_PythonAbstractMatricesHarvester_freezeColumnsNames0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "freezeColumnsNames", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJacobiansColumnsNames", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getJacobiansColumnsNames", result);
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

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getOrbitType2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getOrbitType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
        {
          throwTypeError("getOrbitType", result);
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

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPositionAngleType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
        {
          throwTypeError("getPositionAngleType", result);
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

      static void JNICALL t_PythonAbstractMatricesHarvester_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractMatricesHarvester_get__self(t_PythonAbstractMatricesHarvester *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *AngularVelocityKey::class$ = NULL;
              jmethodID *AngularVelocityKey::mids$ = NULL;
              bool AngularVelocityKey::live$ = false;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_FRAME = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_X = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_Y = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_Z = NULL;
              AngularVelocityKey *AngularVelocityKey::COMMENT = NULL;
              AngularVelocityKey *AngularVelocityKey::REF_FRAME_A = NULL;
              AngularVelocityKey *AngularVelocityKey::REF_FRAME_B = NULL;

              jclass AngularVelocityKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_9030911c22185a80] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;)Z");
                  mids$[mid_valueOf_60d36d7f6493b886] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;");
                  mids$[mid_values_b8389e2612a4b7de] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL_FRAME = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_X = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_X", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_Y = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_Y", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_Z = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_Z", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  COMMENT = new AngularVelocityKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  REF_FRAME_A = new AngularVelocityKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  REF_FRAME_B = new AngularVelocityKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AngularVelocityKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_9030911c22185a80], a0.this$, a1.this$, a2.this$);
              }

              AngularVelocityKey AngularVelocityKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AngularVelocityKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_60d36d7f6493b886], a0.this$));
              }

              JArray< AngularVelocityKey > AngularVelocityKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AngularVelocityKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b8389e2612a4b7de]));
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
              static PyObject *t_AngularVelocityKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AngularVelocityKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AngularVelocityKey_of_(t_AngularVelocityKey *self, PyObject *args);
              static PyObject *t_AngularVelocityKey_process(t_AngularVelocityKey *self, PyObject *args);
              static PyObject *t_AngularVelocityKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AngularVelocityKey_values(PyTypeObject *type);
              static PyObject *t_AngularVelocityKey_get__parameters_(t_AngularVelocityKey *self, void *data);
              static PyGetSetDef t_AngularVelocityKey__fields_[] = {
                DECLARE_GET_FIELD(t_AngularVelocityKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AngularVelocityKey__methods_[] = {
                DECLARE_METHOD(t_AngularVelocityKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AngularVelocityKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AngularVelocityKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AngularVelocityKey)[] = {
                { Py_tp_methods, t_AngularVelocityKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AngularVelocityKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AngularVelocityKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AngularVelocityKey, t_AngularVelocityKey, AngularVelocityKey);
              PyObject *t_AngularVelocityKey::wrap_Object(const AngularVelocityKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AngularVelocityKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AngularVelocityKey *self = (t_AngularVelocityKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AngularVelocityKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AngularVelocityKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AngularVelocityKey *self = (t_AngularVelocityKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AngularVelocityKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AngularVelocityKey), &PY_TYPE_DEF(AngularVelocityKey), module, "AngularVelocityKey", 0);
              }

              void t_AngularVelocityKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "class_", make_descriptor(AngularVelocityKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "wrapfn_", make_descriptor(t_AngularVelocityKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AngularVelocityKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_FRAME", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_X", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_Y", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_Z", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "COMMENT", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "REF_FRAME_A", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "REF_FRAME_B", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::REF_FRAME_B)));
              }

              static PyObject *t_AngularVelocityKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AngularVelocityKey::initializeClass, 1)))
                  return NULL;
                return t_AngularVelocityKey::wrap_Object(AngularVelocityKey(((t_AngularVelocityKey *) arg)->object.this$));
              }
              static PyObject *t_AngularVelocityKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AngularVelocityKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AngularVelocityKey_of_(t_AngularVelocityKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AngularVelocityKey_process(t_AngularVelocityKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AngularVelocityKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AngularVelocityKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocityKey::valueOf(a0));
                  return t_AngularVelocityKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AngularVelocityKey_values(PyTypeObject *type)
              {
                JArray< AngularVelocityKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocityKey::values());
                return JArray<jobject>(result.this$).wrap(t_AngularVelocityKey::wrap_jobject);
              }
              static PyObject *t_AngularVelocityKey_get__parameters_(t_AngularVelocityKey *self, void *data)
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
#include "org/hipparchus/analysis/integration/FieldRombergIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldRombergIntegrator::class$ = NULL;
        jmethodID *FieldRombergIntegrator::mids$ = NULL;
        bool FieldRombergIntegrator::live$ = false;
        jint FieldRombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldRombergIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldRombergIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_11914f5932256658] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_84b3e2e5209296cd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_e6d4d3215c30992a] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ROMBERG_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "ROMBERG_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_11914f5932256658, a0.this$, a1, a2)) {}

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_84b3e2e5209296cd, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldRombergIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldRombergIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldRombergIntegrator_of_(t_FieldRombergIntegrator *self, PyObject *args);
        static int t_FieldRombergIntegrator_init_(t_FieldRombergIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldRombergIntegrator_get__parameters_(t_FieldRombergIntegrator *self, void *data);
        static PyGetSetDef t_FieldRombergIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldRombergIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldRombergIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldRombergIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldRombergIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldRombergIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldRombergIntegrator)[] = {
          { Py_tp_methods, t_FieldRombergIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldRombergIntegrator_init_ },
          { Py_tp_getset, t_FieldRombergIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldRombergIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldRombergIntegrator, t_FieldRombergIntegrator, FieldRombergIntegrator);
        PyObject *t_FieldRombergIntegrator::wrap_Object(const FieldRombergIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldRombergIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldRombergIntegrator *self = (t_FieldRombergIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldRombergIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldRombergIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldRombergIntegrator *self = (t_FieldRombergIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldRombergIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldRombergIntegrator), &PY_TYPE_DEF(FieldRombergIntegrator), module, "FieldRombergIntegrator", 0);
        }

        void t_FieldRombergIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "class_", make_descriptor(FieldRombergIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "wrapfn_", make_descriptor(t_FieldRombergIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldRombergIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "ROMBERG_MAX_ITERATIONS_COUNT", make_descriptor(FieldRombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldRombergIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldRombergIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldRombergIntegrator::wrap_Object(FieldRombergIntegrator(((t_FieldRombergIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldRombergIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldRombergIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldRombergIntegrator_of_(t_FieldRombergIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldRombergIntegrator_init_(t_FieldRombergIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldRombergIntegrator(a0));
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
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldRombergIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldRombergIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldRombergIntegrator_get__parameters_(t_FieldRombergIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/SaastamoinenModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/SaastamoinenModel.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
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
              mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_init$_cfec5599e7a5e79d] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;)V");
              mids$[mid_init$_90f6d74ff6e11b16] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getLowElevationThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getLowElevationThreshold", "()D");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_f7dd8a663f4b9798] = env->getStaticMethodID(cls, "getStandardModel", "()Lorg/orekit/models/earth/troposphere/SaastamoinenModel;");
              mids$[mid_pathDelay_0326270bf0e8ed17] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_af133f80cdba1dc2] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_setLowElevationThreshold_77e0f9a1f260e2e5] = env->getMethodID(cls, "setLowElevationThreshold", "(D)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_LOW_ELEVATION_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_LOW_ELEVATION_THRESHOLD");
              DELTA_R_FILE_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DELTA_R_FILE_NAME", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cfec5599e7a5e79d, a0, a1, a2, a3.this$)) {}

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3, const ::org::orekit::data::DataProvidersManager & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_90f6d74ff6e11b16, a0, a1, a2, a3.this$, a4.this$)) {}

          jdouble SaastamoinenModel::getLowElevationThreshold() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowElevationThreshold_456d9a2f64d6b28d]);
          }

          ::java::util::List SaastamoinenModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          SaastamoinenModel SaastamoinenModel::getStandardModel()
          {
            jclass cls = env->getClass(initializeClass);
            return SaastamoinenModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_f7dd8a663f4b9798]));
          }

          ::org::hipparchus::CalculusFieldElement SaastamoinenModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0326270bf0e8ed17], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble SaastamoinenModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_af133f80cdba1dc2], a0, a1.this$, a2.this$, a3.this$);
          }

          void SaastamoinenModel::setLowElevationThreshold(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLowElevationThreshold_77e0f9a1f260e2e5], a0);
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
#include "org/orekit/forces/gravity/HolmesFeatherstoneAttractionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *HolmesFeatherstoneAttractionModel::class$ = NULL;
        jmethodID *HolmesFeatherstoneAttractionModel::mids$ = NULL;
        bool HolmesFeatherstoneAttractionModel::live$ = false;

        jclass HolmesFeatherstoneAttractionModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/HolmesFeatherstoneAttractionModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ec879b01512fab89] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getMu_e912d21057defe63] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getTideSystem_b3b39360f3c8a6ac] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
            mids$[mid_gradient_43a4a80712c0c6fe] = env->getMethodID(cls, "gradient", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)[D");
            mids$[mid_gradient_7bb320d4b9984b28] = env->getMethodID(cls, "gradient", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_nonCentralPart_19fa8b376132ce5a] = env->getMethodID(cls, "nonCentralPart", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)D");
            mids$[mid_value_19fa8b376132ce5a] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HolmesFeatherstoneAttractionModel::HolmesFeatherstoneAttractionModel(const ::org::orekit::frames::Frame & a0, const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ec879b01512fab89, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D HolmesFeatherstoneAttractionModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D HolmesFeatherstoneAttractionModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        jboolean HolmesFeatherstoneAttractionModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        jdouble HolmesFeatherstoneAttractionModel::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        jdouble HolmesFeatherstoneAttractionModel::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_e912d21057defe63], a0.this$);
        }

        ::java::util::List HolmesFeatherstoneAttractionModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        ::org::orekit::forces::gravity::potential::TideSystem HolmesFeatherstoneAttractionModel::getTideSystem() const
        {
          return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_b3b39360f3c8a6ac]));
        }

        JArray< jdouble > HolmesFeatherstoneAttractionModel::gradient(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_43a4a80712c0c6fe], a0.this$, a1.this$, a2));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HolmesFeatherstoneAttractionModel::gradient(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_gradient_7bb320d4b9984b28], a0.this$, a1.this$, a2.this$));
        }

        jdouble HolmesFeatherstoneAttractionModel::nonCentralPart(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_nonCentralPart_19fa8b376132ce5a], a0.this$, a1.this$, a2);
        }

        jdouble HolmesFeatherstoneAttractionModel::value(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_19fa8b376132ce5a], a0.this$, a1.this$, a2);
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
        static PyObject *t_HolmesFeatherstoneAttractionModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HolmesFeatherstoneAttractionModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HolmesFeatherstoneAttractionModel_init_(t_HolmesFeatherstoneAttractionModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HolmesFeatherstoneAttractionModel_acceleration(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_dependsOnPositionOnly(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getMu(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getParametersDrivers(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getTideSystem(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_gradient(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_nonCentralPart(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_value(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__mu(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__parametersDrivers(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__tideSystem(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyGetSetDef t_HolmesFeatherstoneAttractionModel__fields_[] = {
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, mu),
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, parametersDrivers),
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, tideSystem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HolmesFeatherstoneAttractionModel__methods_[] = {
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getMu, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getTideSystem, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, gradient, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, nonCentralPart, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HolmesFeatherstoneAttractionModel)[] = {
          { Py_tp_methods, t_HolmesFeatherstoneAttractionModel__methods_ },
          { Py_tp_init, (void *) t_HolmesFeatherstoneAttractionModel_init_ },
          { Py_tp_getset, t_HolmesFeatherstoneAttractionModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HolmesFeatherstoneAttractionModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HolmesFeatherstoneAttractionModel, t_HolmesFeatherstoneAttractionModel, HolmesFeatherstoneAttractionModel);

        void t_HolmesFeatherstoneAttractionModel::install(PyObject *module)
        {
          installType(&PY_TYPE(HolmesFeatherstoneAttractionModel), &PY_TYPE_DEF(HolmesFeatherstoneAttractionModel), module, "HolmesFeatherstoneAttractionModel", 0);
        }

        void t_HolmesFeatherstoneAttractionModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "class_", make_descriptor(HolmesFeatherstoneAttractionModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "wrapfn_", make_descriptor(t_HolmesFeatherstoneAttractionModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HolmesFeatherstoneAttractionModel::initializeClass, 1)))
            return NULL;
          return t_HolmesFeatherstoneAttractionModel::wrap_Object(HolmesFeatherstoneAttractionModel(((t_HolmesFeatherstoneAttractionModel *) arg)->object.this$));
        }
        static PyObject *t_HolmesFeatherstoneAttractionModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HolmesFeatherstoneAttractionModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HolmesFeatherstoneAttractionModel_init_(t_HolmesFeatherstoneAttractionModel *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a1((jobject) NULL);
          HolmesFeatherstoneAttractionModel object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
          {
            INT_CALL(object = HolmesFeatherstoneAttractionModel(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_acceleration(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
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

        static PyObject *t_HolmesFeatherstoneAttractionModel_dependsOnPositionOnly(t_HolmesFeatherstoneAttractionModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getMu(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMu(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMu", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getParametersDrivers(t_HolmesFeatherstoneAttractionModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getTideSystem(t_HolmesFeatherstoneAttractionModel *self)
        {
          ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTideSystem());
          return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_gradient(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.gradient(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.gradient(a0, a1, a2));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_nonCentralPart(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.nonCentralPart(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "nonCentralPart", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_value(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.value(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__mu(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__parametersDrivers(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__tideSystem(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTideSystem());
          return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *Orbit::class$ = NULL;
      jmethodID *Orbit::mids$ = NULL;
      bool Orbit::live$ = false;

      jclass Orbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/Orbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addKeplerContribution_c8fa6ba58ef7126b] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_456d9a2f64d6b28d] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_456d9a2f64d6b28d] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_456d9a2f64d6b28d] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_456d9a2f64d6b28d] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_456d9a2f64d6b28d] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getJacobianWrtCartesian_1e70e195d3be115a] = env->getMethodID(cls, "getJacobianWrtCartesian", "(Lorg/orekit/orbits/PositionAngleType;[[D)V");
          mids$[mid_getJacobianWrtParameters_1e70e195d3be115a] = env->getMethodID(cls, "getJacobianWrtParameters", "(Lorg/orekit/orbits/PositionAngleType;[[D)V");
          mids$[mid_getKeplerianMeanMotion_456d9a2f64d6b28d] = env->getMethodID(cls, "getKeplerianMeanMotion", "()D");
          mids$[mid_getKeplerianPeriod_456d9a2f64d6b28d] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
          mids$[mid_getLE_456d9a2f64d6b28d] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_456d9a2f64d6b28d] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_456d9a2f64d6b28d] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getMeanAnomalyDotWrtA_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanAnomalyDotWrtA", "()D");
          mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
          mids$[mid_getPVCoordinates_6890805957bea2cd] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_f8a365e30a3ddce1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_17a952530a808943] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_b070efa02e5e2595] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_e470b6d9e0d979db] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_isElliptical_e470b6d9e0d979db] = env->getMethodID(cls, "isElliptical", "()Z");
          mids$[mid_shiftedBy_77a92f9d04f61592] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;");
          mids$[mid_hasNonKeplerianAcceleration_57ea23c66733f0e7] = env->getStaticMethodID(cls, "hasNonKeplerianAcceleration", "(Lorg/orekit/utils/PVCoordinates;D)Z");
          mids$[mid_initPosition_17a952530a808943] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_6890805957bea2cd] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");
          mids$[mid_fillHalfRow_050d8d25ba35a5f3] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_8da915ecf4a8ad9b] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_b14fd046956c3e68] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_bd8ca9ced9343928] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_850954c00b008227] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_9a72497bf5502339] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Orbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_c8fa6ba58ef7126b], a0.this$, a1, a2.this$);
      }

      jdouble Orbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_456d9a2f64d6b28d]);
      }

      ::org::orekit::time::AbsoluteDate Orbit::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      jdouble Orbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_456d9a2f64d6b28d]);
      }

      ::org::orekit::frames::Frame Orbit::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      jdouble Orbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_456d9a2f64d6b28d]);
      }

      void Orbit::getJacobianWrtCartesian(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtCartesian_1e70e195d3be115a], a0.this$, a1.this$);
      }

      void Orbit::getJacobianWrtParameters(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtParameters_1e70e195d3be115a], a0.this$, a1.this$);
      }

      jdouble Orbit::getKeplerianMeanMotion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianMeanMotion_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getKeplerianPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getMeanAnomalyDotWrtA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomalyDotWrtA_456d9a2f64d6b28d]);
      }

      jdouble Orbit::getMu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6890805957bea2cd]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_f8a365e30a3ddce1], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_20557c175f7cd899], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Orbit::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Orbit::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_b070efa02e5e2595], a0.this$));
      }

      ::org::orekit::orbits::OrbitType Orbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_63ea5cd020bf7bf1]));
      }

      jboolean Orbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_e470b6d9e0d979db]);
      }

      jboolean Orbit::isElliptical() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isElliptical_e470b6d9e0d979db]);
      }

      Orbit Orbit::shiftedBy(jdouble a0) const
      {
        return Orbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_77a92f9d04f61592], a0));
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
      static PyObject *t_Orbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Orbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Orbit_addKeplerContribution(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getA(t_Orbit *self);
      static PyObject *t_Orbit_getADot(t_Orbit *self);
      static PyObject *t_Orbit_getDate(t_Orbit *self);
      static PyObject *t_Orbit_getE(t_Orbit *self);
      static PyObject *t_Orbit_getEDot(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEx(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialExDot(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEy(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEyDot(t_Orbit *self);
      static PyObject *t_Orbit_getFrame(t_Orbit *self);
      static PyObject *t_Orbit_getHx(t_Orbit *self);
      static PyObject *t_Orbit_getHxDot(t_Orbit *self);
      static PyObject *t_Orbit_getHy(t_Orbit *self);
      static PyObject *t_Orbit_getHyDot(t_Orbit *self);
      static PyObject *t_Orbit_getI(t_Orbit *self);
      static PyObject *t_Orbit_getIDot(t_Orbit *self);
      static PyObject *t_Orbit_getJacobianWrtCartesian(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getJacobianWrtParameters(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getKeplerianMeanMotion(t_Orbit *self);
      static PyObject *t_Orbit_getKeplerianPeriod(t_Orbit *self);
      static PyObject *t_Orbit_getLE(t_Orbit *self);
      static PyObject *t_Orbit_getLEDot(t_Orbit *self);
      static PyObject *t_Orbit_getLM(t_Orbit *self);
      static PyObject *t_Orbit_getLMDot(t_Orbit *self);
      static PyObject *t_Orbit_getLv(t_Orbit *self);
      static PyObject *t_Orbit_getLvDot(t_Orbit *self);
      static PyObject *t_Orbit_getMeanAnomalyDotWrtA(t_Orbit *self);
      static PyObject *t_Orbit_getMu(t_Orbit *self);
      static PyObject *t_Orbit_getPVCoordinates(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getPosition(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getType(t_Orbit *self);
      static PyObject *t_Orbit_hasDerivatives(t_Orbit *self);
      static PyObject *t_Orbit_isElliptical(t_Orbit *self);
      static PyObject *t_Orbit_shiftedBy(t_Orbit *self, PyObject *arg);
      static PyObject *t_Orbit_get__a(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__aDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__date(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__e(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__eDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__elliptical(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEx(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialExDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEy(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEyDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__frame(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hx(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hxDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hy(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hyDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__i(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__iDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__keplerianMeanMotion(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__keplerianPeriod(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lE(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lEDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lM(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lMDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lv(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lvDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__meanAnomalyDotWrtA(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__mu(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__pVCoordinates(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__position(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__type(t_Orbit *self, void *data);
      static PyGetSetDef t_Orbit__fields_[] = {
        DECLARE_GET_FIELD(t_Orbit, a),
        DECLARE_GET_FIELD(t_Orbit, aDot),
        DECLARE_GET_FIELD(t_Orbit, date),
        DECLARE_GET_FIELD(t_Orbit, e),
        DECLARE_GET_FIELD(t_Orbit, eDot),
        DECLARE_GET_FIELD(t_Orbit, elliptical),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEx),
        DECLARE_GET_FIELD(t_Orbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEy),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_Orbit, frame),
        DECLARE_GET_FIELD(t_Orbit, hx),
        DECLARE_GET_FIELD(t_Orbit, hxDot),
        DECLARE_GET_FIELD(t_Orbit, hy),
        DECLARE_GET_FIELD(t_Orbit, hyDot),
        DECLARE_GET_FIELD(t_Orbit, i),
        DECLARE_GET_FIELD(t_Orbit, iDot),
        DECLARE_GET_FIELD(t_Orbit, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_Orbit, keplerianPeriod),
        DECLARE_GET_FIELD(t_Orbit, lE),
        DECLARE_GET_FIELD(t_Orbit, lEDot),
        DECLARE_GET_FIELD(t_Orbit, lM),
        DECLARE_GET_FIELD(t_Orbit, lMDot),
        DECLARE_GET_FIELD(t_Orbit, lv),
        DECLARE_GET_FIELD(t_Orbit, lvDot),
        DECLARE_GET_FIELD(t_Orbit, meanAnomalyDotWrtA),
        DECLARE_GET_FIELD(t_Orbit, mu),
        DECLARE_GET_FIELD(t_Orbit, pVCoordinates),
        DECLARE_GET_FIELD(t_Orbit, position),
        DECLARE_GET_FIELD(t_Orbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Orbit__methods_[] = {
        DECLARE_METHOD(t_Orbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Orbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Orbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getA, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getADot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getE, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialExDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEyDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHx, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHxDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHy, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHyDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getI, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getIDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getJacobianWrtCartesian, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getJacobianWrtParameters, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLE, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLM, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLMDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLv, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLvDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getMeanAnomalyDotWrtA, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getMu, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getType, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, hasDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, isElliptical, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, shiftedBy, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Orbit)[] = {
        { Py_tp_methods, t_Orbit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Orbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Orbit)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Orbit, t_Orbit, Orbit);

      void t_Orbit::install(PyObject *module)
      {
        installType(&PY_TYPE(Orbit), &PY_TYPE_DEF(Orbit), module, "Orbit", 0);
      }

      void t_Orbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "class_", make_descriptor(Orbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "wrapfn_", make_descriptor(t_Orbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Orbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Orbit::initializeClass, 1)))
          return NULL;
        return t_Orbit::wrap_Object(Orbit(((t_Orbit *) arg)->object.this$));
      }
      static PyObject *t_Orbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Orbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Orbit_addKeplerContribution(t_Orbit *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", args);
        return NULL;
      }

      static PyObject *t_Orbit_getA(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getADot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getADot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getDate(t_Orbit *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Orbit_getE(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEx(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialExDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEy(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEyDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getFrame(t_Orbit *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Orbit_getHx(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHxDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHxDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHy(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHyDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getI(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getI());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getIDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getIDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getJacobianWrtCartesian(t_Orbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobianWrtCartesian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtCartesian", args);
        return NULL;
      }

      static PyObject *t_Orbit_getJacobianWrtParameters(t_Orbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobianWrtParameters(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtParameters", args);
        return NULL;
      }

      static PyObject *t_Orbit_getKeplerianMeanMotion(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getKeplerianPeriod(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLE(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLEDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLM(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLMDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLv(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLv());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLvDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLvDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getMeanAnomalyDotWrtA(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomalyDotWrtA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getMu(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMu());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getPVCoordinates(t_Orbit *self, PyObject *args)
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

      static PyObject *t_Orbit_getPosition(t_Orbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_Orbit_getType(t_Orbit *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_Orbit_hasDerivatives(t_Orbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasDerivatives());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Orbit_isElliptical(t_Orbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isElliptical());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Orbit_shiftedBy(t_Orbit *self, PyObject *arg)
      {
        jdouble a0;
        Orbit result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Orbit::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Orbit_get__a(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__aDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__date(t_Orbit *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__e(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__eDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__elliptical(t_Orbit *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isElliptical());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Orbit_get__equinoctialEx(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialExDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialEy(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialEyDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__frame(t_Orbit *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__hx(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hxDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hy(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hyDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__i(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__iDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__keplerianMeanMotion(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__keplerianPeriod(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lE(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lEDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lM(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lMDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lv(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lvDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__meanAnomalyDotWrtA(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomalyDotWrtA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__mu(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMu());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__pVCoordinates(t_Orbit *self, void *data)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__position(t_Orbit *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__type(t_Orbit *self, void *data)
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
#include "org/hipparchus/util/JulierUnscentedTransform.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *JulierUnscentedTransform::class$ = NULL;
      jmethodID *JulierUnscentedTransform::mids$ = NULL;
      bool JulierUnscentedTransform::live$ = false;
      jdouble JulierUnscentedTransform::DEFAULT_KAPPA = (jdouble) 0;

      jclass JulierUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/JulierUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_getWc_6d9adf1d5b463928] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_6d9adf1d5b463928] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_456d9a2f64d6b28d] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_KAPPA = env->getStaticDoubleField(cls, "DEFAULT_KAPPA");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JulierUnscentedTransform::JulierUnscentedTransform(jint a0) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      JulierUnscentedTransform::JulierUnscentedTransform(jint a0, jdouble a1) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

      ::org::hipparchus::linear::RealVector JulierUnscentedTransform::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_6d9adf1d5b463928]));
      }

      ::org::hipparchus::linear::RealVector JulierUnscentedTransform::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_6d9adf1d5b463928]));
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
      static PyObject *t_JulierUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JulierUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JulierUnscentedTransform_init_(t_JulierUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JulierUnscentedTransform_getWc(t_JulierUnscentedTransform *self, PyObject *args);
      static PyObject *t_JulierUnscentedTransform_getWm(t_JulierUnscentedTransform *self, PyObject *args);
      static PyObject *t_JulierUnscentedTransform_get__wc(t_JulierUnscentedTransform *self, void *data);
      static PyObject *t_JulierUnscentedTransform_get__wm(t_JulierUnscentedTransform *self, void *data);
      static PyGetSetDef t_JulierUnscentedTransform__fields_[] = {
        DECLARE_GET_FIELD(t_JulierUnscentedTransform, wc),
        DECLARE_GET_FIELD(t_JulierUnscentedTransform, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JulierUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_JulierUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JulierUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JulierUnscentedTransform, getWc, METH_VARARGS),
        DECLARE_METHOD(t_JulierUnscentedTransform, getWm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JulierUnscentedTransform)[] = {
        { Py_tp_methods, t_JulierUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_JulierUnscentedTransform_init_ },
        { Py_tp_getset, t_JulierUnscentedTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JulierUnscentedTransform)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::AbstractUnscentedTransform),
        NULL
      };

      DEFINE_TYPE(JulierUnscentedTransform, t_JulierUnscentedTransform, JulierUnscentedTransform);

      void t_JulierUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(JulierUnscentedTransform), &PY_TYPE_DEF(JulierUnscentedTransform), module, "JulierUnscentedTransform", 0);
      }

      void t_JulierUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "class_", make_descriptor(JulierUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "wrapfn_", make_descriptor(t_JulierUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "boxfn_", make_descriptor(boxObject));
        env->getClass(JulierUnscentedTransform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "DEFAULT_KAPPA", make_descriptor(JulierUnscentedTransform::DEFAULT_KAPPA));
      }

      static PyObject *t_JulierUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JulierUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_JulierUnscentedTransform::wrap_Object(JulierUnscentedTransform(((t_JulierUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_JulierUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JulierUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JulierUnscentedTransform_init_(t_JulierUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            JulierUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = JulierUnscentedTransform(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            JulierUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = JulierUnscentedTransform(a0, a1));
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

      static PyObject *t_JulierUnscentedTransform_getWc(t_JulierUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWc());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(JulierUnscentedTransform), (PyObject *) self, "getWc", args, 2);
      }

      static PyObject *t_JulierUnscentedTransform_getWm(t_JulierUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWm());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(JulierUnscentedTransform), (PyObject *) self, "getWm", args, 2);
      }

      static PyObject *t_JulierUnscentedTransform_get__wc(t_JulierUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_JulierUnscentedTransform_get__wm(t_JulierUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunctionLagrangeForm::class$ = NULL;
        jmethodID *PolynomialFunctionLagrangeForm::mids$ = NULL;
        bool PolynomialFunctionLagrangeForm::live$ = false;

        jclass PolynomialFunctionLagrangeForm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0d03c8a1d7f56f02] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_degree_f2f64475e4580546] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_evaluate_568f42d2326d41b5] = env->getStaticMethodID(cls, "evaluate", "([D[DD)D");
            mids$[mid_getCoefficients_7cdc325af0834901] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_getInterpolatingPoints_7cdc325af0834901] = env->getMethodID(cls, "getInterpolatingPoints", "()[D");
            mids$[mid_getInterpolatingValues_7cdc325af0834901] = env->getMethodID(cls, "getInterpolatingValues", "()[D");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_verifyInterpolationArray_265c50ede9c0384f] = env->getStaticMethodID(cls, "verifyInterpolationArray", "([D[DZ)Z");
            mids$[mid_computeCoefficients_7ae3461a92a43152] = env->getMethodID(cls, "computeCoefficients", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunctionLagrangeForm::PolynomialFunctionLagrangeForm(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d03c8a1d7f56f02, a0.this$, a1.this$)) {}

        jint PolynomialFunctionLagrangeForm::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_f2f64475e4580546]);
        }

        jdouble PolynomialFunctionLagrangeForm::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_evaluate_568f42d2326d41b5], a0.this$, a1.this$, a2);
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_7cdc325af0834901]));
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getInterpolatingPoints() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInterpolatingPoints_7cdc325af0834901]));
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getInterpolatingValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInterpolatingValues_7cdc325af0834901]));
        }

        jdouble PolynomialFunctionLagrangeForm::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        jboolean PolynomialFunctionLagrangeForm::verifyInterpolationArray(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_verifyInterpolationArray_265c50ede9c0384f], a0.this$, a1.this$, a2);
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
        static PyObject *t_PolynomialFunctionLagrangeForm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunctionLagrangeForm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunctionLagrangeForm_init_(t_PolynomialFunctionLagrangeForm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunctionLagrangeForm_degree(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_evaluate(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionLagrangeForm_getCoefficients(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingPoints(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingValues(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_value(t_PolynomialFunctionLagrangeForm *self, PyObject *arg);
        static PyObject *t_PolynomialFunctionLagrangeForm_verifyInterpolationArray(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__coefficients(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingPoints(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingValues(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyGetSetDef t_PolynomialFunctionLagrangeForm__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, coefficients),
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, interpolatingPoints),
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, interpolatingValues),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialFunctionLagrangeForm__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, degree, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, evaluate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getInterpolatingPoints, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getInterpolatingValues, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, value, METH_O),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, verifyInterpolationArray, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunctionLagrangeForm)[] = {
          { Py_tp_methods, t_PolynomialFunctionLagrangeForm__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunctionLagrangeForm_init_ },
          { Py_tp_getset, t_PolynomialFunctionLagrangeForm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunctionLagrangeForm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunctionLagrangeForm, t_PolynomialFunctionLagrangeForm, PolynomialFunctionLagrangeForm);

        void t_PolynomialFunctionLagrangeForm::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunctionLagrangeForm), &PY_TYPE_DEF(PolynomialFunctionLagrangeForm), module, "PolynomialFunctionLagrangeForm", 0);
        }

        void t_PolynomialFunctionLagrangeForm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "class_", make_descriptor(PolynomialFunctionLagrangeForm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "wrapfn_", make_descriptor(t_PolynomialFunctionLagrangeForm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunctionLagrangeForm::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunctionLagrangeForm::wrap_Object(PolynomialFunctionLagrangeForm(((t_PolynomialFunctionLagrangeForm *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunctionLagrangeForm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunctionLagrangeForm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunctionLagrangeForm_init_(t_PolynomialFunctionLagrangeForm *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          PolynomialFunctionLagrangeForm object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = PolynomialFunctionLagrangeForm(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_degree(t_PolynomialFunctionLagrangeForm *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_evaluate(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm::evaluate(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "evaluate", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getCoefficients(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingPoints(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolatingPoints());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingValues(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolatingValues());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_value(t_PolynomialFunctionLagrangeForm *self, PyObject *arg)
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

        static PyObject *t_PolynomialFunctionLagrangeForm_verifyInterpolationArray(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean a2;
          jboolean result;

          if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm::verifyInterpolationArray(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "verifyInterpolationArray", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__coefficients(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingPoints(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolatingPoints());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingValues(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolatingValues());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceHistory::class$ = NULL;
              jmethodID *AttitudeCovarianceHistory::mids$ = NULL;
              bool AttitudeCovarianceHistory::live$ = false;

              jclass AttitudeCovarianceHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_186db5cf0e2febaa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getCovariances_a6156df500549a58] = env->getMethodID(cls, "getCovariances", "()Ljava/util/List;");
                  mids$[mid_getMetadata_27ea627e4253db55] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovarianceHistory::AttitudeCovarianceHistory(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_186db5cf0e2febaa, a0.this$, a1.this$)) {}

              ::java::util::List AttitudeCovarianceHistory::getCovariances() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovariances_a6156df500549a58]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata AttitudeCovarianceHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_27ea627e4253db55]));
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
              static PyObject *t_AttitudeCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovarianceHistory_init_(t_AttitudeCovarianceHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovarianceHistory_getCovariances(t_AttitudeCovarianceHistory *self);
              static PyObject *t_AttitudeCovarianceHistory_getMetadata(t_AttitudeCovarianceHistory *self);
              static PyObject *t_AttitudeCovarianceHistory_get__covariances(t_AttitudeCovarianceHistory *self, void *data);
              static PyObject *t_AttitudeCovarianceHistory_get__metadata(t_AttitudeCovarianceHistory *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistory__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistory, covariances),
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistory__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, getCovariances, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistory)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistory__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovarianceHistory_init_ },
                { Py_tp_getset, t_AttitudeCovarianceHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistory, t_AttitudeCovarianceHistory, AttitudeCovarianceHistory);

              void t_AttitudeCovarianceHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistory), &PY_TYPE_DEF(AttitudeCovarianceHistory), module, "AttitudeCovarianceHistory", 0);
              }

              void t_AttitudeCovarianceHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "class_", make_descriptor(AttitudeCovarianceHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistory::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistory::wrap_Object(AttitudeCovarianceHistory(((t_AttitudeCovarianceHistory *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovarianceHistory_init_(t_AttitudeCovarianceHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AttitudeCovarianceHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AttitudeCovarianceHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeCovarianceHistory_getCovariances(t_AttitudeCovarianceHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeCovariance));
              }

              static PyObject *t_AttitudeCovarianceHistory_getMetadata(t_AttitudeCovarianceHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistory_get__covariances(t_AttitudeCovarianceHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovarianceHistory_get__metadata(t_AttitudeCovarianceHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceHistoryMetadata::wrap_Object(value);
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
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SmoothedObservationDataSet::class$ = NULL;
          jmethodID *SmoothedObservationDataSet::mids$ = NULL;
          bool SmoothedObservationDataSet::live$ = false;

          jclass SmoothedObservationDataSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d87ddaca55673afd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_getDataSet_e95d327b5db5c261] = env->getMethodID(cls, "getDataSet", "()Lorg/orekit/files/rinex/observation/ObservationDataSet;");
              mids$[mid_getSmoothedData_4c817b38ab32e011] = env->getMethodID(cls, "getSmoothedData", "()Lorg/orekit/files/rinex/observation/ObservationData;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SmoothedObservationDataSet::SmoothedObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationDataSet & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d87ddaca55673afd, a0.this$, a1.this$)) {}

          ::org::orekit::files::rinex::observation::ObservationDataSet SmoothedObservationDataSet::getDataSet() const
          {
            return ::org::orekit::files::rinex::observation::ObservationDataSet(env->callObjectMethod(this$, mids$[mid_getDataSet_e95d327b5db5c261]));
          }

          ::org::orekit::files::rinex::observation::ObservationData SmoothedObservationDataSet::getSmoothedData() const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_getSmoothedData_4c817b38ab32e011]));
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
        namespace filtering {
          static PyObject *t_SmoothedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SmoothedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SmoothedObservationDataSet_init_(t_SmoothedObservationDataSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SmoothedObservationDataSet_getDataSet(t_SmoothedObservationDataSet *self);
          static PyObject *t_SmoothedObservationDataSet_getSmoothedData(t_SmoothedObservationDataSet *self);
          static PyObject *t_SmoothedObservationDataSet_get__dataSet(t_SmoothedObservationDataSet *self, void *data);
          static PyObject *t_SmoothedObservationDataSet_get__smoothedData(t_SmoothedObservationDataSet *self, void *data);
          static PyGetSetDef t_SmoothedObservationDataSet__fields_[] = {
            DECLARE_GET_FIELD(t_SmoothedObservationDataSet, dataSet),
            DECLARE_GET_FIELD(t_SmoothedObservationDataSet, smoothedData),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SmoothedObservationDataSet__methods_[] = {
            DECLARE_METHOD(t_SmoothedObservationDataSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, getDataSet, METH_NOARGS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, getSmoothedData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SmoothedObservationDataSet)[] = {
            { Py_tp_methods, t_SmoothedObservationDataSet__methods_ },
            { Py_tp_init, (void *) t_SmoothedObservationDataSet_init_ },
            { Py_tp_getset, t_SmoothedObservationDataSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SmoothedObservationDataSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SmoothedObservationDataSet, t_SmoothedObservationDataSet, SmoothedObservationDataSet);

          void t_SmoothedObservationDataSet::install(PyObject *module)
          {
            installType(&PY_TYPE(SmoothedObservationDataSet), &PY_TYPE_DEF(SmoothedObservationDataSet), module, "SmoothedObservationDataSet", 0);
          }

          void t_SmoothedObservationDataSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "class_", make_descriptor(SmoothedObservationDataSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "wrapfn_", make_descriptor(t_SmoothedObservationDataSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SmoothedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SmoothedObservationDataSet::initializeClass, 1)))
              return NULL;
            return t_SmoothedObservationDataSet::wrap_Object(SmoothedObservationDataSet(((t_SmoothedObservationDataSet *) arg)->object.this$));
          }
          static PyObject *t_SmoothedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SmoothedObservationDataSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SmoothedObservationDataSet_init_(t_SmoothedObservationDataSet *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationDataSet a1((jobject) NULL);
            SmoothedObservationDataSet object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SmoothedObservationDataSet(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SmoothedObservationDataSet_getDataSet(t_SmoothedObservationDataSet *self)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataSet());
            return ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(result);
          }

          static PyObject *t_SmoothedObservationDataSet_getSmoothedData(t_SmoothedObservationDataSet *self)
          {
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);
            OBJ_CALL(result = self->object.getSmoothedData());
            return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
          }

          static PyObject *t_SmoothedObservationDataSet_get__dataSet(t_SmoothedObservationDataSet *self, void *data)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataSet());
            return ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(value);
          }

          static PyObject *t_SmoothedObservationDataSet_get__smoothedData(t_SmoothedObservationDataSet *self, void *data)
          {
            ::org::orekit::files::rinex::observation::ObservationData value((jobject) NULL);
            OBJ_CALL(value = self->object.getSmoothedData());
            return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(value);
          }
        }
      }
    }
  }
}
